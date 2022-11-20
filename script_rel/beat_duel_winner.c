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
	struct<8> Local_19 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_27 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<193> Local_35 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_228 = 0;
	struct<2> Local_229[4];
	int iLocal_238 = 0;
	struct<32> Local_239[14];
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = -1;
	var uLocal_699 = -1;
	var uLocal_700 = 1065353216;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = -1082130432;
	var uLocal_707 = 0;
	var uLocal_708 = 3;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 1065353216;
	var uLocal_738 = 1119092736;
	var uLocal_739 = 1092616192;
	var uLocal_740 = 1085276160;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
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
	var uLocal_760 = -1;
	var uLocal_761 = -1;
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
	struct<87> Local_782 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, -1082130432, -1082130432, -1082130432, 1, 1050253722, 3000, 6000, 0 } ;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = -1;
	int iLocal_873 = 0;
	int iLocal_874 = 0;
	struct<7> Local_875 = { 0, 0, 0, -1, 0, 0, 1 } ;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 15;
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
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	vector3 vLocal_1040 = { 0f, 0f, 10000f };
	int iLocal_1043 = 0;
	int iLocal_1044 = 0;
	int iLocal_1045 = 0;
	struct<21> Local_1046[1];
	struct<17> Local_1068[3];
	int iLocal_1120 = 0;
	var uLocal_1121[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1136[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1151 = 0;
	int iLocal_1152 = 0;
	int iLocal_1153 = 0;
	int iLocal_1154 = 0;
	int iLocal_1155 = 0;
	var uLocal_1156 = 4;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	struct<4> Local_1189[32];
	struct<4> Local_1318 = { 0, 0, 0, 0 } ;
	struct<4> Local_1322 = { 0, 0, 0, 0 } ;
	struct<4> Local_1326 = { 0, 0, 0, 0 } ;
	struct<4> Local_1330 = { 0, 0, 0, 0 } ;
	struct<4> Local_1334 = { 0, 0, 0, 0 } ;
	struct<4> Local_1338 = { 0, 0, 0, 0 } ;
	struct<4> Local_1342 = { 0, 0, 0, 0 } ;
	float fLocal_1346 = 0f;
	float fLocal_1347 = 0f;
	int iLocal_1348 = 0;
	int iLocal_1349 = 0;
	int iLocal_1350 = 0;
	int iLocal_1351 = 0;
	int iLocal_1352 = 0;
	int iLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	int iLocal_1356 = 0;
	int iLocal_1357 = 0;
	int iLocal_1358 = 0;
	bool bLocal_1359 = false;
	vector3 vLocal_1360[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_1367 = 0;
	int iLocal_1368 = 0;
	bool bLocal_1369 = false;
	bool bLocal_1370 = false;
	var uLocal_1371 = 0;
	int iLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	bool bLocal_1376 = false;
	bool bLocal_1377 = false;
	int iLocal_1378 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_1356 = 4;
	iLocal_1378 = -1;
	Local_35.f_3 = func_1(&vScriptParam_0);
	Local_35.f_43 = func_2();
	Local_35.f_161 = func_3(vScriptParam_0.z, 2);
	func_4(&Local_35, 1);
	func_5(&(Local_35.f_5));
	func_6(&(Local_35.f_5), 1);
	func_7(&(Local_35.f_5), 1);
	func_8(&(Local_35.f_5), 0);
	func_9(&(Local_35.f_5), 1);
	func_10(&(Local_35.f_5), 0);
	iLocal_17 = func_11(Local_35.f_3, 1, 0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_1369 = true;
	}
	while (true)
	{
		func_13(bLocal_1369, 944/*func_12*/, 0);
		if (bLocal_1369)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_18)
			{
				case 0:
					if (func_14())
					{
						iLocal_18 = 1;
					}
					break;
				case 1:
					if (func_15(&Local_35, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_16(&Local_35, &iLocal_1372, &uLocal_1371);
						func_17();
						iLocal_18 = 3;
					}
					else if (Local_35.f_160)
					{
						func_12();
					}
					break;
				case 3:
					if (func_18())
					{
						func_19();
						func_20();
						func_21(0);
						func_22();
						if (iLocal_1372 != 10)
						{
						}
						else
						{
							func_23(0, &Local_782, &uLocal_688, -1038090240, 1103626240);
						}
						func_24(&iLocal_238, 32);
						func_25();
						iLocal_18 = 4;
					}
					break;
				case 4:
					if (!func_26(&Local_35, &uLocal_1121, iLocal_17, 0, 1, 0, 1, 0))
					{
						func_12();
					}
					if (!Local_35.f_46)
					{
						if (bLocal_1370)
						{
							if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_1121[0])))
							{
								func_27(&(uLocal_1121[0]));
							}
						}
					}
					if (!Local_35.f_46)
					{
						if (func_28() || func_3(iLocal_238, 268435456))
						{
							if (func_3(iLocal_238, 268435456))
							{
							}
							Local_35.f_46 = 1;
							func_29();
							func_30(&uLocal_1136);
							func_31(Local_875);
							func_32();
							func_33(&Local_1068, 1, 1, 1, 0);
							if (!func_3(iLocal_238, 33554432))
							{
								func_34();
							}
							iLocal_15 = 16;
						}
					}
					if (func_35())
					{
						Local_35.f_50 = 1;
						func_12();
					}
					if (func_36(&Local_35, &uLocal_1121, !Local_35.f_50, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_12();
					}
					break;
			}
			BUILTIN::WAIT(Local_35.f_158);
		}
	}
}

var func_1(var uParam0)
{
	return *uParam0;
}

int func_2()
{
	return Global_1894899->f_2;
}

bool func_3(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_4(var uParam0, bool bParam1)
{
	func_5(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_37("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

void func_5(var uParam0)
{
	func_7(uParam0, 0);
	func_6(uParam0, 0);
	func_38(uParam0, 1);
	func_39(uParam0, 1);
	func_40(uParam0, 0);
	func_9(uParam0, 1);
	func_41(uParam0, 1, 1, 1);
}

void func_6(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_42(&(uParam0->f_1), 2048);
	}
	else
	{
		func_24(&(uParam0->f_1), 2048);
	}
}

void func_7(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_42(&(uParam0->f_1), 16384);
	}
	else
	{
		func_24(&(uParam0->f_1), 16384);
	}
}

void func_8(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_42(&(uParam0->f_1), 1024);
	}
	else
	{
		func_24(&(uParam0->f_1), 1024);
	}
}

void func_9(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_24(uParam0, 256);
	}
	else
	{
		func_42(uParam0, 256);
	}
}

void func_10(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_24(uParam0, 524288);
	}
	else
	{
		func_42(uParam0, 524288);
	}
}

int func_11(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return (func_43(iParam0) % iParam1);
	}
	return (func_44(iParam0) % iParam1);
}

void func_12()
{
	func_45(&iLocal_1043, 1);
	if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_1121[0])))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_1121[0]), false);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uLocal_1121[0]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_1121[1])))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_1121[1]), false);
		PED::SET_PED_CONFIG_FLAG(&(uLocal_1121[1]), 243, false);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uLocal_1121[1]);
	}
	func_46(&Local_35, &uLocal_1121, &uLocal_1136, iLocal_17, iLocal_1372, uLocal_1371, 0, 1, 1, 1);
	if (iLocal_1372 == 10 && func_3(iLocal_238, 32))
	{
		func_23(1, &Local_782, &uLocal_688, -1038090240, 1103626240);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_1151))
	{
		VOLUME::DELETE_VOLUME(iLocal_1151);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_1152))
	{
		VOLUME::DELETE_VOLUME(iLocal_1152);
	}
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), 0, 0, -1, 0);
	func_32();
	if (iLocal_1368)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 514, false);
		iLocal_1368 = 0;
	}
	func_47(&Local_782, &uLocal_688);
	func_48(1);
	func_49();
	func_50();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_13(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_51(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Call_Loc(iParam1);
		}
	}
}

int func_14()
{
	switch (iLocal_14)
	{
		case 0:
			if (func_52(&Local_35))
			{
				iLocal_873 = func_2();
				func_53();
				func_54();
				func_55();
				iLocal_14 = 1;
			}
			break;
		case 1:
			if (!func_56(&uLocal_1156))
			{
				return 0;
			}
			if (!func_57(&Local_239))
			{
				return 0;
			}
			return 1;
	}
	return 0;
}

int func_15(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
{
	float fVar0;

	if (iParam6 || func_58(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, bParam3, bParam4))
	{
		if (iParam6 || func_59(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_60(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_61(uParam0, -1, 0, bParam7);
			}
			_NAMESPACE49::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_62(uParam0->f_51);
			}
			return 1;
		}
	}
	return 0;
}

void func_16(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 10;
			*uParam2 = 0;
			break;
	}
}

void func_17()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_63(&((Local_239[iVar0 /*32*/])->f_22));
		iVar0++;
	}
	switch (iLocal_873)
	{
		case 76:
			(Local_239[0 /*32*/])->f_6 = { -346.4771f, 735.5283f, 116.4082f };
			(Local_239[0 /*32*/])->f_9 = 14.4829f;
			(Local_239[1 /*32*/])->f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS((Local_239[0 /*32*/])->f_6, (Local_239[0 /*32*/])->f_9, 0f, 10.5f, 0f) };
			(Local_239[1 /*32*/])->f_9 = MISC::GET_HEADING_FROM_VECTOR_2D(((Local_239[0 /*32*/])->f_6 - (Local_239[1 /*32*/])->f_6), ((Local_239[0 /*32*/])->f_6.f_1 - (Local_239[1 /*32*/])->f_6.f_1));
			(Local_239[2 /*32*/])->f_6 = { -353.117f, 734.682f, 116.082f };
			(Local_239[2 /*32*/])->f_9 = -53.853f;
			(Local_239[3 /*32*/])->f_6 = { -353.117f, 734.682f, 116.082f };
			(Local_239[3 /*32*/])->f_9 = -53.853f;
			(Local_239[4 /*32*/])->f_6 = { -324.756f, 739.587f, 116.538f };
			(Local_239[4 /*32*/])->f_9 = 96.065f;
			(Local_239[5 /*32*/])->f_6 = { -324.756f, 739.587f, 116.538f };
			(Local_239[5 /*32*/])->f_9 = 96.065f;
			(Local_239[6 /*32*/])->f_6 = { -338.8194f, 761.5798f, 116.6062f };
			(Local_239[6 /*32*/])->f_9 = 134.873f;
			(Local_239[7 /*32*/])->f_6 = { -342.27f, 717.97f, 116.622f };
			(Local_239[7 /*32*/])->f_9 = 41.92f;
			(Local_239[8 /*32*/])->f_6 = { -343.07f, 717.73f, 116.622f };
			(Local_239[8 /*32*/])->f_9 = -35.16f;
			(Local_239[9 /*32*/])->f_6 = { -355.795f, 748.096f, 115.68f };
			(Local_239[9 /*32*/])->f_9 = -125.813f;
			(Local_239[10 /*32*/])->f_6 = { -355.795f, 748.096f, 115.68f };
			(Local_239[10 /*32*/])->f_9 = -125.813f;
			(Local_239[11 /*32*/])->f_6 = { -328.678f, 754.037f, 116.096f };
			(Local_239[11 /*32*/])->f_9 = -3.124f;
			(Local_239[12 /*32*/])->f_6 = { -328.678f, 754.037f, 116.096f };
			(Local_239[12 /*32*/])->f_9 = -3.124f;
			(Local_239[13 /*32*/])->f_6 = { -328.678f, 754.037f, 116.096f };
			(Local_239[13 /*32*/])->f_9 = -3.124f;
			break;
		case 92:
			(Local_239[0 /*32*/])->f_6 = { 2956.972f, 518.731f, 43.95716f };
			(Local_239[0 /*32*/])->f_9 = -1.91f;
			(Local_239[1 /*32*/])->f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS((Local_239[0 /*32*/])->f_6, (Local_239[0 /*32*/])->f_9, 0f, 10.5f, 0f) };
			(Local_239[1 /*32*/])->f_9 = MISC::GET_HEADING_FROM_VECTOR_2D(((Local_239[0 /*32*/])->f_6 - (Local_239[1 /*32*/])->f_6), ((Local_239[0 /*32*/])->f_6.f_1 - (Local_239[1 /*32*/])->f_6.f_1));
			(Local_239[2 /*32*/])->f_6 = { 2967.377f, 534.855f, 42.684f };
			(Local_239[2 /*32*/])->f_9 = 148.123f;
			(Local_239[3 /*32*/])->f_6 = { 2967.377f, 534.855f, 42.684f };
			(Local_239[3 /*32*/])->f_9 = 148.123f;
			(Local_239[4 /*32*/])->f_6 = { 2953.076f, 532.356f, 43.783f };
			(Local_239[4 /*32*/])->f_9 = -164.591f;
			(Local_239[5 /*32*/])->f_6 = { 2953.076f, 532.356f, 43.783f };
			(Local_239[5 /*32*/])->f_9 = -164.591f;
			(Local_239[6 /*32*/])->f_6 = { 2954.992f, 544.578f, 43.811f };
			(Local_239[6 /*32*/])->f_9 = -173.237f;
			(Local_239[7 /*32*/])->f_6 = { 2966.757f, 505.9f, 44.21f };
			(Local_239[7 /*32*/])->f_9 = -135.91f;
			(Local_239[8 /*32*/])->f_6 = { 2966.757f, 505.9f, 44.21f };
			(Local_239[8 /*32*/])->f_9 = -135.91f;
			(Local_239[9 /*32*/])->f_6 = { 2969.58f, 504.118f, 44.036f };
			(Local_239[9 /*32*/])->f_9 = 62.425f;
			(Local_239[10 /*32*/])->f_6 = { 2969.58f, 504.118f, 44.036f };
			(Local_239[10 /*32*/])->f_9 = 62.425f;
			(Local_239[11 /*32*/])->f_6 = { 2955.397f, 498.389f, 44.792f };
			(Local_239[11 /*32*/])->f_9 = -119.179f;
			(Local_239[12 /*32*/])->f_6 = { 2955.397f, 498.389f, 44.792f };
			(Local_239[12 /*32*/])->f_9 = -119.179f;
			(Local_239[13 /*32*/])->f_6 = { 2955.397f, 498.389f, 44.792f };
			(Local_239[13 /*32*/])->f_9 = -119.179f;
			break;
	}
}

int func_18()
{
	switch (iLocal_16)
	{
		case 0:
			if (!func_64(&Local_35, &uLocal_903, &Local_239, 0, 1, 1, 0, -1))
			{
				func_12();
			}
			iLocal_16 = 1;
			break;
		case 1:
			if (!func_65(&uLocal_903, &Local_239, &uLocal_1121, 1, 1, 0, -1))
			{
				return 0;
			}
			iLocal_16 = 6;
			return 1;
		case 6:
			return 1;
	}
	return 0;
}

void func_19()
{
	int iVar0;

	func_67(&(uLocal_1121[0]), func_66(131072, 1056964608, 1065353216), 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_1121[0]), 5, true);
	func_68(&(uLocal_1121[0]), &((Local_239[0 /*32*/])->f_23), 0);
	func_67(&(uLocal_1121[1]), func_66(131072, 1056964608, 1065353216), 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_1121[1]), 5, true);
	func_68(&(uLocal_1121[1]), &((Local_239[1 /*32*/])->f_23), 0);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_1121[1]), 243, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_1121[1]), 5, true);
	func_69(&(uLocal_1121[0]), &Local_35, 0);
	func_69(&(uLocal_1121[1]), &Local_35, 0);
	iVar0 = 1;
	while (iVar0 <= 13)
	{
		func_70(&(uLocal_1121[iVar0]), 1);
		iVar0++;
	}
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(&(uLocal_1121[1]), 0, 1);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_1121[0]), 6, true);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_1121[1]), 6, true);
	DECORATOR::DECOR_SET_BOOL(&(uLocal_1121[0]), "bBeatPed", true);
	DECORATOR::DECOR_SET_BOOL(&(uLocal_1121[1]), "bBeatPed", true);
}

void func_20()
{
	Local_19.f_4 = "script@beat@town@duelWinner@duelPreDuelerA";
	Local_19.f_5 = "script@beat@town@duelWinner@duelPreDuelerB";
	Local_19.f_6 = "script@beat@town@duelWinner@crowdA_MaleFemale";
	Local_19.f_7 = "script@beat@town@duelWinner@crowdB_MaleMale";
	Local_27.f_4 = "script@beat@town@duelWinner@crowdC_Male";
	Local_27.f_5 = "script@beat@town@duelWinner@crowdD_MaleMale";
	Local_27.f_6 = "script@beat@town@duelWinner@crowdE_MaleFemale";
	Local_27.f_7 = "script@beat@town@duelWinner@crowdF_MaleMaleFemale";
}

void func_21(int iParam0)
{
	Local_782 = Global_35;
	Local_782.f_1 = &uLocal_1121[0];
	Local_782.f_45 = { (Local_239[0 /*32*/])->f_6 };
	Local_782.f_42 = { (Local_239[1 /*32*/])->f_6 };
	func_71(&Local_782, 1);
	if (iParam0 == 0)
	{
		func_72(&Local_782, 2);
	}
	else
	{
		func_72(&Local_782, 3);
	}
}

void func_22()
{
	switch (func_2())
	{
		case 76:
			if (iLocal_17 == 0)
			{
				StringCopy(Local_1189[1 /*4*/], func_73("WINNER_CHEATER"), 32);
				StringCopy(Local_1189[2 /*4*/], func_73("LOSER_WON_GAME"), 32);
				StringCopy(Local_1189[3 /*4*/], func_73("WINNER_DENY"), 32);
				StringCopy(Local_1189[4 /*4*/], func_73("LOSER_DEFEND"), 32);
				StringCopy(Local_1189[5 /*4*/], func_73("WINNER_CHAL"), 32);
				StringCopy(Local_1189[6 /*4*/], func_73("LOSER_AGREE"), 32);
				StringCopy(Local_1189[22 /*4*/], func_73("WINNER_MOVE"), 32);
				StringCopy(&Local_1318, func_73("OFFER_POSSE"), 32);
				StringCopy(&Local_1322, func_73("OFFER"), 32);
				StringCopy(&Local_1326, func_73("OFFER_SICK"), 32);
				StringCopy(&Local_1330, func_73("SCARED_POSSE"), 32);
				StringCopy(&Local_1334, func_73("SCARED"), 32);
				StringCopy(&Local_1338, func_73("SCARED_SICK"), 32);
				StringCopy(&Local_1342, func_73("DUELER_RESPOND"), 32);
			}
			break;
		case 92:
			if (iLocal_17 == 0)
			{
				StringCopy(Local_1189[0 /*4*/], func_73("ARGUE_MIND"), 32);
				StringCopy(Local_1189[1 /*4*/], func_73("ARGUE"), 32);
				StringCopy(Local_1189[3 /*4*/], func_73("ACCUSE"), 32);
				StringCopy(Local_1189[4 /*4*/], func_73("DENY"), 32);
				StringCopy(Local_1189[5 /*4*/], func_73("ASK"), 32);
				StringCopy(Local_1189[6 /*4*/], func_73("DADDY"), 32);
				StringCopy(Local_1189[7 /*4*/], func_73("INSULT"), 32);
				StringCopy(Local_1189[8 /*4*/], func_73("THREAT_MIND"), 32);
				StringCopy(Local_1189[9 /*4*/], func_73("ANGER"), 32);
				StringCopy(Local_1189[10 /*4*/], func_73("MOVEMENT"), 32);
				StringCopy(Local_1189[11 /*4*/], func_73("THREAT"), 32);
				StringCopy(Local_1189[12 /*4*/], func_73("ACCEPT"), 32);
				StringCopy(Local_1189[22 /*4*/], func_73("CHALLENGE"), 32);
				StringCopy(&Local_1318, func_73("OFFER_POSSE"), 32);
				StringCopy(&Local_1322, func_73("OFFER"), 32);
				StringCopy(&Local_1326, func_73("OFFER"), 32);
				StringCopy(&Local_1330, func_73("SCARED_POSSE"), 32);
				StringCopy(&Local_1334, func_73("SCARED"), 32);
				StringCopy(&Local_1338, "INSULT_RESPONSE_SICK", 32);
				StringCopy(&Local_1342, "ACCEPT_DUEL", 32);
			}
			break;
	}
}

