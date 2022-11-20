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
	vector3 vLocal_15 = { 0f, 0f, 0f };
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26[5] = { 0, 0, 0, 0, 0 };
	char* sLocal_32[5] = { NULL, NULL, NULL, NULL, NULL };
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	struct<82> Local_40 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0 } ;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	struct<85> Local_125[3];
	int iLocal_381[4] = { 0, 0, 0, 0 };
	int iLocal_386 = 0;
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
	struct<341> Local_402 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = -1;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	int iLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = -1;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 1097859072;
	var uLocal_805 = 1000;
	var uLocal_806 = 1067450368;
	var uLocal_807 = 5000;
	var uLocal_808 = 42;
	var uLocal_809 = 1103626240;
	var uLocal_810 = 1077936128;
	var uLocal_811 = 1106247680;
	var uLocal_812 = 1103101952;
	var uLocal_813 = 1097859072;
	var uLocal_814 = 1103626240;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = -1;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 1097859072;
	var uLocal_833 = 1000;
	var uLocal_834 = 1067450368;
	var uLocal_835 = 5000;
	var uLocal_836 = 42;
	var uLocal_837 = 1103626240;
	var uLocal_838 = 1077936128;
	var uLocal_839 = 1106247680;
	var uLocal_840 = 1103101952;
	var uLocal_841 = 1097859072;
	var uLocal_842 = 1103626240;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	int iLocal_845[48] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_894[5] = { 0, 0, 0, 0, 0 };
	char* sLocal_900[5] = { NULL, NULL, NULL, NULL, NULL };
	int iLocal_906 = 0;
	int iLocal_907 = 0;
	int iLocal_908 = 0;
	int iLocal_909[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_916[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<2606> Var0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_15 = { -1993.595f, 426.5243f, 120.4816f };
	iLocal_18 = joaat("g_m_m_uniranchers_01");
	iLocal_19 = joaat("u_m_m_bht_laramiesleeping");
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
	func_187(uParam0, 180f);
	func_188(uParam0, 180f);
	Local_40.f_78 = { -1995.813f, 424.1472f, 120.5083f };
	Local_40.f_81 = 240f;
	(Local_125[0 /*85*/])->f_78 = { -1999.078f, 421.6465f, 120.5083f };
	(Local_125[0 /*85*/])->f_81 = 320f;
	(Local_125[1 /*85*/])->f_78 = { -1998.768f, 424.2578f, 120.5083f };
	(Local_125[1 /*85*/])->f_81 = 52.5f;
	(Local_125[2 /*85*/])->f_78 = { -1990.106f, 429.9782f, 120.5081f };
	(Local_125[2 /*85*/])->f_81 = 325f;
	sLocal_900[0] = "RBT03_START";
	sLocal_900[1] = "RBT03_ALERTED";
	sLocal_900[2] = "RBT03_STOP";
	sLocal_900[3] = "RBT03_FAIL";
	sLocal_900[4] = "RBT03_RESTART_1";
	func_189();
	if (!VOLUME::DOES_VOLUME_EXIST(&(iLocal_909[0])))
	{
		iLocal_909[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_15, 0f, 0f, 0f, 12f, 12f, 5f, "RBTG3_VOLUME_CAMP_BLIP_VOLUME");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(&(iLocal_909[1])))
	{
		iLocal_909[1] = VOLUME::_0x10157BC3247FF3BA(vLocal_15, 0f, 0f, 0f, 18f, 18f, 8f, "RBTG3_VOLUME_CAMP_DEFENSIVE_VOLUME");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(&(iLocal_909[3])))
	{
		iLocal_909[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1999.155f, 424.54f, 121.9768f, 0f, 0f, -40.75f, 1.5f, 1.5f, 1.5f, "RBTG3_VOLUME_PED_GANG1_VOLUME");
		(Local_125[1 /*85*/])->f_3 = &iLocal_909[3];
	}
	func_190(&uLocal_787);
	func_191(&uLocal_787);
	func_192(&uLocal_787);
	func_193(&uLocal_787, 0);
	func_194(&uLocal_787, 20f);
	func_195(&uLocal_787, 10f);
	func_196(&uLocal_787, 0);
	func_197(&uLocal_787, 0);
	func_198(&uLocal_787, 0, 0, 0);
	func_190(&uLocal_815);
	func_191(&uLocal_815);
	func_192(&uLocal_815);
	func_193(&uLocal_815, 1);
	func_194(&uLocal_815, 20f);
	func_195(&uLocal_815, 10f);
	func_196(&uLocal_815, 1);
	func_197(&uLocal_815, 1);
	func_198(&uLocal_815, 1, 1, 1);
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
	func_199(uParam0);
}

void func_41(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_200(&(uParam0->f_41), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_201(&(uParam0->f_41));
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
	func_202(uParam0, 0);
	func_41(uParam0, iLocal_18, 1);
	func_41(uParam0, iLocal_19, 1);
	func_41(uParam0, 1230359523, 1);
	func_41(uParam0, 96930969, 1);
	func_41(uParam0, -1261814606, 1);
	func_41(uParam0, joaat("p_stool02x"), 1);
	func_41(uParam0, joaat("p_bottlebeer01x"), 1);
	func_41(uParam0, joaat("p_stoolfolding01x"), 1);
	AUDIO::PREPARE_MUSIC_EVENT(&(sLocal_900[0]));
	AUDIO::PREPARE_MUSIC_EVENT(&(sLocal_900[1]));
	AUDIO::PREPARE_MUSIC_EVENT(&(sLocal_900[2]));
	AUDIO::PREPARE_MUSIC_EVENT(&(sLocal_900[3]));
	AUDIO::PREPARE_MUSIC_EVENT(&(sLocal_900[4]));
	STREAMING::REQUEST_PTFX_ASSET();
	func_203();
}

void func_43(var uParam0, int iParam1)
{
	if (func_204(uParam0) == iParam1)
	{
		return;
	}
	func_205(uParam0, uParam0->f_168, iParam1);
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
	if ((func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_6(uParam0->f_172, 1024)) && !func_206(uParam0->f_174))
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

	switch (func_207(&iVar0))
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
	func_208(bParam0);
	func_209(bParam0);
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
	if (func_210(uParam0, uParam0->f_168))
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
	if (func_211() != -1)
	{
		return 0;
	}
	if (!func_212(iParam0))
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
			Var1 = { -2001.052f, 402.6192f, 123.0865f };
			Var1.f_3 = 0f;
			break;
		case 1:
			Var1 = { -1996.416f, 426.985f, 120.5083f };
			Var1.f_3 = 210f;
			break;
		case 2:
			Var1 = { -1800.281f, -352.952f, 163.0476f };
			Var1.f_3 = 68.0831f;
			break;
		case 3:
			Var1 = { -1804.004f, -351.7943f, 163.1248f };
			Var1.f_3 = 250.6144f;
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_213(*uParam0, uParam0->f_3);
}

void func_63(var uParam0, int iParam1)
{
	uParam0->f_173 = (uParam0->f_173 - (uParam0->f_173 && iParam1));
}

int func_64(var uParam0)
{
	if (iLocal_786 == 0)
	{
		if (fLocal_38 > 150f)
		{
			AUDIO::TRIGGER_MUSIC_EVENT(&(sLocal_900[3]));
			StringCopy(&(uParam0->f_2578), "RBT03_F_LEFT_C", 24);
			return 1;
		}
	}
	else if (func_214(&Local_402, 1120403456, 1125515264))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(&(sLocal_900[3]));
		StringCopy(&(uParam0->f_2578), func_215(Local_402.f_64), 24);
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
	func_216(uParam0);
	func_217(uParam0);
	PED::SET_PED_RESET_FLAG(Global_35, 362, true);
	if (((func_218(PLAYER::PLAYER_ID(), Local_40) || func_218(PLAYER::PLAYER_ID(), &(Local_125[0 /*85*/]))) || func_218(PLAYER::PLAYER_ID(), &(Local_125[1 /*85*/]))) || func_218(PLAYER::PLAYER_ID(), &(Local_125[2 /*85*/])))
	{
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 47, 0);
	}
	else
	{
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 47, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_40) && !ENTITY::IS_ENTITY_DEAD(Local_40))
	{
		if (((func_218(PLAYER::PLAYER_ID(), Local_40) || PED::_0xD453BB601D4A606E(Local_40)) || PED::IS_PED_IN_COMBAT(Local_40, 0)) || PED::IS_PED_HOGTIED(Local_40))
		{
			if (func_219(Local_40.f_6, 134217728))
			{
				MISC::_0xA08111B053D84B4D(Local_40);
				func_220(&(Local_40.f_6), 134217728);
			}
		}
		else if (PED::_0x34D6AC1157C8226C(Local_40, 1774730608))
		{
			if (!func_219(Local_40.f_6, 134217728))
			{
				MISC::_0x7FA58CED69405F9A(Local_40, 3);
				func_221(&(Local_40.f_6), 134217728);
			}
		}
		else if (func_219(Local_40.f_6, 134217728))
		{
			MISC::_0xA08111B053D84B4D(Local_40);
			func_220(&(Local_40.f_6), 134217728);
		}
	}
	fLocal_38 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_15, true);
	fLocal_39 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_222(Local_402.f_300), true);
}

Vector3 func_69(int iParam0)
{
	vector3 vVar0;

	if (!func_212(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_223(iParam0, &vVar0))
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
		if (func_57(iVar0) && func_224(uParam0, iVar0))
		{
		}
		else
		{
			func_51(uParam0, 12);
			return 1;
		}
	}
	if (func_225(uParam0->f_174))
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
	if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_206(uParam0->f_174))
	{
		func_226(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 16384);
		func_51(uParam0, 3);
		return 1;
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 8388608 != 0)
	{
		iVar1 = func_227(uParam0->f_174);
		if (iVar1 != -1)
		{
			if (func_228(iVar1))
			{
				if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
				{
					func_178(uParam0->f_174, 32768);
				}
				func_51(uParam0, 5);
				return 1;
			}
			else if (func_229(iVar1))
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
		if (func_228(((*Global_1347702)[uParam0->f_174 /*49*/])->f_45))
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
			iVar2 = func_230();
			if (!func_231(iVar2, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_46))
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
		if (func_232(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			func_178(uParam0->f_174, 16384);
			func_51(uParam0, 9);
			return 1;
		}
	}
	if (uParam0->f_172 & 256 != 0 && !func_233(uParam0->f_174, 1, 1, 0, 0))
	{
		func_51(uParam0, 10);
		return 1;
	}
	if (func_234(uParam0) || func_235(uParam0->f_174, uParam0->f_743))
	{
		func_178(uParam0->f_174, 1024);
		func_51(uParam0, 11);
		return 1;
	}
	if (!func_236(uParam0) && func_237(uParam0->f_743))
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

	func_238();
	func_239(uParam0);
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
				func_240(uParam0->f_174, 1);
			}
		}
		if (func_6(uParam0->f_172, 67108864))
		{
			func_54(1);
			func_2(&(uParam0->f_172), 67108864);
		}
		func_241(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_ENABLE_HUD_CONTEXT_THIS_FRAME(Global_35, 262143);
			func_242(Global_35);
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
		func_243(uParam0->f_174);
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
		func_244(uParam0);
	}
	func_161(uParam0);
	func_245(0);
	func_102(uParam0, 0);
	func_43(uParam0, 4);
	func_2(&(uParam0->f_172), 8);
	func_176(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 1024);
	func_176(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
	func_47(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 4);
	func_246(&(uParam0->f_2585));
	func_247(uParam0);
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
			fVar4 = func_248(uParam0->f_174);
			if ((((*Global_1347702)[uParam0->f_174 /*49*/])->f_36 != -1822497728 || func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 32)) || fVar3 < (fVar4 * fVar4))
			{
				func_249(uParam0->f_174, vVar0, 1, 0);
			}
		}
	}
	else
	{
		func_250(uParam0->f_174, fVar3);
		func_251(uParam0->f_174, vVar0, fVar3);
		func_252(uParam0->f_174);
		func_253(uParam0->f_174);
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
			func_254(uParam0);
		}
		else
		{
			func_255(uParam0);
		}
	}
	else if (uParam0->f_177 == 4)
	{
		if (func_45(uParam0))
		{
			if (func_6(uParam0->f_172, 16))
			{
				cVar0 = { func_256() };
				Var8 = { func_257(&(uParam0->f_206)) };
				if (!MISC::ARE_STRINGS_EQUAL(&Var8, &cVar0))
				{
					func_258(&(uParam0->f_206));
					func_259(&(uParam0->f_206), &cVar0);
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
	if (func_260(uParam0->f_206.f_5))
	{
		uParam0->f_206.f_5 = { func_69(uParam0->f_174) };
	}
	bVar0 = func_261(uParam0);
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
		if (func_262(&(uParam0->f_206), &(uParam0->f_2575), bVar0, bVar1))
		{
			if (!func_6(uParam0->f_172, 1))
			{
				func_263(uParam0);
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
			if (func_264(uParam0->f_2605[iVar0 /*16*/], 1048576))
			{
				if (func_265(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_266(uParam0->f_2605[iVar0 /*16*/]);
				}
				else if (func_267(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_268(uParam0->f_2605[iVar0 /*16*/]);
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
			if (func_264(uParam0->f_2605.f_241[iVar0 /*16*/], 1048576))
			{
				if (func_269(uParam0, uParam0->f_2605.f_241[iVar0 /*16*/], iParam1))
				{
					func_270(uParam0->f_2605.f_241[iVar0 /*16*/]);
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
			if (func_264(uParam0->f_2605.f_482[iVar0 /*16*/], 1048576))
			{
				if (func_269(uParam0, uParam0->f_2605.f_482[iVar0 /*16*/], iParam1))
				{
					if (func_271(uParam0->f_2605.f_482[iVar0 /*16*/], 0))
					{
						if (func_264(uParam0->f_2605.f_482[iVar0 /*16*/], 4))
						{
							func_272(&(uParam0->f_2605));
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
	if (func_273(&(uParam0->f_2605), &cVar0, 1, -1, 0, 1))
	{
		func_1(&(uParam0->f_172), 32);
		return 1;
	}
	return 0;
}

bool func_79(var uParam0)
{
	return func_274(*uParam0, 1);
}

void func_80(var uParam0, int iParam1)
{
	if (iParam1 || !func_79(uParam0))
	{
		func_275(uParam0);
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
	if (func_276(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_277() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
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
	if (func_278(uParam0) && func_279(uParam0))
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
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_280(uParam0->f_174), func_281(uParam0->f_174)))
		{
			func_282(uParam0->f_174, 128);
		}
		else
		{
			func_121(uParam0->f_174, 128);
		}
		if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
		{
			if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_280(uParam0->f_174), func_281(uParam0->f_174)))
			{
				func_283(uParam0->f_174);
				func_284(uParam0->f_174);
			}
		}
		else
		{
			func_285(Global_1347702[uParam0->f_174 /*49*/]);
			func_283(uParam0->f_174);
		}
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(func_280(uParam0->f_174), func_281(uParam0->f_174)))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_280(uParam0->f_174), func_281(uParam0->f_174), 0, "");
		}
	}
	if (!func_174(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
	{
		if (!func_286(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
		{
			func_287(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1);
		}
		func_288(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1, 1);
		func_289(Global_1935630, 8);
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
	func_290(uParam0);
	func_1(&(uParam0->f_172), 8);
	if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 8192))
	{
		func_54(0);
		LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
		LAW::_0x292AD61A33A7A485();
		func_291(1, 16384, 1);
		func_1(&(uParam0->f_172), 67108864);
	}
	func_119(uParam0, 1, 0);
	func_241(1);
	func_245(1);
	func_292();
	func_163(uParam0);
	func_164(uParam0->f_174);
	func_165(uParam0->f_174);
	func_293(uParam0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	func_294(1);
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
	func_295(uParam0);
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
	if (func_296(uParam0))
	{
		iVar5 = func_95(uParam0);
	}
	TELEMETRY::_TELEMETRY_MISSION_STARTED(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), 0, iVar5, func_32(uParam0, 64));
	if (uParam0->f_174 != func_19())
	{
		func_297(uParam0, func_61(0), func_61(1), 0, 1, 0);
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
		if (uParam0->f_171 != 0 || func_298(uParam0))
		{
			if (func_299(uParam0))
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
		return func_300();
	}
	return -1;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	func_221(&iLocal_20, 1);
	switch (iVar0)
	{
		case 0:
			PED::_0x7DE9692C6F64CFE8(Global_35, true, 0, 1);
			PED::SET_PED_STEALTH_MOVEMENT(Global_35, true, 0, 1);
			PED::_0x437C08DB4FEBE2BD(Global_35, "Stealth", 1f, -1);
			PED::_0x437C08DB4FEBE2BD(Global_35, "Cautious", 1f, -1);
			if (func_301(&uLocal_396))
			{
				func_302(uParam0->f_174, 1);
				func_297(uParam0, func_61(0), func_61(1), 0, 1, 0);
				AUDIO::TRIGGER_MUSIC_EVENT(&(sLocal_900[4]));
				iLocal_786 = 0;
				func_303(1, 1);
				return 7;
			}
			break;
		case 1:
			if (func_301(&uLocal_396))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_40))
				{
					return 2;
				}
				if (func_304(uParam0->f_174, 1))
				{
					STREAMING::REQUEST_ANIM_DICT("script_common@dead@male");
					if (STREAMING::HAS_ANIM_DICT_LOADED("script_common@dead@male"))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_40) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_40, "script_common@dead@male", "facedown_01", 1))
						{
							ENTITY::_0x203BEFFDBE12E96A(Local_40, -1994.792f, 423.7938f, 120f, 190f, 1, 0, 1);
							ENTITY::_0x9587913B9E772D29(Local_40, 0);
							TASK::TASK_PLAY_ANIM(Local_40, "script_common@dead@male", "facedown_01", 1000f, -8f, -1, 131072, 0, 0, 0, 0, 0, 0);
							PED::_0x2208438012482A1A(Local_40, false, false);
						}
					}
					else
					{
						return 2;
					}
				}
				else
				{
					TASK::_0xFF745B0346E19E2C(-2146271366);
					if (TASK::_0xB8F52A3F84A7CC59(-2146271366))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_40) && !PED::IS_PED_HOGTIED(Local_40))
						{
							ENTITY::_0x203BEFFDBE12E96A(Local_40, -1994.792f, 423.7938f, 120f, 190f, 1, 0, 1);
							ENTITY::_0x9587913B9E772D29(Local_40, 0);
							TASK::_0xF0B4F759F35CC7F5(Local_40, -2146271366, 0, 0, 0);
							PED::_0x2208438012482A1A(Local_40, false, false);
							func_305(&Local_40, 9, 0, 0);
						}
					}
					else
					{
						return 2;
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_40) && !PED::IS_PED_HOGTIED(Local_40))
				{
					return 2;
				}
				func_297(uParam0, func_61(1), func_61(2), 1, 2, 0);
				iLocal_894[0] = 1;
				iLocal_894[1] = 1;
				AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
				func_221(&((Local_125[0 /*85*/])->f_6), 1);
				func_221(&((Local_125[1 /*85*/])->f_6), 1);
				func_221(&((Local_125[2 /*85*/])->f_6), 1);
				func_221(&(Local_40.f_6), 8);
				func_221(&(Local_40.f_6), 4);
				func_221(&iLocal_20, 4096);
				func_221(&iLocal_20, 16384);
				iLocal_786 = 1;
				func_303(1, 1);
				return 7;
			}
			break;
		case 2:
			if (func_301(&uLocal_396))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_40))
				{
					return 2;
				}
				if (func_304(uParam0->f_174, 1))
				{
					func_306(Local_40, 1, 0);
					if (PED::IS_PED_RAGDOLL(Local_40))
					{
						return 2;
					}
				}
				if (ENTITY::IS_ENTITY_DEAD(Local_40))
				{
					TASK::_0xFF745B0346E19E2C(1361896662);
					PED::_0xF7EA250B9A919E03(2124312430, Global_35);
					if (TASK::_0xB8F52A3F84A7CC59(1361896662) && PED::_0x854BC9B1A1CCD034(2124312430, Global_35))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_40, -2108652971, 0) != 0 && TASK::GET_SCRIPT_TASK_STATUS(Local_40, -2108652971, 0) != 1)
						{
							ENTITY::SET_ENTITY_COORDS(Local_40, -1800.281f, -352.952f, 163.0476f, true, false, true, true);
							ENTITY::_0x9587913B9E772D29(Local_40, 0);
							WEAPON::REMOVE_ALL_PED_WEAPONS(Local_40, true, true);
							TASK::_0xF0B4F759F35CC7F5(Local_40, 1361896662, Global_35, 0, 0);
							PED::_0x2208438012482A1A(Local_40, true, false);
							PED::_0x2208438012482A1A(Global_35, true, false);
							func_305(&Local_40, 9, 0, 0);
						}
					}
					else
					{
						return 2;
					}
				}
				else
				{
					TASK::_0xFF745B0346E19E2C(-2146271366);
					PED::_0xF7EA250B9A919E03(2124312430, Global_35);
					if (TASK::_0xB8F52A3F84A7CC59(-2146271366) && PED::_0x854BC9B1A1CCD034(2124312430, Global_35))
					{
						if (!func_307(Local_40, -2108652971))
						{
							ENTITY::SET_ENTITY_COORDS(Local_40, -1800.281f, -352.952f, 163.0476f, true, false, true, true);
							ENTITY::_0x9587913B9E772D29(Local_40, 0);
							WEAPON::REMOVE_ALL_PED_WEAPONS(Local_40, true, true);
							TASK::_0xF0B4F759F35CC7F5(Local_40, -2146271366, Global_35, 0, 0);
							PED::_0x2208438012482A1A(Local_40, true, false);
							PED::_0x2208438012482A1A(Global_35, true, false);
							func_305(&Local_40, 9, 0, 0);
						}
					}
					else
					{
						return 2;
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_40) && !PED::IS_PED_HOGTIED(Local_40))
				{
					return 2;
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_40, -2108652971, 0) != 1)
				{
					return 2;
				}
				if (PED::_0x09B83E68DE004CD4(Local_40) == 0)
				{
					return 2;
				}
				func_297(uParam0, func_61(2), func_61(3), 2, 3, 0);
				iLocal_894[0] = 1;
				iLocal_894[1] = 1;
				AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
				func_221(&((Local_125[0 /*85*/])->f_6), 1);
				func_221(&((Local_125[1 /*85*/])->f_6), 1);
				func_221(&((Local_125[2 /*85*/])->f_6), 1);
				func_221(&(Local_40.f_6), 8);
				func_221(&(Local_40.f_6), 4);
				func_221(&iLocal_20, 4096);
				func_221(&iLocal_20, 16384);
				func_221(&iLocal_20, 32768);
				iLocal_786 = 1;
				func_303(1, 1);
				return 7;
			}
			break;
		case 3:
			if (!func_304(uParam0->f_174, 1))
			{
				func_308(iLocal_19, Local_402.f_300, 0);
				func_309(iLocal_19, Local_402.f_300, Local_402.f_299);
				func_310(Global_40.f_9074.f_3, 1, 1065353216, 1, 0, 0, 1, 752097756);
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_40))
				{
					ENTITY::_0x203BEFFDBE12E96A(Local_40, -277.51f, 816.67f, 119.15f, -47.78f, 1, 0, 1);
					func_306(Local_40, 1, 0);
				}
				func_310(Global_40.f_9074.f_4, 1, 1065353216, 1, 0, 0, 1, 752097756);
			}
			AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", false);
			func_303(1, 1);
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
		if (!func_314(uParam0))
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
		func_315();
		func_316(uParam0);
		if (!func_317(uParam0))
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
		func_318(&(uParam0->f_206), &(uParam0->f_753));
		if (uParam0->f_176 == 4 && !func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 512))
		{
			func_319(uParam0, 0);
		}
	}
	if (func_6(uParam0->f_172, 1024) && uParam0->f_176 == 4)
	{
		func_297(uParam0, func_61(0), func_61(1), 0, 1, 1);
	}
	func_2(&(uParam0->f_172), 512);
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
	return func_323(Var0, &(uParam0->f_206), uParam0);
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
		func_324(&(uParam0->f_206));
	}
	func_325(&(uParam0->f_206));
	func_326(uParam0);
}

