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
	struct<8> Local_20[5];
	struct<22> Local_61[4];
	struct<6> Local_150[4];
	struct<7> Local_175[4];
	struct<6> Local_204[3];
	struct<330> Local_223 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = -1;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	int iLocal_607 = 0;
	int iLocal_608 = 0;
	int iLocal_609 = 0;
	int iLocal_610 = 0;
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	vector3 vLocal_613 = { 0f, 0f, 0f };
	vector3 vLocal_616 = { 0f, 0f, 0f };
	vector3 vLocal_619 = { 0f, 0f, 0f };
	vector3 vLocal_622[10] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_653 = { 0f, 0f, 0f };
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	int iLocal_659 = 0;
	int iLocal_660 = 0;
	int iLocal_661 = 0;
	bool bLocal_662 = false;
	int iLocal_663 = 0;
	bool bLocal_664 = false;
	int iLocal_665 = 0;
	int iLocal_666[5] = { 0, 0, 0, 0, 0 };
	int iLocal_672 = 0;
	int iLocal_673 = 0;
	int iLocal_674[2] = { 0, 0 };
	int iLocal_677 = 0;
	int iLocal_678 = 0;
	int iLocal_679 = 0;
	int iLocal_680 = 0;
	int iLocal_681 = 0;
	int iLocal_682 = 0;
	struct<20> Local_683[5];
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	float fLocal_793 = 0f;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	int iLocal_812 = 0;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	int iLocal_815 = 0;
	int iLocal_816 = 0;
	char* sLocal_817 = NULL;
	int iLocal_818 = 0;
	bool bLocal_819 = false;
	char* sLocal_820 = NULL;
	char* sLocal_821 = NULL;
	int iLocal_822 = 0;
	int iLocal_823 = 0;
	bool bLocal_824 = false;
	int iLocal_825 = 0;
	int iLocal_826 = 0;
	int iLocal_827 = 0;
	int iLocal_828 = 0;
	int iLocal_829 = 0;
	int iLocal_830 = 0;
	int iLocal_831 = 0;
	int iLocal_832 = 0;
	int iLocal_833 = 0;
	int iLocal_834 = 0;
	int iLocal_835 = 0;
	int iLocal_836 = 0;
	int iLocal_837 = 0;
	var uLocal_838 = -1;
	var uLocal_839 = 0;
	var uLocal_840 = -1;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = -1;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 1073741824;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 1;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	struct<17> Local_858[2];
	int iLocal_893 = 0;
	int iLocal_894 = 0;
	int iLocal_895 = 0;
	int iLocal_896 = 0;
	int iLocal_897 = 0;
	int iLocal_898 = 0;
	int iLocal_899 = 0;
	int iLocal_900 = 0;
	bool bLocal_901 = false;
	int iLocal_902 = 0;
	int iLocal_903 = 0;
	int iLocal_904 = 0;
	int iLocal_905 = 0;
	int iLocal_906 = 0;
	int iLocal_907 = 0;
	int iLocal_908 = 0;
	int iLocal_909 = 0;
	int iLocal_910 = 0;
	int iLocal_911 = 0;
	var uLocal_912 = 0;
	int iLocal_913 = 0;
	char* sLocal_914 = NULL;
	char[] cLocal_915[8] = 0;
	char* sLocal_916 = NULL;
	int iLocal_917 = 0;
	float fLocal_918 = 0f;
	int iLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	int iLocal_923 = 0;
	int iLocal_924 = 0;
	int iLocal_925 = 0;
	int iLocal_926 = 0;
	bool bLocal_927 = false;
	bool bLocal_928 = false;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	float fLocal_932 = 0f;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<2606> Var0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_608 = joaat("u_m_m_bht_skinnersearch");
	iLocal_612 = -1038436471;
	vLocal_613 = { -2037.25f, -1419.748f, 123.982f };
	vLocal_616 = { -2182.12f, -1576.34f, 148.59f };
	vLocal_619 = { -2204.65f, -1614.95f, 145.21f };
	vLocal_653 = { -2169.549f, -1767.531f, 138.8784f };
	sLocal_817 = "script@proc@bountyhunting@skinnersearch@massacre";
	sLocal_820 = "script@proc@bountyhunting@skinnersearch@main";
	sLocal_821 = "script_proc@bounty@skinner_search";
	iLocal_831 = 1;
	iLocal_832 = 2;
	iLocal_833 = -1;
	iLocal_834 = -1;
	iLocal_836 = -1;
	iLocal_907 = joaat("a_m_m_unicorpse_01");
	iLocal_908 = joaat("a_c_crow_01");
	sLocal_914 = "bh_skinner_search";
	cLocal_915 = "bh_skinner_search_flee";
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
	func_185(uParam0, 6);
	func_186(uParam0, 22);
	uParam0->f_2603 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2037.199f, -1418.602f, 125.097f, 0f, 0f, 0f, 27f, 36f, 10f, "RBT20.volAmbPopMoveRestrict");
	uParam0->f_2604 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2037.199f, -1418.602f, 125.097f, 0f, 0f, 0f, 8f, 9f, 5f, "RBT20.volAmbPopSpawnRestrict");
	*(Local_683[0 /*20*/]) = { -2138.653f, -1546.195f, 143.6489f };
	(Local_683[0 /*20*/])->f_3 = { &(Local_683[0 /*20*/]), (Local_683[0 /*20*/])->f_1, ((Local_683[0 /*20*/])->f_2 + 5f) };
	(Local_683[0 /*20*/])->f_6 = joaat("weapon_revolver_cattleman");
	iLocal_666[0] = 0;
	*(Local_683[1 /*20*/]) = { (&Local_683[0 /*20*/] + 10f), (Local_683[0 /*20*/])->f_1, ((Local_683[0 /*20*/])->f_2 + 5f) };
	(Local_683[1 /*20*/])->f_3 = { (&Local_683[1 /*20*/] + 10f), (Local_683[1 /*20*/])->f_1, ((Local_683[1 /*20*/])->f_2 + 5f) };
	(Local_683[1 /*20*/])->f_6 = joaat("weapon_revolver_cattleman");
	iLocal_666[1] = 0;
	*(Local_683[2 /*20*/]) = { -2196.058f, -1601.651f, 146.6597f };
	(Local_683[2 /*20*/])->f_3 = { &(Local_683[2 /*20*/]), (Local_683[2 /*20*/])->f_1, ((Local_683[2 /*20*/])->f_2 + 5f) };
	(Local_683[2 /*20*/])->f_6 = joaat("weapon_revolver_cattleman");
	iLocal_666[2] = 0;
	*(Local_683[3 /*20*/]) = { -2203.727f, -1597.41f, 146.7453f };
	(Local_683[3 /*20*/])->f_3 = { &(Local_683[3 /*20*/]), (Local_683[3 /*20*/])->f_1, ((Local_683[3 /*20*/])->f_2 + 5f) };
	(Local_683[3 /*20*/])->f_6 = joaat("weapon_revolver_cattleman");
	iLocal_666[3] = 0;
	*(Local_683[4 /*20*/]) = { -2192.736f, -1602.937f, 146.9503f };
	(Local_683[4 /*20*/])->f_3 = { &(Local_683[4 /*20*/]), (Local_683[4 /*20*/])->f_1, ((Local_683[4 /*20*/])->f_2 + 5f) };
	(Local_683[4 /*20*/])->f_6 = joaat("weapon_revolver_cattleman");
	iLocal_666[4] = 0;
	(Local_20[0 /*8*/])->f_1 = { -2035.543f, -1425.445f, 123.8681f };
	(Local_20[0 /*8*/])->f_4 = 327f;
	(Local_20[0 /*8*/])->f_5 = iLocal_907;
	(Local_20[0 /*8*/])->f_6 = -1534633822;
	(Local_20[0 /*8*/])->f_7 = "DEAD_BED";
	(Local_20[1 /*8*/])->f_1 = { -2036.513f, -1420.216f, 124.1382f };
	(Local_20[1 /*8*/])->f_4 = 43.0956f;
	(Local_20[1 /*8*/])->f_5 = iLocal_907;
	(Local_20[1 /*8*/])->f_6 = 615241965;
	(Local_20[1 /*8*/])->f_7 = "DEAD_TREE";
	(Local_20[2 /*8*/])->f_1 = { -2041.032f, -1415.809f, 124.5872f };
	(Local_20[2 /*8*/])->f_4 = 79.8608f;
	(Local_20[2 /*8*/])->f_5 = iLocal_907;
	(Local_20[2 /*8*/])->f_6 = 13635894;
	(Local_20[2 /*8*/])->f_7 = "DEAD_BACK";
	(Local_20[3 /*8*/])->f_1 = { -2035.592f, -1423.795f, 123.9054f };
	(Local_20[3 /*8*/])->f_4 = 324.4284f;
	(Local_20[3 /*8*/])->f_5 = iLocal_907;
	(Local_20[3 /*8*/])->f_6 = -207587629;
	(Local_20[3 /*8*/])->f_7 = "DEAD_GROUND";
	(Local_20[4 /*8*/])->f_1 = { -2035.592f, -1423.795f, 123.9054f };
	(Local_20[4 /*8*/])->f_4 = 324.4284f;
	(Local_20[4 /*8*/])->f_5 = iLocal_907;
	(Local_20[4 /*8*/])->f_6 = 375471192;
	(Local_20[4 /*8*/])->f_7 = "DEAD_ARROWS";
	(Local_204[0 /*6*/])->f_1 = { -2035.24f, -1418.33f, 125.2f };
	(Local_204[0 /*6*/])->f_4 = 138.19f;
	(Local_204[0 /*6*/])->f_5 = iLocal_908;
	(Local_204[1 /*6*/])->f_1 = { -2036.62f, -1420.73f, 124.13f };
	(Local_204[1 /*6*/])->f_4 = 49f;
	(Local_204[1 /*6*/])->f_5 = iLocal_908;
	(Local_204[2 /*6*/])->f_1 = { -2041.09f, -1416.37f, 124.64f };
	(Local_204[2 /*6*/])->f_4 = 15f;
	(Local_204[2 /*6*/])->f_5 = iLocal_908;
	(Local_61[0 /*22*/])->f_1 = { -2208.73f, -1612.38f, 145.29f };
	(Local_61[1 /*22*/])->f_1 = { -2194.05f, -1620.55f, 145.01f };
	(Local_61[2 /*22*/])->f_1 = { -2202.78f, -1617.2f, 145.15f };
	(Local_61[3 /*22*/])->f_1 = { -2212.23f, -1608.33f, 145.49f };
	(Local_61[0 /*22*/])->f_4 = -50.2f;
	(Local_61[1 /*22*/])->f_4 = 351.9357f;
	(Local_61[2 /*22*/])->f_4 = 38.15f;
	(Local_61[3 /*22*/])->f_4 = -117.67f;
	(Local_61[0 /*22*/])->f_10 = joaat("weapon_bow");
	(Local_61[1 /*22*/])->f_10 = joaat("weapon_melee_machete");
	(Local_61[2 /*22*/])->f_10 = joaat("weapon_revolver_cattleman");
	(Local_61[3 /*22*/])->f_10 = joaat("weapon_bow");
	(Local_61[0 /*22*/])->f_11 = joaat("g_m_m_unimountainmen_01");
	(Local_61[1 /*22*/])->f_11 = joaat("g_m_m_unimountainmen_01");
	(Local_61[2 /*22*/])->f_11 = joaat("g_m_m_unimountainmen_01");
	(Local_61[3 /*22*/])->f_11 = joaat("g_m_m_unimountainmen_01");
	(Local_61[0 /*22*/])->f_13 = { -2211.19f, -1611.57f, 145.32f };
	(Local_61[1 /*22*/])->f_13 = { -2212.95f, -1615.01f, 145.35f };
	(Local_61[2 /*22*/])->f_13 = { -2197.7f, -1622.73f, 144.93f };
	(Local_61[3 /*22*/])->f_13 = { -2208.69f, -1596.28f, 146.65f };
	(Local_61[0 /*22*/])->f_16 = { 13f, 10f, 10f };
	(Local_61[1 /*22*/])->f_16 = { 10f, 10f, 10f };
	(Local_61[2 /*22*/])->f_16 = { 7f, 7f, 7f };
	(Local_61[3 /*22*/])->f_16 = { 10f, 10f, 10f };
	(Local_61[0 /*22*/])->f_19 = 200;
	(Local_61[1 /*22*/])->f_19 = 0;
	(Local_61[2 /*22*/])->f_19 = 400;
	(Local_61[3 /*22*/])->f_19 = 500;
	(Local_61[0 /*22*/])->f_20 = 300;
	(Local_61[1 /*22*/])->f_20 = 0;
	(Local_61[2 /*22*/])->f_20 = 1000;
	(Local_61[3 /*22*/])->f_20 = 600;
	(Local_175[0 /*7*/])->f_1 = { -2037.34f, -1415.9f, 124.35f };
	(Local_175[0 /*7*/])->f_4 = 18.6534f;
	(Local_175[0 /*7*/])->f_5 = joaat("a_m_m_blwtownfolk_01");
	(Local_175[0 /*7*/])->f_6 = 0;
	(Local_175[1 /*7*/])->f_1 = { -2210.782f, -1610.081f, 145.3001f };
	(Local_175[1 /*7*/])->f_4 = 195.1f;
	(Local_175[1 /*7*/])->f_5 = joaat("a_m_m_blwtownfolk_01");
	(Local_175[1 /*7*/])->f_6 = 0;
	(Local_175[2 /*7*/])->f_1 = { -2212.54f, -1609.49f, 145.44f };
	(Local_175[2 /*7*/])->f_4 = 18.6534f;
	(Local_175[2 /*7*/])->f_5 = -548778324;
	(Local_175[2 /*7*/])->f_6 = -1933220787;
	(Local_175[3 /*7*/])->f_1 = { -2207.42f, -1607.58f, 145.59f };
	(Local_175[3 /*7*/])->f_4 = 18.6534f;
	(Local_175[3 /*7*/])->f_5 = joaat("a_m_m_blwtownfolk_01");
	(Local_175[3 /*7*/])->f_6 = 0;
	(Local_150[0 /*6*/])->f_1 = { -2227.905f, -1642.207f, 141.5301f };
	(Local_150[0 /*6*/])->f_4 = 318f;
	(Local_150[0 /*6*/])->f_5 = iLocal_612;
	(Local_150[1 /*6*/])->f_1 = { -2232.227f, -1639.101f, 141.783f };
	(Local_150[1 /*6*/])->f_4 = 223.8056f;
	(Local_150[1 /*6*/])->f_5 = iLocal_612;
	(Local_150[2 /*6*/])->f_1 = { -2228.775f, -1635.616f, 141.6658f };
	(Local_150[2 /*6*/])->f_4 = 288.4826f;
	(Local_150[2 /*6*/])->f_5 = iLocal_612;
	(Local_150[3 /*6*/])->f_1 = { -2229.589f, -1633.372f, 141.7468f };
	(Local_150[3 /*6*/])->f_4 = 301.9122f;
	(Local_150[3 /*6*/])->f_5 = iLocal_612;
	iLocal_674[0] = 0;
	iLocal_674[1] = 0;
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
	func_190(uParam0, 0);
	HUD::TEXT_BLOCK_REQUEST("BHCR");
	TASK::_0xFF745B0346E19E2C(-2146271366);
	TASK::_0xFF745B0346E19E2C(1361896662);
	func_41(uParam0, 809664026, 7);
	func_41(uParam0, iLocal_608, 7);
	func_41(uParam0, joaat("g_m_m_unimountainmen_01"), 7);
	func_41(uParam0, joaat("a_m_m_blwtownfolk_01"), 7);
	func_41(uParam0, -548778324, 7);
	func_41(uParam0, iLocal_907, 1);
	func_41(uParam0, iLocal_908, 1);
	func_41(uParam0, iLocal_612, 2);
	func_191(uParam0, sLocal_914, 2, -1, 7);
	func_191(uParam0, cLocal_915, 2, -1, 2);
	func_192(uParam0, sLocal_821, 7);
}

void func_43(var uParam0, int iParam1)
{
	if (func_193(uParam0) == iParam1)
	{
		return;
	}
	func_194(uParam0, uParam0->f_168, iParam1);
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
	if ((func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_6(uParam0->f_172, 1024)) && !func_195(uParam0->f_174))
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

	switch (func_196(&iVar0))
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
	func_197(bParam0);
	func_198(bParam0);
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
	if (func_199(uParam0, uParam0->f_168))
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
	if (func_200() != -1)
	{
		return 0;
	}
	if (!func_201(iParam0))
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
			Var1 = { -2018.788f, -1407.343f, 119.1962f };
			Var1.f_3 = 121.7385f;
			break;
		case 1:
			Var1 = { -2190.01f, -1575.61f, 148.73f };
			Var1.f_3 = 154.47f;
			break;
		case 2:
			Var1 = { -2207.66f, -1603.18f, 146.12f };
			Var1.f_3 = 154.47f;
			break;
		case 3:
			Var1 = { -752.2946f, -1268.84f, 42.3823f };
			Var1.f_3 = 82.8958f;
			break;
		case 4:
			Var1 = { -755.5374f, -1269.016f, 43.141f };
			Var1.f_3 = 85.9075f;
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_202(*uParam0, uParam0->f_3);
}

void func_63(var uParam0, int iParam1)
{
	uParam0->f_173 = (uParam0->f_173 - (uParam0->f_173 && iParam1));
}