void func_23(bool bParam0, var uParam1, var uParam2, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;

	fVar6 = func_74(uParam1->f_42, uParam1->f_45, 1);
	fVar7 = func_74(uParam1->f_45, uParam1->f_42, 1);
	if (func_2() == 76)
	{
		vVar0 = { -269.649f, 791.1334f, 17.58054f };
		vVar3 = { -342.3348f, 777.1977f, 215.2967f };
	}
	else if (func_2() == 105)
	{
		vVar0 = { 1312.238f, -1296.278f, 0.850876f };
		vVar3 = { 1432.387f, -1431.857f, 179.1864f };
	}
	else
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_42, fVar6, 0f, fParam3, -100f) };
		vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_45, fVar7, 0f, fParam3, 100f) };
	}
	if (bParam0)
	{
		if (func_75(uParam2, 2))
		{
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(vVar0, vVar3, iParam4, 0, 1);
		}
	}
	else if (!func_75(uParam2, 2))
	{
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(vVar0, vVar3, iParam4, 0, bParam0, 1, 0);
		func_76(uParam2, 2);
	}
}

void func_24(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_25()
{
	Local_19 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_19.f_4, 0, "pblPacingIdles", false, true);
	Local_19.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_19.f_5, 0, "pblPacingIdles", false, true);
	Local_19.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_19.f_6, 0, "pblPreDuel", false, true);
	Local_19.f_3 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_19.f_7, 0, "pblPreDuel", false, true);
	Local_27 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_27.f_4, 0, "pblPreDuel", false, true);
	Local_27.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_27.f_5, 0, "pblPreDuel", false, true);
	Local_27.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_27.f_6, 0, "pblPreDuel", false, true);
	Local_27.f_3 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_27.f_7, 0, "pblPreDuel", false, true);
	func_77(&((Local_239[0 /*32*/])->f_6), 1088421888);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_19, (Local_239[0 /*32*/])->f_6, 0f, 0f, (Local_239[0 /*32*/])->f_9, 2);
	if (func_78(&(uLocal_1121[0]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19, "pedDuelA", &(uLocal_1121[0]), 0);
	}
	func_77(&((Local_239[1 /*32*/])->f_6), 1088421888);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_19.f_1, (Local_239[1 /*32*/])->f_6, 0f, 0f, (Local_239[1 /*32*/])->f_9, 2);
	if (func_78(&(uLocal_1121[1]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_1, "pedDuelB", &(uLocal_1121[1]), 0);
	}
	func_77(&((Local_239[2 /*32*/])->f_6), 2f);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_19.f_2, (Local_239[2 /*32*/])->f_6, 0f, 0f, (Local_239[2 /*32*/])->f_9, 2);
	if (func_78(&(uLocal_1121[2]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_2, "pedCrowdFemaleA", &(uLocal_1121[2]), 0);
	}
	if (func_78(&(uLocal_1121[3]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_2, "pedCrowdMaleA", &(uLocal_1121[3]), 0);
	}
	func_77(&((Local_239[4 /*32*/])->f_6), 2f);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_19.f_3, (Local_239[4 /*32*/])->f_6, 0f, 0f, (Local_239[4 /*32*/])->f_9, 2);
	if (func_78(&(uLocal_1121[4]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_3, "pedCrowdMaleA", &(uLocal_1121[4]), 0);
	}
	if (func_78(&(uLocal_1121[5]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_3, "pedCrowdMaleB", &(uLocal_1121[5]), 0);
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_27, (Local_239[6 /*32*/])->f_6, 0f, 0f, (Local_239[6 /*32*/])->f_9, 2);
	if (func_78(&(uLocal_1121[6]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_27, "pedCrowdMaleA", &(uLocal_1121[6]), 0);
	}
	func_77(&((Local_239[7 /*32*/])->f_6), 2f);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_27.f_1, Vector(116.362f, 717.985f, -342.291f) - Vector(0f, -1.245f, -2.09f), 0f, 0f, -178.125f, 2);
	if (func_78(&(uLocal_1121[7]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_27.f_1, "pedCrowdMaleA", &(uLocal_1121[7]), 0);
	}
	if (func_78(&(uLocal_1121[8]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_27.f_1, "pedCrowdMaleB", &(uLocal_1121[8]), 0);
	}
	func_77(&((Local_239[9 /*32*/])->f_6), 2f);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_27.f_2, (Local_239[9 /*32*/])->f_6, 0f, 0f, (Local_239[9 /*32*/])->f_9, 2);
	if (func_78(&(uLocal_1121[9]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_27.f_2, "pedCrowdFemaleA", &(uLocal_1121[9]), 0);
	}
	if (func_78(&(uLocal_1121[10]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_27.f_2, "pedCrowdMaleA", &(uLocal_1121[10]), 0);
	}
	func_77(&((Local_239[11 /*32*/])->f_6), 2f);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_27.f_3, (Local_239[11 /*32*/])->f_6, 0f, 0f, (Local_239[11 /*32*/])->f_9, 2);
	if (func_78(&(uLocal_1121[11]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_27.f_3, "pedCrowdFemaleA", &(uLocal_1121[11]), 0);
	}
	if (func_78(&(uLocal_1121[12]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_27.f_3, "pedCrowdMaleA", &(uLocal_1121[12]), 0);
	}
	if (func_78(&(uLocal_1121[13]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_27.f_3, "pedCrowdMaleB", &(uLocal_1121[13]), 0);
	}
	ANIMSCENE::LOAD_ANIM_SCENE(Local_19);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_19.f_1);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_19.f_2);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_19.f_3);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_27);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_27.f_1);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_27.f_2);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_27.f_3);
}

int func_26(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_79(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_80(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_81(&(uParam0->f_5));
			}
			func_24(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_82(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_83(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_84(&(uParam0->f_121));
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
					func_85(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_86(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_60(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam1[0]) && !PED::IS_PED_INJURED(uParam1[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID_2(VOLUME::_0xF6F5447D418DAA82(uParam1[0])))
			{
				func_87(uParam0, uParam1[0]);
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

void func_27(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
	}
}

int func_28()
{
	bool bVar0;
	bool bVar1;

	if (func_3(iLocal_238, -2147483648))
	{
		if (!bLocal_1370)
		{
			func_88(&(Local_35.f_5), &iLocal_874);
			EVENT::_0xB6F4825153920582();
			return 0;
		}
	}
	bVar0 = (!bLocal_1370 && func_89(&uLocal_1121, &(Local_35.f_5), &iLocal_874, &uLocal_1354, 0, 1, 2));
	bVar1 = (!bVar0 && func_89(&uLocal_1121, &(Local_35.f_5), &iLocal_874, &uLocal_1355, 2, 13, 1));
	if (bVar0 && iLocal_874 != 0)
	{
		if (func_90(iLocal_874, 1, 1, 0, 0))
		{
			bLocal_1376 = true;
		}
	}
	if (bVar0 || bVar1)
	{
		if (bLocal_1370)
		{
			switch (iLocal_874)
			{
				case 1:
				case 2:
				case 8:
				case 16:
				case 512:
				case 1024:
				case 2048:
				case 16384:
					bLocal_1370 = false;
					bLocal_1376 = true;
					return 1;
				default:
					break;
			}
		}
		else
		{
			if (iLocal_874 == 16384)
			{
				if (!func_91())
				{
					return 0;
				}
				bLocal_1376 = true;
			}
			if (func_90(iLocal_874, 1, 1, 1, 1))
			{
				bLocal_1376 = true;
				if (iLocal_15 < 14)
				{
					bLocal_1377 = true;
				}
			}
			return 1;
		}
	}
	if (bLocal_1370)
	{
		if (!func_78(&(uLocal_1121[0]), 0, 1))
		{
			if (!func_92(&uLocal_1373))
			{
				func_93(&uLocal_1373);
			}
			else if (func_94(&uLocal_1373, 3f))
			{
				bLocal_1370 = false;
			}
		}
		EVENT::_0xB6F4825153920582();
	}
	return 0;
}

void func_29()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_30(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_95((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_31(struct<6> Param0, var uParam6)
{
	if (VOLUME::DOES_VOLUME_EXIST(Param0))
	{
		VOLUME::DELETE_VOLUME(Param0);
	}
	Param0.f_1 = 0;
	Param0.f_2 = -1;
	Param0.f_3 = -1;
	Param0.f_4 = 0;
	if (MAP::DOES_BLIP_EXIST(Param0.f_5))
	{
		MAP::REMOVE_BLIP(&(Param0.f_5));
	}
}

void func_32()
{
	PLAYER::_0x93624B36E8851B42(PLAYER::GET_PLAYER_INDEX());
}

void func_33(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_96(((*uParam0)[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_97(&(((*uParam0)[iVar0 /*17*/])->f_6), 1, 1);
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

void func_34()
{
	int iVar0;

	iVar0 = 2;
	while (iVar0 <= 13)
	{
		if (func_78(&(uLocal_1121[iVar0]), 0, 1))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_1121[iVar0]), Global_35, 4, 0, 200f, -1, 0);
			PED::SET_PED_KEEP_TASK(&(uLocal_1121[iVar0]), true);
		}
		iVar0++;
	}
}

int func_35()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	func_98(0);
	func_99();
	func_100();
	func_101();
	func_102();
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iLocal_1155 = PED::GET_MOUNT(Global_35);
	}
	switch (iLocal_15)
	{
		case 0:
			if (func_103())
			{
				func_104();
				func_105(1);
				func_48(0);
				func_106();
				func_107(-1f);
				iLocal_1043 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(ENTITY::GET_ENTITY_COORDS(&(uLocal_1121[0]), true, false), 13f, 1, 316, 0);
				ANIMSCENE::START_ANIM_SCENE(Local_19);
				ANIMSCENE::SET_ANIM_SCENE_RATE(Local_19, 1.1f);
				ANIMSCENE::START_ANIM_SCENE(Local_19.f_1);
				ANIMSCENE::SET_ANIM_SCENE_RATE(Local_19.f_1, 1.1f);
				ANIMSCENE::START_ANIM_SCENE(Local_19.f_2);
				ANIMSCENE::START_ANIM_SCENE(Local_19.f_3);
				ANIMSCENE::START_ANIM_SCENE(Local_27);
				ANIMSCENE::START_ANIM_SCENE(Local_27.f_1);
				ANIMSCENE::START_ANIM_SCENE(Local_27.f_2);
				ANIMSCENE::START_ANIM_SCENE(Local_27.f_3);
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_19, "pblEnterEarly");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_19.f_1, "pblEnterEarly");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_19, "pblEnterNormal");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_19.f_1, "pblEnterNormal");
				func_108("pblPreDuel");
				func_108("pblDuel");
				iLocal_15 = 1;
			}
			break;
		case 1:
			if (func_109(&Local_35, &vLocal_1040, 2f, 70f, 45f, 1500, 1065353216, 1065353216, 1, 0, 1, -1082130432, 1, 0, 0))
			{
				func_110(&Local_35);
				vLocal_1040.x = 0;
				vLocal_1040.f_1 = 0;
				vLocal_1040.f_2 = 10000f;
				func_107(1092616192);
				func_84(&(Local_35.f_121));
				iLocal_15 = 2;
			}
			break;
		case 2:
			if (func_111(8f))
			{
				bVar0 = true;
			}
			else if (func_112())
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				if (!func_3(iLocal_238, 262144) && !func_3(iLocal_238, 524288))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), -1329557607))
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_19, "pblEnterEarly") && ANIMSCENE::_0x23E33CB9F4A3F547(Local_19.f_1, "pblEnterEarly"))
						{
							func_24(&iLocal_238, 262144);
						}
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), -2037335242))
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_19, "pblEnterNormal") && ANIMSCENE::_0x23E33CB9F4A3F547(Local_19.f_1, "pblEnterNormal"))
						{
							func_24(&iLocal_238, 524288);
						}
					}
				}
				if (func_3(iLocal_238, 262144))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_19, "pblEnterEarly", true);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_19.f_1, "pblEnterEarly", true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19, "bDrawIdle", true, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_1, "bDrawIdle", true, false);
					func_113("bDrawIdle", 1);
					func_84(&(Local_35.f_121));
					iLocal_15 = 3;
				}
				else if (func_3(iLocal_238, 524288))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_19, "pblEnterNormal", true);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_19.f_1, "pblEnterNormal", true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19, "bDrawIdle", true, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_1, "bDrawIdle", true, false);
					func_113("bDrawIdle", 1);
					func_84(&(Local_35.f_121));
					iLocal_15 = 3;
				}
			}
			break;
		case 3:
			if (!func_92(&uLocal_897))
			{
				func_93(&uLocal_897);
			}
			if ((bLocal_1359 || func_111(10f)) || func_114(&uLocal_897) > 8f)
			{
				func_115();
				iLocal_15 = 4;
			}
			break;
		case 4:
			func_116(0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19, "bDraw", true, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_1, "bDraw", true, false);
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), 199968317))
			{
				EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(1498498500, &(uLocal_1121[0]), -1f, -1f, -1f, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1);
				func_117(1066055203, &(uLocal_1121[0]), 1);
			}
			iLocal_15 = 5;
			break;
		case 5:
			func_118();
			PED::SET_PED_RESET_FLAG(&(uLocal_1121[0]), 5, true);
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[1]), 1397652762))
			{
				if (func_111(40f))
				{
					Local_35.f_44 = 1;
				}
				func_24(&iLocal_238, 1048576);
				func_119(&(uLocal_1121[1]), 0, 0);
				func_120();
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[1]), -698244996))
			{
				func_121(Local_19.f_1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), 199968317))
			{
				EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(1498498500, &(uLocal_1121[0]), -1f, -1f, -1f, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1);
				func_117(1066055203, &(uLocal_1121[0]), 1);
			}
			if (func_122(&(uLocal_1121[1]), Local_19.f_1, "pedDuelB", 0, 0, 1, 0))
			{
				if (!func_3(iLocal_238, 1048576))
				{
					func_24(&iLocal_238, 268435456);
					return 0;
				}
			}
			if (func_122(&(uLocal_1121[0]), Local_19, "pedDuelA", 2116222025, 0, 1, 0))
			{
				if (!func_3(iLocal_238, 1048576))
				{
					func_24(&iLocal_238, 268435456);
				}
				else if (!bLocal_1359)
				{
					iLocal_15 = 6;
				}
				else
				{
					return 1;
				}
			}
			break;
		case 6:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), 199968317))
			{
				EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(1498498500, &(uLocal_1121[0]), -1f, -1f, -1f, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1);
				func_117(1066055203, &(uLocal_1121[0]), 1);
			}
			Local_782 = Global_35;
			Local_782.f_1 = &uLocal_1121[0];
			func_108("pblPreDuel");
			iLocal_15 = 7;
			break;
		case 7:
			func_123();
			if (func_122(&(uLocal_1121[0]), Local_19, "pedDuelA", 0, 0, 1, 0))
			{
				iVar1 = 1;
			}
			if (iVar1 || func_124())
			{
				Local_35.f_49 = 1;
				if (iLocal_17 == 0)
				{
					func_93(&uLocal_882);
					iLocal_15 = 8;
				}
			}
			else if (func_125(&(uLocal_1121[0]), 1, 1) <= 15f && func_126())
			{
				func_127();
			}
			func_128();
			func_129();
			break;
		case 8:
			func_123();
			func_128();
			func_129();
			func_130();
			if (func_125(&(uLocal_1121[0]), 1, 1) <= 15f && func_126())
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(&(uLocal_1121[0])))
				{
					func_131(uLocal_1121[0], 0, 0, 1, 0, 0, 0, 1);
					if (!func_3(iLocal_238, 16777216))
					{
						func_132(&(uLocal_1121[0]));
					}
					if (func_133() == 0)
					{
						func_134(205, 0);
					}
					else
					{
						func_134(202, 0);
					}
					fLocal_1347 = 10f;
					func_93(&uLocal_882);
					func_105(1);
					func_135();
					iLocal_15 = 9;
				}
				else
				{
					func_127();
				}
			}
			else if (func_136(&uLocal_882) > 30f)
			{
				iLocal_15 = 11;
			}
			break;
		case 9:
			func_123();
			func_128();
			func_129();
			func_130();
			func_131(uLocal_1121[0], 0, 0, 1, 0, 0, 0, 1);
			if (func_122(&(uLocal_1121[0]), Local_19, "pedDuelA", 0, 0, 1, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(&(uLocal_1121[0]), 1435919172, 1) != 1)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(uLocal_1121[0]), Global_35, -1, -1082130432, -1082130432, -1082130432);
				}
			}
			if (iLocal_1120 == 0 || iLocal_1120 == 1)
			{
				func_42(&iLocal_238, 2097152);
				func_105(0);
				iLocal_15 = 10;
			}
			if (func_136(&uLocal_882) > fLocal_1347)
			{
				func_93(&uLocal_882);
				func_137();
				func_24(&iLocal_238, 33554432);
				func_42(&iLocal_238, 2097152);
				func_105(1);
				iLocal_15 = 11;
			}
			else
			{
				func_138();
				func_139(Local_19.f_3, &iLocal_238, 4096, 4, 5);
			}
			break;
		case 10:
			func_123();
			func_131(uLocal_1121[0], 0, 0, 1, 0, 0, 0, 1);
			func_130();
			if (func_140(-3.5f, 1, &(uLocal_1121[0]), 1))
			{
				switch (iLocal_1120)
				{
					case 0:
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_1121[0]), 0);
						func_141(Global_35, &(uLocal_1121[0]), func_73("PLAYER_YES"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_142(&Local_35, Local_782.f_42, Local_782.f_86, 0, 1114636288);
						func_42(&iLocal_238, 2097152);
						func_143();
						func_93(&uLocal_882);
						func_105(1);
						iLocal_15 = 13;
						func_93(&uLocal_882);
						break;
					case 1:
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_1121[0]), 0);
						func_141(Global_35, &(uLocal_1121[0]), func_73("PLAYER_NO"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_93(&uLocal_882);
						func_137();
						func_24(&iLocal_238, 33554432);
						func_42(&iLocal_238, 2097152);
						func_105(1);
						if (iLocal_17 == 0)
						{
							iLocal_15 = 11;
						}
						break;
				}
			}
			break;
		case 11:
			func_131(uLocal_1121[0], 0, 0, 1, 0, 0, 0, 1);
			if (func_140(0f, 1, Global_35, 1) && func_140(0f, 1, &(uLocal_1121[0]), 1))
			{
				if (func_3(iLocal_238, 16777216))
				{
					if (func_3(iLocal_238, 8388608))
					{
						switch (func_2())
						{
							case 76:
								func_141(&(uLocal_1121[0]), Global_35, func_73("DUELER_LEAVE"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
							case 92:
								func_141(&(uLocal_1121[0]), Global_35, "IGNORING_YOU", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
						}
					}
					else
					{
						switch (func_2())
						{
							case 76:
								func_141(&(uLocal_1121[0]), Global_35, func_73("DUELER_LEAVE"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
							case 92:
								func_141(&(uLocal_1121[0]), Global_35, "IGNORING_YOU", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
						}
					}
				}
				else
				{
					switch (func_2())
					{
						case 76:
							func_141(&(uLocal_1121[0]), Global_35, func_73("DUELER_LEAVE"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
						case 92:
							func_141(&(uLocal_1121[0]), Global_35, "IGNORING_YOU", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
					}
				}
				func_42(&iLocal_238, 2097152);
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				if (func_3(iLocal_238, 16777216))
				{
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, &(Local_229[3 /*2*/]), (Local_229[3 /*2*/])->f_1, Global_35, 7300, 4f, -4f, 0, 0, 0, 0, -1082130432, 0, 0, -1082130432);
				}
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				TASK::TASK_PERFORM_SEQUENCE(&(uLocal_1121[0]), iVar2);
				TASK::CLEAR_SEQUENCE_TASK(&iVar2);
				PED::SET_PED_KEEP_TASK(&(uLocal_1121[0]), true);
				iLocal_15 = 12;
			}
			break;
		case 12:
			if (func_3(iLocal_238, 536870912))
			{
				func_144();
			}
			else if (func_140(-3.5f, 1, 0, 0))
			{
				func_137();
				func_24(&iLocal_238, 536870912);
			}
			if (func_145())
			{
				iLocal_15 = 17;
			}
			else
			{
				func_128();
				func_146();
				func_129();
			}
			break;
		case 13:
			func_146();
			func_108("pblDuel");
			func_130();
			if (iLocal_1120 == 1 || func_125(&(uLocal_1121[0]), 1, 1) > 20f)
			{
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_1121[0]), 0);
				func_141(Global_35, &(uLocal_1121[0]), func_73("PLR_QUIT"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_93(&uLocal_882);
				func_31(Local_875);
				func_24(&iLocal_238, 33554432);
				func_137();
				func_105(1);
				iLocal_15 = 11;
				return 0;
			}
			func_131(uLocal_1121[0], 0, 0, 1, 0, 0, 0, 1);
			func_147();
			if (func_140(-3.5f, 1, 0, 0) && iLocal_1044 != 1)
			{
				iLocal_1044 = 1;
				func_120();
			}
			if (func_78(&(uLocal_1121[0]), 0, 1))
			{
				func_148();
				if (func_3(iLocal_238, 64) && func_149(Local_875))
				{
					_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
					func_150(203);
					func_151(203);
					func_150(205);
					func_151(205);
					func_152(1);
					func_153();
					Local_35.f_49 = 0;
					func_31(Local_875);
					func_29();
					func_105(1);
					iLocal_1367 = 1;
					func_24(&iLocal_238, -2147483648);
					iLocal_15 = 14;
				}
				else
				{
					if (func_122(&(uLocal_1121[0]), Local_19, "pedDuelA", 0, 0, 1, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(&(uLocal_1121[0]), 1435919172, 1) != 1)
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(uLocal_1121[0]), Global_35, -1, -1082130432, -1082130432, -1082130432);
						}
					}
					if (func_3(iLocal_238, 1))
					{
						if (func_154(Global_35, Local_782.f_42, 1) <= 6f && CAM::IS_SPHERE_VISIBLE(Local_782.f_42, 2f))
						{
							func_155(0, 1065353216);
						}
					}
					if (!func_3(iLocal_238, 64))
					{
						if (func_140(-2f, 1, 0, 0))
						{
							func_141(&(uLocal_1121[0]), Global_35, &Local_1342, 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
							func_24(&iLocal_238, 64);
						}
					}
					else if (!func_3(iLocal_238, 1))
					{
						func_156();
						Local_875 = { func_157(2, Global_35, Local_782.f_42, 0f, 0f, 0f, 3f, 3f, 3f, 1, 1, 1) };
						func_158("DUEL_OBJ", 7500, 0, 0, -1, -1, 0);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_875.f_5, "DUEL_OBJ_BLIP");
						func_24(&iLocal_238, 1);
					}
				}
			}
			else if (func_159(Local_875))
			{
				func_31(Local_875);
			}
			break;
		case 14:
			func_146();
			func_108("pblDuel");
			func_113("bDrawIdle", 1);
			EVENT::_0xB6F4825153920582();
			if (func_160(&Local_782, &uLocal_688))
			{
				iLocal_1378 = func_161(&uLocal_688);
				switch (iLocal_1378)
				{
					case 5:
						bLocal_1370 = false;
						break;
					case 2:
					case 4:
						func_93(&uLocal_891);
						if (iLocal_1378 == 4)
						{
							bLocal_1370 = true;
							func_162(&(uLocal_1121[0]), uLocal_1136[0], 831283580, 580546400, 0, 0);
						}
						else
						{
							bLocal_1370 = false;
							PED::SET_PED_CONFIG_FLAG(&(uLocal_1121[0]), 6, false);
							func_24(&iLocal_238, 16);
						}
						break;
				}
				DECORATOR::DECOR_SET_BOOL(&(uLocal_1121[0]), "bIgnoreDamageChecking", true);
				DECORATOR::DECOR_SET_BOOL(&(uLocal_1121[1]), "bIgnoreDamageChecking", true);
				if (func_3(iLocal_238, 16))
				{
					func_163(11, 0, 0, 0, Local_35.f_5.f_10, 0, 1065353216, 0);
				}
				else
				{
					if (func_164())
					{
						if (func_165(0))
						{
							func_163(1, 0, 0, 0, Local_35.f_5.f_10, 0, 1065353216, 0);
						}
					}
					if (func_166())
					{
						func_163(1, 0, 0, 0, Local_35.f_5.f_10, 0, 1065353216, 0);
					}
				}
				if (PED::IS_PED_DEAD_OR_DYING(&(uLocal_1121[0]), true))
				{
					func_167(Local_1046[0 /*21*/], &Local_1068);
				}
				iLocal_1044 = 2;
				func_120();
				func_93(&uLocal_891);
				func_27(&(uLocal_1121[0]));
				iLocal_15 = 15;
			}
			break;
		case 15:
			if (!bLocal_1370)
			{
				func_118();
				func_168();
				if (func_94(&uLocal_891, 1f))
				{
					if (func_3(iLocal_238, 16))
					{
						switch (func_2())
						{
							case 76:
								func_141(&(uLocal_1121[0]), Global_35, "GENERIC_ANGRY_REACTION", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
								break;
							case 92:
								func_141(&(uLocal_1121[0]), Global_35, "SERIOUSLY_WOUNDED_MOAN", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
								break;
						}
						func_117(249295937, &(uLocal_1121[0]), 1);
						func_105(1);
						func_137();
					}
					func_93(&uLocal_891);
					func_42(&iLocal_238, -2147483648);
					iLocal_15 = 16;
				}
			}
			break;
		case 16:
			func_168();
			func_121(Local_19);
			func_121(Local_19.f_1);
			if (!Local_35.f_46)
			{
				if (func_3(iLocal_238, 16))
				{
					func_144();
				}
			}
			if (bLocal_1376)
			{
				func_169();
				if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1121[0])))
				{
					if (bLocal_1377)
					{
						TASK::TASK_COMBAT_PED(&(uLocal_1121[0]), Global_35, 0, 0);
						func_162(&(uLocal_1121[0]), uLocal_1136[0], 831283580, 580546400, 0, 0);
					}
					else if (!PED::IS_PED_IN_COMBAT(&(uLocal_1121[0]), 0))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_1121[0]), Global_35, 2, 0, -1082130432, -1, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1121[1])))
				{
					if (bLocal_1377)
					{
						TASK::TASK_COMBAT_PED(&(uLocal_1121[1]), Global_35, 0, 0);
						func_162(&(uLocal_1121[1]), uLocal_1136[1], 831283580, 580546400, 0, 0);
					}
					else if (!PED::IS_PED_IN_COMBAT(&(uLocal_1121[1]), 0))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_1121[1]), Global_35, 2, 0, -1082130432, -1, 0);
					}
				}
				Local_35.f_50 = 1;
				return 1;
			}
			else if (iLocal_17 == 0)
			{
				if (func_78(&(uLocal_1121[0]), 0, 1))
				{
					if (!func_3(iLocal_238, 16))
					{
						if (func_3(iLocal_238, 256))
						{
							TASK::TASK_COMBAT_PED(&(uLocal_1121[0]), Global_35, 0, 0);
							func_162(&(uLocal_1121[0]), uLocal_1136[0], 831283580, 580546400, 0, 0);
							if (iLocal_873 == 76)
							{
								func_141(&(uLocal_1121[0]), Global_35, "MELEE_BRING_IT_ON", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
							}
							else
							{
								func_141(&(uLocal_1121[0]), Global_35, "OPENS_FIRE", 0, -1082130432, 2, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
							}
						}
						else
						{
							TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_1121[0]), Global_35, 4, 0, -1082130432, -1, 0);
						}
						PED::SET_PED_KEEP_TASK(&(uLocal_1121[0]), true);
						func_169();
					}
				}
				if (func_78(&(uLocal_1121[1]), 0, 1))
				{
					if (func_3(iLocal_238, 256))
					{
						TASK::TASK_COMBAT_PED(&(uLocal_1121[1]), Global_35, 0, 0);
						func_162(&(uLocal_1121[1]), uLocal_1136[1], 831283580, 580546400, 0, 0);
					}
					else
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_1121[1]), Global_35, 4, 0, -1082130432, -1, 0);
					}
					PED::SET_PED_KEEP_TASK(&(uLocal_1121[1]), true);
				}
				iLocal_15 = 17;
			}
			break;
		case 17:
			if (!Local_35.f_46)
			{
				if (func_3(iLocal_238, 16))
				{
					func_144();
				}
			}
			if (!func_3(iLocal_238, 128))
			{
				PED::SET_PED_CONFIG_FLAG(&(uLocal_1121[1]), 243, false);
				func_24(&iLocal_238, 128);
			}
			if ((func_3(iLocal_238, 16) && !func_3(iLocal_238, 512)) && (func_94(&uLocal_891, 6f) || func_3(iLocal_238, 134217728)))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_1121[0]), Global_35, 1, 0, 500f, -1, 0);
				PED::SET_PED_KEEP_TASK(&(uLocal_1121[0]), true);
				Local_35.f_50 = 1;
				func_24(&iLocal_238, 512);
			}
			if (func_168())
			{
				if (func_170())
				{
					return 1;
				}
				else
				{
					func_128();
					func_129();
				}
				if (!func_3(iLocal_238, 4))
				{
					if (func_171())
					{
						func_32();
						func_24(&iLocal_238, 4);
						func_169();
					}
				}
			}
			break;
	}
	return 0;
}