int func_103(var uParam0)
{
	return 8;
}

int func_104(var uParam0)
{
	if (func_6(uParam0->f_172, 256) && !func_6(uParam0->f_172, 1024))
	{
		if (!func_314(uParam0))
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
				func_297(uParam0, func_61(0), func_61(1), 0, 1, 1);
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
		if (func_327(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			func_1(&(uParam0->f_172), 1048576);
		}
		if (!func_6(uParam0->f_172, 524288))
		{
			if (func_328(&(uParam0->f_753)))
			{
				func_1(&(uParam0->f_172), 524288);
			}
		}
	}
}

int func_107(var uParam0)
{
	func_329(&uLocal_928, vLocal_15, 3, -1082130432);
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	func_330(uParam0);
	switch (iLocal_786)
	{
		case 0:
			if (!func_219(iLocal_20, 8))
			{
				if (fLocal_38 < (100f / 2f))
				{
					if (!MAP::DOES_BLIP_EXIST(iLocal_908))
					{
						iLocal_908 = func_331(-308585968, &(iLocal_909[0]), 1);
					}
					func_126(uParam0, "RBT03_OBJ_1", 0, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
					func_220(&iLocal_20, 16);
					func_221(&iLocal_20, 8);
				}
			}
			if (!func_219(iLocal_20, 16))
			{
				if (func_219(iLocal_20, 8))
				{
					if (fLocal_38 > 100f)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT(Global_35))
						{
							PED::SET_PED_STEALTH_MOVEMENT(Global_35, false, 0, 0);
						}
						PED::_0x437C08DB4FEBE2BD(Global_35, "Stealth", 0f, -1);
						PED::_0x437C08DB4FEBE2BD(Global_35, "Cautious", 0f, -1);
						func_220(&iLocal_20, 64);
						func_126(uParam0, "RBT03_OBJ_2", 1, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
						func_220(&iLocal_20, 8);
						func_221(&iLocal_20, 16);
					}
				}
			}
			if (!func_219(iLocal_20, 64))
			{
				if (fLocal_38 < 35f)
				{
					if (!PED::GET_PED_STEALTH_MOVEMENT(Global_35))
					{
						PED::SET_PED_STEALTH_MOVEMENT(Global_35, true, 0, 0);
					}
					PED::_0x437C08DB4FEBE2BD(Global_35, "Stealth", 1f, -1);
					PED::_0x437C08DB4FEBE2BD(Global_35, "Cautious", 1f, -1);
					func_221(&iLocal_20, 64);
				}
			}
			if (((((func_332(Local_40, 3.25f, 2.5f, 3.25f) || func_219(iLocal_20, 4096)) || func_219(Local_40.f_6, 1)) || func_219(Local_40.f_6, 8)) || func_219(iLocal_20, 512)) || (func_333(Global_35, Local_40, 3.25f, 0) && PED::IS_TRACKED_PED_VISIBLE(Local_40)))
			{
				iLocal_786 = 1;
			}
			break;
		case 1:
			if (!func_219(iLocal_20, 32))
			{
				func_334(&iLocal_908);
				func_334(&(Local_40.f_1));
				func_335(&Local_402);
				func_302(uParam0->f_174, 1);
				func_336(&Local_402, 4, 1);
				func_221(&iLocal_20, 32);
			}
			if (!func_219(iLocal_20, 128))
			{
				if ((func_219(iLocal_20, 4096) || func_219(Local_40.f_6, 4)) || func_219(Local_40.f_6, 64))
				{
					PED::_0x437C08DB4FEBE2BD(Global_35, "Stealth", 0f, -1);
					PED::_0x437C08DB4FEBE2BD(Global_35, "Cautious", 0f, -1);
					func_221(&iLocal_20, 128);
				}
			}
			if (func_219(iLocal_20, 32))
			{
				func_337(&Local_402);
				func_338(Local_40);
				if (func_339(&Local_402, 1))
				{
					iLocal_786 = 2;
				}
			}
			break;
		case 2:
			if (func_340(&Local_402))
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
	return func_341(iParam0) == 0;
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
	return func_343(func_342(iParam0));
}

int func_111(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_344(func_342(iParam0));
}

int func_112(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_345(func_342(iParam0));
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
	if (!func_212(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		func_346(&(((*Global_1347702)[iParam0 /*49*/])->f_14));
		func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
		func_347(iParam0);
		if ((!func_232(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43890) || iParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(((*Global_1347702)[iParam0 /*49*/])->f_40, 0);
			func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
			func_334(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		else
		{
			func_178(iParam0, 16384);
			func_348(iParam0, 1, func_69(iParam0));
		}
	}
}

void func_116(var uParam0)
{
	func_349(1, &(uParam0->f_2605.f_482));
}

int func_117()
{
	return Global_1894899->f_2;
}

void func_118(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_350(iParam0))
	{
		return;
	}
	bVar0 = func_351(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_352(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_354(iParam0, func_353());
			func_355(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_356(iParam0, 67108864);
		func_354(iParam0, -15);
	}
	func_357(iParam0);
}

void func_119(var uParam0, int iParam1, int iParam2)
{
	if (func_358(0))
	{
		if (func_359(0))
		{
			func_360(0);
		}
	}
	if (func_358(1))
	{
		if (func_359(1))
		{
			func_360(1);
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
			if (func_212(iVar1))
			{
				if (func_120(iVar1, 4))
				{
					func_240(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_361(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_111(iParam0);
		if (iVar3 == 59)
		{
			func_361(1);
		}
		else if (iVar3 == 61)
		{
			func_361(0);
		}
		else if (iVar3 == 83)
		{
			func_361(0);
		}
	}
}

void func_124()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_212(iVar0))
		{
			if (func_120(iVar0, 4))
			{
				if (func_120(iVar0, 16))
				{
					func_362(iVar0, 1);
				}
				if (func_120(iVar0, 8))
				{
					func_363(iVar0, 1);
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

	func_364(uParam0->f_174, sParam1, bParam5, fParam6, 0, 0, -1, -1, 0);
	if (iParam2 || !func_365(sParam1))
	{
		func_366(sParam1, iParam3, bParam4, bParam5, sParam7, sParam8, sParam9, sParam10, iParam11);
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

	if (!func_212(iParam0))
	{
		return;
	}
	if (func_367())
	{
		func_282(iParam0, 1);
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
		if (!func_367())
		{
			((*Global_1347702)[iParam0 /*49*/])->f_35 = 104;
			((*Global_1347702)[104 /*49*/])->f_48 = ((*Global_1347702)[iParam0 /*49*/])->f_15;
		}
	}
	func_368(iParam0, 0, iParam3);
	if (func_212(((*Global_1347702)[iParam0 /*49*/])->f_35))
	{
		func_369(((*Global_1347702)[iParam0 /*49*/])->f_35);
		if (iParam1 == 1)
		{
			func_370(((*Global_1347702)[iParam0 /*49*/])->f_35, 0);
			if (func_371(iParam0))
			{
				((*Global_1347702)[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])->f_43 = ((*Global_1347702)[iParam0 /*49*/])->f_43;
			}
		}
	}
	else
	{
		func_372();
	}
	if (!func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 1) && !func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 33554432))
	{
		if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 262144))
		{
			if (bParam5)
			{
				func_373(iParam0);
			}
			bParam5 = false;
			uVar0 = func_374(((*Global_1347702)[iParam0 /*49*/])->f_15);
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
		func_375(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_376(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam6);
	}
	func_377(iParam0);
}

int func_129(int iParam0)
{
	if (!func_212(iParam0))
	{
		return 0;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_15;
}

int func_130(int iParam0)
{
	iParam0 = func_378(iParam0);
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
	vVar2 = { func_379(((*Global_2621440)[0 /*12065*/])->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_380(vVar2, uVar1, uVar0, 0);
	func_381(vVar2);
	Global_40.f_9.f_15 = func_184(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_132(int iParam0)
{
	if (func_211() != -1)
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
	func_382();
	Global_43888 = 1;
}

void func_133(int iParam0, bool bParam1)
{
	if (func_211() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_60(32768))
	{
		return;
	}
	if (!func_60(32768))
	{
		func_383(1, bParam1);
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
		((*Global_2621440)[iParam0 /*12065*/])->f_9.f_14 = func_353();
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
	func_384(Var10, 0);
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
	if (!func_385(Global_35, 0))
	{
		func_368(uParam0->f_174, 0, 0);
		((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = 0;
	}
}

void func_139(bool bParam0, bool bParam1)
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
		func_386(0);
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
	if (func_387(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_388(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_388(&(Global_1347343->f_11), 16384);
	}
	if (func_389() >= 2)
	{
		if (!func_387(Global_1347343->f_11, 16384))
		{
			func_388(&(Global_1347343->f_11), 8);
		}
		func_158(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_289(Global_1935630, 2048);
	func_390(bParam5);
}

bool func_142(var uParam0)
{
	return uParam0->f_781;
}

void func_143(var uParam0)
{
	func_391(1, &(uParam0->f_2605.f_482));
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
	if (func_392(iParam0) == 3)
	{
		if (func_109(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_109(iParam0)))
		{
			if (func_110(iParam0) != 1 && func_110(iParam0) != 8)
			{
				func_393(func_110(iParam0), func_109(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_394(iParam0);
	func_209(1);
	func_395(0);
	func_396(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_397(1);
			func_398(15, 0, 1);
			break;
		case 4:
			func_398(10, 0, 1);
			break;
		case 8:
			func_398(10, 0, 1);
			break;
		case 9:
			func_398(10, 0, 1);
			break;
		case 2:
			func_398(10, 0, 1);
			break;
		case 6:
			func_398(10, 0, 1);
			break;
		case 5:
			func_398(10, 0, 1);
			break;
	}
	func_399(1);
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
		fParam2 = BUILTIN::VDIST2(Global_36, func_400(iParam0));
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
		if (func_401())
		{
			return;
		}
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "RCM_INVALID_TOD", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_402(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 1024 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_ANTAGONIZE", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_402(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 4096 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_MEMORY", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_402(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 2048 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_WANTED_REGION", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_402(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 16384 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_402(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 8192 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_COMBAT", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_402(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 32768 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED_2", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_402(sVar1, 10000, 0, 0, 0, 1);
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
		if (func_403())
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
		if (func_212(iVar0) && func_31(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
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
			if (func_404(&Local_402))
			{
				func_405(Local_402.f_300, ENTITY::GET_ENTITY_MODEL(Local_402.f_67));
				func_23(&Local_40);
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
	int iVar0;

	HUD::_TEXT_BLOCK_DELETE("BHCR");
	AUDIO::STOP_PED_SPEAKING(Global_35, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_stool02x"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_18);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_19);
	func_406(551513105);
	if (PATHFIND::_0x5AC0944C156E5F44("BH_LaramieSleeping"))
	{
		PATHFIND::_0x527B97C203BB8606("BH_LaramieSleeping");
	}
	func_407(&uLocal_928, 106);
	func_23(&Local_40);
	iVar0 = 0;
	while (iVar0 < Local_125)
	{
		func_334(&((Local_125[iVar0 /*85*/])->f_1));
		func_169(Local_125[iVar0 /*85*/], 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_381)
	{
		func_169(iLocal_381[iVar0], 1, 0, 1);
		iVar0++;
	}
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	func_408(&iLocal_926, 1);
	func_409(&Local_402, 1);
	AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", false);
	func_410(&Local_402);
	AUDIO::TRIGGER_MUSIC_EVENT(&(sLocal_900[2]));
	AUDIO::_0x660A8F876DF1D4F8(49);
	PED::_0x437C08DB4FEBE2BD(Global_35, "Stealth", 0f, -1);
	PED::_0x437C08DB4FEBE2BD(Global_35, "Cautious", 0f, -1);
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
	func_246(&(uParam0->f_2588));
}

void func_162(var uParam0)
{
	struct<2> Var0;

	Var0 = { func_411(uParam0->f_174) };
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&Var0))
	{
		HUD::_TEXT_BLOCK_DELETE(&Var0);
	}
	Var0 = { func_412(uParam0->f_174) };
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
	switch (func_211())
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

	if (!func_413(iParam0))
	{
		return;
	}
	if (!func_414(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = func_415(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_KEEP_TASK(iVar0, false);
		}
	}
	func_416(iParam0, 0, 0, bParam1, fParam2, bParam3, bParam4, bParam5, bParam6, 0, 0);
	func_417(iParam0, 0);
	func_418(iParam0);
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
		func_419(((*Global_1347702)[iParam0 /*49*/])->f_41);
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

	if (func_420(iParam0, &iVar1, &iVar0))
	{
		if (func_421(iVar1, iVar0, 1))
		{
			func_422(iVar1, iVar0);
		}
	}
}

bool func_174(int iParam0)
{
	int iVar0;

	iVar0 = func_341(iParam0);
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
	if (!func_174(iParam0) && !func_286(iParam0))
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
	if (func_392(iParam0) == 3 || (func_392(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_109(iParam0))))
	{
		func_393(func_110(iParam0), func_109(iParam0), iParam2);
		if ((!func_57(Global_1572864->f_8) && !func_146(0, 1, 0)) && !func_90(&Global_1935630, 32768))
		{
			iVar0 = func_423(iParam0);
			if (iVar0 != -1)
			{
				func_424(0);
			}
			else if (func_110(iParam0) == 8)
			{
				iVar0 = func_425();
				if (iVar0 != -1)
				{
					func_424(0);
				}
			}
		}
	}
	func_396(iParam0, 0);
	if (func_56(0) == iParam0)
	{
		func_209(1);
		func_395(0);
		func_399(1);
	}
	func_426(iParam0, 1);
	func_394(iParam0);
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

	if (!func_212(iParam0))
	{
		return;
	}
	func_427(&(((*Global_1347702)[iParam0 /*49*/])->f_14), iParam1);
	func_427(&(((*Global_1347702)[iParam0 /*49*/])->f_14), 2);
	func_226(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 16384);
	func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_212(&(Global_40.f_450[iVar0])))
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
		func_428(uParam0->f_41[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_429(uParam0->f_117[iVar0 /*5*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_430((*uParam0)[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_431(uParam0->f_28[iVar0 /*3*/]);
		iVar0++;
	}
	func_162(uParam0);
}

void func_181(int iParam0)
{
	iParam0 = func_378(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_432(iParam0, 32);
	func_433();
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
	if (func_350(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_434(vParam0, bParam3);
}

void func_185(var uParam0, int iParam1)
{
	uParam0->f_748 = iParam1;
}

void func_186(var uParam0, int iParam1)
{
	uParam0->f_749 = iParam1;
}

void func_187(var uParam0, float fParam1)
{
	uParam0->f_741 = fParam1;
}

void func_188(var uParam0, float fParam1)
{
	uParam0->f_742 = fParam1;
}

void func_189()
{
	int iVar0;

	iLocal_916[0] = TASK::CREATE_SCENARIO_POINT(-1805387726, -2001.137f, 435.9689f, 120.5074f, 137.0453f, 2f, 0f, 0);
	iLocal_916[1] = TASK::CREATE_SCENARIO_POINT(-1805387726, -2004.515f, 433.5546f, 120.5393f, 285f, 2f, 0f, 0);
	iLocal_916[2] = TASK::CREATE_SCENARIO_POINT(-1805387726, -1985.985f, 415.5984f, 120.4827f, 327.8614f, 2f, 0f, 0);
	iLocal_916[3] = TASK::CREATE_SCENARIO_POINT(-1805387726, -1986.943f, 419.2619f, 120.497f, 248.8946f, 2f, 0f, 0);
	iLocal_916[4] = TASK::CREATE_SCENARIO_POINT(1157205070, -1998.65f, 422.05f, 120.51f, 320f, 2f, 0f, 0);
	iLocal_916[5] = TASK::CREATE_SCENARIO_POINT(1774730608, -2002.03f, 421.1301f, 120.5162f, 120f, 2f, 0f, 0);
	iLocal_916[6] = TASK::CREATE_SCENARIO_POINT(1774730608, -1995.1f, 423.65f, 120.63f, 10f, 2f, 0f, 0);
	iLocal_916[7] = TASK::CREATE_SCENARIO_POINT(1152090473, -1989.35f, 428.6f, 121f, 80f, 2f, 0f, 0);
	iVar0 = 0;
	while (iVar0 < iLocal_916)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(&(iLocal_916[iVar0])))
		{
			TASK::_0x5AF19B6CC2115D34(&(iLocal_916[iVar0]), 8, 1);
			TASK::_0x5AF19B6CC2115D34(&(iLocal_916[iVar0]), 23, 1);
			TASK::_0x5AF19B6CC2115D34(&(iLocal_916[iVar0]), 25, 1);
		}
		iVar0++;
	}
}

void func_190(var uParam0)
{
	func_435(uParam0, 0);
	func_436(uParam0, 0);
	func_437(uParam0, 1);
	func_438(uParam0, 1);
	func_439(uParam0, 0);
	func_440(uParam0, 1);
	func_198(uParam0, 1, 1, 1);
}

void func_191(var uParam0)
{
	func_195(uParam0, (func_441(uParam0) - 6f));
	func_442(uParam0, 1);
}

void func_192(var uParam0)
{
	func_443(uParam0, 1);
	func_444(uParam0, 1);
	func_445(uParam0, 1);
}

void func_193(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_446(&(uParam0->f_1), 131072);
	}
	else
	{
		func_447(&(uParam0->f_1), 131072);
	}
}

void func_194(var uParam0, float fParam1)
{
	uParam0->f_24 = fParam1;
}

void func_195(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_196(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_446(&(uParam0->f_1), 8);
	}
	else
	{
		func_447(&(uParam0->f_1), 8);
	}
}

void func_197(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_447(uParam0, 32);
	}
	else
	{
		func_446(uParam0, 32);
	}
}

void func_198(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_447(uParam0, 268435456);
	}
	else
	{
		func_446(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_447(uParam0, 1073741824);
	}
	else
	{
		func_446(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_447(uParam0, 536870912);
	}
	else
	{
		func_446(uParam0, 536870912);
	}
}

void func_199(var uParam0)
{
	func_190(uParam0);
	func_448(uParam0, 1);
	func_449(uParam0, 1);
	func_437(uParam0, 1);
	func_450(uParam0, 1);
	func_196(uParam0, 1);
	func_435(uParam0, 1);
	func_451(uParam0, 1);
	func_436(uParam0, 0);
}

int func_200(var uParam0, int iParam1)
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

int func_201(var uParam0)
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

void func_202(var uParam0, char* sParam1)
{
	struct<2> Var0;

	Var0 = { func_411(uParam0->f_174) };
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
			uParam0->f_2573 = { func_412(uParam0->f_174) };
		}
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_2573)))
	{
		HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_2573));
	}
}

void func_203()
{
	STREAMING::_0x19A6BE7D9C6884D3(-1805387726, 15, 0, 0);
	STREAMING::_0x19A6BE7D9C6884D3(-493351432, 15, 0, 0);
}

int func_204(var uParam0)
{
	return uParam0->f_168;
}

void func_205(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (func_453((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1))
		{
			func_454((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_41[iVar0 /*3*/])->f_2 == 0 || !func_453((uParam0->f_41[iVar0 /*3*/])->f_2, iParam2))
			{
				func_428(uParam0->f_41[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_453((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1))
		{
			func_454((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1);
			if ((uParam0->f_117[iVar0 /*5*/])->f_4 == 0 || !func_453((uParam0->f_117[iVar0 /*5*/])->f_4, iParam2))
			{
				func_429(uParam0->f_117[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_453(((*uParam0)[iVar0 /*3*/])->f_2, iParam1))
		{
			func_454(((*uParam0)[iVar0 /*3*/])->f_2, iParam1);
			if (((*uParam0)[iVar0 /*3*/])->f_2 == 0 || !func_453(((*uParam0)[iVar0 /*3*/])->f_2, iParam2))
			{
				func_430((*uParam0)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_453((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1))
		{
			func_454((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_28[iVar0 /*3*/])->f_2 == 0 || !func_453((uParam0->f_28[iVar0 /*3*/])->f_2, iParam2))
			{
				func_431(uParam0->f_28[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

int func_206(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_44 != -1)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_44 != 0)
		{
			if (!func_455(((*Global_1347702)[iParam0 /*49*/])->f_44))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_207(var uParam0)
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
						*uParam0 = func_456(vVar0.z);
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

void func_208(bool bParam0)
{
	if (!bParam0)
	{
		LAW::_0x61B98367D93F012F(PLAYER::GET_PLAYER_INDEX());
	}
	LAW::_ENABLE_DISPATCH_LAW(bParam0);
	LAW::_ENABLE_DISPATCH_LAW_2(bParam0);
}

void func_209(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_125(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_289(Global_1935630, 4194304);
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

int func_210(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if (func_452(uParam0->f_41[iVar1 /*3*/]))
		{
			if (func_453((uParam0->f_41[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_457(uParam0->f_41[iVar1 /*3*/]))
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
		if (func_458(uParam0->f_117[iVar1 /*5*/]))
		{
			if (func_453((uParam0->f_117[iVar1 /*5*/])->f_4, iParam1))
			{
				if (!func_459(uParam0->f_117[iVar1 /*5*/]))
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
		if (func_460((*uParam0)[iVar1 /*3*/]))
		{
			if (func_453(((*uParam0)[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_461((*uParam0)[iVar1 /*3*/]))
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
		if (func_462(uParam0->f_28[iVar1 /*3*/]))
		{
			if (func_453((uParam0->f_28[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_463(uParam0->f_28[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (iParam1 != 0 && iParam1 != 4)
	{
		if (!func_464(uParam0->f_174))
		{
			iVar0 = 0;
		}
		if (!func_465(uParam0))
		{
			iVar0 = 0;
		}
	}
	if (!func_466(uParam0, iParam1))
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

int func_211()
{
	return Global_1572887->f_12;
}

bool func_212(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_213(vector3 vParam0, var uParam3)
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
	iVar0 = func_467(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_468(0, 0);
		if (func_469(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_470(1, 0);
		}
	}
	else
	{
		func_470(1, 0);
	}
	func_154(0);
	func_471(0, vParam0, uParam3);
	return 1;
}

int func_214(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_67))
	{
		if (func_219(uParam0->f_329, 4194304))
		{
			uParam0->f_64 = 4;
			func_334(&(uParam0->f_68));
			return 1;
		}
		return 0;
	}
	if (uParam0->f_61 <= 0)
	{
		if (func_472(uParam0->f_67))
		{
			if (Global_40.f_9074.f_4 <= 0)
			{
				uParam0->f_64 = 0;
				func_334(&(uParam0->f_68));
				return 1;
			}
			if (!func_79(&(uParam0->f_321)))
			{
				if (func_473(uParam0->f_67))
				{
					func_275(&(uParam0->f_321));
				}
			}
			else if ((!func_473(uParam0->f_67) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 4) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 5)
			{
				func_246(&(uParam0->f_321));
			}
			else if (func_474(&(uParam0->f_321)) > 5f)
			{
				uParam0->f_64 = 4;
				func_334(&(uParam0->f_68));
				return 1;
			}
		}
		else if (!func_79(&(uParam0->f_321)))
		{
			if (func_473(uParam0->f_67))
			{
				func_275(&(uParam0->f_321));
			}
		}
		else if ((!func_473(uParam0->f_67) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 4) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 5)
		{
			func_246(&(uParam0->f_321));
		}
		else if (func_474(&(uParam0->f_321)) > 5f)
		{
			uParam0->f_64 = 4;
			func_334(&(uParam0->f_68));
			return 1;
		}
	}
	fVar0 = func_475(Global_35, uParam0->f_67, 1, 1);
	if (uParam0->f_63 != 10)
	{
		if (fVar0 > fParam2)
		{
			if (func_472(uParam0->f_67))
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
			if (!func_219(uParam0->f_329, 16))
			{
				func_336(uParam0, 256, 1);
				func_221(&(uParam0->f_329), 16);
			}
		}
		else if (fVar0 < (fParam1 - 25f))
		{
			if (func_219(uParam0->f_329, 16))
			{
				func_220(&(uParam0->f_329), 16);
				if (func_472(uParam0->f_67) || PED::IS_PED_HOGTIED(uParam0->f_67))
				{
					func_336(uParam0, 16, 0);
				}
				else
				{
					func_336(uParam0, 4, 0);
				}
			}
		}
	}
	if (func_232(PLAYER::PLAYER_ID(), 1, 1, 1))
	{
		uParam0->f_64 = 5;
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_69))
	{
		if (func_385(uParam0->f_69, 0))
		{
			if (func_476(uParam0))
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
		fVar1 = func_477(Global_35, func_222(uParam0->f_300), 1);
		if (fVar1 > 50f)
		{
			uParam0->f_64 = 7;
			return 1;
		}
		else if (fVar1 > 35f)
		{
			if (!func_219(uParam0->f_329, 131072))
			{
				func_221(&(uParam0->f_329), 131072);
				func_336(uParam0, 512, 1);
			}
		}
		else if (fVar1 < 30f)
		{
			if (func_219(uParam0->f_329, 131072))
			{
				func_220(&(uParam0->f_329), 131072);
				func_336(uParam0, 1024, 0);
			}
		}
	}
	if (uParam0->f_63 == 10)
	{
		fVar2 = func_477(Global_35, func_222(uParam0->f_300), 1);
		if (fVar2 > 75f)
		{
			uParam0->f_64 = 7;
			return 1;
		}
		else if (fVar2 > 55f)
		{
			if (!func_219(uParam0->f_329, 33554432))
			{
				func_221(&(uParam0->f_329), 33554432);
				func_336(uParam0, 4096, 1);
			}
		}
		else if (fVar2 < 50f)
		{
			if (func_219(uParam0->f_329, 33554432))
			{
				func_220(&(uParam0->f_329), 33554432);
				func_336(uParam0, 2048, 0);
			}
		}
	}
	return 0;
}

char* func_215(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RBT03_F_LEFT_A";
		case 2:
			return "RBT03_F_LEFT_D";
		case 3:
			return "RBT03_F_ESCP";
		case 4:
			return "RBT03_F_LOST";
		default:
			break;
	}
	return func_478(Local_402.f_64);
}

void func_216(var uParam0)
{
	int iVar0;

	func_479(uParam0, &Local_40);
	iVar0 = 0;
	while (iVar0 < Local_125)
	{
		func_480(uParam0, Local_125[iVar0 /*85*/], iVar0);
		iVar0++;
	}
	if (!func_219(iLocal_20, 4096))
	{
		if (!func_219(iLocal_20, 2048))
		{
			if (func_481())
			{
				func_221(&iLocal_20, 2048);
			}
		}
	}
}

void func_217(var uParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(&(Local_125[0 /*85*/])) && !ENTITY::IS_ENTITY_DEAD(&(Local_125[0 /*85*/])))
	{
		if ((((PED::IS_PED_BEING_STEALTH_KILLED(&(Local_125[0 /*85*/])) || PED::_0x3BDFCF25B58B0415(&(Local_125[0 /*85*/]))) || PED::IS_PED_BEING_STUNNED(&(Local_125[0 /*85*/]), 0)) || PED::_0xEF3A8772F085B4AA(&(Local_125[0 /*85*/]))) || PED::_0xD453BB601D4A606E(&(Local_125[0 /*85*/])))
		{
			if (func_482("RBT03_IG2_A"))
			{
				func_483("RBT03_IG2_A", 0, 0);
			}
		}
	}
	if (!func_219(iLocal_20, 4096))
	{
		if (!func_219(iLocal_20, 256))
		{
			if (func_484(Global_36, vLocal_15, 100f, 1) && func_485(&(Local_125[0 /*85*/]), &uLocal_390, 1069547520, 1056964608, 0.2f, 0.45f))
			{
				if ((!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					if (!func_482("RBT03_BINOSPOTJ"))
					{
						if (func_486(uParam0, "RBT03_BINOSPOT1", 0))
						{
							func_221(&iLocal_20, 256);
						}
					}
				}
			}
		}
		if (!func_219(iLocal_20, 512))
		{
			if (func_484(Global_36, vLocal_15, 100f, 1) && func_485(Local_40, &uLocal_387, 1069547520, 1056964608, 0.2f, 0.45f))
			{
				if ((!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					if (!func_482("RBT03_BINOSPOT1"))
					{
						if (func_486(uParam0, "RBT03_BINOSPOTJ", 0))
						{
							func_221(&iLocal_20, 512);
						}
					}
				}
			}
		}
		if (!func_487(0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_125[0 /*85*/])) && !ENTITY::IS_ENTITY_DEAD(&(Local_125[0 /*85*/])))
			{
				if (!func_219((Local_125[0 /*85*/])->f_6, 8))
				{
					if (!func_219((Local_125[0 /*85*/])->f_6, 2048))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(&(Local_125[0 /*85*/]), -76381094, 1) == 1)
						{
							if (PED::_0x9C54041BB66BCF9E(&(Local_125[0 /*85*/]), &(iLocal_916[4])) && TASK::_0x02EBBB3989B7E695(&(Local_125[0 /*85*/])))
							{
								if (!func_488() && !func_489())
								{
									func_490(uParam0, &(Local_125[0 /*85*/]), "RANCH_PED3", 0);
									if (func_486(uParam0, "RBT03_IG2_A", 0))
									{
										func_491(0, 1);
									}
								}
							}
						}
					}
				}
			}
		}
		if (!func_487(1) && !func_487(2))
		{
			if ((func_219((Local_125[0 /*85*/])->f_6, 32) || func_219((Local_125[1 /*85*/])->f_6, 32)) || func_219((Local_125[2 /*85*/])->f_6, 32))
			{
				if (func_219((Local_125[0 /*85*/])->f_6, 32))
				{
					if (func_482("RBT03_IG2_A"))
					{
						func_483("RBT03_IG2_A", 0, 0);
					}
				}
				if (((Local_125[0 /*85*/])->f_77 == 0 || (Local_125[1 /*85*/])->f_77 == 0) || (Local_125[2 /*85*/])->f_77 == 0)
				{
					if (func_486(uParam0, "RBT03_ILOGQUE", 0))
					{
						func_491(1, 1);
						func_221(&iLocal_20, 8192);
					}
				}
				else if (((Local_125[0 /*85*/])->f_77 == 1 || (Local_125[1 /*85*/])->f_77 == 1) || (Local_125[2 /*85*/])->f_77 == 1)
				{
					if (func_486(uParam0, "RBT03_ILOGCALL", 0))
					{
						func_491(2, 1);
						func_221(&iLocal_20, 8192);
					}
				}
			}
		}
		if (!func_487(14))
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_125[0 /*85*/])) && !ENTITY::IS_ENTITY_DEAD(&(Local_125[0 /*85*/])))
			{
				if (func_219((Local_125[0 /*85*/])->f_6, 131072))
				{
					if (func_482("RBT03_IG2_A"))
					{
						func_483("RBT03_IG2_A", 0, 0);
					}
					if (!func_488() && !func_489())
					{
						if (func_486(uParam0, "RBT03_PUKEALERT", 0))
						{
							func_491(14, 1);
						}
					}
				}
			}
		}
		if (!func_487(3) && !func_487(4))
		{
			if (func_219(Local_40.f_6, 32))
			{
				if (Local_40.f_77 == 0)
				{
					if (func_486(uParam0, "RBT03_ILOTQUE", 0))
					{
						func_491(3, 1);
						func_221(&iLocal_20, 8192);
					}
				}
				else if (Local_40.f_77 == 1)
				{
					if (func_486(uParam0, "RBT03_ILOTCALL", 0))
					{
						func_491(4, 1);
						func_221(&iLocal_20, 8192);
					}
				}
			}
		}
		if (func_219(iLocal_20, 65536))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_40) && !ENTITY::IS_ENTITY_DEAD(Local_40))
			{
				if (!func_487(7))
				{
					if (PED::_0xD453BB601D4A606E(Local_40))
					{
						if (func_486(uParam0, "RBT03_IG1_HOG1", 0))
						{
							func_491(7, 1);
						}
					}
				}
				else
				{
					if (!func_487(8))
					{
						if (PED::_0xD453BB601D4A606E(Local_40) || PED::IS_PED_HOGTIED(Local_40))
						{
							if (!func_482("RBT03_IG1_HOG1"))
							{
								if (func_486(uParam0, "RBT03_HOGA", 0))
								{
									func_491(8, 1);
								}
							}
						}
					}
					if (!func_487(9))
					{
						if (func_385(&(Local_125[1 /*85*/]), 0) && func_219((Local_125[1 /*85*/])->f_6, 8))
						{
							if (!func_482("RBT03_HOGA"))
							{
								func_490(uParam0, &(Local_125[1 /*85*/]), "RANCH_PED4", 0);
								if (func_486(uParam0, "RBT03_HOGB", 0))
								{
									func_491(9, 1);
								}
							}
						}
					}
				}
			}
		}
		if (((((!func_487(17) && !func_487(18)) && !func_487(19)) && !func_487(20)) && !func_487(5)) && !func_487(6))
		{
			if ((((func_385(Local_40, 0) && func_219(Local_40.f_6, 8)) || (func_385(&(Local_125[0 /*85*/]), 0) && func_219((Local_125[0 /*85*/])->f_6, 8))) || (func_385(&(Local_125[1 /*85*/]), 0) && func_219((Local_125[1 /*85*/])->f_6, 8))) || (func_385(&(Local_125[2 /*85*/]), 0) && func_219((Local_125[2 /*85*/])->f_6, 8)))
			{
				AUDIO::_0x660A8F876DF1D4F8(49);
				if (func_482("RBT03_IG2_A"))
				{
					func_483("RBT03_IG2_A", 0, 0);
				}
				if (!func_488() && !func_489())
				{
					if (func_219(Local_40.f_6, 32))
					{
						if (Local_40.f_77 == 0)
						{
							if (func_486(uParam0, "RBT03_ILOTQUER", 0))
							{
								func_491(5, 1);
							}
						}
						else if (Local_40.f_77 == 1)
						{
							if (func_486(uParam0, "RBT03_ILOTCALLR", 0))
							{
								func_491(6, 1);
							}
						}
					}
					else
					{
						iVar0 = func_492(Global_35, 1269650476, 0, 0, 28);
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (iVar0 == Local_40)
							{
								if (func_219(Local_40.f_6, 8))
								{
									if (func_486(uParam0, "RBT03_IG1_P3", 0))
									{
										func_491(19, 1);
									}
								}
							}
							else if (iVar0 == &Local_125[0 /*85*/])
							{
								if (func_219((Local_125[0 /*85*/])->f_6, 8))
								{
									func_490(uParam0, iVar0, "RANCH_PED1", 0);
									if (func_486(uParam0, "RBT03_GRDWAKE", 0))
									{
										func_491(20, 1);
									}
								}
							}
							else if (iVar0 == &Local_125[1 /*85*/])
							{
								if (func_219((Local_125[1 /*85*/])->f_6, 8))
								{
									func_490(uParam0, iVar0, "RANCH_PED4", 0);
									if (func_486(uParam0, "RBT03_IG1_P1", 0))
									{
										func_491(17, 1);
									}
								}
							}
							else if (iVar0 == &Local_125[2 /*85*/])
							{
								if (func_219((Local_125[2 /*85*/])->f_6, 8))
								{
									func_490(uParam0, iVar0, "RANCH_PED2", 0);
									if (func_486(uParam0, "RBT03_IG1_P2", 0))
									{
										func_491(18, 1);
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
		if (&iLocal_894[1] == 0)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT(&(sLocal_900[1])))
			{
				AUDIO::_0x660A8F876DF1D4F8(49);
				iLocal_894[1] = 1;
			}
		}
		if (!func_487(36) && !func_487(37))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_40) && !ENTITY::IS_ENTITY_DEAD(Local_40))
			{
				if (func_333(Global_35, Local_40, 3f, 1))
				{
					if (PED::IS_PED_HOGTIED(Local_40) || ENTITY::_0x61914209C36EFDDB(Local_40) == 1)
					{
						if (func_493(&Local_125, 1) == 0)
						{
							if (!func_494(Local_40, 1))
							{
								if (!func_488() && !func_489())
								{
									if (PED::GET_PED_CONFIG_FLAG(Local_40, 11, false) == 0)
									{
										if (func_219(Local_40.f_6, 64))
										{
											if (func_486(uParam0, "RBT03_HOG1", 0))
											{
												func_275(&uLocal_393);
												func_491(37, 1);
											}
										}
										else if (func_486(uParam0, "RBT03_HOG", 0))
										{
											func_275(&uLocal_393);
											func_491(36, 1);
										}
									}
								}
							}
							else
							{
								func_491(36, 1);
								func_491(37, 1);
							}
						}
					}
				}
			}
		}
		if (!func_219(iLocal_20, 16384))
		{
			if (func_219((Local_125[0 /*85*/])->f_6, 131072))
			{
				if (!func_487(15))
				{
					if ((ENTITY::DOES_ENTITY_EXIST(&(Local_125[0 /*85*/])) && !ENTITY::IS_ENTITY_DEAD(&(Local_125[0 /*85*/]))) && !PED::IS_PED_HOGTIED(&(Local_125[0 /*85*/])))
					{
						if (PED::IS_PED_IN_COMBAT(&(Local_125[0 /*85*/]), 0) || (Local_125[0 /*85*/])->f_2 == 11)
						{
							if (!func_488() && !func_489())
							{
								if (func_486(uParam0, "RBT03_PUKEFIGHT", 0))
								{
									func_491(15, 1);
								}
							}
						}
					}
				}
			}
			if (func_219(iLocal_20, 65536))
			{
				if (!func_487(10))
				{
					if (func_385(&(Local_125[2 /*85*/]), 0) && func_219((Local_125[2 /*85*/])->f_6, 8))
					{
						if (!func_482("RBT03_HOGA") && !func_482("RBT03_HOGB"))
						{
							func_490(uParam0, &(Local_125[2 /*85*/]), "RANCH_PED2", 0);
							if (func_486(uParam0, "RBT03_HOGC", 0))
							{
								func_491(10, 1);
							}
						}
					}
				}
			}
			if (((((!func_487(21) && !func_487(22)) && !func_487(23)) && !func_487(24)) && !func_487(25)) && !func_487(34))
			{
				if (func_482("RBT03_IG2_A"))
				{
					func_483("RBT03_IG2_A", 0, 0);
				}
				if (!func_488() && !func_489())
				{
					iVar0 = func_492(Global_35, 1269650476, func_495(func_487(6), 1, 0), 0, 28);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						if (iVar0 == Local_40)
						{
							if (!func_487(6))
							{
								if (func_493(&Local_125, 0) > 0)
								{
									if (func_486(uParam0, "RBT03_CLKBTYT", 0))
									{
										func_275(&uLocal_393);
										func_491(25, 1);
									}
								}
								else if (func_486(uParam0, "RBT03_WAKEDEAD", 0))
								{
									func_275(&uLocal_393);
									func_491(34, 1);
								}
							}
						}
						else if (iVar0 == &Local_125[0 /*85*/])
						{
							func_490(uParam0, iVar0, "RANCH_PED3", 0);
							if (func_486(uParam0, "RBT03_CLKBTY3", 0))
							{
								func_275(&uLocal_393);
								func_491(21, 1);
							}
						}
						else if (iVar0 == &Local_125[1 /*85*/])
						{
							func_490(uParam0, iVar0, "RANCH_PED2", 0);
							if (func_486(uParam0, "RBT03_CLKBTY2", 0))
							{
								func_275(&uLocal_393);
								func_491(22, 1);
							}
						}
						else if (iVar0 == &Local_125[2 /*85*/])
						{
							func_490(uParam0, iVar0, "RANCH_PED1", 0);
							if (func_486(uParam0, "RBT03_CLKBTY3", 0))
							{
								func_275(&uLocal_393);
								func_491(23, 1);
							}
						}
					}
				}
			}
			else
			{
				if (func_493(&Local_125, 1) > 0)
				{
					if ((ENTITY::DOES_ENTITY_EXIST(Local_40) && !ENTITY::IS_ENTITY_DEAD(Local_40)) && func_496(Local_40))
					{
						if (!func_487(11))
						{
							if (!func_488() && !func_489())
							{
								if (func_486(uParam0, "RBT03_CARRYA", 0))
								{
									func_491(11, 1);
								}
							}
						}
						else
						{
							if ((ENTITY::DOES_ENTITY_EXIST(&(Local_125[1 /*85*/])) && !ENTITY::IS_ENTITY_DEAD(&(Local_125[1 /*85*/]))) && !func_219((Local_125[1 /*85*/])->f_6, 4))
							{
								if (!func_487(12))
								{
									if (!func_488() && !func_489())
									{
										func_490(uParam0, &(Local_125[1 /*85*/]), "RANCH_PED2", 0);
										if (func_486(uParam0, "RBT03_CARRYB", 0))
										{
											func_491(12, 1);
										}
									}
								}
							}
							if ((ENTITY::DOES_ENTITY_EXIST(&(Local_125[2 /*85*/])) && !ENTITY::IS_ENTITY_DEAD(&(Local_125[2 /*85*/]))) && !func_219((Local_125[2 /*85*/])->f_6, 4))
							{
								if (!func_487(13))
								{
									if (!func_488() && !func_489())
									{
										func_490(uParam0, &(Local_125[2 /*85*/]), "RANCH_PED4", 0);
										if (func_486(uParam0, "RBT03_CARRYC", 0))
										{
											func_491(13, 1);
										}
									}
								}
							}
						}
					}
				}
				if (((!func_487(26) && !func_487(27)) && !func_487(28)) && !func_487(29))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_40) && ENTITY::IS_ENTITY_DEAD(Local_40))
					{
						if (func_493(&Local_125, 0) > 0)
						{
							if (!func_488() && !func_489())
							{
								iVar0 = func_492(Global_35, 1269650476, MISC::GET_RANDOM_INT_IN_RANGE(0, 1), 0, 28);
								if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
								{
									if (iVar0 == &Local_125[0 /*85*/])
									{
										func_490(uParam0, iVar0, "RANCH_PED3", 0);
										if (func_486(uParam0, "RBT03_KILLCAV3", 0))
										{
											func_491(26, 1);
										}
									}
									else if (iVar0 == &Local_125[1 /*85*/])
									{
										func_490(uParam0, iVar0, "RANCH_PED2", 0);
										if (func_486(uParam0, "RBT03_KILLCAV2", 0))
										{
											func_491(27, 1);
										}
									}
									else if (iVar0 == &Local_125[2 /*85*/])
									{
										func_490(uParam0, iVar0, "RANCH_PED1", 0);
										if (func_486(uParam0, "RBT03_KILLCAV4", 0))
										{
											func_491(28, 1);
										}
									}
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_40) && !ENTITY::IS_ENTITY_DEAD(Local_40))
				{
					if (!func_487(34))
					{
						if (func_493(&Local_125, 0) == 0)
						{
							if (func_219(Local_40.f_6, 8388608))
							{
								if (!func_488() && !func_489())
								{
									if (func_486(uParam0, "RBT03_WAKEDEAD", 0))
									{
										func_275(&uLocal_393);
										func_491(34, 1);
									}
								}
							}
						}
					}
					if (!func_487(33))
					{
						if (func_493(&Local_125, 0) == 0)
						{
							if (!func_488() && !func_489())
							{
								if (func_486(uParam0, "RBT03_CBTDEAD", 0))
								{
									func_275(&uLocal_393);
									func_491(33, 1);
								}
							}
						}
					}
				}
				if (!func_487(33))
				{
					if (iLocal_24 != iLocal_23)
					{
						if ((func_385(Local_40, 0) && !PED::IS_PED_HOGTIED(Local_40)) && PED::IS_PED_IN_COMBAT(Local_40, 0))
						{
							if (!func_488() && !func_489())
							{
								if (func_486(uParam0, "RBT03_KILLGNG", 0))
								{
									func_275(&uLocal_393);
								}
							}
						}
						iLocal_24 = iLocal_23;
					}
				}
			}
		}
		if (func_79(&uLocal_393) && func_474(&uLocal_393) > MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 20f))
		{
			if (func_385(Local_40, 0))
			{
				if (!func_488() && !func_489())
				{
					if (PED::IS_PED_HOGTIED(Local_40) || ENTITY::_0x61914209C36EFDDB(Local_40) == 1)
					{
						if (func_493(&Local_125, 1) > 0)
						{
							if (func_486(uParam0, "RBT03_COMBATH", 0))
							{
								func_275(&uLocal_393);
							}
						}
						else if (!func_487(35))
						{
							if (func_486(uParam0, "RBT03_HOGTIED", 0))
							{
								func_275(&uLocal_393);
							}
						}
					}
					else if (PED::IS_PED_IN_COMBAT(Local_40, 0))
					{
						if (func_493(&Local_125, 0) > 0)
						{
							if (func_486(uParam0, "RBT03_COMBATF", 0))
							{
								func_275(&uLocal_393);
							}
						}
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_40) && !ENTITY::IS_ENTITY_DEAD(Local_40))
	{
		if (func_494(Local_40, 0))
		{
			if (!func_219(iLocal_20, 32768))
			{
				if (!func_487(38))
				{
					if (func_497(Local_40, 0))
					{
						if (!func_488() && !func_489())
						{
							if (func_486(uParam0, "RBT03_PUTHOR", 0))
							{
								func_491(38, 1);
							}
						}
					}
				}
				if (!func_487(39))
				{
					if (!func_488() && !func_489())
					{
						if (!func_498(Local_40, vLocal_15, 50f, 1, 1))
						{
							if (func_486(uParam0, "RBT03_RETURN1", 0))
							{
								func_221(&iLocal_20, 262144);
								func_491(38, 1);
								func_491(35, 1);
								func_491(39, 1);
							}
						}
					}
				}
				else if (!func_487(40))
				{
					if (!func_488() && !func_489())
					{
						if (func_486(uParam0, "RBT03_RETURN2", 0))
						{
							func_491(40, 1);
						}
					}
				}
				else if (!func_487(41))
				{
					if (!func_488() && !func_489())
					{
						if (func_486(uParam0, "RBT03_RETURN3", 0))
						{
							func_491(41, 1);
						}
					}
				}
				else if (!func_487(43))
				{
					if (!func_488() && !func_489())
					{
						if (func_486(uParam0, "RBT03_PUKE2", 0))
						{
							func_220(&iLocal_20, 262144);
							func_491(43, 1);
						}
					}
				}
				else if (!func_487(42))
				{
					if (!func_488() && !func_489())
					{
						if (PED::IS_PED_ON_MOUNT(Global_35))
						{
							if (func_486(uParam0, "RBT03_PUKE", 0))
							{
								func_491(42, 1);
							}
						}
						else
						{
							func_491(42, 1);
						}
					}
				}
				else if (!func_487(44))
				{
					if (!func_488() && !func_489())
					{
						if (func_486(uParam0, "RBT03_PUKE2", 0))
						{
							func_220(&iLocal_20, 262144);
							func_491(44, 1);
						}
					}
				}
				else if (!func_487(45))
				{
					if (!func_488() && !func_489())
					{
						if (func_486(uParam0, "RBT03_RETURN4", 0))
						{
							func_221(&iLocal_20, 262144);
							func_491(45, 1);
						}
					}
				}
				else if (!func_487(46))
				{
					if (!func_488() && !func_489())
					{
						if (func_486(uParam0, "RBT03_RETURN5", 0))
						{
							func_491(46, 1);
						}
					}
				}
				else if (func_219(iLocal_20, 262144))
				{
					if (!func_499("RBT03_RETURN5") && !func_482("RBT03_RETURN5"))
					{
						func_410(&Local_402);
						func_220(&iLocal_20, 262144);
					}
				}
			}
			if (!func_487(47))
			{
				if (fLocal_39 < 30f)
				{
					if (!func_488() && !func_489())
					{
						if (func_486(uParam0, "RBT03_OUTJAIL", 0))
						{
							func_491(47, 1);
						}
					}
				}
			}
		}
	}
	if (func_219(iLocal_20, 262144))
	{
		if (!PED::IS_PED_INJURED(Global_35) && !ENTITY::DOES_ENTITY_EXIST(PED::_0xB65A4DAB460A19BD(Global_35)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_40) && !ENTITY::IS_ENTITY_DEAD(Local_40))
			{
				if (func_500(&Local_402, 1056964608, "RBT03_SHUSH", 0))
				{
					if (func_482("RBT03_RETURN5"))
					{
						if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
						{
							func_483("RBT03_RETURN5", 1, 0);
						}
						else
						{
							func_483("RBT03_RETURN5", 0, 0);
						}
					}
					else if (func_482("RBT03_RETURN4"))
					{
						if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
						{
							func_483("RBT03_RETURN4", 1, 0);
						}
						else
						{
							func_483("RBT03_RETURN4", 0, 0);
						}
					}
					else if (func_482("RBT03_RETURN3"))
					{
						if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
						{
							func_483("RBT03_RETURN3", 1, 0);
						}
						else
						{
							func_483("RBT03_RETURN3", 0, 0);
						}
					}
					else if (func_482("RBT03_RETURN2"))
					{
						if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
						{
							func_483("RBT03_RETURN2", 1, 0);
						}
						else
						{
							func_483("RBT03_RETURN2", 0, 0);
						}
					}
					else if (func_482("RBT03_RETURN1"))
					{
						if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
						{
							func_483("RBT03_RETURN1", 1, 0);
						}
						else
						{
							func_483("RBT03_RETURN1", 0, 0);
						}
					}
				}
			}
		}
	}
}

int func_218(int iParam0, int iParam1)
{
	int iVar0;

	if ((PLAYER::IS_PLAYER_PLAYING(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1)) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (((PLAYER::_0x3EE1F7A8C32F24E1(iParam0, &iVar0, 0, 0) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && iVar0 == iParam1) || ((PLAYER::_0xBEA3A6E5F5F79A6F(iParam0, &iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && iVar0 == iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_219(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_220(int iParam0, int iParam1)
{
	func_501(iParam0, iParam1);
}

void func_221(int iParam0, int iParam1)
{
	func_502(iParam0, iParam1);
}

Vector3 func_222(int iParam0)
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

int func_223(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_503(((*Global_1347702)[iParam0 /*49*/])->f_15) != 0)
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

int func_224(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_504(0);
	if (iVar0 == 11)
	{
		iVar1 = func_505(func_112(iParam1), 1);
		if (iVar1 != -589165916)
		{
			if ((iVar1 == -103573613 || iVar1 == 194099983) || iVar1 == 2038046186)
			{
				iVar2 = func_506(Global_40.f_4283);
				if (func_350(iVar2) && iVar2 == ((*Global_1347702)[uParam0->f_174 /*49*/])->f_27)
				{
					return 1;
				}
			}
		}
	}
	else if (iVar0 == 4)
	{
		iVar3 = func_507(iParam1);
		if (iVar3 != -1)
		{
			if ((iVar3 == 1 || iVar3 == 3) || iVar3 == 2)
			{
				if (func_350(Global_1894899->f_2) && Global_1894899->f_2 == func_506(Global_40.f_4283))
				{
					return 1;
				}
			}
		}
	}
	if (func_508(uParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_225(int iParam0)
{
	int iVar0;
	int iVar1;

	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 8 != 0)
	{
		return 1;
	}
	if (func_509(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		if (!func_509(((*Global_1835011)[44 /*74*/])->f_1, 1))
		{
			if (iParam0 != 82 && iParam0 != 83)
			{
				return 1;
			}
		}
		if (func_509(((*Global_1835011)[67 /*74*/])->f_1, 1))
		{
			if ((!func_509(((*Global_1347702)[8 /*49*/])->f_15, 1) && !func_509(((*Global_1835011)[69 /*74*/])->f_1, 1)) && iParam0 != 8)
			{
				if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1835011)[67 /*74*/])->f_22)) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(((*Global_1835011)[67 /*74*/])->f_22))) > 0)
				{
					return 1;
				}
			}
		}
	}
	else if ((!func_510(2) && !func_509(((*Global_1347702)[61 /*49*/])->f_15, 1)) && func_509(((*Global_1347702)[59 /*49*/])->f_15, 1))
	{
		if (iParam0 != 60 && iParam0 != 61)
		{
			return 1;
		}
	}
	if (iParam0 == 15)
	{
		iVar1 = func_513(func_511(65536), 0, 3, func_512(65536));
		if (func_57(iVar1))
		{
			iVar0 = func_503(iVar1);
			if (!func_219(iVar0, 4))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 26 || iParam0 == 27)
	{
		if (((((!func_509(((*Global_1835011)[14 /*74*/])->f_1, 1) && func_509(((*Global_1347702)[62 /*49*/])->f_15, 1)) && func_509(((*Global_1347702)[0 /*49*/])->f_15, 1)) && func_509(((*Global_1347702)[94 /*49*/])->f_15, 1)) && func_509(((*Global_1835011)[25 /*74*/])->f_1, 1)) && (func_509(((*Global_1835011)[8 /*74*/])->f_1, 1) || (func_509(((*Global_1347702)[98 /*49*/])->f_15, 1) && func_503(((*Global_1347702)[98 /*49*/])->f_15) == 0)))
		{
			return 1;
		}
	}
	else if (iParam0 == 27)
	{
		if (!func_509(((*Global_1835011)[34 /*74*/])->f_1, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 42)
	{
		if (!func_509(((*Global_1347702)[41 /*49*/])->f_15, 1))
		{
			if (!func_514(8))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 51)
	{
		if (!func_515(2))
		{
			return 1;
		}
	}
	else if (iParam0 == 52)
	{
		if (!func_509(((*Global_1347702)[51 /*49*/])->f_15, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 57)
	{
		if (func_286(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 69 || iParam0 == 70)
	{
		if (func_516(((*Global_1347702)[iParam0 /*49*/])->f_15) == 0)
		{
			if (func_517() <= 160)
			{
				return 1;
			}
			else
			{
				func_518(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
			}
		}
		if (!func_519(68))
		{
			return 1;
		}
	}
	else if (iParam0 == 77)
	{
		if (func_286(((*Global_1835011)[47 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_286(((*Global_1835011)[45 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_520(16, 0))
		{
			return 1;
		}
	}
	else if (iParam0 == 87)
	{
		if (func_286(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 95)
	{
		if (func_286(((*Global_1835011)[20 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_286(((*Global_1835011)[21 /*74*/])->f_1))
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
		else if (!SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[113 /*49*/])->f_42, false) && func_521())
		{
			if (func_366("MUDTOWN32_altobj", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
			{
				func_179(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 262144);
				func_226(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 64);
				func_128(113, 1, 0, 1, 1, 1, 0);
				return 1;
			}
		}
	}
	else if (iParam0 == 99)
	{
		if (func_522(-404697685, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 117)
	{
		if (func_286(((*Global_1835011)[69 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 136)
	{
		if (func_286(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_226(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_227(int iParam0)
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

int func_228(int iParam0)
{
	if (!func_350(iParam0))
	{
		return 0;
	}
	return func_351(iParam0, 33554432);
}

int func_229(int iParam0)
{
	if (!func_350(iParam0))
	{
		return 0;
	}
	return func_351(iParam0, 67108864);
}

var func_230()
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

bool func_231(int iParam0, int iParam1)
{
	return func_523(iParam0, iParam1);
}

int func_232(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (func_524(iParam0, bParam1, iParam2, iParam3))
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

int func_233(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
			else if (func_525(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0]), 16, 1))
			{
				if (iParam1 == 0)
				{
					return 0;
				}
				else if (!func_414(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])))
				{
					return 0;
				}
			}
			if (iParam4 && func_90(&Global_1935630, 4096))
			{
			}
			else if (func_526(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0]), 44, 0) && iParam2 == 1)
			{
			}
			else if (!func_527(func_415(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])), -1f, 10f, 1, 1, 40f))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_234(var uParam0)
{
	return 0;
}

int func_235(int iParam0, float fParam1)
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

int func_236(var uParam0)
{
	return 0;
}

int func_237(float fParam0)
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

void func_238()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_413(iVar0) && func_414(iVar0))
		{
			func_528(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_80(&(Global_1359489->f_40), 1);
}

void func_239(var uParam0)
{
}

void func_240(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_280(iParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_281(iParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(iVar0, func_281(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_281(iParam0)))
			{
				UILOG::_UILOG_REMOVE_ENTRY(2, func_281(iParam0));
			}
		}
	}
	func_121(iParam0, 4);
	func_121(iParam0, 8);
	func_121(iParam0, 16);
}

void func_241(int iParam0)
{
	Global_36579 = iParam0;
}

void func_242(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_243(int iParam0)
{
	func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			func_249(iParam0, func_69(iParam0), 1, 0);
		}
		else
		{
			func_529(iParam0);
		}
	}
	else
	{
		func_115(iParam0, 0);
	}
}

void func_244(var uParam0)
{
	if (func_530(uParam0->f_174))
	{
		func_531(262144, 5, 0, 1);
		func_532(720f, 1, 0);
	}
}

void func_245(int iParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_fishingrod"), 0, 0))
	{
		return;
	}
	Global_1900073->f_18 = iParam0;
}

void func_246(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_247(var uParam0)
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

float func_248(int iParam0)
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

void func_249(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;

	if (!func_212(iParam0))
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
	((*Global_1347702)[iParam0 /*49*/])->f_38 = func_533(iParam0);
	if (!bParam5 && func_534(iParam0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::BLIP_ADD_FOR_RADIUS(((*Global_1347702)[iParam0 /*49*/])->f_38, func_400(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_18);
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
		func_535(8);
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
	func_529(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(((*Global_1347702)[iParam0 /*49*/])->f_37, 64, iParam0);
	if (func_211() == -1)
	{
		func_536(iParam0);
		iVar0 = func_506(Global_40.f_4283);
		if (func_350(iVar0) && func_537(((*Global_1888801)[iVar0 /*35*/])->f_13))
		{
			iVar1 = 1;
			bVar2 = func_538(iVar0);
		}
		if (func_539(iParam0, iVar1, iVar0))
		{
			func_540(((*Global_1347702)[iParam0 /*49*/])->f_15, bVar2, iVar1, iVar0);
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
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		if (((!func_534(iParam0) || func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 1)) || func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 512)) || func_46(((*Global_1347702)[iParam0 /*49*/])->f_13, 2048))
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
			func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_541(iParam0))
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
			((*Global_1347702)[iParam0 /*49*/])->f_40 = func_402(MISC::_CREATE_VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_282(iParam0, 2);
	}
}

void func_250(int iParam0, float fParam1)
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
		MAP::_0xB059D7BD3D78C16F(((*Global_1347702)[iParam0 /*49*/])->f_37, -211388321);
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
	}
}

void func_251(int iParam0, vector3 vParam1, float fParam4)
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
	if (func_542(iParam0, fParam4))
	{
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2048);
		func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		func_115(iParam0, 0);
		func_249(iParam0, vParam1, 1, 0);
	}
}

void func_252(int iParam0)
{
	if (func_543(179))
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
	else if (func_534(iParam0))
	{
		return;
	}
	if (((MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37) && MAP::IS_BLIP_ON_MINIMAP(((*Global_1347702)[iParam0 /*49*/])->f_37)) && BUILTIN::VDIST2(func_69(iParam0), Global_36) < 10000f) && func_544())
	{
		func_545(179, ((*Global_1347702)[iParam0 /*49*/])->f_37, 0);
	}
}

void func_253(int iParam0)
{
	if (func_543(180))
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_36 != -1822497728)
	{
		return;
	}
	else if (!func_534(iParam0))
	{
		return;
	}
	if ((MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37) && MAP::IS_BLIP_ON_MINIMAP(((*Global_1347702)[iParam0 /*49*/])->f_37)) && func_544())
	{
		func_545(180, ((*Global_1347702)[iParam0 /*49*/])->f_37, 0);
	}
}

void func_254(var uParam0)
{
	if (func_6(uParam0->f_172, 16))
	{
		func_102(uParam0, 0);
		func_87(uParam0);
	}
}

int func_255(var uParam0)
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
		Var0 = { func_546(uParam0->f_174) };
		uParam0->f_751 = ANIMSCENE::_CREATE_ANIM_SCENE(&Var0, 0, 0, false, true);
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_751))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_751);
		}
	}
	return 0;
}

struct<8> func_256()
{
	char cVar0[64];

	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

struct<8> func_257(var uParam0)
{
	return uParam0->f_350;
}

void func_258(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_547(uParam0) };
	func_548(uParam0, &Var0);
}

void func_259(var uParam0, char* sParam1)
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
	func_548(uParam0, sParam1);
	func_549(uParam0, 2097152, 1);
	func_550(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_348, sParam1, true);
}

int func_260(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_261(var uParam0)
{
	if (uParam0->f_177 == 6)
	{
		return 1;
	}
	else if (uParam0->f_177 == 2)
	{
		return 1;
	}
	else if (func_551(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_262(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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
			return (func_552(uParam0, 256) && !func_552(uParam0, 4194304));
		}
		uParam0->f_415 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	func_553(uParam0, sParam1);
	if (!func_552(uParam0, 64))
	{
		if (!func_260(func_554(uParam0)))
		{
			func_550(uParam0, 64);
		}
		else
		{
			vVar0 = { func_555(uParam0) };
			if (!func_260(vVar0))
			{
				func_556(uParam0, vVar0);
			}
		}
		return 0;
	}
	fVar3 = func_477(Global_35, func_554(uParam0), 1);
	if (func_552(uParam0, 128) || func_552(uParam0, 256))
	{
		if ((fVar3 >= func_557(uParam0) && !bParam2) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
		{
			if (uParam0->f_433)
			{
				func_558();
				uParam0->f_433 = 0;
			}
			func_559(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
			}
			func_324(uParam0);
			func_549(uParam0, 128, 1);
			func_549(uParam0, 256, 1);
			func_549(uParam0, 4096, 1);
			func_549(uParam0, 32768, 1);
			func_549(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_560(uParam0) || bParam2)
	{
		if (!func_552(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
			{
				if (func_560(uParam0) >= func_557(uParam0))
				{
				}
				Var4 = { func_257(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_561(uParam0);
				}
				Var4 = { func_257(uParam0) };
				iVar12 = 256;
				if (!func_552(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_348 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_344), iVar12, &Var4, false, true);
				func_562(uParam0, 0, 0, 0, 0);
				func_550(uParam0, 128);
			}
		}
	}
	if (func_552(uParam0, 128))
	{
		if (func_552(uParam0, 256) && !func_552(uParam0, 4194304))
		{
			return 1;
		}
		func_563(uParam0);
		if (!uParam0->f_433)
		{
			if (func_564())
			{
				func_565(4096);
				uParam0->f_433 = 1;
			}
		}
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_348, 1, 0))
		{
			bVar13 = true;
			Var15 = { func_547(uParam0) };
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
			if (!func_552(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_348, &Var15))
				{
					if (!func_552(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_348, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_348, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_348, &Var15);
						}
						func_550(uParam0, 16777216);
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
			func_550(uParam0, 256);
			func_549(uParam0, 4194304, 1);
			return 1;
		}
	}
	return 0;
}

void func_263(var uParam0)
{
}

bool func_264(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

int func_265(var uParam0, char* sParam1, int iParam2)
{
	if (func_264(sParam1, 2))
	{
		return 0;
	}
	if (func_264(sParam1, 1))
	{
		return 0;
	}
	if (iParam2 < sParam1->f_11 || iParam2 > sParam1->f_13)
	{
		return 0;
	}
	if ((func_566(sParam1) == 9 || func_566(sParam1) == 12) || func_566(sParam1) == 13)
	{
		if (!func_264(sParam1, 8))
		{
			if (iParam2 == sParam1->f_11)
			{
				func_567(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return 1;
		}
	}
	if (iParam2 >= sParam1->f_11)
	{
		return func_568(uParam0, func_566(sParam1));
	}
	return 0;
}

void func_266(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::START_AUDIO_SCENE(sParam0);
	}
	func_567(sParam0, 1);
}

int func_267(var uParam0, char* sParam1, int iParam2)
{
	if (!func_264(sParam1, 1))
	{
		return 0;
	}
	if (func_264(sParam1, 2))
	{
		return 0;
	}
	if (iParam2 > sParam1->f_13)
	{
		return 1;
	}
	if ((func_569(sParam1) == 9 || func_569(sParam1) == 12) || func_569(sParam1) == 13)
	{
		if (!func_264(sParam1, 8))
		{
			if (iParam2 == sParam1->f_13)
			{
				func_567(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return 1;
		}
	}
	if (iParam2 >= sParam1->f_13)
	{
		return func_568(uParam0, func_569(sParam1));
	}
	return 0;
}

void func_268(char* sParam0)
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
	func_567(sParam0, 2);
}

int func_269(var uParam0, char* sParam1, int iParam2)
{
	if (func_264(sParam1, 1))
	{
		return 0;
	}
	if (func_566(sParam1) == 2)
	{
		return uParam0->f_177 == 2;
	}
	if (func_566(sParam1) == 0)
	{
		if (uParam0->f_177 == 6 && func_570(uParam0) == -1)
		{
			return 1;
		}
	}
	if (sParam1->f_11 != iParam2)
	{
		if (((func_566(sParam1) == 9 || func_566(sParam1) == 12) || func_566(sParam1) == 13) && func_264(sParam1, 8))
		{
			return 1;
		}
		return 0;
	}
	switch (func_566(sParam1))
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
			if (!func_264(sParam1, 8))
			{
				func_567(sParam1, 8);
			}
			break;
	}
	return 0;
}

void func_270(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::_0x2B9C37C01BF25EDB(sParam0);
	}
	func_567(sParam0, 1);
}

int func_271(char* sParam0, bool bParam1)
{
	if (func_264(sParam0, 1))
	{
		return 0;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		AUDIO::PREPARE_MUSIC_EVENT(sParam0);
		func_567(sParam0, 1);
		return 1;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_567(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_567(sParam0, 1);
			return 0;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_567(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_567(sParam0, 1);
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
		func_567(sParam0, 1);
		return 1;
	}
	func_567(sParam0, 1);
	return 0;
}

void func_272(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_482)
	{
		if ((func_264(uParam0->f_482[iVar0 /*16*/], 1048576) && func_264(uParam0->f_482[iVar0 /*16*/], 4)) && !func_264(uParam0->f_482[iVar0 /*16*/], 1))
		{
			AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_482[iVar0 /*16*/]);
			return;
		}
		iVar0++;
	}
}

int func_273(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
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
		if (!func_571(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_572(uParam0, 0))
			{
				if (func_573(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_574(uParam0, 1, &iVar0))
					{
					}
					if (func_575(uParam0, 3, &cVar2))
					{
					}
					if (func_574(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_574(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_574(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_574(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_574(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 15 && uParam0->f_785 < 15)
						{
							if (!func_576(uParam0, &cVar2, uParam0->f_785))
							{
								*((*uParam0)[uParam0->f_785 /*16*/]) = { cVar2 };
								func_567((*uParam0)[uParam0->f_785 /*16*/], 1048576);
								uParam0->f_785++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 15 && uParam0->f_786 < 15)
						{
							*(uParam0->f_241[uParam0->f_786 /*16*/]) = { cVar2 };
							func_567(uParam0->f_241[uParam0->f_786 /*16*/], 1048576);
							uParam0->f_786++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 16 && uParam0->f_787 < 16)
						{
							*(uParam0->f_482[uParam0->f_787 /*16*/]) = { cVar2 };
							func_567(uParam0->f_482[uParam0->f_787 /*16*/], 1048576);
							if (!bVar19 && func_264(&cVar2, 4))
							{
								AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_482[uParam0->f_787 /*16*/]);
								bVar19 = true;
							}
							uParam0->f_787++;
						}
					}
					else if (iVar0 < 2 && uParam0->f_788 < 2)
					{
						if (!func_576(&(uParam0->f_739), &cVar2, uParam0->f_788))
						{
							*(uParam0->f_739[uParam0->f_788 /*16*/]) = { cVar2 };
							func_567(uParam0->f_739[uParam0->f_788 /*16*/], 1048576);
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
			if (func_572(uParam0, 12))
			{
				if (func_574(uParam0, 13, &iVar0))
				{
				}
				if (func_574(uParam0, 14, &iVar1))
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
		func_577(uParam0);
	}
	return 1;
}

bool func_274(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_275(var uParam0)
{
	func_578(uParam0, 0f);
}

bool func_276(var uParam0)
{
	return func_274(*uParam0, 2);
}

int func_277()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_278(var uParam0)
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
		func_579(vVar0, 2.5f, 1, 0, 0, 0, 0);
		_NAMESPACE49::_0x9D16896F0DBE78A2(vVar0, 2.5f);
		if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 524288))
		{
			((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = func_580(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, vVar0, 0, 1, 1, 0, 1, 1, 0, 1, 1);
		}
		else
		{
			((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = func_580(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, vVar0, 0, 1, 1, 0, 1, 1, 1, 1, 0);
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

int func_279(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = func_95(uParam0);
	iVar1 = 0;
	iVar2 = 1;
	if (func_296(uParam0) && !func_581(uParam0))
	{
		iVar1 = 1;
		if (iVar0 != 0)
		{
			iVar2 = 0;
		}
	}
	if (!HUD::_0xD0976CC34002DB57("BHCR"))
	{
		return 0;
	}
	if (!func_582())
	{
		return 0;
	}
	if (!func_329(&uLocal_928, vLocal_15, 3, -1082130432))
	{
		return 0;
	}
	if (!func_583())
	{
		return 0;
	}
	func_584(551513105);
	if (!PATHFIND::_0x5AC0944C156E5F44("BH_LaramieSleeping"))
	{
		FIRE::STOP_FIRE_IN_RANGE(vLocal_15, 30f);
		MISC::CLEAR_AREA(vLocal_15, 30f, 16384);
		MISC::CLEAR_AREA(vLocal_15, 30f, 2097152);
		MISC::CLEAR_AREA(vLocal_15, 30f, 65536);
		PATHFIND::_0x7C334FF4D9215912("BH_LaramieSleeping");
	}
	if (!func_585(551513105))
	{
		return 0;
	}
	if (iVar1 == 1)
	{
		MISC::_0x59174F1AFE095B5A(1632247697, true, true, false, 0f, false);
	}
	else
	{
		MISC::_0x59174F1AFE095B5A(1632247697, false, true, true, 20f, false);
	}
	if (!func_586(uParam0, &Local_40))
	{
		return 0;
	}
	if (iVar2 == 1)
	{
		if (!func_587(uParam0))
		{
			return 0;
		}
		if (!func_588(uParam0))
		{
			return 0;
		}
		if (((((((((ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_26[0])) && ANIMSCENE::IS_ANIM_SCENE_LOADED(&(iLocal_26[0]), 1, 0)) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_26[1]))) && ANIMSCENE::IS_ANIM_SCENE_LOADED(&(iLocal_26[1]), 1, 0)) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_26[2]))) && ANIMSCENE::IS_ANIM_SCENE_LOADED(&(iLocal_26[2]), 1, 0)) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_26[4]))) && ANIMSCENE::IS_ANIM_SCENE_LOADED(&(iLocal_26[4]), 1, 0)) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_26[3]))) && ANIMSCENE::IS_ANIM_SCENE_LOADED(&(iLocal_26[3]), 1, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_125[0 /*85*/])) && !ENTITY::IS_ENTITY_DEAD(&(Local_125[0 /*85*/])))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(&(iLocal_26[3]));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_125[0 /*85*/]), true);
				TASK::_TASK_USE_SCENARIO_POINT(&(Local_125[0 /*85*/]), &(iLocal_916[4]), 0, 0, 0, 1, 0, 0, -1082130432, 0);
				func_221(&((Local_125[0 /*85*/])->f_6), 2048);
				func_305(Local_125[0 /*85*/], 6, 1, 0);
			}
			if ((ENTITY::DOES_ENTITY_EXIST(&(Local_125[1 /*85*/])) && !ENTITY::IS_ENTITY_DEAD(&(Local_125[1 /*85*/]))) && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(&(iLocal_26[0]), 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_125[1 /*85*/]), true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(iLocal_26[0]), "male_b", &(Local_125[1 /*85*/]), 0);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(&(iLocal_26[0]), "bool_sleep", false, false);
				ANIMSCENE::START_ANIM_SCENE(&(iLocal_26[0]));
				func_305(Local_125[1 /*85*/], 2, 1, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_40) && !ENTITY::IS_ENTITY_DEAD(Local_40))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(&(iLocal_26[1]));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_40, true);
				TASK::_TASK_USE_SCENARIO_POINT(Local_40, &(iLocal_916[6]), 0, 0, 0, 1, 0, 0, -1082130432, 0);
				func_305(&Local_40, 7, 1, 0);
			}
			if (((ENTITY::DOES_ENTITY_EXIST(&(Local_125[2 /*85*/])) && !ENTITY::IS_ENTITY_DEAD(&(Local_125[2 /*85*/]))) && ENTITY::DOES_ENTITY_EXIST(iLocal_386)) && !ENTITY::IS_ENTITY_DEAD(iLocal_386))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(&(iLocal_26[2]));
				iLocal_916[8] = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(iLocal_386, 1152090473, 0f, 0f, 0.5f, 80f, 2f, 0, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_125[2 /*85*/]), true);
				TASK::_TASK_USE_SCENARIO_POINT(&(Local_125[2 /*85*/]), &(iLocal_916[8]), "PROP_HUMAN_PASSED_OUT_TABLE_MALE_C", 0, 0, 1, 0, 0, -1082130432, 0);
				func_305(Local_125[2 /*85*/], 8, 1, 0);
			}
			func_589(&(Local_40.f_21), 0, 1);
			func_590(Local_40.f_42[0 /*17*/], "INTERACT_QUESTION", 0, -163964935, 0, 0, 0, 1, 0);
			func_590(Local_40.f_42[1 /*17*/], "INTERACT_CONFRONT", 0, 648122183, 0, 0, 0, 1, 0);
			iVar3 = 0;
			while (iVar3 < Local_125)
			{
				func_591(&(Local_125[iVar3 /*85*/]), 20f, 5f, 90f, -60f, 60f);
				func_589(&((Local_125[iVar3 /*85*/])->f_21), 0, 1);
				func_590((Local_125[iVar3 /*85*/])->f_42[0 /*17*/], "INTERACT_QUESTION", 0, -163964935, 0, 0, 0, 1, 0);
				func_590((Local_125[iVar3 /*85*/])->f_42[1 /*17*/], "INTERACT_CONFRONT", 0, 648122183, 0, 0, 0, 1, 0);
				iVar3++;
			}
			Local_40.f_19 = 994721880;
			Local_40.f_20 = -1738309373;
			(Local_125[0 /*85*/])->f_20 = -1164439736;
			(Local_125[1 /*85*/])->f_20 = -329747768;
			(Local_125[2 /*85*/])->f_20 = -521249804;
			iVar4 = 0;
			while (iVar4 < iLocal_381)
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_381[iVar4])) && !ENTITY::IS_ENTITY_DEAD(&(iLocal_381[iVar4])))
				{
					if (TASK::DOES_SCENARIO_POINT_EXIST(&(iLocal_916[iVar4])))
					{
						if (!PED::_0x9C54041BB66BCF9E(&(iLocal_381[iVar4]), &(iLocal_916[iVar4])))
						{
							ENTITY::_0x203BEFFDBE12E96A(&(iLocal_381[iVar4]), TASK::_0xA8452DD321607029(&(iLocal_916[iVar4]), 1), TASK::_0xB93EA7184BAA85C3(&(iLocal_916[iVar4]), 1), 1, 0, 1);
							ENTITY::_0x9587913B9E772D29(&(iLocal_381[iVar4]), 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(iLocal_381[iVar4]), false);
							TASK::_TASK_USE_SCENARIO_POINT(&(iLocal_381[iVar4]), &(iLocal_916[iVar4]), 0, 0, 0, 1, 0, 0, -1082130432, 0);
							if (iVar4 == 0)
							{
								PHYSICS::_0x06AADE17334F7A40(&(iLocal_381[iVar4]), -2002.13f, 434.23f, 121.75f);
							}
							else if (iVar4 == 1)
							{
								PHYSICS::_0x06AADE17334F7A40(&(iLocal_381[iVar4]), -2002.38f, 434.05f, 121.95f);
							}
							else if (iVar4 == 2)
							{
								PHYSICS::_0x06AADE17334F7A40(&(iLocal_381[iVar4]), -1984.55f, 417.56f, 121.45f);
							}
							else if (iVar4 == 3)
							{
								PHYSICS::_0x06AADE17334F7A40(&(iLocal_381[iVar4]), -1984.64f, 417.9f, 121.58f);
							}
						}
					}
				}
				iVar4++;
			}
			AUDIO::_0x0D7FD6A55FD63AEF(49, 3, 0);
		}
		else
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_26[0])))
			{
				iLocal_26[0] = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@bountyhunting@odriscollssleeping@sleeping_male_b", 0, "pbl_go_to_sleep", false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(&(iLocal_26[0]));
			}
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_26[1])))
			{
				iLocal_26[1] = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@bountyhunting@odriscollssleeping@sleeping_male_c", 0, "pbl_go_to_sleep", false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(&(iLocal_26[1]));
			}
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_26[2])))
			{
				iLocal_26[2] = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@bountyhunting@odriscollssleeping@sleeping_male_d", 0, "pbl_go_to_sleep", false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(&(iLocal_26[2]));
			}
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_26[4])))
			{
				iLocal_26[4] = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@bountyhunting@ODriscollsSleeping@hogtie", 0, "pbl_hogtie_enter_bk", false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(&(iLocal_26[4]));
			}
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_26[3])))
			{
				iLocal_26[3] = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@bountyhunting@ODriscollsSleeping@drunk", 0, "pbl_go_to_sleep", false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(&(iLocal_26[3]));
			}
			return 0;
		}
	}
	func_592(&uLocal_927, vLocal_15, 8f);
	func_593(&iLocal_926, vLocal_15, 8.5f, 1, 45, 0);
	func_490(uParam0, Global_35, "John", 0);
	func_594(&Local_402);
	return 1;
}

int func_280(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0 || ((*Global_1347702)[iParam0 /*49*/])->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_281(int iParam0)
{
	var uVar0;

	uVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_3;
	return MISC::GET_HASH_KEY(&uVar0);
}

void func_282(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

void func_283(int iParam0)
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
	uVar10 = func_595(iParam0, 0);
	iVar11 = uVar10;
	iVar12 = uVar10;
	if (iParam0 == 82 || iParam0 == 83)
	{
		iVar12 = MISC::GET_HASH_KEY("LAW_UI_DUTCH_GANG");
	}
	MemCopy(&cVar0, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 8);
	StringConCat(&cVar0, "_DESC", 64);
	iVar13 = func_280(iParam0);
	UILOG::_UILOG_ADD_ENTRY_HASH(iVar13, func_281(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_24, iVar12, MISC::GET_HASH_KEY(&cVar0), ((*Global_1347702)[iParam0 /*49*/])->f_37);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar13, func_281(iParam0), iVar11, MISC::GET_HASH_KEY("toast_log_blips"));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar8) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar9))
	{
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(iVar13, func_281(iParam0), MISC::GET_HASH_KEY(sVar8), MISC::GET_HASH_KEY(sVar9));
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar13, func_281(iParam0)))
	{
		func_282(iParam0, 4);
	}
}

void func_284(int iParam0)
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
		cVar3 = func_596(0, &Var1, 0, 0, -1, -1);
		func_597(iParam0, &Var1, cVar3, -1082130432);
	}
}

void func_285(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_212(iVar0) && Global_1347702[iVar0 /*49*/] == iParam0)
		{
			bVar1 = true;
			func_240(iVar0, 1);
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

int func_286(int iParam0)
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
		iVar0 = func_392(iParam0);
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

void func_287(int iParam0, bool bParam1)
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
	func_396(iParam0, 1);
	bParam1 = bParam1;
}

void func_288(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_57(iParam0))
	{
		return;
	}
	if (!func_286(iParam0))
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
				func_598(func_111(iParam0));
			}
			if (func_211() != 0)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_109(iParam0), 0);
			}
			else
			{
				STATS::STATSTRACKER_DEED_STARTED(func_109(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_599(iParam0);
	if (!func_57(func_56(0)))
	{
		func_396(iParam0, 3);
		func_209(bParam2);
		if (func_211() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
			}
			func_395(1);
		}
		func_600(iParam0, -1);
		if (bParam1 && !func_60(2))
		{
			func_601(&Global_0, 1024);
		}
		if (func_211() == -1)
		{
			func_602(&(Global_1347343->f_11), 536870912);
			func_603(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_604(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_605(0);
			}
		}
		if (func_211() == -1)
		{
			iVar1 = func_423(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_425();
				switch (iVar1)
				{
					case 0:
						func_606(0);
						break;
					case 1:
						func_606(1);
						break;
					case 2:
						func_606(2);
						break;
					case 3:
						func_606(3);
						break;
					case 4:
						func_606(4);
						break;
					case 5:
						func_606(5);
						break;
					case 6:
						func_606(5);
						break;
					case 7:
						func_606(7);
						break;
					case 8:
						func_606(8);
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
						func_606(11);
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
						func_606(11);
						break;
					default:
						iVar1 = func_425();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_607(0);
									break;
								case 1:
									func_607(1);
									break;
								case 2:
									func_607(2);
									break;
								case 3:
									func_607(3);
									break;
								case 4:
									func_607(4);
									break;
								case 5:
									func_607(5);
									break;
								case 6:
									func_607(5);
									break;
								case 7:
									func_607(7);
									break;
								case 8:
									func_607(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_399(1);
	}
	else
	{
		func_600(iParam0, -1);
		func_396(iParam0, 4);
	}
	func_426(iParam0, 0);
}

void func_289(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_290(var uParam0)
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

void func_291(bool bParam0, int iParam1, bool bParam2)
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

void func_292()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_413(iVar0))
		{
			func_528(iVar0, 30, 1);
		}
		iVar0++;
	}
}

void func_293(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_509(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return;
	}
	else if (func_509(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return;
	}
	if (((((((((((((((uParam0->f_174 == 29 || uParam0->f_174 == 56) || uParam0->f_174 == 57) || uParam0->f_174 == 72) || uParam0->f_174 == 84) || uParam0->f_174 == 85) || uParam0->f_174 == 86) || uParam0->f_174 == 87) || uParam0->f_174 == 88) || uParam0->f_174 == 92) || uParam0->f_174 == 111) || uParam0->f_174 == 102) || uParam0->f_174 == 117) || uParam0->f_174 == 122) || uParam0->f_174 == 149) || uParam0->f_174 == 150)
	{
		iVar0 = 100;
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_revolver_cattleman"), 0, 0))
		{
			if (!func_608(joaat("weapon_revolver_cattleman")))
			{
				func_609(joaat("weapon_revolver_cattleman"));
			}
			func_610(Global_35, joaat("weapon_revolver_cattleman"), 0, 0, 2, 1, 0, 1056964608, 1065353216, iVar0, 0, 0, 0, 0);
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

void func_294(bool bParam0)
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
	func_611(0f);
	Global_1935436->f_11 = 1;
	if (func_367())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_612();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_295(var uParam0)
{
}

int func_296(var uParam0)
{
	if (uParam0->f_174 == func_19())
	{
		return 1;
	}
	return 0;
}

void func_297(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10, bool bParam11)
{
	struct<4> Var0;
	struct<4> Var4;

	if (uParam0->f_752 != iParam9)
	{
		if (uParam0->f_752 > -1)
		{
			func_613(uParam0);
		}
		uParam0->f_752 = iParam9;
		func_614(uParam0);
	}
	if (func_32(uParam0, 128) && func_29())
	{
		func_156(0);
		bParam11 = true;
	}
	if (!bParam11)
	{
		if ((func_300() == iParam9 && func_615() == iParam10) && !func_616(*Global_1347394, 0f, 0f, 0f))
		{
			return;
		}
	}
	if (func_300() != iParam9 && !func_616(*Global_1347394, 0f, 0f, 0f))
	{
		func_153(0);
	}
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_617(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, Var0, Var4, iParam9, iParam10);
}

int func_298(var uParam0)
{
	func_618(&Local_402, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_24, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_18, 0, 0);
	func_329(&uLocal_928, vLocal_15, 3, -1082130432);
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	if (&iLocal_894[0] == 0)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_24, true) < ((*Global_1347702)[uParam0->f_174 /*49*/])->f_18)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT(&(sLocal_900[0])))
			{
				iLocal_894[2] = 0;
				iLocal_894[0] = 1;
			}
		}
	}
	else if (&iLocal_894[2] == 0)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_24, true) > ((*Global_1347702)[uParam0->f_174 /*49*/])->f_18)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT(&(sLocal_900[2])))
			{
				iLocal_894[2] = 1;
				iLocal_894[0] = 0;
			}
		}
	}
	func_216(uParam0);
	func_217(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_40))
	{
		if (func_484(Global_36, vLocal_15, 35f, 1))
		{
			func_221(&iLocal_20, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_40) && ENTITY::IS_ENTITY_DEAD(Local_40))
	{
		iLocal_786 = 1;
		func_221(&iLocal_20, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_40) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_40, Global_35, 1, 1))
	{
		iLocal_786 = 1;
		func_221(&iLocal_20, 1);
	}
	if (func_219(iLocal_20, 4096))
	{
		iLocal_786 = 1;
		func_221(&iLocal_20, 1);
	}
	if (func_219(iLocal_20, 512))
	{
		iLocal_786 = 1;
		func_221(&iLocal_20, 1);
	}
	if (func_219(iLocal_20, 1))
	{
		return 1;
	}
	return 0;
}

int func_299(var uParam0)
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
				func_619(0, 1, 1, 1);
				uParam0->f_171 = 1;
			}
			else
			{
				return 1;
			}
			break;
		case 1:
			func_619(0, 1, 1, 1);
			if (func_620(Global_35, &(uParam0->f_747), 0, 0, 0, 1084227584, 100, 0, 0))
			{
				func_161(uParam0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_300()
{
	return Global_1572864->f_9;
}

int func_301(var uParam0)
{
	if (!func_79(uParam0))
	{
		func_80(uParam0, 0);
	}
	if (STREAMING::GET_NUMBER_OF_STREAMING_REQUESTS() == 0)
	{
		return 1;
	}
	if (func_474(uParam0) > 15f)
	{
		return 1;
	}
	return 0;
}

void func_302(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_503(((*Global_1347702)[iParam0 /*49*/])->f_15);
	func_220(&iVar0, iParam1);
	func_621(((*Global_1347702)[iParam0 /*49*/])->f_15, iVar0);
}

void func_303(int iParam0, int iParam1)
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

int func_304(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_503(((*Global_1347702)[iParam0 /*49*/])->f_15);
	if (func_219(iVar0, iParam1))
	{
		return 1;
	}
	return 0;
}

void func_305(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iParam0->f_4 = iParam2;
	iParam0->f_2 = iParam1;
	if (iParam3 != -1)
	{
		iParam0->f_5 = iParam3;
	}
}

void func_306(int iParam0, bool bParam1, bool bParam2)
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

int func_307(int iParam0, int iParam1)
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

void func_308(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = -1;
	iVar1 = func_622(iParam1);
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
				func_623(iVar0, iParam0, iParam1, 0);
				return;
			}
			iVar2++;
		}
		if (iVar2 >= iVar1)
		{
			func_624(iParam0, iParam1);
			return;
		}
		iVar0++;
	}
	if (iVar3 < 0)
	{
		return;
	}
	func_623(iVar3, iParam0, iParam1, 0);
}

void func_309(int iParam0, int iParam1, var uParam2)
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

void func_310(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_625(iParam0, sParam4, iParam5);
	}
	func_626(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_311()
{
	int iVar0;

	iVar0 = func_517();
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
	if (!func_6(uParam0->f_172, 512))
	{
		if (!func_627(uParam0))
		{
			return 0;
		}
		func_226(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 128);
		if (func_255(uParam0))
		{
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_751);
			func_1(&(uParam0->f_172), 512);
		}
		return 0;
	}
	func_619(0, 1, 1, 1);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_751) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_751, 0))
	{
		func_1(&(uParam0->f_172), 1024);
		func_2(&(uParam0->f_172), 256);
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
		if (!func_628(uParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_318(var uParam0, var uParam1)
{
	struct<8> Var0;

	if (func_183(uParam1, 32768))
	{
		Var0 = { func_547(uParam0) };
		func_259(uParam0, &Var0);
		if (func_183(uParam1, 131072))
		{
			func_550(uParam0, 268435456);
			if (func_260(uParam0->f_409))
			{
				uParam0->f_409 = { func_629(uParam1, uParam1->f_1580) };
			}
			if (func_260(uParam0->f_406))
			{
				uParam0->f_406 = { func_629(uParam1, uParam1->f_1580) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_406, &(uParam0->f_406.f_2), 0);
				uParam0->f_406.f_2 = (uParam0->f_406.f_2 + 0.5f);
			}
		}
		if (func_183(uParam1, 268435456))
		{
			func_630(&(uParam0->f_404), 16384);
		}
	}
	else if (func_183(uParam1, 524288))
	{
		func_550(uParam0, 67108864);
		func_631(uParam1, 524288);
	}
	if (func_632(uParam1, 128))
	{
		func_550(uParam0, 32);
	}
	if (uParam1->f_1799 != 0)
	{
		uParam0->f_416 = uParam1->f_1799;
		if (uParam1->f_1580 >= 0 && func_633(uParam1->f_912[uParam1->f_1580 /*41*/], 256))
		{
			func_630(&(uParam0->f_404), 524288);
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

	if (iParam1 || !func_6(uParam0->f_172, 16384))
	{
		MemCopy(&uVar0, {func_634(uParam0->f_174)}, 8);
		func_635(&uVar0, 15000, 0, 0, 0, 1);
		func_1(&(uParam0->f_172), 16384);
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
	iVar0 = func_636();
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
		func_637();
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::_0xD2CB0FB0FDCB473D(iVar0, 0);
	func_638(-1);
	func_639(3);
	return 1;
}

void func_322(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_640(iParam0, &iVar0, &iVar1);
	if (!func_641(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_642(iVar0, iVar1);
}

int func_323(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;

	func_553(uParam4, &sParam0);
	if (func_552(uParam4, 2) && !func_552(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -842734359, false);
	}
	if (func_643(uParam4) != 1)
	{
		func_644(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_643(uParam4))
	{
		case 1:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_348, 1, 0))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_348, 0))
				{
					func_645(uParam4, &sParam0, uParam5);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
				{
					func_646(uParam4, 4);
					return 0;
				}
				else
				{
					if (func_647(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_341);
					}
					func_648(uParam5);
				}
				func_646(uParam4, 3);
			}
			else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_350)) && func_552(uParam4, 134217728))
				{
				}
				else
				{
					func_258(uParam4);
				}
				func_275(&(uParam4->f_1));
				func_646(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_563(uParam4);
				if (!func_79(&(uParam4->f_1)))
				{
					func_80(&(uParam4->f_1), 0);
				}
				else if (func_474(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					func_646(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_348, 1, 0))
			{
				if (func_262(uParam4, &sParam0, 1, 1))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_348, 1, 0))
					{
						func_646(uParam4, 4);
					}
					else if (!func_260(func_554(uParam4)) && !func_498(Global_35, func_554(uParam4), 100f, 1, 1))
					{
						func_649(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_554(uParam4), 0f, 1, 1, 1, 0);
					}
				}
				else if (func_474(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					func_646(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
					func_650(1, 0);
					func_645(uParam4, &sParam0, uParam5);
					func_646(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_474(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
				}
				func_646(uParam4, 4);
			}
			break;
		case 3:
			func_651(uParam4);
			if (func_647(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_341);
			}
			func_648(uParam5);
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_348, 0)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348) || func_552(uParam4, 512)))
			{
				if (!func_552(uParam4, 1024) && func_652(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_552(uParam4, 512))
				{
					func_275(&(uParam4->f_1));
					func_550(uParam4, 512);
					func_646(uParam4, 4);
				}
				else if (func_552(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_644(uParam4);
			}
			if (func_552(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_653(uParam4) - func_654(uParam4)))) <= 2f)
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
				if (func_655(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_654(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (func_656(uParam4))
			{
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
				}
				func_657(uParam4);
				func_658(uParam4);
				return 1;
			}
			else
			{
				if (func_552(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_348);
						}
						func_275(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						func_550(uParam4, 512);
						func_549(uParam4, 67108864, 1);
						func_646(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_552(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348)) && CAM::IS_SCREEN_FADED_OUT()) && func_654(uParam4) <= 5000) && func_654(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!func_552(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_659(&(uParam4->f_405), 0);
					func_550(uParam4, 536870912);
				}
				if (func_654(uParam4) >= 5000 && func_654(uParam4) <= (func_653(uParam4) - 5000))
				{
					func_660();
				}
			}
			break;
		case 6:
			if (func_656(uParam4))
			{
				func_657(uParam4);
				func_658(uParam4);
				return 1;
			}
			break;
		case 4:
			if (func_552(uParam4, 524288))
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
						func_550(uParam4, 1073741824);
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
					if (func_661(uParam5))
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, 0);
						}
						func_646(uParam4, 3);
					}
					else if (func_474(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, 0);
						}
						func_646(uParam4, 3);
					}
				}
				if (func_643(uParam4) == 3)
				{
					if (func_552(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			func_646(uParam4, 4);
			break;
	}
	return 0;
}

void func_324(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_552(uParam0, 16))
		{
			POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_4);
			POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_4);
			func_662(uParam0);
			PATHFIND::RESET_ROADS_IN_VOLUME(uParam0->f_4, 0);
		}
	}
	if (func_552(uParam0, 8))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_4);
		func_549(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_549(uParam0, 16, 1);
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
	func_663(&(uParam0->f_753));
	StringCopy(&(uParam0->f_2581), "", 32);
	uParam0->f_2571 = 0;
	func_2(&(uParam0->f_172), 262144);
	func_2(&(uParam0->f_172), 524288);
	func_2(&(uParam0->f_172), 1048576);
}

int func_327(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
	if (func_664(uParam0) >= 3)
	{
		uParam0->f_1792 = func_524(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
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
		func_665(uParam0);
	}
	if (func_664(uParam0) < 10)
	{
		if (func_664(uParam0) == 3)
		{
			func_666(uParam0, iParam5, bParam6);
		}
		else if (func_664(uParam0) > 3)
		{
			if (func_667(uParam0) == 0)
			{
				if (!func_183(uParam0, 524288))
				{
					func_668(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_669(uParam0, 4);
					func_670(uParam0, 10);
					func_671(uParam0, iParam5);
					return 1;
				}
			}
			if (!func_183(uParam0, 67108864) && !Global_1935630->f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!func_633(uParam0->f_912[uParam0->f_1580 /*41*/], 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
				PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
			}
			CAM::_0x8910C24B7E0046EC();
			func_672(0);
			func_673();
			PAD::DISABLE_CONTROL_ACTION(0, -1722177808, false);
			PAD::DISABLE_CONTROL_ACTION(0, 1644850270, false);
			PAD::DISABLE_CONTROL_ACTION(0, 2139949496, false);
			if (uParam0->f_1580 >= 0)
			{
				if (!func_633(uParam0->f_912[uParam0->f_1584 /*41*/], 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (func_674(uParam0, uParam0->f_1580))
				{
					if (func_675(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						func_676(uParam0, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1584 /*22*/])->f_1, 1065353216);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					func_676(uParam0, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1584 /*22*/])->f_1, 1065353216);
				}
				func_677(uParam0);
			}
		}
	}
	bVar0 = func_678(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
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
				func_679(uParam0, 131072);
				func_679(uParam0, 268435456);
			}
		}
		if (func_632(uParam0, 64) || (uParam0->f_1580 >= 0 && !func_633(uParam0->f_912[uParam0->f_1580 /*41*/], 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || func_667(uParam0) == 0)
			{
				HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_664(uParam0) == 3 || func_183(uParam0, 131072))
	{
		func_680(uParam0);
		if (!func_183(uParam0, 262144))
		{
			if ((bVar0 && func_183(uParam0, 65536)) || func_183(uParam0, 131072))
			{
				func_679(uParam0, 32768);
				func_669(uParam0, 4);
				func_670(uParam0, 10);
				uParam0->f_1665 = 1;
				func_671(uParam0, iParam5);
				return 1;
			}
		}
	}
	if (func_664(uParam0) >= 3)
	{
		func_681(uParam0, iParam5);
		func_682(uParam0);
		if (!func_683(uParam0, 1))
		{
			func_684(uParam0);
		}
		func_685(uParam0);
	}
	switch (func_664(uParam0))
	{
		case 0:
			func_686(uParam0, Param1, iParam5);
			break;
		case 1:
			func_687(uParam0);
			break;
		case 2:
			func_688(uParam0);
			break;
		case 3:
			if (func_328(uParam0))
			{
				func_689(2);
				func_676(uParam0, (uParam0->f_912[uParam0->f_1580 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1580 /*22*/])->f_1, 1065353216);
				func_275(&(uParam0->f_1768));
				func_669(uParam0, 1);
				func_690();
				func_670(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!func_183(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (func_664(uParam0) == 5)
			{
				if (func_691(uParam0))
				{
					func_669(uParam0, 2);
					func_670(uParam0, 6);
				}
			}
			if (func_664(uParam0) == 6)
			{
				if (func_692(uParam0))
				{
					func_669(uParam0, 3);
					func_670(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || func_693(&(uParam0->f_1768)) >= 15f)
			{
				if (func_694(uParam0, iParam5))
				{
					if (func_695(uParam0))
					{
						uParam0->f_1581 = func_696(uParam0);
						func_275(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
						HUD::_0x8BC7C1F929D07BF3(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
						func_669(uParam0, 6);
						func_670(uParam0, 9);
					}
					else
					{
						func_669(uParam0, 4);
						func_670(uParam0, 10);
						func_671(uParam0, iParam5);
						return 1;
					}
				}
			}
			break;
		case 9:
			if (func_694(uParam0, iParam5))
			{
				func_671(uParam0, iParam5);
				func_670(uParam0, 10);
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

int func_329(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	char* sVar0;

	if (func_697(uParam0->f_1, 1))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
		{
			if (func_697(uParam0->f_1, 16))
			{
				func_698(uParam0, vParam1, iParam4, fParam5);
			}
			else
			{
				func_699(uParam0, vParam1, iParam4, fParam5);
			}
		}
		return 1;
	}
	STREAMING::REQUEST_NAMED_PTFX_ASSET(-458373790);
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(-458373790))
	{
		if (!func_697(uParam0->f_1, 8))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
				sVar0 = "scr_campfire_distance_smoke_script";
				uParam0->f_2 = func_700(MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam1, true));
				uParam0->f_3 = func_702(func_701(iParam4));
				if (uParam0->f_3 > 10f)
				{
					uParam0->f_3 = 10f;
				}
				if (uParam0->f_2 > uParam0->f_3)
				{
					uParam0->f_2 = uParam0->f_3;
				}
				uParam0->f_5 = func_703(iParam4);
				uParam0->f_5 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::FLOOR((uParam0->f_5 - 15f)), BUILTIN::FLOOR((uParam0->f_5 + 15f))));
				uParam0->f_5 = (uParam0->f_5 / 255f);
				*uParam0 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(sVar0, vParam1, 0f, 0f, 0f, func_704(iParam4), false, false, false, false);
				uParam0->f_4 = MISC::GET_FRAME_COUNT();
				if (func_705(vParam1, 1) > (CAM::GET_GAMEPLAY_CAM_FOV() + 15f))
				{
					GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_3);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, 1f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
					func_447(&(uParam0->f_1), 16);
				}
				else
				{
					GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_2);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, 0f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
				}
				func_447(&(uParam0->f_1), 1);
				return 1;
			}
		}
	}
	return 0;
}

void func_330(var uParam0)
{
	if (!func_219(iLocal_20, 16384))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_40))
		{
			if (PED::IS_PED_HOGTIED(Local_40) || ENTITY::IS_ENTITY_DEAD(Local_40))
			{
				if (func_493(&Local_125, 1) == 0 || (func_494(Local_40, 0) && !func_498(Local_40, vLocal_15, 50f, 1, 1)))
				{
					func_297(uParam0, func_61(1), func_61(2), 1, 2, 0);
					AUDIO::TRIGGER_MUSIC_EVENT(&(sLocal_900[2]));
					AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
					func_221(&iLocal_20, 16384);
				}
			}
		}
	}
	if (!func_219(iLocal_20, 32768))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_40))
		{
			if (func_494(Local_40, 0))
			{
				if (fLocal_39 < 30f)
				{
					func_297(uParam0, func_61(2), func_61(3), 2, 3, 0);
					func_221(&iLocal_20, 32768);
				}
			}
		}
	}
}

int func_331(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = MAP::_0xA6EF0C54A3443E70(iParam0, iParam1);
	if (bParam2)
	{
		MAP::_0x662D364ABF16DE2F(iVar0, 231194138);
	}
	return iVar0;
}

int func_332(int iParam0, float fParam1, float fParam2, float fParam3)
{
	float fVar0;

	fVar0 = func_475(Global_35, iParam0, 1, 1);
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
		if (func_706(iParam0, 1, 1, 1, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_333(int iParam0, int iParam1, float fParam2, bool bParam3)
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

void func_334(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_335(var uParam0)
{
	int iVar0;

	if (func_219(uParam0->f_329, 262144))
	{
		return;
	}
	if (!func_385(uParam0->f_67, 0) || PED::IS_PED_HOGTIED(uParam0->f_67))
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

void func_336(var uParam0, int iParam1, bool bParam2)
{
	char* sVar0;

	_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	if (bParam2)
	{
		if (func_219(uParam0->f_330, iParam1))
		{
			bParam2 = false;
		}
	}
	switch (iParam1)
	{
		case 2:
			if (func_707(uParam0->f_65))
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
			func_708(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_709(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 4:
			if (func_219(uParam0->f_329, 1048576))
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
			func_708(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_709(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 8:
			sVar0 = "BNTY_O_HOGA";
			func_708(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_709(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 16:
			if (func_219(uParam0->f_329, 1048576))
			{
				return;
			}
			if (!func_472(uParam0->f_67))
			{
				sVar0 = "BNTY_O_PICKA";
			}
			else
			{
				sVar0 = "BNTY_O_PICKD";
			}
			func_708(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_709(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 64:
			if (func_219(uParam0->f_329, 1048576))
			{
				return;
			}
			sVar0 = "BNTY_O_MOUNT";
			func_708(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_709(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 128:
			if (!func_472(uParam0->f_67))
			{
				sVar0 = "BNTY_O_PICKA";
			}
			else
			{
				sVar0 = "BNTY_O_PICKD";
			}
			func_708(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_709(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 32:
			if (func_219(uParam0->f_329, 1048576))
			{
				return;
			}
			if (!func_472(uParam0->f_67))
			{
				sVar0 = "BNTY_O_RTA";
			}
			else
			{
				sVar0 = "BNTY_O_RTD";
			}
			func_708(uParam0, bParam2, sVar0, &(uParam0->f_325), func_710(uParam0->f_300));
			if (bParam2)
			{
				func_711(sVar0, uParam0);
			}
			break;
		case 256:
			if (func_219(uParam0->f_329, 1048576))
			{
				return;
			}
			if (func_385(uParam0->f_67, 2) && ((PED::IS_PED_FLEEING(uParam0->f_67) || PED::IS_PED_ON_MOUNT(uParam0->f_67)) || PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_67, false)))
			{
				sVar0 = "BNTY_W_DIST_E";
			}
			else
			{
				sVar0 = "BNTY_W_DIST_R";
			}
			func_708(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_709(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 512:
			sVar0 = "BNTY_W_RJL";
			func_708(uParam0, bParam2, sVar0, func_710(uParam0->f_300), 0);
			if (bParam2)
			{
				func_709(MISC::_CREATE_VAR_STRING(10, sVar0, func_710(uParam0->f_300)), 7500, 0, 0, 0, 1);
			}
			break;
		case 1024:
			if (!func_472(uParam0->f_67))
			{
				sVar0 = "BNTY_O_JLA";
			}
			else if (func_712(uParam0))
			{
				sVar0 = "BNTY_O_JLW";
			}
			else
			{
				sVar0 = "BNTY_O_JLD";
			}
			func_708(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_709(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 2048:
			if (func_713(uParam0))
			{
				sVar0 = "BNTY_O_CHIEF";
			}
			else
			{
				sVar0 = "BNTY_O_SHRF";
			}
			func_708(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				func_366(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
		case 4096:
			if (func_713(uParam0))
			{
				sVar0 = "BNTY_R_CHIEF";
			}
			else
			{
				sVar0 = "BNTY_R_SHRF";
			}
			func_708(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				func_366(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
		case 8192:
			sVar0 = "BNTY_O_RWRD";
			func_708(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				func_366(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
	}
	if (bParam2)
	{
		func_221(&(uParam0->f_330), iParam1);
	}
}

void func_337(var uParam0)
{
	if (func_714() || uParam0->f_375 == 2)
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
		func_410(uParam0);
	}
}

void func_338(int iParam0)
{
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_906))
	{
		if (STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			if (func_494(iParam0, 0))
			{
				if (func_482("RBT03_PUKE2") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("RBT03_PUKE2") == 0)
				{
					iLocal_906 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_human_puke", iParam0, -0.075f, -0.125f, 0f, 0f, 0f, 0f, 21030, 1.5f, false, false, false);
				}
			}
		}
	}
	else if (func_487(43) && !func_482("RBT03_PUKE2"))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_906, false);
	}
}

int func_339(var uParam0, bool bParam1)
{
	func_715(uParam0);
	func_716(uParam0);
	if (func_717(uParam0))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	switch (uParam0->f_59)
	{
		case 0:
			Global_1392235->f_4 = 1;
			func_718(uParam0, 1);
			break;
		case 1:
			if (func_717(uParam0))
			{
				uParam0->f_308 = VOLUME::_0x10157BC3247FF3BA(func_222(uParam0->f_300), 0f, 0f, 0f, 20f, 20f, 20f, func_719());
				func_720(uParam0->f_308, "BountyHuntingRewardVolume", 1, 0, 0, 0, -1082130432);
				if (uParam0->f_300 == 26)
				{
					uParam0->f_72 = PED::ADD_SCENARIO_BLOCKING_AREA(-1813.668f, -353.7011f, 160.4116f, -1811.668f, -351.7011f, 162.4116f, false, 15);
				}
				uParam0->f_309 = VOLUME::_0x10157BC3247FF3BA(func_721(uParam0->f_300), 0f, 0f, 0f, 4f, 4f, 4f, "Scenario Blocking");
				uParam0->f_73 = PED::_0x4C39C95AE5DB1329(uParam0->f_309, 0, 15);
				ENTITY::_0x18FF3110CF47115D(uParam0->f_67, 1, 0);
				if (!Global_1935630->f_12)
				{
					if (func_722())
					{
						func_723(uParam0, Global_35, "John");
					}
					else
					{
						func_723(uParam0, Global_35, "Arthur");
					}
				}
				func_724(uParam0, 1);
				func_725(uParam0);
				func_726(uParam0->f_300);
				func_727(uParam0->f_300);
				func_718(uParam0, 2);
			}
			break;
		case 2:
			if (func_728(uParam0))
			{
				func_729(uParam0);
				func_410(uParam0);
				func_718(uParam0, 3);
			}
			break;
		case 3:
			if (bParam1)
			{
				func_730(uParam0);
			}
			func_731(uParam0);
			func_732(uParam0);
			if (func_484(Global_36, func_222(uParam0->f_300), 20f, 1))
			{
				func_410(uParam0);
			}
			if (func_733(uParam0))
			{
				func_729(uParam0);
				func_718(uParam0, 4);
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

int func_340(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
	{
		func_730(uParam0);
	}
	if (func_734(uParam0->f_306, Global_36))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 328, true);
	}
	func_715(uParam0);
	func_731(uParam0);
	func_735(uParam0);
	func_716(uParam0);
	func_732(uParam0);
	if (func_717(uParam0))
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
			func_275(&(uParam0->f_364));
			uParam0->f_367 = 0;
			func_419(uParam0->f_306);
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
						func_275(&(uParam0->f_312));
						func_246(&(uParam0->f_318));
						uParam0->f_361 = 1;
						func_738(uParam0, 4);
					}
				}
				else if (!uParam0->f_367)
				{
					if (func_693(&(uParam0->f_364)) > 10f || !func_498(Global_35, func_745(uParam0->f_300, uParam0->f_65), 30f, 1, 1))
					{
						func_336(uParam0, 2048, 1);
						uParam0->f_367 = 1;
						func_246(&(uParam0->f_364));
					}
				}
			}
			break;
		case 4:
			if (func_474(&(uParam0->f_312)) > 2f || func_746(uParam0))
			{
				if (!func_219(uParam0->f_328, 128))
				{
					if (func_747(uParam0))
					{
						func_748(100, 1);
						func_275(&(uParam0->f_318));
						func_221(&(uParam0->f_328), 128);
					}
				}
				else if (!func_219(uParam0->f_329, 256))
				{
					if (!func_307(Global_35, -76381094) && !func_498(Global_35, func_745(uParam0->f_300, uParam0->f_65), 2f, 1, 1))
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
				func_275(&(uParam0->f_318));
				func_738(uParam0, 6);
			}
			break;
		case 6:
			if (ANIMSCENE::_0xD8254CB2C586412B((uParam0->f_30[0 /*14*/])->f_1, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
				{
					if (!func_307(uParam0->f_69, 150319005))
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

int func_341(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_392(iParam0);
}

int func_342(int iParam0)
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

int func_343(var uParam0)
{
	return uParam0 & 31;
}

int func_344(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_345(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

void func_346(var uParam0)
{
	*uParam0 = 0;
}

void func_347(int iParam0)
{
	if (func_753(179) || func_753(180))
	{
		if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			if (((*Global_1347702)[iParam0 /*49*/])->f_37 == Global_1905944->f_5698)
			{
				func_754(1);
			}
		}
	}
	if (func_755(179))
	{
		func_756(179);
	}
	if (func_755(180))
	{
		func_756(180);
	}
}

void func_348(int iParam0, bool bParam1, vector3 vParam2)
{
	if (!func_212(iParam0))
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
	func_347(iParam0);
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 == 0)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		func_249(iParam0, func_400(iParam0), 0, 1);
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_18 > -1f)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		func_249(iParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		func_249(iParam0, vParam2, 0, 0);
	}
	MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 724623647);
	func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
}

void func_349(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_264((*uParam1)[iVar0 /*16*/], 1048576))
		{
			switch (iParam0)
			{
				case 1:
				case 2:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 5)
					{
						func_271((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
				case 3:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 3)
					{
						func_271((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_350(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_351(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_352(int iParam0)
{
	if (!func_350(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

int func_353()
{
	return &Global_1899515;
}

void func_354(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_23117[iParam0 /*11*/])->f_2 = iParam1;
		return;
	}
	(Global_1058888->f_40615[iParam0 /*11*/])->f_2 = iParam1;
}

void func_355(int iParam0, int iParam1)
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

void func_356(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (&Global_23117[iParam0 /*11*/] - (Global_23117[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0 /*11*/] = (&Global_1058888->f_40615[iParam0 /*11*/] - (Global_1058888->f_40615[iParam0 /*11*/] && iParam1));
}

void func_357(int iParam0)
{
	if (!func_350(iParam0))
	{
		return;
	}
	if (func_229(iParam0))
	{
		func_757(iParam0);
	}
	else
	{
		func_758(iParam0);
	}
}

int func_358(int iParam0)
{
	iParam0 = func_378(iParam0);
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

int func_359(int iParam0)
{
	int iVar0;

	iParam0 = func_378(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_358(iParam0))
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

void func_360(int iParam0)
{
	int iVar0;

	iParam0 = func_378(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_358(iParam0))
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

void func_361(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_212(iVar0))
		{
			if (func_120(iVar0, 4))
			{
				func_362(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_362(int iParam0, bool bParam1)
{
	if (!func_120(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_280(iParam0), func_281(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_280(iParam0), func_281(iParam0), 2, "");
		func_282(iParam0, 16);
	}
	else
	{
		if (func_120(iParam0, 8))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_280(iParam0), func_281(iParam0), 1, "");
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_280(iParam0), func_281(iParam0), 0, "");
		}
		func_121(iParam0, 16);
	}
}

void func_363(int iParam0, bool bParam1)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_120(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_280(iParam0), func_281(iParam0)))
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
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_280(iParam0), func_281(iParam0), 1, "");
		}
		func_282(iParam0, 8);
	}
	else
	{
		if (func_120(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_280(iParam0), func_281(iParam0), 0, "");
		}
		func_121(iParam0, 8);
	}
}

void func_364(int iParam0, char* sParam1, int iParam2, float fParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	sVar0 = func_596(iParam8, sParam1, sParam4, sParam5, sParam6, sParam7);
	if (iParam2 == 1)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	func_597(iParam0, sParam1, sVar0, fParam3);
}

int func_365(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return (func_759(sParam0, 0, 0, -1, -1, 0) && func_760());
}

int func_366(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_709(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_596(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_709(sVar0, iParam1, 0, 0, 1, 1);
}

int func_367()
{
	if (func_211() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_368(int iParam0, int iParam1, int iParam2)
{
	func_761(iParam0, iParam2);
	if (func_762(iParam0))
	{
		func_763(((*Global_1347702)[iParam0 /*49*/])->f_15);
	}
	if (iParam1 == 1)
	{
		if (func_174(((*Global_1347702)[iParam0 /*49*/])->f_15))
		{
			func_175(((*Global_1347702)[iParam0 /*49*/])->f_15, 0, 2);
		}
	}
}

void func_369(int iParam0)
{
	func_372();
	if (!func_212(iParam0))
	{
		return;
	}
	Global_40.f_1093 = Global_1347702[iParam0 /*49*/];
}

int func_370(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 2097152))
		{
			if (func_509(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 0;
			}
		}
		else if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 256))
		{
			if (!func_509(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 0;
			}
		}
	}
	return func_764(iParam0);
}

int func_371(int iParam0)
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
	else if (!func_765(iParam0))
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

void func_372()
{
	int iVar0;
	int iVar1;

	iVar0 = Global_40.f_1093;
	Global_40.f_1093 = -1;
	if (func_766(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < &Global_1347702)
		{
			if (func_212(iVar1) && Global_1347702[iVar1 /*49*/] == iVar0)
			{
				if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iVar1 /*49*/])->f_37))
				{
					func_115(iVar1, 0);
					func_249(iVar1, func_69(iVar1), 0, 0);
				}
			}
			iVar1++;
		}
	}
}

void func_373(int iParam0)
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
		iVar2 = func_595(iParam0, 1);
		iVar0 = iVar2;
		iVar1 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 67108864))
	{
		func_767("MISSION_COMPLETE", &(((*Global_1347702)[iParam0 /*49*/])->f_3), iVar1, iVar0, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, func_281(iParam0));
		func_768("MISSION_COMPLETE", &(((*Global_1347702)[iParam0 /*49*/])->f_3), iVar1, iVar0, 1433015236, "MISSION_COMPLETE_DETAILS", -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
	}
}

var func_374(int iParam0)
{
	char[] cVar0[8];

	if (!func_57(iParam0))
	{
		return cVar0;
	}
	switch (func_110(iParam0))
	{
		case 1:
			cVar0 = ((*Global_1835011)[func_769(iParam0) /*74*/])->f_8;
			break;
		case 8:
			cVar0 = ((*Global_1347702)[func_111(iParam0) /*49*/])->f_3;
			break;
		case 11:
			if (iParam0 == func_513(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_375(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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