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
	struct<10> Local_16[2];
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<54> Local_45[4];
	struct<10> Local_262[4];
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	struct<8> Local_307 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_315 = 0;
	struct<9> Local_316[1];
	struct<9> Local_326[12];
	struct<9> Local_435[9];
	int iLocal_517[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_578 = 0;
	var uLocal_579 = 0;
	float fLocal_580 = 0f;
	float fLocal_581 = 0f;
	float fLocal_582 = 0f;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	int iLocal_585 = 0;
	var uLocal_586 = 100;
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
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
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
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 100;
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
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
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
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
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
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 100;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
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
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 100;
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
	int iLocal_990 = 0;
	bool bLocal_991 = false;
	int iLocal_992 = 0;
	int iLocal_993 = 0;
	int iLocal_994 = 0;
	int iLocal_995 = 0;
	int iLocal_996 = 0;
	int iLocal_997 = 0;
	int iLocal_998 = 0;
	int iLocal_999 = 0;
	int iLocal_1000 = 0;
	int iLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	struct<4> Local_1011 = { 0, 0, 0, 0 } ;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 21;
	var uLocal_1019 = 6;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	float fLocal_1023 = 0f;
	float fLocal_1024 = 0f;
	struct<9> Local_1025 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	struct<9> Local_1041 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	char* sLocal_1060 = NULL;
	char* sLocal_1061 = NULL;
	char* sLocal_1062 = NULL;
	struct<7> Local_1063[4];
	struct<7> Local_1092[4];
	struct<2> Local_1121[15];
	int iLocal_1152 = 0;
	int iLocal_1153 = 0;
	int iLocal_1154 = 0;
	int iLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	int iLocal_1159 = 0;
	int iLocal_1160 = 0;
	int iLocal_1161 = 0;
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
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	int iLocal_1195 = 0;
	float fLocal_1196 = 0f;
	float fLocal_1197 = 0f;
	char* sLocal_1198 = NULL;
	int iLocal_1199 = 0;
	int iLocal_1200 = 0;
	int iLocal_1201 = 0;
	int iLocal_1202 = 0;
	int iLocal_1203 = 0;
	int iLocal_1204 = 0;
	int iLocal_1205 = 0;
	vector3 vLocal_1206 = { 0f, 0f, 0f };
	vector3 vLocal_1209 = { 0f, 0f, 0f };
	vector3 vLocal_1212 = { 0f, 0f, 0f };
	vector3 vLocal_1215 = { 0f, 0f, 0f };
	int iLocal_1218[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1224 = 0;
	int iLocal_1225 = 0;
	int iLocal_1226 = 0;
	int iLocal_1227 = 0;
	int iLocal_1228 = 0;
	int iLocal_1229 = 0;
	int iLocal_1230 = 0;
	struct<16> Local_1231[6];
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<2606> Var0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_580 = 3f;
	fLocal_581 = (0.02f + fLocal_580);
	fLocal_582 = 10f;
	sLocal_1061 = "rcm_gang0_2_lakayCME";
	fLocal_1196 = 1f;
	fLocal_1197 = 0f;
	sLocal_1198 = "Mission_GNG0_Ride";
	vLocal_1206 = { 1897.472f, -1863.149f, 54.74686f };
	vLocal_1209 = { 2252.511f, -764.4758f, 41.8537f };
	vLocal_1212 = { 1893.275f, -1865.08f, 42.14979f };
	vLocal_1215 = { 1892.865f, -1864.888f, 42.92186f };
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
					if (Var0.f_174 != func_19())
					{
					}
					else
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
	if (!func_90(&Global_1935630, 1048576))
	{
		func_185(Global_1935630, 1048576);
	}
	if (!func_27(uParam0))
	{
		if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 262144))
		{
			func_179(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 262144);
		}
	}
	func_186(uParam0, 2);
	func_187(uParam0, 10);
	func_188(15);
	func_189(-579939614, 0, 0, 1103626240);
	func_190();
	func_191();
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
	func_192(uParam0);
}

void func_41(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_193(&(uParam0->f_41), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_194(&(uParam0->f_41));
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
	func_195(uParam0, 0);
	func_41(uParam0, (Local_16[0 /*10*/])->f_9, 7);
	func_41(uParam0, (Local_16[1 /*10*/])->f_9, 7);
	func_41(uParam0, joaat("s_m_m_pinlaw_01"), 7);
	func_41(uParam0, -1038436471, 7);
	func_41(uParam0, Local_307.f_7, 7);
	func_41(uParam0, (Local_316[0 /*9*/])->f_7, 7);
	func_41(uParam0, joaat("p_book01x"), 7);
	func_41(uParam0, joaat("p_book08x"), 7);
	func_41(uParam0, joaat("p_cs_book02x"), 7);
	func_41(uParam0, joaat("p_sketchbook01x"), 7);
	func_41(uParam0, joaat("p_bottletequila01x"), 7);
	func_41(uParam0, joaat("p_bottlejd01x"), 7);
	func_41(uParam0, joaat("p_bottle004x"), 7);
	func_41(uParam0, -1735508742, 7);
	func_41(uParam0, joaat("p_commode02x"), 7);
	func_41(uParam0, joaat("p_cs_ledgersmall01x"), 7);
	func_41(uParam0, joaat("p_cs_purse01x"), 7);
	func_41(uParam0, joaat("p_wallet01x"), 7);
	func_41(uParam0, -490016577, 7);
	func_41(uParam0, 1224478763, 7);
	func_41(uParam0, -56024829, 7);
	func_41(uParam0, 1056144698, 7);
}

void func_43(var uParam0, int iParam1)
{
	if (func_196(uParam0) == iParam1)
	{
		return;
	}
	func_197(uParam0, uParam0->f_168, iParam1);
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
	if ((func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_6(uParam0->f_172, 1024)) && !func_198(uParam0->f_174))
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

	switch (func_199(&iVar0))
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
	func_200(bParam0);
	func_201(bParam0);
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
	if (func_202(uParam0, uParam0->f_168))
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
	if (func_203() != -1)
	{
		return 0;
	}
	if (!func_204(iParam0))
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
	if (iVar0 == 0)
	{
		Var1 = { 2974.441f, 474.3331f, 46.86f };
		Var1.f_3 = 113.4424f;
	}
	else if (iVar0 == 1)
	{
		Var1 = { 1896.149f, -1857.332f, 42.164f };
		Var1.f_3 = 212.6608f;
	}
	else if (iVar0 == 2)
	{
		Var1 = { 1894.997f, -1858.428f, 46.3335f };
		Var1.f_3 = 26.4904f;
	}
	else if (iVar0 == 3)
	{
		Var1 = { 1893.584f, -1865.296f, 42.1486f };
		Var1.f_3 = 46.214f;
	}
	else if (iVar0 == 4)
	{
		Var1 = { 1895.315f, -1857.46f, 46.3349f };
		Var1.f_3 = 204.6259f;
	}
	else if (iVar0 == 5)
	{
		Var1 = { 1891.141f, -1861.693f, 42.1486f };
		Var1.f_3 = 226.8988f;
	}
	else if (iVar0 == 6)
	{
		Var1 = { 1895.221f, -1860.413f, 42.1715f };
		Var1.f_3 = 155.8581f;
	}
	else if (iVar0 == 7)
	{
		Var1 = { 1894.25f, -1860.446f, 42.1507f };
		Var1.f_3 = 57.2397f;
	}
	else if (iVar0 == 8)
	{
		Var1 = { 2245.221f, -768.6905f, 42.1256f };
		Var1.f_3 = 86.3565f;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_205(*uParam0, uParam0->f_3);
}

void func_63(var uParam0, int iParam1)
{
	uParam0->f_173 = (uParam0->f_173 - (uParam0->f_173 && iParam1));
}

int func_64(var uParam0)
{
	if (iLocal_1160 == 0)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(iLocal_41))
		{
			func_206(&iLocal_41, 2187.454f, -689.5976f, 159.7621f, 0f, 0f, -2.749999f, 2000f, 3500f, 300f, "RideToShadyBelle_FAIL");
		}
		else if (!VOLUME::DOES_VOLUME_EXIST(iLocal_42))
		{
			func_206(&iLocal_42, 2187.454f, -689.5976f, 159.7621f, 0f, 0f, -2.749999f, 1850f, 3350f, 300f, "RideToShadyBelle_WARN");
		}
		else if (!func_207(33554432))
		{
			if (!func_208(Global_35, iLocal_42, 0, 1))
			{
				func_126(uParam0, "GANG02_RIDESB", 1, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
				func_209(33554432);
				func_210(&uLocal_1002);
			}
		}
		else
		{
			if (!func_208(Global_35, iLocal_41, 0, 1))
			{
				StringCopy(&(uParam0->f_2578), "GANG02_FAIL_SB", 24);
				return 1;
			}
			if (func_211(&uLocal_1002) > 20f)
			{
				if (func_208(Global_35, iLocal_42, 0, 1))
				{
					func_212(33554432);
					func_213(&uLocal_1002);
				}
			}
		}
	}
	if (iLocal_1160 == 5)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(iLocal_43))
		{
			func_206(&iLocal_43, 2147.689f, -1204.086f, 159.7621f, 0f, 0f, -2.749999f, 1700f, 2500f, 300f, "RideToLakay_FAIL");
		}
		else if (!VOLUME::DOES_VOLUME_EXIST(iLocal_44))
		{
			func_206(&iLocal_44, 2147.689f, -1204.086f, 159.7621f, 0f, 0f, -2.749999f, 1550f, 2350f, 300f, "RideToLakay_WARN");
		}
		else if (!func_207(33554432))
		{
			if (!func_208(Global_35, iLocal_44, 0, 1))
			{
				func_126(uParam0, "GANG02_RIDELK", 1, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
				func_209(33554432);
				func_210(&uLocal_1002);
			}
		}
		else
		{
			if (!func_208(Global_35, iLocal_43, 0, 1))
			{
				StringCopy(&(uParam0->f_2578), "GANG02_FAIL_LK", 24);
				return 1;
			}
			if (func_211(&uLocal_1002) > 20f)
			{
				if (func_208(Global_35, iLocal_44, 0, 1))
				{
					func_212(33554432);
					func_213(&uLocal_1002);
				}
			}
		}
	}
	if (func_214(PLAYER::GET_PLAYER_INDEX(), 0, 1, 1))
	{
		StringCopy(&(uParam0->f_2578), "GANG02_FAIL_WT", 24);
		return 1;
	}
	if (iLocal_1160 == 1)
	{
		if (func_215(uParam0, "GANG02_FAIL_WARN_MAN", "GANG02_FAIL_MAN", vLocal_1206, 0))
		{
			return 1;
		}
	}
	else if (iLocal_1160 == 2 || iLocal_1160 == 3)
	{
		if (!func_207(8192))
		{
			if (func_215(uParam0, "GANG02_FAIL_WARN_MAN", "GANG02_FAIL_MAN", vLocal_1206, 0))
			{
				return 1;
			}
		}
	}
	else if (iLocal_1160 == 4)
	{
		if (func_215(uParam0, "GANG02_FAIL_WARN_MAN", "GANG02_FAIL_MAN", vLocal_1215, 0))
		{
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
	if (iLocal_1001)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		func_216(2961.153f, 471.2892f, 51.52034f, 2000f, 0, 0);
		iLocal_1001 = 0;
	}
	func_217();
	if (func_117() == 5 && func_218())
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
	}
	else
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (func_207(8388608))
	{
		if (!func_207(1))
		{
			if (func_219(uParam0))
			{
				if (func_220(uParam0))
				{
					func_221(uParam0);
					func_209(1);
					func_222(uParam0);
				}
			}
		}
		else
		{
			func_224(0, 4, func_223(0));
			if (!func_225(65536))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_1231[0 /*16*/])))
				{
					if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(&(Local_1231[0 /*16*/]), 0))
					{
						func_226(65536);
					}
				}
			}
		}
	}
}