int func_36(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_172())
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
			else if (func_173(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_60(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_60(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_60(uParam0->f_3, 2) || iParam12 == 1)
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
				if (func_174(Global_36, uParam0->f_51) > fVar0)
				{
					return 1;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_174(Global_36, vVar1) > fVar0)
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

var func_37(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_175(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_176(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_175(sVar0, iParam1, 0, 0, 1, 1);
}

void func_38(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_42(&(uParam0->f_1), 256);
	}
	else
	{
		func_24(&(uParam0->f_1), 256);
	}
}

void func_39(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_24(uParam0, 16);
	}
	else
	{
		func_42(uParam0, 67108864);
		func_42(uParam0, 16);
	}
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_42(&(uParam0->f_1), 128);
	}
	else
	{
		func_24(&(uParam0->f_1), 128);
	}
}

void func_41(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_24(uParam0, 268435456);
	}
	else
	{
		func_42(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_24(uParam0, 1073741824);
	}
	else
	{
		func_42(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_24(uParam0, 536870912);
	}
	else
	{
		func_42(uParam0, 536870912);
	}
}

void func_42(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_43(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_1;
}

int func_44(int iParam0)
{
	return &(Global_17503.f_42[iParam0 /*8*/]);
}

void func_45(int iParam0, int iParam1)
{
	if (func_177(iParam0))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(iParam0, iParam1);
	}
}

void func_46(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;

	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_178(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_179(uParam0->f_3, 524288);
		}
	}
	if (func_78(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (iParam8 && DECORATOR::DECOR_EXIST_ON(uParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_78(uParam1[iVar0], 0, 0))
			{
				func_180(uParam1[iVar0], bVar3);
				if (func_181(uParam0, (*uParam1)[iVar0]))
				{
					func_182((*uParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_78(uParam1[iVar0], 0, 1))
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
							func_184(uParam1[iVar0], 1073741824, func_183(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
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
		func_185(uParam0);
	}
	func_186(uParam0);
	if (!uParam0->f_186)
	{
		func_79(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_187(uParam0->f_3, uParam0->f_185);
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
		func_188(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_47(var uParam0, var uParam1)
{
	if (!func_3(uParam0->f_88, 1024))
	{
		func_189(uParam0, uParam1);
	}
	func_190();
	MISC::SET_TIME_SCALE(1f);
	func_192(func_191(uParam1, uParam0), 1);
	func_29();
	func_193();
	func_194();
	func_195(&(uParam1->f_26));
	func_195(&(uParam1->f_29));
	func_195(&(uParam1->f_32));
	func_195(&(uParam1->f_35));
	func_195(&(uParam1->f_38));
	func_195(&(uParam1->f_41));
	if (func_196(uParam0->f_1, 0))
	{
		if (func_197(uParam0, 65536))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 16, false);
			PED::SET_PED_CAN_RAGDOLL(uParam0->f_1, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 263, false);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1, 0);
		}
		if (func_197(uParam0, 1024))
		{
			PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1, 1);
		}
		if (func_197(uParam0, 128) || func_197(uParam0, 4096))
		{
			PED::SET_PED_USING_ACTION_MODE(uParam0->f_1, false, -1, 0);
		}
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 371, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 392, false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uParam0->f_1, false, 0f);
	}
	PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 1);
	if (!func_197(uParam0, 2048))
	{
		LAW::_0xDE5FAA741A781F73(PLAYER::GET_PLAYER_INDEX(), 0);
	}
	if (func_75(uParam1, 2048))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 146, false);
	}
	PAD::ENABLE_CONTROL_ACTION(0, -1404316431, true);
	PAD::ENABLE_CONTROL_ACTION(0, 255439828, true);
	if (func_75(uParam1, 2) && !func_197(uParam0, 32768))
	{
		func_23(1, uParam0, uParam1, -1038090240, 1103626240);
		func_198(uParam1, 2);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_86))
	{
		POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_86);
		POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_86);
	}
	if (MISC::_0xBDC6E364C9C78178(*uParam1))
	{
		ITEMSET::DESTROY_ITEMSET(*uParam1);
	}
	func_199(uParam0, uParam1, 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0) && (func_75(uParam1, 8) && (!func_75(uParam1, 1) || TASK::_0xC8B29D18022EA2B7(*uParam0))))
	{
		TASK::_0xEED08A3A98B847E2(*uParam0, (!func_197(uParam0, 256) || ENTITY::IS_ENTITY_DEAD(uParam0->f_1)), 1040187392);
		if (func_75(uParam1, 4096))
		{
			TASK::CLEAR_PED_TASKS(*uParam0, 1, 0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1) && TASK::_0xC8B29D18022EA2B7(uParam0->f_1))
	{
		TASK::_0xEED08A3A98B847E2(uParam0->f_1, false, 1040187392);
		if (func_75(uParam1, 4096))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_1, 1, 0);
		}
	}
	MAP::DISPLAY_RADAR(true);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (PED::IS_PED_A_PLAYER(*uParam0))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
		}
		PED::SET_PED_USING_ACTION_MODE(*uParam0, false, -1, 0);
	}
	GRAPHICS::ANIMPOSTFX_STOP("Duel");
	PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_16)))
	{
		if (!AUDIO::CANCEL_MUSIC_EVENT(&(uParam0->f_16)))
		{
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_20)))
	{
		if (!AUDIO::CANCEL_MUSIC_EVENT(&(uParam0->f_20)))
		{
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_28)))
	{
		if (!AUDIO::CANCEL_MUSIC_EVENT(&(uParam0->f_28)))
		{
		}
	}
	HUD::_TEXT_BLOCK_DELETE("MGDUL");
	if (func_75(uParam1, 16777216))
	{
		func_200();
	}
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0, 0, -1, 0);
	MISC::_0x4D5C9CC7E7E23E09();
	func_201(uParam1, 9);
}

void func_48(bool bParam0)
{
	if (func_2() == 76)
	{
		if (!bParam0)
		{
			if (!VOLUME::DOES_VOLUME_EXIST(iLocal_1153))
			{
				iLocal_1153 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-360.4944f, 750.4674f, 116.4046f, 0f, 0f, 0f, 1.245337f, 1.274085f, 2.205222f, "REDW - volScenarioBlocking");
				iLocal_1154 = PED::_0x4C39C95AE5DB1329(iLocal_1153, 0, 15);
				POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_1153, 534496, 0, 0, -1, -1, 2);
				POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_1153, 534496, 0, 0, -1, -1, 0);
			}
		}
		else if (VOLUME::DOES_VOLUME_EXIST(iLocal_1153))
		{
			POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_1153);
			POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(iLocal_1153);
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1154, false);
			VOLUME::DELETE_VOLUME(iLocal_1153);
		}
	}
}

void func_49()
{
	if (iLocal_1350 != -1)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_1350);
	}
}

void func_50()
{
	if (iLocal_1351 != -1)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_1351);
	}
}

int func_51(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return 1;
	}
	if (func_202(iVar0))
	{
		return 0;
	}
	if (func_203(iVar0, 1) || func_203(iVar0, 2))
	{
		return 1;
	}
	return 0;
}

int func_52(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_204(uParam0->f_3);
	iVar1 = func_205(1);
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

void func_53()
{
	switch (iLocal_873)
	{
		case 76:
			(Local_239[0 /*32*/])->f_1 = 233635031;
			(Local_239[0 /*32*/])->f_3 = -728053340;
			Local_239[0 /*32*/] = 22;
			StringCopy(&((Local_239[0 /*32*/])->f_23), "0746_G_M_M_BountyHunters_01_WHITE_08", 64);
			(Local_239[1 /*32*/])->f_1 = 233635031;
			(Local_239[1 /*32*/])->f_3 = -2129848553;
			StringCopy(&((Local_239[1 /*32*/])->f_23), "0192_A_M_M_HtlRoughTravellers_01_WHITE_01", 64);
			Local_239[1 /*32*/] = 22;
			(Local_239[2 /*32*/])->f_1 = -915783151;
			(Local_239[2 /*32*/])->f_3 = 1855801915;
			Local_239[2 /*32*/] = 5;
			StringCopy(&((Local_239[2 /*32*/])->f_23), "0461_A_F_M_ValTownfolk_01_WHITE_01", 64);
			(Local_239[3 /*32*/])->f_1 = 233635031;
			(Local_239[3 /*32*/])->f_3 = 1855801915;
			Local_239[3 /*32*/] = 4;
			(Local_239[4 /*32*/])->f_1 = 233635031;
			(Local_239[4 /*32*/])->f_3 = -1662212387;
			Local_239[4 /*32*/] = 4;
			StringCopy(&((Local_239[4 /*32*/])->f_23), "0465_A_M_M_ValTownfolk_01_WHITE_01", 64);
			(Local_239[5 /*32*/])->f_1 = 233635031;
			(Local_239[5 /*32*/])->f_3 = -1960443056;
			Local_239[5 /*32*/] = 4;
			(Local_239[6 /*32*/])->f_1 = 233635031;
			(Local_239[6 /*32*/])->f_3 = 2001591252;
			Local_239[6 /*32*/] = 22;
			(Local_239[7 /*32*/])->f_1 = 233635031;
			(Local_239[7 /*32*/])->f_3 = -1995407527;
			Local_239[7 /*32*/] = 4;
			StringCopy(&((Local_239[7 /*32*/])->f_23), "0467_S_M_M_ValCowpoke_01_WHITE_01", 64);
			(Local_239[8 /*32*/])->f_1 = 233635031;
			(Local_239[8 /*32*/])->f_3 = -1837002177;
			Local_239[8 /*32*/] = 4;
			(Local_239[9 /*32*/])->f_1 = -915783151;
			(Local_239[9 /*32*/])->f_3 = -1662212387;
			Local_239[9 /*32*/] = 5;
			StringCopy(&((Local_239[9 /*32*/])->f_23), "0462_A_F_M_ValProstitute_01_WHITE_01", 64);
			(Local_239[10 /*32*/])->f_1 = 233635031;
			(Local_239[10 /*32*/])->f_3 = -1506035277;
			Local_239[10 /*32*/] = 4;
			(Local_239[11 /*32*/])->f_1 = -915783151;
			(Local_239[11 /*32*/])->f_3 = -1960443056;
			Local_239[11 /*32*/] = 5;
			(Local_239[12 /*32*/])->f_1 = 233635031;
			(Local_239[12 /*32*/])->f_3 = 777538026;
			Local_239[12 /*32*/] = 4;
			(Local_239[13 /*32*/])->f_1 = 233635031;
			(Local_239[13 /*32*/])->f_3 = 1074720087;
			Local_239[13 /*32*/] = 4;
			break;
		case 92:
			(Local_239[0 /*32*/])->f_1 = 233635031;
			(Local_239[0 /*32*/])->f_3 = 885345434;
			Local_239[0 /*32*/] = 22;
			StringCopy(&((Local_239[0 /*32*/])->f_23), "0499_S_M_M_VhtDockWorker_01_WHITE_01", 64);
			(Local_239[1 /*32*/])->f_1 = 233635031;
			(Local_239[1 /*32*/])->f_3 = -34547514;
			StringCopy(&((Local_239[1 /*32*/])->f_23), "0497_S_M_M_VhtLaborer_01_WHITE_01", 64);
			Local_239[1 /*32*/] = 22;
			(Local_239[2 /*32*/])->f_1 = -915783151;
			(Local_239[2 /*32*/])->f_3 = 1645670014;
			Local_239[2 /*32*/] = 5;
			(Local_239[3 /*32*/])->f_1 = 233635031;
			(Local_239[3 /*32*/])->f_3 = 1645670014;
			Local_239[3 /*32*/] = 4;
			StringCopy(&((Local_239[3 /*32*/])->f_23), "0494_A_M_M_VhtTownfolk_01_WHITE_01", 64);
			(Local_239[4 /*32*/])->f_1 = 233635031;
			(Local_239[4 /*32*/])->f_3 = 1344359059;
			Local_239[4 /*32*/] = 4;
			(Local_239[5 /*32*/])->f_1 = 233635031;
			(Local_239[5 /*32*/])->f_3 = 1783037674;
			Local_239[5 /*32*/] = 4;
			(Local_239[6 /*32*/])->f_1 = 233635031;
			(Local_239[6 /*32*/])->f_3 = 1469405575;
			Local_239[6 /*32*/] = 22;
			StringCopy(&((Local_239[6 /*32*/])->f_23), "0495_A_M_M_VhtTownfolk_01_BLACK_01", 64);
			(Local_239[7 /*32*/])->f_1 = 233635031;
			(Local_239[7 /*32*/])->f_3 = -313228025;
			Local_239[7 /*32*/] = 4;
			(Local_239[8 /*32*/])->f_1 = 233635031;
			(Local_239[8 /*32*/])->f_3 = 455237794;
			Local_239[8 /*32*/] = 4;
			(Local_239[9 /*32*/])->f_1 = -915783151;
			(Local_239[9 /*32*/])->f_3 = 1344359059;
			Local_239[9 /*32*/] = 5;
			(Local_239[10 /*32*/])->f_1 = 233635031;
			(Local_239[10 /*32*/])->f_3 = 288967888;
			Local_239[10 /*32*/] = 4;
			StringCopy(&((Local_239[10 /*32*/])->f_23), "0902_A_M_M_Civ_Poor_White_AGGRESSIVE_02", 64);
			(Local_239[11 /*32*/])->f_1 = -915783151;
			(Local_239[11 /*32*/])->f_3 = 1783037674;
			Local_239[11 /*32*/] = 5;
			StringCopy(&((Local_239[11 /*32*/])->f_23), "0491_A_F_M_VhtTownfolk_02_BLACK_01", 64);
			(Local_239[12 /*32*/])->f_1 = 233635031;
			(Local_239[12 /*32*/])->f_3 = -1088345963;
			Local_239[12 /*32*/] = 4;
			(Local_239[13 /*32*/])->f_1 = 233635031;
			(Local_239[13 /*32*/])->f_3 = -1335653606;
			Local_239[13 /*32*/] = 4;
			break;
	}
}

void func_54()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if ((Local_239[iVar0 /*32*/])->f_1 != 0)
		{
			STREAMING::REQUEST_MODEL((Local_239[iVar0 /*32*/])->f_1, false);
		}
		iVar0++;
	}
}

