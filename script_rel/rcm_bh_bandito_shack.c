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
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	struct<341> Local_26 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
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
	var uLocal_407 = -1;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	bool bLocal_410 = false;
	int iLocal_411 = 0;
	struct<11> Local_412[3];
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	vector3 vLocal_453 = { 0f, 0f, 0f };
	int iLocal_456[2] = { 0, 0 };
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465[2] = { 0, 0 };
	int iLocal_468[2] = { 0, 0 };
	int iLocal_471[2] = { 0, 0 };
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	bool bLocal_477 = false;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	var uLocal_481 = -1;
	var uLocal_482 = 0;
	var uLocal_483 = -1;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = -1;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 1073741824;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 1;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	struct<17> Local_501[2];
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	vector3 vLocal_539 = { 0f, 0f, 0f };
	float fLocal_542 = 0f;
	int iLocal_543 = 0;
	var uLocal_544 = -1;
	var uLocal_545 = 0;
	var uLocal_546 = -1;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = -1;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 1073741824;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 1;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	struct<17> Local_564[2];
	int iLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	int iLocal_606 = 0;
	struct<9> Local_607[2];
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	int iLocal_635 = 0;
	int iLocal_636 = 0;
	int iLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	char[] cLocal_641[8] = 0;
	vector3 vLocal_642[10] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_673 = 0;
	int iLocal_674 = 0;
	vector3 vLocal_675 = { 0f, 0f, 0f };
	vector3 vLocal_678 = { 0f, 0f, 0f };
	vector3 vLocal_681[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	bool bLocal_691 = false;
	int iLocal_692 = 0;
	int iLocal_693 = 0;
	int iLocal_694 = 0;
	vector3 vLocal_695 = { 0f, 0f, 0f };
	float fLocal_698 = 0f;
	int iLocal_699 = 0;
	int iLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	int iLocal_709 = 0;
	char[] cLocal_710[8] = 0;
	char[] cLocal_711[8] = 0;
	int iLocal_712 = 0;
	int iLocal_713 = 0;
	vector3 vLocal_714 = { 0f, 0f, 0f };
	int iLocal_717 = 0;
	struct<11> Local_718[2];
	int iLocal_741 = 0;
	bool bLocal_742 = false;
	int iLocal_743 = 0;
	int iLocal_744 = 0;
	int iLocal_745 = 0;
	struct<21> Local_746[2];
	struct<35> Local_789[2];
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	int iLocal_863 = 0;
	struct<9> Local_864[3];
	int iLocal_892 = 0;
	int iLocal_893 = 0;
	int iLocal_894 = 0;
	int iLocal_895 = 0;
	int iLocal_896 = 0;
	int iLocal_897 = 0;
	int iLocal_898 = 0;
	bool bLocal_899 = false;
	bool bLocal_900 = false;
	bool bLocal_901 = false;
	bool bLocal_902 = false;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = -1;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 1097859072;
	var uLocal_924 = 1000;
	var uLocal_925 = 1067450368;
	var uLocal_926 = 5000;
	var uLocal_927 = 42;
	var uLocal_928 = 1103626240;
	var uLocal_929 = 1077936128;
	var uLocal_930 = 1106247680;
	var uLocal_931 = 1103101952;
	var uLocal_932 = 1097859072;
	var uLocal_933 = 1103626240;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	int iLocal_938 = 0;
	int iLocal_939 = 0;
	int iLocal_940 = 0;
	int iLocal_941 = 0;
	int iLocal_942 = 0;
	int iLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	float fLocal_947 = 0f;
	vector3 vLocal_948 = { 0f, 0f, 0f };
	int iLocal_951 = 0;
	float fLocal_952 = 0f;
	int iLocal_953 = 0;
	bool bLocal_954 = false;
	int iLocal_955 = 0;
	int iLocal_956 = 0;
	int iLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	char* sLocal_961[4] = { NULL, NULL, NULL, NULL };
	int iLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	float fLocal_970 = 0f;
	char* sLocal_971[4] = { NULL, NULL, NULL, NULL };
	int iLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	float fLocal_980 = 0f;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<2606> Var0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_411 = joaat("g_m_m_unibanditos_01");
	vLocal_453 = { -5421.9f, -3653.3f, -21.8f };
	iLocal_476 = 1983776555;
	iLocal_479 = -1;
	vLocal_539 = { -5421.379f, -3658.686f, -23.125f };
	fLocal_542 = 33.1542f;
	iLocal_599 = -1;
	iLocal_626 = func_1(5, 0, 0);
	iLocal_627 = func_1(5, 1, 0);
	cLocal_641 = "bh_banditoshack";
	vLocal_675 = { -5872.313f, -3610.956f, -24.1009f };
	vLocal_678 = { -5845.634f, -3595.634f, -24.4846f };
	iLocal_694 = joaat("u_m_m_bht_banditoshack");
	vLocal_695 = { -5844.541f, -3600.23f, -24.5752f };
	fLocal_698 = 330.1552f;
	cLocal_710 = "bh_banditoshack_fleebarn";
	cLocal_711 = "bh_banditoshack_fleerocks";
	iLocal_712 = -1;
	vLocal_714 = { 0f, 0f, 0f };
	iLocal_863 = -1;
	iLocal_897 = -1;
	fLocal_952 = 1000f;
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
		func_2(&(Var0.f_172), 4096);
	}
	else
	{
		func_3(&(Var0.f_172), 4096);
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4650))
	{
		func_4(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_5(&Var0);
	while (true)
	{
		func_6(&Var0);
		if (func_7(Var0.f_172, 50331648))
		{
			func_8(&Var0);
		}
		else
		{
			switch (Var0.f_177)
			{
				case 0:
					func_9(&Var0);
					break;
				case 1:
					func_10(&Var0);
					break;
				case 3:
					func_11(&Var0);
					break;
				case 4:
					func_12(&Var0);
					break;
				case 2:
					func_13(&Var0);
					break;
				case 5:
					func_14(&Var0);
					break;
				case 6:
					func_15(&Var0);
					break;
				case 7:
					func_16(&Var0);
					break;
				case 8:
					func_17(&Var0);
					break;
				case 9:
					func_18(&Var0, 0);
					break;
				case 10:
					func_19(&Var0);
					break;
				case 11:
					if (Var0.f_174 == func_20())
					{
						func_21();
						func_22();
					}
					func_23(&Var0);
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
}

int func_1(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = func_24(iParam0);
	if ((func_25(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
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
					if (func_26())
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
					if (func_26())
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
					if (func_26())
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
					if (func_26())
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
					if (func_26())
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

void func_2(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_3(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_4(var uParam0)
{
	int iVar0;

	if (&Global_1879534 == 1)
	{
		func_27(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43));
	}
	if (func_7(uParam0->f_172, 8))
	{
		iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
		func_28(uParam0, iVar0);
		if (iVar0 == 32)
		{
			func_17(uParam0);
		}
		else
		{
			func_18(uParam0, 1);
			return;
		}
	}
	if (uParam0->f_177 == 10)
	{
		func_29(uParam0);
	}
	func_30(&(uParam0->f_753));
	func_23(uParam0);
}

void func_5(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (uParam0->f_174 == func_20())
	{
		bVar0 = true;
	}
	else if (func_31(uParam0))
	{
		bVar0 = true;
		func_32(uParam0, 128);
	}
	if (bVar0)
	{
		func_32(uParam0, 64);
		if (func_33())
		{
			func_32(uParam0, 128);
		}
		func_34(0, 0);
	}
	if (func_35(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
	{
		uParam0->f_741 = 0f;
		uParam0->f_742 = 0f;
	}
	if (!func_36(uParam0, 64))
	{
		func_37(uParam0->f_174, 1);
		func_38(uParam0->f_174, 1);
	}
	func_39(uParam0->f_174);
	func_40(uParam0);
	func_41(uParam0);
	func_42(uParam0, 0, 0, 0, -1, -1, 0);
	func_43(uParam0, 0, 0, 0, -1, -1, 0);
	func_44(&(uParam0->f_178));
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_28 != 0)
	{
		func_45(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, 7);
	}
	func_46(uParam0);
	func_47(uParam0, 1);
	iVar1 = func_48(uParam0);
	if (!func_7(uParam0->f_172, 8388608) && func_49(uParam0))
	{
		iVar1 = 4;
	}
	if (!func_50(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 64))
	{
		if ((iVar1 != 0 && iVar1 != 1) && !func_49(uParam0))
		{
			func_51(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
		}
	}
	func_52();
	func_53(uParam0, iVar1);
}

void func_6(var uParam0)
{
	int iVar0;
	struct<4> Var1;

	if (func_7(uParam0->f_172, 50331648))
	{
		return;
	}
	if (func_54())
	{
		func_2(&(uParam0->f_172), 16777216);
		if (!func_7(uParam0->f_172, 8))
		{
			func_55(uParam0, 14);
		}
		return;
	}
	else if (func_56())
	{
		func_2(&(uParam0->f_172), 33554432);
		if (!func_7(uParam0->f_172, 8))
		{
			func_55(uParam0, 15);
		}
		return;
	}
	if (func_57(uParam0))
	{
		return;
	}
	func_3(&(uParam0->f_172), 64);
	func_3(&(uParam0->f_172), 128);
	if (func_7(uParam0->f_172, 67108864))
	{
		func_58(1);
		func_3(&(uParam0->f_172), 67108864);
	}
	func_59(uParam0);
	if (((uParam0->f_177 == 11 || uParam0->f_177 == 10) || uParam0->f_177 == 8) || uParam0->f_177 == 9)
	{
		return;
	}
	if (func_7(uParam0->f_172, 4096))
	{
		iVar0 = func_60(0);
		if (!func_61(iVar0) || ((*Global_1347702)[uParam0->f_174 /*49*/])->f_15 == iVar0)
		{
			func_3(&(uParam0->f_172), 4096);
		}
		else
		{
			return;
		}
	}
	if (!func_7(uParam0->f_172, 8) && func_62())
	{
		if (uParam0->f_174 != 59 || !func_63(97))
		{
			if (uParam0->f_174 != 155 || !func_63(8))
			{
				return;
			}
		}
	}
	if (uParam0->f_177 != 2)
	{
		if (func_7(uParam0->f_172, 8))
		{
			if (func_36(uParam0, 32))
			{
				if (!func_36(uParam0, 64))
				{
					if (!func_64(32768))
					{
						Var1 = { func_65(0) };
						if (func_66(&Var1))
						{
							func_67(uParam0, 32);
						}
					}
					else
					{
						func_67(uParam0, 32);
					}
				}
				else
				{
					func_67(uParam0, 32);
				}
			}
			if (func_68(uParam0))
			{
				if (uParam0->f_177 != 6 && uParam0->f_177 != 5)
				{
					func_53(uParam0, 9);
					return;
				}
			}
			else if (func_69(uParam0))
			{
				if (uParam0->f_177 != 6 && uParam0->f_177 != 5)
				{
					func_53(uParam0, 8);
					return;
				}
			}
			if (!func_7(uParam0->f_172, 131072))
			{
				if (!Global_1935630->f_12)
				{
					PED::SET_PED_RESET_FLAG(Global_35, 187, true);
				}
			}
			if (!func_7(uParam0->f_172, 268435456))
			{
				func_70();
			}
			if (!func_7(uParam0->f_172, 536870912))
			{
				POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
			}
			if (!func_7(uParam0->f_172, 1073741824))
			{
				func_71(1, 0);
			}
			func_72(uParam0);
		}
		else if (!func_36(uParam0, 64) && !func_31(uParam0))
		{
			uParam0->f_743 = BUILTIN::VDIST2(func_73(uParam0->f_174), Global_36);
			if (func_74(uParam0))
			{
				if (func_75(uParam0) == 2 || func_75(uParam0) == 12)
				{
					func_23(uParam0);
					return;
				}
				func_76(uParam0);
				func_53(uParam0, 10);
				return;
			}
			else
			{
				func_77(uParam0);
			}
			func_78(uParam0);
		}
	}
	func_79(uParam0);
	if (func_7(uParam0->f_172, 32))
	{
		func_81(uParam0, func_80(uParam0));
	}
	else if (func_7(uParam0->f_172, 8))
	{
		if (func_82(uParam0))
		{
		}
	}
}

bool func_7(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_8(var uParam0)
{
	if (func_7(uParam0->f_172, 8))
	{
		func_18(uParam0, 0);
	}
	else
	{
		if (!func_83(&(uParam0->f_2597)))
		{
			func_84(&(uParam0->f_2597), 0);
		}
		func_85(uParam0);
		if (func_86(&(uParam0->f_2597)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (uParam0->f_177 == 10)
			{
				func_29(uParam0);
			}
			else
			{
				func_76(uParam0);
			}
			func_23(uParam0);
		}
	}
}

void func_9(var uParam0)
{
	if (!func_87(64))
	{
		return;
	}
	if (func_88())
	{
		if (Global_1310720->f_6)
		{
		}
		else
		{
			return;
		}
	}
	if (Global_1879534 && func_31(uParam0))
	{
		return;
	}
	if (func_7(uParam0->f_172, 8192))
	{
		func_53(uParam0, 1);
	}
}

void func_10(var uParam0)
{
	if (func_89(uParam0))
	{
		if (func_36(uParam0, 64))
		{
			func_90(uParam0);
			func_53(uParam0, 2);
			func_82(uParam0);
		}
		else if (func_35(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
		{
			func_53(uParam0, 3);
		}
		else
		{
			func_91(uParam0);
			func_53(uParam0, 4);
		}
	}
}

void func_11(var uParam0)
{
	int iVar0;

	if (!func_83(&(uParam0->f_2585)) || IntToFloat(func_86(&(uParam0->f_2585))) > func_92(uParam0))
	{
		func_84(&(uParam0->f_2585), 1);
		iVar0 = func_93(uParam0);
		if (iVar0 != 3)
		{
			if ((iVar0 == 7 || iVar0 == 5) || iVar0 == 6)
			{
				func_90(uParam0);
				func_82(uParam0);
			}
			func_53(uParam0, iVar0);
		}
	}
}

void func_12(var uParam0)
{
	int iVar0;

	if (!func_87(64))
	{
		return;
	}
	if (func_88())
	{
		return;
	}
	else if (func_94(&Global_1935630, 131072))
	{
		return;
	}
	else if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	func_95(uParam0);
	if (func_96(uParam0))
	{
		func_90(uParam0);
		iVar0 = func_97(uParam0);
		if (iVar0 == 5)
		{
			func_98(uParam0, 4);
			func_14(uParam0);
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
			func_98(uParam0, 4);
			func_15(uParam0);
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
		if (func_31(uParam0))
		{
			if (iVar0 == 7 && !CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
		func_82(uParam0);
		func_53(uParam0, iVar0);
	}
}

void func_13(var uParam0)
{
	if (!func_7(uParam0->f_172, 8192))
	{
		return;
	}
	func_53(uParam0, func_100(uParam0, func_99(uParam0)));
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
		func_101(0);
	}
	else if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
}

void func_14(var uParam0)
{
	if (func_102(uParam0))
	{
		func_15(uParam0);
		func_53(uParam0, 6);
	}
}

void func_15(var uParam0)
{
	int iVar0;

	func_103(uParam0);
	if (func_104(&(uParam0->f_2575)))
	{
		if (func_105(uParam0))
		{
			func_106(uParam0, 1);
			iVar0 = func_107(uParam0);
			func_53(uParam0, iVar0);
		}
	}
	else
	{
		func_3(&(uParam0->f_172), 16);
		func_106(uParam0, 0);
		iVar0 = func_107(uParam0);
		func_53(uParam0, iVar0);
	}
}

void func_16(var uParam0)
{
	int iVar0;

	if (func_108(uParam0))
	{
		return;
	}
	if (func_7(uParam0->f_172, 262144))
	{
		func_110(uParam0, func_109(uParam0));
	}
	iVar0 = func_111(uParam0);
	if (iVar0 == 5)
	{
		func_98(uParam0, 7);
		func_14(uParam0);
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
		func_98(uParam0, 7);
		func_15(uParam0);
	}
	func_53(uParam0, iVar0);
}

void func_17(var uParam0)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	struct<7> Var5;
	bool bVar12;

	if (uParam0->f_177 != 8)
	{
		func_53(uParam0, 8);
	}
	if (func_7(uParam0->f_172, 32768))
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
	if (func_75(uParam0) != 0)
	{
		func_55(uParam0, 0);
		if (func_112(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
		{
			if (!STATS::STATSTRACKER_IS_INITIALIZED(func_113(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15)))
			{
				STATS::_0xCA41E86545413B5B(func_114(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), func_115(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), func_116(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), func_113(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), Global_36);
			}
			if (!STATS::STATSTRACKER_IS_INITIALIZED(func_113(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15)))
			{
			}
			else
			{
				STATS::STATSTRACKER_DEED_STARTED(func_113(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), 0);
			}
		}
		if (func_35(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 262144))
		{
			func_117();
			func_118(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), 0);
		}
		func_119(uParam0->f_174, 1);
		func_120(uParam0);
		func_122(func_121(), 0);
		if (func_7(uParam0->f_172, 8))
		{
			func_123(uParam0, 0, 1);
			if (func_124(uParam0->f_174, 128))
			{
				func_125(uParam0->f_174, 128);
			}
		}
		func_126(uParam0);
		if (!func_7(uParam0->f_172, 32768) || !func_7(uParam0->f_172, 65536))
		{
			if (func_7(uParam0->f_172, 8))
			{
				MISC::_0x1096603B519C905F("");
				HUD::SET_MISSION_NAME(false, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
				if (MISC::GET_MISSION_FLAG())
				{
					MISC::SET_MISSION_FLAG(false);
				}
				func_52();
				UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
				func_127(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15);
				func_128();
				func_129(Global_1935630, 8);
			}
			MemCopy(&vVar0, {((*Global_1347702)[uParam0->f_174 /*49*/])->f_1}, 3);
			StringConCat(&vVar0, "_obj", 24);
			if (!func_35(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4))
			{
				if (!func_35(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 64))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&vVar0))
					{
						func_130(uParam0, &vVar0, 1, 7500, 0, 0, -1082130432, 0, 0, -1, -1, 0);
					}
				}
			}
			bVar3 = func_131();
			func_132(uParam0->f_174, 1, 1, 0, 1, 1, bVar3);
			if (func_7(uParam0->f_172, 8))
			{
				iVar4 = func_99(uParam0);
				if (iVar4 < 0)
				{
					iVar4 = 0;
				}
				Var5 = func_113(func_133(uParam0->f_174));
				Var5.f_1 = 0;
				Var5.f_2 = iVar4;
				Var5.f_3 = func_75(uParam0);
				Var5.f_4 = (ENTITY::GET_ENTITY_HEALTH(Global_35) * 100 / ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0));
				Var5.f_5 = Global_40.f_7729;
				Var5.f_6 = func_134(0);
				TELEMETRY::_TELEMETRY_MISSION_OVER(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), &Var5);
				bVar12 = false;
				bVar12 = true;
				if (bVar12)
				{
					func_21();
					func_22();
				}
			}
		}
	}
	if (!func_7(uParam0->f_172, 32768) || !func_7(uParam0->f_172, 65536))
	{
		if (func_31(uParam0))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			func_135();
			func_136(0);
		}
		else if (func_7(uParam0->f_172, 32768))
		{
			func_137(1, 1);
			func_2(&(uParam0->f_172), 65536);
			return;
		}
	}
	if (func_7(uParam0->f_172, 32768))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		func_138(1);
		func_139();
		func_140(6);
		func_141(4096);
	}
	func_76(uParam0);
	if (func_7(uParam0->f_172, 32768) || func_31(uParam0))
	{
		func_23(uParam0);
	}
	func_53(uParam0, 10);
}

void func_18(var uParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	func_53(uParam0, 9);
	if (func_75(uParam0) != 1)
	{
		func_55(uParam0, 1);
		if (func_124(uParam0->f_174, 128))
		{
			func_125(uParam0->f_174, 128);
		}
		func_142(uParam0);
	}
	if (func_7(uParam0->f_172, 134217728))
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::_0x16E9ABDD34DDD931();
			CAM::DO_SCREEN_FADE_OUT(0);
		}
	}
	func_119(uParam0->f_174, 0);
	if (bParam1 == 1)
	{
		if (uParam0->f_174 == func_20())
		{
			func_21();
			func_22();
		}
	}
	else
	{
		bVar0 = false;
		if (func_7(uParam0->f_172, 134217728))
		{
			bVar0 = true;
		}
		if (!CAM::IS_SCREEN_FADED_OUT() || func_7(uParam0->f_172, 134217728))
		{
			if (!func_83(&(uParam0->f_2597)))
			{
				func_84(&(uParam0->f_2597), 0);
			}
			func_85(uParam0);
			bVar1 = CAM::_0x139EFB0A71DD9011();
			bVar2 = CAM::_0x7CE9DC58E3E4755F();
			if (!func_7(uParam0->f_172, 2097152) && !bVar2)
			{
				if (!bVar1)
				{
					func_143(1, 1);
					return;
				}
				else
				{
					func_2(&(uParam0->f_172), 2097152);
				}
			}
			if (bVar2)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
				func_3(&(uParam0->f_172), 134217728);
			}
			else if (func_86(&(uParam0->f_2597)) >= 2500)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
				func_3(&(uParam0->f_172), 134217728);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				return;
			}
			else if (func_7(uParam0->f_172, 134217728))
			{
				return;
			}
		}
		iVar3 = 1;
		if (func_7(uParam0->f_172, 16777216))
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
		else if (func_7(uParam0->f_172, 33554432))
		{
			iVar3 = 6;
			StringCopy(&(uParam0->f_2578), "PLAYER_ARRESTED", 24);
		}
		func_145(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, iVar3, &(uParam0->f_2578), func_144(uParam0), 0, bVar0);
	}
	if (func_7(uParam0->f_172, 8))
	{
		MISC::_0x1096603B519C905F("");
		HUD::SET_MISSION_NAME(false, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		func_52();
		func_129(Global_1935630, 8);
	}
	if (func_146(&(uParam0->f_2605)))
	{
		func_147(uParam0);
	}
	func_148(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15);
	bParam1 = true;
	if (func_7(uParam0->f_172, 50331648))
	{
		bParam1 = true;
	}
	else
	{
		func_76(uParam0);
	}
	if (bParam1)
	{
		func_23(uParam0);
	}
	else
	{
		func_53(uParam0, 10);
	}
}

void func_19(var uParam0)
{
	bool bVar0;
	int iVar1;

	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_13 & 4096 != 0)
	{
		bVar0 = MAP::DOES_BLIP_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_37);
		uParam0->f_743 = BUILTIN::VDIST2(func_73(uParam0->f_174), Global_36);
		func_149(uParam0->f_174, bVar0, uParam0->f_743);
	}
	if (func_150(64, 1, 1))
	{
		iVar1 = func_60(0);
		if (func_61(iVar1))
		{
			func_29(uParam0);
			func_23(uParam0);
			return;
		}
	}
	if (func_151(uParam0) && func_152())
	{
		func_29(uParam0);
		func_23(uParam0);
	}
	else if (!func_83(&(uParam0->f_2585)) || IntToFloat(func_86(&(uParam0->f_2585))) > func_153(uParam0))
	{
		func_84(&(uParam0->f_2585), 1);
		if (func_154(uParam0))
		{
			func_53(uParam0, 11);
		}
	}
}

int func_20()
{
	return func_156(func_155());
}

void func_21()
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

void func_22()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_157(0);
	func_158(0);
	func_159(0);
	func_160(0);
	func_161(0);
	func_162(1f);
}

void func_23(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	func_163(uParam0);
	func_164(uParam0->f_751);
	func_165(uParam0);
	func_166(uParam0);
	func_167(uParam0);
	func_168(uParam0->f_174);
	func_169(uParam0->f_174);
	func_170(2);
	iVar0 = 0;
	bVar2 = false;
	if (func_171(((*Global_1347702)[uParam0->f_174 /*49*/])->f_14, 1024))
	{
		bVar2 = true;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		func_172(iVar1, 1, -1082130432, 1, 1, bVar2, 0);
		iVar0++;
	}
	if (func_75(uParam0) == 2)
	{
		func_27(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43));
	}
	else
	{
		func_173(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43), 1, 0, 1);
	}
	((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = 0;
	func_174(uParam0);
	func_175(uParam0);
	if (func_75(uParam0) == 0)
	{
		func_176(uParam0->f_174);
	}
	if (func_75(uParam0) == 2 || func_75(uParam0) == 12)
	{
		func_177(uParam0->f_174);
	}
	if (func_178(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
	{
		func_179(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 0, 2);
	}
	func_106(uParam0, 0);
	if (func_7(uParam0->f_172, 8))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
		}
	}
	func_3(&(uParam0->f_172), 8);
	func_180(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
	func_180(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 4);
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_35 != -1)
	{
		func_181(uParam0->f_174, 0);
	}
	if (func_75(uParam0) == 12)
	{
		func_119(uParam0->f_174, 0);
		if (uParam0->f_174 == 65 && func_60(0) == Global_1888801[16 /*35*/])
		{
			func_182(uParam0->f_174, 8192);
		}
	}
	func_183(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 32768);
	func_184(uParam0);
	func_52();
	func_185(0);
	func_185(1);
	func_186(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_24(int iParam0)
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

bool func_25(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_26()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

void func_27(int* iParam0)
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

void func_28(var uParam0, int iParam1)
{
}

void func_29(var uParam0)
{
}

void func_30(var uParam0)
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
				if (func_187(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
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

int func_31(var uParam0)
{
	if (func_64(32768) && func_50(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 8192))
	{
		return 1;
	}
	return 0;
}

void func_32(var uParam0, int iParam1)
{
	uParam0->f_173 = (uParam0->f_173 || iParam1);
}

bool func_33()
{
	return Global_1572864->f_13;
}

void func_34(int iParam0, int iParam1)
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

bool func_35(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_36(var uParam0, int iParam1)
{
	return (uParam0->f_173 && iParam1) != 0;
}

int func_37(int iParam0, bool bParam1)
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

int func_38(int iParam0, bool bParam1)
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

int func_39(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 128 != 0)
	{
		return 1;
	}
	((*Global_1347702)[iParam0 /*49*/])->f_45 = func_188(((*Global_1347702)[iParam0 /*49*/])->f_24, 1);
	func_51(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 128);
	return 1;
}

void func_40(var uParam0)
{
	func_189(uParam0, 8);
	func_190(uParam0, 15);
	(Local_412[0 /*11*/])->f_2 = { -5424.725f, -3652.854f, -23.1449f };
	(Local_412[0 /*11*/])->f_5 = 272.1613f;
	(Local_412[0 /*11*/])->f_7 = 2000;
	(Local_412[0 /*11*/])->f_6 = "BANDITO_PED6";
	(Local_412[0 /*11*/])->f_10 = "outlaw_a";
	(Local_412[1 /*11*/])->f_2 = { -5420.65f, -3651.689f, -23.1331f };
	(Local_412[1 /*11*/])->f_5 = 109.5308f;
	(Local_412[1 /*11*/])->f_7 = 4000;
	(Local_412[1 /*11*/])->f_6 = "BANDITO_PED1";
	(Local_412[1 /*11*/])->f_10 = "outlaw_b";
	(Local_412[2 /*11*/])->f_2 = { -5422.836f, -3655.008f, -23.1379f };
	(Local_412[2 /*11*/])->f_5 = 53.4842f;
	(Local_412[2 /*11*/])->f_7 = 3000;
	(Local_412[2 /*11*/])->f_6 = "RBT22_BANDKID";
	(Local_412[2 /*11*/])->f_10 = "outlaw_c";
	(Local_607[0 /*9*/])->f_1 = { -5414.996f, -3657.709f, -23.0766f };
	(Local_607[0 /*9*/])->f_4 = 160.9242f;
	(Local_607[0 /*9*/])->f_5 = { -5415.926f, -3657.984f, -23.0882f };
	(Local_607[1 /*9*/])->f_1 = { -5413.621f, -3658.881f, -23.0597f };
	(Local_607[1 /*9*/])->f_4 = 141.579f;
	(Local_607[1 /*9*/])->f_5 = { -5413.678f, -3658.812f, -23.0605f };
	iLocal_456[0] = 0;
	iLocal_456[1] = 0;
	(Local_718[0 /*11*/])->f_2 = { -5843.143f, -3599.703f, -24.4789f };
	(Local_718[0 /*11*/])->f_5 = 33.6552f;
	(Local_718[0 /*11*/])->f_6 = "BANDITO_PED2";
	(Local_718[0 /*11*/])->f_7 = 500;
	(Local_718[0 /*11*/])->f_10 = "male_a";
	(Local_718[1 /*11*/])->f_2 = { -5845.062f, -3598.682f, -24.4541f };
	(Local_718[1 /*11*/])->f_5 = 297.7763f;
	(Local_718[1 /*11*/])->f_6 = "BANDITO_PED3";
	(Local_718[1 /*11*/])->f_7 = 1000;
	(Local_718[1 /*11*/])->f_10 = "male_c";
	(Local_864[0 /*9*/])->f_1 = { -5852.488f, -3601.967f, -25.0822f };
	(Local_864[0 /*9*/])->f_4 = 184.3371f;
	(Local_864[0 /*9*/])->f_5 = { -5851.71f, -3604.94f, -24.91f };
	(Local_864[1 /*9*/])->f_1 = { -5847.083f, -3606.793f, -25.1031f };
	(Local_864[1 /*9*/])->f_4 = 28.0384f;
	(Local_864[1 /*9*/])->f_5 = { -5848.3f, -3604.09f, -24.51f };
	(Local_864[2 /*9*/])->f_1 = { -5851.597f, -3607.123f, -25.1648f };
	(Local_864[2 /*9*/])->f_4 = 352.6213f;
	(Local_864[2 /*9*/])->f_5 = { -5851.71f, -3604.94f, -24.91f };
	sLocal_961[0] = "RBT22_RIDE1";
	sLocal_961[1] = "RBT22_RIDE2";
	sLocal_961[2] = "RBT22_RIDE3";
	sLocal_961[3] = "RBT22_RIDE4";
	sLocal_971[0] = "RBT22_ESC1";
	sLocal_971[1] = "RBT22_ESC2";
	sLocal_971[2] = "RBT22_ESC3";
	sLocal_971[3] = "RBT22_ESC4";
	func_191(&uLocal_906);
	func_192(&uLocal_906, 1);
	func_193(&uLocal_906, 0);
}

void func_41(var uParam0)
{
	if (uParam0->f_748 == -1)
	{
		if (!func_35(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
		{
			uParam0->f_748 = 5;
		}
	}
	if (uParam0->f_748 > 0)
	{
		PED::_RESERVE_AMBIENT_PEDS(uParam0->f_748);
	}
}

void func_42(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
		uParam0->f_2603 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_73(uParam0->f_174), 0f, 0f, 0f, vVar8, &cVar0);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_2603))
	{
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_2603, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
	}
}

void func_43(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
		uParam0->f_2604 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_73(uParam0->f_174), 0f, 0f, 0f, vVar8, &cVar0);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_2604))
	{
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_2604, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
	}
}

void func_44(var uParam0)
{
	func_194(uParam0);
}

void func_45(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_195(&(uParam0->f_41), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_196(&(uParam0->f_41));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_41[iVar0 /*3*/] = iParam1;
	(uParam0->f_41[iVar0 /*3*/])->f_2 = ((uParam0->f_41[iVar0 /*3*/])->f_2 || iParam2);
	if (func_7(uParam0->f_172, 8192))
	{
		func_3(&(uParam0->f_172), 8192);
	}
}

void func_46(var uParam0)
{
	func_197(uParam0, 0);
	TASK::_0xFF745B0346E19E2C(-2146271366);
	HUD::TEXT_BLOCK_REQUEST("BHCR");
	func_45(uParam0, iLocal_411, 3);
	func_45(uParam0, iLocal_626, 3);
	func_45(uParam0, iLocal_627, 3);
	func_45(uParam0, iLocal_694, 2);
	func_45(uParam0, iLocal_476, 3);
	func_198(uParam0, cLocal_641, 2, -1, 2);
	func_198(uParam0, cLocal_710, 2, -1, 2);
	func_198(uParam0, cLocal_711, 2, -1, 2);
}

void func_47(var uParam0, int iParam1)
{
	if (func_199(uParam0) == iParam1)
	{
		return;
	}
	func_200(uParam0, uParam0->f_168, iParam1);
	uParam0->f_168 = iParam1;
	func_3(&(uParam0->f_172), 8192);
}

int func_48(var uParam0)
{
	return 0;
}

int func_49(var uParam0)
{
	if (func_36(uParam0, 64))
	{
		return 0;
	}
	if ((func_35(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_7(uParam0->f_172, 1024)) && !func_201(uParam0->f_174))
	{
		return 1;
	}
	return 0;
}

bool func_50(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_51(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_52()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_53(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_177)
	{
		func_98(uParam0, uParam0->f_177);
		uParam0->f_177 = iParam1;
	}
}

int func_54()
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

void func_55(var uParam0, int iParam1)
{
	if (uParam0->f_175 != iParam1)
	{
		uParam0->f_175 = iParam1;
	}
}

int func_56()
{
	if ((CAM::IS_SCREEN_FADED_OUT() && !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), false))
	{
		return 1;
	}
	return 0;
}

int func_57(var uParam0)
{
	int iVar0;
	int iVar1;

	switch (func_202(&iVar0))
	{
		case 1:
			StringCopy(&(uParam0->f_2578), "", 24);
			func_18(uParam0, 0);
			return 1;
		case 3:
			if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3398))
			{
				uParam0->f_3398 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedtoAbandon", 0);
			}
			if (((func_61(iVar0) && iVar0 == ((*Global_1347702)[uParam0->f_174 /*49*/])->f_15) && func_7(uParam0->f_172, 8)) && (!func_35(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 134217728) || func_64(32768)))
			{
				iVar1 = 1;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_3398, iVar1);
			break;
	}
	return 0;
}

void func_58(bool bParam0)
{
	func_203(bParam0);
	func_204(bParam0);
}

void func_59(var uParam0)
{
	if (func_7(uParam0->f_172, 8192))
	{
		return;
	}
	if (uParam0->f_168 == 0)
	{
		return;
	}
	if (func_205(uParam0, uParam0->f_168))
	{
		func_2(&(uParam0->f_172), 8192);
	}
}

int func_60(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

bool func_61(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_62()
{
	int iVar0;

	iVar0 = func_60(0);
	if ((func_61(iVar0) && func_114(iVar0) == 8) && func_35(((*Global_1347702)[func_115(iVar0) /*49*/])->f_12, 131072))
	{
		return 1;
	}
	return 0;
}

int func_63(int iParam0)
{
	if (func_206() != -1)
	{
		return 0;
	}
	if (!func_207(iParam0))
	{
		return 0;
	}
	return func_178(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

bool func_64(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

struct<4> func_65(int iParam0)
{
	struct<4> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { -5375.237f, -3633.907f, -22.7384f };
			Var0.f_3 = 137.5f;
			break;
		case 1:
		case 2:
			Var0 = { -5394.14f, -3656.509f, -23.1362f };
			Var0.f_3 = 128.7f;
			break;
		case 3:
			Var0 = { -5762.336f, -3617.499f, -24.1814f };
			Var0.f_3 = 84.1777f;
			break;
		case 4:
			Var0 = { -5855.977f, -3632.894f, -26.6364f };
			Var0.f_3 = 93.4317f;
			break;
		case 5:
			Var0 = { func_208(115) };
			Var0.f_3 = 13.6745f;
			break;
		case 6:
			Var0 = { func_208(115) };
			Var0.f_3 = 203.6745f;
			break;
		default:
			Var0 = { 0f, 0f, 0f };
			Var0.f_3 = 0f;
			break;
	}
	return Var0;
}

bool func_66(var uParam0)
{
	return func_209(*uParam0, uParam0->f_3);
}

void func_67(var uParam0, int iParam1)
{
	uParam0->f_173 = (uParam0->f_173 - (uParam0->f_173 && iParam1));
}

int func_68(var uParam0)
{
	float fVar0;

	if (iLocal_15 == 1)
	{
		if (MAP::DOES_BLIP_EXIST(iLocal_634))
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_453, true);
			if (fVar0 < fLocal_947)
			{
				if (fVar0 >= 15f)
				{
					fLocal_947 = fVar0;
					iLocal_951 = 0;
				}
			}
			else if (!iLocal_951)
			{
				if ((fLocal_947 + 50f) < fVar0)
				{
					func_130(uParam0, "RBT22_RETURN", 1, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
					iLocal_951 = 1;
				}
			}
			else
			{
				if (fVar0 > (fLocal_947 + 90f))
				{
					StringCopy(&(uParam0->f_2578), "RBT22_ABANDON", 24);
					return 1;
				}
				if (fVar0 <= 40f)
				{
					func_130(uParam0, "RBT22_CLUES", 0, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
					iLocal_951 = 0;
				}
			}
		}
	}
	else if (iLocal_15 == 2)
	{
		if (iLocal_22 == 1 || iLocal_22 == 2)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_678, true);
			if (iLocal_951)
			{
				if (fVar0 > (fLocal_952 + 100f))
				{
					StringCopy(&(uParam0->f_2578), func_210(1), 24);
					return 1;
				}
				else if (fVar0 <= fLocal_952)
				{
					iLocal_951 = 0;
					func_211(uParam0, "RBT22_SEARCH", 1, -1082130432, 0, 0, -1, -1, 0);
				}
			}
			else if (fVar0 < fLocal_952)
			{
				if (fVar0 > 80f)
				{
					fLocal_952 = fVar0;
				}
			}
			else if (fVar0 > (fLocal_952 + 75f))
			{
				func_130(uParam0, "RBT22_SEARCH", 1, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
				iLocal_951 = 1;
			}
		}
	}
	else if (iLocal_15 >= 3 && func_212(&Local_26, 1120403456, 1125515264))
	{
		StringCopy(&(uParam0->f_2578), func_210(Local_26.f_64), 24);
		AUDIO::TRIGGER_MUSIC_EVENT("PRBTY_FAIL");
		return 1;
	}
	return 0;
}

int func_69(var uParam0)
{
	return 0;
}

void func_70()
{
	LAW::_0x15ABD5004CAD2D99(0);
	LAW::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 1352191066, 3, 3, 1);
	LAW::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 1171995096, 4, 0, -1);
}

void func_71(bool bParam0, bool bParam1)
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

void func_72(var uParam0)
{
}

Vector3 func_73(int iParam0)
{
	vector3 vVar0;

	if (!func_207(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_213(iParam0, &vVar0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_24 = { vVar0 };
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

int func_74(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_87(64))
	{
		return 0;
	}
	else if (func_94(&Global_1935630, 131072))
	{
		return 0;
	}
	else if (func_88())
	{
		return 0;
	}
	else if (Global_1310720->f_6)
	{
		return 0;
	}
	else if (func_50(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024))
	{
		return 0;
	}
	if (func_150(0, 1, 0))
	{
		iVar0 = func_60(0);
		if (func_61(iVar0) && func_214(uParam0, iVar0))
		{
		}
		else
		{
			func_55(uParam0, 12);
			return 1;
		}
	}
	if (func_215(uParam0->f_174))
	{
		func_55(uParam0, 13);
		return 1;
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 32 == 0)
	{
		if (uParam0->f_743 > (((*Global_1347702)[uParam0->f_174 /*49*/])->f_17 * ((*Global_1347702)[uParam0->f_174 /*49*/])->f_17))
		{
			func_55(uParam0, 2);
			return 1;
		}
	}
	if (!func_35(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_201(uParam0->f_174))
	{
		func_216(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 16384);
		func_55(uParam0, 3);
		return 1;
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 8388608 != 0)
	{
		iVar1 = func_217(uParam0->f_174);
		if (iVar1 != -1)
		{
			if (func_218(iVar1))
			{
				if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
				{
					func_182(uParam0->f_174, 32768);
				}
				func_55(uParam0, 5);
				return 1;
			}
			else if (func_219(iVar1))
			{
				if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
				{
					func_182(uParam0->f_174, 32768);
				}
				func_55(uParam0, 5);
				return 1;
			}
		}
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_45 != -1)
	{
		if (func_218(((*Global_1347702)[uParam0->f_174 /*49*/])->f_45))
		{
			func_182(uParam0->f_174, 2048);
			func_55(uParam0, 6);
			return 1;
		}
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_46 != 0)
	{
		if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 268435456 == 0)
		{
			iVar2 = func_220();
			if (!func_221(iVar2, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_46))
			{
				func_55(uParam0, 7);
				return 1;
			}
		}
	}
	if (Global_1357549->f_1614 == 1)
	{
		func_55(uParam0, 8);
		return 1;
	}
	if (!func_35(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 8192))
	{
		if (func_222(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			func_182(uParam0->f_174, 16384);
			func_55(uParam0, 9);
			return 1;
		}
	}
	if (uParam0->f_172 & 256 != 0 && !func_223(uParam0->f_174, 1, 1, 0, 0))
	{
		func_55(uParam0, 10);
		return 1;
	}
	if (func_224(uParam0) || func_225(uParam0->f_174, uParam0->f_743))
	{
		func_182(uParam0->f_174, 1024);
		func_55(uParam0, 11);
		return 1;
	}
	if (!func_226(uParam0) && func_227(uParam0->f_743))
	{
		func_182(uParam0->f_174, 8192);
		func_55(uParam0, 11);
		return 1;
	}
	return 0;
}

int func_75(var uParam0)
{
	return uParam0->f_175;
}

void func_76(var uParam0)
{
	bool bVar0;

	func_228();
	func_229(uParam0);
	if (func_7(uParam0->f_172, 8))
	{
		bVar0 = true;
		if (func_75(uParam0) == 1)
		{
			bVar0 = false;
		}
		else if (func_36(uParam0, 128) && func_33())
		{
			func_160(0);
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
		if (func_75(uParam0) != 0)
		{
			UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
			func_128();
			if (func_75(uParam0) == 1)
			{
				func_230(uParam0->f_174, 1);
			}
		}
		if (func_7(uParam0->f_172, 67108864))
		{
			func_58(1);
			func_3(&(uParam0->f_172), 67108864);
		}
		func_231(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_ENABLE_HUD_CONTEXT_THIS_FRAME(Global_35, 262143);
			func_232(Global_35);
			PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(-2012097661, true);
		}
	}
	if (func_75(uParam0) == 3)
	{
		func_233(uParam0->f_174);
	}
	else if (func_75(uParam0) == 2)
	{
	}
	else if (!func_171(((*Global_1347702)[uParam0->f_174 /*49*/])->f_14, 2))
	{
		func_119(uParam0->f_174, 0);
	}
	func_177(uParam0->f_174);
	if (func_75(uParam0) == 0)
	{
		func_176(uParam0->f_174);
		func_234(uParam0);
	}
	func_165(uParam0);
	func_235(0);
	func_106(uParam0, 0);
	func_47(uParam0, 4);
	func_3(&(uParam0->f_172), 8);
	func_180(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 1024);
	func_180(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
	func_51(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 4);
	func_236(&(uParam0->f_2585));
	func_237(uParam0);
}

void func_77(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	vVar0 = { func_73(uParam0->f_174) };
	fVar3 = BUILTIN::VDIST2(Global_36, vVar0);
	if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_37))
	{
		if (uParam0->f_177 == 4 || uParam0->f_177 == 3)
		{
			fVar4 = func_238(uParam0->f_174);
			if ((((*Global_1347702)[uParam0->f_174 /*49*/])->f_36 != -1822497728 || func_35(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 32)) || fVar3 < (fVar4 * fVar4))
			{
				func_239(uParam0->f_174, vVar0, 1, 0);
			}
		}
	}
	else
	{
		func_240(uParam0->f_174, fVar3);
		func_241(uParam0->f_174, vVar0, fVar3);
		func_242(uParam0->f_174);
		func_243(uParam0->f_174);
	}
}

void func_78(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;

	if (func_36(uParam0, 64))
	{
		return;
	}
	if (func_7(uParam0->f_172, 256))
	{
		if ((func_7(uParam0->f_172, 4194304) && uParam0->f_177 == 4) && !func_49(uParam0))
		{
			func_3(&(uParam0->f_172), 256);
			func_164(uParam0->f_751);
			func_244(uParam0);
		}
		else
		{
			func_245(uParam0);
		}
	}
	else if (uParam0->f_177 == 4)
	{
		if (func_49(uParam0))
		{
			if (func_7(uParam0->f_172, 16))
			{
				cVar0 = { func_246() };
				Var8 = { func_247(&(uParam0->f_206)) };
				if (!MISC::ARE_STRINGS_EQUAL(&Var8, &cVar0))
				{
					func_248(&(uParam0->f_206));
					func_249(&(uParam0->f_206), &cVar0);
				}
			}
			func_2(&(uParam0->f_172), 256);
		}
	}
}

void func_79(var uParam0)
{
	bool bVar0;
	bool bVar1;

	if (!func_7(uParam0->f_172, 16))
	{
		return;
	}
	if (func_250(uParam0->f_206.f_5))
	{
		uParam0->f_206.f_5 = { func_73(uParam0->f_174) };
	}
	bVar0 = func_251(uParam0);
	if (!bVar0)
	{
		if (func_7(uParam0->f_172, 8))
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
	if (func_104(&(uParam0->f_2575)))
	{
		bVar1 = true;
		if (uParam0->f_177 == 4 || uParam0->f_176 == 4)
		{
			if (func_31(uParam0))
			{
				bVar1 = false;
			}
			else if (func_50(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024))
			{
				bVar1 = false;
			}
		}
		if (func_252(&(uParam0->f_206), &(uParam0->f_2575), bVar0, bVar1))
		{
			if (!func_7(uParam0->f_172, 1))
			{
				func_253(uParam0);
				func_2(&(uParam0->f_172), 1);
			}
		}
		else if (func_7(uParam0->f_172, 1))
		{
			func_3(&(uParam0->f_172), 1);
		}
	}
	else if (!func_7(uParam0->f_172, 1))
	{
		func_2(&(uParam0->f_172), 1);
	}
}

int func_80(var uParam0)
{
	return uParam0->f_169;
}

void func_81(var uParam0, int iParam1)
{
	int iVar0;

	if (!func_7(uParam0->f_172, 32))
	{
		return;
	}
	if (uParam0->f_2605.f_785 > 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_2605.f_785)
		{
			if (func_254(uParam0->f_2605[iVar0 /*16*/], 1048576))
			{
				if (func_255(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_256(uParam0->f_2605[iVar0 /*16*/]);
				}
				else if (func_257(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_258(uParam0->f_2605[iVar0 /*16*/]);
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
			if (func_254(uParam0->f_2605.f_241[iVar0 /*16*/], 1048576))
			{
				if (func_259(uParam0, uParam0->f_2605.f_241[iVar0 /*16*/], iParam1))
				{
					func_260(uParam0->f_2605.f_241[iVar0 /*16*/]);
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
			if (func_254(uParam0->f_2605.f_482[iVar0 /*16*/], 1048576))
			{
				if (func_259(uParam0, uParam0->f_2605.f_482[iVar0 /*16*/], iParam1))
				{
					if (func_261(uParam0->f_2605.f_482[iVar0 /*16*/], 0))
					{
						if (func_254(uParam0->f_2605.f_482[iVar0 /*16*/], 4))
						{
							func_262(&(uParam0->f_2605));
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_82(var uParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "RCM_", 64);
	StringConCat(&cVar0, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_1), 64);
	if (func_263(&(uParam0->f_2605), &cVar0, 1, -1, 0, 1))
	{
		func_2(&(uParam0->f_172), 32);
		return 1;
	}
	return 0;
}

bool func_83(var uParam0)
{
	return func_264(*uParam0, 1);
}

void func_84(var uParam0, int iParam1)
{
	if (iParam1 || !func_83(uParam0))
	{
		func_265(uParam0);
	}
}

void func_85(var uParam0)
{
}

int func_86(var uParam0)
{
	if (!func_83(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_266(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_267() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_87(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_88()
{
	return func_94(&Global_1935630, 4096);
}

int func_89(var uParam0)
{
	if (func_50(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 64))
	{
		return 1;
	}
	if (func_268(uParam0) && func_269(uParam0))
	{
		func_51(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
		return 1;
	}
	return 0;
}

void func_90(var uParam0)
{
	bool bVar0;
	struct<4> Var1;
	int iVar5;

	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 67108864 == 0)
	{
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_270(uParam0->f_174), func_271(uParam0->f_174)))
		{
			func_272(uParam0->f_174, 128);
		}
		else
		{
			func_125(uParam0->f_174, 128);
		}
		if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
		{
			if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_270(uParam0->f_174), func_271(uParam0->f_174)))
			{
				func_273(uParam0->f_174);
				func_274(uParam0->f_174);
			}
		}
		else
		{
			func_275(Global_1347702[uParam0->f_174 /*49*/]);
			func_273(uParam0->f_174);
		}
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(func_270(uParam0->f_174), func_271(uParam0->f_174)))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_270(uParam0->f_174), func_271(uParam0->f_174), 0, "");
		}
	}
	if (!func_178(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
	{
		if (!func_276(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
		{
			func_277(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1);
		}
		func_278(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1, 1);
		func_279(Global_1935630, 8);
	}
	bVar0 = true;
	if (func_36(uParam0, 64))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_119(uParam0->f_174, 0);
	}
	func_280(uParam0);
	func_2(&(uParam0->f_172), 8);
	if (!func_35(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 8192))
	{
		func_58(0);
		LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
		LAW::_0x292AD61A33A7A485();
		func_281(1, 16384, 1);
		func_2(&(uParam0->f_172), 67108864);
	}
	func_123(uParam0, 1, 0);
	func_231(1);
	func_235(1);
	func_282();
	func_167(uParam0);
	func_168(uParam0->f_174);
	func_169(uParam0->f_174);
	func_283(uParam0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	func_284(1);
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(-2012097661, false);
	}
	if (func_49(uParam0))
	{
		func_2(&(uParam0->f_172), 256);
	}
	if (func_7(uParam0->f_172, 8388608) || !func_7(uParam0->f_172, 256))
	{
		func_47(uParam0, 2);
	}
	MISC::_0x1096603B519C905F(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
	HUD::SET_MISSION_NAME(true, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
	AUDIO::_0xA6A3A3F96B8B030E();
	AUDIO::CLEAR_CONVERSATION_HISTORY();
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	func_285(uParam0);
	if (uParam0->f_174 != func_20())
	{
		if (!func_64(32768))
		{
			Var1 = { func_65(0) };
			if (!func_66(&Var1))
			{
				func_32(uParam0, 32);
			}
		}
	}
	iVar5 = 0;
	if (func_286(uParam0))
	{
		iVar5 = func_99(uParam0);
	}
	TELEMETRY::_TELEMETRY_MISSION_STARTED(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), 0, iVar5, func_36(uParam0, 64));
	if (uParam0->f_174 != func_20())
	{
		func_287(uParam0, func_65(0), func_65(1), 0, 1, 0);
	}
}

void func_91(var uParam0)
{
}

float func_92(var uParam0)
{
	return 1000f;
}

int func_93(var uParam0)
{
	return 3;
}

bool func_94(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_95(var uParam0)
{
}

int func_96(var uParam0)
{
	bool bVar0;

	if (func_31(uParam0))
	{
		return 1;
	}
	bVar0 = false;
	if (func_7(uParam0->f_172, 4096) || func_62())
	{
		bVar0 = true;
	}
	if (func_50(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024))
	{
		if (!bVar0)
		{
			return 1;
		}
	}
	if (func_7(uParam0->f_172, 262144) && !func_7(uParam0->f_172, 256))
	{
		func_110(uParam0, bVar0);
		if (func_7(uParam0->f_172, 524288))
		{
			return 1;
		}
		else if (func_7(uParam0->f_172, 1048576))
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
		if (uParam0->f_171 != 0 || func_288(uParam0))
		{
			if (func_289(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_97(var uParam0)
{
	return 7;
}

void func_98(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_176)
	{
		uParam0->f_176 = iParam1;
	}
}

int func_99(var uParam0)
{
	if (uParam0->f_174 == func_20())
	{
		return func_290();
	}
	return -1;
}

int func_100(var uParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var5;
	struct<4> Var9;

	iVar0 = iParam1;
	switch (iVar0)
	{
		case 0:
			if (func_291(&uLocal_935))
			{
				if (func_292(uParam0->f_174, 2))
				{
					Var1 = { func_65(0) };
					if (ENTITY::IS_ENTITY_DEAD(iLocal_941))
					{
						iLocal_941 = func_293(1, 1, 0, Var1, Var1.f_1, Var1.f_2, Var1.f_3);
						return 2;
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_941, 1, 0);
						PED::_SET_PED_ON_MOUNT(Global_35, iLocal_941, -1, true);
						ENTITY::_0x203BEFFDBE12E96A(iLocal_941, Var1, Var1.f_3, 1, 0, 1);
					}
				}
				func_294(uParam0->f_174);
				func_295(uParam0);
				AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
				func_296(uParam0, 0);
				func_287(uParam0, func_65(0), func_65(2), 0, 2, 0);
				func_297(1, 1);
				func_298(&Local_26, 2, 1);
				return 7;
			}
			break;
		case 1:
		case 2:
			if (func_291(&uLocal_935))
			{
				if (func_292(uParam0->f_174, 2))
				{
					Var5 = { func_65(2) };
					if (ENTITY::IS_ENTITY_DEAD(iLocal_941))
					{
						iLocal_941 = func_293(1, 1, 0, Var5, Var5.f_1, Var5.f_2, Var5.f_3);
						return 2;
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_941, 1, 0);
						PED::_SET_PED_ON_MOUNT(Global_35, iLocal_941, -1, true);
						ENTITY::_0x203BEFFDBE12E96A(iLocal_941, Var5, Var5.f_3, 1, 0, 1);
					}
				}
				if (func_299(&(Local_412[0 /*11*/]), 0))
				{
					AUDIO::DISABLE_PED_PAIN_AUDIO(&(Local_412[0 /*11*/]), true);
					ENTITY::_SET_ENTITY_HEALTH(&(Local_412[0 /*11*/]), 0, 0);
				}
				if (func_299(&(Local_412[1 /*11*/]), 0))
				{
					AUDIO::DISABLE_PED_PAIN_AUDIO(&(Local_412[1 /*11*/]), true);
					ENTITY::_SET_ENTITY_HEALTH(&(Local_412[1 /*11*/]), 0, 0);
				}
				if (func_299(&(Local_412[2 /*11*/]), 0))
				{
					if (iVar0 == 1)
					{
						AUDIO::DISABLE_PED_PAIN_AUDIO(&(Local_412[2 /*11*/]), true);
						ENTITY::_SET_ENTITY_HEALTH(&(Local_412[2 /*11*/]), 0, 0);
					}
					else
					{
						func_27(Local_412[2 /*11*/]);
					}
					iLocal_606 = 1;
				}
				if (iVar0 == 2)
				{
					func_287(uParam0, func_65(2), func_65(3), 2, 3, 0);
					iLocal_635 = 1;
					func_300(2);
				}
				else
				{
					func_287(uParam0, func_65(1), func_65(3), 1, 3, 0);
					iLocal_635 = 0;
					func_300(1);
				}
				AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
				func_296(uParam0, 0);
				func_297(1, 1);
				return 7;
			}
			break;
		case 3:
			if (func_301(uParam0))
			{
				if (func_292(uParam0->f_174, 2))
				{
					Var9 = { func_65(3) };
					if (ENTITY::IS_ENTITY_DEAD(iLocal_941))
					{
						iLocal_941 = func_293(1, 1, 0, Var9, Var9.f_1, Var9.f_2, Var9.f_3);
						return 2;
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_941, 1, 0);
						PED::_SET_PED_ON_MOUNT(Global_35, iLocal_941, -1, true);
						ENTITY::_0x203BEFFDBE12E96A(iLocal_941, Var9, Var9.f_3, 1, 0, 1);
						if (!PED::IS_PED_READY_TO_RENDER(iLocal_941))
						{
							return 2;
						}
					}
				}
				else if (ENTITY::IS_ENTITY_DEAD(iLocal_941))
				{
					iLocal_941 = func_293(1, 1, 0, -5755.63f, -3620.66f, -24.36f, 84.18f);
					return 2;
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iLocal_941, 1, 0);
					ENTITY::_0x203BEFFDBE12E96A(iLocal_941, -5755.63f, -3620.66f, -24.36f, 84.18f, 1, 0, 1);
					if (!PED::IS_PED_READY_TO_RENDER(iLocal_941))
					{
						return 2;
					}
				}
				func_300(2);
				func_287(uParam0, func_65(3), func_65(4), 3, 4, 0);
				iLocal_938 = 1;
				iLocal_635 = 1;
				AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
				func_296(uParam0, 0);
				func_297(1, 1);
				return 7;
			}
			break;
		case 4:
			if (func_302(uParam0, 1))
			{
				func_303(&Local_26);
				TASK::_0xFF745B0346E19E2C(-2146271366);
				if (TASK::_0xB8F52A3F84A7CC59(-2146271366) && func_291(&uLocal_935))
				{
					if (ENTITY::IS_ENTITY_DEAD(iLocal_941))
					{
						iLocal_941 = func_293(1, 1, 0, -5848.74f, -3627.67f, -25.95f, 93.43f);
						return 2;
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_941, 1, 0);
						ENTITY::_0x203BEFFDBE12E96A(iLocal_941, -5848.74f, -3627.67f, -25.95f, 93.43f, 1, 0, 1);
						if (!PED::IS_PED_READY_TO_RENDER(iLocal_941))
						{
							return 2;
						}
					}
					if (!func_304(iLocal_692, -2108652971))
					{
						ENTITY::_0x203BEFFDBE12E96A(iLocal_692, -5857.747f, -3632.866f, -26.7362f, 180.2059f, 1, 0, 1);
						TASK::CLEAR_PED_TASKS(iLocal_692, 1, 0);
						TASK::_0xF0B4F759F35CC7F5(iLocal_692, -2146271366, 0, 0, 0);
						PED::_0x2208438012482A1A(iLocal_692, true, false);
						return 2;
					}
					func_300(3);
					func_287(uParam0, func_65(4), func_65(5), 4, 5, 0);
					func_305(7);
					AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
					iLocal_953 = 1;
					iLocal_896 = 1;
					iLocal_898 = 1;
					func_296(uParam0, 0);
					func_297(1, 1);
					return 7;
				}
			}
			break;
		case 5:
			if (func_302(uParam0, 0))
			{
				TASK::_0xFF745B0346E19E2C(-2146271366);
				if (TASK::_0xB8F52A3F84A7CC59(-2146271366) && func_291(&uLocal_935))
				{
					if (func_299(iLocal_692, 0))
					{
						if (PED::_0x09B83E68DE004CD4(iLocal_692) == 0)
						{
							if (!func_304(iLocal_692, -2108652971))
							{
								ENTITY::SET_ENTITY_COORDS(iLocal_692, Global_36, false, false, true, true);
								TASK::_0xF0B4F759F35CC7F5(iLocal_692, -2146271366, Global_35, 0, 0);
								PED::_0x2208438012482A1A(iLocal_692, true, false);
								PED::_0x2208438012482A1A(Global_35, true, false);
							}
						}
						if (PED::_0x09B83E68DE004CD4(iLocal_692) == Global_35)
						{
							func_300(3);
							func_306(500, 1);
							func_287(uParam0, func_65(5), func_65(6), 5, 6, 0);
							iLocal_953 = 1;
							iLocal_896 = 1;
							iLocal_898 = 1;
							func_296(uParam0, 0);
							return 7;
						}
					}
				}
			}
			break;
		case 6:
			if (func_302(uParam0, 0))
			{
				func_307(iLocal_694, Local_26.f_300, 0);
				func_308(iLocal_694, Local_26.f_300, Local_26.f_299);
				func_309(Local_26.f_300, iLocal_694);
				func_27(&iLocal_692);
				func_310(Global_40.f_9074.f_3, 0, 1065353216, 1, 0, 0, 1, 752097756);
				func_306(500, 1);
				return 8;
			}
			break;
		default:
			func_306(500, 1);
			return 7;
	}
	return 2;
}

void func_101(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (!func_150(0, 0, 1) || iParam0)
	{
		iVar0 = func_311();
		iVar1 = func_312(iVar0);
		fVar2 = (1f - (MISC::ABSF(BUILTIN::TO_FLOAT(iVar1)) / BUILTIN::TO_FLOAT(8)));
		fVar3 = func_313(iVar0 < 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		fVar4 = func_313(iVar0 > 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
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

int func_102(var uParam0)
{
	if (func_50(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024) && uParam0->f_176 == 4)
	{
		if (!func_7(uParam0->f_172, 1))
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
	if (func_7(uParam0->f_172, 256))
	{
		if (!func_314(uParam0))
		{
			if ((func_7(uParam0->f_172, 8192) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_751)) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_751, 0))
			{
				if (func_7(uParam0->f_172, 8388608) || func_89(uParam0))
				{
					func_47(uParam0, 2);
					if (!func_7(uParam0->f_172, 16))
					{
						func_91(uParam0);
					}
				}
			}
			return 0;
		}
	}
	else if (func_7(uParam0->f_172, 262144) && !func_7(uParam0->f_172, 256))
	{
		func_110(uParam0, 0);
		if (!func_7(uParam0->f_172, 1048576))
		{
			return 0;
		}
	}
	else
	{
		func_315();
		func_316(uParam0);
		if (!func_317(uParam0))
		{
			return 0;
		}
	}
	if (!func_7(uParam0->f_172, 1))
	{
	}
	return 1;
}

void func_103(var uParam0)
{
	if (func_7(uParam0->f_172, 2048))
	{
		return;
	}
	if (func_104(&(uParam0->f_2575)))
	{
		func_318(&(uParam0->f_206), &(uParam0->f_753));
		if (uParam0->f_176 == 4 && !func_35(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 512))
		{
			func_319(uParam0, 0);
		}
	}
	if (func_7(uParam0->f_172, 1024) && uParam0->f_176 == 4)
	{
		func_287(uParam0, func_65(0), func_65(1), 0, 1, 1);
	}
	func_3(&(uParam0->f_172), 512);
	if (uParam0->f_176 == 4)
	{
		if (func_320(Global_35))
		{
			if (func_321())
			{
				func_322(42, 1);
			}
		}
	}
	MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
	SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	func_2(&(uParam0->f_172), 2048);
}

int func_104(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return 1;
}

int func_105(var uParam0)
{
	struct<4> Var0;

	MemCopy(&Var0, {uParam0->f_2575}, 4);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return 1;
	}
	return func_323(Var0, &(uParam0->f_206), uParam0);
}

void func_106(var uParam0, bool bParam1)
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
	func_3(&(uParam0->f_172), 1);
	func_3(&(uParam0->f_172), 16);
	func_3(&(uParam0->f_172), 2048);
	if (func_104(&(uParam0->f_2575)))
	{
		func_324(&(uParam0->f_206));
	}
	func_325(&(uParam0->f_206));
	func_326(uParam0);
}

int func_107(var uParam0)
{
	return 8;
}

int func_108(var uParam0)
{
	if (func_7(uParam0->f_172, 256) && !func_7(uParam0->f_172, 1024))
	{
		if (!func_314(uParam0))
		{
			if (func_7(uParam0->f_172, 512) && func_7(uParam0->f_172, 8192))
			{
				if (func_89(uParam0))
				{
					if (!func_7(uParam0->f_172, 16))
					{
						func_91(uParam0);
					}
				}
			}
			return 1;
		}
		else
		{
			if (func_7(uParam0->f_172, 1024) && uParam0->f_176 == 4)
			{
				func_287(uParam0, func_65(0), func_65(1), 0, 1, 1);
			}
			return 0;
		}
	}
	return 0;
}

int func_109(var uParam0)
{
	return 0;
}

void func_110(var uParam0, bool bParam1)
{
	if (!func_7(uParam0->f_172, 262144))
	{
		return;
	}
	if (func_7(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		func_3(&(uParam0->f_172), 262144);
		return;
	}
	if (!func_7(uParam0->f_172, 1048576))
	{
		if (func_327(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			func_2(&(uParam0->f_172), 1048576);
		}
		if (!func_7(uParam0->f_172, 524288))
		{
			if (func_328(&(uParam0->f_753)))
			{
				func_2(&(uParam0->f_172), 524288);
			}
		}
	}
}

int func_111(var uParam0)
{
	if (func_299(iLocal_692, 0))
	{
		PED::SET_PED_RESET_FLAG(iLocal_692, 25, true);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	CAM::_0xC252C0CC969AF79A(1);
	switch (iLocal_15)
	{
		case 0:
			if (func_329(uParam0))
			{
				if (iLocal_635)
				{
					func_300(2);
					func_287(uParam0, func_65(2), func_65(3), 2, 3, 0);
				}
				else
				{
					func_300(1);
					func_287(uParam0, func_65(1), func_65(3), 1, 3, 0);
				}
			}
			break;
		case 1:
			if (func_330(uParam0))
			{
				func_300(2);
			}
			break;
		case 2:
			func_331(uParam0);
			if (func_332(uParam0))
			{
				func_303(&Local_26);
				func_300(3);
			}
			break;
		case 3:
			func_333(&Local_26);
			if (func_334(uParam0))
			{
				func_300(4);
			}
			break;
		case 4:
			if (func_335(&Local_26))
			{
				func_336(1791585045, 1, 0, -142743235, 0);
				return 8;
			}
			break;
	}
	return 7;
}

bool func_112(int iParam0)
{
	return func_337(iParam0) == 0;
}

int func_113(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

int func_114(int iParam0)
{
	if (!func_61(iParam0))
	{
		return 0;
	}
	return func_339(func_338(iParam0));
}

int func_115(int iParam0)
{
	if (!func_61(iParam0))
	{
		return -1;
	}
	return func_340(func_338(iParam0));
}

int func_116(int iParam0)
{
	if (!func_61(iParam0))
	{
		return -1;
	}
	return func_341(func_338(iParam0));
}

void func_117()
{
	struct<2> Var0;

	Var0.f_1 = -1;
	MISC::_COPY_MEMORY(Global_1879514, &Var0, 20);
}

void func_118(char* sParam0, int iParam1)
{
	StringCopy(&(Global_1879514->f_2), sParam0, 32);
	Global_1879514->f_8 = iParam1;
}

void func_119(int iParam0, int iParam1)
{
	if (!func_207(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		func_342(&(((*Global_1347702)[iParam0 /*49*/])->f_14));
		func_180(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
		func_343(iParam0);
		if ((!func_222(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43890) || iParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(((*Global_1347702)[iParam0 /*49*/])->f_40, 0);
			func_180(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
			func_344(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		else
		{
			func_182(iParam0, 16384);
			func_345(iParam0, 1, func_73(iParam0));
		}
	}
}

void func_120(var uParam0)
{
	func_346(1, &(uParam0->f_2605.f_482));
}

int func_121()
{
	return Global_1894899->f_2;
}

void func_122(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_347(iParam0))
	{
		return;
	}
	bVar0 = func_348(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_349(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_351(iParam0, func_350());
			func_352(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_353(iParam0, 67108864);
		func_351(iParam0, -15);
	}
	func_354(iParam0);
}

void func_123(var uParam0, int iParam1, int iParam2)
{
	if (func_355(0))
	{
		if (func_356(0))
		{
			func_357(0);
		}
	}
	if (func_355(1))
	{
		if (func_356(1))
		{
			func_357(1);
		}
	}
}

bool func_124(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_125(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_126(var uParam0)
{
}

void func_127(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_114(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_115(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_207(iVar1))
			{
				if (func_124(iVar1, 4))
				{
					func_230(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_358(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_115(iParam0);
		if (iVar3 == 59)
		{
			func_358(1);
		}
		else if (iVar3 == 61)
		{
			func_358(0);
		}
		else if (iVar3 == 83)
		{
			func_358(0);
		}
	}
}

void func_128()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_207(iVar0))
		{
			if (func_124(iVar0, 4))
			{
				if (func_124(iVar0, 16))
				{
					func_359(iVar0, 1);
				}
				if (func_124(iVar0, 8))
				{
					func_360(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_129(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_130(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, int iParam11)
{
	char* sVar0;

	func_361(uParam0->f_174, sParam1, bParam5, fParam6, 0, 0, -1, -1, 0);
	if (iParam2 || !func_362(sParam1))
	{
		func_363(sParam1, iParam3, bParam4, bParam5, sParam7, sParam8, sParam9, sParam10, iParam11);
		sVar0 = UILOG::_UILOG_GET_CACHED_OBJECTIVE();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && MISC::ARE_STRINGS_EQUAL(sVar0, sParam1))
		{
			UILOG::_UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE();
		}
	}
}

var func_131()
{
	return Global_1572864->f_15;
}

void func_132(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	var uVar0;

	if (!func_207(iParam0))
	{
		return;
	}
	if (func_364())
	{
		func_272(iParam0, 1);
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
		if (!func_64(32768))
		{
			if (STATS::CHAL_IS_GOAL_ACTIVE(-816321659, -1044347982))
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(-1718529554, 1);
			}
		}
	}
	else if (iParam0 == 102)
	{
		if (!func_364())
		{
			((*Global_1347702)[iParam0 /*49*/])->f_35 = 104;
			((*Global_1347702)[104 /*49*/])->f_48 = ((*Global_1347702)[iParam0 /*49*/])->f_15;
		}
	}
	func_365(iParam0, 0, iParam3);
	if (func_207(((*Global_1347702)[iParam0 /*49*/])->f_35))
	{
		func_366(((*Global_1347702)[iParam0 /*49*/])->f_35);
		if (iParam1 == 1)
		{
			func_367(((*Global_1347702)[iParam0 /*49*/])->f_35, 0);
			if (func_368(iParam0))
			{
				((*Global_1347702)[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])->f_43 = ((*Global_1347702)[iParam0 /*49*/])->f_43;
			}
		}
	}
	else
	{
		func_369();
	}
	if (!func_35(((*Global_1347702)[iParam0 /*49*/])->f_12, 1) && !func_35(((*Global_1347702)[iParam0 /*49*/])->f_12, 33554432))
	{
		if (func_35(((*Global_1347702)[iParam0 /*49*/])->f_12, 262144))
		{
			if (bParam5)
			{
				func_370(iParam0);
			}
			bParam5 = false;
			uVar0 = func_371(((*Global_1347702)[iParam0 /*49*/])->f_15);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
			{
				MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&uVar0), 2);
			}
			func_183(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 262144);
		}
	}
	if (bParam2 == 1)
	{
		bParam2 = func_35(((*Global_1347702)[iParam0 /*49*/])->f_12, 4);
	}
	if (!func_64(32768))
	{
		func_372(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_373(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam6);
	}
	func_374(iParam0);
}

int func_133(int iParam0)
{
	if (!func_207(iParam0))
	{
		return 0;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_15;
}

int func_134(int iParam0)
{
	iParam0 = func_375(iParam0);
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

void func_135()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;

	func_141(4112);
	func_140(6);
	vVar2 = { func_376(((*Global_2621440)[0 /*12065*/])->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_377(vVar2, uVar1, uVar0, 0);
	func_378(vVar2);
	Global_40.f_9.f_15 = func_188(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_136(int iParam0)
{
	if (func_206() != -1)
	{
		return;
	}
	func_141(32);
	if (iParam0 == 0)
	{
		func_141(16);
	}
	else if (iParam0 == 1)
	{
		func_141(8);
	}
	func_379();
	Global_43888 = 1;
}

void func_137(int iParam0, bool bParam1)
{
	if (func_206() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_64(32768))
	{
		return;
	}
	if (!func_64(32768))
	{
		func_380(1, bParam1);
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
	if (func_64(32768))
	{
		((*Global_2621440)[iParam0 /*12065*/])->f_9.f_14 = func_350();
	}
}

void func_138(int iParam0)
{
	Global_1310720->f_9 = iParam0;
}

void func_139()
{
	struct<10> Var0;
	struct<16> Var10;

	Global_1310720->f_8 = 0;
	Global_1935630->f_4 = 1;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "respawn_persistence", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_381(Var10, 0);
}

void func_140(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = MISC::GET_GAME_TIMER();
}

void func_141(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_142(var uParam0)
{
	if (!func_299(Global_35, 0))
	{
		func_365(uParam0->f_174, 0, 0);
		((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = 0;
	}
}

void func_143(bool bParam0, bool bParam1)
{
	if (((WEAPON::IS_WEAPON_VALID(Global_1935630->f_44) && WEAPON::_0x6AD66548840472E5(Global_1935630->f_44)) && PED::GET_PED_RESET_FLAG(Global_35, 0)) && CAM::_0xA24C1D341C6E0D53(1, 1, 1))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630->f_44 == joaat("weapon_kit_binoculars") && PED::GET_PED_RESET_FLAG(Global_35, 0))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630->f_44 == joaat("weapon_kit_camera"))
	{
		func_382(0);
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
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

int func_144(var uParam0)
{
	if (func_64(32768))
	{
		return 0;
	}
	if (func_35(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 134217728))
	{
		return 1;
	}
	return 0;
}

void func_145(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_383(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_384(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_384(&(Global_1347343->f_11), 16384);
	}
	if (func_385() >= 2)
	{
		if (!func_383(Global_1347343->f_11, 16384))
		{
			func_384(&(Global_1347343->f_11), 8);
		}
		func_162(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_279(Global_1935630, 2048);
	func_386(bParam5);
}

bool func_146(var uParam0)
{
	return uParam0->f_781;
}

void func_147(var uParam0)
{
	func_387(1, &(uParam0->f_2605.f_482));
}

void func_148(int iParam0)
{
	int iVar0;

	if (!func_61(iParam0))
	{
		return;
	}
	if (iParam0 != func_60(0))
	{
		return;
	}
	if (func_113(iParam0) == 0)
	{
	}
	iVar0 = func_114(iParam0);
	if (func_388(iParam0) == 3)
	{
		if (func_113(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_113(iParam0)))
		{
			if (func_114(iParam0) != 1 && func_114(iParam0) != 8)
			{
				func_389(func_114(iParam0), func_113(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_390(iParam0);
	func_204(1);
	func_391(0);
	func_392(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_393(1);
			func_394(15, 0, 1);
			break;
		case 4:
			func_394(10, 0, 1);
			break;
		case 8:
			func_394(10, 0, 1);
			break;
		case 9:
			func_394(10, 0, 1);
			break;
		case 2:
			func_394(10, 0, 1);
			break;
		case 6:
			func_394(10, 0, 1);
			break;
		case 5:
			func_394(10, 0, 1);
			break;
	}
	func_395(1);
}

void func_149(int iParam0, bool bParam1, float fParam2)
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
		fParam2 = BUILTIN::VDIST2(Global_36, func_396(iParam0));
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
			func_180(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 512);
		}
	}
	else if (fParam2 <= 100f)
	{
		if (func_397())
		{
			return;
		}
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "RCM_INVALID_TOD", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_398(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 1024 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_ANTAGONIZE", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_398(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 4096 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_MEMORY", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_398(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 2048 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_WANTED_REGION", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_398(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 16384 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_398(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 8192 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_COMBAT", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_398(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 32768 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED_2", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_398(sVar1, 10000, 0, 0, 0, 1);
		}
		func_51(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 512);
	}
}

int func_150(int iParam0, bool bParam1, int iParam2)
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
		if (func_399())
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
		iVar0 = func_115(&(Global_1898164->f_1[0 /*5*/]));
		if (func_207(iVar0) && func_35(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_61(&(Global_1898164->f_1[0 /*5*/])))
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

int func_151(var uParam0)
{
	return 1;
}

int func_152()
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

float func_153(var uParam0)
{
	return func_400(&Local_26);
}

int func_154(var uParam0)
{
	switch (func_75(uParam0))
	{
		case 0:
			if (func_401(&Local_26))
			{
				func_309(Local_26.f_300, ENTITY::GET_ENTITY_MODEL(Local_26.f_67));
				func_27(&iLocal_692);
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 1:
			return 1;
		default:
			return 1;
	}
	return 1;
}

int func_155()
{
	return Global_1572864->f_8;
}

int func_156(int iParam0)
{
	if (func_114(iParam0) == 8)
	{
		return func_115(iParam0);
	}
	return -1;
}

void func_157(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_158(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_159(bool bParam0)
{
	Global_1572864->f_14 = bParam0;
	if (bParam0)
	{
		func_161(1);
	}
}

void func_160(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_161(0);
	}
}

void func_161(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_162(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_163(var uParam0)
{
	HUD::_TEXT_BLOCK_DELETE("BHCR");
	func_402(&Local_26, 1);
	func_336(1791585045, 1, 0, -142743235, 0);
	if (iLocal_709 && ENTITY::DOES_ENTITY_EXIST(iLocal_692))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_692, 0);
	}
	if (&iLocal_471[0])
	{
		iLocal_471[0] = 0;
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(&(iLocal_468[0]));
	}
	if (&iLocal_471[1])
	{
		iLocal_471[1] = 0;
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(&(iLocal_468[1]));
	}
	func_403(iLocal_450);
	func_403(iLocal_451);
	func_403(iLocal_452);
	func_404(&iLocal_475);
}

void func_164(int iParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0, 0))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
		}
	}
}

void func_165(var uParam0)
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
	func_236(&(uParam0->f_2588));
}

void func_166(var uParam0)
{
	struct<2> Var0;

	Var0 = { func_405(uParam0->f_174) };
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&Var0))
	{
		HUD::_TEXT_BLOCK_DELETE(&Var0);
	}
	Var0 = { func_406(uParam0->f_174) };
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&Var0))
	{
		HUD::_TEXT_BLOCK_DELETE(&Var0);
	}
}

int func_167(var uParam0)
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

void func_168(int iParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_22))
	{
		ITEMSET::DESTROY_ITEMSET(((*Global_1347702)[iParam0 /*49*/])->f_22);
		((*Global_1347702)[iParam0 /*49*/])->f_23 = 0;
	}
}

void func_169(int iParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_21))
	{
		ITEMSET::DESTROY_ITEMSET(((*Global_1347702)[iParam0 /*49*/])->f_21);
	}
}

void func_170(int iParam0)
{
	switch (func_206())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

bool func_171(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_172(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	if (!func_407(iParam0))
	{
		return;
	}
	if (!func_408(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = func_409(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_KEEP_TASK(iVar0, false);
		}
	}
	func_410(iParam0, 0, 0, bParam1, fParam2, bParam3, bParam4, bParam5, bParam6, 0, 0);
	func_411(iParam0, 0);
	func_412(iParam0);
}

void func_173(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_174(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_2603))
	{
		POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_2603);
		VOLUME::DELETE_VOLUME(uParam0->f_2603);
	}
}

void func_175(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_2604))
	{
		POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_2604);
		VOLUME::DELETE_VOLUME(uParam0->f_2604);
	}
}

void func_176(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_41))
	{
		func_413(((*Global_1347702)[iParam0 /*49*/])->f_41);
		if (iParam0 == 91 || iParam0 == 129)
		{
			PATHFIND::RESET_ROADS_IN_VOLUME(((*Global_1347702)[iParam0 /*49*/])->f_41, 0);
		}
		VOLUME::DELETE_VOLUME(((*Global_1347702)[iParam0 /*49*/])->f_41);
	}
}

void func_177(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_414(iParam0, &iVar1, &iVar0))
	{
		if (func_415(iVar1, iVar0, 1))
		{
			func_416(iVar1, iVar0);
		}
	}
}

bool func_178(int iParam0)
{
	int iVar0;

	iVar0 = func_337(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_179(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_61(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_178(iParam0) && !func_276(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_113(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_178(iParam0))
	{
		iParam2 = -1;
	}
	if (func_388(iParam0) == 3 || (func_388(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_113(iParam0))))
	{
		func_389(func_114(iParam0), func_113(iParam0), iParam2);
		if ((!func_61(Global_1572864->f_8) && !func_150(0, 1, 0)) && !func_94(&Global_1935630, 32768))
		{
			iVar0 = func_417(iParam0);
			if (iVar0 != -1)
			{
				func_418(0);
			}
			else if (func_114(iParam0) == 8)
			{
				iVar0 = func_419();
				if (iVar0 != -1)
				{
					func_418(0);
				}
			}
		}
	}
	func_392(iParam0, 0);
	if (func_60(0) == iParam0)
	{
		func_204(1);
		func_391(0);
		func_395(1);
	}
	func_420(iParam0, 1);
	func_390(iParam0);
}

void func_180(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_181(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_35;
	if (iVar0 == -1)
	{
		return;
	}
	if (iParam1 == 1)
	{
		func_51(&(((*Global_1347702)[iVar0 /*49*/])->f_13), 8);
	}
	else
	{
		func_180(&(((*Global_1347702)[iVar0 /*49*/])->f_13), 8);
	}
}

void func_182(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_207(iParam0))
	{
		return;
	}
	func_421(&(((*Global_1347702)[iParam0 /*49*/])->f_14), iParam1);
	func_421(&(((*Global_1347702)[iParam0 /*49*/])->f_14), 2);
	func_216(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 16384);
	func_180(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_207(&(Global_40.f_450[iVar0])))
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

void func_183(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_184(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 25)
	{
		func_422(uParam0->f_41[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_423(uParam0->f_117[iVar0 /*5*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_424((*uParam0)[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_425(uParam0->f_28[iVar0 /*3*/]);
		iVar0++;
	}
	func_166(uParam0);
}

void func_185(int iParam0)
{
	iParam0 = func_375(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_426(iParam0, 32);
	func_427();
}

void func_186(bool bParam0)
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

bool func_187(var uParam0, int iParam1)
{
	return (uParam0->f_1560 && iParam1) != 0;
}

int func_188(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = func_121();
	if (func_347(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_428(vParam0, bParam3);
}

void func_189(var uParam0, int iParam1)
{
	uParam0->f_748 = iParam1;
}

void func_190(var uParam0, int iParam1)
{
	uParam0->f_749 = iParam1;
}

void func_191(var uParam0)
{
	func_429(uParam0, 0);
	func_430(uParam0, 0);
	func_431(uParam0, 1);
	func_432(uParam0, 1);
	func_433(uParam0, 0);
	func_434(uParam0, 1);
	func_435(uParam0, 1, 1, 1);
}

void func_192(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_436(&(uParam0->f_1), 2);
	}
	else
	{
		func_437(&(uParam0->f_1), 2);
	}
}

void func_193(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_436(&(uParam0->f_1), 8);
	}
	else
	{
		func_437(&(uParam0->f_1), 8);
	}
}

void func_194(var uParam0)
{
	func_191(uParam0);
	func_438(uParam0, 1);
	func_192(uParam0, 1);
	func_431(uParam0, 1);
	func_439(uParam0, 1);
	func_193(uParam0, 1);
	func_429(uParam0, 1);
	func_440(uParam0, 1);
	func_430(uParam0, 0);
}

int func_195(var uParam0, int iParam1)
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

int func_196(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!func_441((*uParam0)[iVar0 /*3*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_197(var uParam0, char* sParam1)
{
	struct<2> Var0;

	Var0 = { func_405(uParam0->f_174) };
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
			uParam0->f_2573 = { func_406(uParam0->f_174) };
		}
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_2573)))
	{
		HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_2573));
	}
}

void func_198(var uParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = func_442(&(uParam0->f_117), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_443(&(uParam0->f_117));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_117[iVar0 /*5*/] = cParam1;
	(uParam0->f_117[iVar0 /*5*/])->f_1 = iParam2;
	(uParam0->f_117[iVar0 /*5*/])->f_2 = iParam3;
	(uParam0->f_117[iVar0 /*5*/])->f_4 = ((uParam0->f_117[iVar0 /*5*/])->f_4 || iParam4);
	if (func_7(uParam0->f_172, 8192))
	{
		func_3(&(uParam0->f_172), 8192);
	}
}

int func_199(var uParam0)
{
	return uParam0->f_168;
}

void func_200(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (func_444((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1))
		{
			func_445((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_41[iVar0 /*3*/])->f_2 == 0 || !func_444((uParam0->f_41[iVar0 /*3*/])->f_2, iParam2))
			{
				func_422(uParam0->f_41[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_444((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1))
		{
			func_445((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1);
			if ((uParam0->f_117[iVar0 /*5*/])->f_4 == 0 || !func_444((uParam0->f_117[iVar0 /*5*/])->f_4, iParam2))
			{
				func_423(uParam0->f_117[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_444(((*uParam0)[iVar0 /*3*/])->f_2, iParam1))
		{
			func_445(((*uParam0)[iVar0 /*3*/])->f_2, iParam1);
			if (((*uParam0)[iVar0 /*3*/])->f_2 == 0 || !func_444(((*uParam0)[iVar0 /*3*/])->f_2, iParam2))
			{
				func_424((*uParam0)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_444((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1))
		{
			func_445((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_28[iVar0 /*3*/])->f_2 == 0 || !func_444((uParam0->f_28[iVar0 /*3*/])->f_2, iParam2))
			{
				func_425(uParam0->f_28[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

int func_201(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_44 != -1)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_44 != 0)
		{
			if (!func_446(((*Global_1347702)[iParam0 /*49*/])->f_44))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_202(var uParam0)
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
						*uParam0 = func_447(vVar0.z);
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

void func_203(bool bParam0)
{
	if (!bParam0)
	{
		LAW::_0x61B98367D93F012F(PLAYER::GET_PLAYER_INDEX());
	}
	LAW::_ENABLE_DISPATCH_LAW(bParam0);
	LAW::_ENABLE_DISPATCH_LAW_2(bParam0);
}

void func_204(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_129(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_279(Global_1935630, 4194304);
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

int func_205(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if (func_441(uParam0->f_41[iVar1 /*3*/]))
		{
			if (func_444((uParam0->f_41[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_448(uParam0->f_41[iVar1 /*3*/]))
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
		if (func_449(uParam0->f_117[iVar1 /*5*/]))
		{
			if (func_444((uParam0->f_117[iVar1 /*5*/])->f_4, iParam1))
			{
				if (!func_450(uParam0->f_117[iVar1 /*5*/]))
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
		if (func_451((*uParam0)[iVar1 /*3*/]))
		{
			if (func_444(((*uParam0)[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_452((*uParam0)[iVar1 /*3*/]))
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
		if (func_453(uParam0->f_28[iVar1 /*3*/]))
		{
			if (func_444((uParam0->f_28[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_454(uParam0->f_28[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (iParam1 != 0 && iParam1 != 4)
	{
		if (!func_455(uParam0->f_174))
		{
			iVar0 = 0;
		}
		if (!func_456(uParam0))
		{
			iVar0 = 0;
		}
	}
	if (!func_457(uParam0, iParam1))
	{
		iVar0 = 0;
	}
	if (uParam0->f_177 == 2 && !PED::IS_INSTANTLY_FILL_PED_POPULATION_FINISHED())
	{
		iVar0 = 0;
	}
	if (iParam1 == 2)
	{
		if (!func_7(uParam0->f_172, 32))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_206()
{
	return Global_1572887->f_12;
}

bool func_207(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

Vector3 func_208(int iParam0)
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

int func_209(vector3 vParam0, var uParam3)
{
	int iVar0;

	if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) != 1)
	{
		func_137(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_458(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_459(0, 0);
		if (func_460(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_461(1, 0);
		}
	}
	else
	{
		func_461(1, 0);
	}
	func_158(0);
	func_462(0, vParam0, uParam3);
	return 1;
}

char* func_210(int iParam0)
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

void func_211(var uParam0, char* sParam1, int iParam2, float fParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	func_361(uParam0->f_174, sParam1, iParam2, fParam3, sParam4, sParam5, sParam6, sParam7, iParam8);
}

int func_212(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_67))
	{
		if (func_463(uParam0->f_329, 4194304))
		{
			uParam0->f_64 = 4;
			func_344(&(uParam0->f_68));
			return 1;
		}
		return 0;
	}
	if (uParam0->f_61 <= 0)
	{
		if (func_464(uParam0->f_67))
		{
			if (Global_40.f_9074.f_4 <= 0)
			{
				uParam0->f_64 = 0;
				func_344(&(uParam0->f_68));
				return 1;
			}
			if (!func_83(&(uParam0->f_321)))
			{
				if (func_465(uParam0->f_67))
				{
					func_265(&(uParam0->f_321));
				}
			}
			else if ((!func_465(uParam0->f_67) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 4) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 5)
			{
				func_236(&(uParam0->f_321));
			}
			else if (func_466(&(uParam0->f_321)) > 5f)
			{
				uParam0->f_64 = 4;
				func_344(&(uParam0->f_68));
				return 1;
			}
		}
		else if (!func_83(&(uParam0->f_321)))
		{
			if (func_465(uParam0->f_67))
			{
				func_265(&(uParam0->f_321));
			}
		}
		else if ((!func_465(uParam0->f_67) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 4) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 5)
		{
			func_236(&(uParam0->f_321));
		}
		else if (func_466(&(uParam0->f_321)) > 5f)
		{
			uParam0->f_64 = 4;
			func_344(&(uParam0->f_68));
			return 1;
		}
	}
	fVar0 = func_467(Global_35, uParam0->f_67, 1, 1);
	if (uParam0->f_63 != 10)
	{
		if (fVar0 > fParam2)
		{
			if (func_464(uParam0->f_67))
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
			if (!func_463(uParam0->f_329, 16))
			{
				func_298(uParam0, 256, 1);
				func_468(&(uParam0->f_329), 16);
			}
		}
		else if (fVar0 < (fParam1 - 25f))
		{
			if (func_463(uParam0->f_329, 16))
			{
				func_469(&(uParam0->f_329), 16);
				if (func_464(uParam0->f_67) || PED::IS_PED_HOGTIED(uParam0->f_67))
				{
					func_298(uParam0, 16, 0);
				}
				else
				{
					func_298(uParam0, 4, 0);
				}
			}
		}
	}
	if (func_222(PLAYER::PLAYER_ID(), 1, 1, 1))
	{
		uParam0->f_64 = 5;
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_69))
	{
		if (func_299(uParam0->f_69, 0))
		{
			if (func_470(uParam0))
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
		fVar1 = func_472(Global_35, func_471(uParam0->f_300), 1);
		if (fVar1 > 50f)
		{
			uParam0->f_64 = 7;
			return 1;
		}
		else if (fVar1 > 35f)
		{
			if (!func_463(uParam0->f_329, 131072))
			{
				func_468(&(uParam0->f_329), 131072);
				func_298(uParam0, 512, 1);
			}
		}
		else if (fVar1 < 30f)
		{
			if (func_463(uParam0->f_329, 131072))
			{
				func_469(&(uParam0->f_329), 131072);
				func_298(uParam0, 1024, 0);
			}
		}
	}
	if (uParam0->f_63 == 10)
	{
		fVar2 = func_472(Global_35, func_471(uParam0->f_300), 1);
		if (fVar2 > 75f)
		{
			uParam0->f_64 = 7;
			return 1;
		}
		else if (fVar2 > 55f)
		{
			if (!func_463(uParam0->f_329, 33554432))
			{
				func_468(&(uParam0->f_329), 33554432);
				func_298(uParam0, 4096, 1);
			}
		}
		else if (fVar2 < 50f)
		{
			if (func_463(uParam0->f_329, 33554432))
			{
				func_469(&(uParam0->f_329), 33554432);
				func_298(uParam0, 2048, 0);
			}
		}
	}
	return 0;
}

int func_213(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_473(((*Global_1347702)[iParam0 /*49*/])->f_15) != 0)
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

int func_214(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_474(0);
	if (iVar0 == 11)
	{
		iVar1 = func_475(func_116(iParam1), 1);
		if (iVar1 != -589165916)
		{
			if ((iVar1 == -103573613 || iVar1 == 194099983) || iVar1 == 2038046186)
			{
				iVar2 = func_476(Global_40.f_4283);
				if (func_347(iVar2) && iVar2 == ((*Global_1347702)[uParam0->f_174 /*49*/])->f_27)
				{
					return 1;
				}
			}
		}
	}
	else if (iVar0 == 4)
	{
		iVar3 = func_477(iParam1);
		if (iVar3 != -1)
		{
			if ((iVar3 == 1 || iVar3 == 3) || iVar3 == 2)
			{
				if (func_347(Global_1894899->f_2) && Global_1894899->f_2 == func_476(Global_40.f_4283))
				{
					return 1;
				}
			}
		}
	}
	if (func_478(uParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_215(int iParam0)
{
	int iVar0;
	int iVar1;

	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 8 != 0)
	{
		return 1;
	}
	if (func_479(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		if (!func_479(((*Global_1835011)[44 /*74*/])->f_1, 1))
		{
			if (iParam0 != 82 && iParam0 != 83)
			{
				return 1;
			}
		}
		if (func_479(((*Global_1835011)[67 /*74*/])->f_1, 1))
		{
			if ((!func_479(((*Global_1347702)[8 /*49*/])->f_15, 1) && !func_479(((*Global_1835011)[69 /*74*/])->f_1, 1)) && iParam0 != 8)
			{
				if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1835011)[67 /*74*/])->f_22)) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(((*Global_1835011)[67 /*74*/])->f_22))) > 0)
				{
					return 1;
				}
			}
		}
	}
	else if ((!func_480(2) && !func_479(((*Global_1347702)[61 /*49*/])->f_15, 1)) && func_479(((*Global_1347702)[59 /*49*/])->f_15, 1))
	{
		if (iParam0 != 60 && iParam0 != 61)
		{
			return 1;
		}
	}
	if (iParam0 == 15)
	{
		iVar1 = func_483(func_481(65536), 0, 3, func_482(65536));
		if (func_61(iVar1))
		{
			iVar0 = func_473(iVar1);
			if (!func_463(iVar0, 4))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 26 || iParam0 == 27)
	{
		if (((((!func_479(((*Global_1835011)[14 /*74*/])->f_1, 1) && func_479(((*Global_1347702)[62 /*49*/])->f_15, 1)) && func_479(((*Global_1347702)[0 /*49*/])->f_15, 1)) && func_479(((*Global_1347702)[94 /*49*/])->f_15, 1)) && func_479(((*Global_1835011)[25 /*74*/])->f_1, 1)) && (func_479(((*Global_1835011)[8 /*74*/])->f_1, 1) || (func_479(((*Global_1347702)[98 /*49*/])->f_15, 1) && func_473(((*Global_1347702)[98 /*49*/])->f_15) == 0)))
		{
			return 1;
		}
	}
	else if (iParam0 == 27)
	{
		if (!func_479(((*Global_1835011)[34 /*74*/])->f_1, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 42)
	{
		if (!func_479(((*Global_1347702)[41 /*49*/])->f_15, 1))
		{
			if (!func_484(8))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 51)
	{
		if (!func_485(2))
		{
			return 1;
		}
	}
	else if (iParam0 == 52)
	{
		if (!func_479(((*Global_1347702)[51 /*49*/])->f_15, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 57)
	{
		if (func_276(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 69 || iParam0 == 70)
	{
		if (func_486(((*Global_1347702)[iParam0 /*49*/])->f_15) == 0)
		{
			if (func_487() <= 160)
			{
				return 1;
			}
			else
			{
				func_488(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
			}
		}
		if (!func_489(68))
		{
			return 1;
		}
	}
	else if (iParam0 == 77)
	{
		if (func_276(((*Global_1835011)[47 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_276(((*Global_1835011)[45 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_490(16, 0))
		{
			return 1;
		}
	}
	else if (iParam0 == 87)
	{
		if (func_276(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 95)
	{
		if (func_276(((*Global_1835011)[20 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_276(((*Global_1835011)[21 /*74*/])->f_1))
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
		else if (!SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[113 /*49*/])->f_42, false) && func_491())
		{
			if (func_363("MUDTOWN32_altobj", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
			{
				func_183(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 262144);
				func_216(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 64);
				func_132(113, 1, 0, 1, 1, 1, 0);
				return 1;
			}
		}
	}
	else if (iParam0 == 99)
	{
		if (func_492(-404697685, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 117)
	{
		if (func_276(((*Global_1835011)[69 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 136)
	{
		if (func_276(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_216(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_217(int iParam0)
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

int func_218(int iParam0)
{
	if (!func_347(iParam0))
	{
		return 0;
	}
	return func_348(iParam0, 33554432);
}

int func_219(int iParam0)
{
	if (!func_347(iParam0))
	{
		return 0;
	}
	return func_348(iParam0, 67108864);
}

var func_220()
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

bool func_221(int iParam0, int iParam1)
{
	return func_493(iParam0, iParam1);
}

int func_222(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (func_494(iParam0, bParam1, iParam2, iParam3))
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

int func_223(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
			else if (func_495(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0]), 16, 1))
			{
				if (iParam1 == 0)
				{
					return 0;
				}
				else if (!func_408(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])))
				{
					return 0;
				}
			}
			if (iParam4 && func_94(&Global_1935630, 4096))
			{
			}
			else if (func_496(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0]), 44, 0) && iParam2 == 1)
			{
			}
			else if (!func_497(func_409(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])), -1f, 10f, 1, 1, 40f))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_224(var uParam0)
{
	return 0;
}

int func_225(int iParam0, float fParam1)
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

int func_226(var uParam0)
{
	return 0;
}

int func_227(float fParam0)
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

void func_228()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_407(iVar0) && func_408(iVar0))
		{
			func_498(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_84(&(Global_1359489->f_40), 1);
}

void func_229(var uParam0)
{
}

void func_230(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_270(iParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_271(iParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(iVar0, func_271(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_271(iParam0)))
			{
				UILOG::_UILOG_REMOVE_ENTRY(2, func_271(iParam0));
			}
		}
	}
	func_125(iParam0, 4);
	func_125(iParam0, 8);
	func_125(iParam0, 16);
}

void func_231(int iParam0)
{
	Global_36579 = iParam0;
}

void func_232(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_233(int iParam0)
{
	func_51(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			func_239(iParam0, func_73(iParam0), 1, 0);
		}
		else
		{
			func_499(iParam0);
		}
	}
	else
	{
		func_119(iParam0, 0);
	}
}

void func_234(var uParam0)
{
	if (func_500(uParam0->f_174))
	{
		func_501(262144, 5, 0, 1);
		func_502(720f, 1, 0);
	}
}

void func_235(int iParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_fishingrod"), 0, 0))
	{
		return;
	}
	Global_1900073->f_18 = iParam0;
}

void func_236(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_237(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_75(uParam0);
	if (uParam0->f_750 == -1)
	{
		if (iVar0 == 1 || iVar0 == 0)
		{
			uParam0->f_750 = uParam0->f_749;
		}
		else if (!func_35(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
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

float func_238(int iParam0)
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

void func_239(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;

	if (!func_207(iParam0))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 256 != 0 && func_150(0, 0, 1))
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
	if (func_64(32768))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	((*Global_1347702)[iParam0 /*49*/])->f_38 = func_503(iParam0);
	if (!bParam5 && func_504(iParam0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::BLIP_ADD_FOR_RADIUS(((*Global_1347702)[iParam0 /*49*/])->f_38, func_396(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_18);
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(((*Global_1347702)[iParam0 /*49*/])->f_37, ((*Global_1347702)[iParam0 /*49*/])->f_36, true);
	}
	else
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::_0x554D9D53F696D002(((*Global_1347702)[iParam0 /*49*/])->f_38, vParam1);
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(((*Global_1347702)[iParam0 /*49*/])->f_37, ((*Global_1347702)[iParam0 /*49*/])->f_36, true);
	}
	if (iParam0 == 61)
	{
		func_505(8);
	}
	else if (iParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 838722941);
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
	func_499(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(((*Global_1347702)[iParam0 /*49*/])->f_37, 64, iParam0);
	if (func_206() == -1)
	{
		func_506(iParam0);
		iVar0 = func_476(Global_40.f_4283);
		if (func_347(iVar0) && func_507(((*Global_1888801)[iVar0 /*35*/])->f_13))
		{
			iVar1 = 1;
			bVar2 = func_508(iVar0);
		}
		if (func_509(iParam0, iVar1, iVar0))
		{
			func_510(((*Global_1347702)[iParam0 /*49*/])->f_15, bVar2, iVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (HUD::_0x66F35DD9D2B58579() || CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 1 == 0)
	{
		func_51(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		if (((!func_504(iParam0) || func_35(((*Global_1347702)[iParam0 /*49*/])->f_12, 1)) || func_35(((*Global_1347702)[iParam0 /*49*/])->f_12, 512)) || func_50(((*Global_1347702)[iParam0 /*49*/])->f_13, 2048))
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 580546400);
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32768 == 0)
	{
		if ((((*Global_1347702)[iParam0 /*49*/])->f_36 == -1822497728 && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 == 0) && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 2 != 0)
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -211388321);
		}
		else
		{
			func_51(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_511(iParam0))
		{
			if (iParam0 == 97)
			{
				func_322(185, 0);
			}
			else
			{
				func_322(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = ((*Global_1347702)[iParam0 /*49*/])->f_37;
			((*Global_1347702)[iParam0 /*49*/])->f_40 = func_398(MISC::_CREATE_VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_272(iParam0, 2);
	}
}

void func_240(int iParam0, float fParam1)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32768 != 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_36 != -1822497728)
	{
		func_51(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 2 == 0)
	{
		func_51(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	if (fParam1 < (((*Global_1347702)[iParam0 /*49*/])->f_18 * ((*Global_1347702)[iParam0 /*49*/])->f_18))
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1347702)[iParam0 /*49*/])->f_37, -211388321);
		func_51(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
	}
}

void func_241(int iParam0, vector3 vParam1, float fParam4)
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
		func_183(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 1048576);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	if (func_512(iParam0, fParam4))
	{
		func_51(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2048);
		func_180(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		func_119(iParam0, 0);
		func_239(iParam0, vParam1, 1, 0);
	}
}

void func_242(int iParam0)
{
	if (func_513(179))
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
	else if (func_504(iParam0))
	{
		return;
	}
	if (((MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37) && MAP::IS_BLIP_ON_MINIMAP(((*Global_1347702)[iParam0 /*49*/])->f_37)) && BUILTIN::VDIST2(func_73(iParam0), Global_36) < 10000f) && func_514())
	{
		func_515(179, ((*Global_1347702)[iParam0 /*49*/])->f_37, 0);
	}
}

void func_243(int iParam0)
{
	if (func_513(180))
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_36 != -1822497728)
	{
		return;
	}
	else if (!func_504(iParam0))
	{
		return;
	}
	if ((MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37) && MAP::IS_BLIP_ON_MINIMAP(((*Global_1347702)[iParam0 /*49*/])->f_37)) && func_514())
	{
		func_515(180, ((*Global_1347702)[iParam0 /*49*/])->f_37, 0);
	}
}

void func_244(var uParam0)
{
	if (func_7(uParam0->f_172, 16))
	{
		func_106(uParam0, 0);
		func_91(uParam0);
	}
}

int func_245(var uParam0)
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
		Var0 = { func_516(uParam0->f_174) };
		uParam0->f_751 = ANIMSCENE::_CREATE_ANIM_SCENE(&Var0, 0, 0, false, true);
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_751))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_751);
		}
	}
	return 0;
}

struct<8> func_246()
{
	char cVar0[64];

	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

struct<8> func_247(var uParam0)
{
	return uParam0->f_350;
}

void func_248(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_517(uParam0) };
	func_518(uParam0, &Var0);
}

void func_249(var uParam0, char* sParam1)
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
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, sParam1))
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
	func_518(uParam0, sParam1);
	func_519(uParam0, 2097152, 1);
	func_520(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_348, sParam1, true);
}

int func_250(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_251(var uParam0)
{
	if (uParam0->f_177 == 6)
	{
		return 1;
	}
	else if (uParam0->f_177 == 2)
	{
		return 1;
	}
	else if (func_521(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_252(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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
			return (func_522(uParam0, 256) && !func_522(uParam0, 4194304));
		}
		uParam0->f_415 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	func_523(uParam0, sParam1);
	if (!func_522(uParam0, 64))
	{
		if (!func_250(func_524(uParam0)))
		{
			func_520(uParam0, 64);
		}
		else
		{
			vVar0 = { func_525(uParam0) };
			if (!func_250(vVar0))
			{
				func_526(uParam0, vVar0);
			}
		}
		return 0;
	}
	fVar3 = func_472(Global_35, func_524(uParam0), 1);
	if (func_522(uParam0, 128) || func_522(uParam0, 256))
	{
		if ((fVar3 >= func_527(uParam0) && !bParam2) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
		{
			if (uParam0->f_433)
			{
				func_528();
				uParam0->f_433 = 0;
			}
			func_529(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
			}
			func_324(uParam0);
			func_519(uParam0, 128, 1);
			func_519(uParam0, 256, 1);
			func_519(uParam0, 4096, 1);
			func_519(uParam0, 32768, 1);
			func_519(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_530(uParam0) || bParam2)
	{
		if (!func_522(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
			{
				if (func_530(uParam0) >= func_527(uParam0))
				{
				}
				Var4 = { func_247(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_531(uParam0);
				}
				Var4 = { func_247(uParam0) };
				iVar12 = 256;
				if (!func_522(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_348 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_344), iVar12, &Var4, false, true);
				func_532(uParam0, 0, 0, 0, 0);
				func_520(uParam0, 128);
			}
		}
	}
	if (func_522(uParam0, 128))
	{
		if (func_522(uParam0, 256) && !func_522(uParam0, 4194304))
		{
			return 1;
		}
		func_533(uParam0);
		if (!uParam0->f_433)
		{
			if (func_534())
			{
				func_535(4096);
				uParam0->f_433 = 1;
			}
		}
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_348, 1, 0))
		{
			bVar13 = true;
			Var15 = { func_517(uParam0) };
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
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_348, uParam0->f_366[iVar14 /*9*/]);
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, uParam0->f_366[iVar14 /*9*/]))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_522(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_348, &Var15))
				{
					if (!func_522(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_348, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_348, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_348, &Var15);
						}
						func_520(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return 0;
			}
			func_520(uParam0, 256);
			func_519(uParam0, 4194304, 1);
			return 1;
		}
	}
	return 0;
}

void func_253(var uParam0)
{
}

bool func_254(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

int func_255(var uParam0, char* sParam1, int iParam2)
{
	if (func_254(sParam1, 2))
	{
		return 0;
	}
	if (func_254(sParam1, 1))
	{
		return 0;
	}
	if (iParam2 < sParam1->f_11 || iParam2 > sParam1->f_13)
	{
		return 0;
	}
	if ((func_536(sParam1) == 9 || func_536(sParam1) == 12) || func_536(sParam1) == 13)
	{
		if (!func_254(sParam1, 8))
		{
			if (iParam2 == sParam1->f_11)
			{
				func_537(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return 1;
		}
	}
	if (iParam2 >= sParam1->f_11)
	{
		return func_538(uParam0, func_536(sParam1));
	}
	return 0;
}

void func_256(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::START_AUDIO_SCENE(sParam0);
	}
	func_537(sParam0, 1);
}

int func_257(var uParam0, char* sParam1, int iParam2)
{
	if (!func_254(sParam1, 1))
	{
		return 0;
	}
	if (func_254(sParam1, 2))
	{
		return 0;
	}
	if (iParam2 > sParam1->f_13)
	{
		return 1;
	}
	if ((func_539(sParam1) == 9 || func_539(sParam1) == 12) || func_539(sParam1) == 13)
	{
		if (!func_254(sParam1, 8))
		{
			if (iParam2 == sParam1->f_13)
			{
				func_537(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return 1;
		}
	}
	if (iParam2 >= sParam1->f_13)
	{
		return func_538(uParam0, func_539(sParam1));
	}
	return 0;
}

void func_258(char* sParam0)
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
	func_537(sParam0, 2);
}

int func_259(var uParam0, char* sParam1, int iParam2)
{
	if (func_254(sParam1, 1))
	{
		return 0;
	}
	if (func_536(sParam1) == 2)
	{
		return uParam0->f_177 == 2;
	}
	if (func_536(sParam1) == 0)
	{
		if (uParam0->f_177 == 6 && func_540(uParam0) == -1)
		{
			return 1;
		}
	}
	if (sParam1->f_11 != iParam2)
	{
		if (((func_536(sParam1) == 9 || func_536(sParam1) == 12) || func_536(sParam1) == 13) && func_254(sParam1, 8))
		{
			return 1;
		}
		return 0;
	}
	switch (func_536(sParam1))
	{
		case 0:
			return uParam0->f_177 == 6;
		case 4:
			return func_328(&(uParam0->f_753));
		case 1:
		case 10:
		case 11:
			return uParam0->f_177 == 7;
		case 9:
		case 12:
		case 13:
			if (!func_254(sParam1, 8))
			{
				func_537(sParam1, 8);
			}
			break;
	}
	return 0;
}

void func_260(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::_0x2B9C37C01BF25EDB(sParam0);
	}
	func_537(sParam0, 1);
}

int func_261(char* sParam0, bool bParam1)
{
	if (func_254(sParam0, 1))
	{
		return 0;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		AUDIO::PREPARE_MUSIC_EVENT(sParam0);
		func_537(sParam0, 1);
		return 1;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_537(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_537(sParam0, 1);
			return 0;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_537(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_537(sParam0, 1);
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
		func_537(sParam0, 1);
		return 1;
	}
	func_537(sParam0, 1);
	return 0;
}

void func_262(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_482)
	{
		if ((func_254(uParam0->f_482[iVar0 /*16*/], 1048576) && func_254(uParam0->f_482[iVar0 /*16*/], 4)) && !func_254(uParam0->f_482[iVar0 /*16*/], 1))
		{
			AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_482[iVar0 /*16*/]);
			return;
		}
		iVar0++;
	}
}

int func_263(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
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
		if (!func_541(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_542(uParam0, 0))
			{
				if (func_543(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_544(uParam0, 1, &iVar0))
					{
					}
					if (func_545(uParam0, 3, &cVar2))
					{
					}
					if (func_544(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_544(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_544(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_544(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_544(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 15 && uParam0->f_785 < 15)
						{
							if (!func_546(uParam0, &cVar2, uParam0->f_785))
							{
								*((*uParam0)[uParam0->f_785 /*16*/]) = { cVar2 };
								func_537((*uParam0)[uParam0->f_785 /*16*/], 1048576);
								uParam0->f_785++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 15 && uParam0->f_786 < 15)
						{
							*(uParam0->f_241[uParam0->f_786 /*16*/]) = { cVar2 };
							func_537(uParam0->f_241[uParam0->f_786 /*16*/], 1048576);
							uParam0->f_786++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 16 && uParam0->f_787 < 16)
						{
							*(uParam0->f_482[uParam0->f_787 /*16*/]) = { cVar2 };
							func_537(uParam0->f_482[uParam0->f_787 /*16*/], 1048576);
							if (!bVar19 && func_254(&cVar2, 4))
							{
								AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_482[uParam0->f_787 /*16*/]);
								bVar19 = true;
							}
							uParam0->f_787++;
						}
					}
					else if (iVar0 < 2 && uParam0->f_788 < 2)
					{
						if (!func_546(&(uParam0->f_739), &cVar2, uParam0->f_788))
						{
							*(uParam0->f_739[uParam0->f_788 /*16*/]) = { cVar2 };
							func_537(uParam0->f_739[uParam0->f_788 /*16*/], 1048576);
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
	if (!func_146(uParam0) && uParam0->f_791 > 0)
	{
		iVar20 = uParam0->f_792;
		while (iVar20 <= (uParam0->f_791 - 1))
		{
			uParam0->f_776.f_1 = 0;
			uParam0->f_776.f_3 = iVar20;
			iVar22 = 0;
			if (func_542(uParam0, 12))
			{
				if (func_544(uParam0, 13, &iVar0))
				{
				}
				if (func_544(uParam0, 14, &iVar1))
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
		func_547(uParam0);
	}
	return 1;
}

bool func_264(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_265(var uParam0)
{
	func_548(uParam0, 0f);
}

bool func_266(var uParam0)
{
	return func_264(*uParam0, 2);
}

int func_267()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_268(var uParam0)
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
		vVar0 = { func_73(uParam0->f_174) };
		func_549(vVar0, 2.5f, 1, 0, 0, 0, 0);
		_NAMESPACE49::_0x9D16896F0DBE78A2(vVar0, 2.5f);
		if (func_35(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 524288))
		{
			((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = func_550(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, vVar0, 0, 1, 1, 0, 1, 1, 0, 1, 1);
		}
		else
		{
			((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = func_550(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, vVar0, 0, 1, 1, 0, 1, 1, 1, 1, 0);
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

int func_269(var uParam0)
{
	int iVar0;
	bool bVar1;
	var uVar2[1];
	int iVar4;

	if (!HUD::_0xD0976CC34002DB57("BHCR"))
	{
		return 0;
	}
	if (!bLocal_410)
	{
		func_551(&Local_26);
		bLocal_410 = true;
	}
	iVar0 = func_99(uParam0);
	if (iVar0 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_475))
		{
			iLocal_475 = OBJECT::CREATE_OBJECT(iLocal_476, -5426.14f, -3652.86f, -23.15f, true, true, false, false, true);
			OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(iLocal_475, 0);
		}
		if (iLocal_446 < 3)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(&(Local_412[iLocal_446 /*11*/])))
			{
				bVar1 = true;
				if (iLocal_446 == 2)
				{
					bVar1 = false;
				}
				Local_412[iLocal_446 /*11*/] = func_552(iLocal_411, (Local_412[iLocal_446 /*11*/])->f_2, (Local_412[iLocal_446 /*11*/])->f_5, 1, 1, 0, 1, 1, bVar1, 0, 0, 0, 0);
				if (iLocal_446 == 0)
				{
					PED::_0x1902C4CFCC5BE57C(&(Local_412[iLocal_446 /*11*/]), 2054263469);
					PED::_0xCC8CA3E88256E58F(&(Local_412[iLocal_446 /*11*/]), 0, 1, 1, 1, 0);
					PED::SET_PED_NAME_DEBUG(&(Local_412[iLocal_446 /*11*/]), "BARN1");
					WEAPON::REMOVE_ALL_PED_WEAPONS(&(Local_412[iLocal_446 /*11*/]), true, true);
					func_553(&(Local_412[iLocal_446 /*11*/]), joaat("weapon_revolver_cattleman"), 1, 1, 0, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					func_553(&(Local_412[iLocal_446 /*11*/]), joaat("weapon_repeater_carbine"), 0, 1, 0, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				}
				else if (iLocal_446 == 1)
				{
					PED::_0x1902C4CFCC5BE57C(&(Local_412[iLocal_446 /*11*/]), -1330577621);
					PED::_0xCC8CA3E88256E58F(&(Local_412[iLocal_446 /*11*/]), 0, 1, 1, 1, 0);
					PED::SET_PED_NAME_DEBUG(&(Local_412[iLocal_446 /*11*/]), "BARN2");
					WEAPON::REMOVE_ALL_PED_WEAPONS(&(Local_412[iLocal_446 /*11*/]), true, true);
					func_553(&(Local_412[iLocal_446 /*11*/]), joaat("weapon_revolver_cattleman"), 0, 1, 0, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				}
				else if (iLocal_446 == 2)
				{
					PED::_0x1902C4CFCC5BE57C(&(Local_412[iLocal_446 /*11*/]), 205624806);
					PED::_0xCC8CA3E88256E58F(&(Local_412[iLocal_446 /*11*/]), 0, 1, 1, 1, 0);
					PED::SET_PED_NAME_DEBUG(&(Local_412[iLocal_446 /*11*/]), "BARNKID");
					WEAPON::REMOVE_ALL_PED_WEAPONS(&(Local_412[iLocal_446 /*11*/]), true, true);
					func_553(&(Local_412[iLocal_446 /*11*/]), joaat("weapon_revolver_cattleman"), 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(&(Local_412[iLocal_446 /*11*/]), false);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_412[iLocal_446 /*11*/]), true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(Local_412[iLocal_446 /*11*/]), 1269650476);
				PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_412[iLocal_446 /*11*/]), 0, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_412[iLocal_446 /*11*/]), 17, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_412[iLocal_446 /*11*/]), 46, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_412[iLocal_446 /*11*/]), 98, true);
				PED::SET_PED_CONFIG_FLAG(&(Local_412[iLocal_446 /*11*/]), 6, true);
				PED::SET_PED_CONFIG_FLAG(&(Local_412[iLocal_446 /*11*/]), 146, true);
				PED::SET_PED_CONFIG_FLAG(&(Local_412[iLocal_446 /*11*/]), 388, true);
				if (iLocal_446 != 2)
				{
					PED::SET_PED_CAN_BE_TARGETTED(&(Local_412[iLocal_446 /*11*/]), true);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(&(Local_412[iLocal_446 /*11*/]), true, 0f);
					PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_412[iLocal_446 /*11*/]), 5, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_412[iLocal_446 /*11*/]), 46, true);
				}
				else
				{
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(&(Local_412[iLocal_446 /*11*/]), false, 0f);
					PED::SET_PED_LASSO_HOGTIE_FLAG(&(Local_412[iLocal_446 /*11*/]), 0, 0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY((Local_412[iLocal_446 /*11*/])->f_6))
				{
					func_554(uParam0, &(Local_412[iLocal_446 /*11*/]), (Local_412[iLocal_446 /*11*/])->f_6, 0);
				}
				iLocal_446++;
			}
		}
		else if (iLocal_628 < 2)
		{
			if (!TASK::DOES_SCENARIO_POINT_EXIST((Local_607[iLocal_628 /*9*/])->f_8))
			{
				iVar4 = TASK::_0x345EC3B7EBDE1CB5((Local_607[iLocal_628 /*9*/])->f_5, 0.5f, &uVar2, 1);
				if (iVar4 > 0)
				{
					(Local_607[iLocal_628 /*9*/])->f_8 = &uVar2[0];
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(&(Local_607[iLocal_628 /*9*/])))
			{
				if (iLocal_628 == 0)
				{
					Local_607[iLocal_628 /*9*/] = func_552(iLocal_626, (Local_607[iLocal_628 /*9*/])->f_1, (Local_607[iLocal_628 /*9*/])->f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				}
				else
				{
					Local_607[iLocal_628 /*9*/] = func_552(iLocal_627, (Local_607[iLocal_628 /*9*/])->f_1, (Local_607[iLocal_628 /*9*/])->f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				}
				PED::SET_PED_CONFIG_FLAG(&(Local_607[iLocal_628 /*9*/]), 6, true);
				TASK::TASK_HITCH_ANIMAL(&(Local_607[iLocal_628 /*9*/]), (Local_607[iLocal_628 /*9*/])->f_8, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_607[iLocal_628 /*9*/]), true);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(&(Local_607[iLocal_628 /*9*/]), false, 0f);
				func_555(&(Local_607[iLocal_628 /*9*/]), 1022576842);
				ENTITY::_0x18FF3110CF47115D(&(Local_864[iLocal_892 /*9*/]), 15, 0);
				iLocal_628++;
			}
		}
	}
	if (iVar0 >= 3 || (iLocal_446 >= 3 && iLocal_628 >= 2))
	{
		iLocal_451 = VOLUME::_0x10157BC3247FF3BA(-5417.33f, -3666.19f, -23.07f, 0f, 0f, 0f, 7f, 7f, 7f, "RBT22_Barn_Defence_1");
		iLocal_452 = VOLUME::_0x10157BC3247FF3BA(-5414.54f, -3646.99f, -23.09f, 0f, 0f, 0f, 7f, 7f, 7f, "RBT22_Barn_Defence_2");
		iLocal_450 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5424.683f, -3653.581f, -21.736f, 0f, 0f, 0f, 9.6f, 5f, 3f, "RBT22_Inside_Barn");
		PED::_0x5C3C55EAAD19915F(&(Local_412[2 /*11*/]), "TaskIntimidated_OnFoot");
		return 1;
	}
	return 0;
}

int func_270(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0 || ((*Global_1347702)[iParam0 /*49*/])->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_271(int iParam0)
{
	var uVar0;

	uVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_3;
	return MISC::GET_HASH_KEY(&uVar0);
}

void func_272(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

void func_273(int iParam0)
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
	uVar10 = func_556(iParam0, 0);
	iVar11 = uVar10;
	iVar12 = uVar10;
	if (iParam0 == 82 || iParam0 == 83)
	{
		iVar12 = MISC::GET_HASH_KEY("LAW_UI_DUTCH_GANG");
	}
	MemCopy(&cVar0, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 8);
	StringConCat(&cVar0, "_DESC", 64);
	iVar13 = func_270(iParam0);
	UILOG::_UILOG_ADD_ENTRY_HASH(iVar13, func_271(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_24, iVar12, MISC::GET_HASH_KEY(&cVar0), ((*Global_1347702)[iParam0 /*49*/])->f_37);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar13, func_271(iParam0), iVar11, MISC::GET_HASH_KEY("toast_log_blips"));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar8) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar9))
	{
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(iVar13, func_271(iParam0), MISC::GET_HASH_KEY(sVar8), MISC::GET_HASH_KEY(sVar9));
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar13, func_271(iParam0)))
	{
		func_272(iParam0, 4);
	}
}

void func_274(int iParam0)
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
		cVar3 = func_557(0, &Var1, 0, 0, -1, -1);
		func_558(iParam0, &Var1, cVar3, -1082130432);
	}
}

void func_275(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_207(iVar0) && Global_1347702[iVar0 /*49*/] == iParam0)
		{
			bVar1 = true;
			func_230(iVar0, 1);
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

int func_276(int iParam0)
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
		iVar0 = func_388(iParam0);
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

void func_277(int iParam0, bool bParam1)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if (!func_112(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_113(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_113(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_114(iParam0), func_115(iParam0), func_116(iParam0), func_113(iParam0), Global_36);
		}
	}
	func_392(iParam0, 1);
	bParam1 = bParam1;
}

void func_278(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_61(iParam0))
	{
		return;
	}
	if (!func_276(iParam0))
	{
		return;
	}
	iVar0 = func_114(iParam0);
	if (bParam1)
	{
		if (func_113(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_113(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != ((*Global_1835011)[77 /*74*/])->f_1)
			{
				func_559(func_115(iParam0));
			}
			if (func_206() != 0)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_113(iParam0), 0);
			}
			else
			{
				STATS::STATSTRACKER_DEED_STARTED(func_113(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_560(iParam0);
	if (!func_61(func_60(0)))
	{
		func_392(iParam0, 3);
		func_204(bParam2);
		if (func_206() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
			}
			func_391(1);
		}
		func_561(iParam0, -1);
		if (bParam1 && !func_64(2))
		{
			func_562(&Global_0, 1024);
		}
		if (func_206() == -1)
		{
			func_563(&(Global_1347343->f_11), 536870912);
			func_564(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_565(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_566(0);
			}
		}
		if (func_206() == -1)
		{
			iVar1 = func_417(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_419();
				switch (iVar1)
				{
					case 0:
						func_567(0);
						break;
					case 1:
						func_567(1);
						break;
					case 2:
						func_567(2);
						break;
					case 3:
						func_567(3);
						break;
					case 4:
						func_567(4);
						break;
					case 5:
						func_567(5);
						break;
					case 6:
						func_567(5);
						break;
					case 7:
						func_567(7);
						break;
					case 8:
						func_567(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_115(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_567(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_115(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_567(11);
						break;
					default:
						iVar1 = func_419();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_568(0);
									break;
								case 1:
									func_568(1);
									break;
								case 2:
									func_568(2);
									break;
								case 3:
									func_568(3);
									break;
								case 4:
									func_568(4);
									break;
								case 5:
									func_568(5);
									break;
								case 6:
									func_568(5);
									break;
								case 7:
									func_568(7);
									break;
								case 8:
									func_568(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_395(1);
	}
	else
	{
		func_561(iParam0, -1);
		func_392(iParam0, 4);
	}
	func_420(iParam0, 0);
}

void func_279(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_280(var uParam0)
{
	int iVar0;

	if (uParam0->f_749 == -1)
	{
		if (!func_35(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
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

void func_281(bool bParam0, int iParam1, bool bParam2)
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
	if (PED::_0x7BE607DAFF382FD2(Global_35, iVar0, iParam1) > 0)
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
					if (_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(_NAMESPACE48::_0x32A1E3B83D501096(iVar3)))
					{
						_NAMESPACE48::FORCE_DESPAWN_PERSCHAR(_NAMESPACE48::_0x32A1E3B83D501096(iVar3));
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

void func_282()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_407(iVar0))
		{
			func_498(iVar0, 30, 1);
		}
		iVar0++;
	}
}

void func_283(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_479(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return;
	}
	else if (func_479(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return;
	}
	if (((((((((((((((uParam0->f_174 == 29 || uParam0->f_174 == 56) || uParam0->f_174 == 57) || uParam0->f_174 == 72) || uParam0->f_174 == 84) || uParam0->f_174 == 85) || uParam0->f_174 == 86) || uParam0->f_174 == 87) || uParam0->f_174 == 88) || uParam0->f_174 == 92) || uParam0->f_174 == 111) || uParam0->f_174 == 102) || uParam0->f_174 == 117) || uParam0->f_174 == 122) || uParam0->f_174 == 149) || uParam0->f_174 == 150)
	{
		iVar0 = 100;
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_revolver_cattleman"), 0, 0))
		{
			if (!func_569(joaat("weapon_revolver_cattleman")))
			{
				func_570(joaat("weapon_revolver_cattleman"));
			}
			func_553(Global_35, joaat("weapon_revolver_cattleman"), 0, 0, 2, 1, 0, 1056964608, 1065353216, iVar0, 0, 0, 0, 0);
		}
		else
		{
			iVar1 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman"));
			if (iVar1 < iVar0)
			{
				WEAPON::_0xB190BCA3F4042F95(Global_35, joaat("weapon_revolver_cattleman"), (iVar0 - iVar1), 752097756);
			}
		}
	}
}

void func_284(bool bParam0)
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
	PED::_0x06D26A96CA1BCA75(Global_35, 10, 0f, 0);
	AUDIO::SET_PED_IS_DRUNK(Global_35, false);
	PED::_0x406CCF555B04FAD3(Global_35, 0, 0f);
	func_571(0f);
	Global_1935436->f_11 = 1;
	if (func_364())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_572();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_285(var uParam0)
{
}

int func_286(var uParam0)
{
	if (uParam0->f_174 == func_20())
	{
		return 1;
	}
	return 0;
}

void func_287(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10, bool bParam11)
{
	struct<4> Var0;
	struct<4> Var4;

	if (uParam0->f_752 != iParam9)
	{
		if (uParam0->f_752 > -1)
		{
			func_573(uParam0);
		}
		uParam0->f_752 = iParam9;
		func_574(uParam0);
	}
	if (func_36(uParam0, 128) && func_33())
	{
		func_160(0);
		bParam11 = true;
	}
	if (!bParam11)
	{
		if ((func_290() == iParam9 && func_575() == iParam10) && !func_576(*Global_1347394, 0f, 0f, 0f))
		{
			return;
		}
	}
	if (func_290() != iParam9 && !func_576(*Global_1347394, 0f, 0f, 0f))
	{
		func_157(0);
	}
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_577(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, Var0, Var4, iParam9, iParam10);
}

int func_288(var uParam0)
{
	if (bLocal_410)
	{
		func_578(&Local_26, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_24, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_18, 0, 0);
	}
	func_579(uParam0);
	if (iLocal_448)
	{
		func_580(uParam0);
		return 1;
	}
	func_581(uParam0);
	if (iLocal_18 >= 2)
	{
		func_580(uParam0);
		return 1;
	}
	if (func_582(Global_36, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_24, 45f, 1))
	{
		func_580(uParam0);
		return 1;
	}
	return 0;
}

int func_289(var uParam0)
{
	if (func_35(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 128))
	{
		func_165(uParam0);
		return 1;
	}
	switch (uParam0->f_171)
	{
		case 0:
			if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
			{
				func_583(0, 1, 1, 1);
				uParam0->f_171 = 1;
			}
			else
			{
				return 1;
			}
			break;
		case 1:
			func_583(0, 1, 1, 1);
			if (func_584(Global_35, &(uParam0->f_747), 0, 0, 0, 1084227584, 100, 0, 0))
			{
				func_165(uParam0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_290()
{
	return Global_1572864->f_9;
}

int func_291(var uParam0)
{
	if (!func_83(uParam0))
	{
		func_84(uParam0, 0);
	}
	if (STREAMING::GET_NUMBER_OF_STREAMING_REQUESTS() == 0)
	{
		return 1;
	}
	if (func_466(uParam0) > 15f)
	{
		return 1;
	}
	return 0;
}

int func_292(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_473(((*Global_1347702)[iParam0 /*49*/])->f_15);
	if (func_463(iVar0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_293(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	var uVar0;
	struct<11> Var1;

	Var1.f_10 = 7;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	Var1.f_2 = iParam2;
	Var1.f_6 = { fParam3, fParam4, fParam5 };
	Var1.f_9 = fParam6;
	return func_585(&uVar0, &Var1);
}

void func_294(int iParam0)
{
	func_586(((*Global_1347702)[iParam0 /*49*/])->f_15, 0);
}

void func_295(var uParam0)
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		func_587(uParam0->f_174, 2);
	}
}

void func_296(var uParam0, bool bParam1)
{
	if (func_588())
	{
		func_554(uParam0, Global_35, "JOHN", bParam1);
	}
	else
	{
		func_554(uParam0, Global_35, "ARTHUR", bParam1);
	}
}

void func_297(int iParam0, int iParam1)
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

void func_298(var uParam0, int iParam1, bool bParam2)
{
	char* sVar0;

	_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	if (bParam2)
	{
		if (func_463(uParam0->f_330, iParam1))
		{
			bParam2 = false;
		}
	}
	switch (iParam1)
	{
		case 2:
			if (func_589(uParam0->f_65))
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
			func_590(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_591(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 4:
			if (func_463(uParam0->f_329, 1048576))
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
			func_590(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_591(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 8:
			sVar0 = "BNTY_O_HOGA";
			func_590(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_591(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 16:
			if (func_463(uParam0->f_329, 1048576))
			{
				return;
			}
			if (!func_464(uParam0->f_67))
			{
				sVar0 = "BNTY_O_PICKA";
			}
			else
			{
				sVar0 = "BNTY_O_PICKD";
			}
			func_590(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_591(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 64:
			if (func_463(uParam0->f_329, 1048576))
			{
				return;
			}
			sVar0 = "BNTY_O_MOUNT";
			func_590(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_591(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 128:
			if (!func_464(uParam0->f_67))
			{
				sVar0 = "BNTY_O_PICKA";
			}
			else
			{
				sVar0 = "BNTY_O_PICKD";
			}
			func_590(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_591(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 32:
			if (func_463(uParam0->f_329, 1048576))
			{
				return;
			}
			if (!func_464(uParam0->f_67))
			{
				sVar0 = "BNTY_O_RTA";
			}
			else
			{
				sVar0 = "BNTY_O_RTD";
			}
			func_590(uParam0, bParam2, sVar0, &(uParam0->f_325), func_592(uParam0->f_300));
			if (bParam2)
			{
				func_593(sVar0, uParam0);
			}
			break;
		case 256:
			if (func_463(uParam0->f_329, 1048576))
			{
				return;
			}
			if (func_299(uParam0->f_67, 2) && ((PED::IS_PED_FLEEING(uParam0->f_67) || PED::IS_PED_ON_MOUNT(uParam0->f_67)) || PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_67, false)))
			{
				sVar0 = "BNTY_W_DIST_E";
			}
			else
			{
				sVar0 = "BNTY_W_DIST_R";
			}
			func_590(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_591(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 512:
			sVar0 = "BNTY_W_RJL";
			func_590(uParam0, bParam2, sVar0, func_592(uParam0->f_300), 0);
			if (bParam2)
			{
				func_591(MISC::_CREATE_VAR_STRING(10, sVar0, func_592(uParam0->f_300)), 7500, 0, 0, 0, 1);
			}
			break;
		case 1024:
			if (!func_464(uParam0->f_67))
			{
				sVar0 = "BNTY_O_JLA";
			}
			else if (func_594(uParam0))
			{
				sVar0 = "BNTY_O_JLW";
			}
			else
			{
				sVar0 = "BNTY_O_JLD";
			}
			func_590(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_591(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 2048:
			if (func_595(uParam0))
			{
				sVar0 = "BNTY_O_CHIEF";
			}
			else
			{
				sVar0 = "BNTY_O_SHRF";
			}
			func_590(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				func_363(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
		case 4096:
			if (func_595(uParam0))
			{
				sVar0 = "BNTY_R_CHIEF";
			}
			else
			{
				sVar0 = "BNTY_R_SHRF";
			}
			func_590(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				func_363(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
		case 8192:
			sVar0 = "BNTY_O_RWRD";
			func_590(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				func_363(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
	}
	if (bParam2)
	{
		func_468(&(uParam0->f_330), iParam1);
	}
}

int func_299(int iParam0, int iParam1)
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
	if (func_463(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_463(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_463(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_463(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_463(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_463(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return 0;
		}
	}
	if (func_463(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_463(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_300(int iParam0)
{
	iLocal_15 = iParam0;
}

int func_301(var uParam0)
{
	if (iLocal_741 >= 2 && iLocal_892 >= 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_864[0 /*9*/])))
		{
			PED::SET_PED_RESET_FLAG(&(Local_864[0 /*9*/]), 170, true);
		}
		return 1;
	}
	if (!func_302(uParam0, 0))
	{
		return 0;
	}
	if (iLocal_741 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(Local_718[iLocal_741 /*11*/])))
		{
			Local_718[iLocal_741 /*11*/] = func_552(iLocal_411, (Local_718[iLocal_741 /*11*/])->f_2, (Local_718[iLocal_741 /*11*/])->f_5, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0);
			return 0;
		}
		else
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(&(Local_718[iLocal_741 /*11*/]), true, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_718[iLocal_741 /*11*/]), true);
			PED::SET_PED_CAN_BE_TARGETTED(&(Local_718[iLocal_741 /*11*/]), true);
			PED::SET_PED_CONFIG_FLAG(&(Local_718[iLocal_741 /*11*/]), 6, true);
			PED::SET_PED_CONFIG_FLAG(&(Local_718[iLocal_741 /*11*/]), 388, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(Local_718[iLocal_741 /*11*/]), 1269650476);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_718[iLocal_741 /*11*/]), 0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_718[iLocal_741 /*11*/]), 98, true);
			PED::SET_PED_CONFIG_FLAG(&(Local_718[iLocal_741 /*11*/]), 146, true);
			if (iLocal_741 == 0)
			{
				PED::_0x1902C4CFCC5BE57C(&(Local_718[iLocal_741 /*11*/]), -890419023);
				PED::_0xCC8CA3E88256E58F(&(Local_718[iLocal_741 /*11*/]), 0, 1, 1, 1, 0);
				func_553(&(Local_718[iLocal_741 /*11*/]), joaat("weapon_repeater_carbine"), 1, 1, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_553(&(Local_718[iLocal_741 /*11*/]), joaat("weapon_revolver_cattleman"), 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				PED::SET_PED_NAME_DEBUG(&(Local_718[iLocal_741 /*11*/]), "RAILGANG_0");
			}
			else
			{
				PED::_0x1902C4CFCC5BE57C(&(Local_718[iLocal_741 /*11*/]), -67818828);
				PED::_0xCC8CA3E88256E58F(&(Local_718[iLocal_741 /*11*/]), 0, 1, 1, 1, 0);
				func_553(&(Local_718[iLocal_741 /*11*/]), joaat("weapon_revolver_cattleman"), 1, 1, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				PED::SET_PED_NAME_DEBUG(&(Local_718[iLocal_741 /*11*/]), "RAILGANG_1");
			}
			WEAPON::_0x94A3C1B804D291EC(&(Local_718[iLocal_741 /*11*/]), 0, 0, 0, 1);
			func_554(uParam0, &(Local_718[iLocal_741 /*11*/]), (Local_718[iLocal_741 /*11*/])->f_6, 0);
			iLocal_741++;
			return 0;
		}
	}
	if (iLocal_892 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(Local_864[iLocal_892 /*9*/])))
		{
			if (iLocal_892 == 0)
			{
				Local_864[iLocal_892 /*9*/] = func_552(iLocal_626, (Local_864[iLocal_892 /*9*/])->f_1, (Local_864[iLocal_892 /*9*/])->f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				Local_864[iLocal_892 /*9*/] = func_552(iLocal_627, (Local_864[iLocal_892 /*9*/])->f_1, (Local_864[iLocal_892 /*9*/])->f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			PED::SET_PED_CONFIG_FLAG(&(Local_864[iLocal_892 /*9*/]), 6, true);
			PHYSICS::_0x06AADE17334F7A40(&(Local_864[iLocal_892 /*9*/]), (Local_864[iLocal_892 /*9*/])->f_5);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_864[iLocal_892 /*9*/]), true);
			ENTITY::_0x18FF3110CF47115D(&(Local_864[iLocal_892 /*9*/]), 15, 0);
			func_555(&(Local_864[iLocal_892 /*9*/]), 0);
			iLocal_892++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_864[0 /*9*/])))
		{
			PED::SET_PED_RESET_FLAG(&(Local_864[0 /*9*/]), 170, true);
		}
	}
	return 0;
}

int func_302(var uParam0, int iParam1)
{
	if (iLocal_699)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_692))
	{
		if (iParam1 == 0)
		{
			iLocal_692 = func_552(iLocal_694, vLocal_695, fLocal_698, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0);
		}
		else
		{
			iLocal_692 = func_552(iLocal_694, func_208(115), 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		if (iParam1 == 0)
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_692, 1);
			iLocal_709 = 1;
		}
		PED::_0x1902C4CFCC5BE57C(iLocal_692, -1688362028);
		PED::_0xCC8CA3E88256E58F(iLocal_692, 0, 1, 1, 1, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_692, true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_692, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_692, 1269650476);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_692, 0, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_692, 6, true);
		func_596(iLocal_692, 1);
		func_554(uParam0, iLocal_692, "RBH_TARGET22", 0);
		func_597(uParam0);
		func_553(iLocal_692, joaat("weapon_revolver_cattleman"), 0, 1, 0, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		func_553(iLocal_692, -598316488, 0, 1, 1, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		iLocal_699 = 1;
	}
	return 0;
}

void func_303(var uParam0)
{
	int iVar0;

	if (func_463(uParam0->f_329, 262144))
	{
		return;
	}
	if (!func_299(uParam0->f_67, 0) || PED::IS_PED_HOGTIED(uParam0->f_67))
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
		uParam0->f_68 = MAP::_0x23F74C2FDA6E7C61(iVar0, uParam0->f_67);
	}
	MAP::_0x97F6F158CC5B5CA2(uParam0->f_67, uParam0->f_68);
	MAP::_0x662D364ABF16DE2F(uParam0->f_68, 231194138);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_68, &(uParam0->f_325));
}

int func_304(int iParam0, int iParam1)
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

void func_305(int iParam0)
{
	if (iLocal_24 != iParam0)
	{
		iLocal_24 = iParam0;
	}
}

int func_306(int iParam0, int iParam1)
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(iParam0);
		}
	}
	if (iParam1 == 0 || CAM::IS_SCREEN_FADED_IN())
	{
		return 1;
	}
	return 0;
}

void func_307(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = -1;
	iVar1 = func_598(iParam1);
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
				func_599(iVar0, iParam0, iParam1, 0);
				return;
			}
			iVar2++;
		}
		if (iVar2 >= iVar1)
		{
			func_600(iParam0, iParam1);
			return;
		}
		iVar0++;
	}
	if (iVar3 < 0)
	{
		return;
	}
	func_599(iVar3, iParam0, iParam1, 0);
}

void func_308(int iParam0, int iParam1, var uParam2)
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

int func_309(int iParam0, int iParam1)
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
			iVar0 = func_601(iParam0, iVar2);
			iVar1 = func_602(iParam0, iVar2);
			_NAMESPACE48::_0x8BC555034A5A5E8C(iVar0, iParam1);
			func_603(iVar1, 0);
			if (func_604(iVar1, 0, 0, 0, 0, 0))
			{
				return func_605(iVar1);
			}
			return 0;
		}
	}

void func_310(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_606(iParam0, sParam4, iParam5);
	}
	func_607(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_311()
{
	int iVar0;

	iVar0 = func_487();
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

int func_312(int iParam0)
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

float func_313(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_314(var uParam0)
{
	if (!func_7(uParam0->f_172, 512))
	{
		if (!func_608(uParam0))
		{
			return 0;
		}
		func_216(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 128);
		if (func_245(uParam0))
		{
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_751);
			func_2(&(uParam0->f_172), 512);
		}
		return 0;
	}
	func_583(0, 1, 1, 1);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_751) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_751, 0))
	{
		func_2(&(uParam0->f_172), 1024);
		func_3(&(uParam0->f_172), 256);
		return 1;
	}
	return 0;
}

void func_315()
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

void func_316(var uParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
}

int func_317(var uParam0)
{
	if (uParam0->f_176 == 4)
	{
		if (!func_609(uParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_318(var uParam0, var uParam1)
{
	struct<8> Var0;

	if (func_187(uParam1, 32768))
	{
		Var0 = { func_517(uParam0) };
		func_249(uParam0, &Var0);
		if (func_187(uParam1, 131072))
		{
			func_520(uParam0, 268435456);
			if (func_250(uParam0->f_409))
			{
				uParam0->f_409 = { func_610(uParam1, uParam1->f_1580) };
			}
			if (func_250(uParam0->f_406))
			{
				uParam0->f_406 = { func_610(uParam1, uParam1->f_1580) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_406, &(uParam0->f_406.f_2), 0);
				uParam0->f_406.f_2 = (uParam0->f_406.f_2 + 0.5f);
			}
		}
		if (func_187(uParam1, 268435456))
		{
			func_611(&(uParam0->f_404), 16384);
		}
	}
	else if (func_187(uParam1, 524288))
	{
		func_520(uParam0, 67108864);
		func_612(uParam1, 524288);
	}
	if (func_613(uParam1, 128))
	{
		func_520(uParam0, 32);
	}
	if (uParam1->f_1799 != 0)
	{
		uParam0->f_416 = uParam1->f_1799;
		if (uParam1->f_1580 >= 0 && func_614(uParam1->f_912[uParam1->f_1580 /*41*/], 256))
		{
			func_611(&(uParam0->f_404), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_0x927B810E43E99932(&(uParam1->f_1588)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_417), &(uParam1->f_1588), 16);
	}
}

void func_319(var uParam0, int iParam1)
{
	var uVar0;

	if (iParam1 || !func_7(uParam0->f_172, 16384))
	{
		MemCopy(&uVar0, {func_615(uParam0->f_174)}, 8);
		func_616(&uVar0, 15000, 0, 0, 0, 1);
		func_2(&(uParam0->f_172), 16384);
	}
}

int func_320(int iParam0)
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
	iVar0 = func_617();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return 0;
	}
	ITEMSET::_0x20A4BF0E09BEE146(iVar1);
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

int func_321()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383->f_393))
	{
		func_618();
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::_0xD2CB0FB0FDCB473D(iVar0, 0);
	func_619(-1);
	func_620(3);
	return 1;
}

void func_322(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_621(iParam0, &iVar0, &iVar1);
	if (!func_622(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_623(iVar0, iVar1);
}

int func_323(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;

	func_523(uParam4, &sParam0);
	if (func_522(uParam4, 2) && !func_522(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -842734359, false);
	}
	if (func_624(uParam4) != 1)
	{
		func_625(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_624(uParam4))
	{
		case 1:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_348, 1, 0))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_348, 0))
				{
					func_626(uParam4, &sParam0, uParam5);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
				{
					func_627(uParam4, 4);
					return 0;
				}
				else
				{
					if (func_628(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_341);
					}
					func_629(uParam5);
				}
				func_627(uParam4, 3);
			}
			else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_350)) && func_522(uParam4, 134217728))
				{
				}
				else
				{
					func_248(uParam4);
				}
				func_265(&(uParam4->f_1));
				func_627(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_533(uParam4);
				if (!func_83(&(uParam4->f_1)))
				{
					func_84(&(uParam4->f_1), 0);
				}
				else if (func_466(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					func_627(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_348, 1, 0))
			{
				if (func_252(uParam4, &sParam0, 1, 1))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_348, 1, 0))
					{
						func_627(uParam4, 4);
					}
					else if (!func_250(func_524(uParam4)) && !func_630(Global_35, func_524(uParam4), 100f, 1, 1))
					{
						func_631(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_524(uParam4), 0f, 1, 1, 1, 0);
					}
				}
				else if (func_466(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					func_627(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
					func_632(1, 0);
					func_626(uParam4, &sParam0, uParam5);
					func_627(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_466(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
				}
				func_627(uParam4, 4);
			}
			break;
		case 3:
			func_633(uParam4);
			if (func_628(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_341);
			}
			func_629(uParam5);
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_348, 0)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348) || func_522(uParam4, 512)))
			{
				if (!func_522(uParam4, 1024) && func_634(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_522(uParam4, 512))
				{
					func_265(&(uParam4->f_1));
					func_520(uParam4, 512);
					func_627(uParam4, 4);
				}
				else if (func_522(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_625(uParam4);
			}
			if (func_522(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_635(uParam4) - func_636(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (func_637(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_636(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (func_638(uParam4))
			{
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
				}
				func_639(uParam4);
				func_640(uParam4);
				return 1;
			}
			else
			{
				if (func_522(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_348);
						}
						func_265(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						func_520(uParam4, 512);
						func_519(uParam4, 67108864, 1);
						func_627(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_522(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348)) && CAM::IS_SCREEN_FADED_OUT()) && func_636(uParam4) <= 5000) && func_636(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!func_522(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_641(&(uParam4->f_405), 0);
					func_520(uParam4, 536870912);
				}
				if (func_636(uParam4) >= 5000 && func_636(uParam4) <= (func_635(uParam4) - 5000))
				{
					func_642();
				}
			}
			break;
		case 6:
			if (func_638(uParam4))
			{
				func_639(uParam4);
				func_640(uParam4);
				return 1;
			}
			break;
		case 4:
			if (func_522(uParam4, 524288))
			{
				ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348))
					{
						func_520(uParam4, 1073741824);
					}
				}
			}
			else
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					if (!ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, 1);
						if (_NAMESPACE71::UI_FEED_GET_CURRENT_MESSAGE(9) != 0)
						{
							_NAMESPACE71::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_348))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					if (func_643(uParam5))
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, 0);
						}
						func_627(uParam4, 3);
					}
					else if (func_466(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, 0);
						}
						func_627(uParam4, 3);
					}
				}
				if (func_624(uParam4) == 3)
				{
					if (func_522(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			func_627(uParam4, 4);
			break;
	}
	return 0;
}

void func_324(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_522(uParam0, 16))
		{
			POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_4);
			POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_4);
			func_644(uParam0);
			PATHFIND::RESET_ROADS_IN_VOLUME(uParam0->f_4, 0);
		}
	}
	if (func_522(uParam0, 8))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_4);
		func_519(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_519(uParam0, 16, 1);
}

void func_325(int* iParam0)
{
	struct<367> Var0;

	Var0 = 1;
	Var0.f_13 = 27;
	Var0.f_338 = 1097859072;
	Var0.f_339 = 1101004800;
	Var0.f_366 = 4;
	MISC::_COPY_MEMORY(iParam0, &Var0, 434);
}

void func_326(var uParam0)
{
	func_645(&(uParam0->f_753));
	StringCopy(&(uParam0->f_2581), "", 32);
	uParam0->f_2571 = 0;
	func_3(&(uParam0->f_172), 262144);
	func_3(&(uParam0->f_172), 524288);
	func_3(&(uParam0->f_172), 1048576);
}

int func_327(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	if (func_187(uParam0, 32768))
	{
		return 1;
	}
	if (func_646(uParam0) >= 3)
	{
		uParam0->f_1792 = func_494(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
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
		func_647(uParam0);
	}
	if (func_646(uParam0) < 10)
	{
		if (func_646(uParam0) == 3)
		{
			func_648(uParam0, iParam5, bParam6);
		}
		else if (func_646(uParam0) > 3)
		{
			if (func_649(uParam0) == 0)
			{
				if (!func_187(uParam0, 524288))
				{
					func_650(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_651(uParam0, 4);
					func_652(uParam0, 10);
					func_653(uParam0, iParam5);
					return 1;
				}
			}
			if (!func_187(uParam0, 67108864) && !Global_1935630->f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!func_614(uParam0->f_912[uParam0->f_1580 /*41*/], 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
				PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
			}
			CAM::_0x8910C24B7E0046EC();
			func_654(0);
			func_655();
			PAD::DISABLE_CONTROL_ACTION(0, -1722177808, false);
			PAD::DISABLE_CONTROL_ACTION(0, 1644850270, false);
			PAD::DISABLE_CONTROL_ACTION(0, 2139949496, false);
			if (uParam0->f_1580 >= 0)
			{
				if (!func_614(uParam0->f_912[uParam0->f_1584 /*41*/], 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (func_656(uParam0, uParam0->f_1580))
				{
					if (func_657(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						func_658(uParam0, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1584 /*22*/])->f_1, 1065353216);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					func_658(uParam0, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1584 /*22*/])->f_1, 1065353216);
				}
				func_659(uParam0);
			}
		}
	}
	bVar0 = func_660(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_187(uParam0, 268435456) && bVar1) && !func_187(uParam0, 262144))
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
				func_661(uParam0, 131072);
				func_661(uParam0, 268435456);
			}
		}
		if (func_613(uParam0, 64) || (uParam0->f_1580 >= 0 && !func_614(uParam0->f_912[uParam0->f_1580 /*41*/], 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || func_649(uParam0) == 0)
			{
				HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_646(uParam0) == 3 || func_187(uParam0, 131072))
	{
		func_662(uParam0);
		if (!func_187(uParam0, 262144))
		{
			if ((bVar0 && func_187(uParam0, 65536)) || func_187(uParam0, 131072))
			{
				func_661(uParam0, 32768);
				func_651(uParam0, 4);
				func_652(uParam0, 10);
				uParam0->f_1665 = 1;
				func_653(uParam0, iParam5);
				return 1;
			}
		}
	}
	if (func_646(uParam0) >= 3)
	{
		func_663(uParam0, iParam5);
		func_664(uParam0);
		if (!func_665(uParam0, 1))
		{
			func_666(uParam0);
		}
		func_667(uParam0);
	}
	switch (func_646(uParam0))
	{
		case 0:
			func_668(uParam0, Param1, iParam5);
			break;
		case 1:
			func_669(uParam0);
			break;
		case 2:
			func_670(uParam0);
			break;
		case 3:
			if (func_328(uParam0))
			{
				func_671(2);
				func_658(uParam0, (uParam0->f_912[uParam0->f_1580 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1580 /*22*/])->f_1, 1065353216);
				func_265(&(uParam0->f_1768));
				func_651(uParam0, 1);
				func_672();
				func_652(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!func_187(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (func_646(uParam0) == 5)
			{
				if (func_673(uParam0))
				{
					func_651(uParam0, 2);
					func_652(uParam0, 6);
				}
			}
			if (func_646(uParam0) == 6)
			{
				if (func_674(uParam0))
				{
					func_651(uParam0, 3);
					func_652(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || func_675(&(uParam0->f_1768)) >= 15f)
			{
				if (func_676(uParam0, iParam5))
				{
					if (func_677(uParam0))
					{
						uParam0->f_1581 = func_678(uParam0);
						func_265(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
						HUD::_0x8BC7C1F929D07BF3(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
						func_651(uParam0, 6);
						func_652(uParam0, 9);
					}
					else
					{
						func_651(uParam0, 4);
						func_652(uParam0, 10);
						func_653(uParam0, iParam5);
						return 1;
					}
				}
			}
			break;
		case 9:
			if (func_676(uParam0, iParam5))
			{
				func_653(uParam0, iParam5);
				func_652(uParam0, 10);
				return 1;
			}
			break;
		case 10:
			return 1;
	}
	return 0;
}

int func_328(var uParam0)
{
	if (uParam0->f_1666)
	{
		return 0;
	}
	return uParam0->f_1665;
}

int func_329(var uParam0)
{
	func_579(uParam0);
	func_679(uParam0);
	func_581(uParam0);
	switch (iLocal_16)
	{
		case 0:
			if (iLocal_448 || iLocal_447)
			{
				if (func_680("RBT22_BARN1"))
				{
					func_681("RBT22_BARN1", 0, 0);
				}
				func_682(uParam0);
				func_344(&((Local_412[2 /*11*/])->f_1));
				func_683(1);
			}
			break;
		case 1:
			func_682(uParam0);
			func_684(uParam0);
			func_685();
			if (!func_83(&uLocal_536))
			{
				if (func_686())
				{
					func_84(&uLocal_536, 0);
				}
			}
			else if (func_466(&uLocal_536) > 1.5f || ENTITY::IS_ENTITY_AT_ENTITY(Global_35, &(Local_412[2 /*11*/]), 5f, 5f, 5f, false, true, 0))
			{
				func_687(uParam0);
				if (!MAP::DOES_BLIP_EXIST((Local_412[2 /*11*/])->f_1))
				{
					(Local_412[2 /*11*/])->f_1 = MAP::_0x23F74C2FDA6E7C61(-89429847, &(Local_412[2 /*11*/]));
					MAP::_0x662D364ABF16DE2F((Local_412[2 /*11*/])->f_1, -981020806);
					func_211(uParam0, "RBT22_INTER", 1, -1082130432, 0, 0, -1, -1, 0);
					func_130(uParam0, "RBT22_INTER", 0, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
				}
				func_688(2, 3);
				func_683(2);
			}
			break;
		case 2:
			if ((Local_412[2 /*11*/])->f_8 != 5)
			{
				switch (iLocal_19)
				{
					case 0:
						func_687(uParam0);
						if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, &(Local_412[2 /*11*/]), 20f, 20f, 20f, false, true, 0))
						{
							WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
							if (func_689(uParam0, "RBT22_SURR", 0, 0))
							{
								func_690(1);
							}
						}
						else if (!MAP::DOES_BLIP_EXIST((Local_412[2 /*11*/])->f_1))
						{
							(Local_412[2 /*11*/])->f_1 = MAP::_0x23F74C2FDA6E7C61(-89429847, &(Local_412[2 /*11*/]));
							MAP::_0x662D364ABF16DE2F((Local_412[2 /*11*/])->f_1, -981020806);
							func_211(uParam0, "RBT22_INTER", 1, -1082130432, 0, 0, -1, -1, 0);
						}
						break;
					case 1:
						func_687(uParam0);
						if (!func_691())
						{
							if (func_692(uParam0, "RBT22_SURRKID", 0))
							{
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(&(Local_412[2 /*11*/]));
								func_690(2);
							}
						}
						break;
					case 2:
						if (!MAP::DOES_BLIP_EXIST((Local_412[2 /*11*/])->f_1))
						{
							(Local_412[2 /*11*/])->f_1 = MAP::_0x23F74C2FDA6E7C61(-89429847, &(Local_412[2 /*11*/]));
							MAP::_0x662D364ABF16DE2F((Local_412[2 /*11*/])->f_1, -981020806);
							func_211(uParam0, "RBT22_INTER", 1, -1082130432, 0, 0, -1, -1, 0);
						}
						if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(&(Local_412[2 /*11*/]), true, false), 5f, true))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(Local_412[2 /*11*/]), Global_35, 1, 1))
							{
								func_693();
								iLocal_20 = 5;
								iLocal_635 = 0;
								return 1;
							}
							else
							{
								iLocal_599 = 1;
								func_690(3);
								return 1;
							}
						}
						func_694(Local_564[0 /*17*/], "INTERACT_QUESTION", " ", -163964935, 0, 0, 0, 1, 0);
						func_694(Local_564[1 /*17*/], "INTERACT_THREATEN", " ", 648122183, 0, 0, 0, 1, 0);
						PED::SET_PED_CONFIG_FLAG(&(Local_412[2 /*11*/]), 301, false);
						PED::SET_PED_CONFIG_FLAG(&(Local_412[2 /*11*/]), 315, true);
						PED::SET_PED_CONFIG_FLAG(&(Local_412[2 /*11*/]), 130, true);
						func_690(3);
						break;
					case 3:
						if ((iLocal_599 == -1 && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(&(Local_412[2 /*11*/]), true, false), 5f, true)) && ENTITY::IS_ENTITY_AT_ENTITY(Global_35, &(Local_412[1 /*11*/]), 20f, 20f, 20f, false, true, 0))
						{
							func_695(Local_564[0 /*17*/], 0, 0);
							func_695(Local_564[1 /*17*/], 0, 0);
							func_696(Local_412[2 /*11*/], &iLocal_543, 12f, &Local_564, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432);
							iLocal_599 = 1;
						}
						if ((iLocal_599 == -1 && func_697(&(Local_412[2 /*11*/]), 1, 1, 0, 0, 1)) && ENTITY::IS_ENTITY_AT_ENTITY(Global_35, &(Local_412[2 /*11*/]), 20f, 20f, 20f, false, true, 0))
						{
							func_695(Local_564[0 /*17*/], 0, 0);
							func_695(Local_564[1 /*17*/], 0, 0);
							func_696(Local_412[2 /*11*/], &iLocal_543, 12f, &Local_564, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432);
							iLocal_599 = 1;
						}
						if (iLocal_599 == -1 && func_698(&(Local_412[2 /*11*/])))
						{
							func_695(Local_564[0 /*17*/], 0, 0);
							func_695(Local_564[1 /*17*/], 0, 0);
							func_696(Local_412[2 /*11*/], &iLocal_543, 12f, &Local_564, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432);
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(&(Local_412[2 /*11*/]));
							iLocal_599 = 1;
						}
						if (iLocal_599 == -1)
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(Local_412[2 /*11*/]), Global_35, 1, 1))
							{
								func_693();
								iLocal_20 = 5;
								iLocal_635 = 0;
								func_344(&((Local_412[2 /*11*/])->f_1));
								return 1;
							}
						}
						if (iLocal_599 == -1)
						{
							iLocal_599 = func_696(Local_412[2 /*11*/], &iLocal_543, 12f, &Local_564, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432);
							if (iLocal_599 == 0)
							{
								func_695(Local_564[0 /*17*/], 0, 0);
								func_695(Local_564[1 /*17*/], 0, 0);
								func_696(Local_412[2 /*11*/], &iLocal_543, 12f, &Local_564, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432);
							}
							else if (iLocal_599 == 1)
							{
								func_695(Local_564[0 /*17*/], 0, 0);
								func_695(Local_564[1 /*17*/], 0, 0);
								func_696(Local_412[2 /*11*/], &iLocal_543, 12f, &Local_564, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432);
							}
						}
						if (iLocal_599 == 0)
						{
							if (func_689(uParam0, "RBT22_ILO1", 0, 0))
							{
								func_690(4);
							}
						}
						else if (iLocal_599 == 1)
						{
							if (func_689(uParam0, "RBT22_ILO2", 0, 0))
							{
								func_690(4);
							}
						}
						break;
					case 4:
						if (!func_691())
						{
							if (iLocal_599 == 0)
							{
								if (func_692(uParam0, "RBT22_ILO1QUST", 0))
								{
									func_690(5);
								}
							}
							else if (iLocal_599 == 1)
							{
								if (func_692(uParam0, "RBT22_ILO1THRT", 0))
								{
									func_690(5);
								}
							}
						}
						else if (func_680("RBT22_ILO1QUST") || func_680("RBT22_ILO1THRT"))
						{
							func_690(5);
						}
						break;
					case 5:
						if (!func_691())
						{
							func_344(&((Local_412[2 /*11*/])->f_1));
							iLocal_635 = 1;
							return 1;
						}
						break;
				}
			}
			else
			{
				if (func_691())
				{
					func_699(0, 0);
				}
				if (func_700())
				{
					func_692(uParam0, "RBT22_ALLDEAD_J", 0);
				}
				fLocal_947 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_453, true);
				if (fLocal_947 < 15f)
				{
					fLocal_947 = 15f;
				}
				iLocal_635 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

int func_330(var uParam0)
{
	func_687(uParam0);
	switch (iLocal_21)
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST(iLocal_634))
			{
				func_701();
				func_702();
				func_130(uParam0, "RBT22_CLUES", 1, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
				func_84(&uLocal_638, 0);
			}
			if (func_301(uParam0))
			{
				func_703();
				iLocal_21 = 1;
			}
			break;
		case 1:
			func_704(uParam0);
			func_705(uParam0);
			func_706(uParam0);
			func_707(uParam0);
			func_708(uParam0);
			if (iLocal_636 == 0)
			{
				func_703();
				if (PLAYER::_0x45AB66D02B601FA7(PLAYER::PLAYER_ID()))
				{
					iLocal_637 = 1;
					if (func_709())
					{
						func_689(uParam0, "RBT22_EAGLEEYE", 0, 0);
						iLocal_636 = 1;
						func_344(&iLocal_634);
						fLocal_947 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_695, true);
						func_130(uParam0, "RBT22_FOLLOW", 1, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
					}
				}
				else if (!iLocal_637)
				{
					if (func_675(&uLocal_638) > 20f)
					{
						func_398("RBT22_H_TRACK", 10000, 0, 0, 0, 1);
						func_236(&uLocal_638);
						iLocal_637 = 1;
					}
				}
			}
			if (bLocal_742)
			{
				func_710(1);
				iLocal_22 = 5;
				iLocal_635 = 1;
				func_711(uParam0);
				return 1;
			}
			else if (bLocal_691 || func_582(Global_36, vLocal_678, 35f, 1))
			{
				func_710(0);
				func_344(&iLocal_634);
				iLocal_635 = 1;
				func_711(uParam0);
				return 1;
			}
			else if (func_582(Global_36, vLocal_678, 80f, 1))
			{
				func_344(&iLocal_634);
				iLocal_635 = 1;
				func_701();
				return 1;
			}
			else if (func_331(uParam0))
			{
				if (func_689(uParam0, "RBT22_FINDCLUE", 0, 0))
				{
					func_344(&iLocal_634);
					iLocal_635 = 1;
					func_701();
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_331(var uParam0)
{
	int iVar0;

	if (iLocal_633)
	{
		return 1;
	}
	if (iLocal_632)
	{
		if (func_712(1791585045))
		{
			func_211(uParam0, "RBT22_SEARCH", 1, -1082130432, 0, 0, -1, -1, 0);
			iLocal_633 = 1;
			if (iLocal_635)
			{
				func_689(uParam0, "RBT22_FINDCLUE", 0, 0);
			}
		}
		else if (func_713())
		{
			func_236(&uLocal_629);
		}
		else if (func_675(&uLocal_629) > 10f)
		{
			func_236(&uLocal_629);
			if (!iLocal_635)
			{
				func_130(uParam0, "RBT22_NOTE", 0, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
			}
		}
		return 0;
	}
	if (!func_83(&uLocal_629))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (func_714(&(Local_412[iVar0 /*11*/])))
			{
				iLocal_637 = 1;
				func_84(&uLocal_629, 0);
				return 0;
			}
			iVar0++;
		}
	}
	else if (func_466(&uLocal_629) > 3f)
	{
		if (!iLocal_632)
		{
			func_689(uParam0, "RBT22_MAP", 0, 0);
			iLocal_632 = 1;
			func_715(1791585045, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			if (!iLocal_635)
			{
				func_211(uParam0, "RBT22_NOTE", 1, -1082130432, 0, 0, -1, -1, 0);
			}
		}
	}
	return 0;
}

int func_332(var uParam0)
{
	int iVar0;

	func_687(uParam0);
	switch (iLocal_22)
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST(iLocal_674))
			{
				func_701();
				func_702();
				fLocal_947 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_695, true);
				func_211(uParam0, "RBT22_SEARCH", 1, -1082130432, 0, 0, -1, -1, 0);
			}
			if (func_301(uParam0))
			{
				func_703();
				iLocal_22 = 1;
			}
			iLocal_599 = -1;
			break;
		case 1:
			func_704(uParam0);
			func_705(uParam0);
			func_706(uParam0);
			func_707(uParam0);
			func_708(uParam0);
			if (bLocal_742)
			{
				iLocal_22 = 5;
				func_710(1);
				func_711(uParam0);
			}
			else if (iLocal_743)
			{
				iLocal_22 = 6;
				func_710(0);
				func_711(uParam0);
			}
			else if (bLocal_691)
			{
				func_710(0);
				if (!iLocal_942)
				{
					func_130(uParam0, "RBT22_QU_OBJ", 0, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
					iLocal_942 = 1;
				}
				func_711(uParam0);
			}
			else if (func_582(Global_36, vLocal_678, 70f, 1))
			{
				func_694((*Local_789[0 /*35*/])[0 /*17*/], "INTERACT_QUESTION", " ", -163964935, 0, 0, 0, 1, 0);
				func_694((*Local_789[0 /*35*/])[1 /*17*/], "INTERACT_THREATEN", " ", 648122183, 0, 0, 0, 1, 0);
				PED::SET_PED_CONFIG_FLAG(&(Local_718[0 /*11*/]), 301, false);
				func_694((*Local_789[1 /*35*/])[0 /*17*/], "INTERACT_QUESTION", " ", -163964935, 0, 0, 0, 1, 0);
				func_694((*Local_789[1 /*35*/])[1 /*17*/], "INTERACT_THREATEN", " ", 648122183, 0, 0, 0, 1, 0);
				PED::SET_PED_CONFIG_FLAG(&(Local_718[1 /*11*/]), 301, false);
				iLocal_599 = -1;
				iLocal_22 = 2;
			}
			break;
		case 2:
			func_704(uParam0);
			func_705(uParam0);
			func_706(uParam0);
			func_707(uParam0);
			func_708(uParam0);
			if (bLocal_742)
			{
				iLocal_22 = 5;
				func_710(1);
				func_711(uParam0);
				func_298(&Local_26, 4, 1);
				return 0;
			}
			else if (iLocal_743)
			{
				iLocal_22 = 6;
				func_710(0);
				func_711(uParam0);
				return 0;
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (iLocal_863 == -1)
					{
						iLocal_599 = func_696(Local_718[iVar0 /*11*/], Local_746[iVar0 /*21*/], 70f, Local_789[iVar0 /*35*/], 0, 3, 0, 0, 1, 0, 0, 2, -1082130432);
						if (iLocal_599 != -1)
						{
							iLocal_863 = iVar0;
						}
					}
					iVar0++;
				}
				if (iLocal_599 == 0)
				{
					if (!iLocal_942)
					{
						func_211(uParam0, "RBT22_QU_OBJ", 1, -1082130432, 0, 0, -1, -1, 0);
						iLocal_942 = 1;
					}
					if (func_680("RBT22_IG5"))
					{
						func_681("RBT22_IG5", 0, 0);
					}
					func_710(1);
					func_711(uParam0);
					if (iLocal_863 == 0)
					{
						func_695((*Local_789[0 /*35*/])[0 /*17*/], 0, 0);
						func_695((*Local_789[0 /*35*/])[1 /*17*/], 0, 0);
						func_695((*Local_789[1 /*35*/])[0 /*17*/], 0, 0);
						func_695((*Local_789[1 /*35*/])[1 /*17*/], 0, 0);
						func_696(Local_718[0 /*11*/], Local_746[0 /*21*/], 70f, Local_789[0 /*35*/], 0, 3, 0, 0, 1, 0, 0, 2, -1082130432);
					}
					else if (iLocal_863 == 1)
					{
						func_695((*Local_789[0 /*35*/])[0 /*17*/], 0, 0);
						func_695((*Local_789[0 /*35*/])[1 /*17*/], 0, 0);
						func_695((*Local_789[1 /*35*/])[0 /*17*/], 0, 0);
						func_695((*Local_789[1 /*35*/])[1 /*17*/], 0, 0);
						func_696(Local_718[1 /*11*/], Local_746[1 /*21*/], 70f, Local_789[1 /*35*/], 0, 3, 0, 0, 1, 0, 0, 2, -1082130432);
					}
					if (func_689(uParam0, "RBT22_RILOFARQ", 0, 0))
					{
						func_716();
						iLocal_743 = 1;
						iLocal_22 = 4;
					}
					else
					{
						iLocal_22 = 3;
					}
					return 0;
				}
				else if (iLocal_599 == 1)
				{
					if (!iLocal_942)
					{
						func_211(uParam0, "RBT22_QU_OBJ", 1, -1082130432, 0, 0, -1, -1, 0);
						iLocal_942 = 1;
					}
					if (func_680("RBT22_IG5"))
					{
						func_681("RBT22_IG5", 0, 0);
					}
					func_710(1);
					func_711(uParam0);
					if (iLocal_863 == 0)
					{
						func_695((*Local_789[0 /*35*/])[0 /*17*/], 0, 0);
						func_695((*Local_789[0 /*35*/])[1 /*17*/], 0, 0);
						func_695((*Local_789[1 /*35*/])[0 /*17*/], 0, 0);
						func_695((*Local_789[1 /*35*/])[1 /*17*/], 0, 0);
						func_696(Local_718[0 /*11*/], Local_746[0 /*21*/], 70f, Local_789[0 /*35*/], 0, 3, 0, 0, 1, 0, 0, 2, -1082130432);
					}
					else if (iLocal_863 == 1)
					{
						func_695((*Local_789[0 /*35*/])[0 /*17*/], 0, 0);
						func_695((*Local_789[0 /*35*/])[1 /*17*/], 0, 0);
						func_695((*Local_789[1 /*35*/])[0 /*17*/], 0, 0);
						func_695((*Local_789[1 /*35*/])[1 /*17*/], 0, 0);
						func_696(Local_718[1 /*11*/], Local_746[1 /*21*/], 70f, Local_789[1 /*35*/], 0, 3, 0, 0, 1, 0, 0, 2, -1082130432);
					}
					if (func_689(uParam0, "RBT22_RILOFART", 0, 0))
					{
						func_716();
						iLocal_743 = 1;
						iLocal_22 = 4;
					}
					else
					{
						iLocal_22 = 3;
					}
					return 0;
				}
			}
			if (bLocal_691 || func_582(Global_36, vLocal_678, 35f, 1))
			{
				func_710(0);
				func_344(&iLocal_674);
				func_344(&iLocal_634);
				if (!iLocal_942)
				{
					func_130(uParam0, "RBT22_QU_OBJ", 0, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
					iLocal_942 = 1;
				}
				func_711(uParam0);
			}
			break;
		case 3:
			func_704(uParam0);
			func_705(uParam0);
			func_706(uParam0);
			func_708(uParam0);
			if (bLocal_742)
			{
				iLocal_22 = 5;
			}
			else if (iLocal_599 == 0)
			{
				if (func_689(uParam0, "RBT22_RILOFARQ", 0, 0))
				{
					func_716();
					iLocal_743 = 1;
					iLocal_22 = 4;
				}
			}
			else if (iLocal_599 == 1)
			{
				if (func_689(uParam0, "RBT22_RILOFART", 0, 0))
				{
					func_716();
					iLocal_743 = 1;
					iLocal_22 = 4;
				}
			}
			break;
		case 4:
			func_704(uParam0);
			func_705(uParam0);
			func_706(uParam0);
			func_708(uParam0);
			if (bLocal_742)
			{
				iLocal_22 = 5;
				func_710(1);
				func_711(uParam0);
			}
			else if (iLocal_599 == 0)
			{
				if (!func_717("RBT22_RILOFARQ", 0))
				{
					if (func_718(uParam0) || iLocal_896)
					{
						func_719();
						func_720(0);
						iLocal_22 = 10;
					}
				}
			}
			else if (iLocal_599 == 1)
			{
				if (!func_717("RBT22_RILOFART", 0))
				{
					if (func_718(uParam0) || iLocal_896)
					{
						func_719();
						func_720(0);
						iLocal_22 = 10;
					}
				}
			}
			break;
		case 5:
			func_704(uParam0);
			func_705(uParam0);
			func_706(uParam0);
			func_721(1);
			if (func_718(uParam0))
			{
				func_722();
				iLocal_22 = 11;
			}
			break;
		case 6:
			func_704(uParam0);
			func_705(uParam0);
			func_706(uParam0);
			if (func_680("RBT22_IG5"))
			{
				func_681("RBT22_IG5", 0, 0);
			}
			if (bLocal_742)
			{
				iLocal_22 = 5;
				func_710(1);
				func_711(uParam0);
			}
			else if (func_692(uParam0, "RBT22_CHALLENGE", 0))
			{
				func_720(1);
				func_694((*Local_789[0 /*35*/])[0 /*17*/], "INTERACT_QUESTION", " ", -163964935, 0, 0, 0, 1, 0);
				func_694((*Local_789[1 /*35*/])[1 /*17*/], "INTERACT_THREATEN", " ", 648122183, 0, 0, 0, 1, 0);
				PED::SET_PED_CONFIG_FLAG(&(Local_718[0 /*11*/]), 301, false);
				func_716();
				func_84(&uLocal_860, 0);
				iLocal_22 = 7;
			}
			break;
		case 7:
			func_704(uParam0);
			func_705(uParam0);
			func_706(uParam0);
			if (bLocal_742)
			{
				func_720(0);
				iLocal_22 = 5;
			}
			else if (func_675(&uLocal_860) > 10f)
			{
				func_720(0);
				iLocal_22 = 5;
			}
			else
			{
				iLocal_599 = func_696(Local_718[0 /*11*/], Local_746[0 /*21*/], 25f, Local_789[0 /*35*/], 0, 3, 0, 0, 1, 0, 0, 2, -1082130432);
				if (iLocal_599 == 0)
				{
					if (func_689(uParam0, "RBT22_RILOQ", 0, 0))
					{
						iLocal_22 = 9;
					}
					else
					{
						iLocal_22 = 8;
					}
					func_695((*Local_789[0 /*35*/])[0 /*17*/], 0, 0);
					func_695((*Local_789[0 /*35*/])[1 /*17*/], 0, 0);
					func_696(Local_718[0 /*11*/], Local_746[0 /*21*/], 25f, Local_789[0 /*35*/], 0, 3, 0, 0, 1, 0, 0, 2, -1082130432);
				}
				else if (iLocal_599 == 1)
				{
					iLocal_599 = 1;
					if (func_689(uParam0, "RBT22_RILOT", 0, 0))
					{
						iLocal_22 = 9;
					}
					else
					{
						iLocal_22 = 8;
					}
				}
				func_716();
			}
			break;
		case 8:
			func_704(uParam0);
			func_705(uParam0);
			func_706(uParam0);
			if (bLocal_742)
			{
				func_720(0);
				iLocal_22 = 5;
			}
			else if (iLocal_599 == 0)
			{
				if (func_689(uParam0, "RBT22_RILOQ", 0, 0))
				{
					iLocal_22 = 9;
				}
			}
			else if (iLocal_599 == 1)
			{
				if (func_689(uParam0, "RBT22_RILOT", 0, 0))
				{
					iLocal_22 = 9;
				}
			}
			break;
		case 9:
			func_704(uParam0);
			func_705(uParam0);
			func_706(uParam0);
			if (bLocal_742)
			{
				func_692(uParam0, "RBT22_RILOANS", 0);
				func_720(0);
				iLocal_22 = 10;
			}
			else if (!func_691())
			{
				if (func_718(uParam0) || iLocal_896)
				{
					func_719();
					func_720(0);
					iLocal_22 = 10;
				}
			}
			break;
		case 10:
			func_704(uParam0);
			func_705(uParam0);
			func_706(uParam0);
			if (func_718(uParam0))
			{
				func_721(1);
				func_722();
				iLocal_22 = 11;
			}
			break;
		case 11:
			func_303(&Local_26);
			func_704(uParam0);
			func_705(uParam0);
			func_706(uParam0);
			return 1;
	}
	return 0;
}

void func_333(var uParam0)
{
	if (func_723() || uParam0->f_375 == 2)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 440314811, false);
		PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
		PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
		PAD::DISABLE_CONTROL_ACTION(0, 42190210, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1632043089, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1623727326, false);
		PAD::DISABLE_CONTROL_ACTION(0, -922478227, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1080745902, false);
		PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
		PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
		PAD::DISABLE_CONTROL_ACTION(0, -874806616, false);
		PAD::DISABLE_CONTROL_ACTION(0, -455946723, false);
		PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1582581421, false);
	}
	else if (uParam0->f_375 == 4)
	{
		func_724(uParam0);
	}
}

int func_334(var uParam0)
{
	if (func_725(&Local_26, 1))
	{
		return 1;
	}
	else
	{
		func_706(uParam0);
	}
	func_704(uParam0);
	func_705(uParam0);
	func_726(uParam0);
	func_727(uParam0);
	return 0;
}

int func_335(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
	{
		func_728(uParam0);
	}
	if (func_729(uParam0->f_306, Global_36))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 328, true);
	}
	func_730(uParam0);
	func_731(uParam0);
	func_732(uParam0);
	func_733(uParam0);
	func_734(uParam0);
	if (func_735(uParam0))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	if (uParam0->f_60 >= 4)
	{
		func_736(uParam0);
	}
	switch (uParam0->f_60)
	{
		case 0:
			break;
		case 1:
			if (func_737(uParam0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_67, false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_67, 253, true);
				func_738(uParam0, 2);
			}
			break;
		case 2:
			func_739(uParam0);
			EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
			func_740(uParam0, 10);
			func_265(&(uParam0->f_364));
			uParam0->f_367 = 0;
			func_413(uParam0->f_306);
			if (TASK::_0x916B8E075ABC8B4E(uParam0->f_69, 1))
			{
				TASK::_0x541E5B41DCA45828(uParam0->f_69, 1, 0);
			}
			if (!PED::_0x9C54041BB66BCF9E(uParam0->f_69, uParam0->f_371))
			{
				func_741(uParam0);
			}
			if (func_742(uParam0->f_65) != 0)
			{
				COMPENDIUM::COMPENDIUM_GANG_BOUNTY_CAPTURED(func_742(uParam0->f_65));
			}
			func_738(uParam0, 3);
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
			{
				if (func_743(uParam0))
				{
					if (func_744(uParam0))
					{
						TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
						func_265(&(uParam0->f_312));
						func_236(&(uParam0->f_318));
						uParam0->f_361 = 1;
						func_738(uParam0, 4);
					}
				}
				else if (!uParam0->f_367)
				{
					if (func_675(&(uParam0->f_364)) > 10f || !func_630(Global_35, func_745(uParam0->f_300, uParam0->f_65), 30f, 1, 1))
					{
						func_298(uParam0, 2048, 1);
						uParam0->f_367 = 1;
						func_236(&(uParam0->f_364));
					}
				}
			}
			break;
		case 4:
			if (func_466(&(uParam0->f_312)) > 2f || func_746(uParam0))
			{
				if (!func_463(uParam0->f_328, 128))
				{
					if (func_747(uParam0))
					{
						func_748(100, 1);
						func_265(&(uParam0->f_318));
						func_468(&(uParam0->f_328), 128);
					}
				}
				else if (!func_463(uParam0->f_329, 256))
				{
					if (!func_304(Global_35, -76381094) && !func_630(Global_35, func_745(uParam0->f_300, uParam0->f_65), 2f, 1, 1))
					{
						func_749(uParam0);
					}
				}
			}
			if (uParam0->f_63 != 11)
			{
				func_750(uParam0);
			}
			else
			{
				if (func_751(uParam0))
				{
					func_738(uParam0, 5);
				}
				if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_306, true, 0))
				{
					func_738(uParam0, 6);
				}
			}
			break;
		case 5:
			if (!TASK::DOES_SCENARIO_POINT_EXIST(TASK::_0xD04241BBF6D03A5E(Global_35)))
			{
				func_265(&(uParam0->f_318));
				func_738(uParam0, 6);
			}
			break;
		case 6:
			if (ANIMSCENE::_0xD8254CB2C586412B((uParam0->f_30[0 /*14*/])->f_1, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
				{
					if (!func_304(uParam0->f_69, 150319005))
					{
						TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
					}
				}
				func_740(uParam0, 12);
				func_752(uParam0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_336(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_753(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_754(iParam0, 1);
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
			func_755(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_756(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_757(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_758(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_758(iParam0, 0, 0) - iParam1) < 0)
		{
			func_336(iParam0, func_758(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_759(iParam0) == -427144552)
	{
		if (!func_760(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_761(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_762(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_755(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_763(iParam0, iParam1);
	return 1;
}

int func_337(int iParam0)
{
	if (!func_61(iParam0))
	{
		return -1;
	}
	return func_388(iParam0);
}

int func_338(int iParam0)
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

int func_339(var uParam0)
{
	return uParam0 & 31;
}

int func_340(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_341(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

void func_342(var uParam0)
{
	*uParam0 = 0;
}

void func_343(int iParam0)
{
	if (func_764(179) || func_764(180))
	{
		if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			if (((*Global_1347702)[iParam0 /*49*/])->f_37 == Global_1905944->f_5698)
			{
				func_765(1);
			}
		}
	}
	if (func_766(179))
	{
		func_767(179);
	}
	if (func_766(180))
	{
		func_767(180);
	}
}

void func_344(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_345(int iParam0, bool bParam1, vector3 vParam2)
{
	if (!func_207(iParam0))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32 != 0)
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 4096 != 0)
	{
		if (bParam1)
		{
			return;
		}
	}
	func_343(iParam0);
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 == 0)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		func_239(iParam0, func_396(iParam0), 0, 1);
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_18 > -1f)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		func_239(iParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		func_239(iParam0, vParam2, 0, 0);
	}
	MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 724623647);
	func_51(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
}

void func_346(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_254((*uParam1)[iVar0 /*16*/], 1048576))
		{
			switch (iParam0)
			{
				case 1:
				case 2:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 5)
					{
						func_261((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
				case 3:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 3)
					{
						func_261((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_347(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_348(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_349(int iParam0)
{
	if (!func_347(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

int func_350()
{
	return &Global_1899515;
}

void func_351(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_23117[iParam0 /*11*/])->f_2 = iParam1;
		return;
	}
	(Global_1058888->f_40615[iParam0 /*11*/])->f_2 = iParam1;
}

void func_352(int iParam0, int iParam1)
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

void func_353(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (&Global_23117[iParam0 /*11*/] - (Global_23117[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0 /*11*/] = (&Global_1058888->f_40615[iParam0 /*11*/] - (Global_1058888->f_40615[iParam0 /*11*/] && iParam1));
}

void func_354(int iParam0)
{
	if (!func_347(iParam0))
	{
		return;
	}
	if (func_219(iParam0))
	{
		func_768(iParam0);
	}
	else
	{
		func_769(iParam0);
	}
}

int func_355(int iParam0)
{
	iParam0 = func_375(iParam0);
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

int func_356(int iParam0)
{
	int iVar0;

	iParam0 = func_375(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_355(iParam0))
	{
		return 0;
	}
	iVar0 = func_134(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_357(int iParam0)
{
	int iVar0;

	iParam0 = func_375(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_355(iParam0))
	{
		return;
	}
	iVar0 = func_134(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::_SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_358(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_207(iVar0))
		{
			if (func_124(iVar0, 4))
			{
				func_359(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_359(int iParam0, bool bParam1)
{
	if (!func_124(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_270(iParam0), func_271(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_270(iParam0), func_271(iParam0), 2, "");
		func_272(iParam0, 16);
	}
	else
	{
		if (func_124(iParam0, 8))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_270(iParam0), func_271(iParam0), 1, "");
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_270(iParam0), func_271(iParam0), 0, "");
		}
		func_125(iParam0, 16);
	}
}

void func_360(int iParam0, bool bParam1)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_124(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_270(iParam0), func_271(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_124(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_270(iParam0), func_271(iParam0), 1, "");
		}
		func_272(iParam0, 8);
	}
	else
	{
		if (func_124(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_270(iParam0), func_271(iParam0), 0, "");
		}
		func_125(iParam0, 8);
	}
}

void func_361(int iParam0, char* sParam1, int iParam2, float fParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	sVar0 = func_557(iParam8, sParam1, sParam4, sParam5, sParam6, sParam7);
	if (iParam2 == 1)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	func_558(iParam0, sParam1, sVar0, fParam3);
}

int func_362(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return (func_770(sParam0, 0, 0, -1, -1, 0) && func_713());
}

int func_363(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_591(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_557(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_591(sVar0, iParam1, 0, 0, 1, 1);
}

int func_364()
{
	if (func_206() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_365(int iParam0, int iParam1, int iParam2)
{
	func_771(iParam0, iParam2);
	if (func_772(iParam0))
	{
		func_773(((*Global_1347702)[iParam0 /*49*/])->f_15);
	}
	if (iParam1 == 1)
	{
		if (func_178(((*Global_1347702)[iParam0 /*49*/])->f_15))
		{
			func_179(((*Global_1347702)[iParam0 /*49*/])->f_15, 0, 2);
		}
	}
}

void func_366(int iParam0)
{
	func_369();
	if (!func_207(iParam0))
	{
		return;
	}
	Global_40.f_1093 = Global_1347702[iParam0 /*49*/];
}

int func_367(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_35(((*Global_1347702)[iParam0 /*49*/])->f_12, 2097152))
		{
			if (func_479(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 0;
			}
		}
		else if (func_35(((*Global_1347702)[iParam0 /*49*/])->f_12, 256))
		{
			if (!func_479(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 0;
			}
		}
	}
	return func_774(iParam0);
}

int func_368(int iParam0)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_43))
	{
		return 0;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(((*Global_1347702)[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])->f_43))
	{
		return 0;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_28 != ((*Global_1347702)[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])->f_28)
	{
		return 0;
	}
	else if (Global_1347702[iParam0 /*49*/] != Global_1347702[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])
	{
		return 0;
	}
	else if (!func_775(iParam0))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(((*Global_1347702)[iParam0 /*49*/])->f_43, false, false), func_73(((*Global_1347702)[iParam0 /*49*/])->f_35));
	if (fVar0 > (7.5f * 7.5f))
	{
		return 0;
	}
	return 1;
}

void func_369()
{
	int iVar0;
	int iVar1;

	iVar0 = Global_40.f_1093;
	Global_40.f_1093 = -1;
	if (func_776(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < &Global_1347702)
		{
			if (func_207(iVar1) && Global_1347702[iVar1 /*49*/] == iVar0)
			{
				if (MAP::DOES_BLIP_EXIST(((*Global_