Vector3 func_69(int iParam0)
{
	vector3 vVar0;

	if (!func_204(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_227(iParam0, &vVar0))
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
		if (func_57(iVar0) && func_228(uParam0, iVar0))
		{
		}
		else
		{
			func_51(uParam0, 12);
			return 1;
		}
	}
	if (func_229(uParam0->f_174))
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
	if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_198(uParam0->f_174))
	{
		func_230(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 16384);
		func_51(uParam0, 3);
		return 1;
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 8388608 != 0)
	{
		iVar1 = func_231(uParam0->f_174);
		if (iVar1 != -1)
		{
			if (func_232(iVar1))
			{
				if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
				{
					func_178(uParam0->f_174, 32768);
				}
				func_51(uParam0, 5);
				return 1;
			}
			else if (func_233(iVar1))
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
		if (func_232(((*Global_1347702)[uParam0->f_174 /*49*/])->f_45))
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
			iVar2 = func_234();
			if (!func_235(iVar2, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_46))
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
		if (func_236(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			func_178(uParam0->f_174, 16384);
			func_51(uParam0, 9);
			return 1;
		}
	}
	if (uParam0->f_172 & 256 != 0 && !func_237(uParam0->f_174, 1, 1, 0, 0))
	{
		func_51(uParam0, 10);
		return 1;
	}
	if (func_238(uParam0) || func_239(uParam0->f_174, uParam0->f_743))
	{
		func_178(uParam0->f_174, 1024);
		func_51(uParam0, 11);
		return 1;
	}
	if (!func_240(uParam0) && func_241(uParam0->f_743))
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

	func_242();
	func_243(uParam0);
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
				func_244(uParam0->f_174, 1);
			}
		}
		if (func_6(uParam0->f_172, 67108864))
		{
			func_54(1);
			func_2(&(uParam0->f_172), 67108864);
		}
		func_245(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_ENABLE_HUD_CONTEXT_THIS_FRAME(Global_35, 262143);
			func_246(Global_35);
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
		func_247(uParam0->f_174);
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
		func_248(uParam0);
	}
	func_161(uParam0);
	func_249(0);
	func_102(uParam0, 0);
	func_43(uParam0, 4);
	func_2(&(uParam0->f_172), 8);
	func_176(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 1024);
	func_176(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
	func_47(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 4);
	func_213(&(uParam0->f_2585));
	func_250(uParam0);
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
			fVar4 = func_251(uParam0->f_174);
			if ((((*Global_1347702)[uParam0->f_174 /*49*/])->f_36 != -1822497728 || func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 32)) || fVar3 < (fVar4 * fVar4))
			{
				func_252(uParam0->f_174, vVar0, 1, 0);
			}
		}
	}
	else
	{
		func_253(uParam0->f_174, fVar3);
		func_254(uParam0->f_174, vVar0, fVar3);
		func_255(uParam0->f_174);
		func_256(uParam0->f_174);
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
			func_257(uParam0);
		}
		else
		{
			func_258(uParam0);
		}
	}
	else if (uParam0->f_177 == 4)
	{
		if (func_45(uParam0))
		{
			if (func_6(uParam0->f_172, 16))
			{
				cVar0 = { func_259() };
				Var8 = { func_260(&(uParam0->f_206)) };
				if (!MISC::ARE_STRINGS_EQUAL(&Var8, &cVar0))
				{
					func_261(&(uParam0->f_206));
					func_262(&(uParam0->f_206), &cVar0);
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
	if (func_263(uParam0->f_206.f_5))
	{
		uParam0->f_206.f_5 = { func_69(uParam0->f_174) };
	}
	bVar0 = func_264(uParam0);
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
		if (func_265(&(uParam0->f_206), &(uParam0->f_2575), bVar0, bVar1))
		{
			if (!func_6(uParam0->f_172, 1))
			{
				func_266(uParam0);
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
	switch (iLocal_1160)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 47, 1);
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			if (func_207(8192))
			{
				if (!func_267())
				{
					if (func_207(128) || func_207(256))
					{
						return 3;
					}
					else
					{
						PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 47, 1);
						return 2;
					}
				}
				else
				{
					return 5;
				}
			}
			else
			{
				return 5;
			}
			break;
		case 6:
			return 6;
	}
	return iLocal_1160;
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
			if (func_268(uParam0->f_2605[iVar0 /*16*/], 1048576))
			{
				if (func_269(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_270(uParam0->f_2605[iVar0 /*16*/]);
				}
				else if (func_271(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_272(uParam0->f_2605[iVar0 /*16*/]);
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
			if (func_268(uParam0->f_2605.f_241[iVar0 /*16*/], 1048576))
			{
				if (func_273(uParam0, uParam0->f_2605.f_241[iVar0 /*16*/], iParam1))
				{
					func_274(uParam0->f_2605.f_241[iVar0 /*16*/]);
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
			if (func_268(uParam0->f_2605.f_482[iVar0 /*16*/], 1048576))
			{
				if (func_273(uParam0, uParam0->f_2605.f_482[iVar0 /*16*/], iParam1))
				{
					if (func_275(uParam0->f_2605.f_482[iVar0 /*16*/], 0))
					{
						if (func_268(uParam0->f_2605.f_482[iVar0 /*16*/], 4))
						{
							func_276(&(uParam0->f_2605));
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
	if (func_277(&(uParam0->f_2605), &cVar0, 1, -1, 0, 1))
	{
		func_1(&(uParam0->f_172), 32);
		return 1;
	}
	return 0;
}

bool func_79(var uParam0)
{
	return func_278(*uParam0, 1);
}

void func_80(var uParam0, int iParam1)
{
	if (iParam1 || !func_79(uParam0))
	{
		func_210(uParam0);
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
	if (func_279(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_280() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
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
	if (func_281(uParam0) && func_282(uParam0))
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
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_283(uParam0->f_174), func_284(uParam0->f_174)))
		{
			func_285(uParam0->f_174, 128);
		}
		else
		{
			func_121(uParam0->f_174, 128);
		}
		if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
		{
			if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_283(uParam0->f_174), func_284(uParam0->f_174)))
			{
				func_286(uParam0->f_174);
				func_287(uParam0->f_174);
			}
		}
		else
		{
			func_288(Global_1347702[uParam0->f_174 /*49*/]);
			func_286(uParam0->f_174);
		}
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(func_283(uParam0->f_174), func_284(uParam0->f_174)))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_283(uParam0->f_174), func_284(uParam0->f_174), 0, "");
		}
	}
	if (!func_174(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
	{
		if (!func_289(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
		{
			func_290(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1);
		}
		func_291(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1, 1);
		func_185(Global_1935630, 8);
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
	func_292(uParam0);
	func_1(&(uParam0->f_172), 8);
	if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 8192))
	{
		func_54(0);
		LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
		LAW::_0x292AD61A33A7A485();
		func_293(1, 16384, 1);
		func_1(&(uParam0->f_172), 67108864);
	}
	func_119(uParam0, 1, 0);
	func_245(1);
	func_249(1);
	func_294();
	func_163(uParam0);
	func_164(uParam0->f_174);
	func_165(uParam0->f_174);
	func_295(uParam0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	func_296(1);
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
	func_297(uParam0);
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
	if (func_298(uParam0))
	{
		iVar5 = func_95(uParam0);
	}
	TELEMETRY::_TELEMETRY_MISSION_STARTED(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), 0, iVar5, func_32(uParam0, 64));
	if (uParam0->f_174 != func_19())
	{
		func_299(uParam0, func_61(0), func_61(1), 0, 1, 0);
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
	func_300();
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
		if (uParam0->f_171 != 0 || func_301(uParam0))
		{
			if (func_302(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_93(var uParam0)
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0xAB0D553FE20A6E25(0f);
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
		return func_303();
	}
	return -1;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = iParam1;
	Var1 = { func_61(iVar0) };
	if (iVar0 == 0)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::_0xAB0D553FE20A6E25(0f);
	}
	if (iVar0 != 0 && iVar0 != 8)
	{
		if (!func_304(iLocal_14, 16))
		{
			func_305();
			func_306(&iLocal_14, 16);
			return 2;
		}
		else if (!func_307(uParam0))
		{
			return 2;
		}
	}
	switch (iVar0)
	{
		case 0:
			if (func_308(-530806323, 1, 0))
			{
				func_309(-530806323, 1, 1, -142743235, 0);
			}
			func_87(uParam0);
			func_299(uParam0, func_61(0), func_61(1), 0, 1, 1);
			PED::_0x9851DE7AEC10B4E1(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 150f, 1, 0);
			ENTITY::SET_ENTITY_HEADING(Global_35, 212.6608f);
			CLOCK::SET_CLOCK_TIME(0, 10, 0);
			MISC::_0x59174F1AFE095B5A(1632247697, true, true, false, 0f, false);
			ENTITY::SET_ENTITY_HEADING(Global_35, Var1.f_3);
			func_216(2961.153f, 471.2892f, 51.52034f, 2000f, 0, 0);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			PED::_0xAB0D553FE20A6E25(0f);
			iLocal_1001 = 1;
			func_310(1, 1);
			break;
		case 1:
			if (func_308(-530806323, 1, 0))
			{
				func_309(-530806323, 1, 1, -142743235, 0);
			}
			func_87(uParam0);
			func_299(uParam0, func_61(1), func_61(2), 1, 2, 0);
			PED::_0x9851DE7AEC10B4E1(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 150f, 1, 0);
			ENTITY::SET_ENTITY_HEADING(Global_35, 212.6608f);
			func_226((Local_1121[0 /*2*/])->f_1);
			func_226((Local_1121[1 /*2*/])->f_1);
			func_226((Local_1121[2 /*2*/])->f_1);
			func_306(&iLocal_14, 4);
			CLOCK::SET_CLOCK_TIME(6, 5, 0);
			MISC::_0x59174F1AFE095B5A(1632247697, true, true, false, 0f, false);
			func_310(1, 1);
			break;
		case 2:
			if (func_308(-530806323, 1, 0))
			{
				func_309(-530806323, 1, 1, -142743235, 0);
			}
			if (!func_311(uParam0, 1))
			{
				return 2;
			}
			else
			{
				func_299(uParam0, func_61(2), func_61(4), 2, 4, 0);
				PED::_0x9851DE7AEC10B4E1(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 150f, 1, 0);
				CLOCK::SET_CLOCK_TIME(6, 5, 0);
				MISC::_0x59174F1AFE095B5A(1632247697, true, true, false, 0f, false);
				func_310(1, 1);
				return 5;
			}
			break;
		case 3:
			if (!func_207(8192))
			{
				func_312(-530806323, 1, 1, 0, 0, -897553835, 0, 0, 0, 0);
				func_209(8192);
			}
			if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_1153))
			{
				TASK::DELETE_SCENARIO_POINT(iLocal_1153);
			}
			if (!func_311(uParam0, 0))
			{
				return 2;
			}
			else
			{
				func_299(uParam0, func_61(3), func_61(5), 3, 5, 0);
				PED::_0x9851DE7AEC10B4E1(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 150f, 1, 0);
				CLOCK::SET_CLOCK_TIME(6, 5, 0);
				MISC::_0x59174F1AFE095B5A(1632247697, true, true, false, 0f, false);
				func_310(1, 1);
				return 5;
			}
			break;
		case 4:
			if (func_308(-530806323, 1, 0))
			{
				func_309(-530806323, 1, 1, -142743235, 0);
			}
			if (!PED::_0xD5FE956C70FF370B(Global_35))
			{
				PED::_0x7DE9692C6F64CFE8(Global_35, true, 0, 1);
			}
			if (!func_313(uParam0))
			{
				return 2;
			}
			else
			{
				func_299(uParam0, func_61(4), func_61(6), 4, 6, 0);
				CLOCK::SET_CLOCK_TIME(6, 5, 0);
				MISC::_0x59174F1AFE095B5A(1632247697, true, true, false, 0f, false);
				PED::_0x9851DE7AEC10B4E1(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 150f, 1, 0);
				func_310(1, 1);
			}
			break;
		case 5:
			PED::_0x411189E51B8020BA(Global_35, "Cautious");
			if (PED::_0xA29FD00D45311EB7(Global_35, "stealth") != 1f)
			{
				PED::_0x437C08DB4FEBE2BD(Global_35, "stealth", 1f, -1);
			}
			if (!func_207(8192))
			{
				func_312(-530806323, 1, 1, 0, 0, -897553835, 0, 0, 0, 0);
				func_209(8192);
			}
			if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_1153))
			{
				TASK::DELETE_SCENARIO_POINT(iLocal_1153);
			}
			if (!func_313(uParam0))
			{
				return 2;
			}
			else
			{
				PED::_0x7DE9692C6F64CFE8(Global_35, false, 0, 0);
				func_299(uParam0, func_61(5), func_61(8), 5, 8, 0);
				PED::_0x9851DE7AEC10B4E1(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 150f, 1, 0);
				CLOCK::SET_CLOCK_TIME(6, 5, 0);
				MISC::_0x59174F1AFE095B5A(1632247697, true, true, false, 0f, false);
				func_310(1, 1);
			}
			break;
		case 6:
			if (func_308(-530806323, 1, 0))
			{
				func_309(-530806323, 1, 1, -142743235, 0);
			}
			if (!func_314(uParam0))
			{
				return 2;
			}
			else
			{
				func_299(uParam0, func_61(6), func_61(8), 6, 8, 0);
				CLOCK::SET_CLOCK_TIME(6, 5, 0);
				MISC::_0x59174F1AFE095B5A(1632247697, true, true, false, 0f, false);
				func_310(1, 1);
			}
			break;
		case 7:
			if (!func_308(-530806323, 1, 0))
			{
				func_312(-530806323, 1, 1, 0, 0, -897553835, 0, 0, 0, 0);
			}
			if (!func_315(uParam0))
			{
				return 2;
			}
			else
			{
				func_299(uParam0, func_61(7), func_61(8), 7, 8, 0);
				CLOCK::SET_CLOCK_TIME(6, 5, 0);
				MISC::_0x59174F1AFE095B5A(1632247697, true, true, false, 0f, false);
				func_310(1, 1);
			}
			break;
		case 8:
			if (!func_207(8192))
			{
				func_312(-530806323, 1, 1, 0, 0, -897553835, 0, 0, 0, 0);
			}
			if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_1153))
			{
				TASK::DELETE_SCENARIO_POINT(iLocal_1153);
			}
			if (!func_316(uParam0))
			{
				return 2;
			}
			else
			{
				func_299(uParam0, func_61(8), func_61(8), 8, 8, 0);
				CLOCK::SET_CLOCK_TIME(7, 15, 0);
				MISC::_0x59174F1AFE095B5A(-416908843, true, true, false, 0f, false);
				func_310(1, 1);
				return 8;
			}
			break;
	}
	return 7;
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
		iVar0 = func_317();
		iVar1 = func_318(iVar0);
		fVar2 = (1f - (MISC::ABSF(BUILTIN::TO_FLOAT(iVar1)) / BUILTIN::TO_FLOAT(8)));
		fVar3 = func_319(iVar0 < 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		fVar4 = func_319(iVar0 > 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
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
		if (!func_320(uParam0))
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
		func_321();
		func_322(uParam0);
		if (!func_323(uParam0))
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
		func_324(&(uParam0->f_206), &(uParam0->f_753));
		if (uParam0->f_176 == 4 && !func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 512))
		{
			func_325(uParam0, 0);
		}
	}
	if (func_6(uParam0->f_172, 1024) && uParam0->f_176 == 4)
	{
		func_299(uParam0, func_61(0), func_61(1), 0, 1, 1);
	}
	func_2(&(uParam0->f_172), 512);
	if (uParam0->f_176 == 4)
	{
		if (func_326(Global_35))
		{
			if (func_327())
			{
				func_328(42, 1);
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
	return func_329(Var0, &(uParam0->f_206), uParam0);
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
		func_330(&(uParam0->f_206));
	}
	func_331(&(uParam0->f_206));
	func_332(uParam0);
}

int func_103(var uParam0)
{
	switch (iLocal_1161)
	{
		case 0:
			HUD::_0x8BC7C1F929D07BF3(724769646);
			func_333();
			PED::_0x411189E51B8020BA(Global_35, "Cautious");
			if (PED::_0xA29FD00D45311EB7(Global_35, "stealth") != 1f)
			{
				PED::_0x437C08DB4FEBE2BD(Global_35, "stealth", 1f, -1);
			}
			if (func_79(&uLocal_1180))
			{
				func_213(&uLocal_1180);
			}
			if (func_207(8192))
			{
				func_334(5);
			}
			else
			{
				func_334(2);
			}
			break;
	}
	return 7;
}

int func_104(var uParam0)
{
	if (func_6(uParam0->f_172, 256) && !func_6(uParam0->f_172, 1024))
	{
		if (!func_320(uParam0))
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
				func_299(uParam0, func_61(0), func_61(1), 0, 1, 1);
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
		if (func_335(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			func_1(&(uParam0->f_172), 1048576);
		}
		if (!func_6(uParam0->f_172, 524288))
		{
			if (func_336(&(uParam0->f_753)))
			{
				func_1(&(uParam0->f_172), 524288);
			}
		}
	}
}

int func_107(var uParam0)
{
	func_337(uParam0);
	if (func_338(Global_35, vLocal_1206, 75f, 1, 1))
	{
		func_339();
	}
	if (func_60(32768) && iLocal_999)
	{
		return 8;
	}
	if (iLocal_1160 == 0)
	{
		if (!func_90(&Global_1935630, 1048576))
		{
			func_185(Global_1935630, 1048576);
		}
		else if (func_90(&Global_1935630, 32768))
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			return 8;
		}
		if (func_60(32768))
		{
			if (func_338(Global_35, vLocal_1209, 40f, 1, 1))
			{
				iLocal_999 = 1;
			}
		}
		if (!iLocal_1200)
		{
			if (iLocal_1195 && !CAM::_0x5060FA977CEA4455())
			{
				if (func_340("GANG02_CHELP1", 10000, 0, 0, 0, 1) != 0)
				{
					iLocal_1200 = 1;
				}
			}
		}
		else if (!iLocal_1201)
		{
			if (CAM::IS_CINEMATIC_CAM_RENDERING() && !CAM::_0x5060FA977CEA4455())
			{
				func_341(1);
				if (func_340("GANG02_CHELP2", 10000, 0, 0, 0, 1) != 0)
				{
					iLocal_1201 = 1;
					func_210(&uLocal_1189);
				}
			}
		}
		else if (!iLocal_1202)
		{
			if (func_211(&uLocal_1189) > 2f)
			{
				if (func_342())
				{
					if (!CAM::IS_CINEMATIC_CAM_RENDERING())
					{
						func_341(1);
						func_213(&uLocal_1189);
						iLocal_1202 = 1;
					}
				}
				else
				{
					func_213(&uLocal_1189);
					iLocal_1202 = 1;
				}
			}
		}
	}
	else if (iLocal_1160 == 5)
	{
		if (!func_90(&Global_1935630, 1048576))
		{
			func_185(Global_1935630, 1048576);
		}
		else if (func_90(&Global_1935630, 32768))
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_343();
			func_344(1, 1);
			return 8;
		}
		if (func_60(32768))
		{
			if (func_338(Global_35, vLocal_1209, 40f, 1, 1))
			{
				iLocal_999 = 1;
			}
		}
	}
	if (iLocal_1160 > 0)
	{
		if (iLocal_40)
		{
			if (!AUDIO::_0xE600F61F54A444A6())
			{
				AUDIO::_0x9428447DED71FC7E("RGNG01_Ride_Scenes");
				iLocal_40 = 0;
			}
		}
	}
	switch (iLocal_1160)
	{
		case 0:
			func_345();
			if (func_346(uParam0))
			{
				func_334(1);
			}
			break;
		case 1:
			func_345();
			func_339();
			if (!func_207(8))
			{
				if (func_347())
				{
					func_209(8);
				}
			}
			else if (!func_207(16))
			{
				if (func_348())
				{
					func_209(16);
				}
			}
			func_300();
			if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(Global_36))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
				}
			}
			if (func_349(uParam0))
			{
				return 5;
			}
			break;
		case 2:
			if (!func_207(8))
			{
				if (func_347())
				{
					func_209(8);
				}
			}
			func_350(uParam0);
			break;
		case 3:
			func_350(uParam0);
			break;
		case 4:
			func_339();
			if (!func_207(8))
			{
				if (func_347())
				{
					func_209(8);
				}
			}
			else if (!func_207(16))
			{
				if (func_348())
				{
					func_209(16);
				}
			}
			func_351(uParam0);
			break;
		case 5:
			func_352(uParam0);
			break;
		case 6:
			return 8;
	}
	return 7;
}

bool func_108(int iParam0)
{
	return func_353(iParam0) == 0;
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
	return func_355(func_354(iParam0));
}

int func_111(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_356(func_354(iParam0));
}

int func_112(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_357(func_354(iParam0));
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
	if (!func_204(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		func_358(&(((*Global_1347702)[iParam0 /*49*/])->f_14));
		func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
		func_359(iParam0);
		if ((!func_236(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43890) || iParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(((*Global_1347702)[iParam0 /*49*/])->f_40, 0);
			func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
			func_360(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		else
		{
			func_178(iParam0, 16384);
			func_361(iParam0, 1, func_69(iParam0));
		}
	}
}

void func_116(var uParam0)
{
	func_362(1, &(uParam0->f_2605.f_482));
}

int func_117()
{
	return Global_1894899->f_2;
}

void func_118(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_363(iParam0))
	{
		return;
	}
	bVar0 = func_364(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_365(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_367(iParam0, func_366());
			func_368(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_369(iParam0, 67108864);
		func_367(iParam0, -15);
	}
	func_370(iParam0);
}

void func_119(var uParam0, int iParam1, int iParam2)
{
	if (func_371(0))
	{
		if (func_372(0))
		{
			func_373(0);
		}
	}
	if (func_371(1))
	{
		if (func_372(1))
		{
			func_373(1);
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
			if (func_204(iVar1))
			{
				if (func_120(iVar1, 4))
				{
					func_244(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_374(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_111(iParam0);
		if (iVar3 == 59)
		{
			func_374(1);
		}
		else if (iVar3 == 61)
		{
			func_374(0);
		}
		else if (iVar3 == 83)
		{
			func_374(0);
		}
	}
}

void func_124()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_204(iVar0))
		{
			if (func_120(iVar0, 4))
			{
				if (func_120(iVar0, 16))
				{
					func_375(iVar0, 1);
				}
				if (func_120(iVar0, 8))
				{
					func_376(iVar0, 1);
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

	func_377(uParam0->f_174, sParam1, bParam5, fParam6, 0, 0, -1, -1, 0);
	if (iParam2 || !func_378(sParam1))
	{
		func_379(sParam1, iParam3, bParam4, bParam5, sParam7, sParam8, sParam9, sParam10, iParam11);
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

	if (!func_204(iParam0))
	{
		return;
	}
	if (func_380())
	{
		func_285(iParam0, 1);
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
		if (!func_380())
		{
			((*Global_1347702)[iParam0 /*49*/])->f_35 = 104;
			((*Global_1347702)[104 /*49*/])->f_48 = ((*Global_1347702)[iParam0 /*49*/])->f_15;
		}
	}
	func_381(iParam0, 0, iParam3);
	if (func_204(((*Global_1347702)[iParam0 /*49*/])->f_35))
	{
		func_382(((*Global_1347702)[iParam0 /*49*/])->f_35);
		if (iParam1 == 1)
		{
			func_383(((*Global_1347702)[iParam0 /*49*/])->f_35, 0);
			if (func_384(iParam0))
			{
				((*Global_1347702)[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])->f_43 = ((*Global_1347702)[iParam0 /*49*/])->f_43;
			}
		}
	}
	else
	{
		func_385();
	}
	if (!func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 1) && !func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 33554432))
	{
		if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 262144))
		{
			if (bParam5)
			{
				func_386(iParam0);
			}
			bParam5 = false;
			uVar0 = func_387(((*Global_1347702)[iParam0 /*49*/])->f_15);
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
		func_388(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_389(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam6);
	}
	func_390(iParam0);
}

int func_129(int iParam0)
{
	if (!func_204(iParam0))
	{
		return 0;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_15;
}

int func_130(int iParam0)
{
	iParam0 = func_391(iParam0);
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
	vVar2 = { func_392(((*Global_2621440)[0 /*12065*/])->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_393(vVar2, uVar1, uVar0, 0);
	func_394(vVar2);
	Global_40.f_9.f_15 = func_184(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_132(int iParam0)
{
	if (func_203() != -1)
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
	func_395();
	Global_43888 = 1;
}

void func_133(int iParam0, bool bParam1)
{
	if (func_203() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_60(32768))
	{
		return;
	}
	if (!func_60(32768))
	{
		func_396(1, bParam1);
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
		((*Global_2621440)[iParam0 /*12065*/])->f_9.f_14 = func_366();
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
	func_397(Var10, 0);
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
		func_398(0);
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
	if (func_399(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_400(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_400(&(Global_1347343->f_11), 16384);
	}
	if (func_401() >= 2)
	{
		if (!func_399(Global_1347343->f_11, 16384))
		{
			func_400(&(Global_1347343->f_11), 8);
		}
		func_158(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_185(Global_1935630, 2048);
	func_402(bParam5);
}

bool func_142(var uParam0)
{
	return uParam0->f_781;
}

void func_143(var uParam0)
{
	func_403(1, &(uParam0->f_2605.f_482));
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
	if (func_404(iParam0) == 3)
	{
		if (func_109(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_109(iParam0)))
		{
			if (func_110(iParam0) != 1 && func_110(iParam0) != 8)
			{
				func_405(func_110(iParam0), func_109(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_406(iParam0);
	func_201(1);
	func_407(0);
	func_408(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_409(1);
			func_410(15, 0, 1);
			break;
		case 4:
			func_410(10, 0, 1);
			break;
		case 8:
			func_410(10, 0, 1);
			break;
		case 9:
			func_410(10, 0, 1);
			break;
		case 2:
			func_410(10, 0, 1);
			break;
		case 6:
			func_410(10, 0, 1);
			break;
		case 5:
			func_410(10, 0, 1);
			break;
	}
	func_411(1);
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
		fParam2 = BUILTIN::VDIST2(Global_36, func_412(iParam0));
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
		if (func_342())
		{
			return;
		}
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "RCM_INVALID_TOD", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_340(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 1024 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_ANTAGONIZE", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_340(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 4096 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_MEMORY", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_340(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 2048 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_WANTED_REGION", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_340(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 16384 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_340(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 8192 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_COMBAT", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_340(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 32768 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED_2", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_340(sVar1, 10000, 0, 0, 0, 1);
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
		if (func_413())
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
		if (func_204(iVar0) && func_31(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
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

	if (iLocal_40)
	{
		AUDIO::_0x9428447DED71FC7E("RGNG01_Ride_Scenes");
	}
	GRAPHICS::ANIMPOSTFX_STOP(sLocal_1198);
	func_414();
	HUD::_0x8BC7C1F929D07BF3(724769646);
	if (func_71(uParam0) != 0)
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
	}
	if (CAM::_0x927B810E43E99932(&Local_1025))
	{
		CAM::_0x0A5A4F1979ABB40E(&Local_1025);
	}
	if (CAM::_0x927B810E43E99932(&Local_1041))
	{
		CAM::_0x0A5A4F1979ABB40E(&Local_1041);
	}
	if (CAM::_0xDD0B7C5AE58F721D(&Local_1025))
	{
		CAM::_0x798BE43C9393632B(&Local_1025);
	}
	if (CAM::_0xDD0B7C5AE58F721D(&Local_1041))
	{
		CAM::_0x798BE43C9393632B(&Local_1041);
	}
	func_415();
	func_416(1);
	func_343();
	func_169(&iLocal_578, 1, 0, 1);
	func_360(&iLocal_1205);
	func_360(&iLocal_1204);
	func_360(&iLocal_1203);
	func_417(0);
	func_182(0);
	if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_1153))
	{
		TASK::DELETE_SCENARIO_POINT(iLocal_1153);
	}
	PED::_0x411189E51B8020BA(Global_35, "Cautious");
	PED::_0x411189E51B8020BA(Global_35, "stealth");
	func_344(1, 1);
	func_418(iLocal_1227);
	func_418(iLocal_1226);
	func_418(iLocal_1224);
	func_418(iLocal_1225);
	func_418(iLocal_1228);
	func_418(iLocal_1229);
	func_418(iLocal_1230);
	func_419();
	if (ENTITY::DOES_ENTITY_EXIST(Local_307))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_307);
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_316[iVar0 /*9*/])))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(Local_316[iVar0 /*9*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if ((Local_326[iVar0 /*9*/])->f_8 != 0)
		{
			ENTITY::_0xD2B9C78537ED5759((Local_326[iVar0 /*9*/])->f_8);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(&(Local_326[iVar0 /*9*/])))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(Local_326[iVar0 /*9*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_435[iVar0 /*9*/])))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(Local_435[iVar0 /*9*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_517[iVar0])))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iLocal_517[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_1231[iVar0 /*16*/])))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(&(Local_1231[iVar0 /*16*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_420(&(iLocal_1218[iVar0]));
		iVar0++;
	}
	func_420(iLocal_43);
	func_420(iLocal_44);
	func_420(iLocal_41);
	func_420(iLocal_42);
	TXD::_0x8232F37DF762ACB2(1151541799);
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1061))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_1061);
	}
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_1152) && INTERIOR::IS_INTERIOR_READY(iLocal_1152))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_1152);
	}
	func_421();
	func_422();
	TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_CHEST_MEDIUM", true);
	TASK::SET_SCENARIO_TYPE_ENABLED("PROP_PLAYER_OPEN_FOOTLOCKER", true);
	HUD::_0x8BC7C1F929D07BF3(724769646);
	func_423(0, 0, 1103626240);
	CLOCK::PAUSE_CLOCK(false, 0);
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::GET_PLAYER_INDEX());
	func_424();
	func_425();
	func_125(Global_1935630, 262144);
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
	func_213(&(uParam0->f_2588));
}

void func_162(var uParam0)
{
	struct<2> Var0;

	Var0 = { func_426(uParam0->f_174) };
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&Var0))
	{
		HUD::_TEXT_BLOCK_DELETE(&Var0);
	}
	Var0 = { func_427(uParam0->f_174) };
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
	switch (func_203())
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

	if (!func_428(iParam0))
	{
		return;
	}
	if (!func_429(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = func_430(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_KEEP_TASK(iVar0, false);
		}
	}
	func_431(iParam0, 0, 0, bParam1, fParam2, bParam3, bParam4, bParam5, bParam6, 0, 0);
	func_432(iParam0, 0);
	func_433(iParam0);
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
		func_434(((*Global_1347702)[iParam0 /*49*/])->f_41);
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

	if (func_435(iParam0, &iVar1, &iVar0))
	{
		if (func_436(iVar1, iVar0, 1))
		{
			func_437(iVar1, iVar0);
		}
	}
}

bool func_174(int iParam0)
{
	int iVar0;

	iVar0 = func_353(iParam0);
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
	if (!func_174(iParam0) && !func_289(iParam0))
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
	if (func_404(iParam0) == 3 || (func_404(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_109(iParam0))))
	{
		func_405(func_110(iParam0), func_109(iParam0), iParam2);
		if ((!func_57(Global_1572864->f_8) && !func_146(0, 1, 0)) && !func_90(&Global_1935630, 32768))
		{
			iVar0 = func_438(iParam0);
			if (iVar0 != -1)
			{
				func_439(0);
			}
			else if (func_110(iParam0) == 8)
			{
				iVar0 = func_440();
				if (iVar0 != -1)
				{
					func_439(0);
				}
			}
		}
	}
	func_408(iParam0, 0);
	if (func_56(0) == iParam0)
	{
		func_201(1);
		func_407(0);
		func_411(1);
	}
	func_441(iParam0, 1);
	func_406(iParam0);
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

	if (!func_204(iParam0))
	{
		return;
	}
	func_442(&(((*Global_1347702)[iParam0 /*49*/])->f_14), iParam1);
	func_442(&(((*Global_1347702)[iParam0 /*49*/])->f_14), 2);
	func_230(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 16384);
	func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_204(&(Global_40.f_450[iVar0])))
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
		func_443(uParam0->f_41[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_444(uParam0->f_117[iVar0 /*5*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_445((*uParam0)[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_446(uParam0->f_28[iVar0 /*3*/]);
		iVar0++;
	}
	func_162(uParam0);
}

void func_181(int iParam0)
{
	iParam0 = func_391(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_447(iParam0, 32);
	func_448();
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
	if (func_363(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_449(vParam0, bParam3);
}

void func_185(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_186(var uParam0, int iParam1)
{
	uParam0->f_748 = iParam1;
}

void func_187(var uParam0, int iParam1)
{
	uParam0->f_749 = iParam1;
}

void func_188(int iParam0)
{
	int iVar0;

	if (iParam0 > 150)
	{
		iParam0 = 150;
	}
	if (iParam0 > (Global_1934765->f_286 - 150))
	{
	}
	if (func_450(&iVar0))
	{
		if ((Global_1934765->f_275[iVar0 /*2*/])->f_1 != iParam0)
		{
			Global_1934765->f_286 = (Global_1934765->f_286 + (Global_1934765->f_275[iVar0 /*2*/])->f_1);
			(Global_1934765->f_275[iVar0 /*2*/])->f_1 = iParam0;
			Global_1934765->f_286 = (Global_1934765->f_286 - iParam0);
			STREAMING::_0x2F9AC754FE179D58(func_451());
		}
		return;
	}
	iVar0 = func_452();
	if (iVar0 == -1)
	{
		return;
	}
	(Global_1934765->f_275[iVar0 /*2*/])->f_1 = iParam0;
	Global_1934765->f_275[iVar0 /*2*/] = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1934765->f_286 = (Global_1934765->f_286 - iParam0);
	STREAMING::_0x2F9AC754FE179D58(func_451());
}

void func_189(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	func_453(iParam0, iParam1, bParam2, fParam3);
}

void func_190()
{
	(Local_16[0 /*10*/])->f_1 = { 2966.473f, 471.6891f, 47.4754f };
	(Local_16[0 /*10*/])->f_7 = 119.7542f;
	(Local_16[0 /*10*/])->f_9 = -78273782;
	(Local_16[1 /*10*/])->f_1 = { 2956.583f, 526.2573f, 43.6717f };
	(Local_16[1 /*10*/])->f_7 = 87.9478f;
	(Local_16[1 /*10*/])->f_9 = -1038436471;
}

void func_191()
{
	func_454();
	func_455();
	func_456();
	PED::ADD_RELATIONSHIP_GROUP("pinkertonsRel", &iLocal_1155);
}

void func_192(var uParam0)
{
	func_457(uParam0);
	func_458(uParam0, 1);
	func_459(uParam0, 1);
	func_460(uParam0, 1);
	func_461(uParam0, 1);
	func_462(uParam0, 1);
	func_463(uParam0, 1);
	func_464(uParam0, 1);
	func_465(uParam0, 0);
}

int func_193(var uParam0, int iParam1)
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

int func_194(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!func_466((*uParam0)[iVar0 /*3*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_195(var uParam0, char* sParam1)
{
	struct<2> Var0;

	Var0 = { func_426(uParam0->f_174) };
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
			uParam0->f_2573 = { func_427(uParam0->f_174) };
		}
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_2573)))
	{
		HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_2573));
	}
}

int func_196(var uParam0)
{
	return uParam0->f_168;
}

void func_197(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (func_467((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1))
		{
			func_468((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_41[iVar0 /*3*/])->f_2 == 0 || !func_467((uParam0->f_41[iVar0 /*3*/])->f_2, iParam2))
			{
				func_443(uParam0->f_41[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_467((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1))
		{
			func_468((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1);
			if ((uParam0->f_117[iVar0 /*5*/])->f_4 == 0 || !func_467((uParam0->f_117[iVar0 /*5*/])->f_4, iParam2))
			{
				func_444(uParam0->f_117[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_467(((*uParam0)[iVar0 /*3*/])->f_2, iParam1))
		{
			func_468(((*uParam0)[iVar0 /*3*/])->f_2, iParam1);
			if (((*uParam0)[iVar0 /*3*/])->f_2 == 0 || !func_467(((*uParam0)[iVar0 /*3*/])->f_2, iParam2))
			{
				func_445((*uParam0)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_467((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1))
		{
			func_468((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_28[iVar0 /*3*/])->f_2 == 0 || !func_467((uParam0->f_28[iVar0 /*3*/])->f_2, iParam2))
			{
				func_446(uParam0->f_28[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

int func_198(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_44 != -1)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_44 != 0)
		{
			if (!func_469(((*Global_1347702)[iParam0 /*49*/])->f_44))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_199(var uParam0)
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
						*uParam0 = func_470(vVar0.z);
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

void func_200(bool bParam0)
{
	if (!bParam0)
	{
		LAW::_0x61B98367D93F012F(PLAYER::GET_PLAYER_INDEX());
	}
	LAW::_ENABLE_DISPATCH_LAW(bParam0);
	LAW::_ENABLE_DISPATCH_LAW_2(bParam0);
}

void func_201(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_125(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_185(Global_1935630, 4194304);
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

int func_202(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if (func_466(uParam0->f_41[iVar1 /*3*/]))
		{
			if (func_467((uParam0->f_41[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_471(uParam0->f_41[iVar1 /*3*/]))
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
		if (func_472(uParam0->f_117[iVar1 /*5*/]))
		{
			if (func_467((uParam0->f_117[iVar1 /*5*/])->f_4, iParam1))
			{
				if (!func_473(uParam0->f_117[iVar1 /*5*/]))
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
		if (func_474((*uParam0)[iVar1 /*3*/]))
		{
			if (func_467(((*uParam0)[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_475((*uParam0)[iVar1 /*3*/]))
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
		if (func_476(uParam0->f_28[iVar1 /*3*/]))
		{
			if (func_467((uParam0->f_28[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_477(uParam0->f_28[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (iParam1 != 0 && iParam1 != 4)
	{
		if (!func_478(uParam0->f_174))
		{
			iVar0 = 0;
		}
		if (!func_479(uParam0))
		{
			iVar0 = 0;
		}
	}
	if (!func_480(uParam0, iParam1))
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

int func_203()
{
	return Global_1572887->f_12;
}

bool func_204(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_205(vector3 vParam0, var uParam3)
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
	iVar0 = func_481(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_482(0, 0);
		if (func_483(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_484(1, 0);
		}
	}
	else
	{
		func_484(1, 0);
	}
	func_154(0);
	func_485(0, vParam0, uParam3);
	return 1;
}

void func_206(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*iParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

bool func_207(int iParam0)
{
	return func_304(uLocal_1156, iParam0);
}

bool func_208(int iParam0, int iParam1, int iParam2, int iParam3)
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

void func_209(int iParam0)
{
	func_306(&uLocal_1156, iParam0);
}

void func_210(var uParam0)
{
	func_486(uParam0, 0f);
}

float func_211(var uParam0)
{
	if (!func_79(uParam0))
	{
		return 0f;
	}
	if (func_279(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_487() - uParam0->f_1);
}

void func_212(int iParam0)
{
	func_488(&uLocal_1156, iParam0);
}

void func_213(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_214(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_489(bParam1, iParam2, bParam3);
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

int func_215(var uParam0, char* sParam1, char* sParam2, vector3 vParam3, int iParam6)
{
	float fVar0;
	bool bVar1;

	bVar1 = false;
	if (!iParam6 == 0)
	{
		fVar0 = func_490(Global_35, iParam6, 1, 1);
		bVar1 = true;
	}
	else
	{
		fVar0 = func_491(Global_35, vParam3, 1);
	}
	if (!iLocal_997)
	{
		if (!func_492())
		{
			if (fVar0 > 70f)
			{
				if (iLocal_1160 == 1)
				{
					if (!func_207(2048))
					{
						func_126(uParam0, "GANG02_INVESTIGATE", 0, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
					}
					else
					{
						func_126(uParam0, "GANG02_INVESTIUP", 0, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
					}
				}
				else if (iLocal_1160 == 2 || iLocal_1160 == 3)
				{
					func_126(uParam0, "GANG02_TAKEOUT", 0, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
				}
				else if (iLocal_1160 == 4)
				{
					if (MAP::DOES_BLIP_EXIST(iLocal_1205))
					{
						func_126(uParam0, "GANG02_COLLECT_LETTER", 0, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
					}
					else if (func_207(4096))
					{
						func_126(uParam0, "GANG02_DOWNSTAIRSOBJ", 0, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
					}
					else
					{
						func_126(uParam0, "GANG02_DOWNSTAIRS", 0, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
					}
				}
				iLocal_997 = 1;
			}
		}
	}
	if (!func_225(8))
	{
		if (fVar0 > 90f)
		{
			if (!MAP::DOES_BLIP_EXIST(iLocal_1204))
			{
				iLocal_1204 = func_493(-308585968, vLocal_1206, 20f, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1204, "GANG02_BLIP_MANSION");
			}
			func_494();
			func_495();
			if (MAP::DOES_BLIP_EXIST(iLocal_1205))
			{
				MAP::_0x662D364ABF16DE2F(iLocal_1205, -1186550032);
			}
			func_126(uParam0, sParam1, 0, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
			func_226(8);
		}
	}
	else if (fVar0 < 40f)
	{
		if (iLocal_1160 == 1)
		{
			if (!func_207(2048))
			{
				func_126(uParam0, "GANG02_INVESTIGATE", 0, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
			}
			else
			{
				func_126(uParam0, "GANG02_INVESTIUP", 0, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
			}
		}
		else if (iLocal_1160 == 2 || iLocal_1160 == 3)
		{
			func_126(uParam0, "GANG02_TAKEOUT", 0, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
		}
		else if (iLocal_1160 == 4)
		{
			if (MAP::DOES_BLIP_EXIST(iLocal_1205))
			{
				func_126(uParam0, "GANG02_COLLECT_LETTER", 0, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
			}
			else if (func_207(4096))
			{
				func_126(uParam0, "GANG02_DOWNSTAIRSOBJ", 0, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
			}
			else
			{
				func_126(uParam0, "GANG02_DOWNSTAIRS", 0, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
			}
		}
		func_496();
		func_497();
		if (MAP::DOES_BLIP_EXIST(iLocal_1205))
		{
			MAP::_0xB059D7BD3D78C16F(iLocal_1205, -1186550032);
		}
		func_360(&iLocal_1204);
		iLocal_997 = 0;
		func_498(sParam1);
		func_499(8);
	}
	else if (fVar0 > 130f)
	{
		if (bVar1)
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(iParam6))
			{
				StringCopy(&(uParam0->f_2578), sParam2, 24);
				return 1;
			}
		}
		else
		{
			StringCopy(&(uParam0->f_2578), sParam2, 24);
			return 1;
		}
	}
	return 0;
}

void func_216(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 1048576;
	if (bParam4)
	{
		iVar0 |= 131072;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_217()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (iLocal_1160 < 5)
	{
		iVar0 = 605;
	}
	else
	{
		iVar0 = 715;
	}
	iVar1 = (iVar0 / 100);
	iVar2 = (iVar0 % 100);
	iVar3 = CLOCK::GET_CLOCK_HOURS();
	iVar4 = CLOCK::GET_CLOCK_MINUTES();
	if (!iLocal_995)
	{
		if (iVar3 > iVar1 || (iVar3 == iVar1 && iVar4 >= iVar2))
		{
			CLOCK::PAUSE_CLOCK(true, 0);
			iLocal_995 = 1;
		}
	}
	else if (iVar3 < iVar1 || (iVar3 == iVar1 && iVar4 < iVar2))
	{
		CLOCK::PAUSE_CLOCK(false, 0);
		iLocal_995 = 0;
	}
	func_500();
}

bool func_218()
{
	return (Global_1894899 & 1 != 0 && func_117() != -1);
}

int func_219(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(Local_262[iVar1 /*10*/])))
		{
			Local_262[iVar1 /*10*/] = func_501(uParam0, -1038436471, (Local_262[iVar1 /*10*/])->f_1, (Local_262[iVar1 /*10*/])->f_7, 1, 1, 0, 1, 1, 1, 1, 0);
			if (iVar1 == 1 || iVar1 == 0)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_262[iVar1 /*10*/]), true);
				PED::SET_PED_CONFIG_FLAG(&(Local_262[iVar1 /*10*/]), 297, true);
			}
			func_502(&(Local_262[iVar1 /*10*/]), 1022576842);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(&(Local_262[iVar1 /*10*/])))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_220(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(Local_45[iVar1 /*54*/])))
		{
			Local_45[iVar1 /*54*/] = func_501(uParam0, (Local_45[iVar1 /*54*/])->f_1, (Local_45[iVar1 /*54*/])->f_5, (Local_45[iVar1 /*54*/])->f_15, 1, 1, 0, 1, 1, 1, 0, 0);
		}
		else if (PED::IS_PED_READY_TO_RENDER(&(Local_45[iVar1 /*54*/])))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 == 4)
	{
		return 1;
	}
	return 0;
}

void func_221(var uParam0)
{
	int iVar0;

	SCRIPTS::ACTIVATE_GOAL_CONTEXT(-1392528840);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(Local_45[iVar0 /*54*/])))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_45[iVar0 /*54*/]), true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(&(Local_45[iVar0 /*54*/]), true, true);
			WEAPON::_0x899A04AFCC725D04(&(Local_45[iVar0 /*54*/]), WEAPON::_0xD42514C182121C23((Local_45[iVar0 /*54*/])->f_1));
			PED::SET_PED_COMBAT_ABILITY(&(Local_45[iVar0 /*54*/]), 2);
			PED::SET_PED_ACCURACY(&(Local_45[iVar0 /*54*/]), 90);
			PED::SET_PED_COMBAT_MOVEMENT(&(Local_45[iVar0 /*54*/]), 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_45[iVar0 /*54*/]), 0, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_45[iVar0 /*54*/]), 50, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_45[iVar0 /*54*/]), 43, true);
			PED::SET_PED_COMBAT_RANGE(&(Local_45[iVar0 /*54*/]), 0);
			PED::SET_PED_CONFIG_FLAG(&(Local_45[iVar0 /*54*/]), 6, true);
			TASK::SET_PED_PATH_MAY_ENTER_WATER(&(Local_45[iVar0 /*54*/]), false);
			TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(&(Local_45[iVar0 /*54*/]), 1, 1065353216);
			ENTITY::_0x18FF3110CF47115D(&(Local_45[iVar0 /*54*/]), 7, 1);
			func_457(&((Local_45[iVar0 /*54*/])->f_20));
			func_503(&((Local_45[iVar0 /*54*/])->f_20));
			func_504(&((Local_45[iVar0 /*54*/])->f_20));
			func_505(&((Local_45[iVar0 /*54*/])->f_20), 1);
			func_506(&((Local_45[iVar0 /*54*/])->f_20), 0);
			func_507(&((Local_45[iVar0 /*54*/])->f_20), 0);
			PED::SET_PED_HEARING_RANGE(&(Local_45[iVar0 /*54*/]), 2.5f);
			PED::SET_PED_SEEING_RANGE(&(Local_45[iVar0 /*54*/]), 20f);
			AUDIO::STOP_PED_SPEAKING(&(Local_45[iVar0 /*54*/]), true);
			PED::_0xF1C03A5352243A30(&(Local_45[iVar0 /*54*/]));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(Local_45[iVar0 /*54*/]), iLocal_1155);
			PED::SET_PED_CONFIG_FLAG(&(Local_45[iVar0 /*54*/]), 186, true);
			if (iVar0 == 3)
			{
				WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(&(Local_45[iVar0 /*54*/]), false);
				func_508(&(Local_45[iVar0 /*54*/]), 854722235);
			}
			if (iVar0 == 2)
			{
				func_508(&(Local_45[iVar0 /*54*/]), 1110418742);
			}
			if (iVar0 == 1)
			{
				func_508(&(Local_45[iVar0 /*54*/]), 615705149);
			}
			if (iVar0 == 0)
			{
				func_508(&(Local_45[iVar0 /*54*/]), 392974256);
			}
			func_509(iVar0);
		}
		iVar0++;
	}
	func_510(uParam0, &(Local_45[3 /*54*/]), "RGNG0_PINKERTON_1", 0);
	func_510(uParam0, &(Local_45[1 /*54*/]), "RGNG0_PINKERTON_2", 0);
	func_510(uParam0, &(Local_45[0 /*54*/]), "RGNG0_PINKERTON_3", 0);
	func_510(uParam0, &(Local_45[2 /*54*/]), "RGNG0_PINKERTON_4", 0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_1155, 1862763509);
}

void func_222(var uParam0)
{
	func_511(uParam0, &(Local_45[2 /*54*/]), "S_M_M_PINLAW_01^1", 0, 0, 0);
	func_511(uParam0, &(Local_45[3 /*54*/]), "S_M_M_PINLAW_01^3", 0, 0, 0);
	func_511(uParam0, &(Local_45[1 /*54*/]), "S_M_M_PINLAW_01", 0, 0, 0);
	func_511(uParam0, &(Local_45[0 /*54*/]), "S_M_M_PINLAW_01^2", 0, 0, 0);
	func_511(uParam0, &(Local_262[3 /*10*/]), "Horse_01", 0, 0, 0);
	func_511(uParam0, &(Local_262[2 /*10*/]), "Horse_01^3", 0, 0, 0);
	func_511(uParam0, &(Local_262[1 /*10*/]), "Horse_01^1", 0, 0, 0);
	func_511(uParam0, &(Local_262[0 /*10*/]), "Horse_01^2", 0, 0, 0);
}

char* func_223(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_leadin";
		case 1:
			return "pbl_reading_letter";
		case 2:
			return "pbl_letter_after_read_letter";
		case 3:
			return "pbl_fireplace_after_read_letter";
		case 4:
			return "pbl_action";
		case 5:
			return "pbl_jump_react_02_letter";
		case 6:
			return "pbl_jump_react_01_letter";
		case 7:
			return "pbl_jump_react_01_fireplace";
		case 8:
			return "pbl_jump_react_02_fireplace";
		case 9:
			return "pbl_action";
		case 10:
			return "pbl_exit_loop_alerted";
	}
	return "";
}

bool func_224(int iParam0, int iParam1, char* sParam2)
{
	if (!(Local_1231[iParam0 /*16*/])->f_14)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_1231[iParam0 /*16*/])))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(&(Local_1231[iParam0 /*16*/]), 1, 0))
			{
				(Local_1231[iParam0 /*16*/])->f_14 = 1;
				return (Local_1231[iParam0 /*16*/])->f_14;
			}
		}
		else
		{
			if (MISC::IS_STRING_NULL(sParam2))
			{
				Local_1231[iParam0 /*16*/] = ANIMSCENE::_CREATE_ANIM_SCENE((Local_1231[iParam0 /*16*/])->f_1, iParam1, (Local_1231[iParam0 /*16*/])->f_15, false, true);
			}
			else
			{
				Local_1231[iParam0 /*16*/] = ANIMSCENE::_CREATE_ANIM_SCENE((Local_1231[iParam0 /*16*/])->f_1, iParam1, sParam2, false, true);
			}
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_1231[iParam0 /*16*/])))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(&(Local_1231[iParam0 /*16*/]));
				func_512(iParam0);
			}
		}
	}
	return (Local_1231[iParam0 /*16*/])->f_14;
}

bool func_225(int iParam0)
{
	return func_304(uLocal_1157, iParam0);
}

void func_226(int iParam0)
{
	func_306(&uLocal_1157, iParam0);
}

int func_227(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_513(((*Global_1347702)[iParam0 /*49*/])->f_15) != 0)
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

int func_228(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_514(0);
	if (iVar0 == 11)
	{
		iVar1 = func_515(func_112(iParam1), 1);
		if (iVar1 != -589165916)
		{
			if ((iVar1 == -103573613 || iVar1 == 194099983) || iVar1 == 2038046186)
			{
				iVar2 = func_516(Global_40.f_4283);
				if (func_363(iVar2) && iVar2 == ((*Global_1347702)[uParam0->f_174 /*49*/])->f_27)
				{
					return 1;
				}
			}
		}
	}
	else if (iVar0 == 4)
	{
		iVar3 = func_517(iParam1);
		if (iVar3 != -1)
		{
			if ((iVar3 == 1 || iVar3 == 3) || iVar3 == 2)
			{
				if (func_363(Global_1894899->f_2) && Global_1894899->f_2 == func_516(Global_40.f_4283))
				{
					return 1;
				}
			}
		}
	}
	if (func_518(uParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_229(int iParam0)
{
	int iVar0;
	int iVar1;

	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 8 != 0)
	{
		return 1;
	}
	if (func_519(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		if (!func_519(((*Global_1835011)[44 /*74*/])->f_1, 1))
		{
			if (iParam0 != 82 && iParam0 != 83)
			{
				return 1;
			}
		}
		if (func_519(((*Global_1835011)[67 /*74*/])->f_1, 1))
		{
			if ((!func_519(((*Global_1347702)[8 /*49*/])->f_15, 1) && !func_519(((*Global_1835011)[69 /*74*/])->f_1, 1)) && iParam0 != 8)
			{
				if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1835011)[67 /*74*/])->f_22)) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(((*Global_1835011)[67 /*74*/])->f_22))) > 0)
				{
					return 1;
				}
			}
		}
	}
	else if ((!func_520(2) && !func_519(((*Global_1347702)[61 /*49*/])->f_15, 1)) && func_519(((*Global_1347702)[59 /*49*/])->f_15, 1))
	{
		if (iParam0 != 60 && iParam0 != 61)
		{
			return 1;
		}
	}
	if (iParam0 == 15)
	{
		iVar1 = func_523(func_521(65536), 0, 3, func_522(65536));
		if (func_57(iVar1))
		{
			iVar0 = func_513(iVar1);
			if (!func_304(iVar0, 4))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 26 || iParam0 == 27)
	{
		if (((((!func_519(((*Global_1835011)[14 /*74*/])->f_1, 1) && func_519(((*Global_1347702)[62 /*49*/])->f_15, 1)) && func_519(((*Global_1347702)[0 /*49*/])->f_15, 1)) && func_519(((*Global_1347702)[94 /*49*/])->f_15, 1)) && func_519(((*Global_1835011)[25 /*74*/])->f_1, 1)) && (func_519(((*Global_1835011)[8 /*74*/])->f_1, 1) || (func_519(((*Global_1347702)[98 /*49*/])->f_15, 1) && func_513(((*Global_1347702)[98 /*49*/])->f_15) == 0)))
		{
			return 1;
		}
	}
	else if (iParam0 == 27)
	{
		if (!func_519(((*Global_1835011)[34 /*74*/])->f_1, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 42)
	{
		if (!func_519(((*Global_1347702)[41 /*49*/])->f_15, 1))
		{
			if (!func_524(8))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 51)
	{
		if (!func_525(2))
		{
			return 1;
		}
	}
	else if (iParam0 == 52)
	{
		if (!func_519(((*Global_1347702)[51 /*49*/])->f_15, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 57)
	{
		if (func_289(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 69 || iParam0 == 70)
	{
		if (func_526(((*Global_1347702)[iParam0 /*49*/])->f_15) == 0)
		{
			if (func_527() <= 160)
			{
				return 1;
			}
			else
			{
				func_528(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
			}
		}
		if (!func_529(68))
		{
			return 1;
		}
	}
	else if (iParam0 == 77)
	{
		if (func_289(((*Global_1835011)[47 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_289(((*Global_1835011)[45 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_530(16, 0))
		{
			return 1;
		}
	}
	else if (iParam0 == 87)
	{
		if (func_289(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 95)
	{
		if (func_289(((*Global_1835011)[20 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_289(((*Global_1835011)[21 /*74*/])->f_1))
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
		else if (!SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[113 /*49*/])->f_42, false) && func_531())
		{
			if (func_379("MUDTOWN32_altobj", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
			{
				func_179(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 262144);
				func_230(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 64);
				func_128(113, 1, 0, 1, 1, 1, 0);
				return 1;
			}
		}
	}
	else if (iParam0 == 99)
	{
		if (func_532(-404697685, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 117)
	{
		if (func_289(((*Global_1835011)[69 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 136)
	{
		if (func_289(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_230(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_231(int iParam0)
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

int func_232(int iParam0)
{
	if (!func_363(iParam0))
	{
		return 0;
	}
	return func_364(iParam0, 33554432);
}

int func_233(int iParam0)
{
	if (!func_363(iParam0))
	{
		return 0;
	}
	return func_364(iParam0, 67108864);
}

var func_234()
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

bool func_235(int iParam0, int iParam1)
{
	return func_533(iParam0, iParam1);
}

int func_236(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (func_214(iParam0, bParam1, iParam2, iParam3))
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

int func_237(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
				else if (!func_429(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])))
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
			else if (!func_536(func_430(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])), -1f, 10f, 1, 1, 40f))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_238(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43))
	{
		if (!func_537(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43), &(uParam0->f_178), &iVar0, 1, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_239(int iParam0, float fParam1)
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

int func_240(var uParam0)
{
	return 0;
}

int func_241(float fParam0)
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

void func_242()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_428(iVar0) && func_429(iVar0))
		{
			func_538(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_80(&(Global_1359489->f_40), 1);
}

void func_243(var uParam0)
{
	if (func_6(uParam0->f_172, 8))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
}

void func_244(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_283(iParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_284(iParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(iVar0, func_284(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_284(iParam0)))
			{
				UILOG::_UILOG_REMOVE_ENTRY(2, func_284(iParam0));
			}
		}
	}
	func_121(iParam0, 4);
	func_121(iParam0, 8);
	func_121(iParam0, 16);
}

void func_245(int iParam0)
{
	Global_36579 = iParam0;
}

void func_246(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_247(int iParam0)
{
	func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			func_252(iParam0, func_69(iParam0), 1, 0);
		}
		else
		{
			func_539(iParam0);
		}
	}
	else
	{
		func_115(iParam0, 0);
	}
}

void func_248(var uParam0)
{
	if (func_540(uParam0->f_174))
	{
		func_541(262144, 5, 0, 1);
		func_542(720f, 1, 0);
	}
}

void func_249(int iParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_fishingrod"), 0, 0))
	{
		return;
	}
	Global_1900073->f_18 = iParam0;
}

void func_250(var uParam0)
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

float func_251(int iParam0)
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

void func_252(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;

	if (!func_204(iParam0))
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
	((*Global_1347702)[iParam0 /*49*/])->f_38 = func_543(iParam0);
	if (!bParam5 && func_544(iParam0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::BLIP_ADD_FOR_RADIUS(((*Global_1347702)[iParam0 /*49*/])->f_38, func_412(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_18);
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
		func_545(8);
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
	func_539(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(((*Global_1347702)[iParam0 /*49*/])->f_37, 64, iParam0);
	if (func_203() == -1)
	{
		func_546(iParam0);
		iVar0 = func_516(Global_40.f_4283);
		if (func_363(iVar0) && func_547(((*Global_1888801)[iVar0 /*35*/])->f_13))
		{
			iVar1 = 1;
			bVar2 = func_548(iVar0);
		}
		if (func_549(iParam0, iVar1, iVar0))
		{
			func_550(((*Global_1347702)[iParam0 /*49*/])->f_15, bVar2, iVar1, iVar0);
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
		if (((!func_544(iParam0) || func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 1)) || func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 512)) || func_46(((*Global_1347702)[iParam0 /*49*/])->f_13, 2048))
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
		if (func_551(iParam0))
		{
			if (iParam0 == 97)
			{
				func_328(185, 0);
			}
			else
			{
				func_328(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = ((*Global_1347702)[iParam0 /*49*/])->f_37;
			((*Global_1347702)[iParam0 /*49*/])->f_40 = func_340(MISC::_CREATE_VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_285(iParam0, 2);
	}
}

void func_253(int iParam0, float fParam1)
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

void func_254(int iParam0, vector3 vParam1, float fParam4)
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
	if (func_552(iParam0, fParam4))
	{
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2048);
		func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		func_115(iParam0, 0);
		func_252(iParam0, vParam1, 1, 0);
	}
}

void func_255(int iParam0)
{
	if (func_553(179))
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
	else if (func_544(iParam0))
	{
		return;
	}
	if (((MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37) && MAP::IS_BLIP_ON_MINIMAP(((*Global_1347702)[iParam0 /*49*/])->f_37)) && BUILTIN::VDIST2(func_69(iParam0), Global_36) < 10000f) && func_554())
	{
		func_555(179, ((*Global_1347702)[iParam0 /*49*/])->f_37, 0);
	}
}

void func_256(int iParam0)
{
	if (func_553(180))
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_36 != -1822497728)
	{
		return;
	}
	else if (!func_544(iParam0))
	{
		return;
	}
	if ((MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37) && MAP::IS_BLIP_ON_MINIMAP(((*Global_1347702)[iParam0 /*49*/])->f_37)) && func_554())
	{
		func_555(180, ((*Global_1347702)[iParam0 /*49*/])->f_37, 0);
	}
}

void func_257(var uParam0)
{
	if (func_6(uParam0->f_172, 16))
	{
		func_102(uParam0, 0);
		func_87(uParam0);
	}
}

int func_258(var uParam0)
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
		Var0 = { func_556(uParam0->f_174) };
		uParam0->f_751 = ANIMSCENE::_CREATE_ANIM_SCENE(&Var0, 0, 0, false, true);
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_751))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_751);
		}
	}
	return 0;
}

struct<8> func_259()
{
	char cVar0[64];

	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

struct<8> func_260(var uParam0)
{
	return uParam0->f_350;
}

void func_261(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_557(uParam0) };
	func_558(uParam0, &Var0);
}

void func_262(var uParam0, char* sParam1)
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
	func_558(uParam0, sParam1);
	func_559(uParam0, 2097152, 1);
	func_560(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_348, sParam1, true);
}

int func_263(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_264(var uParam0)
{
	if (uParam0->f_177 == 6)
	{
		return 1;
	}
	else if (uParam0->f_177 == 2)
	{
		return 1;
	}
	else if (func_561(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_265(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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
			return (func_562(uParam0, 256) && !func_562(uParam0, 4194304));
		}
		uParam0->f_415 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	func_563(uParam0, sParam1);
	if (!func_562(uParam0, 64))
	{
		if (!func_263(func_564(uParam0)))
		{
			func_560(uParam0, 64);
		}
		else
		{
			vVar0 = { func_565(uParam0) };
			if (!func_263(vVar0))
			{
				func_566(uParam0, vVar0);
			}
		}
		return 0;
	}
	fVar3 = func_491(Global_35, func_564(uParam0), 1);
	if (func_562(uParam0, 128) || func_562(uParam0, 256))
	{
		if ((fVar3 >= func_567(uParam0) && !bParam2) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
		{
			if (uParam0->f_433)
			{
				func_568();
				uParam0->f_433 = 0;
			}
			func_569(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
			}
			func_330(uParam0);
			func_559(uParam0, 128, 1);
			func_559(uParam0, 256, 1);
			func_559(uParam0, 4096, 1);
			func_559(uParam0, 32768, 1);
			func_559(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_570(uParam0) || bParam2)
	{
		if (!func_562(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
			{
				if (func_570(uParam0) >= func_567(uParam0))
				{
				}
				Var4 = { func_260(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_571(uParam0);
				}
				Var4 = { func_260(uParam0) };
				iVar12 = 256;
				if (!func_562(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_348 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_344), iVar12, &Var4, false, true);
				func_572(uParam0, 0, 0, 0, 0);
				func_560(uParam0, 128);
			}
		}
	}
	if (func_562(uParam0, 128))
	{
		if (func_562(uParam0, 256) && !func_562(uParam0, 4194304))
		{
			return 1;
		}
		func_573(uParam0);
		if (!uParam0->f_433)
		{
			if (func_574())
			{
				func_575(4096);
				uParam0->f_433 = 1;
			}
		}
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_348, 1, 0))
		{
			bVar13 = true;
			Var15 = { func_557(uParam0) };
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
			if (!func_562(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_348, &Var15))
				{
					if (!func_562(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_348, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_348, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_348, &Var15);
						}
						func_560(uParam0, 16777216);
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
			func_560(uParam0, 256);
			func_559(uParam0, 4194304, 1);
			return 1;
		}
	}
	return 0;
}

void func_266(var uParam0)
{
}

int func_267()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 4)
	{
		if ((Local_45[iVar1 /*54*/])->f_19 == 4 || (Local_45[iVar1 /*54*/])->f_19 == 3)
		{
			if (!iLocal_992)
			{
				iLocal_992 = 1;
			}
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 == 4)
	{
		SCRIPTS::