int func_64(var uParam0)
{
	if (iLocal_15 == 0 || iLocal_15 == 1)
	{
		if (!func_203(Global_36, vLocal_613, 100f, 0) && !func_203(Global_36, vLocal_616, 300f, 0))
		{
			StringCopy(&(uParam0->f_2578), func_204(3), 24);
			AUDIO::TRIGGER_MUSIC_EVENT("RBT20_CAPTURED");
			return 1;
		}
	}
	if (iLocal_15 > 1)
	{
		if (func_205(&Local_223, 100f, 200f))
		{
			StringCopy(&(uParam0->f_2578), func_204(Local_223.f_64), 24);
			AUDIO::TRIGGER_MUSIC_EVENT("RBT20_CAPTURED");
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

	if (!func_201(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_206(iParam0, &vVar0))
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
		if (func_57(iVar0) && func_207(uParam0, iVar0))
		{
		}
		else
		{
			func_51(uParam0, 12);
			return 1;
		}
	}
	if (func_208(uParam0->f_174))
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
	if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_195(uParam0->f_174))
	{
		func_209(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 16384);
		func_51(uParam0, 3);
		return 1;
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 8388608 != 0)
	{
		iVar1 = func_210(uParam0->f_174);
		if (iVar1 != -1)
		{
			if (func_211(iVar1))
			{
				if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
				{
					func_178(uParam0->f_174, 32768);
				}
				func_51(uParam0, 5);
				return 1;
			}
			else if (func_212(iVar1))
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
		if (func_211(((*Global_1347702)[uParam0->f_174 /*49*/])->f_45))
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
			iVar2 = func_213();
			if (!func_214(iVar2, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_46))
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
		if (func_215(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			func_178(uParam0->f_174, 16384);
			func_51(uParam0, 9);
			return 1;
		}
	}
	if (uParam0->f_172 & 256 != 0 && !func_216(uParam0->f_174, 1, 1, 0, 0))
	{
		func_51(uParam0, 10);
		return 1;
	}
	if (func_217(uParam0) || func_218(uParam0->f_174, uParam0->f_743))
	{
		func_178(uParam0->f_174, 1024);
		func_51(uParam0, 11);
		return 1;
	}
	if (!func_219(uParam0) && func_220(uParam0->f_743))
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

	func_221();
	func_222(uParam0);
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
				func_223(uParam0->f_174, 1);
			}
		}
		if (func_6(uParam0->f_172, 67108864))
		{
			func_54(1);
			func_2(&(uParam0->f_172), 67108864);
		}
		func_224(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_ENABLE_HUD_CONTEXT_THIS_FRAME(Global_35, 262143);
			func_225(Global_35);
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
		func_226(uParam0->f_174);
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
		func_227(uParam0);
	}
	func_161(uParam0);
	func_228(0);
	func_102(uParam0, 0);
	func_43(uParam0, 4);
	func_2(&(uParam0->f_172), 8);
	func_176(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 1024);
	func_176(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
	func_47(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 4);
	func_229(&(uParam0->f_2585));
	func_230(uParam0);
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
			fVar4 = func_231(uParam0->f_174);
			if ((((*Global_1347702)[uParam0->f_174 /*49*/])->f_36 != -1822497728 || func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 32)) || fVar3 < (fVar4 * fVar4))
			{
				func_232(uParam0->f_174, vVar0, 1, 0);
			}
		}
	}
	else
	{
		func_233(uParam0->f_174, fVar3);
		func_234(uParam0->f_174, vVar0, fVar3);
		func_235(uParam0->f_174);
		func_236(uParam0->f_174);
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
			func_237(uParam0);
		}
		else
		{
			func_238(uParam0);
		}
	}
	else if (uParam0->f_177 == 4)
	{
		if (func_45(uParam0))
		{
			if (func_6(uParam0->f_172, 16))
			{
				cVar0 = { func_239() };
				Var8 = { func_240(&(uParam0->f_206)) };
				if (!MISC::ARE_STRINGS_EQUAL(&Var8, &cVar0))
				{
					func_241(&(uParam0->f_206));
					func_242(&(uParam0->f_206), &cVar0);
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
	if (func_243(uParam0->f_206.f_5))
	{
		uParam0->f_206.f_5 = { func_69(uParam0->f_174) };
	}
	bVar0 = func_244(uParam0);
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
		if (func_245(&(uParam0->f_206), &(uParam0->f_2575), bVar0, bVar1))
		{
			if (!func_6(uParam0->f_172, 1))
			{
				func_246(uParam0);
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
			if (func_247(uParam0->f_2605[iVar0 /*16*/], 1048576))
			{
				if (func_248(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_249(uParam0->f_2605[iVar0 /*16*/]);
				}
				else if (func_250(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_251(uParam0->f_2605[iVar0 /*16*/]);
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
			if (func_247(uParam0->f_2605.f_241[iVar0 /*16*/], 1048576))
			{
				if (func_252(uParam0, uParam0->f_2605.f_241[iVar0 /*16*/], iParam1))
				{
					func_253(uParam0->f_2605.f_241[iVar0 /*16*/]);
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
			if (func_247(uParam0->f_2605.f_482[iVar0 /*16*/], 1048576))
			{
				if (func_252(uParam0, uParam0->f_2605.f_482[iVar0 /*16*/], iParam1))
				{
					if (func_254(uParam0->f_2605.f_482[iVar0 /*16*/], 0))
					{
						if (func_247(uParam0->f_2605.f_482[iVar0 /*16*/], 4))
						{
							func_255(&(uParam0->f_2605));
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
	if (func_256(&(uParam0->f_2605), &cVar0, 1, -1, 0, 1))
	{
		func_1(&(uParam0->f_172), 32);
		return 1;
	}
	return 0;
}

bool func_79(var uParam0)
{
	return func_257(*uParam0, 1);
}

void func_80(var uParam0, int iParam1)
{
	if (iParam1 || !func_79(uParam0))
	{
		func_258(uParam0);
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
	if (func_259(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_260() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
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
	if (func_261(uParam0) && func_262(uParam0))
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
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_263(uParam0->f_174), func_264(uParam0->f_174)))
		{
			func_265(uParam0->f_174, 128);
		}
		else
		{
			func_121(uParam0->f_174, 128);
		}
		if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
		{
			if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_263(uParam0->f_174), func_264(uParam0->f_174)))
			{
				func_266(uParam0->f_174);
				func_267(uParam0->f_174);
			}
		}
		else
		{
			func_268(Global_1347702[uParam0->f_174 /*49*/]);
			func_266(uParam0->f_174);
		}
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(func_263(uParam0->f_174), func_264(uParam0->f_174)))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_263(uParam0->f_174), func_264(uParam0->f_174), 0, "");
		}
	}
	if (!func_174(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
	{
		if (!func_269(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
		{
			func_270(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1);
		}
		func_271(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1, 1);
		func_272(Global_1935630, 8);
	}
	bVar0 = true;
	bVar0 = false;
	if (func_32(uParam0, 64))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_115(uParam0->f_174, 0);
	}
	func_273(uParam0);
	func_1(&(uParam0->f_172), 8);
	if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 8192))
	{
		func_54(0);
		LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
		LAW::_0x292AD61A33A7A485();
		func_274(1, 16384, 1);
		func_1(&(uParam0->f_172), 67108864);
	}
	func_119(uParam0, 1, 0);
	func_224(1);
	func_228(1);
	func_275();
	func_163(uParam0);
	func_164(uParam0->f_174);
	func_165(uParam0->f_174);
	func_276(uParam0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	func_277(1);
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
	func_278(uParam0);
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
	if (func_279(uParam0))
	{
		iVar5 = func_95(uParam0);
	}
	TELEMETRY::_TELEMETRY_MISSION_STARTED(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), 0, iVar5, func_32(uParam0, 64));
	if (uParam0->f_174 != func_19())
	{
		func_280(uParam0, func_61(0), func_61(1), 0, 1, 0);
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
		if (uParam0->f_171 != 0 || func_281(uParam0))
		{
			if (func_282(uParam0))
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
		return func_283();
	}
	return -1;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam1;
	switch (iVar0)
	{
		case 0:
			func_284(1);
			if (!bLocal_819)
			{
				return 2;
			}
			func_115(uParam0->f_174, 0);
			if (!MAP::DOES_BLIP_EXIST(iLocal_911))
			{
				func_285(uParam0);
			}
			iLocal_15 = 0;
			func_286(uParam0->f_174, 1);
			PED::_0x9851DE7AEC10B4E1(vLocal_613, 100f, 1, 0);
			PED::_0x9851DE7AEC10B4E1(vLocal_616, 100f, 1, 0);
			PED::_0x9851DE7AEC10B4E1(-2210f, -1608.66f, 145.49f, 50f, 1, 0);
			func_280(uParam0, func_61(0), func_61(1), 0, 1, 0);
			iLocal_657 = 1;
			func_287(1, 1);
			AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
			return 7;
		case 1:
			if (!iLocal_660)
			{
				PED::_0x9851DE7AEC10B4E1(-2210f, -1608.66f, 145.49f, 50f, 1, 0);
				iLocal_660 = 1;
			}
			func_288();
			if (!func_289(uParam0))
			{
				return 2;
			}
			if (!func_290(uParam0))
			{
				return 2;
			}
			if (!func_291(uParam0))
			{
				return 2;
			}
			if (!func_292())
			{
				return 2;
			}
			if (!func_293())
			{
				return 2;
			}
			if (func_294(uParam0))
			{
				iLocal_902 = 1;
				iLocal_903 = 1;
				iLocal_679 = 1;
				func_115(uParam0->f_174, 0);
				func_280(uParam0, func_61(1), func_61(2), 1, 2, 0);
				AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_607))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_607, false);
				}
				iLocal_666[0] = 1;
				iLocal_666[1] = 1;
				iLocal_666[2] = 1;
				iLocal_666[3] = 1;
				iLocal_666[4] = 1;
				iLocal_657 = 1;
				iLocal_15 = 1;
				iLocal_924 = 1;
				iLocal_925 = 1;
				return 7;
			}
			return 2;
		case 2:
			func_288();
			if (!func_295(uParam0, 1))
			{
				return 2;
			}
			if (!func_291(uParam0))
			{
				return 2;
			}
			if (!func_290(uParam0))
			{
				return 2;
			}
			iVar1 = 0;
			while (iVar1 < 4)
			{
				func_296(&(Local_175[iVar1 /*7*/]), 1, 0);
				iVar1++;
			}
			func_115(uParam0->f_174, 0);
			iLocal_15 = 2;
			if (!func_297(uParam0->f_174, 1))
			{
				if (TASK::_0xB8F52A3F84A7CC59(-2146271366))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_607))
					{
						ENTITY::_0x203BEFFDBE12E96A(iLocal_607, -2209.19f, -1605.19f, 145.84f, -50.12f, 1, 0, 1);
						TASK::_0xF0B4F759F35CC7F5(iLocal_607, ENTITY::_0x34F008A7E48C496B(iLocal_607, 1), 0, 0, 0);
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_607))
			{
				ENTITY::_0x203BEFFDBE12E96A(iLocal_607, -2209.19f, -1605.19f, 145.84f, -50.12f, 1, 0, 1);
				func_298(&Local_223);
				func_296(iLocal_607, 1, 0);
				iLocal_610 = 1;
			}
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (PED::IS_PED_RAGDOLL(&(Local_175[iVar1 /*7*/])))
				{
					return 2;
				}
				iVar1++;
			}
			if (ENTITY::IS_ENTITY_DEAD(iLocal_607))
			{
				if (PED::IS_PED_RAGDOLL(iLocal_607))
				{
					return 2;
				}
				iLocal_16 = 10;
			}
			else
			{
				iLocal_16 = 9;
			}
			func_280(uParam0, func_61(2), func_61(3), 2, 3, 0);
			iLocal_657 = 1;
			func_287(1, 1);
			func_115(uParam0->f_174, 0);
			iLocal_924 = 1;
			iLocal_925 = 1;
			iLocal_926 = 1;
			bLocal_927 = true;
			AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
			return 7;
		case 3:
			TASK::_0xFF745B0346E19E2C(-2146271366);
			if (TASK::_0xB8F52A3F84A7CC59(-2146271366) && func_299(&uLocal_800))
			{
				if (!func_295(uParam0, 0))
				{
					return 2;
				}
				if (func_297(uParam0->f_174, 1))
				{
					func_296(iLocal_607, 1, 0);
					iLocal_610 = 1;
					if (PED::IS_PED_RAGDOLL(iLocal_607))
					{
						return 2;
					}
				}
				if (ENTITY::IS_ENTITY_DEAD(iLocal_607))
				{
					if (TASK::_0xB8F52A3F84A7CC59(1361896662))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_607, -2108652971, 0) != 0 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_607, -2108652971, 0) != 1)
						{
							ENTITY::_0x203BEFFDBE12E96A(iLocal_607, -752.2946f, -1268.84f, 42.3823f, 0f, 1, 0, 1);
							TASK::_0xF0B4F759F35CC7F5(iLocal_607, ENTITY::_0x34F008A7E48C496B(iLocal_607, 2), Global_35, 0, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_607, true, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, true, false);
						}
					}
					iLocal_16 = 10;
				}
				else
				{
					if (TASK::_0xB8F52A3F84A7CC59(-2146271366))
					{
						if (!func_300(iLocal_607, -2108652971))
						{
							WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_607, true, true);
							ENTITY::_0x203BEFFDBE12E96A(iLocal_607, -752.2946f, -1268.84f, 42.3823f, 0f, 1, 0, 1);
							TASK::_0xF0B4F759F35CC7F5(iLocal_607, ENTITY::_0x34F008A7E48C496B(iLocal_607, 1), Global_35, 0, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_607, true, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, true, false);
						}
					}
					iLocal_16 = 9;
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_607) && !PED::IS_PED_HOGTIED(iLocal_607))
				{
					return 2;
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_607, -2108652971, 0) != 1 || PED::_0x09B83E68DE004CD4(iLocal_607) == 0)
				{
					return 2;
				}
				func_280(uParam0, func_61(3), func_61(4), 3, 4, 0);
				func_287(1, 1);
				func_115(uParam0->f_174, 0);
				AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
				iLocal_897 = 1;
				iLocal_898 = 1;
				iLocal_899 = 1;
				iLocal_900 = 1;
				iLocal_923 = 1;
				iLocal_906 = 1;
				iLocal_905 = 1;
				iLocal_917 = 4;
				iLocal_15 = 2;
				iLocal_924 = 1;
				iLocal_925 = 1;
				iLocal_926 = 1;
				bLocal_927 = true;
				return 7;
			}
			return 2;
		case 4:
			if (!func_295(uParam0, 0))
			{
				return 2;
			}
			if (!func_297(uParam0->f_174, 1))
			{
				func_302(iLocal_608, Local_223.f_300, func_301(Local_223.f_300));
				func_303(iLocal_608, Local_223.f_300, Local_223.f_299);
				func_23(&iLocal_607);
				func_304(Local_223.f_300, iLocal_608);
				func_305(Global_40.f_9074.f_3, 0, 1065353216, 1, 0, 0, 1, 752097756);
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_607))
				{
					ENTITY::_0x203BEFFDBE12E96A(iLocal_607, -770.7194f, -1271.139f, 42.5499f, 304.7399f, 1, 0, 1);
					func_296(iLocal_607, 1, 0);
					iLocal_610 = 1;
				}
				func_305(Global_40.f_9074.f_4, 0, 1065353216, 1, 0, 0, 1, 752097756);
			}
			func_287(1, 1);
			func_115(uParam0->f_174, 0);
			return 8;
		default:
			func_287(1, 1);
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
		iVar0 = func_306();
		iVar1 = func_307(iVar0);
		fVar2 = (1f - (MISC::ABSF(BUILTIN::TO_FLOAT(iVar1)) / BUILTIN::TO_FLOAT(8)));
		fVar3 = func_308(iVar0 < 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		fVar4 = func_308(iVar0 > 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
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
		if (!func_309(uParam0))
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
		func_310();
		func_311(uParam0);
		if (!func_312(uParam0))
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
		func_313(&(uParam0->f_206), &(uParam0->f_753));
		if (uParam0->f_176 == 4 && !func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 512))
		{
			func_314(uParam0, 0);
		}
	}
	if (func_6(uParam0->f_172, 1024) && uParam0->f_176 == 4)
	{
		func_280(uParam0, func_61(0), func_61(1), 0, 1, 1);
	}
	func_2(&(uParam0->f_172), 512);
	if (uParam0->f_176 == 4)
	{
		if (func_315(Global_35))
		{
			if (func_316())
			{
				func_317(42, 1);
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
	return func_318(Var0, &(uParam0->f_206), uParam0);
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
		func_319(&(uParam0->f_206));
	}
	func_320(&(uParam0->f_206));
	func_321(uParam0);
}

int func_103(var uParam0)
{
	return 8;
}

int func_104(var uParam0)
{
	if (func_6(uParam0->f_172, 256) && !func_6(uParam0->f_172, 1024))
	{
		if (!func_309(uParam0))
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
				func_280(uParam0, func_61(0), func_61(1), 0, 1, 1);
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
		if (func_322(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			func_1(&(uParam0->f_172), 1048576);
		}
		if (!func_6(uParam0->f_172, 524288))
		{
			if (func_323(&(uParam0->f_753)))
			{
				func_1(&(uParam0->f_172), 524288);
			}
		}
	}
}

int func_107(var uParam0)
{
	if (func_324(iLocal_607, 0))
	{
		PED::SET_PED_RESET_FLAG(iLocal_607, 25, true);
	}
	CAM::_0xC252C0CC969AF79A(1);
	func_325(uParam0);
	func_326(uParam0);
	func_327();
	func_328();
	func_329();
	switch (iLocal_15)
	{
		case 0:
			if (!iLocal_657)
			{
				func_280(uParam0, func_61(0), func_61(1), 0, 1, 0);
				iLocal_657 = 1;
			}
			if (func_330(uParam0))
			{
				func_331(vLocal_619, 50f, 0);
				iLocal_15 = 1;
				return 7;
			}
			if (func_288())
			{
				if (func_203(Global_36, vLocal_616, 90f, 0))
				{
					func_332(&iLocal_911);
					func_333(iLocal_812);
					iLocal_15 = 1;
				}
			}
			break;
		case 1:
			func_334(uParam0);
			func_335(1);
			func_336();
			func_337();
			func_338(uParam0);
			func_284(0);
			if (!iLocal_679)
			{
				if ((((func_289(uParam0) && func_291(uParam0)) && func_290(uParam0)) && func_292()) && func_293())
				{
					iLocal_679 = 1;
				}
			}
			if (!iLocal_925)
			{
				if (!func_203(Global_36, vLocal_613, 25f, 1))
				{
					if (AUDIO::PREPARE_MUSIC_EVENT("RBT20_FIND"))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("RBT20_FIND");
						iLocal_925 = 1;
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_607))
			{
				if (((iLocal_16 > 1 || iLocal_673) || iLocal_677 == 1) || func_339(iLocal_607, &uLocal_784, uParam0, "RBT20_PLYRSPOT"))
				{
					func_115(uParam0->f_174, 0);
					func_332(&iLocal_911);
					func_333(iLocal_812);
					if (!iLocal_680)
					{
						func_298(&Local_223);
						func_340(&Local_223, 4, 1);
						iLocal_680 = 1;
					}
					iLocal_15 = 2;
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_607))
			{
				func_115(uParam0->f_174, 0);
				func_332(&iLocal_911);
				func_333(iLocal_812);
				func_341(uParam0->f_174, 1);
				if (!iLocal_680)
				{
					func_298(&Local_223);
					func_340(&Local_223, 4, 1);
					iLocal_680 = 1;
				}
				iLocal_15 = 2;
			}
			break;
		case 2:
			func_338(uParam0);
			if (!iLocal_815)
			{
				if (!func_203(Global_36, -2205.786f, -1611.114f, 145.3637f, 60f, 1))
				{
					func_335(0);
					iLocal_815 = 1;
				}
				else
				{
					func_335(1);
				}
			}
			func_342(&Local_223);
			if (func_343(&Local_223, 1))
			{
				func_344(0, 3, 0, 30, 0);
				iLocal_15 = 3;
			}
			func_284(0);
			break;
		case 3:
			if (func_345(&Local_223))
			{
				return 8;
			}
			break;
	}
	return 7;
}

bool func_108(int iParam0)
{
	return func_346(iParam0) == 0;
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
	return func_348(func_347(iParam0));
}

int func_111(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_349(func_347(iParam0));
}

int func_112(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_350(func_347(iParam0));
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
	if (!func_201(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		func_351(&(((*Global_1347702)[iParam0 /*49*/])->f_14));
		func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
		func_352(iParam0);
		if ((!func_215(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43890) || iParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(((*Global_1347702)[iParam0 /*49*/])->f_40, 0);
			func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
			func_332(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		else
		{
			func_178(iParam0, 16384);
			func_353(iParam0, 1, func_69(iParam0));
		}
	}
}

void func_116(var uParam0)
{
	func_354(1, &(uParam0->f_2605.f_482));
}

int func_117()
{
	return Global_1894899->f_2;
}

void func_118(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_355(iParam0))
	{
		return;
	}
	bVar0 = func_356(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_357(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_359(iParam0, func_358());
			func_360(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_361(iParam0, 67108864);
		func_359(iParam0, -15);
	}
	func_362(iParam0);
}

void func_119(var uParam0, int iParam1, int iParam2)
{
	if (func_363(0))
	{
		if (func_364(0))
		{
			func_365(0);
		}
	}
	if (func_363(1))
	{
		if (func_364(1))
		{
			func_365(1);
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
	if (ENTITY::IS_ENTITY_DEAD(iLocal_607))
	{
		func_366(113, 1, 0, 0, 12, 0, 0, 1);
	}
	else
	{
		func_367(106, 0, 3, 0, joaat("cs_johnmarston"));
		func_366(106, 1, 0, 0, 12, 0, 0, 1);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("RBT20_CAPTURED");
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
			if (func_201(iVar1))
			{
				if (func_120(iVar1, 4))
				{
					func_223(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_368(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_111(iParam0);
		if (iVar3 == 59)
		{
			func_368(1);
		}
		else if (iVar3 == 61)
		{
			func_368(0);
		}
		else if (iVar3 == 83)
		{
			func_368(0);
		}
	}
}

void func_124()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_201(iVar0))
		{
			if (func_120(iVar0, 4))
			{
				if (func_120(iVar0, 16))
				{
					func_369(iVar0, 1);
				}
				if (func_120(iVar0, 8))
				{
					func_370(iVar0, 1);
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

	func_371(uParam0->f_174, sParam1, bParam5, fParam6, 0, 0, -1, -1, 0);
	if (iParam2 || !func_372(sParam1))
	{
		func_373(sParam1, iParam3, bParam4, bParam5, sParam7, sParam8, sParam9, sParam10, iParam11);
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

	if (!func_201(iParam0))
	{
		return;
	}
	if (func_374())
	{
		func_265(iParam0, 1);
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
		if (!func_374())
		{
			((*Global_1347702)[iParam0 /*49*/])->f_35 = 104;
			((*Global_1347702)[104 /*49*/])->f_48 = ((*Global_1347702)[iParam0 /*49*/])->f_15;
		}
	}
	func_375(iParam0, 0, iParam3);
	if (func_201(((*Global_1347702)[iParam0 /*49*/])->f_35))
	{
		func_376(((*Global_1347702)[iParam0 /*49*/])->f_35);
		if (iParam1 == 1)
		{
			func_377(((*Global_1347702)[iParam0 /*49*/])->f_35, 0);
			if (func_378(iParam0))
			{
				((*Global_1347702)[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])->f_43 = ((*Global_1347702)[iParam0 /*49*/])->f_43;
			}
		}
	}
	else
	{
		func_379();
	}
	if (!func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 1) && !func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 33554432))
	{
		if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 262144))
		{
			if (bParam5)
			{
				func_380(iParam0);
			}
			bParam5 = false;
			uVar0 = func_381(((*Global_1347702)[iParam0 /*49*/])->f_15);
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
		func_382(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_383(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam6);
	}
	func_384(iParam0);
}

int func_129(int iParam0)
{
	if (!func_201(iParam0))
	{
		return 0;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_15;
}

int func_130(int iParam0)
{
	iParam0 = func_385(iParam0);
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
	vVar2 = { func_386(((*Global_2621440)[0 /*12065*/])->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_387(vVar2, uVar1, uVar0, 0);
	func_388(vVar2);
	Global_40.f_9.f_15 = func_184(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_132(int iParam0)
{
	if (func_200() != -1)
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
	func_389();
	Global_43888 = 1;
}

void func_133(int iParam0, bool bParam1)
{
	if (func_200() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_60(32768))
	{
		return;
	}
	if (!func_60(32768))
	{
		func_390(1, bParam1);
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
		((*Global_2621440)[iParam0 /*12065*/])->f_9.f_14 = func_358();
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
	func_391(Var10, 0);
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
	if (!func_324(Global_35, 0))
	{
		func_375(uParam0->f_174, 0, 0);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("RBT20_CAPTURED");
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
		func_392(0);
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
	if (func_393(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_394(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_394(&(Global_1347343->f_11), 16384);
	}
	if (func_395() >= 2)
	{
		if (!func_393(Global_1347343->f_11, 16384))
		{
			func_394(&(Global_1347343->f_11), 8);
		}
		func_158(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_272(Global_1935630, 2048);
	func_396(bParam5);
}

bool func_142(var uParam0)
{
	return uParam0->f_781;
}

void func_143(var uParam0)
{
	func_397(1, &(uParam0->f_2605.f_482));
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
	if (func_398(iParam0) == 3)
	{
		if (func_109(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_109(iParam0)))
		{
			if (func_110(iParam0) != 1 && func_110(iParam0) != 8)
			{
				func_399(func_110(iParam0), func_109(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_400(iParam0);
	func_198(1);
	func_401(0);
	func_402(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_403(1);
			func_404(15, 0, 1);
			break;
		case 4:
			func_404(10, 0, 1);
			break;
		case 8:
			func_404(10, 0, 1);
			break;
		case 9:
			func_404(10, 0, 1);
			break;
		case 2:
			func_404(10, 0, 1);
			break;
		case 6:
			func_404(10, 0, 1);
			break;
		case 5:
			func_404(10, 0, 1);
			break;
	}
	func_405(1);
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
		fParam2 = BUILTIN::VDIST2(Global_36, func_406(iParam0));
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
		if (func_407())
		{
			return;
		}
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "RCM_INVALID_TOD", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_408(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 1024 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_ANTAGONIZE", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_408(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 4096 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_MEMORY", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_408(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 2048 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_WANTED_REGION", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_408(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 16384 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_408(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 8192 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_COMBAT", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_408(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 32768 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED_2", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_408(sVar1, 10000, 0, 0, 0, 1);
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
		if (func_409())
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
		if (func_201(iVar0) && func_31(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
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
	return func_410(&Local_223);
}

int func_150(var uParam0)
{
	switch (func_71(uParam0))
	{
		case 0:
			if (func_411(&Local_223))
			{
				if (!func_412(Local_223.f_67))
				{
					func_304(Local_223.f_300, ENTITY::GET_ENTITY_MODEL(Local_223.f_67));
				}
				func_23(&iLocal_607);
				return 1;
			}
			else
			{
				func_413(uParam0);
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
	HUD::_TEXT_BLOCK_DELETE("BHCR");
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_611) && PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_611))
	{
		PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_611);
	}
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_914);
	func_335(0);
	func_414(&Local_223, 1);
	if (iLocal_658)
	{
		func_415(-2047539266);
		if (GRAPHICS::_0xDE9BAD3292AA6D5E(-2047539266))
		{
			GRAPHICS::_0xDD0BC0EDCB2162F6(-2047539266);
		}
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_BH_Skinner_Camp", false, false);
		iLocal_658 = 0;
	}
	if (iLocal_659)
	{
		func_416(&iLocal_913, 1);
		func_415(1053919002);
		func_417("BH_SkinnerSearch");
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_916))
		{
			func_418(sLocal_916);
		}
		iLocal_659 = 0;
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
	func_229(&(uParam0->f_2588));
}

void func_162(var uParam0)
{
	struct<2> Var0;

	Var0 = { func_419(uParam0->f_174) };
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&Var0))
	{
		HUD::_TEXT_BLOCK_DELETE(&Var0);
	}
	Var0 = { func_420(uParam0->f_174) };
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
	switch (func_200())
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

	if (!func_421(iParam0))
	{
		return;
	}
	if (!func_422(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = func_423(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_KEEP_TASK(iVar0, false);
		}
	}
	func_424(iParam0, 0, 0, bParam1, fParam2, bParam3, bParam4, bParam5, bParam6, 0, 0);
	func_425(iParam0, 0);
	func_426(iParam0);
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
		func_427(((*Global_1347702)[iParam0 /*49*/])->f_41);
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

	if (func_428(iParam0, &iVar1, &iVar0))
	{
		if (func_429(iVar1, iVar0, 1))
		{
			func_430(iVar1, iVar0);
		}
	}
}

bool func_174(int iParam0)
{
	int iVar0;

	iVar0 = func_346(iParam0);
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
	if (!func_174(iParam0) && !func_269(iParam0))
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
	if (func_398(iParam0) == 3 || (func_398(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_109(iParam0))))
	{
		func_399(func_110(iParam0), func_109(iParam0), iParam2);
		if ((!func_57(Global_1572864->f_8) && !func_146(0, 1, 0)) && !func_90(&Global_1935630, 32768))
		{
			iVar0 = func_431(iParam0);
			if (iVar0 != -1)
			{
				func_432(0);
			}
			else if (func_110(iParam0) == 8)
			{
				iVar0 = func_433();
				if (iVar0 != -1)
				{
					func_432(0);
				}
			}
		}
	}
	func_402(iParam0, 0);
	if (func_56(0) == iParam0)
	{
		func_198(1);
		func_401(0);
		func_405(1);
	}
	func_434(iParam0, 1);
	func_400(iParam0);
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

	if (!func_201(iParam0))
	{
		return;
	}
	func_435(&(((*Global_1347702)[iParam0 /*49*/])->f_14), iParam1);
	func_435(&(((*Global_1347702)[iParam0 /*49*/])->f_14), 2);
	func_209(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 16384);
	func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_201(&(Global_40.f_450[iVar0])))
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
		func_436(uParam0->f_41[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_437(uParam0->f_117[iVar0 /*5*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_438((*uParam0)[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_439(uParam0->f_28[iVar0 /*3*/]);
		iVar0++;
	}
	func_162(uParam0);
}

void func_181(int iParam0)
{
	iParam0 = func_385(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_440(iParam0, 32);
	func_441();
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
	if (func_355(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_442(vParam0, bParam3);
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
	func_443(uParam0);
	func_444(uParam0, 1);
	func_445(uParam0, 1);
	func_446(uParam0, 1);
	func_447(uParam0, 1);
	func_448(uParam0, 1);
	func_449(uParam0, 1);
	func_450(uParam0, 1);
	func_451(uParam0, 0);
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
		if (!func_452((*uParam0)[iVar0 /*3*/]))
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

	Var0 = { func_419(uParam0->f_174) };
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
			uParam0->f_2573 = { func_420(uParam0->f_174) };
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

	iVar0 = func_453(&(uParam0->f_117), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_454(&(uParam0->f_117));
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

void func_192(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_455(uParam0, sParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_456(uParam0);
	}
	if (iVar0 == -1)
	{
		return;
	}
	(*uParam0)[iVar0 /*3*/] = sParam1;
	((*uParam0)[iVar0 /*3*/])->f_2 = (((*uParam0)[iVar0 /*3*/])->f_2 || iParam2);
	if (func_6(uParam0->f_172, 8192))
	{
		func_2(&(uParam0->f_172), 8192);
	}
}

int func_193(var uParam0)
{
	return uParam0->f_168;
}

void func_194(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (func_457((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1))
		{
			func_458((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_41[iVar0 /*3*/])->f_2 == 0 || !func_457((uParam0->f_41[iVar0 /*3*/])->f_2, iParam2))
			{
				func_436(uParam0->f_41[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_457((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1))
		{
			func_458((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1);
			if ((uParam0->f_117[iVar0 /*5*/])->f_4 == 0 || !func_457((uParam0->f_117[iVar0 /*5*/])->f_4, iParam2))
			{
				func_437(uParam0->f_117[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_457(((*uParam0)[iVar0 /*3*/])->f_2, iParam1))
		{
			func_458(((*uParam0)[iVar0 /*3*/])->f_2, iParam1);
			if (((*uParam0)[iVar0 /*3*/])->f_2 == 0 || !func_457(((*uParam0)[iVar0 /*3*/])->f_2, iParam2))
			{
				func_438((*uParam0)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_457((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1))
		{
			func_458((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_28[iVar0 /*3*/])->f_2 == 0 || !func_457((uParam0->f_28[iVar0 /*3*/])->f_2, iParam2))
			{
				func_439(uParam0->f_28[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

int func_195(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_44 != -1)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_44 != 0)
		{
			if (!func_459(((*Global_1347702)[iParam0 /*49*/])->f_44))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_196(var uParam0)
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
						*uParam0 = func_460(vVar0.z);
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

void func_197(bool bParam0)
{
	if (!bParam0)
	{
		LAW::_0x61B98367D93F012F(PLAYER::GET_PLAYER_INDEX());
	}
	LAW::_ENABLE_DISPATCH_LAW(bParam0);
	LAW::_ENABLE_DISPATCH_LAW_2(bParam0);
}

void func_198(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_125(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_272(Global_1935630, 4194304);
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

int func_199(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if (func_452(uParam0->f_41[iVar1 /*3*/]))
		{
			if (func_457((uParam0->f_41[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_461(uParam0->f_41[iVar1 /*3*/]))
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
		if (func_462(uParam0->f_117[iVar1 /*5*/]))
		{
			if (func_457((uParam0->f_117[iVar1 /*5*/])->f_4, iParam1))
			{
				if (!func_463(uParam0->f_117[iVar1 /*5*/]))
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
		if (func_464((*uParam0)[iVar1 /*3*/]))
		{
			if (func_457(((*uParam0)[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_465((*uParam0)[iVar1 /*3*/]))
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
		if (func_466(uParam0->f_28[iVar1 /*3*/]))
		{
			if (func_457((uParam0->f_28[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_467(uParam0->f_28[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (iParam1 != 0 && iParam1 != 4)
	{
		if (!func_468(uParam0->f_174))
		{
			iVar0 = 0;
		}
		if (!func_469(uParam0))
		{
			iVar0 = 0;
		}
	}
	if (!func_470(uParam0, iParam1))
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

int func_200()
{
	return Global_1572887->f_12;
}

bool func_201(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_202(vector3 vParam0, var uParam3)
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
	iVar0 = func_471(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_472(0, 0);
		if (func_473(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_474(1, 0);
		}
	}
	else
	{
		func_474(1, 0);
	}
	func_154(0);
	func_475(0, vParam0, uParam3);
	return 1;
}

bool func_203(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return BUILTIN::VDIST2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return func_476(vParam0, vParam3) <= (fParam6 * fParam6);
}

char* func_204(int iParam0)
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

int func_205(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_67))
	{
		if (func_477(uParam0->f_329, 4194304))
		{
			uParam0->f_64 = 4;
			func_332(&(uParam0->f_68));
			return 1;
		}
		return 0;
	}
	if (uParam0->f_61 <= 0)
	{
		if (func_412(uParam0->f_67))
		{
			if (Global_40.f_9074.f_4 <= 0)
			{
				uParam0->f_64 = 0;
				func_332(&(uParam0->f_68));
				return 1;
			}
			if (!func_79(&(uParam0->f_321)))
			{
				if (func_478(uParam0->f_67))
				{
					func_258(&(uParam0->f_321));
				}
			}
			else if ((!func_478(uParam0->f_67) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 4) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 5)
			{
				func_229(&(uParam0->f_321));
			}
			else if (func_479(&(uParam0->f_321)) > 5f)
			{
				uParam0->f_64 = 4;
				func_332(&(uParam0->f_68));
				return 1;
			}
		}
		else if (!func_79(&(uParam0->f_321)))
		{
			if (func_478(uParam0->f_67))
			{
				func_258(&(uParam0->f_321));
			}
		}
		else if ((!func_478(uParam0->f_67) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 4) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 5)
		{
			func_229(&(uParam0->f_321));
		}
		else if (func_479(&(uParam0->f_321)) > 5f)
		{
			uParam0->f_64 = 4;
			func_332(&(uParam0->f_68));
			return 1;
		}
	}
	fVar0 = func_480(Global_35, uParam0->f_67, 1, 1);
	if (uParam0->f_63 != 10)
	{
		if (fVar0 > fParam2)
		{
			if (func_412(uParam0->f_67))
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
			if (!func_477(uParam0->f_329, 16))
			{
				func_340(uParam0, 256, 1);
				func_481(&(uParam0->f_329), 16);
			}
		}
		else if (fVar0 < (fParam1 - 25f))
		{
			if (func_477(uParam0->f_329, 16))
			{
				func_482(&(uParam0->f_329), 16);
				if (func_412(uParam0->f_67) || PED::IS_PED_HOGTIED(uParam0->f_67))
				{
					func_340(uParam0, 16, 0);
				}
				else
				{
					func_340(uParam0, 4, 0);
				}
			}
		}
	}
	if (func_215(PLAYER::PLAYER_ID(), 1, 1, 1))
	{
		uParam0->f_64 = 5;
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_69))
	{
		if (func_324(uParam0->f_69, 0))
		{
			if (func_483(uParam0))
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
		fVar1 = func_485(Global_35, func_484(uParam0->f_300), 1);
		if (fVar1 > 50f)
		{
			uParam0->f_64 = 7;
			return 1;
		}
		else if (fVar1 > 35f)
		{
			if (!func_477(uParam0->f_329, 131072))
			{
				func_481(&(uParam0->f_329), 131072);
				func_340(uParam0, 512, 1);
			}
		}
		else if (fVar1 < 30f)
		{
			if (func_477(uParam0->f_329, 131072))
			{
				func_482(&(uParam0->f_329), 131072);
				func_340(uParam0, 1024, 0);
			}
		}
	}
	if (uParam0->f_63 == 10)
	{
		fVar2 = func_485(Global_35, func_484(uParam0->f_300), 1);
		if (fVar2 > 75f)
		{
			uParam0->f_64 = 7;
			return 1;
		}
		else if (fVar2 > 55f)
		{
			if (!func_477(uParam0->f_329, 33554432))
			{
				func_481(&(uParam0->f_329), 33554432);
				func_340(uParam0, 4096, 1);
			}
		}
		else if (fVar2 < 50f)
		{
			if (func_477(uParam0->f_329, 33554432))
			{
				func_482(&(uParam0->f_329), 33554432);
				func_340(uParam0, 2048, 0);
			}
		}
	}
	return 0;
}

int func_206(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_486(((*Global_1347702)[iParam0 /*49*/])->f_15) != 0)
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

int func_207(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_487(0);
	if (iVar0 == 11)
	{
		iVar1 = func_488(func_112(iParam1), 1);
		if (iVar1 != -589165916)
		{
			if ((iVar1 == -103573613 || iVar1 == 194099983) || iVar1 == 2038046186)
			{
				iVar2 = func_489(Global_40.f_4283);
				if (func_355(iVar2) && iVar2 == ((*Global_1347702)[uParam0->f_174 /*49*/])->f_27)
				{
					return 1;
				}
			}
		}
	}
	else if (iVar0 == 4)
	{
		iVar3 = func_490(iParam1);
		if (iVar3 != -1)
		{
			if ((iVar3 == 1 || iVar3 == 3) || iVar3 == 2)
			{
				if (func_355(Global_1894899->f_2) && Global_1894899->f_2 == func_489(Global_40.f_4283))
				{
					return 1;
				}
			}
		}
	}
	if (func_491(uParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_208(int iParam0)
{
	int iVar0;
	int iVar1;

	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 8 != 0)
	{
		return 1;
	}
	if (func_492(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		if (!func_492(((*Global_1835011)[44 /*74*/])->f_1, 1))
		{
			if (iParam0 != 82 && iParam0 != 83)
			{
				return 1;
			}
		}
		if (func_492(((*Global_1835011)[67 /*74*/])->f_1, 1))
		{
			if ((!func_492(((*Global_1347702)[8 /*49*/])->f_15, 1) && !func_492(((*Global_1835011)[69 /*74*/])->f_1, 1)) && iParam0 != 8)
			{
				if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1835011)[67 /*74*/])->f_22)) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(((*Global_1835011)[67 /*74*/])->f_22))) > 0)
				{
					return 1;
				}
			}
		}
	}
	else if ((!func_493(2) && !func_492(((*Global_1347702)[61 /*49*/])->f_15, 1)) && func_492(((*Global_1347702)[59 /*49*/])->f_15, 1))
	{
		if (iParam0 != 60 && iParam0 != 61)
		{
			return 1;
		}
	}
	if (iParam0 == 15)
	{
		iVar1 = func_496(func_494(65536), 0, 3, func_495(65536));
		if (func_57(iVar1))
		{
			iVar0 = func_486(iVar1);
			if (!func_477(iVar0, 4))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 26 || iParam0 == 27)
	{
		if (((((!func_492(((*Global_1835011)[14 /*74*/])->f_1, 1) && func_492(((*Global_1347702)[62 /*49*/])->f_15, 1)) && func_492(((*Global_1347702)[0 /*49*/])->f_15, 1)) && func_492(((*Global_1347702)[94 /*49*/])->f_15, 1)) && func_492(((*Global_1835011)[25 /*74*/])->f_1, 1)) && (func_492(((*Global_1835011)[8 /*74*/])->f_1, 1) || (func_492(((*Global_1347702)[98 /*49*/])->f_15, 1) && func_486(((*Global_1347702)[98 /*49*/])->f_15) == 0)))
		{
			return 1;
		}
	}
	else if (iParam0 == 27)
	{
		if (!func_492(((*Global_1835011)[34 /*74*/])->f_1, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 42)
	{
		if (!func_492(((*Global_1347702)[41 /*49*/])->f_15, 1))
		{
			if (!func_497(8))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 51)
	{
		if (!func_498(2))
		{
			return 1;
		}
	}
	else if (iParam0 == 52)
	{
		if (!func_492(((*Global_1347702)[51 /*49*/])->f_15, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 57)
	{
		if (func_269(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 69 || iParam0 == 70)
	{
		if (func_499(((*Global_1347702)[iParam0 /*49*/])->f_15) == 0)
		{
			if (func_500() <= 160)
			{
				return 1;
			}
			else
			{
				func_501(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
			}
		}
		if (!func_502(68))
		{
			return 1;
		}
	}
	else if (iParam0 == 77)
	{
		if (func_269(((*Global_1835011)[47 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_269(((*Global_1835011)[45 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_503(16, 0))
		{
			return 1;
		}
	}
	else if (iParam0 == 87)
	{
		if (func_269(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 95)
	{
		if (func_269(((*Global_1835011)[20 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_269(((*Global_1835011)[21 /*74*/])->f_1))
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
		else if (!SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[113 /*49*/])->f_42, false) && func_504())
		{
			if (func_373("MUDTOWN32_altobj", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
			{
				func_179(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 262144);
				func_209(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 64);
				func_128(113, 1, 0, 1, 1, 1, 0);
				return 1;
			}
		}
	}
	else if (iParam0 == 99)
	{
		if (func_505(-404697685, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 117)
	{
		if (func_269(((*Global_1835011)[69 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 136)
	{
		if (func_269(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_209(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_210(int iParam0)
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

int func_211(int iParam0)
{
	if (!func_355(iParam0))
	{
		return 0;
	}
	return func_356(iParam0, 33554432);
}

int func_212(int iParam0)
{
	if (!func_355(iParam0))
	{
		return 0;
	}
	return func_356(iParam0, 67108864);
}

var func_213()
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

bool func_214(int iParam0, int iParam1)
{
	return func_506(iParam0, iParam1);
}

int func_215(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (func_507(iParam0, bParam1, iParam2, iParam3))
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

int func_216(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
			else if (func_508(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0]), 16, 1))
			{
				if (iParam1 == 0)
				{
					return 0;
				}
				else if (!func_422(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])))
				{
					return 0;
				}
			}
			if (iParam4 && func_90(&Global_1935630, 4096))
			{
			}
			else if (func_509(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0]), 44, 0) && iParam2 == 1)
			{
			}
			else if (!func_510(func_423(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])), -1f, 10f, 1, 1, 40f))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_217(var uParam0)
{
	return 0;
}

int func_218(int iParam0, float fParam1)
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

int func_219(var uParam0)
{
	return 0;
}

int func_220(float fParam0)
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

void func_221()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_421(iVar0) && func_422(iVar0))
		{
			func_511(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_80(&(Global_1359489->f_40), 1);
}

void func_222(var uParam0)
{
}

void func_223(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_263(iParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_264(iParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(iVar0, func_264(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_264(iParam0)))
			{
				UILOG::_UILOG_REMOVE_ENTRY(2, func_264(iParam0));
			}
		}
	}
	func_121(iParam0, 4);
	func_121(iParam0, 8);
	func_121(iParam0, 16);
}

void func_224(int iParam0)
{
	Global_36579 = iParam0;
}

void func_225(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_226(int iParam0)
{
	func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			func_232(iParam0, func_69(iParam0), 1, 0);
		}
		else
		{
			func_512(iParam0);
		}
	}
	else
	{
		func_115(iParam0, 0);
	}
}

void func_227(var uParam0)
{
	if (func_513(uParam0->f_174))
	{
		func_514(262144, 5, 0, 1);
		func_515(720f, 1, 0);
	}
}

void func_228(int iParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_fishingrod"), 0, 0))
	{
		return;
	}
	Global_1900073->f_18 = iParam0;
}

void func_229(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_230(var uParam0)
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

float func_231(int iParam0)
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

void func_232(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;

	if (!func_201(iParam0))
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
	((*Global_1347702)[iParam0 /*49*/])->f_38 = func_516(iParam0);
	if (!bParam5 && func_517(iParam0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::BLIP_ADD_FOR_RADIUS(((*Global_1347702)[iParam0 /*49*/])->f_38, func_406(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_18);
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
		func_518(8);
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
	func_512(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(((*Global_1347702)[iParam0 /*49*/])->f_37, 64, iParam0);
	if (func_200() == -1)
	{
		func_519(iParam0);
		iVar0 = func_489(Global_40.f_4283);
		if (func_355(iVar0) && func_520(((*Global_1888801)[iVar0 /*35*/])->f_13))
		{
			iVar1 = 1;
			bVar2 = func_521(iVar0);
		}
		if (func_522(iParam0, iVar1, iVar0))
		{
			func_523(((*Global_1347702)[iParam0 /*49*/])->f_15, bVar2, iVar1, iVar0);
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
		if (((!func_517(iParam0) || func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 1)) || func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 512)) || func_46(((*Global_1347702)[iParam0 /*49*/])->f_13, 2048))
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
		if (func_524(iParam0))
		{
			if (iParam0 == 97)
			{
				func_317(185, 0);
			}
			else
			{
				func_317(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = ((*Global_1347702)[iParam0 /*49*/])->f_37;
			((*Global_1347702)[iParam0 /*49*/])->f_40 = func_408(MISC::_CREATE_VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_265(iParam0, 2);
	}
}

void func_233(int iParam0, float fParam1)
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

void func_234(int iParam0, vector3 vParam1, float fParam4)
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
	if (func_525(iParam0, fParam4))
	{
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2048);
		func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		func_115(iParam0, 0);
		func_232(iParam0, vParam1, 1, 0);
	}
}

void func_235(int iParam0)
{
	if (func_526(179))
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
	else if (func_517(iParam0))
	{
		return;
	}
	if (((MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37) && MAP::IS_BLIP_ON_MINIMAP(((*Global_1347702)[iParam0 /*49*/])->f_37)) && BUILTIN::VDIST2(func_69(iParam0), Global_36) < 10000f) && func_527())
	{
		func_528(179, ((*Global_1347702)[iParam0 /*49*/])->f_37, 0);
	}
}

void func_236(int iParam0)
{
	if (func_526(180))
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_36 != -1822497728)
	{
		return;
	}
	else if (!func_517(iParam0))
	{
		return;
	}
	if ((MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37) && MAP::IS_BLIP_ON_MINIMAP(((*Global_1347702)[iParam0 /*49*/])->f_37)) && func_527())
	{
		func_528(180, ((*Global_1347702)[iParam0 /*49*/])->f_37, 0);
	}
}

void func_237(var uParam0)
{
	if (func_6(uParam0->f_172, 16))
	{
		func_102(uParam0, 0);
		func_87(uParam0);
	}
}

int func_238(var uParam0)
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
		Var0 = { func_529(uParam0->f_174) };
		uParam0->f_751 = ANIMSCENE::_CREATE_ANIM_SCENE(&Var0, 0, 0, false, true);
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_751))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_751);
		}
	}
	return 0;
}

struct<8> func_239()
{
	char cVar0[64];

	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

struct<8> func_240(var uParam0)
{
	return uParam0->f_350;
}

void func_241(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_530(uParam0) };
	func_531(uParam0, &Var0);
}

void func_242(var uParam0, char* sParam1)
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
	func_531(uParam0, sParam1);
	func_532(uParam0, 2097152, 1);
	func_533(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_348, sParam1, true);
}

int func_243(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_244(var uParam0)
{
	if (uParam0->f_177 == 6)
	{
		return 1;
	}
	else if (uParam0->f_177 == 2)
	{
		return 1;
	}
	else if (func_534(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_245(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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
			return (func_535(uParam0, 256) && !func_535(uParam0, 4194304));
		}
		uParam0->f_415 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	func_536(uParam0, sParam1);
	if (!func_535(uParam0, 64))
	{
		if (!func_243(func_537(uParam0)))
		{
			func_533(uParam0, 64);
		}
		else
		{
			vVar0 = { func_538(uParam0) };
			if (!func_243(vVar0))
			{
				func_539(uParam0, vVar0);
			}
		}
		return 0;
	}
	fVar3 = func_485(Global_35, func_537(uParam0), 1);
	if (func_535(uParam0, 128) || func_535(uParam0, 256))
	{
		if ((fVar3 >= func_540(uParam0) && !bParam2) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
		{
			if (uParam0->f_433)
			{
				func_541();
				uParam0->f_433 = 0;
			}
			func_542(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
			}
			func_319(uParam0);
			func_532(uParam0, 128, 1);
			func_532(uParam0, 256, 1);
			func_532(uParam0, 4096, 1);
			func_532(uParam0, 32768, 1);
			func_532(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_543(uParam0) || bParam2)
	{
		if (!func_535(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
			{
				if (func_543(uParam0) >= func_540(uParam0))
				{
				}
				Var4 = { func_240(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_544(uParam0);
				}
				Var4 = { func_240(uParam0) };
				iVar12 = 256;
				if (!func_535(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_348 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_344), iVar12, &Var4, false, true);
				func_545(uParam0, 0, 0, 0, 0);
				func_533(uParam0, 128);
			}
		}
	}
	if (func_535(uParam0, 128))
	{
		if (func_535(uParam0, 256) && !func_535(uParam0, 4194304))
		{
			return 1;
		}
		func_546(uParam0);
		if (!uParam0->f_433)
		{
			if (func_547())
			{
				func_548(4096);
				uParam0->f_433 = 1;
			}
		}
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_348, 1, 0))
		{
			bVar13 = true;
			Var15 = { func_530(uParam0) };
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
			if (!func_535(uParam0, 8388608))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_348, &Var15))
				{
					if (!func_535(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_348, &Var15) && !ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_348, &Var15)) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_348, &Var15))
						{
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_348, &Var15);
						}
						func_533(uParam0, 16777216);
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
			func_533(uParam0, 256);
			func_532(uParam0, 4194304, 1);
			return 1;
		}
	}
	return 0;
}

void func_246(var uParam0)
{
}

bool func_247(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

int func_248(var uParam0, char* sParam1, int iParam2)
{
	if (func_247(sParam1, 2))
	{
		return 0;
	}
	if (func_247(sParam1, 1))
	{
		return 0;
	}
	if (iParam2 < sParam1->f_11 || iParam2 > sParam1->f_13)
	{
		return 0;
	}
	if ((func_549(sParam1) == 9 || func_549(sParam1) == 12) || func_549(sParam1) == 13)
	{
		if (!func_247(sParam1, 8))
		{
			if (iParam2 == sParam1->f_11)
			{
				func_550(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return 1;
		}
	}
	if (iParam2 >= sParam1->f_11)
	{
		return func_551(uParam0, func_549(sParam1));
	}
	return 0;
}

void func_249(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::START_AUDIO_SCENE(sParam0);
	}
	func_550(sParam0, 1);
}

int func_250(var uParam0, char* sParam1, int iParam2)
{
	if (!func_247(sParam1, 1))
	{
		return 0;
	}
	if (func_247(sParam1, 2))
	{
		return 0;
	}
	if (iParam2 > sParam1->f_13)
	{
		return 1;
	}
	if ((func_552(sParam1) == 9 || func_552(sParam1) == 12) || func_552(sParam1) == 13)
	{
		if (!func_247(sParam1, 8))
		{
			if (iParam2 == sParam1->f_13)
			{
				func_550(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return 1;
		}
	}
	if (iParam2 >= sParam1->f_13)
	{
		return func_551(uParam0, func_552(sParam1));
	}
	return 0;
}

void func_251(char* sParam0)
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
	func_550(sParam0, 2);
}

int func_252(var uParam0, char* sParam1, int iParam2)
{
	if (func_247(sParam1, 1))
	{
		return 0;
	}
	if (func_549(sParam1) == 2)
	{
		return uParam0->f_177 == 2;
	}
	if (func_549(sParam1) == 0)
	{
		if (uParam0->f_177 == 6 && func_553(uParam0) == -1)
		{
			return 1;
		}
	}
	if (sParam1->f_11 != iParam2)
	{
		if (((func_549(sParam1) == 9 || func_549(sParam1) == 12) || func_549(sParam1) == 13) && func_247(sParam1, 8))
		{
			return 1;
		}
		return 0;
	}
	switch (func_549(sParam1))
	{
		case 0:
			return uParam0->f_177 == 6;
		case 4:
			return func_323(&(uParam0->f_753));
		case 1:
		case 10:
		case 11:
			return uParam0->f_177 == 7;
		case 9:
		case 12:
		case 13:
			if (!func_247(sParam1, 8))
			{
				func_550(sParam1, 8);
			}
			break;
	}
	return 0;
}

void func_253(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::_0x2B9C37C01BF25EDB(sParam0);
	}
	func_550(sParam0, 1);
}

int func_254(char* sParam0, bool bParam1)
{
	if (func_247(sParam0, 1))
	{
		return 0;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		AUDIO::PREPARE_MUSIC_EVENT(sParam0);
		func_550(sParam0, 1);
		return 1;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_550(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_550(sParam0, 1);
			return 0;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_550(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_550(sParam0, 1);
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
		func_550(sParam0, 1);
		return 1;
	}
	func_550(sParam0, 1);
	return 0;
}

void func_255(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_482)
	{
		if ((func_247(uParam0->f_482[iVar0 /*16*/], 1048576) && func_247(uParam0->f_482[iVar0 /*16*/], 4)) && !func_247(uParam0->f_482[iVar0 /*16*/], 1))
		{
			AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_482[iVar0 /*16*/]);
			return;
		}
		iVar0++;
	}
}

int func_256(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
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
		if (!func_554(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_555(uParam0, 0))
			{
				if (func_556(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_557(uParam0, 1, &iVar0))
					{
					}
					if (func_558(uParam0, 3, &cVar2))
					{
					}
					if (func_557(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_557(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_557(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_557(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_557(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 15 && uParam0->f_785 < 15)
						{
							if (!func_559(uParam0, &cVar2, uParam0->f_785))
							{
								*((*uParam0)[uParam0->f_785 /*16*/]) = { cVar2 };
								func_550((*uParam0)[uParam0->f_785 /*16*/], 1048576);
								uParam0->f_785++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 15 && uParam0->f_786 < 15)
						{
							*(uParam0->f_241[uParam0->f_786 /*16*/]) = { cVar2 };
							func_550(uParam0->f_241[uParam0->f_786 /*16*/], 1048576);
							uParam0->f_786++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 16 && uParam0->f_787 < 16)
						{
							*(uParam0->f_482[uParam0->f_787 /*16*/]) = { cVar2 };
							func_550(uParam0->f_482[uParam0->f_787 /*16*/], 1048576);
							if (!bVar19 && func_247(&cVar2, 4))
							{
								AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_482[uParam0->f_787 /*16*/]);
								bVar19 = true;
							}
							uParam0->f_787++;
						}
					}
					else if (iVar0 < 2 && uParam0->f_788 < 2)
					{
						if (!func_559(&(uParam0->f_739), &cVar2, uParam0->f_788))
						{
							*(uParam0->f_739[uParam0->f_788 /*16*/]) = { cVar2 };
							func_550(uParam0->f_739[uParam0->f_788 /*16*/], 1048576);
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
			if (func_555(uParam0, 12))
			{
				if (func_557(uParam0, 13, &iVar0))
				{
				}
				if (func_557(uParam0, 14, &iVar1))
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
		func_560(uParam0);
	}
	return 1;
}

bool func_257(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_258(var uParam0)
{
	func_561(uParam0, 0f);
}

bool func_259(var uParam0)
{
	return func_257(*uParam0, 2);
}

int func_260()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_261(var uParam0)
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
		func_562(vVar0, 2.5f, 1, 0, 0, 0, 0);
		_NAMESPACE49::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(vVar0, 2.5f);
		if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 524288))
		{
			((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = func_563(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, vVar0, 0, 1, 1, 0, 1, 1, 0, 1, 1);
		}
		else
		{
			((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = func_563(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, vVar0, 0, 1, 1, 0, 1, 1, 1, 1, 0);
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

int func_262(var uParam0)
{
	int iVar0;

	iVar0 = func_95(uParam0);
	if (!HUD::TEXT_BLOCK_IS_LOADED("BHCR"))
	{
		return 0;
	}
	if (iVar0 < 3)
	{
		if (!iLocal_658)
		{
			func_564(-2047539266);
			if (!GRAPHICS::_0xDE9BAD3292AA6D5E(-2047539266))
			{
				GRAPHICS::_0xDFEA23EC90113657(-2047539266);
			}
			AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_BH_Skinner_Camp", true, true);
			func_565(vLocal_613, 15f, 0);
			iLocal_658 = 1;
		}
	}
	if (iVar0 < 2)
	{
		if (!func_290(uParam0))
		{
			return 0;
		}
	}
	if (iVar0 < 1)
	{
		if (!func_566())
		{
			return 0;
		}
	}
	else
	{
		iLocal_828 = 3;
		iLocal_656 = 1;
	}
	if (iVar0 < 3)
	{
		func_567();
		func_284(0);
	}
	else
	{
		iLocal_827 = 5;
		bLocal_819 = true;
	}
	if (iLocal_827 >= 5 && iLocal_828 >= 3)
	{
		func_568(uParam0, Global_35, "JOHN", 0);
		func_569(&Local_223);
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_175[0 /*7*/])))
		{
			PED::SET_PED_CONFIG_FLAG(&(Local_175[0 /*7*/]), 6, true);
			func_296(&(Local_175[0 /*7*/]), 1, 0);
			PED::SET_PED_CONFIG_FLAG(&(Local_175[0 /*7*/]), 186, false);
			func_570(&(Local_175[0 /*7*/]), 0);
		}
		return 1;
	}
	return 0;
}

int func_263(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0 || ((*Global_1347702)[iParam0 /*49*/])->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_264(int iParam0)
{
	var uVar0;

	uVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_3;
	return MISC::GET_HASH_KEY(&uVar0);
}

void func_265(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

void func_266(int iParam0)
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
	uVar10 = func_571(iParam0, 0);
	iVar11 = uVar10;
	iVar12 = uVar10;
	if (iParam0 == 82 || iParam0 == 83)
	{
		iVar12 = MISC::GET_HASH_KEY("LAW_UI_DUTCH_GANG");
	}
	MemCopy(&cVar0, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 8);
	StringConCat(&cVar0, "_DESC", 64);
	iVar13 = func_263(iParam0);
	UILOG::_UILOG_ADD_ENTRY_HASH(iVar13, func_264(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_24, iVar12, MISC::GET_HASH_KEY(&cVar0), ((*Global_1347702)[iParam0 /*49*/])->f_37);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar13, func_264(iParam0), iVar11, MISC::GET_HASH_KEY("toast_log_blips"));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar8) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar9))
	{
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(iVar13, func_264(iParam0), MISC::GET_HASH_KEY(sVar8), MISC::GET_HASH_KEY(sVar9));
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar13, func_264(iParam0)))
	{
		func_265(iParam0, 4);
	}
}

void func_267(int iParam0)
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
		cVar3 = func_572(0, &Var1, 0, 0, -1, -1);
		func_573(iParam0, &Var1, cVar3, -1082130432);
	}
}

void func_268(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_201(iVar0) && Global_1347702[iVar0 /*49*/] == iParam0)
		{
			bVar1 = true;
			func_223(iVar0, 1);
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

int func_269(int iParam0)
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
		iVar0 = func_398(iParam0);
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

void func_270(int iParam0, bool bParam1)
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
	func_402(iParam0, 1);
	bParam1 = bParam1;
}

void func_271(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_57(iParam0))
	{
		return;
	}
	if (!func_269(iParam0))
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
				func_574(func_111(iParam0));
			}
			if (func_200() != 0)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_109(iParam0), 0);
			}
			else
			{
				STATS::STATSTRACKER_DEED_STARTED(func_109(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_575(iParam0);
	if (!func_57(func_56(0)))
	{
		func_402(iParam0, 3);
		func_198(bParam2);
		if (func_200() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
			}
			func_401(1);
		}
		func_576(iParam0, -1);
		if (bParam1 && !func_60(2))
		{
			func_577(&Global_0, 1024);
		}
		if (func_200() == -1)
		{
			func_578(&(Global_1347343->f_11), 536870912);
			func_579(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_580(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_581(0);
			}
		}
		if (func_200() == -1)
		{
			iVar1 = func_431(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_433();
				switch (iVar1)
				{
					case 0:
						func_582(0);
						break;
					case 1:
						func_582(1);
						break;
					case 2:
						func_582(2);
						break;
					case 3:
						func_582(3);
						break;
					case 4:
						func_582(4);
						break;
					case 5:
						func_582(5);
						break;
					case 6:
						func_582(5);
						break;
					case 7:
						func_582(7);
						break;
					case 8:
						func_582(8);
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
						func_582(11);
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
						func_582(11);
						break;
					default:
						iVar1 = func_433();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_583(0);
									break;
								case 1:
									func_583(1);
									break;
								case 2:
									func_583(2);
									break;
								case 3:
									func_583(3);
									break;
								case 4:
									func_583(4);
									break;
								case 5:
									func_583(5);
									break;
								case 6:
									func_583(5);
									break;
								case 7:
									func_583(7);
									break;
								case 8:
									func_583(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_405(1);
	}
	else
	{
		func_576(iParam0, -1);
		func_402(iParam0, 4);
	}
	func_434(iParam0, 0);
}

void func_272(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_273(var uParam0)
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

void func_274(bool bParam0, int iParam1, bool bParam2)
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

void func_275()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_421(iVar0))
		{
			func_511(iVar0, 30, 1);
		}
		iVar0++;
	}
}

void func_276(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_492(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return;
	}
	else if (func_492(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return;
	}
	if (((((((((((((((uParam0->f_174 == 29 || uParam0->f_174 == 56) || uParam0->f_174 == 57) || uParam0->f_174 == 72) || uParam0->f_174 == 84) || uParam0->f_174 == 85) || uParam0->f_174 == 86) || uParam0->f_174 == 87) || uParam0->f_174 == 88) || uParam0->f_174 == 92) || uParam0->f_174 == 111) || uParam0->f_174 == 102) || uParam0->f_174 == 117) || uParam0->f_174 == 122) || uParam0->f_174 == 149) || uParam0->f_174 == 150)
	{
		iVar0 = 100;
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_revolver_cattleman"), 0, 0))
		{
			if (!func_584(joaat("weapon_revolver_cattleman")))
			{
				func_585(joaat("weapon_revolver_cattleman"));
			}
			func_586(Global_35, joaat("weapon_revolver_cattleman"), 0, 0, 2, 1, 0, 1056964608, 1065353216, iVar0, 0, 0, 0, 0);
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

void func_277(bool bParam0)
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
	func_587(0f);
	Global_1935436->f_11 = 1;
	if (func_374())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_588();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_278(var uParam0)
{
}

int func_279(var uParam0)
{
	if (uParam0->f_174 == func_19())
	{
		return 1;
	}
	return 0;
}

void func_280(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10, bool bParam11)
{
	struct<4> Var0;
	struct<4> Var4;

	if (uParam0->f_752 != iParam9)
	{
		if (uParam0->f_752 > -1)
		{
			func_589(uParam0);
		}
		uParam0->f_752 = iParam9;
		func_590(uParam0);
	}
	if (func_32(uParam0, 128) && func_29())
	{
		func_156(0);
		bParam11 = true;
	}
	if (!bParam11)
	{
		if ((func_283() == iParam9 && func_591() == iParam10) && !func_592(*Global_1347394, 0f, 0f, 0f))
		{
			return;
		}
	}
	if (func_283() != iParam9 && !func_592(*Global_1347394, 0f, 0f, 0f))
	{
		func_153(0);
	}
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_593(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, Var0, Var4, iParam9, iParam10);
}

int func_281(var uParam0)
{
	func_594(&Local_223, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_24, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_18, 0, 0);
	func_284(0);
	if (ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_613, 38f, 38f, 38f, false, true, 0))
	{
		AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
		func_115(uParam0->f_174, 0);
		iLocal_15 = 0;
		return 1;
	}
	return 0;
}

int func_282(var uParam0)
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
				func_595(0, 1, 1, 1);
				uParam0->f_171 = 1;
			}
			else
			{
				return 1;
			}
			break;
		case 1:
			func_595(0, 1, 1, 1);
			if (func_596(Global_35, &(uParam0->f_747), 0, 0, 0, 1084227584, 100, 0, 0))
			{
				func_161(uParam0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_283()
{
	return Global_1572864->f_9;
}

void func_284(int iParam0)
{
	int iVar0;

	if (bLocal_819)
	{
		return;
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_818))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(iLocal_818, 1, 0))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_818);
			bLocal_819 = true;
			return;
		}
	}
	else if (iParam0 || func_203(vLocal_613, Global_36, 120f, 1))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(&(Local_20[iVar0 /*8*/])))
			{
				return;
			}
			else if (ENTITY::IS_ENTITY_DEAD(&(Local_20[iVar0 /*8*/])))
			{
			}
			iVar0++;
		}
		iLocal_818 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_817, 9, "pbl_massacre", false, true);
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_818))
		{
			iVar0 = 0;
			while (iVar0 < 5)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_818, (Local_20[iVar0 /*8*/])->f_7, &(Local_20[iVar0 /*8*/]), 0);
				iVar0++;
			}
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_818);
		}
	}
}

void func_285(var uParam0)
{
	if (!iLocal_661)
	{
		iLocal_812 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_613, 0f, 0f, 0f, 10f, 10f, 4f, "RBT20_Massacre");
		iLocal_911 = func_597(-308585968, iLocal_812, 1);
		func_126(uParam0, "RBT20_OBJ_1", 1, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
		iLocal_661 = 1;
	}
}

void func_286(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_486(((*Global_1347702)[iParam0 /*49*/])->f_15);
	func_482(&iVar0, iParam1);
	func_598(((*Global_1347702)[iParam0 /*49*/])->f_15, iVar0);
}

void func_287(int iParam0, int iParam1)
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

int func_288()
{
	if (!iLocal_659)
	{
		func_564(1053919002);
		if (PATHFIND::_0x5AC0944C156E5F44("rmllr_cabin_normal"))
		{
			func_417("rmllr_cabin_normal");
			sLocal_916 = "rmllr_cabin_normal";
		}
		else if (PATHFIND::_0x5AC0944C156E5F44("rmllr_cabin_burnt"))
		{
			func_417("rmllr_cabin_burnt");
			sLocal_916 = "rmllr_cabin_burnt";
		}
		func_418("BH_SkinnerSearch");
		func_565(-2209.42f, -1608.47f, 145.55f, 25f, 0);
		func_331(-2209.42f, -1608.47f, 145.55f, 50f, 0);
		func_599(&uLocal_912, -2209.42f, -1608.47f, 145.55f, 8f);
		func_600(&iLocal_913, -2209.42f, -1608.47f, 145.55f, 15f, 1, 61, 0);
		iLocal_659 = 1;
	}
	return 1;
}

int func_289(var uParam0)
{
	if (iLocal_829 >= 4)
	{
		return 1;
	}
	if (!func_295(uParam0, 1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(&(Local_61[iLocal_829 /*22*/])))
	{
		Local_61[iLocal_829 /*22*/] = func_563(uParam0, (Local_61[iLocal_829 /*22*/])->f_11, (Local_61[iLocal_829 /*22*/])->f_1, (Local_61[iLocal_829 /*22*/])->f_4, 1, 1, 0, 1, 1, 1, 1, 0);
		if (iLocal_829 == 0)
		{
			PED::SET_PED_NAME_DEBUG(&(Local_61[iLocal_829 /*22*/]), "ELIASSWAP");
		}
		else if (iLocal_829 == 1)
		{
			PED::SET_PED_NAME_DEBUG(&(Local_61[iLocal_829 /*22*/]), "Skinner02");
		}
		else if (iLocal_829 == 2)
		{
			PED::SET_PED_NAME_DEBUG(&(Local_61[iLocal_829 /*22*/]), "LootingPed");
		}
		else if (iLocal_829 == 3)
		{
			PED::SET_PED_NAME_DEBUG(&(Local_61[iLocal_829 /*22*/]), "NrDeadHorse");
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(&(Local_61[iLocal_829 /*22*/])))
	{
		return 0;
	}
	WEAPON::REMOVE_ALL_PED_WEAPONS(&(Local_61[iLocal_829 /*22*/]), true, true);
	func_601(&(Local_61[iLocal_829 /*22*/]), joaat("weapon_melee_knife"), 1, 0, 0, 1056964608, 1065353216, 0);
	func_586(&(Local_61[iLocal_829 /*22*/]), (Local_61[iLocal_829 /*22*/])->f_10, 1, 1, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	if (iLocal_829 == 0)
	{
		TASK::_TASK_START_SCENARIO_IN_PLACE(&(Local_61[iLocal_829 /*22*/]), -1122379099, -1, 0, 0, -1082130432, 0);
	}
	else if (iLocal_829 == 1)
	{
		func_568(uParam0, &(Local_61[iLocal_829 /*22*/]), "SAV_PED3", 0);
	}
	else if (iLocal_829 == 2)
	{
		if (func_459(128))
		{
			func_586(&(Local_61[iLocal_829 /*22*/]), joaat("weapon_melee_torch"), 1, 1, 1, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			TASK::_TASK_START_SCENARIO_IN_PLACE(&(Local_61[iLocal_829 /*22*/]), -258459266, -1, 0, 0, -1082130432, 0);
		}
	}
	else if (iLocal_829 == 3)
	{
		TASK::_TASK_START_SCENARIO_IN_PLACE(&(Local_61[iLocal_829 /*22*/]), -1755170815, -1, 0, 0, -1082130432, 0);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_61[iLocal_829 /*22*/]), true);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_61[iLocal_829 /*22*/]), 0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_61[iLocal_829 /*22*/]), 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_61[iLocal_829 /*22*/]), 46, true);
	PED::SET_PED_CONFIG_FLAG(&(Local_61[iLocal_829 /*22*/]), 246, true);
	PED::SET_PED_CONFIG_FLAG(&(Local_61[iLocal_829 /*22*/]), 6, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(&(Local_61[iLocal_829 /*22*/]), 1, 0);
	if (Local_61[iLocal_829 /*22*/])->f_10 == joaat("weapon_bow")
	{
		PED::_0xD77AE48611B7B10A(&(Local_61[iLocal_829 /*22*/]), 2f);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(Local_61[iLocal_829 /*22*/]), 1269650476);
	iLocal_829++;
	if (iLocal_829 >= 4)
	{
		WEAPON::_0x72D4CB5DB927009C(joaat("weapon_bow"), -1, 0);
		WEAPON::_0x72D4CB5DB927009C(joaat("weapon_melee_knife"), -1, 0);
		WEAPON::_0x72D4CB5DB927009C(joaat("weapon_revolver_cattleman"), -1, 0);
	}
	return 0;
}

int func_290(var uParam0)
{
	if (iLocal_831 == 4)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(&(Local_175[iLocal_831 /*7*/])))
	{
		if ((Local_175[iLocal_831 /*7*/])->f_6 == 0)
		{
			Local_175[iLocal_831 /*7*/] = func_563(uParam0, (Local_175[iLocal_831 /*7*/])->f_5, (Local_175[iLocal_831 /*7*/])->f_1, (Local_175[iLocal_831 /*7*/])->f_4, 1, 1, 0, 0, 1, 1, 1, 0);
		}
		else
		{
			Local_175[iLocal_831 /*7*/] = func_563(uParam0, (Local_175[iLocal_831 /*7*/])->f_5, (Local_175[iLocal_831 /*7*/])->f_1, (Local_175[iLocal_831 /*7*/])->f_4, 1, 1, 0, 0, 1, 0, 1, 0);
			func_602(&(Local_175[iLocal_831 /*7*/]), (Local_175[iLocal_831 /*7*/])->f_6);
		}
		PED::SET_PED_CONFIG_FLAG(&(Local_175[iLocal_831 /*7*/]), 6, true);
		PED::SET_PED_CONFIG_FLAG(&(Local_175[iLocal_831 /*7*/]), 186, false);
		func_570(&(Local_175[iLocal_831 /*7*/]), 0);
		if (iLocal_831 == 2)
		{
			func_568(uParam0, &(Local_175[2 /*7*/]), "RBH_HOSTAGE20", 0);
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(&(Local_175[iLocal_831 /*7*/])))
	{
		return 0;
	}
	if (iLocal_831 == 1)
	{
		func_296(&(Local_175[1 /*7*/]), 1, 0);
	}
	WEAPON::REMOVE_ALL_PED_WEAPONS(&(Local_175[iLocal_831 /*7*/]), true, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_175[iLocal_831 /*7*/]), true);
	if (iLocal_831 != 1)
	{
		TASK::CLEAR_PED_TASKS(&(Local_175[iLocal_831 /*7*/]), 1, 0);
	}
	iLocal_831++;
	if (iLocal_831 == 4)
	{
	}
	return 0;
}

int func_291(var uParam0)
{
	if (iLocal_830 >= 4)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(&(Local_150[iLocal_830 /*6*/])))
	{
		Local_150[iLocal_830 /*6*/] = func_563(uParam0, (Local_150[iLocal_830 /*6*/])->f_5, (Local_150[iLocal_830 /*6*/])->f_1, (Local_150[iLocal_830 /*6*/])->f_4, 1, 1, 0, 1, 1, 1, 1, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(Local_150[iLocal_830 /*6*/])))
	{
		PED::SET_PED_CONFIG_FLAG(&(Local_150[iLocal_830 /*6*/]), 6, true);
		TASK::TASK_STAND_STILL(&(Local_150[iLocal_830 /*6*/]), -1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_150[iLocal_830 /*6*/]), true);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(&(Local_150[iLocal_830 /*6*/]), 15, 0);
		func_603(&(Local_150[iLocal_830 /*6*/]), 1022576842);
		iLocal_830++;
	}
	return 0;
}

int func_292()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_909))
	{
		iLocal_909 = OBJECT::CREATE_OBJECT(809664026, -2190.75f, -1618.09f, 145.1f, true, true, false, false, true);
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_910))
	{
		iLocal_910 = OBJECT::CREATE_OBJECT(809664026, -2190.75f, -1618.09f, 145.1f, true, true, false, false, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_909) && ENTITY::DOES_ENTITY_EXIST(iLocal_910))
	{
		return 1;
	}
	return 0;
}

int func_293()
{
	if (iLocal_823)
	{
		return 1;
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_822))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(iLocal_822, 1, 0))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_822);
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iLocal_822, "pbl_breakout");
			iLocal_823 = 1;
			return 1;
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_909))
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_910))
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_607))
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(&(Local_61[1 /*22*/])))
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(&(Local_175[2 /*7*/])))
		{
			return 0;
		}
		else if (ENTITY::IS_ENTITY_DEAD(&(Local_175[2 /*7*/])))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(&(Local_175[3 /*7*/])))
		{
			return 0;
		}
		else if (ENTITY::IS_ENTITY_DEAD(&(Local_175[3 /*7*/])))
		{
		}
		if (!func_203(Global_36, -2208.11f, -1608.97f, 146f, 150f, 1))
		{
			return 0;
		}
		iLocal_822 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_820, 0, "pbl_action", false, true);
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_822))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_822, "Scalp01", iLocal_909, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_822, "Scalp02", iLocal_910, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_822, "Skinner01", iLocal_607, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_822, "Skinner02", &(Local_61[1 /*22*/]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_822, "Vic01", &(Local_175[2 /*7*/]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_822, "Vic02", &(Local_175[3 /*7*/]), 0);
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_822);
		}
	}
	return 0;
}

int func_294(var uParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_822))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(iLocal_822, 1, 0))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_822, 0))
			{
				if (iLocal_835 == 2)
				{
					return 0;
				}
				if (func_604(uParam0, "RBT20_IG1_P1", 0))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_822, "Base_bool", true, false);
					ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iLocal_822, "pbl_breakout");
					if (ENTITY::IS_ENTITY_DEAD(&(Local_175[2 /*7*/])))
					{
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_295(var uParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_607))
	{
		if (bParam1 && !func_203(Global_36, vLocal_619, 120f, 1))
		{
			return 0;
		}
		iLocal_607 = func_605(iLocal_608, vLocal_619, -101.48f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_607, true);
		PED::SET_PED_NAME_DEBUG(iLocal_607, "TARGET");
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_607, true, true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_607, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_607, 1269650476);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_607, 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_607, 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_607, 46, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_607, 111, true);
		func_606(iLocal_607, 1);
		func_586(iLocal_607, joaat("weapon_bow"), 0, 1, 0, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		func_568(uParam0, iLocal_607, "RBH_TARGET20", 0);
		func_607(uParam0);
		iLocal_829 = 0;
		return 0;
	}
	else if (bParam1)
	{
		if (!func_608())
		{
			return 0;
		}
	}
	return 1;
}

void func_296(int iParam0, bool bParam1, bool bParam2)
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

int func_297(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_486(((*Global_1347702)[iParam0 /*49*/])->f_15);
	if (func_477(iVar0, iParam1))
	{
		return 1;
	}
	return 0;
}

void func_298(var uParam0)
{
	int iVar0;

	if (func_477(uParam0->f_329, 262144))
	{
		return;
	}
	if (!func_324(uParam0->f_67, 0) || PED::IS_PED_HOGTIED(uParam0->f_67))
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

int func_299(var uParam0)
{
	if (!func_79(uParam0))
	{
		func_80(uParam0, 0);
	}
	if (STREAMING::GET_NUMBER_OF_STREAMING_REQUESTS() == 0)
	{
		return 1;
	}
	if (func_479(uParam0) > 15f)
	{
		return 1;
	}
	return 0;
}

int func_300(int iParam0, int iParam1)
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

int func_301(int iParam0)
{
	if (iParam0 == 76)
	{
		return 0;
	}
	else if (iParam0 == 38)
	{
		return 0;
	}
	return -1;
}

void func_302(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = -1;
	iVar1 = func_609(iParam1);
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
				func_610(iVar0, iParam0, iParam1, 0);
				return;
			}
			iVar2++;
		}
		if (iVar2 >= iVar1)
		{
			func_611(iParam0, iParam1);
			return;
		}
		iVar0++;
	}
	if (iVar3 < 0)
	{
		return;
	}
	func_610(iVar3, iParam0, iParam1, 0);
}

void func_303(int iParam0, int iParam1, var uParam2)
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

int func_304(int iParam0, int iParam1)
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
			iVar0 = func_612(iParam0, iVar2);
			iVar1 = func_613(iParam0, iVar2);
			_NAMESPACE48::_0x8BC555034A5A5E8C(iVar0, iParam1);
			func_614(iVar1, 0);
			if (func_615(iVar1, 0, 0, 0, 0, 0))
			{
				return func_616(iVar1);
			}
			return 0;
		}
	}

void func_305(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_617(iParam0, sParam4, iParam5);
	}
	func_618(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_306()
{
	int iVar0;

	iVar0 = func_500();
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

int func_307(int iParam0)
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

float func_308(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_309(var uParam0)
{
	if (!func_6(uParam0->f_172, 512))
	{
		if (!func_619(uParam0))
		{
			return 0;
		}
		func_209(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 128);
		if (func_238(uParam0))
		{
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_751);
			func_1(&(uParam0->f_172), 512);
		}
		return 0;
	}
	func_595(0, 1, 1, 1);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_751) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_751, 0))
	{
		func_1(&(uParam0->f_172), 1024);
		func_2(&(uParam0->f_172), 256);
		return 1;
	}
	return 0;
}

void func_310()
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

void func_311(var uParam0)
{
	CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, 0, 17, 1, 0);
}

int func_312(var uParam0)
{
	if (uParam0->f_176 == 4)
	{
		if (!func_620(uParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_313(var uParam0, var uParam1)
{
	struct<8> Var0;

	if (func_183(uParam1, 32768))
	{
		Var0 = { func_530(uParam0) };
		func_242(uParam0, &Var0);
		if (func_183(uParam1, 131072))
		{
			func_533(uParam0, 268435456);
			if (func_243(uParam0->f_409))
			{
				uParam0->f_409 = { func_621(uParam1, uParam1->f_1580) };
			}
			if (func_243(uParam0->f_406))
			{
				uParam0->f_406 = { func_621(uParam1, uParam1->f_1580) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_406, &(uParam0->f_406.f_2), 0);
				uParam0->f_406.f_2 = (uParam0->f_406.f_2 + 0.5f);
			}
		}
		if (func_183(uParam1, 268435456))
		{
			func_622(&(uParam0->f_404), 16384);
		}
	}
	else if (func_183(uParam1, 524288))
	{
		func_533(uParam0, 67108864);
		func_623(uParam1, 524288);
	}
	if (func_624(uParam1, 128))
	{
		func_533(uParam0, 32);
	}
	if (uParam1->f_1799 != 0)
	{
		uParam0->f_416 = uParam1->f_1799;
		if (uParam1->f_1580 >= 0 && func_625(uParam1->f_912[uParam1->f_1580 /*41*/], 256))
		{
			func_622(&(uParam0->f_404), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_IS_CAMERA_AVAILABLE(&(uParam1->f_1588)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_417), &(uParam1->f_1588), 16);
	}
}

void func_314(var uParam0, int iParam1)
{
	var uVar0;

	if (iParam1 || !func_6(uParam0->f_172, 16384))
	{
		MemCopy(&uVar0, {func_626(uParam0->f_174)}, 8);
		func_627(&uVar0, 15000, 0, 0, 0, 1);
		func_1(&(uParam0->f_172), 16384);
	}
}

int func_315(int iParam0)
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
	iVar0 = func_628();
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

int func_316()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383->f_393))
	{
		func_629();
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar0, 0);
	func_630(-1);
	func_631(3);
	return 1;
}

void func_317(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_632(iParam0, &iVar0, &iVar1);
	if (!func_633(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_634(iVar0, iVar1);
}

int func_318(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;

	func_536(uParam4, &sParam0);
	if (func_535(uParam4, 2) && !func_535(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -842734359, false);
	}
	if (func_635(uParam4) != 1)
	{
		func_636(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_635(uParam4))
	{
		case 1:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_348, 1, 0))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_348, 0))
				{
					func_637(uParam4, &sParam0, uParam5);
				}
				else if (ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_348))
				{
					func_638(uParam4, 4);
					return 0;
				}
				else
				{
					if (func_639(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_341);
					}
					func_640(uParam5);
				}
				func_638(uParam4, 3);
			}
			else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_350)) && func_535(uParam4, 134217728))
				{
				}
				else
				{
					func_241(uParam4);
				}
				func_258(&(uParam4->f_1));
				func_638(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_546(uParam4);
				if (!func_79(&(uParam4->f_1)))
				{
					func_80(&(uParam4->f_1), 0);
				}
				else if (func_479(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					func_638(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_348, 1, 0))
			{
				if (func_245(uParam4, &sParam0, 1, 1))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_348, 1, 0))
					{
						func_638(uParam4, 4);
					}
					else if (!func_243(func_537(uParam4)) && !func_641(Global_35, func_537(uParam4), 100f, 1, 1))
					{
						func_642(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_537(uParam4), 0f, 1, 1, 1, 0);
					}
				}
				else if (func_479(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					func_638(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
					func_643(1, 0);
					func_637(uParam4, &sParam0, uParam5);
					func_638(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_479(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
				}
				func_638(uParam4, 4);
			}
			break;
		case 3:
			func_644(uParam4);
			if (func_639(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_341);
			}
			func_640(uParam5);
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_348, 0)) && (ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_348) || func_535(uParam4, 512)))
			{
				if (!func_535(uParam4, 1024) && func_645(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_535(uParam4, 512))
				{
					func_258(&(uParam4->f_1));
					func_533(uParam4, 512);
					func_638(uParam4, 4);
				}
				else if (func_535(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_636(uParam4);
			}
			if (func_535(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_646(uParam4) - func_647(uParam4)))) <= 2f)
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
				if (func_648(uParam4, Global_35, 4))
				{
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_647(uParam4) > 5000)
				{
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(1, 1);
				}
			}
			if (func_649(uParam4))
			{
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
				}
				func_650(uParam4);
				func_651(uParam4);
				return 1;
			}
			else
			{
				if (func_535(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348) && !ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_348))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_348);
						}
						func_258(&(uParam4->f_1));
						ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(1, 1);
						func_533(uParam4, 512);
						func_532(uParam4, 67108864, 1);
						func_638(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_535(uParam4, 16384) && !ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_348)) && CAM::IS_SCREEN_FADED_OUT()) && func_647(uParam4) <= 5000) && func_647(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!func_535(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_652(&(uParam4->f_405), 0);
					func_533(uParam4, 536870912);
				}
				if (func_647(uParam4) >= 5000 && func_647(uParam4) <= (func_646(uParam4) - 5000))
				{
					func_653();
				}
			}
			break;
		case 6:
			if (func_649(uParam4))
			{
				func_650(uParam4);
				func_651(uParam4);
				return 1;
			}
			break;
		case 4:
			if (func_535(uParam4, 524288))
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
						func_533(uParam4, 1073741824);
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
					if (func_654(uParam5))
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, 0);
						}
						func_638(uParam4, 3);
					}
					else if (func_479(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, 0);
						}
						func_638(uParam4, 3);
					}
				}
				if (func_635(uParam4) == 3)
				{
					if (func_535(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			func_638(uParam4, 4);
			break;
	}
	return 0;
}

void func_319(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_535(uParam0, 16))
		{
			POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_4);
			POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_4);
			func_655(uParam0);
			PATHFIND::RESET_ROADS_IN_VOLUME(uParam0->f_4, 0);
		}
	}
	if (func_535(uParam0, 8))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_4);
		func_532(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_532(uParam0, 16, 1);
}

void func_320(int* iParam0)
{
	struct<367> Var0;

	Var0 = 1;
	Var0.f_13 = 27;
	Var0.f_338 = 1097859072;
	Var0.f_339 = 1101004800;
	Var0.f_366 = 4;
	MISC::_COPY_MEMORY(iParam0, &Var0, 434);
}

void func_321(var uParam0)
{
	func_656(&(uParam0->f_753));
	StringCopy(&(uParam0->f_2581), "", 32);
	uParam0->f_2571 = 0;
	func_2(&(uParam0->f_172), 262144);
	func_2(&(uParam0->f_172), 524288);
	func_2(&(uParam0->f_172), 1048576);
}

int func_322(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
	if (func_657(uParam0) >= 3)
	{
		uParam0->f_1792 = func_507(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
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
		func_658(uParam0);
	}
	if (func_657(uParam0) < 10)
	{
		if (func_657(uParam0) == 3)
		{
			func_659(uParam0, iParam5, bParam6);
		}
		else if (func_657(uParam0) > 3)
		{
			if (func_660(uParam0) == 0)
			{
				if (!func_183(uParam0, 524288))
				{
					func_661(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_662(uParam0, 4);
					func_663(uParam0, 10);
					func_664(uParam0, iParam5);
					return 1;
				}
			}
			if (!func_183(uParam0, 67108864) && !Global_1935630->f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!func_625(uParam0->f_912[uParam0->f_1580 /*41*/], 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
				PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
			}
			CAM::_DISABLE_CINEMATIC_MODE_THIS_FRAME();
			func_665(0);
			func_666();
			PAD::DISABLE_CONTROL_ACTION(0, -1722177808, false);
			PAD::DISABLE_CONTROL_ACTION(0, 1644850270, false);
			PAD::DISABLE_CONTROL_ACTION(0, 2139949496, false);
			if (uParam0->f_1580 >= 0)
			{
				if (!func_625(uParam0->f_912[uParam0->f_1584 /*41*/], 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (func_667(uParam0, uParam0->f_1580))
				{
					if (func_668(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						func_669(uParam0, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1584 /*22*/])->f_1, 1065353216);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					func_669(uParam0, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1584 /*22*/])->f_1, 1065353216);
				}
				func_670(uParam0);
			}
		}
	}
	bVar0 = func_671(uParam0, iParam5, bParam6);
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
				func_672(uParam0, 131072);
				func_672(uParam0, 268435456);
			}
		}
		if (func_624(uParam0, 64) || (uParam0->f_1580 >= 0 && !func_625(uParam0->f_912[uParam0->f_1580 /*41*/], 524288)))
		{
			if (CAM::GET_LETTER_BOX_RATIO() > 0f || func_660(uParam0) == 0)
			{
				HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(-1679307491);
				CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_657(uParam0) == 3 || func_183(uParam0, 131072))
	{
		func_673(uParam0);
		if (!func_183(uParam0, 262144))
		{
			if ((bVar0 && func_183(uParam0, 65536)) || func_183(uParam0, 131072))
			{
				func_672(uParam0, 32768);
				func_662(uParam0, 4);
				func_663(uParam0, 10);
				uParam0->f_1665 = 1;
				func_664(uParam0, iParam5);
				return 1;
			}
		}
	}
	if (func_657(uParam0) >= 3)
	{
		func_674(uParam0, iParam5);
		func_675(uParam0);
		if (!func_676(uParam0, 1))
		{
			func_677(uParam0);
		}
		func_678(uParam0);
	}
	switch (func_657(uParam0))
	{
		case 0:
			func_679(uParam0, Param1, iParam5);
			break;
		case 1:
			func_680(uParam0);
			break;
		case 2:
			func_681(uParam0);
			break;
		case 3:
			if (func_323(uParam0))
			{
				func_682(2);
				func_669(uParam0, (uParam0->f_912[uParam0->f_1580 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1580 /*22*/])->f_1, 1065353216);
				func_258(&(uParam0->f_1768));
				func_662(uParam0, 1);
				func_683();
				func_663(uParam0, 5);
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
			if (func_657(uParam0) == 5)
			{
				if (func_684(uParam0))
				{
					func_662(uParam0, 2);
					func_663(uParam0, 6);
				}
			}
			if (func_657(uParam0) == 6)
			{
				if (func_685(uParam0))
				{
					func_662(uParam0, 3);
					func_663(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || func_686(&(uParam0->f_1768)) >= 15f)
			{
				if (func_687(uParam0, iParam5))
				{
					if (func_688(uParam0))
					{
						uParam0->f_1581 = func_689(uParam0);
						func_258(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
						HUD::_DISABLE_HUD_CONTEXT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
						func_662(uParam0, 6);
						func_663(uParam0, 9);
					}
					else
					{
						func_662(uParam0, 4);
						func_663(uParam0, 10);
						func_664(uParam0, iParam5);
						return 1;
					}
				}
			}
			break;
		case 9:
			if (func_687(uParam0, iParam5))
			{
				func_664(uParam0, iParam5);
				func_663(uParam0, 10);
				return 1;
			}
			break;
		case 10:
			return 1;
	}
	return 0;
}

int func_323(var uParam0)
{
	if (uParam0->f_1666)
	{
		return 0;
	}
	return uParam0->f_1665;
}

int func_324(int iParam0, int iParam1)
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
	if (func_477(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_477(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_477(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_477(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_477(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_477(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return 0;
		}
	}
	if (func_477(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_477(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_325(var uParam0)
{
	func_690(uParam0);
	func_691(uParam0);
}

void func_326(var uParam0)
{
	if (!iLocal_894)
	{
		if (iLocal_16 >= 9 && func_692(1) == 0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_607))
			{
				func_341(uParam0->f_174, 1);
			}
			func_280(uParam0, func_61(2), func_61(3), 2, 3, 0);
			iLocal_894 = 1;
		}
	}
	if (!iLocal_895)
	{
		if ((iLocal_15 == 2 && iLocal_16 >= 9) && func_203(Global_36, func_484(Local_223.f_300), 15f, 1))
		{
			func_280(uParam0, func_61(3), func_61(4), 3, 4, 0);
			iLocal_895 = 1;
		}
	}
}

void func_327()
{
	if (!iLocal_663)
	{
		if (iLocal_15 > 1)
		{
			iLocal_663 = 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_611))
		{
			PED::SET_PED_RESET_FLAG(iLocal_611, 170, true);
			if (!PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_611))
			{
				PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_611, 0);
			}
			if (func_203(Global_36, vLocal_613, 30f, 1))
			{
				func_693(iLocal_611, sLocal_914, 1, 0.762f, 0f, 0, 0, 1);
				PED::_0xFCA8FB9E15FA80D3(iLocal_611, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ELIAS_GREEN"));
				iLocal_663 = 1;
			}
		}
	}
	else if (iLocal_832 < 12)
	{
		if (TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_914, iLocal_832, vLocal_622[(iLocal_832 - 2) /*3*/]))
		{
			iLocal_832++;
		}
	}
}

void func_328()
{
	int iVar0;

	if (iLocal_16 != 10)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_150[iVar0 /*6*/])))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(&(Local_150[iVar0 /*6*/]), iLocal_607, 15f, 15f, 15f, false, true, 0))
			{
				if (!func_300(&(Local_150[iVar0 /*6*/]), 518218985))
				{
					TASK::CLEAR_PED_TASKS(&(Local_150[iVar0 /*6*/]), 1, 0);
					TASK::_TASK_SMART_FLEE_STYLE_PED(&(Local_150[iVar0 /*6*/]), Global_35, 3, 0, -1082130432, -1, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_329()
{
	int iVar0;
	int iVar1;

	if (iLocal_656)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(Local_204[iVar1 /*6*/])))
		{
			iVar0++;
		}
		else if (ENTITY::IS_ENTITY_DEAD(&(Local_204[iVar1 /*6*/])))
		{
			func_169(Local_204[iVar1 /*6*/], 1, 0, 1);
			iVar0++;
		}
		else if (PED::IS_PED_FLEEING(&(Local_204[iVar1 /*6*/])))
		{
			func_169(Local_204[iVar1 /*6*/], 1, 0, 1);
			iVar0++;
		}
		else if (!func_641(&(Local_204[iVar1 /*6*/]), Global_36, 50f, 1, 1))
		{
			func_169(Local_204[iVar1 /*6*/], 1, 0, 1);
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 >= 3)
	{
		iLocal_656 = 1;
	}
}

int func_330(var uParam0)
{
	func_285(uParam0);
	if (!iLocal_924)
	{
		AUDIO::PREPARE_MUSIC_EVENT("RBT20_START");
	}
	if (func_694())
	{
		func_332(&iLocal_911);
		func_333(iLocal_812);
		if (fLocal_793 < (21f * 0.8f))
		{
			fLocal_793 = (21f * 0.8f);
		}
		if (!&iLocal_666[0])
		{
			bLocal_662 = false;
			iLocal_666[0] = 1;
			iLocal_666[1] = 1;
		}
		else
		{
			bLocal_662 = true;
		}
		return 1;
	}
	else if (!bLocal_662)
	{
		if (VOLUME::IS_POINT_IN_VOLUME(iLocal_812, Global_36) || fLocal_793 > 21f)
		{
			if (!iLocal_896)
			{
				if (func_604(uParam0, "RBT20_TORTURE", 0))
				{
					iLocal_896 = 1;
				}
			}
			if ((iLocal_666[0] || bLocal_664 == 0) || fLocal_793 < 3.5f)
			{
				fLocal_793 = (fLocal_793 + (1f * BUILTIN::TIMESTEP()));
			}
			else
			{
				fLocal_793 = (fLocal_793 + (0.5f * BUILTIN::TIMESTEP()));
			}
			if (fLocal_793 > 21f)
			{
				if (!&iLocal_666[0])
				{
					func_695(0);
				}
				else if (!&iLocal_666[1])
				{
					if (fLocal_793 > 23f)
					{
						func_695(1);
					}
				}
				else if (fLocal_793 > 25f)
				{
					func_332(&iLocal_911);
					func_333(iLocal_812);
					bLocal_662 = true;
					return 1;
				}
			}
			else if (fLocal_793 >= 3.5f)
			{
				if (!iLocal_924 && AUDIO::PREPARE_MUSIC_EVENT("RBT20_START"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RBT20_START");
					iLocal_924 = 1;
				}
			}
		}
	}
	return 0;
}

void func_331(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_332(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_333(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_334(var uParam0)
{
	if (!iLocal_672)
	{
		iLocal_812 = VOLUME::_CREATE_VOLUME_CYLINDER(vLocal_616, 0f, 0f, 0f, 90f, 90f, 20f);
		iLocal_911 = func_597(-308585968, iLocal_812, 1);
		if (bLocal_662)
		{
			func_126(uParam0, "RBT20_OBJ_2A", 1, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
		}
		else
		{
			func_126(uParam0, "RBT20_OBJ_2", 1, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
		}
		iLocal_672 = 1;
	}
}

void func_335(bool bParam0)
{
	if (bParam0)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(iLocal_814))
		{
			iLocal_814 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2200.536f, -1612.823f, 145.3234f, 0f, 0f, -25f, 75f, 40f, 10f, "RBHT20_roadblocker");
			PATHFIND::_0xC1799FAFD2FDF52B(iLocal_814, 0, 0, 0);
			func_331(-2200.536f, -1612.823f, 145.3234f, 220f, 0);
			POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_814, 0, 0, 0, -1, -1, 0);
			iLocal_816 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(-998484125, -2200.536f, -1612.823f, 145.3234f, 150f, 150f, 50f, -1082130432, -1082130432, 2, 0);
		}
		POPULATION::_0xF45E46DEECF7DF6E(14336, 0, 0, -1, -1);
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	else if (VOLUME::DOES_VOLUME_EXIST(iLocal_814))
	{
		POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_814);
		PATHFIND::RESET_ROADS_IN_VOLUME(iLocal_814, 0);
		VOLUME::DELETE_VOLUME(iLocal_814);
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_816);
	}
}

void func_336()
{
	if (&iLocal_666[1])
	{
		return;
	}
	fLocal_793 = (fLocal_793 + (1f * BUILTIN::TIMESTEP()));
	if (!&iLocal_666[0])
	{
		if (fLocal_793 > 21f)
		{
			func_695(0);
		}
	}
	else if (!&iLocal_666[1])
	{
		if (fLocal_793 > 23f)
		{
			func_695(1);
		}
	}
}

void func_337()
{
	if (&iLocal_666[4])
	{
		return;
	}
	if (!&iLocal_666[2])
	{
		if (func_203(Global_36, vLocal_616, 85f, 0))
		{
			func_695(2);
			func_80(&uLocal_806, 0);
		}
	}
	else if (!&iLocal_666[3])
	{
		if (func_686(&uLocal_806) > 1.9f)
		{
			func_695(3);
		}
	}
	else if (func_686(&uLocal_806) > 2.2f)
	{
		func_695(4);
	}
}

void func_338(var uParam0)
{
	switch (iLocal_835)
	{
		case 0:
			if (iLocal_678 || iLocal_673)
			{
				iLocal_835 = 4;
			}
			else if (iLocal_904 || iLocal_677)
			{
				func_696(Local_858[0 /*17*/], "INTERACT_GREET", " ", -163964935, 0, 0, 0, 1, 0);
				func_696(Local_858[1 /*17*/], "INTERACT_INTERVENE", " ", 648122183, 0, 0, 0, 1, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_607, 301, false);
				iLocal_835 = 1;
			}
			break;
		case 1:
			if (iLocal_678 || iLocal_673)
			{
				func_697();
				iLocal_835 = 4;
				return;
			}
			else if (iLocal_836 == -1)
			{
				if (!iLocal_893)
				{
					if (bLocal_824)
					{
						func_696(Local_858[1 /*17*/], "INTERACT_INSULT", " ", 648122183, 0, 0, 0, 1, 0);
						iLocal_893 = 1;
					}
				}
				iLocal_836 = func_698(&iLocal_607, &iLocal_837, 50f, &Local_858, 0, 1, 0, 0, 3, 0, 2, -1082130432);
				if (iLocal_836 == 0)
				{
				}
				else if (iLocal_836 == 1)
				{
				}
			}
			if (iLocal_836 == 0)
			{
				if (func_699("RBT20_IG1_P1"))
				{
					func_700();
				}
				if (func_604(uParam0, "RBT20_ILOGREET", 0))
				{
					iLocal_835 = 2;
				}
			}
			if (iLocal_836 == 1)
			{
				if (iLocal_893 == 0)
				{
					if (func_699("RBT20_IG1_P1"))
					{
						func_700();
					}
					if (func_604(uParam0, "RBT20_ILOANTAG", 0))
					{
						iLocal_835 = 2;
					}
				}
				else
				{
					if (func_699("RBT20_IG1_P1"))
					{
						func_700();
					}
					if (func_604(uParam0, "RBT20_ILOANTAG", 0))
					{
						iLocal_835 = 2;
					}
				}
			}
			break;
		case 2:
			if (func_701())
			{
				func_697();
				iLocal_835 = 3;
			}
			break;
		case 3:
		case 4:
			break;
	}
}

int func_339(int iParam0, var uParam1, var uParam2, char* sParam3)
{
	if (func_480(iParam0, Global_35, 1, 1) > 80f)
	{
		return 0;
	}
	if (func_702(uParam1, iParam0, 1073741824, 1069547520))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			func_703(uParam2, sParam3, 0, 0);
		}
		return 1;
	}
	return 0;
}

void func_340(var uParam0, int iParam1, bool bParam2)
{
	char* sVar0;

	_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
	if (bParam2)
	{
		if (func_477(uParam0->f_330, iParam1))
		{
			bParam2 = false;
		}
	}
	switch (iParam1)
	{
		case 2:
			if (func_704(uParam0->f_65))
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
			func_705(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_706(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 4:
			if (func_477(uParam0->f_329, 1048576))
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
			func_705(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_706(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 8:
			sVar0 = "BNTY_O_HOGA";
			func_705(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_706(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 16:
			if (func_477(uParam0->f_329, 1048576))
			{
				return;
			}
			if (!func_412(uParam0->f_67))
			{
				sVar0 = "BNTY_O_PICKA";
			}
			else
			{
				sVar0 = "BNTY_O_PICKD";
			}
			func_705(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_706(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 64:
			if (func_477(uParam0->f_329, 1048576))
			{
				return;
			}
			sVar0 = "BNTY_O_MOUNT";
			func_705(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_706(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 128:
			if (!func_412(uParam0->f_67))
			{
				sVar0 = "BNTY_O_PICKA";
			}
			else
			{
				sVar0 = "BNTY_O_PICKD";
			}
			func_705(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_706(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 32:
			if (func_477(uParam0->f_329, 1048576))
			{
				return;
			}
			if (!func_412(uParam0->f_67))
			{
				sVar0 = "BNTY_O_RTA";
			}
			else
			{
				sVar0 = "BNTY_O_RTD";
			}
			func_705(uParam0, bParam2, sVar0, &(uParam0->f_325), func_707(uParam0->f_300));
			if (bParam2)
			{
				func_708(sVar0, uParam0);
			}
			break;
		case 256:
			if (func_477(uParam0->f_329, 1048576))
			{
				return;
			}
			if (func_324(uParam0->f_67, 2) && ((PED::IS_PED_FLEEING(uParam0->f_67) || PED::IS_PED_ON_MOUNT(uParam0->f_67)) || PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_67, false)))
			{
				sVar0 = "BNTY_W_DIST_E";
			}
			else
			{
				sVar0 = "BNTY_W_DIST_R";
			}
			func_705(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_706(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 512:
			sVar0 = "BNTY_W_RJL";
			func_705(uParam0, bParam2, sVar0, func_707(uParam0->f_300), 0);
			if (bParam2)
			{
				func_706(MISC::_CREATE_VAR_STRING(10, sVar0, func_707(uParam0->f_300)), 7500, 0, 0, 0, 1);
			}
			break;
		case 1024:
			if (!func_412(uParam0->f_67))
			{
				sVar0 = "BNTY_O_JLA";
			}
			else if (func_709(uParam0))
			{
				sVar0 = "BNTY_O_JLW";
			}
			else
			{
				sVar0 = "BNTY_O_JLD";
			}
			func_705(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_706(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 2048:
			if (func_710(uParam0))
			{
				sVar0 = "BNTY_O_CHIEF";
			}
			else
			{
				sVar0 = "BNTY_O_SHRF";
			}
			func_705(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				func_373(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
		case 4096:
			if (func_710(uParam0))
			{
				sVar0 = "BNTY_R_CHIEF";
			}
			else
			{
				sVar0 = "BNTY_R_SHRF";
			}
			func_705(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				func_373(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
		case 8192:
			sVar0 = "BNTY_O_RWRD";
			func_705(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				func_373(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
	}
	if (bParam2)
	{
		func_481(&(uParam0->f_330), iParam1);
	}
}

void func_341(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_486(((*Global_1347702)[iParam0 /*49*/])->f_15);
	func_481(&iVar0, iParam1);
	func_598(((*Global_1347702)[iParam0 /*49*/])->f_15, iVar0);
}

void func_342(var uParam0)
{
	if (func_711() || uParam0->f_375 == 2)
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
		func_712(uParam0);
	}
}

int func_343(var uParam0, bool bParam1)
{
	func_713(uParam0);
	func_714(uParam0);
	if (func_715(uParam0))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	switch (uParam0->f_59)
	{
		case 0:
			Global_1392235->f_4 = 1;
			func_716(uParam0, 1);
			break;
		case 1:
			if (func_715(uParam0))
			{
				uParam0->f_308 = VOLUME::_0x10157BC3247FF3BA(func_484(uParam0->f_300), 0f, 0f, 0f, 20f, 20f, 20f, func_717());
				func_718(uParam0->f_308, "BountyHuntingRewardVolume", 1, 0, 0, 0, -1082130432);
				if (uParam0->f_300 == 26)
				{
					uParam0->f_72 = PED::ADD_SCENARIO_BLOCKING_AREA(-1813.668f, -353.7011f, 160.4116f, -1811.668f, -351.7011f, 162.4116f, false, 15);
				}
				uParam0->f_309 = VOLUME::_0x10157BC3247FF3BA(func_719(uParam0->f_300), 0f, 0f, 0f, 4f, 4f, 4f, "Scenario Blocking");
				uParam0->f_73 = PED::_0x4C39C95AE5DB1329(uParam0->f_309, 0, 15);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 1, 0);
				if (!Global_1935630->f_12)
				{
					if (func_720())
					{
						func_721(uParam0, Global_35, "John");
					}
					else
					{
						func_721(uParam0, Global_35, "Arthur");
					}
				}
				func_722(uParam0, 1);
				func_723(uParam0);
				func_724(uParam0->f_300);
				func_725(uParam0->f_300);
				func_716(uParam0, 2);
			}
			break;
		case 2:
			if (func_726(uParam0))
			{
				func_727(uParam0);
				func_712(uParam0);
				func_716(uParam0, 3);
			}
			break;
		case 3:
			if (bParam1)
			{
				func_728(uParam0);
			}
			func_729(uParam0);
			func_730(uParam0);
			if (func_203(Global_36, func_484(uParam0->f_300), 20f, 1))
			{
				func_712(uParam0);
			}
			if (func_731(uParam0))
			{
				func_727(uParam0);
				func_716(uParam0, 4);
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

void func_344(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_732(Global_1393447, 1);
	func_733();
	func_734();
	func_735((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_260() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_736();
		if (iParam1 == -1)
		{
			if (func_737(iParam0, 1))
			{
				func_514(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_737(iParam0, 2))
			{
				func_514(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_737(iParam0, 4))
			{
				func_514(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_738(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_515(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_515((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

int func_345(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
	{
		func_728(uParam0);
	}
	if (func_739(uParam0->f_306, Global_36))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 328, true);
	}
	func_713(uParam0);
	func_729(uParam0);
	func_740(uParam0);
	func_714(uParam0);
	func_730(uParam0);
	if (func_715(uParam0))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	if (uParam0->f_60 >= 4)
	{
		func_741(uParam0);
	}
	switch (uParam0->f_60)
	{
		case 0:
			break;
		case 1:
			if (func_742(uParam0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_67, false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_67, 253, true);
				func_743(uParam0, 2);
			}
			break;
		case 2:
			func_744(uParam0);
			EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
			func_745(uParam0, 10);
			func_258(&(uParam0->f_364));
			uParam0->f_367 = 0;
			func_427(uParam0->f_306);
			if (TASK::IS_PED_SCENARIO_REACT_LOOKING(uParam0->f_69, 1))
			{
				TASK::_0x541E5B41DCA45828(uParam0->f_69, 1, 0);
			}
			if (!PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_69, uParam0->f_371))
			{
				func_746(uParam0);
			}
			if (func_747(uParam0->f_65) != 0)
			{
				COMPENDIUM::COMPENDIUM_GANG_BOUNTY_CAPTURED(func_747(uParam0->f_65));
			}
			func_743(uParam0, 3);
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
			{
				if (func_748(uParam0))
				{
					if (func_749(uParam0))
					{
						TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
						func_258(&(uParam0->f_312));
						func_229(&(uParam0->f_318));
						uParam0->f_361 = 1;
						func_743(uParam0, 4);
					}
				}
				else if (!uParam0->f_367)
				{
					if (func_686(&(uParam0->f_364)) > 10f || !func_641(Global_35, func_750(uParam0->f_300, uParam0->f_65), 30f, 1, 1))
					{
						func_340(uParam0, 2048, 1);
						uParam0->f_367 = 1;
						func_229(&(uParam0->f_364));
					}
				}
			}
			break;
		case 4:
			if (func_479(&(uParam0->f_312)) > 2f || func_751(uParam0))
			{
				if (!func_477(uParam0->f_328, 128))
				{
					if (func_752(uParam0))
					{
						func_753(100, 1);
						func_258(&(uParam0->f_318));
						func_481(&(uParam0->f_328), 128);
					}
				}
				else if (!func_477(uParam0->f_329, 256))
				{
					if (!func_300(Global_35, -76381094) && !func_641(Global_35, func_750(uParam0->f_300, uParam0->f_65), 2f, 1, 1))
					{
						func_754(uParam0);
					}
				}
			}
			if (uParam0->f_63 != 11)
			{
				func_755(uParam0);
			}
			else
			{
				if (func_756(uParam0))
				{
					func_743(uParam0, 5);
				}
				if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_306, true, 0))
				{
					func_743(uParam0, 6);
				}
			}
			break;
		case 5:
			if (!TASK::DOES_SCENARIO_POINT_EXIST(TASK::_0xD04241BBF6D03A5E(Global_35)))
			{
				func_258(&(uParam0->f_318));
				func_743(uParam0, 6);
			}
			break;
		case 6:
			if (ANIMSCENE::_0xD8254CB2C586412B((uParam0->f_30[0 /*14*/])->f_1, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
				{
					if (!func_300(uParam0->f_69, 150319005))
					{
						TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
					}
				}
				func_745(uParam0, 12);
				func_757(uParam0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_346(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_398(iParam0);
}

int func_347(int iParam0)
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

int func_348(var uParam0)
{
	return uParam0 & 31;
}

int func_349(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_350(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

void func_351(var uParam0)
{
	*uParam0 = 0;
}

void func_352(int iParam0)
{
	if (func_758(179) || func_758(180))
	{
		if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			if (((*Global_1347702)[iParam0 /*49*/])->f_37 == Global_1905944->f_5698)
			{
				func_759(1);
			}
		}
	}
	if (func_760(179))
	{
		func_761(179);
	}
	if (func_760(180))
	{
		func_761(180);
	}
}

void func_353(int iParam0, bool bParam1, vector3 vParam2)
{
	if (!func_201(iParam0))
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
	func_352(iParam0);
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 == 0)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		func_232(iParam0, func_406(iParam0), 0, 1);
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_18 > -1f)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		func_232(iParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		func_232(iParam0, vParam2, 0, 0);
	}
	MAP::BLIP_ADD_MODIFIER(((*Global_1347702)[iParam0 /*49*/])->f_37, 724623647);
	func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
}

void func_354(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_247((*uParam1)[iVar0 /*16*/], 1048576))
		{
			switch (iParam0)
			{
				case 1:
				case 2:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 5)
					{
						func_254((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
				case 3:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 3)
					{
						func_254((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_355(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_356(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_357(int iParam0)
{
	if (!func_355(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

int func_358()
{
	return &Global_1899515;
}

void func_359(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_23117[iParam0 /*11*/])->f_2 = iParam1;
		return;
	}
	(Global_1058888->f_40615[iParam0 /*11*/])->f_2 = iParam1;
}

void func_360(int iParam0, int iParam1)
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

void func_361(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (&Global_23117[iParam0 /*11*/] - (Global_23117[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0 /*11*/] = (&Global_1058888->f_40615[iParam0 /*11*/] - (Global_1058888->f_40615[iParam0 /*11*/] && iParam1));
}

void func_362(int iParam0)
{
	if (!func_355(iParam0))
	{
		return;
	}
	if (func_212(iParam0))
	{
		func_762(iParam0);
	}
	else
	{
		func_763(iParam0);
	}
}

int func_363(int iParam0)
{
	iParam0 = func_385(iParam0);
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

int func_364(int iParam0)
{
	int iVar0;

	iParam0 = func_385(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_363(iParam0))
	{
		return 0;
	}
	iVar0 = func_130(iParam0);
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

void func_365(int iParam0)
{
	int iVar0;

	iParam0 = func_385(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_363(iParam0))
	{
		return;
	}
	iVar0 = func_130(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::_SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_366(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_764(iParam0) == 1 && iParam7)
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
	if ((iParam1 || bParam6) || func_200() != -1)
	{
		(Global_17503.f_42[iParam0 /*8*/])->f_4 = 0;
	}
	(Global_17503.f_42[iParam0 /*8*/])->f_4 = ((Global_17503.f_42[iParam0 /*8*/])->f_4 + iVar0);
}

void func_367(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam3 != 0)
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam3);
		if (iVar0 != 0)
		{
			func_765(iParam0, iParam1, iVar0);
			func_767(iParam0, iParam1, func_766(iParam3));
		}
	}
	else if (iParam4 != 0)
	{
		func_765(iParam0, iParam1, iParam4);
		func_767(iParam0, iParam1, func_766(iParam3));
	}
	func_768(iParam0, iParam1, iParam2);
	func_770(iParam0, iParam1, func_769(1));
	func_771(iParam0, iParam1, func_358());
}

void func_368(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_201(iVar0))
		{
			if (func_120(iVar0, 4))
			{
				func_369(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_369(int iParam0, bool bParam1)
{
	if (!func_120(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_263(iParam0), func_264(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_263(iParam0), func_264(iParam0), 2, "");
		func_265(iParam0, 16);
	}
	else
	{
		if (func_120(iParam0, 8))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_263(iParam0), func_264(iParam0), 1, "");
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_263(iParam0), func_264(iParam0), 0, "");
		}
		func_121(iParam0, 16);
	}
}

void func_370(int iParam0, bool bParam1)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_120(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_263(iParam0), func_264(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_120(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_263(iParam0), func_264(iParam0), 1, "");
		}
		func_265(iParam0, 8);
	}
	else
	{
		if (func_120(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_263(iParam0), func_264(iParam0), 0, "");
		}
		func_121(iParam0, 8);
	}
}

void func_371(int iParam0, char* sParam1, int iParam2, float fParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	sVar0 = func_572(iParam8, sParam1, sParam4, sParam5, sParam6, sParam7);
	if (iParam2 == 1)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	func_573(iParam0, sParam1, sVar0, fParam3);
}

int func_372(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return (func_772(sParam0, 0, 0, -1, -1, 0) && func_773());
}

int func_373(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_706(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_572(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_706(sVar0, iParam1, 0, 0, 1, 1);
}

int func_374()
{
	if (func_200() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_375(int iParam0, int iParam1, int iParam2)
{
	func_774(iParam0, iParam2);
	if (func_775(iParam0))
	{
		func_776(((*Global_1347702)[iParam0 /*49*/])->f_15);
	}
	if (iParam1 == 1)
	{
		if (func_174(((*Global_1347702)[iParam0 /*49*/])->f_15))
		{
			func_175(((*Global_1347702)[iParam0 /*49*/])->f_15, 0, 2);
		}
	}
}

void func_376(int iParam0)
{
	func_379();
	if (!func_201(iParam0))
	{
		return;
	}
	Global_40.f_1093 = Global_1347702[iParam0 /*49*/];
}

int func_377(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 2097152))
		{
			if (func_492(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 0;
			}
		}
		else if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 256))
		{
			if (!func_492(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 0;
			}
		}
	}
	return func_777(iParam0);
}

int func_378(int iParam0)
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
	else if (!func_778(iParam0))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(((*Global_1347702)[iParam0 /*49*/])->f_43, false, false), func_69(((*Global_1347702)[iParam0 /*49*/])->f_35));
	if (fVar0 > (7.5f * 7.5f))
	{
		return 0;
	}
	return 1;
}

void func_379()
{
	int iVar0;
	int iVar1;

	iVar0 = Global_40.f_1093;
	Global_40.f_1093 = -1;
	if (func_779(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < &Global_1347702)
		{
			if (func_201(iVar1) && Global_1347702[iVar1 /*49*/] == iVar0)
			{
				if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iVar1 /*49*/])->f_37))
				{
					func_115(iVar1, 0);
					func_232(iVar1, func_69(iVar1), 0, 0);
				}
			}
			iVar1++;
		}
	}
}

void func_380(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 4))
	{
		iVar0 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar1 = 908516622;
	}
	else
	{
		iVar2 = func_571(iParam0, 1);
		iVar0 = iVar2;
		iVar1 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 67108864))
	{
		func_780("MISSION_COMPLETE", &(((*Global_1347702)[iParam0 /*49*/])->f_3), iVar1, iVar0, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, func_264(iParam0));
		func_781("MISSION_COMPLETE", &(((*Global_1347702)[iParam0 /*49*/])->f_3), iVar1, iVar0, 1433015236, "MISSION_COMPLETE_DETAILS", -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
	}
}

var func_381(int iParam0)
{
	char[] cVar0[8];

	if (!func_57(iParam0))
	{
		return cVar0;
	}
	switch (func_110(iParam0))
	{
		case 1:
			cVar0 = ((*Global_1835011)[func_782(iParam0) /*74*/])->f_8;
			break;
		case 8:
			cVar0 = ((*Global_1347702)[func_111(iParam0) /*49*/])->f_3;
			break;
		case 11:
			if (iParam0 == func_496(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_382(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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

	if (!func_57(iParam0))
	{
		return;
	}
	if (func_346(iParam0) == 4)
	{
		func_783(iParam0, func_358());
		if (!func_398(iParam0) == 5 && !func_398(iParam0) == 6)
		{
			if (bParam3)
			{
				func_402(iParam0, 6);
			}
			else
			{
				func_402(iParam0, 5);
			}
			func_400(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_198(1);
	}
	iVar0 = func_110(iParam0);
	bVar1 = func_200() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_784(0, 2);
		if (!bVar1 && bParam1)
		{
			func_785();
		}
	}
	else
	{
		func_401(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_786(iParam0);
	}
	else
	{
		Var2 = { func_787(-1876607090) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_60(32768))
		{
			Var4 = { func_787(773573510) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_398(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_111(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[76 /*74*/])->f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_111(iParam0) /*74*/])->f_8), true);
						}
					}
					else if ((func_111(iParam0) != 95 && func_111(iParam0) != 82) && !func_31(((*Global_1347702)[func_111(iParam0) /*49*/])->f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1347702)[func_111(iParam0) /*49*/])->f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_111(iParam0) /*74*/])->f_8), true);
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
		func_789(func_111(iParam0), iVar6, func_788());
	}
	else if (iVar0 == 8)
	{
		func_790(func_111(iParam0), iVar6, func_788(), func_374());
	}
	if (!func_398(iParam0) == 5 && !func_398(iParam0) == 6)
	{
		iVar9 = func_791(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_792(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_793(func_111(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_794((iVar10 - 20), 0, iVar10);
					iVar11 = func_794((iVar11 - 10), 0, iVar11);
				}
				func_403(1);
				func_404(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_404(45, 0, 1);
				break;
			case 8:
				iVar10 = func_795(func_111(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_794((iVar10 - 20), 0, iVar10);
					iVar11 = func_794((iVar11 - 10), 0, iVar11);
				}
				func_404(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				if (func_796(func_111(iParam0)))
				{
					func_797(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_404(120, 0, 1);
				break;
			case 2:
				func_404(120, 0, 1);
				break;
			case 6:
				func_404(func_798(func_112(iParam0)), 0, 1);
				break;
			case 5:
				func_404(120, 0, 1);
				break;
		}
	}
	func_434(iParam0, 1);
	func_783(iParam0, func_358());
	func_400(iParam0);
	if ((!func_398(iParam0) == 0 && bParam1) && func_200() == -1)
	{
		iVar12 = func_431(iParam0);
		if (iVar12 != -1)
		{
			func_432(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_433();
			if (iVar12 != -1)
			{
				func_432(0);
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
				switch (func_111(iParam0))
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
				if (func_201(func_111(iParam0)) && func_31(((*Global_1347702)[func_111(iParam0) /*49*/])->f_12, 4))
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
				if (func_111(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_799();
				}
				break;
			case 8:
				if (func_111(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_799();
				}
				break;
		}
	}
	if (!func_398(iParam0) == 5 && !func_398(iParam0) == 6)
	{
		if (bParam3)
		{
			func_402(iParam0, 6);
		}
		else
		{
			func_402(iParam0, 5);
		}
		func_400(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_111(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::MAP_DISCOVER_REGION(-1753910767);
						break;
					case 1:
						func_800();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_801(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_801(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_801(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_801(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_801(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_801(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_801(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_801(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_801(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_801(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_802(-1267972061);
						func_801(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_802(1619534881);
						func_801(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_802(-755457379);
						func_801(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_802(1015404643);
						func_801(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_802(-1724192342);
						func_801(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_802(1310680212);
						func_801(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_802(-566881549);
						func_801(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_802(-1753730528);
						func_801(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_802(147796381);
						func_801(-378547623, 1, 1, 0, 0,