void func_55()
{
	Local_229[0 /*2*/] = "mech_loco@generic@brave@base@a";
	(Local_229[0 /*2*/])->f_1 = "idle";
	Local_229[1 /*2*/] = "script_re@duel_winner@taunt";
	(Local_229[1 /*2*/])->f_1 = "chicken_shit_ped01";
	Local_229[2 /*2*/] = "script_re@duel_winner@taunt";
	(Local_229[2 /*2*/])->f_1 = "you_scared_ped01";
	Local_229[3 /*2*/] = "script_re@duel_winner@taunt";
	(Local_229[3 /*2*/])->f_1 = "laughing_ped01";
	func_206(&(Local_229[0 /*2*/]), &uLocal_1156);
	func_206(&(Local_229[1 /*2*/]), &uLocal_1156);
}

int func_56(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((*uParam0)[iVar1 /*8*/]))
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED((*uParam0)[iVar1 /*8*/]))
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

bool func_57(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_207((*iParam0)[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

int func_58(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;

	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_208(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_209(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_82(iParam0, 128))
			{
				if (!func_210(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_211(iParam0, &fVar1, &fVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_212(&bVar4, iParam0, fVar2, fVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_213(*uParam1))
				{
					return func_214(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_215(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_3(Param4.f_2, 8))
				{
					func_209(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_216(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_217(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_218(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
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
			if (func_82(iParam0, 128))
			{
				if (!func_219(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_214(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_211(iParam0, &fVar1, &fVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!func_216(uParam1))
					{
						return func_214(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
			if (func_220(iParam0, Param4.f_1, uParam1, Param4, bParam14))
			{
				func_209(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_214(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
		func_37("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_37("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

int func_59(var uParam0, int iParam1)
{
	if (func_60(iParam1, 256))
	{
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_172) || func_222(iParam1, func_221(uParam0), &(uParam0->f_172)))
		{
			if (func_78(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return 1;
}

bool func_60(int iParam0, int iParam1)
{
	if (!func_223(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

void func_61(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_224(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_60(uParam0->f_3, 1) && !func_60(uParam0->f_3, 32))
	{
		func_224(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_60(uParam0->f_3, 2) && !func_60(uParam0->f_3, 32))
	{
		func_224(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_225(uParam0->f_171, 1);
	}
	if (func_60(uParam0->f_3, 1))
	{
		func_224(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, VOLUME::_0x3E2A25B2416DD67E(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_226(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_62(vector3 vParam0)
{
	vector3 vVar0;

	vVar0 = { Global_36 - vParam0 };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

void func_63(var uParam0)
{
	func_227(uParam0, 2);
}

int func_64(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	vector3 vVar6;

	if (!func_228(iParam2))
	{
		return 0;
	}
	if (iParam6 < 0 || iParam6 >= *iParam2)
	{
		iParam6 = 0;
	}
	if (iParam7 < 0 || iParam7 >= *iParam2)
	{
		iParam7 = (*iParam2 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (((*iParam2)[iVar0 /*32*/])->f_1 != 0)
		{
			if (iParam3 && !func_229(&(((*iParam2)[iVar0 /*32*/])->f_22)))
			{
				vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_51, uParam0->f_51.f_3, ((*iParam2)[iVar0 /*32*/])->f_6) };
				uVar1 = func_230((uParam0->f_51.f_3 + ((*iParam2)[iVar0 /*32*/])->f_9));
			}
			else
			{
				vVar3 = { ((*iParam2)[iVar0 /*32*/])->f_6 };
				uVar1 = func_230(((*iParam2)[iVar0 /*32*/])->f_9);
			}
			if (!func_231(&(((*iParam2)[iVar0 /*32*/])->f_22)))
			{
				func_232(&vVar3, 1, 10, 0);
			}
			if (((*iParam2)[iVar0 /*32*/])->f_12 != 0)
			{
				if (!((*iParam2)[iVar0 /*32*/])->f_19 && !func_229(&(((*iParam2)[iVar0 /*32*/])->f_22)))
				{
					vVar6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_51, uParam0->f_51.f_3, ((*iParam2)[iVar0 /*32*/])->f_15) };
					uVar2 = func_230((uParam0->f_51.f_3 + ((*iParam2)[iVar0 /*32*/])->f_18));
					func_232(&vVar6, 1, 10, 0);
				}
				else
				{
					vVar6 = { ((*iParam2)[iVar0 /*32*/])->f_15 };
					uVar2 = func_230(((*iParam2)[iVar0 /*32*/])->f_18);
				}
				func_233(uParam1, iVar0 + 15, ((*iParam2)[iVar0 /*32*/])->f_12, vVar6, uVar2, bParam4, bParam5, 0, 1, 0);
			}
			func_233(uParam1, iVar0, ((*iParam2)[iVar0 /*32*/])->f_1, vVar3, uVar1, bParam4, bParam5, ((*iParam2)[iVar0 /*32*/])->f_2, 1, ((*iParam2)[iVar0 /*32*/])->f_5);
		}
		iVar0++;
	}
	return 1;
}

int func_65(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;

	if (*iParam1 != *uParam2)
	{
		return 0;
	}
	if (iParam5 < 0 || iParam5 >= *iParam1)
	{
		iParam5 = 0;
	}
	if (iParam6 < 0 || iParam6 >= *iParam1)
	{
		iParam6 = (*iParam1 - 1);
	}
	if (func_234(uParam0, 1))
	{
		iVar0 = iParam5;
		while (iVar0 <= iParam6)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam2[iVar0]) && ((*iParam1)[iVar0 /*32*/])->f_1 != 0)
			{
				(*uParam2)[iVar0] = func_235(uParam0, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(uParam2[iVar0]))
				{
					if (((*iParam1)[iVar0 /*32*/])->f_12 != 0)
					{
						((*iParam1)[iVar0 /*32*/])->f_11 = func_235(uParam0, iVar0 + 15);
						func_236(&(((*iParam1)[iVar0 /*32*/])->f_11), (*iParam1)[iVar0 /*32*/], bParam3, 1);
						ENTITY::_SET_ENTITY_HEALTH(((*iParam1)[iVar0 /*32*/])->f_11, 400, 0);
						PED::_0x283978A15512B2FE(((*iParam1)[iVar0 /*32*/])->f_11, 1);
						PED::_0x1902C4CFCC5BE57C(((*iParam1)[iVar0 /*32*/])->f_11, 1268180497);
						PED::_0xCC8CA3E88256E58F(((*iParam1)[iVar0 /*32*/])->f_11, 1, 1, 1, 1, 0);
						if (((*iParam1)[iVar0 /*32*/])->f_13)
						{
							PED::_SET_PED_ON_MOUNT(uParam2[iVar0], ((*iParam1)[iVar0 /*32*/])->f_11, -1, true);
						}
						PED::SET_PED_CONFIG_FLAG(uParam2[iVar0], 307, true);
					}
					if (((*iParam1)[iVar0 /*32*/])->f_10)
					{
						PED::_0x0FB1BA7FF73B41E1(uParam2[iVar0], ((*iParam1)[iVar0 /*32*/])->f_4, 0);
					}
					if (bParam4)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(((*iParam1)[iVar0 /*32*/])->f_23)))
						{
							func_68(uParam2[iVar0], &(((*iParam1)[iVar0 /*32*/])->f_23), 0);
						}
					}
					if (func_237(&(((*iParam1)[iVar0 /*32*/])->f_22)))
					{
						GRAPHICS::_0xDFCE8CE9F3EBE93F(uParam2[iVar0]);
					}
					func_236((*uParam2)[iVar0], (*iParam1)[iVar0 /*32*/], bParam3, 0);
				}
			}
			iVar0++;
		}
		func_238(uParam0);
		return 1;
	}
	return 0;
}

int func_66(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((func_239(iParam0, 8192) && func_239(iParam0, 16384)) && func_239(iParam0, 131072))
	{
		return joaat("weapon_revolver_cattleman");
	}
	iVar0 = WEAPON::_0xF8204EF17410BF43(416676503, iParam1, iParam2, 0);
	iVar1 = WEAPON::_0xF8204EF17410BF43(-1101297303, iParam1, iParam2, 0);
	iVar2 = joaat("weapon_shotgun_sawedoff");
	iVar3 = 0;
	if (!func_239(iParam0, 16384))
	{
		iVar3 = iVar1;
	}
	if (!func_239(iParam0, 8192))
	{
		if (!func_240(iVar3) || WEAPON::_0xF2F585411E748B9C(iVar0, 0) > WEAPON::_0xF2F585411E748B9C(iVar3, 0))
		{
			iVar3 = iVar0;
		}
	}
	if (!func_239(iParam0, 131072) && func_241(iVar2))
	{
		if (!func_240(iVar3) || WEAPON::_0xF2F585411E748B9C(iVar2, 0) > WEAPON::_0xF2F585411E748B9C(iVar3, 0))
		{
			iVar3 = iVar2;
		}
	}
	if (!func_240(iVar3))
	{
		return joaat("weapon_revolver_cattleman");
	}
	return iVar3;
}

bool func_67(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_240(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_240(iVar4) && iVar4 != bVar0)
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
	if (func_242() == -1 && !func_241(bVar0))
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
				if (func_241(joaat("weapon_repeater_carbine")))
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
		if (iParam0 != Global_35 && func_240(bVar0))
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
		func_243(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_244(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_245(bVar0))
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

void func_68(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 || func_78(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

int func_69(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_246(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_70(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

void func_71(var uParam0, int iParam1)
{
	uParam0->f_88 = (uParam0->f_88 || iParam1);
}

void func_72(var uParam0, int iParam1)
{
	uParam0->f_89 = iParam1;
}

char[] func_73(char[4] cParam0)
{
	char* sVar0;
	char[] cVar1[8];
	int iVar2;

	StringCopy(&sVar0, "DUELW", 8);
	switch (iLocal_873)
	{
		case 76:
			StringCopy(&cVar1, "VAL", 8);
			break;
		case 92:
			StringCopy(&cVar1, "VHT", 8);
			break;
	}
	switch (iLocal_17)
	{
		case 0:
			iVar2 = 1;
			break;
	}
	return func_247(&sVar0, &cVar1, cParam0, iVar2);
}

float func_74(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, int iParam6)
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

bool func_75(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_76(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_77(var uParam0, float fParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0))
	{
		uParam0->f_2 = uVar3;
		return 1;
	}
	return 0;
}

bool func_78(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_196(iParam0, iParam1);
}

void func_79(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { func_248(uParam0) };
	iVar3 = func_187(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::STATSTRACKER_IS_INITIALIZED(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_80(var uParam0, var uParam1)
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

void func_81(var uParam0)
{
	func_38(uParam0, 1);
	func_249(uParam0, 20);
}

bool func_82(int iParam0, int iParam1)
{
	if (!func_223(iParam0))
	{
		return false;
	}
	return (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1) != 0;
}

void func_83(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_223(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_250())
	{
		func_251(1);
	}
	func_252(iParam2, uParam0->f_43);
	func_253(iParam2, 0, 0, 0, 0);
	if (func_254(iParam2) != -1)
	{
		MISC::_0xD74ACDF7DB8114AF(1);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_178(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_255(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_84(var uParam0)
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

void func_85(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (uParam0->f_178 && func_256())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_82(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_83(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_84(&(uParam0->f_121));
			return;
		}
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (!func_257(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_258(uParam0, bVar0);
		func_259(uParam0->f_121[iParam1 /*9*/], fVar1, 1082130432, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_260(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_83(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_84(&(uParam0->f_121));
		}
	}
}

int func_86(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 30f;
	fVar1 = 150f;
	if (func_60(uParam2->f_3, 1))
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
			if (func_261())
			{
				fVar0 = 15f;
			}
		}
		if (func_262(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_263(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return 0;
		}
		if (!func_262(uParam2, fVar1))
		{
			if (!func_264(((*Global_1310750)[uParam2->f_3 /*111*/])->f_38))
			{
				return 0;
			}
		}
		if (!func_265(uParam2->f_3, 2) && func_266(2))
		{
			return 0;
		}
		if (func_60(iParam0, 4194304) || func_60(iParam0, 33554432))
		{
			if (func_267(1))
			{
				return 0;
			}
		}
	}
	if (func_268(Global_35))
	{
		return 0;
	}
	if (func_269(0, 1, 1) && !func_270(iParam0))
	{
		return 0;
	}
	if (!*uParam1 && func_60(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (func_271(Global_35, 0))
		{
			return 0;
		}
		if (Global_16)
		{
			return 0;
		}
		if (func_263(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return 0;
		}
		if (func_272())
		{
			return 0;
		}
		iVar2 = func_273(func_2());
		if (func_274(iVar2))
		{
			if (func_275(Global_36, iVar2))
			{
				return 0;
			}
		}
		if (func_276(Global_36) && !uParam2->f_161)
		{
			return 0;
		}
		if (!uParam2->f_48)
		{
			if (func_277(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_87(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;

	if (func_278(uParam0->f_51))
	{
		func_279(uParam0->f_51, 0);
		fVar0 = func_280(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_281());
		fVar1 = func_183(!func_60(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_283(iVar2, func_282(uParam0->f_3), 1, iParam1, 8, 0, fVar1);
	}
}

void func_88(int iParam0, var uParam1)
{
	if (iParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		iParam0->f_8 = func_284();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	func_285(iParam0, 0);
	*uParam1 = 0;
	iParam0->f_16 = 0;
}

int func_89(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		iVar0 = func_286(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_287(uParam0[*uParam3], 0, iParam1, uParam2, 0, 0))
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

int func_90(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

int func_91()
{
	if (func_288() || PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		return 1;
	}
	return 0;
}

bool func_92(var uParam0)
{
	return func_289(*uParam0, 1);
}

void func_93(var uParam0)
{
	func_290(uParam0, 0f);
}

int func_94(var uParam0, float fParam1)
{
	if (func_291(uParam0, fParam1))
	{
		func_195(uParam0);
		return 1;
	}
	return 0;
}

void func_95(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

bool func_96(int iParam0)
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

void func_97(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_96(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_292(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_293(iVar0);
	*uParam0 = 0;
}

void func_98(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(&(uLocal_1121[0])))
	{
		return;
	}
	if (iLocal_1357 >= iParam0)
	{
		if (func_294(&(uLocal_1121[0]), Global_35, 0, 1114636288, 0) || &Local_35.f_98[0] < 30f)
		{
			func_24(&iLocal_238, 256);
		}
		else
		{
			func_42(&iLocal_238, 256);
		}
		iLocal_1357 = 0;
	}
	iLocal_1357++;
}

void func_99()
{
	if (!func_145())
	{
		func_295(&uLocal_1121, 1, -1, 1, 1, 1, 1);
	}
	else if (!func_3(iLocal_238, 2))
	{
		func_32();
		func_24(&iLocal_238, 2);
	}
}

void func_100()
{
	int iVar0;

	if (!func_3(iLocal_238, 1048576) && !Local_35.f_46)
	{
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			iVar0 = PED::_0x4C8B59171957BCF7(Global_35);
			if (func_257(Global_35, iLocal_1152, 1, 0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
			}
		}
	}
}

void func_101()
{
	int iVar0;
	int iVar1;

	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1121[0])))
	{
		iVar0 = func_296(3, 0, 0);
		if (func_3(iLocal_238, 2097152))
		{
			iVar0 = 1;
		}
		iVar1 = func_297(uLocal_1121[0], Local_1046[0 /*21*/], 15f, &Local_1068, &(Local_35.f_192), 0, 1, 0, 0, iVar0, 0, 0, 2, 1, -1082130432, 0);
		if (iLocal_1120 <= -1)
		{
			iLocal_1120 = iVar1;
		}
	}
}

int func_102()
{
	int iVar0;

	if (iLocal_1356 >= 4)
	{
		return 1;
	}
	if (iLocal_1367)
	{
		return 1;
	}
	if (func_291(&uLocal_888, 1f))
	{
		iVar0 = func_298(iLocal_1356);
		if (iVar0 != -1 && !ENTITY::IS_ENTITY_DEAD(&(uLocal_1121[iVar0])))
		{
			func_141(&(uLocal_1121[iVar0]), Global_35, func_299(iLocal_1356, iLocal_1044), 0, -1082130432, 0, 0, 0, 1, 1, 0, -417894478, 1, 0, 0);
		}
		iLocal_1356++;
		func_93(&uLocal_888);
	}
	return 0;
}

int func_103()
{
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_19, 1, 0))
	{
		return 0;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_19.f_1, 1, 0))
	{
		return 0;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_19.f_2, 1, 0))
	{
		return 0;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_19.f_3, 1, 0))
	{
		return 0;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_27, 1, 0))
	{
		return 0;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_27.f_1, 1, 0))
	{
		return 0;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_27.f_2, 1, 0))
	{
		return 0;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_27.f_3, 1, 0))
	{
		return 0;
	}
	return 1;
}

void func_104()
{
	func_301(Local_1068[0 /*17*/], func_300(7), "", -163964935, 0, 0, 0, 1, 0);
	func_301(Local_1068[1 /*17*/], func_300(10), "", 648122183, 0, 0, 0, 1, 0);
	func_301(Local_1068[2 /*17*/], func_300(12), "", -1616532217, 0, 0, 0, 1, 0);
	func_302(Local_1068[2 /*17*/], 1);
}

void func_105(bool bParam0)
{
	func_303(Local_1046[0 /*21*/], 0);
	func_304(0);
	if (bParam0)
	{
		iLocal_1120 = -1;
	}
}

void func_106()
{
	iLocal_1152 = func_306(func_305(0), func_305(1), 12f, 25f, 10f, "REDW - volAmbientRestriction");
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_1152, 534496, 264192, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_1152, 534496, 262144, 0, -1, -1, 2);
	func_307();
}

void func_107(float fParam0)
{
	if (func_78(&(uLocal_1121[0]), 0, 1))
	{
		iLocal_1350 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(-23350179, &(uLocal_1121[0]), fParam0, 25f, 25f, fParam0, 12f, 1127481344, 0, 0, -1, -1);
	}
}

void func_108(char* sParam0)
{
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_19.f_2, sParam0);
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_19.f_3, sParam0);
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_27, sParam0);
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_27.f_1, sParam0);
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_27.f_2, sParam0);
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_27.f_3, sParam0);
}

int func_109(var uParam0, var uParam1, float fParam2, float fParam3, float fParam4, int iParam5, float fParam6, float fParam7, int iParam8, float fParam9, bool bParam10, float fParam11, int iParam12, int iParam13, bool bParam14)
{
	float fVar0;

	func_308(Global_35, uParam0->f_51, uParam1, 0f, 0, 0);
	fVar0 = 0f;
	if (func_309(uParam1, iParam5))
	{
		if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			fVar0 = (ENTITY::GET_ENTITY_SPEED(Global_35) * fParam7);
		}
		else
		{
			fVar0 = (ENTITY::GET_ENTITY_SPEED(Global_35) * fParam6);
		}
	}
	if (func_310(uParam0, fParam2, 1114636288, (fParam4 + fVar0), iParam8, fParam9, bParam10, fParam11, iParam12, 1125515264, bParam14, 1))
	{
		return 1;
	}
	return 0;
}

void func_110(var uParam0)
{
	int iVar0;

	func_84(&(uParam0->f_121));
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		uParam0->f_121[iVar0 /*9*/] = 0;
		iVar0++;
	}
}

int func_111(float fParam0)
{
	vector3 vVar0;

	if (!func_78(&(uLocal_1121[0]), 0, 1) || !func_78(&(uLocal_1121[1]), 0, 1))
	{
		return 0;
	}
	vVar0 = { func_311(Global_35, 3f) };
	if (func_154(&(uLocal_1121[0]), vVar0, 1) < fParam0 || func_154(&(uLocal_1121[1]), vVar0, 1) < fParam0)
	{
		func_24(&iLocal_238, 131072);
		return 1;
	}
	return 0;
}

int func_112()
{
	switch (func_2())
	{
		case 76:
			return func_312();
		case 92:
			return func_313();
		default:
			break;
	}
	return 0;
}

void func_113(char* sParam0, bool bParam1)
{
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_2, sParam0, bParam1, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_3, sParam0, bParam1, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27, sParam0, bParam1, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_1, sParam0, bParam1, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_2, sParam0, bParam1, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_3, sParam0, bParam1, false);
}

float func_114(var uParam0)
{
	if (!func_92(uParam0))
	{
		return 0f;
	}
	if (func_314(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_315() - uParam0->f_1);
}

int func_115()
{
	switch (iLocal_1349)
	{
		case 0:
			if (func_140(-3f, 1, 0, 0) || func_3(iLocal_238, 131072))
			{
				if (!func_3(iLocal_238, 1073741824))
				{
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_1121[0]), 0);
					func_141(&(uLocal_1121[0]), &(uLocal_1121[1]), Local_1189[22 /*4*/], 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_24(&iLocal_238, 1073741824);
				}
				iLocal_1349++;
			}
			break;
		case 1:
			if (func_140(-4f, 1, 0, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_116(int iParam0)
{
	func_195(&uLocal_0);
	func_316(1, iParam0, 0);
	_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	func_317();
}

void func_117(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_0x0C7A2289A5C4D7C9(iParam0, iParam1);
}

void func_118()
{
	if (func_318(Local_19.f_2, "preDuel", "pblPreDuel", "endLoop", "bReleaseCrowd", 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_19.f_2, "pblPreDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_2, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_2, "bDrawIdle", false, false);
	}
	if (func_318(Local_19.f_3, "preDuel", "pblPreDuel", "endLoop", "bReleaseCrowd", 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_19.f_3, "pblPreDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_3, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_3, "bDrawIdle", false, false);
	}
	if (func_318(Local_27, "preDuel", "pblPreDuel", "endLoop", "bReleaseCrowd", 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_27, "pblPreDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27, "bDrawIdle", false, false);
	}
	if (func_318(Local_27.f_1, "preDuel", "pblPreDuel", "endLoop", "bReleaseCrowd", 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_27.f_1, "pblPreDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_1, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_1, "bDrawIdle", false, false);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_27.f_1, -342.291f, 717.985f, 116.362f, 0f, 0f, -178.125f, 2);
	}
	if (func_318(Local_27.f_2, "preDuel", "pblPreDuel", "endLoop", "bReleaseCrowd", 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_27.f_2, "pblPreDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_2, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_2, "bDrawIdle", false, false);
	}
	if (func_318(Local_27.f_3, "preDuel", "pblPreDuel", "endLoop", "bReleaseCrowd", 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_27.f_3, "pblPreDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_3, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_3, "bDrawIdle", false, false);
	}
}

void func_119(int iParam0, bool bParam1, bool bParam2)
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

void func_120()
{
	iLocal_1356 = 0;
	func_93(&uLocal_888);
}

void func_121(int iParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0, 0))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
		}
	}
}

int func_122(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, int iParam6)
{
	if (func_319(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, iParam6 == 0))
	{
		return 1;
	}
	return 0;
}

void func_123()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1155))
	{
		if (func_320(iLocal_1155, iLocal_1152, 0, 1))
		{
			if (!func_321(iLocal_1155, 518218985))
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_1155, Global_35, 1, 0, -1082130432, -1, 0);
				}
			}
		}
	}
}

int func_124()
{
	if ((func_125(&(uLocal_1121[0]), 1, 1) < 2f && PED::IS_PED_FACING_PED(Global_35, &(uLocal_1121[0]), 90f)) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(&(uLocal_1121[0])))
	{
		func_141(&(uLocal_1121[0]), Global_35, func_73("DUELER_CHAL"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_24(&iLocal_238, 4194304);
		func_24(&iLocal_238, 2097152);
		func_24(&iLocal_238, 16777216);
		func_105(1);
		func_135();
		TASK::TASK_CONFRONT(&(uLocal_1121[0]), Global_35, 2);
		iLocal_15 = 13;
		return 1;
	}
	return 0;
}

float func_125(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_322(Global_35, iParam0, bParam1, iParam2);
}

int func_126()
{
	if (MISC::ABSF((Global_36.f_2 - Local_35.f_51.f_2)) < 3f && !func_271(Global_35, 1))
	{
		return 1;
	}
	return 0;
}

void func_127()
{
	if (iLocal_17 == 0)
	{
		if (!func_3(iLocal_238, 2097152))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), -752067550))
			{
				func_24(&iLocal_238, 2097152);
				PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
				iLocal_1368 = 1;
				func_105(1);
				func_323();
			}
		}
		else if (func_126())
		{
			if (iLocal_1120 == 0)
			{
				if (func_133())
				{
					func_134(203, 0);
				}
				else
				{
					func_134(205, 0);
				}
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_1121[0]), 0);
				func_141(Global_35, &(uLocal_1121[0]), func_73("PLAYER_CHAL"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_105(1);
				func_121(Local_19);
				func_42(&iLocal_238, 2097152);
				func_143();
				func_113("bDrawIdle", 1);
				func_142(&Local_35, Local_782.f_42, Local_782.f_86, 0, 1114636288);
				iLocal_15 = 13;
			}
			if (iLocal_1120 == 1)
			{
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_1121[0]), 0);
				func_141(Global_35, &(uLocal_1121[0]), func_73("PLR_QUIT"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_93(&uLocal_882);
				func_31(Local_875);
				func_24(&iLocal_238, 33554432);
				func_137();
				func_105(1);
				iLocal_15 = 11;
			}
		}
	}
}

void func_128()
{
	func_139(Local_19.f_2, &iLocal_238, 2048, 2, 3);
	func_139(Local_19.f_3, &iLocal_238, 4096, 4, 5);
	func_139(Local_27, &iLocal_238, 8192, 6, 6);
	func_139(Local_27.f_1, &iLocal_238, 16384, 7, 8);
	func_139(Local_27.f_2, &iLocal_238, 32768, 9, 10);
	func_139(Local_27.f_3, &iLocal_238, 65536, 11, 13);
}

void func_129()
{
	if (!func_92(&uLocal_885))
	{
		func_93(&uLocal_885);
		fLocal_1346 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 4f);
	}
	else if (func_94(&uLocal_885, fLocal_1346))
	{
		switch (iLocal_1352)
		{
			case 0:
				func_324(Local_19.f_2, "bReleaseCrowd", 1);
				func_93(&uLocal_885);
				iLocal_1352++;
				break;
			case 1:
				func_324(Local_19.f_3, "bReleaseCrowd", 1);
				func_93(&uLocal_885);
				iLocal_1352++;
				break;
			case 2:
				func_324(Local_27, "bReleaseCrowd", 1);
				func_93(&uLocal_885);
				iLocal_1352++;
				break;
			case 3:
				func_324(Local_27.f_1, "bReleaseCrowd", 1);
				func_93(&uLocal_885);
				iLocal_1352++;
				break;
			case 4:
				func_324(Local_27.f_2, "bReleaseCrowd", 1);
				func_93(&uLocal_885);
				iLocal_1352++;
				break;
			case 5:
				func_324(Local_27.f_3, "bReleaseCrowd", 1);
				func_93(&uLocal_885);
				iLocal_1352++;
				break;
			case 6:
				break;
		}
	}
}

void func_130()
{
	if (func_325(Global_36))
	{
		TASK::CLEAR_PED_TASKS(&(uLocal_1121[0]), 1, 0);
		func_93(&uLocal_882);
		func_137();
		func_24(&iLocal_238, 33554432);
		func_42(&iLocal_238, 2097152);
		func_105(1);
		iLocal_15 = 11;
	}
}

void func_131(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	struct<14> Var0;

	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	if (bParam7)
	{
		Var0.f_17 = 4;
		Var0.f_18 = 1;
	}
	else
	{
		Var0.f_17 = 0;
		Var0.f_18 = 0;
	}
	Var0.f_19 = 4;
	Var0.f_20 = 2;
	Var0.f_21 = 4;
	Var0.f_22 = 3;
	Var0 = { iParam4, iParam5, iParam6 };
	Var0.f_12 = 0;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	if (bParam3)
	{
		func_227(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	func_326(&(Var0.f_5), 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam0, &Var0);
	}
}

void func_132(int iParam0)
{
	int iVar0;

	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, &(Local_229[1 /*2*/]), (Local_229[1 /*2*/])->f_1, Global_35, 6333, 4f, -4f, 0, 0, 0, 0, -1082130432, 0, 0, -1082130432);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, &(Local_229[0 /*2*/]), (Local_229[0 /*2*/])->f_1, Global_35, -1, 4f, -4f, 0, 0, 0, 0, -1082130432, 0, 0, -1082130432);
	func_327(iParam0, &iVar0, 0, 0, 1, 1);
	func_117(2001176446, &(uLocal_1121[0]), 1);
}

int func_133()
{
	int iVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (!func_328(&iVar0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 3, false);
	}
	if (!func_328(&iVar0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	}
	if (!func_328(&iVar0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 1, false);
	}
	if (!func_328(&iVar0))
	{
		iVar0 = 0;
	}
	if (!func_328(&iVar0))
	{
		iVar0 = func_329(131200, 0);
	}
	if (!func_328(&iVar0))
	{
		return 0;
	}
	return 1;
}

void func_134(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_330(iParam0, &iVar0, &iVar1);
	if (!func_331(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_332(iVar0, iVar1);
}

void func_135()
{
	func_333(0, "RE_DD_CHALLENGE");
	if (func_133())
	{
		func_334(0, 1);
	}
	else
	{
		func_334(0, 0);
	}
	func_333(1, func_300(1));
	func_334(1, 1);
	func_334(2, 0);
}

float func_136(var uParam0)
{
	if (!func_92(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_314(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_315() - uParam0->f_1);
}

void func_137()
{
	func_333(0, func_300(7));
	func_334(0, 0);
	func_333(1, func_300(10));
	func_334(1, 1);
	func_334(2, 0);
}

void func_138()
{
	if (iLocal_17 != 0)
	{
		return;
	}
	if (!func_3(iLocal_238, 1024))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_1121[0]), &(Local_229[1 /*2*/]), (Local_229[1 /*2*/])->f_1, 1) && func_335(&(uLocal_1121[0]), Global_35, 0))
		{
			if (!func_92(&uLocal_900))
			{
				func_93(&uLocal_900);
			}
			else if (func_114(&uLocal_900) > 2f)
			{
				if (func_205(1) >= 1)
				{
					func_141(&(uLocal_1121[0]), Global_35, &Local_1318, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else if (!func_3(iLocal_238, 16777216))
				{
					if (func_165(0))
					{
						func_141(&(uLocal_1121[0]), Global_35, &Local_1326, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_141(&(uLocal_1121[0]), Global_35, &Local_1322, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				func_24(&iLocal_238, 1024);
			}
		}
	}
	else if (!func_3(iLocal_238, 8))
	{
		if (func_140(3f, 1, 0, 0))
		{
			if (func_205(1) >= 1)
			{
				func_141(&(uLocal_1121[0]), Global_35, &Local_1330, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else if (func_165(0))
			{
				func_141(&(uLocal_1121[0]), Global_35, &Local_1338, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_141(&(uLocal_1121[0]), Global_35, &Local_1334, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			func_336(&(uLocal_1121[0]));
			func_24(&iLocal_238, 8);
		}
	}
}

void func_139(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (!func_3(*iParam1, iParam2))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0, 0))
		{
			iVar0 = iParam3;
			while (iVar0 <= iParam4)
			{
				if (func_78(&(uLocal_1121[iVar0]), 0, 1))
				{
					PED::_0xAAB050DA48B57978(&(uLocal_1121[iVar0]), "Default_Scared", 0, -1, 4);
					func_337(&(uLocal_1121[iVar0]), 0, 0, 0);
				}
				iVar0++;
			}
			Local_35.f_50 = 1;
			func_93(&uLocal_885);
			fLocal_1346 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 4f);
			func_24(iParam1, iParam2);
		}
	}
}

int func_140(float fParam0, int iParam1, int iParam2, int iParam3)
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

bool func_141(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_340(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, iParam7, iParam8, bParam9, iParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_142(var uParam0, vector3 vParam1, int iParam4, int iParam5, float fParam6)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam4))
	{
		func_341(iParam5, func_205(1), iParam4, vParam1, 1069547520, 1075838976, 1056964608, 0, fParam6, 1);
	}
	else
	{
		func_342(iParam5, func_205(1), vParam1, uParam0->f_51, 1069547520, 1075838976, 1056964608, 0, fParam6, 1);
	}
	func_343(iParam5);
	uParam0->f_170 = 1;
}

void func_143()
{
	float fVar0[2];

	if (iLocal_1372 == 10)
	{
		func_23(1, &Local_782, &uLocal_688, -1038090240, 1103626240);
	}
	*(vLocal_1360[0 /*3*/]) = { func_305(0) };
	fVar0[0] = func_154(Global_35, *(vLocal_1360[0 /*3*/]), 1);
	*(vLocal_1360[1 /*3*/]) = { func_305(1) };
	fVar0[1] = func_154(Global_35, *(vLocal_1360[1 /*3*/]), 1);
	if (&fVar0[0] < &fVar0[1])
	{
		Local_782.f_42 = { *(vLocal_1360[0 /*3*/]) };
		iLocal_1045 = 0;
	}
	else
	{
		Local_782.f_42 = { *(vLocal_1360[1 /*3*/]) };
		iLocal_1045 = 1;
	}
	func_77(&(Local_782.f_42), 1088421888);
	if (iLocal_1372 == 10)
	{
		func_23(0, &Local_782, &uLocal_688, -1038090240, 1103626240);
	}
}

void func_144()
{
	if (!func_3(iLocal_238, 67108864))
	{
		switch (iLocal_1120)
		{
			case 1:
				if (func_3(iLocal_238, 16))
				{
					if (func_2() == 76)
					{
						func_141(Global_35, &(uLocal_1121[0]), "RE_DUELW_VAL_V1_PLR_ANT", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else if (func_2() == 92)
					{
						func_141(Global_35, &(uLocal_1121[0]), "RE_DUELW_VHT_V1_PLR_ANT", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else
				{
					func_141(Global_35, &(uLocal_1121[0]), "TELLS_PED_TO_SHUT_UP", 0, -1082130432, 3, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (func_3(iLocal_238, 33554432))
				{
					TASK::CLEAR_PED_TASKS(&(uLocal_1121[0]), 1, 0);
					func_344(&(uLocal_1121[0]), Global_35, -1);
				}
				func_105(0);
				func_24(&iLocal_238, 67108864);
				break;
			case 2:
				if (func_140(-3.5f, 1, &(uLocal_1121[0]), 1) && func_140(-3.5f, 1, Global_35, 1))
				{
					func_141(Global_35, &(uLocal_1121[0]), "WITNESS_INTIMIDATION_END_NOW_ROB", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					if (func_3(iLocal_238, 33554432))
					{
						TASK::CLEAR_PED_TASKS(&(uLocal_1121[0]), 1, 0);
						func_344(&(uLocal_1121[0]), Global_35, -1);
					}
					func_105(0);
					func_24(&iLocal_238, 67108864);
				}
				break;
		}
	}
	else if (!func_3(iLocal_238, 134217728))
	{
		switch (iLocal_1120)
		{
			case 1:
				if (func_140(0f, 1, &(uLocal_1121[0]), 1) && func_140(0f, 1, Global_35, 1))
				{
					if (func_3(iLocal_238, 16))
					{
						if (func_2() == 76)
						{
							func_345(&(uLocal_1121[0]), "GENERIC_INSULT_MED_MALE", 291934926, 0, 1, &((Local_239[0 /*32*/])->f_23), 1, 1);
						}
						else if (func_2() == 92)
						{
							func_345(&(uLocal_1121[0]), "GENERIC_ANGRY_SHOUT", 291934926, 0, 1, &((Local_239[0 /*32*/])->f_23), 1, 1);
						}
					}
					else if (func_3(iLocal_238, 33554432))
					{
						func_24(&iLocal_238, 268435456);
					}
					else
					{
						func_141(&(uLocal_1121[0]), Global_35, "WHATS_YOUR_PROBLEM", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_137();
					}
					func_105(1);
					func_24(&iLocal_238, 134217728);
				}
				break;
			case 2:
				if (func_140(-3.5f, 1, &(uLocal_1121[0]), 1) && func_140(-3.5f, 1, Global_35, 1))
				{
					func_24(&iLocal_238, 268435456);
					func_105(1);
					func_24(&iLocal_238, 134217728);
				}
				break;
		}
	}
}

int func_145()
{
	if (((((func_346(Local_19.f_2) && func_346(Local_19.f_3)) && func_346(Local_27)) && func_346(Local_27.f_1)) && func_346(Local_27.f_2)) && func_346(Local_27.f_3))
	{
		return 1;
	}
	return 0;
}

void func_146()
{
	if (func_318(Local_19.f_2, "preDuel", "pblDuel", 0, 0, 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_19.f_2, "pblDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_2, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_2, "bDrawIdle", false, false);
	}
	if (func_318(Local_19.f_3, "preDuel", "pblDuel", 0, 0, 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_19.f_3, "pblDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_3, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_3, "bDrawIdle", false, false);
	}
	if (func_318(Local_27, "preDuel", "pblDuel", 0, 0, 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_27, "pblDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27, "bDrawIdle", false, false);
	}
	if (func_318(Local_27.f_1, "preDuel", "pblDuel", 0, 0, 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_27.f_1, "pblDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_1, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_1, "bDrawIdle", false, false);
	}
	if (func_318(Local_27.f_2, "preDuel", "pblDuel", 0, 0, 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_27.f_2, "pblDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_2, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_2, "bDrawIdle", false, false);
	}
	if (func_318(Local_27.f_3, "preDuel", "pblDuel", 0, 0, 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_27.f_3, "pblDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_3, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_3, "bDrawIdle", false, false);
	}
}

void func_147()
{
	if (func_140(-2.5f, 1, 0, 0))
	{
		if (!func_92(&uLocal_882))
		{
			func_93(&uLocal_882);
		}
		if (func_94(&uLocal_882, 7.5f))
		{
			switch (iLocal_1353)
			{
				case 0:
					switch (func_2())
					{
						case 76:
							func_141(&(uLocal_1121[0]), Global_35, func_73("DUELER_IMP"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
						case 92:
							func_141(&(uLocal_1121[0]), Global_35, "CONVO_TAIL_OFF", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
					}
					break;
				case 1:
					switch (func_2())
					{
						case 76:
							func_141(&(uLocal_1121[0]), Global_35, func_73("DUELER_IMP"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
						case 92:
							func_141(&(uLocal_1121[0]), Global_35, "PROVOKE_GENERIC", 0, -1082130432, 3, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
					}
					break;
				default:
					func_24(&iLocal_238, 8388608);
					func_31(Local_875);
					iLocal_15 = 11;
					break;
			}
			iLocal_1353++;
		}
	}
}

void func_148()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	if (!func_159(Local_875))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 != iLocal_1045 && !func_213(*(vLocal_1360[iVar0 /*3*/])))
		{
			fVar2 = func_347(*(vLocal_1360[iVar0 /*3*/]), 1);
			if (fVar3 <= 0f || fVar2 < fVar3)
			{
				iVar1 = iVar0;
				fVar3 = fVar2;
			}
		}
		iVar0++;
	}
	if (fVar3 < (0.5f * func_347(*(vLocal_1360[iLocal_1045 /*3*/]), 1)))
	{
		iLocal_1045 = iVar1;
		func_348(Local_875, *(vLocal_1360[iLocal_1045 /*3*/]));
		Local_782.f_42 = { *(vLocal_1360[iLocal_1045 /*3*/]) };
	}
}

int func_149(struct<7> Param0)
{
	vector3 vVar0;

	if (!func_159(Param0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Param0.f_1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Param0.f_1))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Param0.f_1, true, false) };
	if (VOLUME::IS_POINT_IN_VOLUME(Param0, vVar0))
	{
		switch (Param0.f_3)
		{
			case 2:
				if (!PED::IS_PED_ON_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1)))
				{
					return 0;
				}
				break;
			case 4:
				if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1)))
				{
					return 0;
				}
				break;
			case 1:
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1)) || PED::IS_PED_ON_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1)))
				{
					return 0;
				}
				break;
		}
		return 1;
	}
	return 0;
}

void func_150(int iParam0)
{
	if (!func_349(iParam0))
	{
		return;
	}
	func_152(1);
}

void func_151(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_1905944[iVar1];
	MISC::CLEAR_BIT(&uVar3, iVar2);
	(*Global_1905944)[iVar1] = uVar3;
}

void func_152(int iParam0)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

void func_153()
{
	switch (func_2())
	{
		case 76:
			if (iLocal_1045 == 0)
			{
				*(Local_782.f_51[2 /*3*/]) = { -350.4168f, 746.7426f, 117.0885f };
				*(Local_782.f_61[2 /*3*/]) = { 0.6471f, 0f, -151.5887f };
				Local_782.f_71[2] = 29.9539f;
			}
			else
			{
				*(Local_782.f_51[2 /*3*/]) = { -340.4041f, 728.115f, 117.3947f };
				*(Local_782.f_61[2 /*3*/]) = { 0.8079f, 0f, 47.0287f };
				Local_782.f_71[2] = 30.0044f;
			}
			break;
		case 92:
			if (iLocal_1045 == 0)
			{
				*(Local_782.f_51[2 /*3*/]) = { 2959.544f, 507.7708f, 45.5006f };
				*(Local_782.f_61[2 /*3*/]) = { -1.8472f, 0f, 19.2149f };
				Local_782.f_71[2] = 29.996f;
			}
			else
			{
				*(Local_782.f_51[2 /*3*/]) = { 2955.989f, 528.7031f, 44.6315f };
				*(Local_782.f_61[2 /*3*/]) = { 1.244f, 0f, -167.8088f };
				Local_782.f_71[2] = 29.9609f;
			}
			break;
	}
}

float func_154(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_155(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), fParam1);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), fParam1);
		}
	}
	if (!func_350(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
	}
	if (!func_350(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	}
	if (!func_350(iParam0, 16))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
		PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
		PAD::DISABLE_CONTROL_ACTION(0, 42190210, false);
	}
	if (!func_350(iParam0, 128))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
	}
	if (!func_350(iParam0, 512))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
	}
	if (!func_350(iParam0, 64))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -620139643, false);
	}
	if (!(func_351(17) && func_154(Global_35, ((*Global_1835011)[17 /*74*/])->f_18, 0) < 10f))
	{
		if (!func_350(iParam0, 2048))
		{
			PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
		}
	}
	if (!func_350(iParam0, 4096))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1664638556, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!func_350(iParam0, 1024))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 2, true);
			PED::SET_PED_RESET_FLAG(Global_35, 21, true);
		}
		if (!func_350(iParam0, 8))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 33, true);
		if (!func_350(iParam0, 32))
		{
			if (PED::_0xD5FE956C70FF370B(Global_35))
			{
				PED::_0x7DE9692C6F64CFE8(Global_35, false, 0, 0);
			}
		}
	}
}

void func_156()
{
	func_334(0, 0);
	func_333(1, func_300(30));
	func_334(1, 1);
	func_334(2, 0);
}

struct<7> func_157(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, int iParam11, bool bParam12, int iParam13)
{
	struct<7> Var0;

	Var0.f_3 = -1;
	Var0.f_6 = 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return Var0;
	}
	if (func_352(vParam8, 0f, 0f, 0f, 1056964608, 1))
	{
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Var0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam2, vParam5, vParam8, func_281());
			break;
		default:
			Var0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam2, vParam5, vParam8, func_281());
			break;
	}
	Var0 = { func_353(iParam0, iParam1, Var0, iParam11, bParam12, iParam13) };
	return Var0;
}

void func_158(char* sParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	func_37(sParam0, iParam1, 0, 1, sParam2, sParam3, sParam4, sParam5, iParam6);
}

bool func_159(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return VOLUME::DOES_VOLUME_EXIST(iParam0);
}

int func_160(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	EVENT::_0xB6F4825153920582();
	PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1301263553, false);
	PAD::DISABLE_CONTROL_ACTION(0, -39308912, false);
	PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
	PAD::DISABLE_CONTROL_ACTION(0, 255439828, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2131587435, false);
	PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
	func_354();
	PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
	PAD::DISABLE_CONTROL_ACTION(0, 101002513, false);
	PAD::DISABLE_CONTROL_ACTION(0, -432665970, false);
	PAD::DISABLE_CONTROL_ACTION(0, -349518703, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1591726981, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1098542161, false);
	PAD::DISABLE_CONTROL_ACTION(0, 2139949496, false);
	CAM::_0x8910C24B7E0046EC();
	PAD::DISABLE_CONTROL_ACTION(0, 1644850270, false);
	PAD::DISABLE_CONTROL_ACTION(0, -672681099, false);
	func_355(uParam1, uParam0);
	if (func_196(uParam0->f_1, 0) && PED::IS_PED_A_PLAYER(*uParam0))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_1, 25, true);
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	func_356();
	switch (uParam1->f_55)
	{
		case 0:
			if (func_357(uParam1))
			{
				func_76(uParam1, 33554432);
				if (func_197(uParam0, 2))
				{
					func_358(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false));
				}
			}
			if (func_357(uParam1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
			}
			else
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 4480, 0);
			}
			func_359();
			func_155(0, 1065353216);
			if (func_197(uParam0, 2))
			{
				func_360(uParam0, uParam1);
			}
			func_361(uParam0, uParam1);
			if (func_362(uParam0, uParam1))
			{
				func_47(uParam0, uParam1);
				func_201(uParam1, 9);
				return 1;
			}
			if (func_196(*uParam0, 0) && func_363(uParam0, uParam1))
			{
				func_201(uParam1, 1);
			}
			break;
		case 1:
			func_359();
			func_361(uParam0, uParam1);
			if (func_197(uParam0, 2))
			{
				func_360(uParam0, uParam1);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				return 0;
			}
			if (func_364(uParam0, uParam1) && func_365(uParam0, uParam1))
			{
				func_366(uParam0, uParam1, 0);
				Global_19 = 0;
				func_367(uParam0, uParam1);
				func_368(uParam0, uParam1);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
				{
					uParam1->f_4 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(748896394, uParam0->f_1, 0f, 30f, 35f, -1f, 20f, 1127481344, 0, 0, -1, -1);
				}
				if (!func_197(uParam0, 1024))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
					if (func_197(uParam0, 64))
					{
						TASK::TASK_DUEL(*uParam0, uParam1->f_63, uParam0->f_48, uParam0->f_1, func_369(uParam0), 0, 0f, 0f, 0f, func_74(uParam0->f_42, uParam0->f_45, 1), 1);
					}
					else if (func_197(uParam0, 32))
					{
						TASK::TASK_DUEL(*uParam0, uParam1->f_63, uParam0->f_48, uParam0->f_1, func_369(uParam0), 0, 0f, 0f, 0f, func_74(uParam0->f_42, uParam0->f_45, 1), 1);
					}
					else
					{
						TASK::TASK_DUEL(*uParam0, uParam1->f_63, uParam0->f_48, uParam0->f_1, func_369(uParam0), 0, uParam0->f_42, func_74(uParam0->f_42, uParam0->f_45, 1), 1);
					}
				}
				PED::_0x2208438012482A1A(*uParam0, true, true);
				uParam1->f_2 = MISC::GET_GAME_TIMER();
				if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_1, 146, true))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 146, true);
					func_76(uParam1, 2048);
				}
				if (!func_197(uParam0, 262144))
				{
					WEAPON::_0xFCCC886EDE3C63EC(*uParam0, 2, 1);
					WEAPON::_0xFCCC886EDE3C63EC(uParam0->f_1, 2, 1);
				}
				if ((func_197(uParam0, 32) || func_197(uParam0, 2)) || (func_357(uParam1) && !func_357(uParam1)))
				{
					if (!func_197(uParam0, 1024))
					{
						func_370(&(uParam0->f_16), 0);
					}
					if (!func_357(uParam1))
					{
						func_371(uParam0, uParam1, 1);
					}
					func_201(uParam1, 7);
				}
				else
				{
					func_372(uParam1, 0);
					MAP::DISPLAY_RADAR(false);
					func_201(uParam1, 3);
				}
			}
			break;
		case 3:
			func_359();
			func_155(0, 1065353216);
			func_367(uParam0, uParam1);
			uVar0 = func_360(uParam0, uParam1);
			if (func_362(uParam0, uParam1))
			{
				func_47(uParam0, uParam1);
				func_201(uParam1, 9);
				return 1;
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				return 0;
			}
			if (MISC::GET_GAME_TIMER() > uParam1->f_2 + 1000 || func_3(uParam0->f_88, 2))
			{
				if ((func_3(uParam0->f_88, 32) || uVar0) && (func_197(uParam0, 2) || (PED::IS_PED_FACING_PED(uParam0->f_1, *uParam0, 20f) && PED::IS_PED_FACING_PED(*uParam0, uParam0->f_1, 20f))))
				{
					if (!func_197(uParam0, 2048))
					{
						LAW::_0xDE5FAA741A781F73(PLAYER::GET_PLAYER_INDEX(), 1);
					}
					if (!func_197(uParam0, 1024))
					{
						func_370(&(uParam0->f_16), 0);
					}
					if (func_3(uParam0->f_88, 1024))
					{
						if (func_154(uParam0->f_1, uParam0->f_45, 0) < 0.5f || func_321(uParam0->f_1, -717627678))
						{
							TASK::CLEAR_PED_TASKS(uParam0->f_1, 1, 0);
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_12)))
							{
								TASK::TASK_PLAY_ANIM(0, "script_re@drunk_dueler", &(uParam0->f_12), 2f, -4f, -1, 4, 0, 0, 0, 0, 0, 0);
							}
							else
							{
								TASK::TASK_PLAY_ANIM(0, "script_re@drunk_dueler", "intro_idle_drunk", 2f, -4f, -1, 4, 0, 0, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "script_re@drunk_dueler", "pass_out_drunk", 2f, -4f, -1, 4, 0, 0, 0, 0, 0, 0);
							}
							func_327(uParam0->f_1, &iVar1, 0, 0, 1, 1);
							func_201(uParam1, 8);
						}
					}
					else
					{
						func_201(uParam1, 7);
					}
				}
			}
			break;
		case 7:
			MAP::DISPLAY_RADAR(false);
			func_367(uParam0, uParam1);
			if (func_373(uParam0, uParam1))
			{
				func_47(uParam0, uParam1);
				func_201(uParam1, 9);
				func_370(&(uParam0->f_32), 1);
				return 1;
			}
			break;
		case 8:
			func_367(uParam0, uParam1);
			func_374(uParam0);
			if (!func_3(uParam1->f_1, 512) && ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_1, -529482553))
			{
				EVENT::REMOVE_SHOCKING_EVENT(uParam1->f_4);
				uParam1->f_4 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(-180122789, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), -1f, -1f, -1f, -1082130432, -1082130432, -1, -1);
				TASK::CLEAR_PED_TASKS(uParam0->f_1, 1, 0);
				WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_1, false, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 243, true);
				TASK::TASK_KNOCKED_OUT(uParam0->f_1, 60f, 1);
				func_24(&(uParam1->f_1), 512);
				func_47(uParam0, uParam1);
				if (!func_197(uParam0, 2048))
				{
					LAW::_0xDE5FAA741A781F73(PLAYER::GET_PLAYER_INDEX(), 0);
				}
				func_370(&(uParam0->f_32), 1);
				CAM::RENDER_SCRIPT_CAMS(false, true, 5000, true, false, 0);
				MAP::DISPLAY_RADAR(true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
				TASK::CLEAR_PED_TASKS(*uParam0, 1, 0);
				func_201(uParam1, 9);
				return 1;
			}
			break;
		case 9:
			func_47(uParam0, uParam1);
			return 1;
	}
	if (func_197(uParam0, 4))
	{
		bVar2 = true;
		iVar3 = MISC::_0x483B8C542103AD72();
		if (uParam1->f_10 == -1)
		{
			uParam1->f_10 = iVar3;
		}
		else if ((iVar3 - uParam1->f_10) > 2000)
		{
			bVar2 = false;
		}
		if (bVar2)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 130948705, true);
			PAD::DISABLE_CONTROL_ACTION(0, 42190210, true);
		}
	}
	return 0;
}

int func_161(var uParam0)
{
	return uParam0->f_57;
}

void func_162(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

void func_163(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_242() != -1)
	{
		return;
	}
	if ((Global_36615 && func_375(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_376(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_377(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
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
			func_378(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_377(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_164()
{
	if (func_242() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

int func_165(int iParam0)
{
	if (func_166())
	{
		return 0;
	}
	return func_379(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_166()
{
	if (func_242() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

void func_167(int* iParam0, var uParam1)
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
	func_380(iParam0, uParam1, 1);
	func_33(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

int func_168()
{
	switch (iLocal_1358)
	{
		case 0:
			if (!func_92(&uLocal_894))
			{
				func_381(&uLocal_894, 0);
			}
			else if (func_140(0f, 1, &(uLocal_1121[0]), 1))
			{
				if (func_3(iLocal_238, 16))
				{
					if (func_114(&uLocal_894) > 1f)
					{
						func_141(Global_35, &(uLocal_1121[0]), func_73("DISARM_RESP"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_1358++;
					}
				}
				else if (func_114(&uLocal_894) > 3f)
				{
					func_141(Global_35, &(uLocal_1121[0]), func_73("FINAL_KILL"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1358++;
				}
			}
			else
			{
				func_93(&uLocal_894);
			}
			break;
		case 1:
			if (func_140(0f, 1, &(uLocal_1121[0]), 1) && func_140(0f, 1, Global_35, 1))
			{
				if (func_3(iLocal_238, 16))
				{
					switch (func_2())
					{
						case 76:
							func_345(&(uLocal_1121[0]), "GENERIC_INSULT_HIGH_MALE", 291934926, 0, 1, &((Local_239[0 /*32*/])->f_23), 1, 1);
							break;
						case 92:
							func_345(&(uLocal_1121[0]), "GENERIC_ANGRY_SHOUT", 291934926, 0, 1, &((Local_239[0 /*32*/])->f_23), 1, 1);
							break;
					}
					iLocal_1358++;
				}
				else
				{
					iLocal_1358 = 3;
				}
			}
			break;
		case 2:
			if (func_140(0f, 1, &(uLocal_1121[0]), 1) && func_140(0f, 1, Global_35, 1))
			{
				func_141(Global_35, &(uLocal_1121[0]), func_73("FINAL_DISARM"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1358++;
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

void func_169()
{
	int iVar0;
	int iVar1;

	func_121(Local_19.f_2);
	func_121(Local_19.f_3);
	func_121(Local_27);
	func_121(Local_27.f_1);
	func_121(Local_27.f_2);
	func_121(Local_27.f_3);
	iVar0 = 2;
	while (iVar0 <= 13)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_1121[iVar0]), false);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::_TASK_SMART_FLEE_STYLE_COORD(0, Local_35.f_51, 3, 0, 1000f, -1, 0);
		func_327(&(uLocal_1121[iVar0]), &iVar1, 0f, 0.5f, 1, 1);
		iVar0++;
	}
	func_49();
	func_382(1077936128);
}

int func_170()
{
	if (!func_145())
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1121[0])) && func_125(&(uLocal_1121[0]), 1, 1) < 100f)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1121[1])) && func_125(&(uLocal_1121[1]), 1, 1) < 100f)
	{
		return 0;
	}
	return 1;
}

int func_171()
{
	if ((ENTITY::DOES_ENTITY_EXIST(Local_35.f_5.f_10) && Local_35.f_5.f_10 != &uLocal_1121[0]) && Local_35.f_5.f_10 != &uLocal_1121[1])
	{
		return 1;
	}
	return 0;
}

int func_172()
{
	if (!func_383(Global_1395482->f_1))
	{
		return 0;
	}
	return func_384(Global_1395482->f_1, 32);
}

bool func_173(int iParam0)
{
	if (func_60(iParam0, 1))
	{
		return false;
	}
	return (1 == func_385(iParam0) || 2 == func_385(iParam0));
}

float func_174(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

var func_175(char* sParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_176(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return MISC::_CREATE_VAR_STRING(2, func_386(sParam1));
}

bool func_177(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

char* func_178(int iParam0)
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

void func_179(int iParam0, int iParam1)
{
	if (!func_223(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 || iParam1);
}

void func_180(int iParam0, bool bParam1)
{
	if (func_78(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		func_387(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

int func_181(var uParam0, var uParam1)
{
	if (func_60(uParam0->f_3, 16777216))
	{
		if (func_388(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("g_m_m_unibrontegoons_01"))
		{
			return 1;
		}
	}
	return 0;
}

void func_182(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

float func_183(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_184(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (!Global_1935630->f_12 && (!bParam4 || func_78(iParam0, 0, 1)))
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
			fVar2 = func_183(fParam2 >= 0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				func_389(&iParam0);
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

void func_185(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_171))
	{
		func_390(uParam0->f_171);
		POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_171);
		POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_391(uParam0);
	func_392(uParam0);
	func_393(uParam0);
	if (!func_394(uParam0))
	{
		if (VOLUME::IS_VOLUME_LOCK_REQUEST_VALID_2(uParam0->f_51.f_11))
		{
			VOLUME::RELEASE_LOCK_VOLUME(uParam0->f_51.f_11);
		}
		func_279(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_395();
	}
	if (!func_396(uParam0->f_3) && !func_60(uParam0->f_3, 256))
	{
		func_397(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_398(uParam0->f_173);
	func_398(uParam0->f_172);
}

void func_186(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_181));
	}
}

int func_187(int iParam0, int iParam1)
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

void func_188(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_242() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

void func_189(var uParam0, var uParam1)
{
	if (func_75(uParam1, 4))
	{
		if (!func_399(uParam0->f_1))
		{
			func_198(uParam1, 4);
		}
	}
}

void func_190()
{
	CAM::_0x88544C0E3291DCAE(1);
	func_395();
}

char* func_191(var uParam0, var uParam1)
{
	switch (uParam0->f_3)
	{
		case 0:
			if (uParam0->f_69)
			{
				return "DUEL_OBJ_FILL";
			}
			else
			{
				return "DUEL_OBJ_FILL_ALT";
			}
			break;
		case 1:
			if (uParam0->f_69)
			{
				return "DUEL_OBJ_DRAW";
			}
			else
			{
				return "DUEL_OBJ_DRAW_ALT";
			}
			break;
		case 2:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_36)))
			{
				return func_400(uParam1->f_36);
			}
			else
			{
				return "DUEL_OBJ_FIRE";
			}
			break;
	}
	return "";
}

void func_192(char* sParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0.f_1 = sParam0;
	iVar2 = _NAMESPACE71::_0x4E88A65968A55C78(&Var0, iParam1);
	if (func_401(iVar2))
	{
		_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(iVar2, 0);
	}
}

void func_193()
{
	int iVar0;

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1911643->f_3, 0);
	iVar0 = 0;
	while (iVar0 < &Global_1911643)
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(&(Global_1911643->f_5[iVar0 /*3*/]));
		iVar0++;
	}
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1911643->f_4);
	Global_1911643 = 0;
	Global_1911643->f_1 = 0;
}

void func_194()
{
}

void func_195(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_196(int iParam0, int iParam1)
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
	if (func_402(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_402(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_402(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_402(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_402(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_402(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return 0;
		}
	}
	if (func_402(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_402(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_197(var uParam0, int iParam1)
{
	return (uParam0->f_88 && iParam1) != 0;
}

void func_198(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 - (uParam0->f_1 && iParam1));
}

void func_199(var uParam0, var uParam1, int iParam2)
{
	if (func_75(uParam1, 1024) || iParam2)
	{
		if (func_196(uParam0->f_3, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 136, false);
				func_403(uParam0->f_3, 0);
			}
		}
		func_198(uParam1, 1024);
	}
}

void func_200()
{
	func_404(Global_35, &(Global_1347400->f_46));
}

void func_201(var uParam0, int iParam1)
{
	uParam0->f_55 = iParam1;
}

int func_202(int iParam0)
{
	if (((func_203(iParam0, 1) && func_203(iParam0, 2)) && func_203(iParam0, 8)) && func_203(iParam0, 512))
	{
		return 1;
	}
	return 0;
}

bool func_203(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_204(int iParam0)
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

int func_205(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_405(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_406(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_406(), iVar3);
		if (func_407(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_206(char* sParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY((*uParam1)[iVar0 /*8*/]))
		{
			StringCopy((*uParam1)[iVar0 /*8*/], sParam0, 64);
			STREAMING::REQUEST_ANIM_DICT((*uParam1)[iVar0 /*8*/]);
			return;
		}
		iVar0++;
	}
}

int func_207(var uParam0)
{
	if (!func_408(uParam0->f_1))
	{
		return 0;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_408(uParam0->f_12))
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

Vector3 func_208(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_223(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_409(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_410(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *(Global_1310750->f_13358[iVar0 /*3*/]);
}

void func_209(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	if (func_60(iParam0, 32))
	{
		if (func_411(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_412(Global_35, &(uParam1->f_12)) };
				if (!func_213(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_413(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_280(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_281());
		if (func_414(Global_1310750[iParam0 /*111*/], 33554432))
		{
			func_283(iVar0, func_282(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_283(iVar0, func_282(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_60(iParam0, 1))
		{
			func_415(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_416(iParam0);
}

int func_210(int iParam0, var uParam1)
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
			func_417(uParam1, *(((*Global_1310750)[iParam0 /*111*/])->f_4.f_4[iVar0 /*3*/]));
		}
		iVar0++;
	}
	if (func_82(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180f);
		fVar2 = BUILTIN::TO_FLOAT(func_418(iParam0));
		fVar1 = 60f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65f);
		fVar2 = BUILTIN::TO_FLOAT(func_418(iParam0));
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

void func_211(int iParam0, float fParam1, float fParam2, var uParam3, bool bParam4)
{
	switch (func_419(iParam0))
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
			if (!func_60(iParam0, 1))
			{
				if (func_82(iParam0, 2))
				{
				}
			}
			func_420(fParam1, fParam2, uParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		case 2:
			func_421(fParam1, fParam2, uParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		case 3:
			func_421(fParam1, fParam2, uParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		default:
			break;
	}
	if (func_173(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_212(int iParam0, int iParam1, float fParam2, float fParam3)
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
	while (iVar0 < func_409(iParam1))
	{
		if (!func_422(iParam1, iVar0))
		{
			vVar4 = { func_208(iParam1, iVar0) };
			if (!func_213(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (func_218(fVar8, iParam1))
				{
					*iParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_423(iParam1, vVar4, fParam2, fParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_213(vVar4))
	{
	}
	return vVar1;
}

int func_213(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_214(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_37("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_215(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_409(iParam0))
	{
		vVar1 = { func_208(iParam0, iVar0) };
		if (func_352(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_216(var uParam0)
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

int func_217(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	vVar2 = { *uParam0 };
	func_308(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_309(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_213(*(uParam0->f_12[iVar0 /*3*/])))
			{
				vVar5 = { *(uParam0->f_12[iVar0 /*3*/]) };
				vVar8 = { MISC::_0x83ACC65D9ACEC5EF(Global_36, vVar2, vVar5, true) };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35f * 35f) || BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar0 /*3*/])) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_424(uParam0);
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
	return func_214(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

int func_218(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	fVar3 = (fParam0 * fParam0);
	func_211(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return 0;
	}
	if (func_60(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return 0;
		}
	}
	return 1;
}

int func_219(var uParam0, var uParam1)
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

int func_220(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_425(iParam0, *uParam2))
	{
		return 0;
	}
	if (!func_426(iParam0, uParam2))
	{
		return 0;
	}
	if (!func_427(Param3))
	{
		return 0;
	}
	if (bParam10)
	{
		if (!func_428(*uParam2, Global_35))
		{
			return 0;
		}
	}
	return 1;
}

int func_221(var uParam0)
{
	return uParam0->f_51.f_4;
}

int func_222(int iParam0, int iParam1, var uParam2)
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

bool func_223(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_224(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_225(int iParam0, int iParam1)
{
	if (func_429(iParam0))
	{
		return;
	}
	if (func_430(iParam0) == iParam1)
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

void func_226(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_42(&iParam1, 8192);
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

void func_227(var uParam0, int iParam1)
{
	func_431(uParam0, iParam1);
}

bool func_228(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*32*/])->f_1 != 0)
		{
			iVar1++;
			if (((*uParam0)[iVar0 /*32*/])->f_12 != 0)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1 <= 15;
}

bool func_229(var uParam0)
{
	return func_402(*uParam0, 32);
}

float func_230(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

bool func_231(var uParam0)
{
	return func_402(*uParam0, 1);
}

int func_232(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_432(*uParam0, 0f, 0f, 0f))
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

void func_233(var uParam0, int iParam1, int iParam2, vector3 vParam3, var uParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
{
	if (uParam0->f_136 < 0 || uParam0->f_136 > 15)
	{
		return;
	}
	STREAMING::REQUEST_MODEL(iParam2, false);
	((*uParam0)[uParam0->f_136 /*9*/])->f_1 = iParam2;
	((*uParam0)[uParam0->f_136 /*9*/])->f_2 = { vParam3 };
	((*uParam0)[uParam0->f_136 /*9*/])->f_5 = uParam6;
	((*uParam0)[uParam0->f_136 /*9*/])->f_7 = iParam1;
	((*uParam0)[uParam0->f_136 /*9*/])->f_8 = iParam11;
	if (bParam7)
	{
		func_24(&(((*uParam0)[uParam0->f_136 /*9*/])->f_6), 4);
	}
	if (bParam8)
	{
		func_24(&(((*uParam0)[uParam0->f_136 /*9*/])->f_6), 8);
	}
	if (iParam9 == 1)
	{
		func_24(&(((*uParam0)[uParam0->f_136 /*9*/])->f_6), 1);
	}
	else if (iParam9 == 2)
	{
		func_24(&(((*uParam0)[uParam0->f_136 /*9*/])->f_6), 2);
	}
	if (bParam10)
	{
		func_24(&(((*uParam0)[uParam0->f_136 /*9*/])->f_6), 16);
	}
	uParam0->f_136++;
}

int func_234(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < uParam0->f_136)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar0 /*9*/]) && ((*uParam0)[iVar0 /*9*/])->f_1 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(((*uParam0)[iVar0 /*9*/])->f_1))
			{
				bVar1 = func_3(((*uParam0)[iVar0 /*9*/])->f_6, 4);
				bVar2 = func_3(((*uParam0)[iVar0 /*9*/])->f_6, 8);
				bVar3 = func_3(((*uParam0)[iVar0 /*9*/])->f_6, 16);
				if (func_3(((*uParam0)[iVar0 /*9*/])->f_6, 1))
				{
					iVar4 = 1;
				}
				else if (func_3(((*uParam0)[iVar0 /*9*/])->f_6, 2))
				{
					iVar4 = 2;
				}
				else
				{
					iVar4 = 0;
				}
				if (((*uParam0)[iVar0 /*9*/])->f_8 != 0 && PED::_0x610438375E5D1801(((*uParam0)[iVar0 /*9*/])->f_8))
				{
					(*uParam0)[iVar0 /*9*/] = PED::_0xEAF682A14F8E5F53(((*uParam0)[iVar0 /*9*/])->f_8, ((*uParam0)[iVar0 /*9*/])->f_2, ((*uParam0)[iVar0 /*9*/])->f_5, bVar1, bVar2, 1, 0);
				}
				else
				{
					(*uParam0)[iVar0 /*9*/] = func_433(((*uParam0)[iVar0 /*9*/])->f_1, ((*uParam0)[iVar0 /*9*/])->f_2, ((*uParam0)[iVar0 /*9*/])->f_5, bVar1, bVar2, iVar4, bVar3, 1, 1, 0, 0, 0, 0);
				}
				if (bParam1)
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0[iVar0 /*9*/], false);
				}
			}
			return 0;
		}
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_136)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0[iVar0 /*9*/]))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0[iVar0 /*9*/], true);
				ENTITY::_0xA91E6CF94404E8C9(uParam0[iVar0 /*9*/]);
			}
			iVar0++;
		}
	}
	return 1;
}

int func_235(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_136)
	{
		if (((*uParam0)[iVar0 /*9*/])->f_7 == iParam1)
		{
			return uParam0[iVar0 /*9*/];
		}
		iVar0++;
	}
	return 0;
}

void func_236(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
		if (bParam2)
		{
			func_434(&vVar0, uParam1->f_22);
		}
		if (PED::IS_PED_HUMAN(*uParam0) && uParam1->f_10)
		{
			PED::_0x0FB1BA7FF73B41E1(*uParam0, uParam1->f_4, 0);
		}
		if (ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
			EVENT::_0x9520175B35E2268D(*uParam0, 1);
			if (func_435(*uParam0))
			{
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*uParam0, 48, true);
			}
		}
		if (!bParam3 && func_436(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(*uParam0, true);
			PED::SET_PED_TO_RAGDOLL(*uParam0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 186, !func_437(&(uParam1->f_22)));
			func_119(*uParam0, func_438(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(*uParam0);
		}
		if (func_439(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
		}
		func_441(*uParam0, !func_440(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(*uParam0, 4, func_442(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(*uParam0, 6, func_443(&(uParam1->f_22)));
		if (func_444(&(uParam1->f_22)))
		{
			func_70(*uParam0, 1);
		}
		if (func_437(&(uParam1->f_22)))
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 186, false);
		}
	}
}

bool func_237(var uParam0)
{
	return func_402(*uParam0, 16);
}

void func_238(var uParam0)
{
	int iVar0;
	struct<9> Var1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*((*uParam0)[iVar0 /*9*/]) = { Var1 };
		iVar0++;
	}
	uParam0->f_136 = 0;
}

bool func_239(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_240(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_241(int iParam0)
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

int func_242()
{
	return Global_1572887->f_12;
}

int func_243(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_445(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_446((375 + iVar28), 1);
			if (func_447(iParam0, &Var0, iVar5, 0))
			{
				if (func_448(iParam0, &Var6, iVar5))
				{
					Var29 = { func_449(iParam0, Var0, iVar5, 0) };
					func_450(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_451(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
					{
						return 0;
					}
					func_452(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
					func_453(iParam0, iParam1);
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

void func_244(int iParam0, int iParam1, float fParam2)
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

bool func_245(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

int func_246(int iParam0, var uParam1)
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

var func_247(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	char cVar0[64];
	char cVar8[32];

	StringCopy(&cVar0, "RE_", 64);
	StringCopy(&cVar8, sParam1, 32);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, &cVar8, 64);
	if (iParam3 >= 0)
	{
		StringConCat(&cVar0, "_V", 64);
		StringIntConCat(&cVar0, iParam3, 64);
	}
	else
	{
		StringConCat(&cVar0, "_ALL", 64);
	}
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, sParam2, 64);
	return func_454(cVar0);
}

Vector3 func_248(var uParam0)
{
	return uParam0->f_51;
}

void func_249(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_250()
{
	return &Global_1935436 == 2;
}

void func_251(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_252(int iParam0, int iParam1)
{
	float fVar0;

	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17503.f_3++;
	(Global_17503.f_42[iParam0 /*8*/])->f_1++;
	if (func_60(iParam0, 2))
	{
		func_456(iParam0, func_455(iParam1));
	}
	else
	{
		func_458(iParam0, func_457());
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
	func_459(iParam0, ((*Global_1310750)[iParam0 /*111*/])->f_36, fVar0, 1, 0);
	func_460(iParam0, 0);
	func_461(iParam0);
	func_462(1);
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
	if (!func_60(iParam0, 16))
	{
		func_253(iParam0, 0, 0, 0, 0);
	}
}

void func_253(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_463() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_223(iVar1) && !func_60(iVar1, iParam2)) && (!bParam3 || !func_270(iVar1))) && (!bParam4 || !func_464(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_465(iVar0);
			}
		}
		iVar0++;
	}
}

int func_254(int iParam0)
{
	return ((*Global_1310750)[iParam0 /*111*/])->f_39;
}

void func_255(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_414(Global_1310750[uParam0->f_3 /*111*/], 16777216))
	{
		if (bParam2)
		{
			if (func_60(uParam0->f_3, 1073741824))
			{
				func_466(2, -1, 0, 0, 0);
			}
			else
			{
				func_466(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_466(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_467(1, uParam0->f_177))
				{
					func_468(16, uParam0->f_177);
					func_469(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_470(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_466(8, -1, 0, 0, 0);
	}
}

int func_256()
{
	if (func_240(Global_1935630->f_44))
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
		else if (func_471())
		{
			return 1;
		}
	}
	return 0;
}

bool func_257(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_258(var uParam0, bool bParam1)
{
	float fVar0;

	if (uParam0->f_119 == -1f)
	{
		if (func_60(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_60(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_60(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_60(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_60(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_60(uParam0->f_3, 1))
		{
		}
		else if (func_60(uParam0->f_3, 2))
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

int func_259(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6)
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
			else if (func_472(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_473(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_315() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

int func_260(var uParam0, int iParam1, float fParam2)
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
	func_84(uParam0);
	return 1;
}

bool func_261()
{
	return (Global_1894899 & 1 != 0 && func_2() != -1);
}

int func_262(var uParam0, float fParam1)
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

int func_263(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_474(bParam1, iParam2, bParam3);
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

int func_264(int iParam0)
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
	iVar0 = func_476(func_475());
	if (func_3(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

bool func_265(int iParam0, int iParam1)
{
	return (func_254(iParam0) && iParam1) != 0;
}

int func_266(int iParam0)
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
	if (iParam0 & 1 == 1 && func_477(iVar3))
	{
		return 1;
	}
	if (iParam0 & 2 == 2 && func_478(iVar3))
	{
		return 1;
	}
	if (iParam0 & 4 == 4 && func_479(iVar3))
	{
		return 1;
	}
	if (iParam0 & 8 == 8 && func_480(iVar3))
	{
		return 1;
	}
	if (iParam0 & 16 == 16 && func_481(iVar3))
	{
		return 1;
	}
	if (iParam0 & 32 == 32 && func_482(iVar3))
	{
		return 1;
	}
	if (iParam0 & 64 == 64 && func_483(iVar3))
	{
		return 1;
	}
	return 0;
}

int func_267(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_484(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_268(int iParam0)
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

int func_269(int iParam0, bool bParam1, int iParam2)
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
		if (func_485())
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
		iVar0 = func_486(&(Global_1898164->f_1[0 /*5*/]));
		if (func_487(iVar0) && func_488(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_489(&(Global_1898164->f_1[0 /*5*/])))
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

int func_270(int iParam0)
{
	if (!func_223(iParam0))
	{
		return 0;
	}
	if (func_490(64) && func_491(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_271(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_492(iVar0) || func_493(iVar0))
				{
					return 0;
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_272()
{
	return Global_1894899 & 4 != 0;
}

int func_273(int iParam0)
{
	if (!func_494(iParam0))
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

int func_274(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return 0;
	}
	return 1;
}

int func_275(vector3 vParam0, int iParam3)
{
	if (!func_274(iParam3))
	{
		return 0;
	}
	if (VOLUME::DOES_VOLUME_EXIST(((*Global_1392194)[iParam3 /*10*/])->f_5))
	{
		return VOLUME::IS_POINT_IN_VOLUME(((*Global_1392194)[iParam3 /*10*/])->f_5, vParam0);
	}
	return 0;
}

bool func_276(vector3 vParam0)
{
	float fVar0;

	if (func_213(vParam0))
	{
		return false;
	}
	fVar0 = func_183(func_261(), 6f, 22f);
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fVar0, 1, 0, 16384);
}

int func_277(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
						func_93(uParam0);
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
		func_93(uParam0);
		return 1;
	}
	if (!bParam4)
	{
		if (!func_92(uParam0))
		{
			return 0;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return 1;
		}
		if (!func_291(uParam0, fParam2))
		{
			return 1;
		}
		if (func_92(uParam0))
		{
			func_195(uParam0);
		}
	}
	return 0;
}

bool func_278(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

void func_279(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_213(vParam0))
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
			if (func_352(vVar2, vParam0, 2f, 1))
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

float func_280(int iParam0)
{
	if (!func_223(iParam0))
	{
		return 0f;
	}
	if (!func_495(iParam0))
	{
		return 0f;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_44;
}

char* func_281()
{
	return "unnamed";
}

char* func_282(int iParam0)
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

int func_283(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, float fParam6)
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
	uVar6 = func_415(vVar0, vVar3.x, uParam1, bParam2, iParam3, iParam4, bParam5, fParam6);
	return uVar6;
}

int func_284()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_285(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_24(iParam0, 134217728);
	}
	else
	{
		func_42(iParam0, 134217728);
	}
}

int func_286(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_287(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		func_496(iParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (func_497(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_498(iParam0, iParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_499(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_498(iParam0, iParam2, *uParam3);
					return 1;
				}
				else if (func_500(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_498(iParam0, iParam2, *uParam3);
					return 1;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_501(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_498(iParam0, iParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_263(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_498(iParam0, iParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_502(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_503(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_498(iParam0, iParam2, *uParam3);
						return 1;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_504(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_498(iParam0, iParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_505(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_498(iParam0, iParam2, *uParam3);
					return 1;
				}
			}
			else if (func_505(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_498(iParam0, iParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_506(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_498(iParam0, iParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_507(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					func_498(iParam0, iParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_508(iParam2, 4000))
				{
					if ((func_509(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_510(iParam2, iParam0)) && func_511(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_498(iParam0, iParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_509(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_510(iParam2, iParam0)) && func_511(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_498(iParam0, iParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_512(iParam0, Global_1935630->f_41))
							{
								func_513();
								*uParam3 = 2;
								func_498(iParam0, iParam2, *uParam3);
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
					if (*iParam2 & 131072 == 0)
					{
						if (func_512(iParam0, Global_1935630->f_41))
						{
							func_513();
							*uParam3 = 2;
							func_498(iParam0, iParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_514(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_284() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_513();
						*uParam3 = 2;
						func_498(iParam0, iParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_515())
					{
						if (func_512(iParam0, Global_1935630->f_42))
						{
							func_513();
							*uParam3 = 2;
							func_498(iParam0, iParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_516(iParam2, iParam0))
			{
				*uParam3 = 1024;
				func_498(iParam0, iParam2, *uParam3);
				return 1;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_517(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					func_498(iParam0, iParam2, *uParam3);
					return 1;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_518(iParam0, iParam2))
					{
						*uParam3 = 8192;
						func_498(iParam0, iParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_519(iParam0, iParam2))
				{
					*uParam3 = 32768;
					func_498(iParam0, iParam2, *uParam3);
					return 1;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_520(iParam2, 4000))
				{
					if (func_521(&iParam0, iParam2))
					{
						*uParam3 = 512;
						func_498(iParam0, iParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_522(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_498(iParam0, iParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_523(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_498(iParam0, iParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

bool func_288()
{
	int iVar0;
	int iVar1;

	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	LAW::_0x0C392DB374655176(Global_36, 50f, iVar0);
	iVar1 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	ITEMSET::_0x20A4BF0E09BEE146(iVar0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar1 > 1;
}

bool func_289(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_290(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_315() - fParam1);
	func_524(uParam0, 1);
	func_525(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_291(var uParam0, float fParam1)
{
	if (!func_92(uParam0))
	{
		return 0;
	}
	if (func_136(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

int func_292(int iParam0)
{
	return iParam0;
}

void func_293(int iParam0)
{
	if (!func_526(iParam0))
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

bool func_294(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
{
	if (bParam2)
	{
		if (!func_335(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_527(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (iParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, 0) == 1;
}

void func_295(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;

	if (iParam1 >= *uParam0 || iParam1 < 0)
	{
		iParam1 = 0;
	}
	if (iParam2 >= *uParam0 || iParam2 < iParam1)
	{
		iParam2 = (*uParam0 - 1);
	}
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		if (func_528((*uParam0)[iVar1], iParam3, iParam4, iParam5, 0, bParam6, 0, 0))
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		func_32();
	}
}

int func_296(int iParam0, int iParam1, int iParam2)
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

var func_297(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam9;
	func_529(&iVar0);
	if (func_3(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	uVar1 = func_530(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_3(iVar0, 134217728))
	{
		func_531(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_532(558))
				{
					func_134(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return uVar1;
}

int func_298(int iParam0)
{
	switch (iLocal_873)
	{
		case 76:
			switch (iParam0)
			{
				case 0:
					return 2;
				case 1:
					return 4;
				case 2:
					return 7;
				case 3:
					return 9;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam0)
			{
				case 0:
					return 3;
				case 1:
					return 6;
				case 2:
					return 10;
				case 3:
					return 11;
				default:
					break;
			}
			break;
	}
	return -1;
}

char* func_299(int iParam0, int iParam1)
{
	switch (iLocal_873)
	{
		case 76:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return "GENERIC_SHOCKED_MED";
						case 1:
							return "GENERIC_SHOCKED_MED";
						case 2:
							return "GENERIC_EXCITING_EVENT_COMMENT";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return "GENERIC_CHEER_ON";
						case 1:
							return "COME_SEE_THIS";
						case 2:
							return "GENERIC_CHEER_ON";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return "GENERIC_CHEER_ON";
						case 1:
							return "GENERIC_CHEER_ON";
						case 2:
							return "GENERIC_CHEER";
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return "GENERIC_CHEER_ON";
						case 1:
							return "GENERIC_CHEER_ON";
						case 2:
							return "GENERIC_CHEER";
						default:
							break;
					}
					break;
			}
			break;
		case 92:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return "GENERIC_CHEER";
						case 1:
							return "GENERIC_CHEER_ON";
						case 2:
							return "GENERIC_EXCITING_EVENT_COMMENT";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return "GENERIC_CHEER";
						case 1:
							return "GENERIC_CHEER_ON";
						case 2:
							return "GENERIC_MOCK";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return "GENERIC_CHEER_ON";
						case 1:
							return "GENERIC_CHEER_ON";
						case 2:
							return "GENERIC_CHEER";
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return "GENERIC_SHOCKED_MED";
						case 1:
							return "GENERIC_CHEER_ON";
						case 2:
							return "GENERIC_EXCITING_EVENT_COMMENT";
						default:
							break;
					}
					break;
			}
			break;
	}
	return "";
}

char* func_300(int iParam0)
{
	if (func_533(iParam0))
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

void func_301(int* iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_96(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_534(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_535(iParam0->f_6, iParam0->f_5, 0);
			}
			func_536(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_537(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_302(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_538(iParam0, 4))
		{
			func_97(&(iParam0->f_6), 1, 1);
			func_539(iParam0, 4);
		}
	}
	else if (func_538(iParam0, 4))
	{
		func_540(iParam0, 4);
		func_539(iParam0, 14);
	}
}

void func_303(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_195(&(uParam0->f_18));
}

void func_304(int iParam0)
{
	func_334(0, iParam0);
	func_334(1, iParam0);
	func_334(2, iParam0);
}

Vector3 func_305(int iParam0)
{
	switch (func_2())
	{
		case 76:
			switch (iParam0)
			{
				case 0:
					return -348.5889f, 744.9133f, 116.0824f;
				case 1:
					return -342.713f, 729.3618f, 116.3879f;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam0)
			{
				case 0:
					return 2957.778f, 510.3161f, 44.40849f;
				case 1:
					return 2957.107f, 526.4081f, 43.62538f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_306(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8, char* sParam9)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		sParam9 = func_281();
	}
	return VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0 - vParam3 * Vector(0.5f, 0.5f, 0.5f) + vParam3, 0f, 0f, -func_541(vParam0, vParam3), fParam6, (BUILTIN::VDIST(vParam0, vParam3) + (fParam8 * 2f)), fParam7, sParam9);
}

void func_307()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;

	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS((Local_239[0 /*32*/])->f_6, (Local_239[1 /*32*/])->f_6, true);
	fVar1 = (((Local_239[0 /*32*/])->f_6 + (Local_239[1 /*32*/])->f_6) / 2f);
	fVar2 = (((Local_239[0 /*32*/])->f_6.f_1 + (Local_239[0 /*32*/])->f_6.f_1) / 2f);
	fVar3 = (((Local_239[0 /*32*/])->f_6.f_2 + (Local_239[0 /*32*/])->f_6.f_2) / 2f);
	vVar4 = { fVar1, fVar2, fVar3 };
	fVar0 = (fVar0 + 10f);
	iLocal_1151 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar4, 0f, 0f, (Local_239[0 /*32*/])->f_9, 10f, fVar0, 10f, "REDW - volCompanionStayOut");
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_1151, 0, 0, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_1151, 0, 0, 0, -1, -1, 0);
	func_542(iLocal_1151, 0);
	func_543(iLocal_1151, 0, 1, 0, 0, 0);
	func_544(iLocal_1151, 0);
	func_341(0, func_205(1), Local_35.f_171, vVar4, 1069547520, 1075838976, 1056964608, 0, 1106247680, 1);
	func_343(0);
}

void func_308(int iParam0, vector3 vParam1, var uParam4, float fParam5, bool bParam6, int iParam7)
{
	float fVar0;

	fVar0 = func_183(bParam6, iParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!uParam4->f_1)
	{
		if (fVar0 < uParam4->f_2 || (func_428(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*uParam4 = func_284();
			uParam4->f_2 = func_154(iParam0, vParam1, 1);
			uParam4->f_1 = 1;
		}
	}
	else if (fVar0 > uParam4->f_2 || (!func_428(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*uParam4 = func_284();
		uParam4->f_2 = func_154(iParam0, vParam1, 1);
		uParam4->f_1 = 0;
	}
}

int func_309(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_284() - *uParam0) >= iParam1;
	}
	return 0;
}

int func_310(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, var uParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	bVar1 = false;
	fVar2 = func_258(uParam0, bVar1);
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
	if (uParam0->f_178 && func_256())
	{
		bVar1 = true;
		fVar3 = func_183(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_259(uParam0->f_121[iVar0 /*9*/], fVar3, 1082130432, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_259(uParam0->f_121[0 /*9*/], fVar3, 1082130432, 1, 90f, 0, 0);
		}
		if (func_260(&(uParam0->f_121), iParam4, fParam1))
		{
			func_84(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_187(uParam0->f_3, uParam0->f_185), 0);
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
					if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_173) && !(uParam8 && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return 0;
						}
					}
					if (bParam6)
					{
						func_83(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_84(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::STATSTRACKER_DEED_STARTED(func_187(uParam0->f_3, uParam0->f_185), 0);
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_311(int iParam0, float fParam1)
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
	func_545(vVar6);
	vVar6 = { FtoV((ENTITY::GET_ENTITY_SPEED(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

int func_312()
{
	switch (iLocal_1348)
	{
		case 0:
			if (func_140(-5f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), func_546(1)))
				{
					func_117(-2097881464, &(uLocal_1121[1]), 1);
					func_141(&(uLocal_1121[0]), &(uLocal_1121[1]), Local_1189[1 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 1:
			if (func_140(0f, 1, &(uLocal_1121[0]), 1) && func_140(0f, 1, &(uLocal_1121[1]), 1))
			{
				func_141(&(uLocal_1121[1]), &(uLocal_1121[0]), Local_1189[2 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1348++;
			}
			break;
		case 2:
			if (func_140(-5f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), func_546(1)))
				{
					func_117(2001176446, &(uLocal_1121[0]), 1);
					func_141(&(uLocal_1121[0]), &(uLocal_1121[1]), Local_1189[3 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 3:
			if (func_140(0f, 1, &(uLocal_1121[0]), 1) && func_140(0f, 1, &(uLocal_1121[1]), 1))
			{
				func_141(&(uLocal_1121[1]), &(uLocal_1121[0]), Local_1189[4 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1348++;
			}
			break;
		case 4:
			if (func_140(-6f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), func_546(1)))
				{
					func_117(2001176446, &(uLocal_1121[0]), 1);
					func_141(&(uLocal_1121[0]), &(uLocal_1121[1]), Local_1189[5 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 5:
			if (func_140(0f, 1, &(uLocal_1121[0]), 1) && func_140(0f, 1, &(uLocal_1121[1]), 1))
			{
				func_141(&(uLocal_1121[1]), &(uLocal_1121[0]), Local_1189[6 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1348++;
			}
			break;
		case 6:
			if (func_140(-5f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), func_546(1)))
				{
					if (!func_3(iLocal_238, 1073741824))
					{
						func_117(249295937, &(uLocal_1121[0]), 1);
						func_141(&(uLocal_1121[0]), &(uLocal_1121[1]), Local_1189[22 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
						func_24(&iLocal_238, 1073741824);
					}
					iLocal_1348++;
				}
			}
			break;
		case 7:
			return 1;
	}
	return 0;
}

int func_313()
{
	switch (iLocal_1348)
	{
		case 0:
			if (func_140(-5f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), func_546(1)))
				{
					func_117(-2097881464, &(uLocal_1121[1]), 1);
					func_141(&(uLocal_1121[1]), &(uLocal_1121[0]), Local_1189[0 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 1:
			if (func_140(-5f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), func_546(1)))
				{
					func_117(2001176446, &(uLocal_1121[0]), 1);
					func_141(&(uLocal_1121[0]), &(uLocal_1121[1]), Local_1189[1 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 2:
			if (func_140(-6f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), func_546(1)))
				{
					func_117(2001176446, &(uLocal_1121[0]), 1);
					func_141(&(uLocal_1121[0]), &(uLocal_1121[1]), Local_1189[3 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 3:
			if (func_140(0f, 1, &(uLocal_1121[0]), 1) && func_140(0f, 1, &(uLocal_1121[1]), 1))
			{
				func_141(&(uLocal_1121[1]), &(uLocal_1121[0]), Local_1189[4 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1348++;
			}
			break;
		case 4:
			if (func_140(-6f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), func_546(1)))
				{
					func_117(2001176446, &(uLocal_1121[0]), 1);
					func_141(&(uLocal_1121[0]), &(uLocal_1121[1]), Local_1189[5 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 5:
			if (func_140(0f, 1, &(uLocal_1121[0]), 1) && func_140(0f, 1, &(uLocal_1121[1]), 1))
			{
				func_141(&(uLocal_1121[1]), &(uLocal_1121[0]), Local_1189[6 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1348++;
			}
			break;
		case 6:
			if (func_140(-5f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), func_546(1)))
				{
					func_117(2001176446, &(uLocal_1121[0]), 1);
					func_141(&(uLocal_1121[0]), &(uLocal_1121[1]), Local_1189[7 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 7:
			if (func_140(0f, 1, &(uLocal_1121[0]), 1) && func_140(0f, 1, &(uLocal_1121[1]), 1))
			{
				func_141(&(uLocal_1121[1]), &(uLocal_1121[0]), Local_1189[8 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1348++;
			}
			break;
		case 8:
			if (func_140(-4f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), func_546(1)))
				{
					func_117(2001176446, &(uLocal_1121[0]), 1);
					func_141(&(uLocal_1121[0]), &(uLocal_1121[1]), Local_1189[9 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 9:
			if (func_140(0f, 1, &(uLocal_1121[0]), 1) && func_140(0f, 1, &(uLocal_1121[1]), 1))
			{
				func_141(&(uLocal_1121[1]), &(uLocal_1121[0]), Local_1189[10 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1348++;
			}
			break;
		case 10:
			if (func_140(-4f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), func_546(1)))
				{
					func_117(2001176446, &(uLocal_1121[0]), 1);
					func_141(&(uLocal_1121[0]), &(uLocal_1121[1]), Local_1189[11 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 11:
			if (func_140(0f, 1, &(uLocal_1121[0]), 1) && func_140(0f, 1, &(uLocal_1121[1]), 1))
			{
				func_141(&(uLocal_1121[1]), &(uLocal_1121[0]), Local_1189[12 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1348++;
			}
			break;
		case 12:
			if (func_140(-4f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), func_546(1)))
				{
					func_117(249295937, &(uLocal_1121[0]), 1);
					func_141(&(uLocal_1121[0]), &(uLocal_1121[1]), Local_1189[22 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					func_24(&iLocal_238, 1073741824);
					iLocal_1348++;
				}
			}
			break;
		case 13:
			return 1;
	}
	return 0;
}

bool func_314(var uParam0)
{
	return func_289(*uParam0, 2);
}

float func_315()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_316(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_317()
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(4, 1, 0);
}

int func_318(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, bool bParam6)
{
	if (bParam6)
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0, 0))
		{
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(iParam0, sParam3, 1))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(iParam0, sParam4))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0, sParam4, true, false);
				}
			}
		}
	}
	if (iParam5 || !ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam2))
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(iParam0, sParam1, 1))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_319(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, var uParam5, bool bParam6)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0) && uParam5)
	{
		return 1;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return 1;
	}
	if (ANIMSCENE::_0xD8254CB2C586412B(iParam1, 0))
	{
		return 1;
	}
	if (!ANIMSCENE::_0x95531A4A20CCE7BC(iParam1, 0))
	{
		return 1;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (bParam6)
		{
			if (ANIMSCENE::_0x73616E64696C616E(iParam1, sParam2, 1, 0))
			{
				return 1;
			}
		}
		if (ANIMSCENE::_0x005E6F28DD7ED58D(iParam1, sParam2) || ANIMSCENE::_0xB89FCFF19DAFFF28(iParam1, sParam2))
		{
			return 1;
		}
	}
	if (iParam3 != 0 && ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, iParam3))
	{
		return 1;
	}
	if (fParam4 > 0f && ANIMSCENE::_0x3FBC3F51BF12DFBF(iParam1) >= fParam4)
	{
		return 1;
	}
	return 0;
}

bool func_320(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_321(int iParam0, int iParam1)
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

float func_322(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_323()
{
	func_333(0, "RE_DB_CHALLENGE");
	if (func_133())
	{
		func_334(0, 1);
	}
	else
	{
		func_334(0, 0);
	}
	func_333(1, func_300(1));
	func_334(1, 1);
	func_334(2, 0);
}

void func_324(int iParam0, char* sParam1, bool bParam2)
{
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0, sParam1, bParam2, false);
}

int func_325(vector3 vParam0)
{
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
	{
		if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_326(int iParam0, int iParam1)
{
	func_547(iParam0, iParam1);
}

void func_327(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

int func_328(int iParam0)
{
	if (!WEAPON::IS_WEAPON_VALID(*iParam0))
	{
		return 0;
	}
	if (*iParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	if (WEAPON::_0xC75386174ECE95D5(*iParam0))
	{
		return 0;
	}
	if (WEAPON::_0xDDC64F5E31EEDAB6(*iParam0) || WEAPON::_0xC212F1D05A8232BB(*iParam0))
	{
		return 1;
	}
	return 0;
}

int func_329(int iParam0, int iParam1)
{
	var uVar0;

	return func_548(&uVar0, iParam0, iParam1);
}

void func_330(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_331(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_549(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_550(iParam0))
	{
		return 0;
	}
	if (func_551(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_552(iParam0, 1)) || func_553(32768))
	{
		if (!func_552(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_554())
	{
		return 0;
	}
	return 1;
}

void func_332(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_333(int iParam0, char* sParam1)
{
	func_535((Local_1068[iParam0 /*17*/])->f_6, sParam1, 0);
	(Local_1068[iParam0 /*17*/])->f_5 = sParam1;
}

void func_334(int iParam0, int iParam1)
{
	func_555(Local_1068[iParam0 /*17*/], iParam1, 0);
}

bool func_335(int iParam0, int iParam1, float fParam2)
{
	return func_556(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

void func_336(int iParam0)
{
	int iVar0;

	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	func_344(0, Global_35, 0);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, &(Local_229[2 /*2*/]), (Local_229[2 /*2*/])->f_1, Global_35, 6066, 4f, -4f, 0, 0, 0, 0, -1082130432, 0, 0, -1082130432);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, &(Local_229[0 /*2*/]), (Local_229[0 /*2*/])->f_1, Global_35, -1, 4f, -4f, 0, 0, 0, 0, -1082130432, 0, 0, -1082130432);
	func_327(iParam0, &iVar0, 0, 0, 1, 1);
}

int func_337(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	int iVar0;

	if (!ITEMSET::IS_ITEMSET_VALID(&Global_1396084))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ITEMSET::IS_IN_ITEMSET(iParam0, &Global_1396084))
		{
			return 1;
		}
		ITEMSET::ADD_TO_ITEMSET(iParam0, &Global_1396084);
		DECORATOR::DECOR_SET_BOOL(iParam0, "pedRoam_bInPedRoam", true);
		func_557(iParam0, 0);
		func_558(iParam0, iParam1);
		func_559(iParam0, iParam2);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			iVar0 = MISC::GET_HASH_KEY(sParam3);
			if (!func_560(iVar0))
			{
				DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_hashKey", iVar0);
			}
		}
		return 1;
	}
	return 0;
}

int func_338(int iParam0, int iParam1)
{
	if (func_78(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (iParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return 0;
}

int func_339(float fParam0)
{
	if (func_561(1))
	{
		return 1;
	}
	if (func_92(&uLocal_0) && !func_94(&uLocal_0, (7.5f + fParam0)))
	{
		return 1;
	}
	return 0;
}

int func_340(int iParam0, int iParam1, char* sParam2, var uParam3, float fParam4, var uParam5, bool bParam6, var uParam7, var uParam8, bool bParam9, var uParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, var uParam15)
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
		if (func_261())
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
				if (func_125(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_322(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || uParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_93(&uLocal_0);
			if (!bVar0 && uParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_562(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_563(func_345(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, uParam5, uParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_341(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, float fParam7, float fParam8, int iParam9, float fParam10, int iParam11)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar9;

	if (iParam0 <= -1)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam2))
	{
		return;
	}
	vVar0 = { 0f, 0f, 0f };
	iVar3 = func_205(1);
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar5 = func_564(iVar4);
		if (!ENTITY::IS_ENTITY_DEAD(iVar5))
		{
			vVar0 = { vVar0 + ENTITY::GET_ENTITY_COORDS(iVar5, true, false) };
		}
		iVar4++;
	}
	vVar0 = { vVar0 / FtoV(BUILTIN::TO_FLOAT(iVar3)) };
	vVar6 = { vVar0 - VOLUME::_0xF70F00013A62F866(iParam2) };
	vVar9 = { func_565(iParam2, vVar6, 1065353216, 100) };
	func_566(iParam0, iParam1, iParam9, vVar9, vParam3, fParam6, fParam7, fParam8, fParam10, -1, 1, iParam11);
}

void func_342(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, float fParam8, float fParam9, float fParam10, int iParam11, float fParam12, bool bParam13)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 3)
	{
		iParam1 = 3;
	}
	func_566(iParam0, iParam1, iParam11, vParam2, vParam5, fParam8, fParam9, fParam10, fParam12, -1, bParam13, 1);
}

void func_343(int iParam0)
{
	if (iParam0 <= -1)
	{
		return;
	}
	func_567(iParam0);
	func_568(21);
}

int func_344(int iParam0, int iParam1, int iParam2)
{
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, iParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

bool func_345(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_569(iParam0, &Var0);
}

bool func_346(int iParam0)
{
	return (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0) || ANIMSCENE::_0xD8254CB2C586412B(iParam0, 0));
}

float func_347(vector3 vParam0, bool bParam3)
{
	return func_154(Global_35, vParam0, bParam3);
}

void func_348(struct<7> Param0, vector3 vParam7)
{
	if (!func_159(Param0))
	{
		return;
	}
	if (func_352(vParam7, 0f, 0f, 0f, 1056964608, 1))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(Param0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Param0.f_5))
	{
		MAP::SET_BLIP_COORDS(Param0.f_5, vParam7);
	}
	VOLUME::_0x541B8576615C33DE(Param0, vParam7);
}

int func_349(int iParam0)
{
	int iVar0;

	iVar0 = _NAMESPACE71::UI_FEED_GET_CURRENT_MESSAGE(1);
	if (iVar0 != 0)
	{
		return iVar0 == (Global_1905944->f_22[iParam0 /*9*/])->f_1;
	}
	return 0;
}

bool func_350(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 