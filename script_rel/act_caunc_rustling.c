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
	int iLocal_15[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	vector3 vLocal_62[24] = "";
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	struct<6> Local_85 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_91 = -1082130432;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	struct<695> Local_96 = { 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -50684386, 0, 2, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 50, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 1092616192, 2, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1176256512, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1106247680, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1106247680, 1106247680, 1106247680, 1106247680, 1106247680, 3, 1, 1099431936, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192, 0, 1112014848, 0, 0, 0, 0, 0, 0, 1, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1036831949, 1045220557, 1036831949, 0, 1065353216, 1077936128, 1, 0, 0, 0 } ;
	var uLocal_791 = 20;
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
	var uLocal_886 = 4;
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
	int iLocal_897 = 0;
	int iLocal_898 = 0;
	int iLocal_899 = 0;
	int iLocal_900 = 0;
	int iLocal_901 = 0;
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
	int iLocal_912 = 0;
	int iLocal_913 = 0;
	int iLocal_914 = 0;
	int iLocal_915 = 0;
	int iLocal_916 = 0;
	int iLocal_917 = 0;
	int iLocal_918 = 0;
	int iLocal_919 = 0;
	int iLocal_920 = 0;
	vector3 vLocal_921 = { 0f, 0f, 0f };
	int iLocal_924 = 0;
	int iLocal_925 = 0;
	vector3 vLocal_926 = { 0f, 0f, 0f };
	vector3 vLocal_929 = { 0f, 0f, 0f };
	vector3 vLocal_932 = { 0f, 0f, 0f };
	vector3 vLocal_935 = { 0f, 0f, 0f };
	float fLocal_938 = 0f;
	vector3 vLocal_939 = { 0f, 0f, 0f };
	float fLocal_942 = 0f;
	vector3 vLocal_943 = { 0f, 0f, 0f };
	float fLocal_946 = 0f;
	vector3 vLocal_947 = { 0f, 0f, 0f };
	float fLocal_950 = 0f;
	vector3 vLocal_951 = { 0f, 0f, 0f };
	float fLocal_954 = 0f;
	vector3 vLocal_955 = { 0f, 0f, 0f };
	vector3 vLocal_958 = { 0f, 0f, 0f };
	vector3 vLocal_961 = { 0f, 0f, 0f };
	vector3 vLocal_964 = { 0f, 0f, 0f };
	float fLocal_967 = 0f;
	vector3 vLocal_968 = { 0f, 0f, 0f };
	vector3 vLocal_971 = { 0f, 0f, 0f };
	vector3 vLocal_974 = { 0f, 0f, 0f };
	vector3 vLocal_977 = { 0f, 0f, 0f };
	vector3 vLocal_980 = { 0f, 0f, 0f };
	vector3 vLocal_983 = { 0f, 0f, 0f };
	vector3 vLocal_986 = { 0f, 0f, 0f };
	vector3 vLocal_989 = { 0f, 0f, 0f };
	vector3 vLocal_992 = { 0f, 0f, 0f };
	vector3 vLocal_995 = { 0f, 0f, 0f };
	float fLocal_998 = 0f;
	vector3 vLocal_999 = { 0f, 0f, 0f };
	vector3 vLocal_1002 = { 0f, 0f, 0f };
	vector3 vLocal_1005 = { 0f, 0f, 0f };
	vector3 vLocal_1008 = { 0f, 0f, 0f };
	vector3 vLocal_1011 = { 0f, 0f, 0f };
	vector3 vLocal_1014 = { 0f, 0f, 0f };
	vector3 vLocal_1017 = { 0f, 0f, 0f };
	vector3 vLocal_1020 = { 0f, 0f, 0f };
	vector3 vLocal_1023 = { 0f, 0f, 0f };
	vector3 vLocal_1026 = { 0f, 0f, 0f };
	float fLocal_1029 = 0f;
	float fLocal_1030 = 0f;
	vector3 vLocal_1031 = { 0f, 0f, 0f };
	vector3 vLocal_1034 = { 0f, 0f, 0f };
	float fLocal_1037 = 0f;
	float fLocal_1038 = 0f;
	vector3 vLocal_1039 = { 0f, 0f, 0f };
	vector3 vLocal_1042[24] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_1115[8] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_1140[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1149 = 8;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	int iLocal_1158 = 0;
	int iLocal_1159 = 0;
	int iLocal_1160 = 0;
	int iLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	int iLocal_1165 = 0;
	int iLocal_1166 = 0;
	int iLocal_1167 = 0;
	int iLocal_1168 = 0;
	int iLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = -1;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 1097859072;
	var uLocal_1188 = 1000;
	var uLocal_1189 = 1067450368;
	var uLocal_1190 = 5000;
	var uLocal_1191 = 42;
	var uLocal_1192 = 1103626240;
	var uLocal_1193 = 1077936128;
	var uLocal_1194 = 1106247680;
	var uLocal_1195 = 1103101952;
	var uLocal_1196 = 1097859072;
	var uLocal_1197 = 1103626240;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = -1;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 1097859072;
	var uLocal_1216 = 1000;
	var uLocal_1217 = 1067450368;
	var uLocal_1218 = 5000;
	var uLocal_1219 = 42;
	var uLocal_1220 = 1103626240;
	var uLocal_1221 = 1077936128;
	var uLocal_1222 = 1106247680;
	var uLocal_1223 = 1103101952;
	var uLocal_1224 = 1097859072;
	var uLocal_1225 = 1103626240;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = -1;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 1097859072;
	var uLocal_1244 = 1000;
	var uLocal_1245 = 1067450368;
	var uLocal_1246 = 5000;
	var uLocal_1247 = 42;
	var uLocal_1248 = 1103626240;
	var uLocal_1249 = 1077936128;
	var uLocal_1250 = 1106247680;
	var uLocal_1251 = 1103101952;
	var uLocal_1252 = 1097859072;
	var uLocal_1253 = 1103626240;
	int iLocal_1254 = 0;
	int iLocal_1255 = 0;
	int iLocal_1256 = 0;
	vector3 vLocal_1257 = { 0f, 0f, 0f };
	vector3 vLocal_1260 = { 0f, 0f, 0f };
	int iLocal_1263 = 0;
	int iLocal_1264 = 0;
	vector3 vLocal_1265 = { 0f, 0f, 0f };
	float fLocal_1268 = 0f;
	vector3 vLocal_1269 = { 0f, 0f, 0f };
	int iLocal_1272 = 0;
	vector3 vLocal_1273 = { 0f, 0f, 0f };
	vector3 vLocal_1276 = { 0f, 0f, 0f };
	vector3 vLocal_1279 = { 0f, 0f, 0f };
	int iLocal_1282 = 0;
	int iLocal_1283 = 0;
	var uLocal_1284 = 0;
	bool bLocal_1285 = false;
	var uLocal_1286 = 24;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
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
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
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
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	struct<21> Local_1414[1];
	struct<21> Local_1436[1];
	struct<17> Local_1458[1];
	struct<17> Local_1476[1];
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	float fLocal_1497 = 0f;
	struct<6> Local_1498 = { 0, 0, 0, 0, 0, 1065353216 } ;
	var uLocal_1504 = 1119092736;
	var uLocal_1505 = 1092616192;
	var uLocal_1506 = 1085276160;
	struct<4> Local_1507 = { 0, 0, 0, 0 } ;
	var uLocal_1511 = 0;
	var uLocal_1512 = 1065353216;
	var uLocal_1513 = 1119092736;
	var uLocal_1514 = 1092616192;
	var uLocal_1515 = 1085276160;
	var uLocal_1516 = 0;
	char* sLocal_1517 = NULL;
	char* sLocal_1518 = NULL;
	char* sLocal_1519 = NULL;
	struct<21> Local_1520 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1 } ;
	var uLocal_1541 = 3;
	var uLocal_1542 = 3;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 1;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 11;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 1097859072;
	var uLocal_1692 = 1101004800;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 4;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	int iLocal_1787 = 0;
	int iLocal_1788 = 0;
	vector3 vLocal_1789 = { 0f, 0f, 0f };
	vector3 vLocal_1792 = { 0f, 0f, 0f };
	int iLocal_1795 = 0;
	int iLocal_1796 = 0;
	int iLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 2;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 2;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 10;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 2;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 3;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 1101004800;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 0;
	var uScriptParam_60 = 0;
	var uScriptParam_61 = 0;
	var uScriptParam_62 = 0;
	var uScriptParam_63 = 0;
	var uScriptParam_64 = 0;
	var uScriptParam_65 = 0;
	var uScriptParam_66 = 0;
	var uScriptParam_67 = 0;
	var uScriptParam_68 = 0;
	var uScriptParam_69 = 0;
	var uScriptParam_70 = 0;
	var uScriptParam_71 = 0;
	var uScriptParam_72 = 0;
	var uScriptParam_73 = 0;
	var uScriptParam_74 = 0;
	var uScriptParam_75 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_40 = joaat("g_m_m_uniranchers_01");
	iLocal_41 = joaat("a_m_m_smhthug_01");
	iLocal_42 = joaat("a_c_horse_mustang_wildbay");
	iLocal_43 = 2030804811;
	iLocal_44 = -916457800;
	iLocal_45 = joaat("p_moneystack01x");
	iLocal_46 = joaat("p_cs_billsingle01x");
	StringCopy(&cLocal_62, "", 24);
	iLocal_82 = 2;
	iLocal_93 = 4;
	vLocal_921 = { 1399.887f, -846.9807f, 65.6473f };
	vLocal_926 = { 1378.87f, -875.46f, 69.99f };
	vLocal_929 = { 1397.84f, -847.72f, 64.85f };
	vLocal_932 = { 1857.32f, -1832.19f, 42.18f };
	vLocal_935 = { 1403f, -910.73f, 63.53f };
	fLocal_938 = 98.12f;
	vLocal_939 = { 1399.295f, -846.8665f, 64.8179f };
	fLocal_942 = 288.6509f;
	vLocal_943 = { 1399.012f, -847.7871f, 64.8039f };
	fLocal_946 = 340.2229f;
	vLocal_947 = { 1393.01f, -846.01f, 65.81f };
	fLocal_950 = 282.7032f;
	vLocal_951 = { 1387.27f, -849.95f, 66.73f };
	fLocal_954 = 282.7032f;
	vLocal_955 = { 1400.14f, -850.05f, 64.71f };
	vLocal_958 = { 1397.51f, -844.41f, 64.99f };
	vLocal_961 = { 1373.44f, -874.52f, 69.13f };
	vLocal_964 = { 1373.46f, -873.52f, 69.13f };
	fLocal_967 = 286.7116f;
	vLocal_968 = { 1425.22f, -839.53f, 59.08f };
	vLocal_971 = { 719.6435f, -858.9298f, 48.65621f };
	vLocal_974 = { 0f, 0f, -70.94415f };
	vLocal_977 = { 24.56482f, 18.743f, 7.132294f };
	vLocal_980 = { 1398.25f, -888.98f, 63.9f };
	vLocal_983 = { 1392.674f, -868.047f, 64.4684f };
	vLocal_986 = { 1391.708f, -868.0104f, 65.48524f };
	vLocal_989 = { 0f, 0f, 13.04256f };
	vLocal_992 = { 4.34111f, 2.618265f, 2.943542f };
	vLocal_995 = { 1394.34f, -854.2f, 65.07f };
	fLocal_998 = 316.0905f;
	vLocal_999 = { 1395.63f, -852.29f, 64.98f };
	vLocal_1002 = { 1398.98f, -858.86f, 63.72f };
	vLocal_1005 = { 1385.41f, -854.97f, 66.45f };
	vLocal_1008 = { 1354.41f, -859.35f, 70.87f };
	vLocal_1011 = { 889.96f, -810.82f, 67.4f };
	vLocal_1017 = { 736.59f, -833.44f, 51.33f };
	vLocal_1020 = { 724.21f, -832.63f, 48.97f };
	vLocal_1023 = { 719.87f, -836.3f, 48.83f };
	vLocal_1026 = { 717.69f, -835.21f, 48.88f };
	fLocal_1029 = 330.3314f;
	fLocal_1030 = 330.3314f;
	vLocal_1031 = { 721.58f, -838.45f, 48.7f };
	vLocal_1034 = { 716f, -835.79f, 48.81f };
	fLocal_1037 = 24.3843f;
	fLocal_1038 = 330.3314f;
	vLocal_1039 = { 722.12f, -831.85f, 48.96f };
	iLocal_1158 = -323223492;
	iLocal_1159 = -2069025776;
	iLocal_1160 = -653405011;
	iLocal_1161 = -422612944;
	vLocal_1257 = { 1400.466f, -844.712f, 66.9136f };
	vLocal_1260 = { -20.1661f, 0f, 160.238f };
	vLocal_1265 = { 1398.07f, -869.14f, 63.41f };
	fLocal_1268 = 7.5944f;
	vLocal_1269 = { 1398.207f, -871.3127f, 63.4416f };
	vLocal_1273 = { 1490.433f, -1004.383f, 50.79774f };
	vLocal_1276 = { 0f, 0f, 0f };
	vLocal_1279 = { 28.1504f, 15.1433f, 9.21536f };
	iLocal_1282 = 31;
	sLocal_1517 = "";
	sLocal_1518 = "rust_uncle_moveup";
	sLocal_1519 = "rust_herd_haven_aigather";
	vLocal_1789 = { 721.0672f, -832.7122f, 48.5023f };
	vLocal_1792 = { 721.1525f, -832.8378f, 48.5023f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
	{
		func_1(&uScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2(&uScriptParam_0, &uLocal_1799);
	while (!func_3(&uScriptParam_0))
	{
		func_5(&uScriptParam_0, &uLocal_1799, func_4());
		BUILTIN::WAIT(0);
	}
	func_1(&uScriptParam_0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	bool bVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	char* sVar4;

	bVar0 = CAM::_0x139EFB0A71DD9011();
	uVar1 = CAM::_0x7CE9DC58E3E4755F();
	if (uParam0->f_14 != 1 && uParam0->f_14 != 7)
	{
		if (!bVar0 || uVar1)
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
		}
	}
	func_6();
	func_7(uParam0);
	if (func_8(&(uParam0->f_9), 1))
	{
		func_9(uParam0->f_2);
	}
	iVar2 = 0;
	while (iVar2 < 27)
	{
		if (func_10(iVar2))
		{
			func_11(uParam0, iVar2);
		}
		iVar2++;
	}
	func_12();
	if (func_13(uParam0->f_5))
	{
		switch (uParam0->f_14)
		{
			case 0:
			case 2:
				func_14(uParam0->f_5);
				func_15(uParam0->f_5, 1, &(uParam0->f_15), 0, 0, 0);
				break;
			case 7:
				func_16(uParam0->f_5, 0, 2);
				func_17();
				func_18();
				func_19(uParam0, 0, 1);
				Global_1391438->f_3 = -1;
				iVar3 = 0;
				while (iVar3 < 10)
				{
					if ((Global_40.f_6563.f_274[iVar3 /*20*/])->f_1 == uParam0->f_1)
					{
						(Global_40.f_6563.f_274[iVar3 /*20*/])->f_18 += 50;
					}
					iVar3++;
				}
				break;
			case 1:
				if (!func_20(32768))
				{
					func_21(uParam0->f_5, 1, 1, Global_1879514->f_11, 1);
				}
				else
				{
					func_22(uParam0->f_5, Global_1879514->f_11);
				}
				func_23();
				func_17();
				func_18();
				Global_1391438->f_3 = -1;
				if (uParam0->f_1 == -1891229662 && UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 2116153146))
				{
					if (STATS::CHAL_MISSION_IS_GOAL_COMPLETE(2116153146, -619793955))
					{
						UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, 2116153146, -1964527373, "MISS_CHALL_TIME_5_45", 1, 1, 0);
					}
					if (STATS::CHAL_MISSION_IS_GOAL_COMPLETE(2116153146, -93744849))
					{
						UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, 2116153146, -485522501, "CABR01_CHALL_1", 1, 1, 0);
					}
					switch (STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(2116153146))
					{
						case 0:
							sVar4 = "TOAST_MEDAL_BRONZE";
							break;
						case 1:
							sVar4 = "TOAST_MEDAL_SILVER";
							break;
						case 2:
							sVar4 = "TOAST_MEDAL_GOLD";
							break;
						default:
							sVar4 = "";
							break;
					}
					if (Global_1879514->f_11)
					{
						sVar4 = "TOAST_MEDAL_BRONZE";
					}
					UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, 2116153146, MISC::GET_HASH_KEY(sVar4), 908516622);
					MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(2116153146, func_24());
					UILOG::_UILOG_MARK_MISSION_COMPLETED(2116153146);
					UILOG::_0xA31013798FADCADC(3, 2116153146, 1);
				}
				else
				{
					func_19(uParam0, 1, 0);
				}
				if (func_20(32768))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					func_25();
					func_26(0);
				}
				break;
			case 3:
				func_14(uParam0->f_5);
				StringCopy(&(uParam0->f_15), "PLAYER_DEAD", 24);
				func_15(uParam0->f_5, 2, &(uParam0->f_15), 0, 0, 0);
				break;
			case 6:
				func_14(uParam0->f_5);
				StringCopy(&(uParam0->f_15), "PLAYER_ARRESTED", 24);
				func_15(uParam0->f_5, 6, &(uParam0->f_15), 0, 0, 0);
				break;
			case 4:
				func_14(uParam0->f_5);
				MemCopy(&(uParam0->f_15), {func_27(uParam0->f_2)}, 3);
				func_15(uParam0->f_5, 1, &(uParam0->f_15), 0, 0, 0);
				break;
			case 5:
				func_14(uParam0->f_5);
				MemCopy(&(uParam0->f_15), {func_28(uParam0->f_2)}, 3);
				func_15(uParam0->f_5, 1, &(uParam0->f_15), 0, 0, 0);
				break;
		}
	}
	MISC::_0x1096603B519C905F("");
	if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_43));
	}
	if (PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
	{
		PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
	}
	if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::PLAYER_ID()))
	{
		PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
	}
	if (func_29(Global_35, 0))
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
	}
	func_30(64);
	if (!func_31(Global_36))
	{
		func_32(1);
		func_33(0);
	}
	func_34(Global_1935630, 256);
	func_35(uParam0);
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

int func_2(var uParam0, var uParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_68)))
	{
		return 0;
	}
	if (func_36(uParam1, &(uParam0->f_68), 3, -1, 0, 0) && func_37(uParam1))
	{
		uParam1->f_281 = 1;
		return 1;
	}
	return 0;
}

int func_3(var uParam0)
{
	int iVar0;

	if (func_29(Global_35, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 187, true);
	}
	if (uParam0->f_13 > 1 || (!func_29(Global_35, 0) && uParam0->f_13 > 0))
	{
		if ((func_38(uParam0->f_14) || func_39(uParam0)) || func_40(uParam0))
		{
			if (!CAM::_0x139EFB0A71DD9011())
			{
				func_41(1, 1);
				func_42(&uLocal_1799);
			}
			if (!func_38(uParam0->f_14) || CAM::_0x7CE9DC58E3E4755F())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
				return 1;
			}
		}
		if (func_39(uParam0) || func_40(uParam0))
		{
			func_43(&(Global_1347343->f_11), 262144);
		}
	}
	if (uParam0->f_13 > 1)
	{
		func_44(uParam0);
		func_45(uParam0);
	}
	switch (uParam0->f_13)
	{
		case 0:
			if (!uParam0->f_12)
			{
				uParam0->f_12 = func_46(uParam0);
				return 0;
			}
			if (func_47(&(Global_1391438->f_5), 128) || func_8(&(uParam0->f_9), 896))
			{
				func_48(&(Global_1391438->f_5), 128, 0);
				uParam0->f_13 = 1;
			}
			break;
		case 1:
			if (func_49(uParam0))
			{
				COMPANION::_0xA079FF7CFB9AC8BD(func_50(), 4);
				func_19(uParam0, 0, 0);
				uParam0->f_13 = 4;
			}
			break;
		case 4:
			if (func_51(uParam0))
			{
				iVar0 = func_52(*uParam0);
				Global_40.f_7039[func_53(iVar0, 1) /*2*/] = 1;
				uParam0->f_14 = 1;
				uParam0->f_13 = 6;
			}
			break;
		case 6:
			return 1;
	}
	return 0;
}

int func_4()
{
	return -1;
}

void func_5(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	if (!uParam1->f_281)
	{
		return;
	}
	if (iParam2 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_54(uParam1->f_66[iVar0 /*16*/], 1048576))
		{
			if (func_55(uParam0, uParam1->f_66[iVar0 /*16*/], iParam2))
			{
				if (func_56(uParam1->f_66[iVar0 /*16*/], 1))
				{
					if (func_54(uParam1->f_66[iVar0 /*16*/], 4))
					{
						func_57(uParam1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_6()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_58(iVar0) && func_10(iVar0))
		{
			func_59(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_60(&(Global_1359489->f_40), 1);
}

void func_7(var uParam0)
{
	int iVar0;

	func_61();
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(Local_96.f_2[iVar0])))
		{
			AUDIO::_0xEB4D592620B8C209(&(Local_96.f_2[iVar0]));
		}
		iVar0++;
	}
	func_62(&Local_96, 0);
	func_9(4);
	func_63(7);
	if (func_29(iLocal_22, 0))
	{
		PED::_0x58F7DB5BD8FA2288(iLocal_22);
		if (func_64(4, 0))
		{
			func_65(4);
		}
	}
	func_66(&iLocal_25, 1, 0, 1);
	func_66(&iLocal_27, 1, 0, 1);
	func_66(&iLocal_28, 1, 0, 1);
	func_66(&iLocal_29, 1, 0, 1);
	func_66(&iLocal_30, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_33);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_34))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_34);
	}
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RUST_RNCH");
	AUDIO::STOP_PED_SPEAKING(Global_35, false);
	AUDIO::_0x660A8F876DF1D4F8(14);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1168);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1169);
	if (PED::IS_SCENARIO_BLOCKING_AREA_VALID(uLocal_1284))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1284, false);
		PATHFIND::RESET_ROADS_IN_VOLUME(iLocal_914, 0);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_1167))
	{
		POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_1167);
		POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(iLocal_1167);
		func_67(iLocal_1167);
	}
	func_67(iLocal_897);
	func_67(iLocal_898);
	func_67(iLocal_899);
	func_67(iLocal_900);
	func_67(iLocal_901);
	func_67(iLocal_902);
	func_67(iLocal_903);
	func_67(iLocal_904);
	func_67(iLocal_905);
	func_67(iLocal_911);
	func_67(iLocal_912);
	func_67(iLocal_913);
	func_67(iLocal_914);
	func_67(iLocal_1272);
	func_67(iLocal_908);
	func_67(iLocal_906);
	func_67(iLocal_915);
	func_67(iLocal_916);
	func_67(iLocal_910);
	func_67(iLocal_918);
	if (func_68(&uLocal_1516))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&uLocal_1516, 1);
	}
	if (func_69(760, 0))
	{
		func_70(760, 0, 1, 0, 0);
	}
	if (func_69(642, 0))
	{
		func_70(642, 0, 1, 0, 0);
	}
	if (func_69(643, 0))
	{
		func_70(643, 0, 1, 0, 0);
	}
	func_71();
	if (func_10(4))
	{
		func_72(4);
		func_73(4, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	}
	if (func_29(iLocal_23, 0) && func_74(4))
	{
		func_75(iLocal_23, 4, 1, 0, 0);
	}
	if (func_29(iLocal_24, 0))
	{
		ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(iLocal_24, true);
		func_76(iLocal_24, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1795))
	{
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iLocal_1795);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1796))
	{
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iLocal_1796);
	}
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_1283))
	{
		if (iLocal_55 != 0)
		{
			if (!GRAPHICS::_0x113857D66A9CABE6(iLocal_55))
			{
				GRAPHICS::_0xBFCB17895BB99E4E(iLocal_55, true);
			}
		}
		INTERIOR::UNPIN_INTERIOR(iLocal_1283);
	}
	if (GRAPHICS::_0x113857D66A9CABE6(iLocal_56))
	{
		GRAPHICS::_0xBFCB17895BB99E4E(iLocal_56, true);
	}
	if (func_77(iLocal_84))
	{
		func_78(&iLocal_84, 1, 1);
	}
	func_79();
	func_80();
}

int func_8(var uParam0, int iParam1)
{
	if ((*uParam0 && iParam1) != 0)
	{
		return 1;
	}
	return 0;
}

void func_9(int iParam0)
{
	func_81(iParam0, 8, 0);
}

bool func_10(int iParam0)
{
	if (!func_58(iParam0))
	{
		return false;
	}
	if (!func_82(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_11(var uParam0, int iParam1)
{
	if (uParam0->f_8 > 0f && uParam0->f_14 == 1)
	{
		func_73(iParam1, 0, 0, 0, uParam0->f_8, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		AUDIO::STOP_PED_SPEAKING(func_83(iParam1), false);
		func_73(iParam1, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	}
}

void func_12()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_58(iVar0) && func_64(iVar0, 1))
		{
			func_72(iVar0);
		}
		iVar0++;
	}
}

bool func_13(int iParam0)
{
	int iVar0;

	iVar0 = func_84(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_14(int iParam0)
{
	int iVar0;

	if (!func_85(iParam0))
	{
		return;
	}
	if (iParam0 != func_86(0))
	{
		return;
	}
	if (func_87(iParam0) == 0)
	{
	}
	iVar0 = func_88(iParam0);
	if (func_89(iParam0) == 3)
	{
		if (func_87(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_87(iParam0)))
		{
			if (func_88(iParam0) != 1 && func_88(iParam0) != 8)
			{
				func_90(func_88(iParam0), func_87(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_91(iParam0);
	func_32(1);
	func_33(0);
	func_92(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_93(1);
			func_94(15, 0, 1);
			break;
		case 4:
			func_94(10, 0, 1);
			break;
		case 8:
			func_94(10, 0, 1);
			break;
		case 9:
			func_94(10, 0, 1);
			break;
		case 2:
			func_94(10, 0, 1);
			break;
		case 6:
			func_94(10, 0, 1);
			break;
		case 5:
			func_94(10, 0, 1);
			break;
	}
	func_95(1);
}

void func_15(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_96(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_43(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_43(&(Global_1347343->f_11), 16384);
	}
	if (func_97() >= 2)
	{
		if (!func_96(Global_1347343->f_11, 16384))
		{
			func_43(&(Global_1347343->f_11), 8);
		}
		func_98(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_99(Global_1935630, 2048);
	func_100(bParam5);
}

void func_16(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_85(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_13(iParam0) && !func_101(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_87(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_13(iParam0))
	{
		iParam2 = -1;
	}
	if (func_89(iParam0) == 3 || (func_89(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_87(iParam0))))
	{
		func_90(func_88(iParam0), func_87(iParam0), iParam2);
		if ((!func_85(Global_1572864->f_8) && !func_102(0, 1, 0)) && !func_103(&Global_1935630, 32768))
		{
			iVar0 = func_104(iParam0);
			if (iVar0 != -1)
			{
				func_105(0);
			}
			else if (func_88(iParam0) == 8)
			{
				iVar0 = func_106();
				if (iVar0 != -1)
				{
					func_105(0);
				}
			}
		}
	}
	func_92(iParam0, 0);
	if (func_86(0) == iParam0)
	{
		func_32(1);
		func_33(0);
		func_95(1);
	}
	func_107(iParam0, 1);
	func_91(iParam0);
}

void func_17()
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

void func_18()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_108(0);
	func_109(0);
	func_110(0);
	func_111(0);
	func_112(0);
	func_98(1f);
}

void func_19(var uParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	char cVar2[64];
	int iVar10;

	if (!func_113(uParam0->f_1))
	{
		return;
	}
	sVar0 = func_114(uParam0->f_1);
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar1))
	{
		StringCopy(&cVar2, MISC::_CREATE_VAR_STRING(2, func_115(*uParam0)), 64);
		StringConCat(&cVar2, " - ", 64);
		StringConCat(&cVar2, MISC::_CREATE_VAR_STRING(2, func_116(uParam0->f_2, 0)), 64);
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar1, Global_36, MISC::GET_HASH_KEY(func_115(*uParam0)), func_117(uParam0->f_1), iVar10);
		UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar1, &cVar2);
		UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar1, func_118(*uParam0), 676312963);
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar1, func_119(uParam0->f_1), func_120(uParam0->f_1));
	}
	else if (bParam2)
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar1);
		return;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar1, func_117(uParam0->f_1), "", bParam1, 0, 0);
	if (bParam1)
	{
		UILOG::_UILOG_MARK_MISSION_COMPLETED(iVar1);
	}
}

bool func_20(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_21(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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

	if (!func_85(iParam0))
	{
		return;
	}
	if (func_84(iParam0) == 4)
	{
		func_122(iParam0, func_121());
		if (!func_89(iParam0) == 5 && !func_89(iParam0) == 6)
		{
			if (bParam3)
			{
				func_92(iParam0, 6);
			}
			else
			{
				func_92(iParam0, 5);
			}
			func_91(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_32(1);
	}
	iVar0 = func_88(iParam0);
	bVar1 = func_123() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_124(0, 2);
		if (!bVar1 && bParam1)
		{
			func_125();
		}
	}
	else
	{
		func_33(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_126(iParam0);
	}
	else
	{
		Var2 = { func_127(-1876607090) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_20(32768))
		{
			Var4 = { func_127(773573510) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_89(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_128(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[76 /*74*/])->f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_128(iParam0) /*74*/])->f_8), true);
						}
					}
					else if ((func_128(iParam0) != 95 && func_128(iParam0) != 82) && !func_129(((*Global_1347702)[func_128(iParam0) /*49*/])->f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1347702)[func_128(iParam0) /*49*/])->f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_128(iParam0) /*74*/])->f_8), true);
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
		func_131(func_128(iParam0), iVar6, func_130());
	}
	else if (iVar0 == 8)
	{
		func_133(func_128(iParam0), iVar6, func_130(), func_132());
	}
	if (!func_89(iParam0) == 5 && !func_89(iParam0) == 6)
	{
		iVar9 = func_134(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_135(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_136(func_128(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_137((iVar10 - 20), 0, iVar10);
					iVar11 = func_137((iVar11 - 10), 0, iVar11);
				}
				func_93(1);
				func_94(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_94(45, 0, 1);
				break;
			case 8:
				iVar10 = func_138(func_128(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_137((iVar10 - 20), 0, iVar10);
					iVar11 = func_137((iVar11 - 10), 0, iVar11);
				}
				func_94(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				if (func_139(func_128(iParam0)))
				{
					func_140(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_94(120, 0, 1);
				break;
			case 2:
				func_94(120, 0, 1);
				break;
			case 6:
				func_94(func_142(func_141(iParam0)), 0, 1);
				break;
			case 5:
				func_94(120, 0, 1);
				break;
		}
	}
	func_107(iParam0, 1);
	func_122(iParam0, func_121());
	func_91(iParam0);
	if ((!func_89(iParam0) == 0 && bParam1) && func_123() == -1)
	{
		iVar12 = func_104(iParam0);
		if (iVar12 != -1)
		{
			func_105(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_106();
			if (iVar12 != -1)
			{
				func_105(0);
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
				switch (func_128(iParam0))
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
				if (func_143(func_128(iParam0)) && func_129(((*Global_1347702)[func_128(iParam0) /*49*/])->f_12, 4))
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
				if (func_128(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_144();
				}
				break;
			case 8:
				if (func_128(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_144();
				}
				break;
		}
	}
	if (!func_89(iParam0) == 5 && !func_89(iParam0) == 6)
	{
		if (bParam3)
		{
			func_92(iParam0, 6);
		}
		else
		{
			func_92(iParam0, 5);
		}
		func_91(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_128(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::MAP_DISCOVER_REGION(-1753910767);
						break;
					case 1:
						func_145();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_146(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_147(-1267972061);
						func_146(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_147(1619534881);
						func_146(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_147(-755457379);
						func_146(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_147(1015404643);
						func_146(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_147(-1724192342);
						func_146(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_147(1310680212);
						func_146(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_147(-566881549);
						func_146(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_147(-1753730528);
						func_146(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_147(147796381);
						func_146(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_147(-378547623);
						func_146(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_147(829545206);
						func_146(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_147(891318243);
						func_146(joaat("weapon_kit_camera"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_148();
						func_149(967523420);
						func_150();
						func_151();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_116(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131);
						break;
					case 15:
						func_146(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1231074654))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1231074654, true);
							func_152(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1880205078))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1880205078, true);
							func_152(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_153(304805134, 1, 1);
						if (!func_154(((*Global_1347702)[21 /*49*/])->f_15, 1))
						{
							func_21(((*Global_1347702)[21 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1347702)[21 /*49*/])->f_3)), iVar14);
						}
						break;
					case 20:
						func_155();
						break;
					case 26:
						func_156();
						break;
					case 17:
						func_157(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_158())
						{
							func_159(joaat("weapon_repeater_evans"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_160(-514575035, -1))
						{
							iVar15 = func_121();
							func_161(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_162(-514575035, iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_158())
						{
							func_159(joaat("weapon_revolver_lemat"));
						}
						break;
					case 34:
						if (func_158())
						{
							func_159(joaat("weapon_revolver_doubleaction_gambler"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_163();
						break;
					case 37:
						func_164();
						if (func_165())
						{
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(2116153146, iVar14);
						}
						break;
					case 38:
						func_166();
						break;
					case 43:
						func_167();
						break;
					case 44:
						if (!func_154(((*Global_1347702)[82 /*49*/])->f_15, 1))
						{
							func_21(((*Global_1347702)[82 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1347702)[82 /*49*/])->f_3)), iVar14);
						}
						if (!func_154(((*Global_1347702)[83 /*49*/])->f_15, 1))
						{
							func_21(((*Global_1347702)[83 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1347702)[83 /*49*/])->f_3)), iVar14);
						}
						break;
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						func_168();
						break;
					case 59:
						func_169();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_170();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						func_171();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1673898385))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1673898385, true);
							func_152(451, 0);
						}
						if (!func_172(-1992824800))
						{
							if (func_172(1520110311))
							{
								iVar16 = func_121();
								func_161(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_162(1937177603, iVar16, 1);
							}
						}
						if (func_173(4))
						{
							if (!func_174(684296857, 1, 0))
							{
								iVar17 = func_121();
								func_161(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_162(-1439688706, iVar17, 1);
							}
						}
						func_146(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_175(89200);
						func_175(2300);
						func_175(2300);
						break;
					case 68:
						func_176();
						break;
					case 76:
						if (Global_1425247->f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1347702)[108 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1347702)[69 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1347702)[70 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1347702)[7 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1347702)[22 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1347702)[23 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1347702)[65 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1835011)[7 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1835011)[8 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1835011)[36 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1835011)[48 /*74*/])->f_8)), iVar14);
						func_177();
						func_175(-139100);
						break;
					case 69:
						if (func_154(((*Global_1347702)[9 /*49*/])->f_15, 1))
						{
							func_175(-6000);
						}
						break;
					case 70:
						func_175(23400);
						func_175(1900);
						func_175(-15000);
						break;
					case 71:
						func_175(-5500);
						break;
				}
				break;
			case 8:
				switch (func_128(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -812886857);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444);
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411);
						break;
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -433459459);
						break;
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426);
						break;
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1851064008);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082);
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767);
						break;
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187);
						break;
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1595707554);
						break;
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516);
						break;
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 780151577);
						break;
					case 58:
						func_178();
						break;
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 727067922);
						break;
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						func_179();
						break;
					case 66:
						func_180();
						func_181();
						break;
					case 67:
						if (!func_182(6))
						{
							func_183(6);
						}
						if (!func_182(3))
						{
							func_183(3);
						}
						if (func_158())
						{
							func_159(joaat("weapon_pistol_m1899"));
						}
						break;
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1085773120);
						break;
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 753448360);
						break;
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833);
						break;
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 709011912);
						break;
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					case 120:
						MAP::MAP_DISCOVER_REGION(1720279629);
						break;
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239);
						break;
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 989551914);
						break;
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -480463506);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117);
						break;
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1841532568);
						break;
					case 9:
						if (func_154(((*Global_1835011)[69 /*74*/])->f_1, 1))
						{
							func_184(0);
							func_175(40500);
						}
						else
						{
							func_184(0);
							func_175(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_128(iParam0))
				{
					case 0:
						switch (func_141(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_185(iParam0);
		func_186();
		switch (iVar0)
		{
			case 1:
				switch (func_128(iParam0))
				{
					case 4:
						func_187(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_187(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_187(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_187(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_187(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_187(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_187(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_188(iParam0);
						func_187(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_187(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_187(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_174(-2046502963, 1, 0))
						{
							func_146(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_187(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_187(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_187(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_188(iParam0) == 0)
						{
							func_187(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_187(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_129(((*Global_1347702)[func_128(iParam0) /*49*/])->f_12, 536870912))
				{
					func_189(11, 1);
				}
				switch (func_128(iParam0))
				{
					case 109:
						func_187(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_189(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_187(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_187(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_187(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_187(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_190(0, 10, 11, 2116153146))
				{
					func_187(iParam0, func_188(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_190(0, 7, 11, -379687487))
				{
					func_187(iParam0, func_191(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_190(0, 8, 11, -1386089015))
				{
					func_187(iParam0, func_191(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_190(0, 11, 11, -1952009645))
				{
					func_187(iParam0, func_191(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_190(0, 12, 11, 2065895756))
				{
					func_187(iParam0, func_191(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_89(iParam0) == 0)
			{
				if (func_87(iParam0) == 0)
				{
				}
				else if (STATS::STATSTRACKER_IS_INITIALIZED(func_87(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_90(func_88(iParam0), func_87(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_128(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_193(func_192(Global_1879514->f_1));
						if (iVar0 == 8 && func_128(iParam0) == 58)
						{
							Global_1879514->f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (func_143(func_128(iParam0)) && func_129(((*Global_1347702)[func_128(iParam0) /*49*/])->f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			func_194(bParam2, iVar20);
		}
	}
	func_95(1);
	if ((bVar13 || func_144()) && (func_88(iParam0) == 1 || func_88(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_22(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (STATS::STATSTRACKER_IS_INITIALIZED(func_87(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_90(func_88(iParam0), func_87(iParam0), iVar0);
		if (func_20(32768))
		{
			iVar1 = func_88(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_190(0, 10, 11, 2116153146)))
			{
				Global_1898438 = MISC::GET_GAME_TIMER();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_24();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_101(iParam0))
	{
		func_16(iParam0, 0, 2);
	}
	else if (func_13(iParam0))
	{
		if (!func_89(iParam0) == 5 && !func_89(iParam0) == 6)
		{
			if (bParam1)
			{
				func_92(iParam0, 6);
			}
			else
			{
				func_92(iParam0, 5);
			}
			func_91(iParam0);
		}
	}
	switch (func_88(iParam0))
	{
		case 1:
			switch (func_128(iParam0))
			{
				case 12:
				case 19:
				case 20:
				case 24:
				case 25:
				case 28:
				case 29:
				case 34:
				case 53:
				case 57:
					Global_1879514->f_12 = 1;
					break;
				case 69:
				case 70:
				case 71:
				case 74:
				case 76:
					Global_1879514->f_14 = 1;
					break;
			}
			break;
		case 8:
			switch (func_128(iParam0))
			{
				case 37:
				case 63:
				case 94:
				case 116:
					Global_1879514->f_12 = 1;
					break;
				case 9:
					Global_1879514->f_14 = 1;
					break;
			}
			break;
	}
}

void func_23()
{
	if (STATS::CHAL_IS_GOAL_ACTIVE(-816321659, -1044347982))
	{
		switch (func_195())
		{
			case 1:
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(-85949609, 1);
				break;
			case 2:
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(-1718529554, 1);
				break;
			case 3:
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(1480231309, 1);
				break;
		}
	}
}

int func_24()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_196(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_197(iVar0))
	{
		if (Global_1879514->f_18)
		{
			return Global_1879514->f_19;
		}
		iVar1 = STATS::CHAL_MISSION_GET_NUM_GOALS(iVar0);
		iVar2 = STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(iVar0);
		if (iVar1 > 0)
		{
			iVar3 = ((100 * iVar2) / iVar1);
			if (iVar3 >= 100)
			{
				return 5;
			}
			else if (iVar3 >= 50)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
	}
	return 3;
}

void func_25()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;

	func_198(4112);
	func_199(6);
	vVar2 = { func_200(((*Global_2621440)[0 /*12065*/])->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_201(vVar2, uVar1, uVar0, 0);
	func_202(vVar2);
	Global_40.f_9.f_15 = func_203(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_26(int iParam0)
{
	if (func_123() != -1)
	{
		return;
	}
	func_198(32);
	if (iParam0 == 0)
	{
		func_198(16);
	}
	else if (iParam0 == 1)
	{
		func_198(8);
	}
	func_204();
	Global_43888 = 1;
}

struct<8> func_27(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "ALLY_DEAD_", 64);
	if (!func_58(iParam0))
	{
		return cVar0;
	}
	StringConCat(&cVar0, func_205(iParam0), 64);
	return cVar0;
}

struct<8> func_28(int iParam0)
{
	struct<8> Var0;

	if (!func_58(iParam0))
	{
		return Var0;
	}
	StringCopy(&Var0, func_205(iParam0), 64);
	StringConCat(&Var0, "_ABANDON", 64);
	return Var0;
}

int func_29(int iParam0, int iParam1)
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
	if (func_206(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_206(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_206(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_206(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_206(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_206(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return 0;
		}
	}
	if (func_206(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_206(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_30(int iParam0)
{
	switch (func_123())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

int func_31(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_203(vParam0, 1);
	if (iVar0 == func_207())
	{
		return 1;
	}
	return 0;
}

void func_32(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_34(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_99(Global_1935630, 4194304);
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

int func_33(bool bParam0)
{
	if (!bParam0 && func_208(373691918))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(752193127, bParam0, 0);
	return 1;
}

void func_34(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_35(var uParam0)
{
	*uParam0 = 234527101;
	uParam0->f_1 = -589165916;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_13 = 0;
	StringCopy(&(uParam0->f_18), "", 64);
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_37 = { 0f, 0f, 0f };
	uParam0->f_41 = 20f;
	uParam0->f_43 = 0;
	StringCopy(&(uParam0->f_52), "", 64);
	StringCopy(&(uParam0->f_60), "", 64);
	uParam0->f_12 = 0;
	if (func_77(uParam0->f_44))
	{
		func_78(&(uParam0->f_44), 1, 1);
	}
	if (func_209(&(uParam0->f_45)))
	{
		func_210(&(uParam0->f_45));
	}
}

int func_36(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	char cVar2[128];
	int iVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (!bParam4 && !uParam0->f_270)
	{
		if (!func_211(uParam0, sParam1, iParam2, bParam4, bParam5))
		{
			return 0;
		}
	}
	if (!uParam0->f_271)
	{
		iVar20 = uParam0->f_278;
		while (iVar20 <= (uParam0->f_277 - 1))
		{
			StringCopy(&cVar2, "", 64);
			uParam0->f_264.f_1 = 0;
			uParam0->f_264.f_3 = iVar20;
			if (func_212(uParam0, 0))
			{
				if (func_213(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_214(uParam0, 1, &iVar0))
					{
					}
					if (func_215(uParam0, 3, &cVar2))
					{
					}
					if (func_214(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_214(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_214(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_214(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_214(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 2 && uParam0->f_273 < 2)
						{
							if (!func_216(uParam0, &cVar2, uParam0->f_273))
							{
								*((*uParam0)[uParam0->f_273 /*16*/]) = { cVar2 };
								func_217((*uParam0)[uParam0->f_273 /*16*/], 1048576);
								uParam0->f_273++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 2 && uParam0->f_274 < 2)
						{
							*(uParam0->f_33[uParam0->f_274 /*16*/]) = { cVar2 };
							func_217(uParam0->f_33[uParam0->f_274 /*16*/], 1048576);
							uParam0->f_274++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 10 && uParam0->f_275 < 10)
						{
							*(uParam0->f_66[uParam0->f_275 /*16*/]) = { cVar2 };
							func_217(uParam0->f_66[uParam0->f_275 /*16*/], 1048576);
							if (!bVar19 && func_54(&cVar2, 4))
							{
								AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_66[uParam0->f_275 /*16*/]);
								bVar19 = true;
							}
							uParam0->f_275++;
						}
					}
					else if (iVar0 < 2 && uParam0->f_276 < 2)
					{
						if (!func_216(&(uParam0->f_227), &cVar2, uParam0->f_276))
						{
							*(uParam0->f_227[uParam0->f_276 /*16*/]) = { cVar2 };
							func_217(uParam0->f_227[uParam0->f_276 /*16*/], 1048576);
							uParam0->f_276++;
						}
					}
				}
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_278 = iVar20 + 1;
				uParam0->f_269 = 0;
				return 0;
			}
			iVar20++;
		}
		uParam0->f_271 = 1;
	}
	if (!func_37(uParam0) && uParam0->f_279 > 0)
	{
		iVar20 = uParam0->f_280;
		while (iVar20 <= (uParam0->f_279 - 1))
		{
			uParam0->f_264.f_1 = 0;
			uParam0->f_264.f_3 = iVar20;
			iVar22 = 0;
			if (func_212(uParam0, 12))
			{
				if (func_214(uParam0, 13, &iVar0))
				{
				}
				if (func_214(uParam0, 14, &iVar1))
				{
					iVar22 = iVar1;
				}
			}
			if (STREAMING::IS_MODEL_VALID(iVar22) && iVar22 != 0)
			{
				uParam0->f_260[iVar0] = iVar22;
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_280 = iVar20 + 1;
				uParam0->f_269 = 0;
				return 0;
			}
			iVar20++;
		}
	}
	uParam0->f_269 = 1;
	uParam0->f_278 = 0;
	uParam0->f_280 = 0;
	uParam0->f_271 = 0;
	uParam0->f_272 = 1;
	if (!bParam4)
	{
		func_218(uParam0);
	}
	return 1;
}

bool func_37(var uParam0)
{
	return uParam0->f_269;
}

int func_38(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 7:
			return 0;
		default:
			break;
	}
	return 1;
}

int func_39(var uParam0)
{
	if (iLocal_14 >= 8 && func_219(&Local_96) <= 15)
	{
		uParam0->f_14 = 2;
		StringCopy(&(uParam0->f_15), "CURU_FAIL_HRDDEAD", 24);
		AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FAIL");
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_22))
	{
		uParam0->f_14 = 4;
		StringCopy(&(uParam0->f_15), "CURU_FAIL_UNCDEAD", 24);
		AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FAIL");
		return 1;
	}
	if (func_220(iLocal_24))
	{
		uParam0->f_14 = 2;
		StringCopy(&(uParam0->f_15), "CURU_FAIL_HRSDEAD", 24);
		AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FAIL");
		return 1;
	}
	if (func_220(iLocal_23))
	{
		uParam0->f_14 = 2;
		StringCopy(&(uParam0->f_15), "CURU_FAIL_UHRSDEAD", 24);
		AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FAIL");
		return 1;
	}
	if (iLocal_14 <= 9)
	{
		if (func_221(Global_35, iLocal_22, 1, 1) >= 100f)
		{
			uParam0->f_14 = 5;
			StringCopy(&(uParam0->f_15), "CURU_FAIL_UNCLEFT", 24);
			AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FAIL");
			return 1;
		}
	}
	if (iLocal_14 >= 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_31) && !ENTITY::IS_ENTITY_DEAD(iLocal_31))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_31, Global_35, 1, 1))
			{
				uParam0->f_14 = 2;
				StringCopy(&(uParam0->f_15), "CURU_FAIL_CCAGGRO", 24);
				AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FAIL");
				return 1;
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_31) && ENTITY::IS_ENTITY_DEAD(iLocal_31))
		{
			uParam0->f_14 = 2;
			StringCopy(&(uParam0->f_15), "CURU_FAIL_CCAGGRO", 24);
			AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FAIL");
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_32) && !ENTITY::IS_ENTITY_DEAD(iLocal_32))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_32, Global_35, 1, 1))
			{
				uParam0->f_14 = 2;
				StringCopy(&(uParam0->f_15), "CURU_FAIL_CCAGGRO", 24);
				AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FAIL");
				return 1;
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_32) && ENTITY::IS_ENTITY_DEAD(iLocal_32))
		{
			uParam0->f_14 = 2;
			StringCopy(&(uParam0->f_15), "CURU_FAIL_CCAGGRO", 24);
			AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FAIL");
			return 1;
		}
		if (!func_222(Local_96.f_613, 0f, 0f, 0f))
		{
			if (func_223(Global_35, Local_96.f_613, 0) > 200f)
			{
				uParam0->f_14 = 2;
				StringCopy(&(uParam0->f_15), "CURU_FAIL_DIST", 24);
				AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FAIL");
				return 1;
			}
		}
		if (iLocal_14 == 10)
		{
			if (func_221(Global_35, iLocal_24, 1, 1) > 100f)
			{
				uParam0->f_14 = 2;
				StringCopy(&(uParam0->f_15), "CURU_FAIL_HRSA", 24);
				AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FAIL");
				return 1;
			}
		}
		if (iLocal_81 == 4)
		{
			uParam0->f_14 = 2;
			StringCopy(&(uParam0->f_15), "CURU_FAIL_CCAGGRO", 24);
			AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FAIL");
			return 1;
		}
	}
	return 0;
}

int func_40(var uParam0)
{
	if (TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID()))
	{
		uParam0->f_14 = 6;
		return 1;
	}
	if (!func_29(PLAYER::PLAYER_PED_ID(), 0))
	{
		uParam0->f_14 = 3;
		return 1;
	}
	if (!func_29(func_83(uParam0->f_2), 0))
	{
		uParam0->f_14 = 4;
		return 1;
	}
	return 0;
}

void func_41(bool bParam0, bool bParam1)
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
		func_224(0);
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

void func_42(var uParam0)
{
	func_225(3, &(uParam0->f_66));
}

void func_43(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_44(var uParam0)
{
}

void func_45(var uParam0)
{
	vector3 vVar0[24];
	vector3 vVar3[24];
	vector3 vVar6[24];
	vector3 vVar9[24];
	vector3 vVar12[24];
	vector3 vVar15[24];
	int iVar18;
	int iVar19;

	PLAYER::_0xC71D07C96946E263(PLAYER::PLAYER_ID(), iLocal_24);
	switch (iLocal_14)
	{
		case 0:
			func_226(uParam0);
			func_227(0);
			func_228();
			if (iLocal_49)
			{
				if (!func_229(64))
				{
					if (func_230("OBJ_CURU_MOUNT", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
					{
						func_231(64);
					}
				}
			}
			if (!func_232(16))
			{
				if (func_29(iLocal_24, 0))
				{
					StringCopy(&cVar0, "CAUNC_MOUNTUP", 24);
					if (func_233(&uLocal_1286, cVar0, 0, -1, 0, 0))
					{
						fLocal_1497 = func_221(Global_35, iLocal_24, 1, 1);
						func_234(7);
						func_235();
						func_236(16);
						func_237("OBJ_CURU_MOUNT");
						func_238(&uLocal_1494);
					}
				}
			}
			else if (!func_229(64))
			{
				StringCopy(&cVar3, "CAUNC_MOUNTUP", 24);
				if (!AUDIO::_0x1ECC76792F661CF5(&cVar3))
				{
					if (func_239(&uLocal_1494) > 6f)
					{
						if (func_221(Global_35, iLocal_24, 1, 1) >= (fLocal_1497 + 1f) || PED::IS_PED_STOPPED(Global_35))
						{
							if (func_230("OBJ_CURU_MOUNT", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
							{
								func_231(64);
							}
						}
						else if (func_221(Global_35, iLocal_24, 1, 1) < fLocal_1497)
						{
							fLocal_1497 = func_221(Global_35, iLocal_24, 1, 1);
						}
					}
					else if (!func_209(&uLocal_1494))
					{
					}
				}
				else
				{
					func_238(&uLocal_1494);
				}
				if (func_240("OBJ_CURU_MOUNT"))
				{
					func_231(64);
				}
			}
			if (!iLocal_47)
			{
				func_242(uParam0, func_241(0), func_241(1), 0, 1);
				iLocal_47 = 1;
			}
			if (func_243(Global_35, iLocal_24, 1))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("RUST02_START");
				_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
				func_63(7);
				func_244(4);
				AUDIO::_0x0D7FD6A55FD63AEF(14, 3, 1);
				iLocal_14 = 1;
			}
			break;
		case 1:
			func_227(0);
			func_245();
			func_246();
			if (!func_247(&(((*Global_1360165)[4 /*1157*/])->f_12), 8))
			{
				func_244(4);
			}
			if (!VOLUME::DOES_VOLUME_EXIST(iLocal_1272))
			{
				iLocal_1272 = VOLUME::_CREATE_VOLUME_BOX(vLocal_1273, vLocal_1276, vLocal_1279);
			}
			if (!func_232(8))
			{
				if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_22, true))
				{
					StringCopy(&cVar6, "CAUNC_RIDESTART", 24);
					if (func_233(&uLocal_1286, cVar6, 0, -1, 0, 0))
					{
						func_236(8);
						func_237("OBJ_CURU_TRAVEL");
						func_63(7);
						func_238(&uLocal_1494);
						fLocal_1497 = func_223(Global_35, uParam0->f_37, 1);
					}
				}
			}
			else
			{
				if (!func_229(1))
				{
					if (func_239(&uLocal_1494) > 10f)
					{
						if (func_223(Global_35, uParam0->f_37, 1) >= (fLocal_1497 + 30f))
						{
							func_230("OBJ_CURU_TRAVEL", 7500, 0, 1, 0, 0, -1, -1, 0);
							func_231(1);
						}
						else if (func_223(Global_35, uParam0->f_37, 1) < fLocal_1497)
						{
							fLocal_1497 = func_223(Global_35, uParam0->f_37, 1);
						}
					}
					if (func_240("OBJ_CURU_TRAVEL"))
					{
						func_231(1);
					}
				}
				func_226(uParam0);
			}
			if (func_223(Global_35, uParam0->f_37, 1) < 250f)
			{
				if (func_248() && func_249())
				{
				}
			}
			if (func_223(Global_35, uParam0->f_37, 1) < 150f)
			{
				if (((((func_250(0) && func_251()) && func_252()) && func_253()) && func_254()) && func_255())
				{
					func_256();
				}
			}
			if (iLocal_74 == 6)
			{
				func_242(uParam0, func_241(1), func_241(2), 1, 2);
				func_257(1, 1, 0);
				AUDIO::_0x660A8F876DF1D4F8(14);
				AUDIO::TRIGGER_MUSIC_EVENT("RUST02_ARRIVE");
				iLocal_14 = 2;
			}
			break;
		case 2:
			STREAMING::REQUEST_MODEL(joaat("a_c_cow"), false);
			func_258();
			if (((((func_250(0) && func_251()) && func_252()) && func_253()) && func_254()) && func_255())
			{
				if (!VOLUME::DOES_VOLUME_EXIST(iLocal_912))
				{
					iLocal_912 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1407.033f, -857.3352f, 67.32503f, 0f, 0f, 28.04611f, 54.39909f, 38.84146f, 18.36122f, "Arrival vol");
				}
				else if (!VOLUME::DOES_VOLUME_EXIST(iLocal_913))
				{
					iLocal_913 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1407.033f, -857.3352f, 67.32503f, 0f, 0f, 28.04611f, 62.09033f, 55.83051f, 18.36122f, "Arrival dismount vol");
				}
				else
				{
					func_210(&uLocal_1494);
					PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), iLocal_23);
					if (PED::IS_PED_ON_MOUNT(Global_35) && !func_259(Global_35, 1920417248))
					{
						func_237("OBJ_CURU_DISMOUNT");
						iLocal_14 = 3;
					}
					else
					{
						StringCopy(&cVar9, "CAUNC_WALKUP", 24);
						if (func_232(8192) || (!AUDIO::_0xA2CAC9DEF0195E6F(1) && func_233(&uLocal_1286, cVar9, 0, -1, 0, 0)))
						{
							func_237("OBJ_CURU_WALKUP");
							func_236(8192);
							iLocal_14 = 4;
						}
						else if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
						{
						}
					}
					func_260();
					func_261(1785985962, 1);
					func_261(283363467, 1);
					func_261(-22174689, 1);
					func_261(558917988, 1);
				}
			}
			break;
		case 3:
			func_256();
			func_262();
			func_263();
			func_245();
			func_264(&Local_96, iLocal_897);
			func_258();
			if (func_265(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_22, false, false), &uLocal_1387, 1112014848, 1106247680, 5f, 1084227584, 1082130432, 0, 0, 1, 1, 1))
			{
				func_63(7);
			}
			if ((((VOLUME::DOES_VOLUME_EXIST(iLocal_913) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_913, true, 0)) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && !func_259(Global_35, 501393341)) && !func_259(iLocal_22, 1920417248))
			{
				TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
			}
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
			{
				if (!func_209(&uLocal_1494))
				{
					func_238(&uLocal_1494);
				}
				else
				{
					if (func_266(&uLocal_1494) > 10f && !func_229(8192))
					{
						func_230("OBJ_CURU_DISMOUNT", 7500, 0, 1, 0, 0, -1, -1, 0);
						func_231(8192);
					}
					if (func_240("OBJ_CURU_DISMOUNT"))
					{
						func_231(8192);
						func_210(&uLocal_1494);
					}
				}
			}
			else
			{
				StringCopy(&cVar12, "CAUNC_WALKUP", 24);
				if (func_232(8192) || (!AUDIO::_0xA2CAC9DEF0195E6F(1) && func_233(&uLocal_1286, cVar12, 0, -1, 0, 0)))
				{
					if (func_267("OBJ_CURU_DISMOUNT", 1))
					{
						func_268("OBJ_CURU_DISMOUNT", 1);
						_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
					}
					func_236(8192);
					if (func_209(&uLocal_1494))
					{
						func_210(&uLocal_1494);
					}
					if (func_64(4, 0))
					{
						func_65(4);
					}
					PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), iLocal_23);
					func_237("OBJ_CURU_WALKUP");
					func_63(7);
					fLocal_1497 = func_223(Global_35, vLocal_929, 1);
					iLocal_14 = 4;
				}
			}
			if (func_269())
			{
				if (func_270(uParam0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FIGHT");
					bLocal_1285 = true;
					iLocal_14 = 7;
				}
			}
			break;
		case 4:
			func_256();
			func_262();
			func_263();
			func_271();
			func_264(&Local_96, iLocal_897);
			func_258();
			if (func_272(Global_35))
			{
				if (func_265(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_22, false, false), &uLocal_1387, 1112014848, 1106247680, 5f, 1084227584, 1082130432, 0, 0, 1, 1, 1))
				{
					func_63(7);
				}
			}
			if (VOLUME::DOES_VOLUME_EXIST(iLocal_912))
			{
				if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_912, true, 0) || func_221(Global_35, iLocal_27, 1, 1) < 20f) || iLocal_75 == 2)
				{
					StringCopy(&cVar15, "CAUNC_ARRIVE", 24);
					if (func_233(&uLocal_1286, cVar15, 0, -1, 0, 0))
					{
						iLocal_53 = MAP::BLIP_ADD_FOR_ENTITY(831283580, iLocal_27);
						MAP::BLIP_ADD_MODIFIER(iLocal_53, -662251075);
						iLocal_54 = MAP::BLIP_ADD_FOR_ENTITY(831283580, iLocal_28);
						MAP::BLIP_ADD_MODIFIER(iLocal_54, -662251075);
						if (MAP::DOES_BLIP_EXIST(iLocal_51))
						{
							MAP::REMOVE_BLIP(&iLocal_51);
						}
						if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
						{
							MAP::REMOVE_BLIP(&(uParam0->f_43));
						}
						TASK::OPEN_SEQUENCE_TASK(&iVar18);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_27, 1000, -1082130432, -1082130432, -1082130432);
						TASK::_0xF40A109B4B79A848(0, iLocal_27, 3000);
						TASK::CLOSE_SEQUENCE_TASK(iVar18);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_22, iVar18);
						iLocal_76 = 2;
						func_231(8388608);
						iLocal_14 = 6;
					}
				}
				else
				{
					if (!func_209(&uLocal_1494))
					{
						func_238(&uLocal_1494);
					}
					else
					{
						if ((func_266(&uLocal_1494) > 6f && !func_229(16384)) && func_223(Global_35, vLocal_929, 1) >= fLocal_1497)
						{
							func_230("OBJ_CURU_WALKUP", 7500, 0, 1, 0, 0, -1, -1, 0);
							func_231(16384);
						}
						else if (func_223(Global_35, vLocal_929, 1) < fLocal_1497)
						{
							fLocal_1497 = func_223(Global_35, vLocal_929, 1);
							func_238(&uLocal_1494);
						}
						if (func_240("OBJ_CURU_WALKUP"))
						{
							func_231(16384);
							func_210(&uLocal_1494);
						}
					}
					if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
					{
						func_237("OBJ_CURU_DISMOUNT");
						if (!MAP::DOES_BLIP_EXIST(iLocal_51))
						{
							MAP::REMOVE_BLIP(&iLocal_51);
						}
						iLocal_14 = 3;
					}
				}
			}
			if (func_269())
			{
				if (func_270(uParam0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FIGHT");
					bLocal_1285 = true;
					iLocal_14 = 7;
				}
			}
			break;
		case 6:
			func_273();
			func_262();
			func_263();
			func_256();
			func_274(uParam0);
			func_275();
			func_264(&Local_96, iLocal_897);
			func_258();
			func_276();
			if (func_269())
			{
				if (func_270(uParam0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FIGHT");
					bLocal_1285 = true;
					iLocal_14 = 7;
				}
			}
			if (iLocal_65 == 9)
			{
				if (func_277())
				{
					if (MAP::DOES_BLIP_EXIST(iLocal_50))
					{
						MAP::REMOVE_BLIP(&iLocal_50);
					}
					func_278(&Local_96);
					func_279(&Local_85);
					func_280(&(Local_85.f_5));
					func_280(&iLocal_84);
					func_9(4);
					func_238(&uLocal_1405);
					AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FIGHT_END");
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_920))
					{
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_920, true, 7.5f);
						OBJECT::SET_OBJECT_TARGETTABLE(iLocal_920, true);
					}
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_22, false, 0f);
					if (!MAP::DOES_BLIP_EXIST(iLocal_50))
					{
						iLocal_50 = MAP::BLIP_ADD_FOR_COORDS(203020899, 1399.87f, -846.98f, 65.6f);
					}
					func_237("OBJ_CURU_BREAKLOCK");
					iLocal_14 = 8;
				}
			}
			break;
		case 7:
			func_263();
			func_262();
			func_256();
			func_281();
			func_264(&Local_96, iLocal_897);
			func_258();
			func_276();
			if (iLocal_65 == 9)
			{
				if (func_277())
				{
					if (MAP::DOES_BLIP_EXIST(iLocal_50))
					{
						MAP::REMOVE_BLIP(&iLocal_50);
					}
					func_278(&Local_96);
					func_279(&Local_85);
					func_280(&(Local_85.f_5));
					func_280(&iLocal_84);
					func_9(4);
					func_238(&uLocal_1405);
					AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FIGHT_END");
					FIRE::STOP_FIRE_IN_RANGE(vLocal_921, 7.5f);
					if (func_229(512))
					{
						func_237("OBJ_CURU_GATHER");
						func_242(uParam0, func_241(4), func_241(5), 4, 5);
						iLocal_14 = 9;
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_920))
						{
							ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_920, true, 7.5f);
							OBJECT::SET_OBJECT_TARGETTABLE(iLocal_920, true);
						}
						func_242(uParam0, func_241(3), func_241(4), 3, 4);
						func_237("OBJ_CURU_BREAKLOCK");
						fLocal_1497 = func_221(Global_35, iLocal_920, 1, 1);
						iLocal_14 = 8;
					}
				}
			}
			break;
		case 8:
			func_263();
			func_262();
			func_226(uParam0);
			func_282();
			func_264(&Local_96, iLocal_897);
			func_258();
			func_276();
			if (func_229(32))
			{
				if (((func_283("CAUNC_IG8") || func_284("CAUNC_IG8")) || func_283("CAUNC_IG8_ALT")) || func_284("CAUNC_IG8_ALT"))
				{
					func_285("CAUNC_IG8", 0, 0);
				}
			}
			if (func_286())
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_50))
				{
					MAP::REMOVE_BLIP(&iLocal_50);
				}
				iVar19 = 0;
				while (iVar19 < 20)
				{
					if (!ENTITY::IS_ENTITY_DEAD(&(Local_96.f_2[iVar19])))
					{
						AUDIO::_0xFCDEC42B1C78B7F8(&(Local_96.f_2[iVar19]), "COW_SPOOKED");
					}
					iVar19++;
				}
				func_287(&Local_96, 0);
				func_288(&Local_96);
				if (AUDIO::_0x1ECC76792F661CF5("CAUNC_IG8_ALT"))
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION("CAUNC_IG8_ALT", 0, 0);
				}
				if (AUDIO::_0x1ECC76792F661CF5("CAUNC_IG8"))
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION("CAUNC_IG8", 0, 0);
				}
				if (func_289(iLocal_1158))
				{
					func_290(iLocal_1158, 1);
				}
				if (func_289(iLocal_1159))
				{
					func_290(iLocal_1159, 1);
				}
				func_237("OBJ_CURU_GATHER");
				func_238(&uLocal_1494);
				func_242(uParam0, func_241(4), func_241(5), 4, 5);
				iLocal_14 = 9;
			}
			else if (func_223(Global_35, vLocal_968, 1) <= 50f)
			{
				if (func_232(1))
				{
					if (!func_229(2))
					{
						if (!func_209(&uLocal_1411))
						{
							func_238(&uLocal_1411);
						}
						else if (func_239(&uLocal_1411) > 3f)
						{
							func_230("OBJ_CURU_BREAKLOCK", 7500, 0, 1, 0, 0, -1, -1, 0);
							func_231(2);
						}
					}
					if (!func_229(2) && func_240("OBJ_CURU_BREAKLOCK"))
					{
						func_231(2);
					}
				}
				if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_43));
				}
				if (!MAP::DOES_BLIP_EXIST(iLocal_50))
				{
					iLocal_50 = MAP::BLIP_ADD_FOR_COORDS(203020899, 1399.87f, -846.98f, 65.6f);
				}
			}
			break;
		case 9:
			func_263();
			func_256();
			func_262();
			func_291();
			func_292();
			func_258();
			if (func_223(Global_35, vLocal_968, 1) <= 100f)
			{
				func_262();
			}
			if (!func_229(4))
			{
				if (!func_209(&uLocal_1494))
				{
					func_238(&uLocal_1494);
				}
				else
				{
					if (func_239(&uLocal_1494) > 6f && (!func_293(Global_35, iLocal_897, 1, 0) || PED::IS_PED_STOPPED(Global_35)))
					{
						func_230("OBJ_CURU_GATHER", 7500, 0, 1, 0, 0, -1, -1, 0);
						func_231(4);
					}
					if (func_240("OBJ_CURU_GATHER"))
					{
						func_231(4);
					}
				}
			}
			if (!func_229(268435456))
			{
				if (!func_294(&Local_96, &iLocal_897) || func_295(&Local_96))
				{
					func_237("OBJ_CURU_WAITCOWS");
					func_231(268435456);
					func_231(4);
				}
			}
			if (func_296(&Local_96, iLocal_897))
			{
				func_297(&Local_96, 1);
				func_298(&Local_96, 1114636288);
				if (MAP::DOES_BLIP_EXIST(iLocal_50))
				{
					MAP::REMOVE_BLIP(&iLocal_50);
				}
				func_238(&uLocal_1494);
				AUDIO::TRIGGER_MUSIC_EVENT("RUST02_HERD");
				iLocal_14 = 10;
			}
			break;
		case 10:
			func_263();
			func_256();
			func_262();
			func_292();
			func_291();
			func_258();
			if (!VOLUME::DOES_VOLUME_EXIST(iLocal_1167))
			{
				iLocal_1167 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(713.6477f, -853.3419f, 55.96649f, 0f, 0f, 0f, 34.00351f, 32.42405f, 9.158979f, "Goal ambient blocker");
			}
			else if (!iLocal_1166)
			{
				POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_1167, 224, 0, 1140376127, -1, -1, 0);
				POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_1167, 224, 0, 1140376127, -1, -1, 0);
				iLocal_1166 = 1;
			}
			if (!func_243(Global_35, iLocal_24, 1) && !func_299(&Local_96))
			{
				if (!func_300(7))
				{
					func_234(7);
					func_237("OBJ_CURU_MOUNT");
					func_230("OBJ_CURU_MOUNT", 7500, 0, 1, 0, 0, -1, -1, 0);
					func_301(&iLocal_50);
				}
			}
			else if (!MAP::DOES_BLIP_EXIST(iLocal_50))
			{
				iLocal_50 = MAP::BLIP_ADD_FOR_COORDS(203020899, vLocal_971);
				func_63(7);
				func_268("OBJ_CURU_MOUNT", 1);
				func_237("OBJ_CURU_HERD");
			}
			if (func_302())
			{
				if (func_303(4, 2, "pl_OpenGate"))
				{
					if (!func_304())
					{
					}
				}
				if (func_305(iLocal_31, 0, &uLocal_1226, &iLocal_1254, 0, 0))
				{
					iLocal_81 = 4;
				}
			}
			if (!func_229(8) && func_243(Global_35, iLocal_24, 1))
			{
				if (!func_209(&uLocal_1494))
				{
					func_238(&uLocal_1494);
				}
				else if (func_239(&uLocal_1494) > 2f)
				{
					if (func_230("OBJ_CURU_HERD", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
					{
						func_231(8);
					}
				}
				if (func_240("OBJ_CURU_HERD"))
				{
					func_210(&uLocal_1494);
					func_231(8);
				}
			}
			if (func_299(&Local_96) || MISC::GET_DISTANCE_BETWEEN_COORDS(func_306(&Local_96), vLocal_971, true) <= 40f)
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_50))
				{
					MAP::REMOVE_BLIP(&iLocal_50);
				}
				AUDIO::TRIGGER_MUSIC_EVENT("RUST02_END");
				ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(iLocal_24, false);
				func_307(&Local_96);
				func_242(uParam0, func_241(5), func_241(6), 5, 6);
				iLocal_14 = 11;
			}
			if (func_308(&Local_96))
			{
				iLocal_14 = 12;
			}
			break;
		case 11:
			func_227(0);
			func_292();
			func_258();
			PAD::DISABLE_CONTROL_ACTION(0, -455946723, false);
			func_309(Global_35, vLocal_1039, 1, 1112014848, 1106247680, 10f, 5f, 1, 1, 1, 0);
			if (func_305(iLocal_31, 0, &uLocal_1226, &iLocal_1254, 0, 0))
			{
				iLocal_81 = 4;
			}
			if (func_308(&Local_96))
			{
				if (func_310())
				{
					func_311(&Local_96, Local_96.f_444);
					if (func_29(iLocal_22, 0) && PED::IS_PED_IN_GROUP(iLocal_22))
					{
						func_72(4);
						PED::REMOVE_PED_FROM_GROUP(iLocal_22);
					}
					iLocal_14 = 12;
				}
			}
			break;
		case 12:
			func_227(0);
			func_258();
			PAD::DISABLE_CONTROL_ACTION(0, -455946723, false);
			if (func_312())
			{
			}
			break;
		case 13:
			break;
	}
}

int func_46(var uParam0)
{
	if (func_8(&(uParam0->f_9), 4))
	{
		if (!func_313(uParam0))
		{
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_52)))
	{
		if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_52)))
		{
			HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_52));
		}
	}
	return 1;
}

int func_47(var uParam0, int iParam1)
{
	if ((*uParam0 && iParam1) != 0)
	{
		return 1;
	}
	return 0;
}

void func_48(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

int func_49(var uParam0)
{
	int iVar0;
	char* sVar1;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_315(&(uParam0->f_3), func_314(iVar0)))
		{
			if (func_316(iVar0))
			{
				if (!func_10(iVar0))
				{
					func_317(iVar0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					return 0;
				}
				if (((!func_64(iVar0, 0) && uParam0->f_1 != -103573613) && uParam0->f_1 != 194099983) && uParam0->f_1 != 2038046186)
				{
					func_318(iVar0, 0);
					AUDIO::STOP_PED_SPEAKING(func_83(iVar0), true);
				}
			}
			else if (!func_10(iVar0))
			{
				func_317(iVar0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				return 0;
			}
		}
		iVar0++;
	}
	if (!func_319(uParam0))
	{
		return 0;
	}
	func_320(uParam0);
	if (func_8(&(uParam0->f_9), 128))
	{
		if (!func_321(uParam0))
		{
			return 0;
		}
	}
	sVar1 = func_114(uParam0->f_1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		MISC::_0x1096603B519C905F(sVar1);
	}
	if (func_322())
	{
		func_323(1);
	}
	func_324(64);
	func_32(1);
	func_99(Global_1935630, 256);
	if (func_29(Global_35, 0))
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	}
	if (!func_20(32768))
	{
		func_325(Global_36, ENTITY::GET_ENTITY_HEADING(Global_35));
	}
	return 1;
}

int func_50()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_51(var uParam0)
{
	if (iLocal_81 == 8)
	{
		func_261(iLocal_1160, 1);
		func_261(iLocal_1161, 1);
		func_326();
		Global_1879514->f_1 = uParam0->f_5;
		func_327("JRUST", 0);
		return 1;
	}
	return 0;
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case 907027518:
			return 395864095;
		case 234527101:
			return -848293915;
		case 1784895540:
			return 337593120;
		case -1511391406:
			return 1459000719;
		case 654481153:
			return 70208796;
		case -1215120894:
			return -424258227;
		case 931703394:
			return 497820992;
		case 1193949598:
			return 384487969;
		case 754620122:
			return -1911358023;
		case -2036347356:
			return 1238571818;
		case -1341684320:
			return -448585888;
		case -919476462:
			return 1761188575;
		case -1670940721:
			return 189861409;
		case 380107708:
			return -1481840534;
		case -1700356309:
			return 1108319169;
		case 1523333387:
			return -414878571;
		case 1744128959:
			return -363271663;
		case -1567081107:
			return -1084190204;
		case -1739349092:
			return -667426721;
		case -301635006:
			return 309704192;
		case 565221344:
			return 1315551623;
		default:
			break;
	}
	return -848293915;
}

int func_53(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1911358023:
			return 8;
		case -1481840534:
			return 13;
		case -1084190204:
			return 17;
		case -848293915:
			return 1;
		case -667426721:
			return 18;
		case -448585888:
			return 10;
		case -424258227:
			return 5;
		case -414878571:
			return 15;
		case -363271663:
			return 16;
		case 70208796:
			return 4;
		case 189861409:
			return 12;
		case 309704192:
			return 19;
		case 337593120:
			return 2;
		case 384487969:
			return 7;
		case 395864095:
			return 0;
		case 497820992:
			return 6;
		case 1108319169:
			return 14;
		case 1238571818:
			return 9;
		case 1315551623:
			return 20;
		case 1459000719:
			return 3;
		case 1761188575:
			return 11;
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

bool func_54(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

int func_55(var uParam0, var uParam1, int iParam2)
{
	if (func_54(uParam1, 1))
	{
		return 0;
	}
	switch (func_328(uParam1))
	{
		case 0:
			return iParam2 >= 0;
		case 1:
			return uParam1->f_11 == iParam2;
		case 3:
			return uParam0->f_14 == 1;
		case 2:
			return uParam0->f_14 == 2;
	}
	return 0;
}

int func_56(char* sParam0, bool bParam1)
{
	if (func_54(sParam0, 1))
	{
		return 0;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		AUDIO::PREPARE_MUSIC_EVENT(sParam0);
		func_217(sParam0, 1);
		return 1;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_217(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_217(sParam0, 1);
			return 0;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_217(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_217(sParam0, 1);
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
		func_217(sParam0, 1);
		return 1;
	}
	func_217(sParam0, 1);
	return 0;
}

void func_57(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_66)
	{
		if ((func_54(uParam0->f_66[iVar0 /*16*/], 1048576) && func_54(uParam0->f_66[iVar0 /*16*/], 4)) && !func_54(uParam0->f_66[iVar0 /*16*/], 1))
		{
			AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_66[iVar0 /*16*/]);
			return;
		}
		iVar0++;
	}
}

int func_58(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

void func_59(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_329(iParam0))
		{
			return;
		}
	}
	func_330(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_60(var uParam0, int iParam1)
{
	if (iParam1 || !func_209(uParam0))
	{
		func_238(uParam0);
	}
}

void func_61()
{
	HUD::_TEXT_BLOCK_DELETE("CURU");
	HUD::_TEXT_BLOCK_DELETE("CURUAUD");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(829415368);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_40);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_41);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_42);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_43);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_44);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_1517);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_1519);
}

void func_62(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;

	if (!func_154(((*Global_1835011)[14 /*74*/])->f_1, 1))
	{
		func_331(559);
		func_331(560);
		func_331(562);
		func_331(564);
		func_331(565);
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_2[iVar0])))
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_2[iVar0])))
			{
				if (FLOCK::_0x8D913E493BAFE0A3(*uParam0) && FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, &(uParam0->f_2[iVar0])))
				{
					FLOCK::_0x408D1149C5E39C1E(*uParam0, &(uParam0->f_2[iVar0]));
				}
				if (&uParam0->f_23[iVar0] != 14)
				{
					if (!bParam1)
					{
						if (!func_259(&(uParam0->f_2[iVar0]), 1139527981))
						{
							TASK::TASK_ANIMAL_UNALERTED(&(uParam0->f_2[iVar0]), -1, 0, 1, 1);
						}
					}
					else
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(&(uParam0->f_2[iVar0]), Global_35, 4, 0, -1082130432, -1, 0);
					}
				}
				PED::SET_PED_KEEP_TASK(&(uParam0->f_2[iVar0]), true);
			}
			func_332(&(uParam0->f_2[iVar0]), 1088421888, 1, 0);
			sVar1 = func_333(uParam0);
			PED::_0xFCA8FB9E15FA80D3(&(uParam0->f_2[iVar0]), MISC::GET_HASH_KEY(sVar1));
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0->f_2[iVar0]);
		}
		uParam0->f_23[iVar0] = 3;
		func_301(uParam0->f_358[iVar0]);
		iVar0++;
	}
	if (PED::DOES_GROUP_EXIST(uParam0->f_380))
	{
		PED::REMOVE_GROUP(uParam0->f_380);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_444))
	{
		POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_444);
		POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_444);
		VOLUME::DELETE_VOLUME(uParam0->f_444);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_446))
	{
		POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_446);
		VOLUME::DELETE_VOLUME(uParam0->f_446);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_445))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_445);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_694))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_694);
	}
	func_334(uParam0);
	func_335(uParam0);
	MISC::_0xFC6ECB9170145ECE();
	if (HUD::TEXT_BLOCK_IS_LOADED("HERDAUD"))
	{
		HUD::_TEXT_BLOCK_DELETE("HERDAUD");
	}
	if (HUD::TEXT_BLOCK_IS_LOADED("RUST"))
	{
		HUD::_TEXT_BLOCK_DELETE("RUST");
	}
	if (!FLOCK::_0x8D913E493BAFE0A3(*uParam0))
	{
		return;
	}
	FLOCK::_0x67A43EA3F6FE0076(*uParam0);
	uParam0->f_189 = 0;
	FLOCK::_0xE0961AED72642B80(*uParam0);
}

void func_63(int iParam0)
{
	iParam0 = func_336(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_337(iParam0, 32);
	func_235();
}

bool func_64(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_83(iParam0);
	if (bParam1)
	{
		if (!func_29(iVar0, 0))
		{
			return false;
		}
	}
	return PED::IS_PED_GROUP_MEMBER(iVar0, func_50(), 1);
}

void func_65(int iParam0)
{
	int iVar0;

	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!func_58(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_IN_GROUP(iVar0))
	{
		return;
	}
	if (PED::GET_PED_GROUP_INDEX(iVar0) != PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	if (PED::_0x917760CFE7A0E0F1(iVar0))
	{
		COMPANION::_0xD747979C053EFA7A(func_50());
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 279, false);
	PED::REMOVE_PED_FROM_GROUP(iVar0);
	func_338(iParam0, 0, 0);
}

void func_66(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_67(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

bool func_68(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

int func_69(int iParam0, int iParam1)
{
	if (func_123() != -1)
	{
		return 0;
	}
	if (!func_339(iParam0))
	{
		return 0;
	}
	if (!func_340(iParam0) && iParam1)
	{
		return 0;
	}
	return func_341(iParam0, 1);
}

void func_70(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_339(iParam0))
	{
		return;
	}
	if (!func_341(iParam0, 1))
	{
		return;
	}
	if (!func_341(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_340(iParam0)) && func_342(iParam0))
	{
		return;
	}
	func_343(iParam0, 1);
	func_344(iParam0);
	if (func_346(func_345(iParam0)))
	{
		iVar0 = func_347(iParam0);
		if (!_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(iVar0))
		{
			return;
		}
		_NAMESPACE48::_0xBB68908CD11AEBDC(iVar0);
		_NAMESPACE48::_0xB65E7F733956CF25(iVar0);
		if (iParam2 && !_NAMESPACE48::IS_PERSISTENT_CHARACTER_DEAD(iVar0))
		{
			_NAMESPACE48::RETASK_PERSISTENT_CHARACTER(iVar0);
		}
		iVar1 = _NAMESPACE48::GET_PERSCHAR_PED_INDEX(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			_NAMESPACE48::FORCE_DESPAWN_PERSCHAR(iVar0);
		}
		func_343(iParam0, 16);
	}
	if (func_341(iParam0, 128) && !bParam3)
	{
		func_348(iParam0, 0);
	}
}

void func_71()
{
	func_343(756, 32);
	if (func_349(756))
	{
	}
	func_343(757, 32);
	if (func_349(757))
	{
	}
	func_343(758, 32);
	if (func_349(758))
	{
	}
	func_343(762, 32);
	if (func_349(762))
	{
	}
	func_343(759, 32);
	if (func_349(759))
	{
	}
	func_343(761, 32);
	if (func_349(761))
	{
	}
	func_343(922, 32);
	if (func_349(922))
	{
	}
	func_343(923, 32);
	if (func_349(923))
	{
	}
	func_343(936, 32);
	if (func_349(936))
	{
	}
	func_343(937, 32);
	if (func_349(937))
	{
	}
}

void func_72(int iParam0)
{
	int iVar0;
	struct<15> Var1;

	if (!func_58(iParam0))
	{
		return;
	}
	if (!func_64(iParam0, 0))
	{
	}
	func_65(iParam0);
	Global_1359489->f_15 = func_350(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			(*Global_1359489)[iVar0] = -1;
		}
		iVar0++;
	}
	func_351();
	func_352(iParam0, 32, 1);
	if (func_29(Global_1360165[iParam0 /*1157*/], 0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, false);
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, false);
		Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		Var1.f_12 = 8;
		Var1.f_3 = Global_1360165[iParam0 /*1157*/];
		Var1.f_7 = func_353();
		Var1.f_8 = 0;
		Var1.f_11 = 10;
		Var1.f_14 = Global_1360165[iParam0 /*1157*/];
		MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	}
}

void func_73(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_58(iParam0))
	{
		return;
	}
	if (func_82(iParam0))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_129 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_59(iParam0, 56, 1);
		func_60(&(Global_1359489->f_40), 1);
	}
	func_354(iParam0, 0);
	func_81(iParam0, 4, 0);
	func_9(iParam0);
	func_355(iParam0);
	func_352(iParam0, 37, 1);
	bVar0 = func_29(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_356(iParam0, 0);
	bVar2 = _NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_357(iParam0, 64, 1))
	{
		func_352(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_352(iParam0, 33, 1);
		func_352(iParam0, 34, 1);
		func_358(iParam0, 1056964608, -1, 1061158912);
		func_359(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_59(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_59(iParam0, 35, 1);
			if (bParam8)
			{
				func_59(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_360(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		}
		if (bVar2)
		{
			_NAMESPACE48::_0xBB68908CD11AEBDC(iVar1);
		}
		func_352(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_59(iParam0, 33, 1);
		func_359(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_60(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_210(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
		}
		if (bParam9)
		{
			func_59(iParam0, 34, 1);
		}
	}
	if (iParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_361(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_357(iParam0, 45, 1))
	{
		func_352(iParam0, 45, 1);
	}
	func_362(iParam0, 16, 1);
	func_352(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_29(func_363(iParam0), 0))
		{
			func_75(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

int func_74(int iParam0)
{
	if (!func_329(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == ((*Global_1360165)[iParam0 /*1157*/])->f_128)
	{
		return 0;
	}
	return 1;
}

void func_75(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_329(iParam1))
	{
		return;
	}
	iVar0 = func_363(iParam1);
	if (func_74(iParam1))
	{
		if (!func_364(iParam1))
		{
			return;
		}
	}
	func_352(iParam1, 39, 1);
	func_365(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_365(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_365(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_59(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_366(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_76(int iParam0, bool bParam1)
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
	if (!func_367(iParam0))
	{
		return;
	}
	iVar0 = func_368(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_63(iVar0);
	func_369(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_370(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_371(iVar0))
		{
			return;
		}
	}
	func_372(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && func_123() == -1)
	{
		if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

bool func_77(int iParam0)
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

void func_78(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_77(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_373(*iParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_374(iVar0);
	*iParam0 = 0;
}

void func_79()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 24)
	{
		ENTITY::REMOVE_FORCED_OBJECT(*(vLocal_1042[iVar0 /*3*/]), 2.5f, func_375(iVar0));
		iVar0++;
	}
}

void func_80()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_1140[iVar0])))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uLocal_1140[iVar0]);
		}
		iVar0++;
	}
}

void func_81(int iParam0, int iParam1, bool bParam2)
{
	if (!func_329(iParam0))
	{
		return;
	}
	func_376(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

bool func_82(int iParam0)
{
	return func_377(iParam0, 16, 1);
}

int func_83(int iParam0)
{
	if (!func_329(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

int func_84(int iParam0)
{
	if (!func_85(iParam0))
	{
		return -1;
	}
	return func_89(iParam0);
}

bool func_85(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_86(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_87(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

int func_88(int iParam0)
{
	if (!func_85(iParam0))
	{
		return 0;
	}
	return func_379(func_378(iParam0));
}

int func_89(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_380(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

void func_90(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_123() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_91(int iParam0)
{
	return func_382(func_381(iParam0));
}

void func_92(int iParam0, int iParam1)
{
	if (!func_85(iParam0))
	{
		return;
	}
	func_383(iParam0, iParam1);
}

void func_93(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 64;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 64);
	}
}

void func_94(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_4)
	{
		func_384(iParam0, iParam1, bParam2);
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

void func_95(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

bool func_96(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_97()
{
	return Global_1572864->f_12;
}

void func_98(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_99(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_100(bool bParam0)
{
	int iVar0;
	struct<16> Var1;

	if (func_385(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_386();
	Var1.f_3.f_3 = iVar0;
	if ((!func_387(Global_1347343->f_2) && !func_96(Global_1347343->f_11, 64)) || func_20(32768))
	{
		Var1.f_7 = func_388();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_96(Global_1347343->f_11, 1024) && !func_20(32768))
	{
		Var1.f_11 = func_389();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_96(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_390();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_391(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_392(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !ENTITY::IS_ENTITY_ATTACHED(Global_35))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
	}
	func_43(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_43(&(Global_1347343->f_11), 1048576);
	}
	CAM::_0x16E9ABDD34DDD931();
}

int func_101(int iParam0)
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
		iVar0 = func_89(iParam0);
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

int func_102(int iParam0, bool bParam1, int iParam2)
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
		if (func_393())
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
		iVar0 = func_128(&(Global_1898164->f_1[0 /*5*/]));
		if (func_143(iVar0) && func_129(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_85(&(Global_1898164->f_1[0 /*5*/])))
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

bool func_103(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_104(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_88(iParam0))
	{
		case 1:
			iVar0 = func_128(iParam0);
			return func_394(iVar0);
		case 8:
			iVar1 = func_128(iParam0);
			if (func_129(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				return func_395(iVar1);
			}
			break;
	}
	return -1;
}

void func_105(bool bParam0)
{
	int iVar0;

	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_123() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_396(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_397();
		Global_1898077->f_9 = func_398(Global_1894899->f_2);
		func_399(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_106()
{
	if (!func_154(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_154(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_154(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_154(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_154(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_154(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_154(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_107(int iParam0, bool bParam1)
{
	if (func_123() != -1)
	{
		return;
	}
	if (func_86(0) != iParam0)
	{
		return;
	}
	if (func_400(iParam0))
	{
		if (bParam1)
		{
			func_401(-525676072);
		}
		else
		{
			func_402(-525676072);
		}
	}
}

void func_108(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_109(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_110(bool bParam0)
{
	Global_1572864->f_14 = bParam0;
	if (bParam0)
	{
		func_112(1);
	}
}

void func_111(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_112(0);
	}
}

void func_112(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case -1891229662:
		case -589165916:
		case -103573613:
		case 194099983:
		case 673012160:
		case 2038046186:
			return 0;
		default:
			break;
	}
	return 1;
}

char* func_114(int iParam0)
{
	switch (iParam0)
	{
		case -589165916:
			return "";
		case -1894360593:
			return "CAHT02";
		case 581819093:
			return "CAFS01";
		case 687859577:
			return "CAFS02";
		case -103573613:
			return "CAFF01";
		case 1202375449:
			return "CAHT06";
		case 2038046186:
			return "CADM01";
		case -839878969:
			return "CACR02";
		case -360730635:
			return "CACR03";
		case -1891229662:
			return "CABR01";
		case -668333238:
			return "CACR01";
		case 99378894:
			return "CACR04";
		case 673012160:
			return "CARS02";
		case -1220302226:
			return "PRHM6";
		default:
			break;
	}
	return "";
}

char* func_115(int iParam0)
{
	switch (iParam0)
	{
		case 907027518:
			return "ACT_ANY_LABEL";
		case 234527101:
			return "ACT_NONE_LABEL";
		case 1784895540:
			return "ACT_HUNTING_LABEL";
		case -1511391406:
			return "ACT_FFF_CAMP_LABEL";
		case 654481153:
			return "ACT_FISHING_LABEL";
		case -1215120894:
			return "ACT_KIDNAPPING_LABEL";
		case 931703394:
			return "ACT_DRINKSHOOT_CAMP_LABEL";
		case 1193949598:
			return "ACT_SALOON_LABEL";
		case 754620122:
			return "ACT_RUSTLING_LABEL";
		case -2036347356:
			return "ACT_POKER_LABEL";
		case -1341684320:
			return "ACT_POKER_CAMP_LABEL";
		case -919476462:
			return "ACT_COACH_LABEL";
		case -1670940721:
			return "ACT_BANK_LABEL";
		case 380107708:
			return "ACT_TRAIN_LABEL";
		case 565221344:
			return "ACT_HOMEROB_LABEL";
		case -1700356309:
			return "ACT_BLACKJACK_LABEL";
		case 1523333387:
			return "ACT_CRAPS_LABEL";
		case 1744128959:
			return "ACT_HIDEOUT_LABEL";
		case -1567081107:
			return "ACT_DOMINOES_CAMP_LABEL";
		case -1739349092:
			return "ACT_RETURN_LABEL";
		case -301635006:
			return "ACT_MISSION_LABEL";
		default:
			break;
	}
	return "ACT_NONE_LABEL";
}

char* func_116(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		case 1:
			return "COMP_JOHN";
		case 2:
			return "COMP_JAVIER";
		case 3:
			return "COMP_BILL";
		case 4:
			return "COMP_UNCLE";
		case 5:
			return "COMP_HOSEA";
		case 6:
			return "COMP_MICAH";
		case 7:
			return "COMP_CHARLES";
		case 8:
			return "COMP_SEAN";
		case 9:
			return "COMP_LENNY";
		case 10:
			return "COMP_KIERAN";
		case 23:
			return "COMP_TRELAWNY";
		case 17:
			return "COMP_PEARSON";
		case 18:
			return "COMP_STRAUSS";
		case 13:
			return "COMP_ABIGAIL";
		case 14:
			return "COMP_JACK";
		case 16:
			return "COMP_MOLLY_OSHEA";
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		case 15:
			return "COMP_MARY_BETH";
		case 20:
			return "COMP_KAREN";
		case 22:
			return "COMP_TILLY";
		case 11:
			return "COMP_SADIE";
		case 24:
			return "COMP_CLEET";
		case 25:
			return "COMP_JOE";
		case 26:
			return "COMP_EAGLE_FLIES";
		case 12:
			if ((func_154(((*Global_1835011)[59 /*74*/])->f_1, 1) || func_154(((*Global_1347702)[1 /*49*/])->f_15, 1)) || func_13(((*Global_1347702)[1 /*49*/])->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_403(403634348, 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case -1894360593:
			return -1840581970;
		case 1202375449:
			return 1095369072;
		case 581819093:
			return -2070575365;
		case 687859577:
			return 1347299165;
		case -839878969:
			return 479371012;
		case -360730635:
			return -234019213;
		case -668333238:
			return 1087917139;
		case 99378894:
			return -454595750;
		case -1891229662:
			return 835736364;
		case -1220302226:
			return 780943699;
		case 673012160:
			return -611970161;
		default:
			break;
	}
	return -1;
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 1784895540:
			return 500148876;
		case 654481153:
			return -1575595762;
		case -2036347356:
			return 1243830185;
		case -1341684320:
			return 1243830185;
		case -1567081107:
			return -1650465405;
		case -919476462:
			return -729441538;
		case -1670940721:
			return 623155783;
		case 754620122:
			return 423351566;
		case -1739349092:
			return -1606321000;
		case -1511391406:
			return 1974815632;
		case 565221344:
			return 444204045;
		default:
			break;
	}
	return 0;
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case -1894360593:
		case 1202375449:
			return -2142998877;
		case 581819093:
		case 687859577:
			return -1289485729;
		case -839878969:
		case -668333238:
		case -360730635:
		case 99378894:
			return -534080567;
		case -1891229662:
			return -583510864;
		case -1220302226:
			return 372620435;
		case 673012160:
			return 864008392;
		default:
			break;
	}
	return -1;
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case -1894360593:
		case -1891229662:
		case -839878969:
		case -668333238:
		case -360730635:
		case 99378894:
		case 581819093:
		case 673012160:
		case 687859577:
		case 1202375449:
			return -1524039902;
		case -1220302226:
			return -2029665572;
		default:
			break;
	}
	return -1;
}

int func_121()
{
	return &Global_1899515;
}

void func_122(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_6 = uParam1;
}

int func_123()
{
	return Global_1572887->f_12;
}

int func_124(bool bParam0, int iParam1)
{
	int iVar0;

	if (!bParam0 && func_208(373691918))
	{
		return 0;
	}
	iVar0 = 0;
	if (LAW::_0x76CF93D4B416B288(752193127) < 2)
	{
		iVar0 = (LAW::_0x76CF93D4B416B288(752193127) + iParam1);
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	LAW::_0xF19706B1F8FFA88F(752193127, iVar0);
	func_33(bParam0);
	return 1;
}

void func_125()
{
	struct<15> Var0;
	int iVar17;
	int iVar18;

	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_58(iVar17))
		{
			iVar18 = func_83(iVar17);
			if (ENTITY::DOES_ENTITY_EXIST(iVar18))
			{
				Var0.f_14 = iVar18;
				Var0.f_3 = iVar18;
				MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489->f_58 = -15;
	func_210(&(Global_1359489->f_55));
	if (func_403(1777191912, 1))
	{
		func_404(1777191912, 1, 0);
	}
}

void func_126(int iParam0)
{
	if (!func_85(iParam0))
	{
		return;
	}
	func_406(iParam0, (func_405(iParam0) + BUILTIN::SHIFT_LEFT(1, 16)));
}

struct<2> func_127(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_128(int iParam0)
{
	if (!func_85(iParam0))
	{
		return -1;
	}
	return func_407(func_378(iParam0));
}

bool func_129(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_130()
{
	return func_408() > 0;
}

void func_131(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 67:
			func_409(-1032423150, iParam1);
			break;
		case 18:
			func_409(294066959, iParam1);
			func_409(-1925639563, iParam1);
			func_409(-378582304, iParam1);
			func_409(-338306437, iParam1);
			break;
		case 20:
			func_409(437270255, iParam1);
			break;
		case 2:
			func_409(-304000413, iParam1);
			func_409(-533612796, iParam1);
			func_409(48036954, iParam1);
			break;
		case 23:
			func_409(193108691, iParam1);
			func_409(491732588, iParam1);
			func_409(671962088, iParam1);
			func_410(1);
			break;
		case 16:
			func_409(-1836056650, iParam1);
			func_409(-754657922, iParam1);
			func_409(-1752355838, iParam1);
			func_409(-1375324510, iParam1);
			break;
		case 59:
			func_409(-514392105, iParam1);
			func_409(-822060246, iParam1);
			if (func_411(146))
			{
				func_409(1372748575, iParam1);
			}
			func_410(1);
			break;
		case 76:
			func_409(1991352213, iParam1);
			if (func_412() == 0)
			{
				func_409(1852488616, iParam1);
			}
			else
			{
				func_409(-9866350, iParam1);
			}
			break;
		case 44:
			func_409(863852599, iParam1);
			func_409(1228374935, iParam1);
			func_409(1517889050, iParam1);
			func_409(830657578, iParam1);
			func_409(1901354958, iParam1);
			break;
		case 46:
			func_409(-582805654, iParam1);
			func_409(250378940, iParam1);
			func_409(-2143265426, iParam1);
			break;
		case 17:
			func_409(-941494139, iParam1);
			func_409(1641489521, iParam1);
			break;
		case 19:
			func_409(-1829423531, iParam1);
			func_409(-1590504752, iParam1);
			func_409(1357221321, iParam1);
			break;
		case 21:
			func_409(-1037992610, iParam1);
			func_409(-1286414399, iParam1);
			func_410(0);
			break;
		case 15:
			func_409(-1014460309, iParam1);
			func_409(-1030502825, iParam1);
			break;
		case 33:
			func_409(479388090, iParam1);
			func_409(-1396342239, iParam1);
			func_409(-619618632, iParam1);
			break;
		case 34:
			func_409(1193561641, iParam1);
			break;
		case 64:
			func_409(1363960851, iParam1);
			break;
		case 60:
			func_409(-1232453926, iParam1);
			func_409(-882833584, iParam1);
			break;
		case 73:
			func_409(2023205767, iParam1);
			break;
		case 74:
			func_409(-2135286513, iParam1);
			if (func_412() == 0)
			{
				func_409(33799444, iParam1);
			}
			else
			{
				func_409(-161343203, iParam1);
			}
			break;
		case 8:
			func_409(841639693, iParam1);
			func_409(358952323, iParam1);
			break;
		case 36:
			func_409(852538149, iParam1);
			func_409(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_409(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_409(1116039310, iParam1);
			}
			break;
		case 27:
			func_409(107633428, iParam1);
			func_409(335902282, iParam1);
			func_409(575673055, iParam1);
			func_409(-425944207, iParam1);
			break;
		case 28:
			func_409(-1941530250, iParam1);
			func_409(1399269304, iParam1);
			func_409(1839684664, iParam1);
			func_409(923168503, iParam1);
			func_409(-1485078322, iParam1);
			break;
		case 29:
			func_409(574995900, iParam1);
			func_409(-1691275407, iParam1);
			func_409(-1725307861, iParam1);
			break;
		case 31:
			func_409(-2108383238, iParam1);
			func_409(-1321828931, iParam1);
			func_409(-1632118592, iParam1);
			func_409(334938948, iParam1);
			break;
		case 4:
			func_409(115823701, iParam1);
			func_409(-1896939736, iParam1);
			func_409(-1830746356, iParam1);
			func_409(-1235169781, iParam1);
			func_410(0);
			break;
		case 6:
			func_409(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_409(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_409(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_409(-384176140, iParam1);
			}
			break;
		case 25:
			func_409(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_409(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_409(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_409(-1374849484, iParam1);
			}
			break;
		case 48:
			func_409(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_409(217772674, iParam1);
			}
			else
			{
				func_409(2071798160, iParam1);
			}
			if (func_413(51))
			{
				func_409(-792802286, iParam1);
			}
			break;
		case 49:
			func_409(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_409(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_409(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_409(1402120602, iParam1);
			}
			break;
		case 58:
			func_409(-1661934591, iParam1);
			break;
		case 50:
			func_409(-1713759426, iParam1);
			break;
		case 52:
			func_409(-314799932, iParam1);
			func_409(-462260432, iParam1);
			func_409(822929377, iParam1);
			if (iParam2 == 1)
			{
				func_409(345256028, iParam1);
				func_409(-1635084094, iParam1);
			}
			else
			{
				func_409(114267347, iParam1);
			}
			break;
		case 32:
			func_409(615304157, iParam1);
			break;
		case 47:
			func_409(415434835, iParam1);
			break;
		case 69:
			func_409(1373465877, iParam1);
			if (func_154(((*Global_1347702)[9 /*49*/])->f_15, 1))
			{
				func_409(-2058273527, iParam1);
			}
			break;
		case 70:
			func_409(451334985, iParam1);
			if (func_412() == 0)
			{
				func_409(-224150200, iParam1);
			}
			else
			{
				func_409(289012628, iParam1);
			}
			break;
		case 71:
			if (func_412() == 0)
			{
				func_409(-41692120, iParam1);
			}
			else
			{
				func_409(1537840678, iParam1);
			}
			break;
		case 37:
			func_409(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_409(1842132550, iParam1);
			}
			else
			{
				func_409(-785735240, iParam1);
			}
			func_409(-1605690566, iParam1);
			break;
		case 13:
			func_409(-731367459, iParam1);
			func_409(224176585, iParam1);
			func_409(-14545580, iParam1);
			break;
		case 53:
			func_409(1095274522, iParam1);
			break;
		case 54:
			func_409(-572027988, iParam1);
			break;
		case 56:
			func_409(1339307101, iParam1);
			func_409(2102267732, iParam1);
			break;
		case 57:
			func_409(710102686, iParam1);
			break;
		case 22:
			func_409(-1754368482, iParam1);
			func_409(-2071408557, iParam1);
			break;
		case 12:
			func_409(-181334543, iParam1);
			break;
		case 0:
			func_409(-2134669864, iParam1);
			func_409(-548289709, iParam1);
			func_409(-911271922, iParam1);
			func_409(-604455775, iParam1);
			break;
		case 1:
			func_410(1);
			break;
		case 3:
			if (func_165())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1478534115))
				{
					func_409(-1286192062, iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1286192062))
			{
				func_409(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_132()
{
	if (func_123() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_133(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_409(-145926707, iParam1);
			func_409(-604922090, iParam1);
			func_409(-848690769, iParam1);
			break;
		case 1:
			func_409(-1477631591, iParam1);
			break;
		case 2:
			func_409(76112544, iParam1);
			break;
		case 9:
			func_409(1396404308, iParam1);
			func_409(-1357381228, iParam1);
			if (func_154(((*Global_1835011)[69 /*74*/])->f_1, 1))
			{
				func_409(1902679064, iParam1);
			}
			else
			{
				func_409(-2146422425, iParam1);
			}
			break;
		case 22:
			func_409(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_409(-1934184559, iParam1);
				func_409(1281755988, iParam1);
			}
			else
			{
				func_409(-1745220872, iParam1);
				func_409(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_409(-1641504538, iParam1);
				func_409(-988014485, iParam1);
			}
			else if (func_411(26))
			{
				func_409(-343043950, iParam1);
				func_409(-640062214, iParam1);
			}
			else
			{
				func_409(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_409(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_409(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_409(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_409(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_409(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_409(1301690984, iParam1);
				}
			}
			else
			{
				func_409(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_409(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_409(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_409(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_409(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_409(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_409(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_409(-754570528, iParam1);
			}
			else
			{
				func_409(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_409(-2072125821, iParam1);
			}
			else
			{
				func_409(270040030, iParam1);
			}
			break;
		case 37:
			func_409(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_409(-505314737, iParam1);
				func_409(-1853052860, iParam1);
			}
			else
			{
				func_409(-1975624994, iParam1);
				func_409(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_409(1690231002, iParam1);
			}
			else
			{
				func_409(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_409(1225386280, iParam1);
			}
			else if (func_411(54))
			{
				func_409(-283235773, iParam1);
			}
			else
			{
				func_409(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_409(1355398007, iParam1);
			}
			else
			{
				func_409(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_409(574636806, iParam1);
			}
			else
			{
				func_409(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_409(821118338, iParam1);
			}
			else if (func_411(39))
			{
				func_409(846829260, iParam1);
			}
			else
			{
				func_409(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_188(((*Global_1835011)[33 /*74*/])->f_1) == 1)
				{
					func_409(1422779093, iParam1);
				}
				else
				{
					func_409(-1769536986, iParam1);
				}
			}
			else
			{
				func_409(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_409(352134789, iParam1);
			}
			else if (func_411(43))
			{
				func_409(260723113, iParam1);
			}
			else
			{
				func_409(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_409(-457958799, iParam1);
			}
			else
			{
				func_409(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_411(41))
			{
				func_409(-546824600, iParam1);
			}
			else
			{
				func_409(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_409(1297261593, iParam1);
			}
			else
			{
				func_409(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_409(2068484886, iParam1);
			}
			else if (func_411(49))
			{
				func_409(-1489080639, iParam1);
				func_409(-2102244050, iParam1);
			}
			else
			{
				func_409(-1863040467, iParam1);
			}
			break;
		case 51:
			func_409(-2055943209, iParam1);
			break;
		case 58:
			if (func_154(((*Global_1347702)[23 /*49*/])->f_15, 1))
			{
				func_409(1650066845, iParam1);
			}
			else
			{
				func_409(151370023, iParam1);
			}
			func_409(1426057961, iParam1);
			func_409(476379584, iParam1);
			break;
		case 59:
			func_409(-1638117866, iParam1);
			break;
		case 62:
			func_409(199541730, iParam1);
			break;
		case 63:
			func_409(1703485804, iParam1);
			func_409(-800449045, iParam1);
			break;
		case 65:
			func_409(-1678210868, iParam1);
			func_409(-1448238026, iParam1);
			func_409(-1200864845, iParam1);
			func_409(1473511536, iParam1);
			break;
		case 66:
			func_409(-1774490051, iParam1);
			func_409(-34645921, iParam1);
			func_409(174027075, iParam1);
			func_409(-1155999, iParam1);
			func_410(1);
			break;
		case 67:
			func_409(701612593, iParam1);
			func_409(-1069631343, iParam1);
			func_409(1673428882, iParam1);
			break;
		case 68:
			func_409(-739133286, iParam1);
			func_409(-2130089358, iParam1);
			func_409(2056190391, iParam1);
			func_409(1941753817, iParam1);
			func_410(0);
			break;
		case 70:
			func_409(-1217555753, iParam1);
			break;
		case 71:
			func_409(697048821, iParam1);
			break;
		case 73:
			func_409(-553148661, iParam1);
			break;
		case 75:
			func_409(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_409(1414263863, iParam1);
			}
			else
			{
				func_409(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_409(1835465936, iParam1);
				func_409(523715611, iParam1);
			}
			else if (func_411(78))
			{
				func_409(1420338873, iParam1);
			}
			else
			{
				func_409(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_409(10180941, iParam1);
			}
			else if (func_411(79))
			{
				func_409(768420635, iParam1);
			}
			else
			{
				func_409(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_409(-383601523, iParam1);
			}
			else
			{
				func_409(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_409(1606472408, iParam1);
			}
			else
			{
				func_409(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_409(-203571927, iParam1);
			}
			else
			{
				func_409(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_409(729886222, iParam1);
			}
			else
			{
				func_409(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_409(-714816362, iParam1);
			}
			else
			{
				func_409(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_409(-932932179, iParam1);
				func_409(-1458537240, iParam1);
			}
			else
			{
				func_409(-1764383885, iParam1);
				func_409(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_409(1741466706, iParam1);
			}
			else
			{
				func_409(1405815775, iParam1);
			}
			break;
		case 94:
			func_409(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_409(1905280979, iParam1);
			}
			else
			{
				func_409(-1966245299, iParam1);
			}
			func_409(721468880, iParam1);
			break;
		case 99:
			func_409(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_409(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_409(-1117781095, iParam1);
				}
				else
				{
					func_409(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_409(141494548, iParam1);
			}
			else
			{
				func_409(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_409(-369525697, iParam1);
			}
			else if (func_411(101))
			{
				func_409(1595015219, iParam1);
			}
			else
			{
				func_409(-321486961, iParam1);
			}
			break;
		case 103:
			func_409(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_409(793460477, iParam1);
				func_409(-1610242176, iParam1);
			}
			else if (func_411(103))
			{
				func_409(1830897187, iParam1);
			}
			else
			{
				func_409(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_409(1528309077, iParam1);
			}
			else if (func_411(104))
			{
				func_409(1864966105, iParam1);
			}
			else
			{
				func_409(-103336013, iParam1);
			}
			break;
		case 108:
			func_409(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_409(-1123227713, iParam1);
				func_409(-889574341, iParam1);
			}
			else
			{
				func_409(2065385917, iParam1);
				func_409(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_409(-887421691, iParam1);
			}
			else if (func_411(109))
			{
				func_409(-1318117949, iParam1);
			}
			else
			{
				func_409(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_409(284822762, iParam1);
				}
				else
				{
					func_409(-1425017554, iParam1);
				}
			}
			else if (func_411(110))
			{
				if (&Global_1357515 == 0)
				{
					func_409(553087292, iParam1);
				}
				else
				{
					func_409(-1766870331, iParam1);
					func_409(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_409(-1980598735, iParam1);
			}
			else
			{
				func_409(-442732098, iParam1);
				func_409(1955756409, iParam1);
			}
			break;
		case 115:
			func_409(394303528, iParam1);
			func_409(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_409(1182403394, iParam1);
			}
			else
			{
				func_409(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_409(924445424, iParam1);
			}
			else
			{
				func_409(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_409(430755273, iParam1);
				func_409(-1473879802, iParam1);
			}
			else
			{
				func_409(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_409(73885747, iParam1);
			}
			else if (func_411(117))
			{
				func_409(1559707913, iParam1);
			}
			else
			{
				func_409(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_409(-2103887972, iParam1);
			}
			else if (func_411(118))
			{
				func_409(-435828462, iParam1);
			}
			else
			{
				func_409(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_409(2054486196, iParam1);
			}
			else
			{
				func_409(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_409(-570086056, iParam1);
			}
			else if (func_411(121))
			{
				func_409(32337856, iParam1);
			}
			else
			{
				func_409(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_409(813493663, iParam1);
			}
			else if (func_411(122))
			{
				func_409(-2132763590, iParam1);
			}
			else
			{
				func_409(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_409(-66240572, iParam1);
				func_409(1563075046, iParam1);
			}
			else
			{
				func_409(-787011772, iParam1);
				func_409(-1523377438, iParam1);
			}
			break;
		case 127:
			func_409(61020800, iParam1);
			break;
		case 129:
			func_409(428985222, iParam1);
			break;
		case 131:
			func_409(-1393851036, iParam1);
			break;
		case 133:
			func_409(1559531342, iParam1);
			break;
		case 134:
			func_409(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_409(-1374407408, iParam1);
				}
				else
				{
					func_409(471210931, iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(1732474719) && HUD::_JOURNAL_CAN_WRITE_ENTRY(801682048)) && HUD::_JOURNAL_CAN_WRITE_ENTRY(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_409(-472672138, iParam1);
				}
				else
				{
					func_409(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_409(-1678710489, iParam1);
			}
			else
			{
				func_409(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_409(1717582460, iParam1);
			}
			else
			{
				func_409(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_409(1568112362, iParam1);
				func_409(1388317526, iParam1);
			}
			else if (func_411(136))
			{
				func_409(-1597534828, iParam1);
				func_409(-1207918353, iParam1);
			}
			else
			{
				func_409(-1940891082, iParam1);
				func_409(-598277294, iParam1);
			}
			break;
		case 142:
			if (iParam2 == 1)
			{
				func_409(448334530, iParam1);
				func_409(2145375502, iParam1);
			}
			else
			{
				func_409(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_409(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_409(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_409(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_409(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_409(-66616327, iParam1);
			}
			else
			{
				func_409(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_409(1862916706, iParam1);
			}
			else if (func_411(147))
			{
				func_409(675105199, iParam1);
			}
			else
			{
				func_409(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_409(174409701, iParam1);
			}
			else if (func_411(148))
			{
				func_409(-1730895475, iParam1);
			}
			else
			{
				func_409(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_409(1295237052, iParam1);
			}
			else if (func_411(149))
			{
				func_409(-788577684, iParam1);
			}
			else
			{
				func_409(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_134(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	*uParam1 = 1137976064;
	*uParam2 = -1;
	iVar0 = func_88(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_414(iParam0);
			switch (iVar1)
			{
				case 0:
					return -1340559426;
				case 1:
					return -694047360;
				case 2:
					return -757336127;
				case 3:
					return -164763388;
				case 4:
					*uParam1 = -2060316038;
					return -2030965067;
				case 5:
					return 2030928096;
				case 6:
					return -332258016;
				case 10:
					return 1817180056;
				case 13:
					return 545240164;
				case 15:
					return 1141344854;
				case 8:
					return 1796786552;
				case 25:
					return 1783253542;
				case 14:
					return -2129915369;
				case 7:
					return -1393633441;
				case 9:
					if (func_188(((*Global_1835011)[9 /*74*/])->f_1) == 0)
					{
						return 1819621703;
					}
					else
					{
						return 1456958671;
					}
					break;
				case 11:
					return 278608719;
				case 12:
					return -561040434;
				case 16:
					return 95619635;
				case 17:
					return 1185998732;
				case 53:
					return -221923309;
				case 18:
					return -620369863;
				case 19:
					return -1738185394;
				case 20:
					return -637873918;
				case 22:
					return 561912024;
				case 23:
					return 951007010;
				case 24:
					return -1512720465;
				case 21:
					return 920901415;
				case 26:
					return -1664107227;
				case 27:
					return -1934704933;
				case 28:
					return -582523927;
				case 29:
					return -259827569;
				case 30:
					return -1633236438;
				case 31:
					return -1396074730;
				case 32:
					return -248683070;
				case 33:
					return 1454698172;
				case 34:
					return -1548165899;
				case 35:
					return -1486701482;
				case 36:
					return 1249990864;
				case 37:
					return -164125056;
				case 38:
					return -1198456774;
				case 39:
					return -820014425;
				case 40:
					return -2071373019;
				case 41:
					return -162152912;
				case 42:
					return -532430534;
				case 43:
					return -695655810;
				case 44:
					return -1238376790;
				case 45:
					return 1927460276;
				case 46:
					return 1824331150;
				case 47:
					return 1888528254;
				case 48:
					return 1971155641;
				case 49:
					return -1757085331;
				case 50:
					return 1264235360;
				case 51:
					return 1157034909;
				case 52:
					return 512067206;
				case 54:
					return -258855820;
				case 55:
					return 2143139308;
				case 56:
					return -18183703;
				case 57:
					return 692218123;
				case 58:
					return 127002552;
				case 59:
					return 1769573516;
				case 60:
					return 501194998;
				case 61:
					return -219249641;
				case 62:
					return 1935952956;
				case 63:
					return 121222228;
				case 64:
					return -1381943684;
				case 65:
					return -1417145007;
				case 66:
					return -314300362;
				case 67:
					return -445710060;
				case 68:
					return 122725574;
				case 69:
					return -935212592;
				case 70:
					return -597010176;
				case 71:
					return 534386033;
				case 72:
					return -330340613;
				case 73:
					return 1425403638;
				case 74:
					return 124507607;
				case 75:
					return 747937920;
				case 76:
					return 1636680094;
			}
			break;
		case 8:
			iVar2 = func_128(iParam0);
			switch (iVar2)
			{
				case 120:
					return -895048976;
				case 0:
					return -172442174;
				case 63:
					return 569547151;
				case 97:
					return 1150653348;
				case 98:
					return -2075517304;
				case 94:
					return -1048889581;
				case 59:
					return 2137967386;
				case 61:
					return -1955429862;
				case 62:
					return 1899640864;
				case 112:
					return 1469701481;
				case 113:
					return -954047483;
				case 114:
					return -1868521635;
				case 66:
					*uParam1 = -2060316038;
					return -402973141;
				case 76:
					return 281905065;
				case 134:
					return 1132574871;
				case 3:
					return 709886296;
				case 5:
					return -1646431667;
				case 21:
					return 2143106360;
				case 37:
					return 1073595144;
				case 138:
					return -1582252733;
				case 67:
					*uParam1 = -2060316038;
					return 1415827953;
				case 106:
					return 195634974;
				case 107:
					return 1508162848;
				case 115:
					return -1971110347;
				case 116:
					return 446631778;
				case 22:
					return 1909655985;
				case 23:
					return -303175962;
				case 82:
					return 437096661;
				case 68:
					*uParam1 = -2060316038;
					return 1046168872;
				case 140:
					return 1593516439;
				case 142:
					return 1234351222;
				case 58:
					return -1988547710;
				case 64:
					return 98434060;
				case 65:
					return 1937922313;
				case 108:
					return -713369135;
				case 8:
					return -1538781541;
				case 10:
					return -925475803;
				case 2:
					return -1479860879;
				case 96:
					return -1025265051;
				case 52:
					return -270246276;
				default:
					break;
			}
			break;
		case 11:
			iVar3 = func_128(iParam0);
			switch (iVar3)
			{
				case 581819093:
					return -1202860612;
				case -1220302226:
					return 703663141;
				case -839878969:
					return 1534808110;
				case -360730635:
					return -742985447;
				case 687859577:
					return -331451824;
				case 1202375449:
					return 1344816618;
				case -1891229662:
					return 597768834;
				case -668333238:
					return -120359954;
				case 99378894:
					return -290258665;
				default:
					break;
			}
			break;
	}
	return 176656832;
}

int func_135(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_415(iParam0);
	uVar3 = func_416(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_2 = uParam1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_3 = uVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_121();
				func_161(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_1 = iVar1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_4 = iVar2;
			func_417(iParam0, 1);
			if (func_418(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if ((Global_40.f_4283.f_6[iVar4 /*5*/])->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_419(Global_40.f_4283.f_6[iVar4 /*5*/], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_420(1, iParam0);
				}
				else
				{
					func_421(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_136(int iParam0, var uParam1)
{
	*uParam1 = 0;
	switch (iParam0)
	{
		case 68:
			*uParam1 = 35;
			return 70;
		case 76:
			*uParam1 = 35;
			return 70;
		case 70:
			*uParam1 = 35;
			return 70;
		case 73:
			*uParam1 = 35;
			return 70;
		case 19:
			*uParam1 = 25;
			return 50;
		case 21:
			*uParam1 = 35;
			return 70;
		case 60:
			*uParam1 = 35;
			return 70;
		case 61:
			*uParam1 = 35;
			return 70;
		case 62:
			*uParam1 = 35;
			return 70;
		case 63:
			*uParam1 = 35;
			return 70;
		case 64:
			*uParam1 = 35;
			return 70;
		case 65:
			*uParam1 = 35;
			return 70;
		case 66:
			*uParam1 = 35;
			return 70;
		case 67:
			*uParam1 = 35;
			return 70;
		case 32:
			*uParam1 = 35;
			return 70;
		case 48:
			*uParam1 = 35;
			return 70;
		case 49:
			*uParam1 = 35;
			return 70;
		case 47:
			*uParam1 = 30;
			return 60;
		case 58:
			*uParam1 = 30;
			return 60;
		case 27:
			*uParam1 = 30;
			return 60;
		case 29:
			*uParam1 = 40;
			return 100;
		case 30:
			*uParam1 = 50;
			return 100;
		case 33:
			*uParam1 = 30;
			return 60;
		case 23:
			*uParam1 = 30;
			return 60;
		case 10:
			*uParam1 = 30;
			return 60;
		case 5:
			*uParam1 = 45;
			return 60;
		case 11:
			*uParam1 = 35;
			return 70;
		case 9:
			*uParam1 = 45;
			return 70;
		case 15:
			*uParam1 = 15;
			return 35;
		case 35:
			*uParam1 = 50;
			return 70;
		case 8:
			*uParam1 = 50;
			return 100;
		case 36:
			*uParam1 = 40;
			return 80;
		case 22:
			*uParam1 = 25;
			return 45;
		case 39:
		case 41:
		case 42:
		case 43:
			*uParam1 = 20;
			return 40;
	}
	return 120;
}

int func_137(int iParam0, int iParam1, int iParam2)
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

int func_138(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 55:
			*iParam1 = 45;
			return 75;
		case 60:
			*iParam1 = 0;
			return 0;
		case 74:
			*iParam1 = 45;
			return 75;
		case 119:
			*iParam1 = 45;
			return 75;
		case 84:
			*iParam1 = 45;
			return 75;
		case 85:
			*iParam1 = 45;
			return 75;
		case 106:
			*iParam1 = 20;
			return 35;
		case 107:
			*iParam1 = 20;
			return 35;
		case 8:
			*iParam1 = 45;
			return 75;
		case 9:
			*iParam1 = 45;
			return 75;
		case 10:
			*iParam1 = 45;
			return 75;
		case 98:
			*iParam1 = 30;
			return 50;
		case 82:
			*iParam1 = 30;
			return 50;
		case 83:
			*iParam1 = 30;
			return 50;
		case 99:
			*iParam1 = 30;
			return 50;
		case 138:
			*iParam1 = 30;
			return 50;
		case 139:
			*iParam1 = 30;
			return 50;
		case 140:
			*iParam1 = 30;
			return 50;
		case 141:
			*iParam1 = 30;
			return 50;
		case 142:
			*iParam1 = 30;
			return 50;
		case 21:
			*iParam1 = 30;
			return 50;
		case 136:
			*iParam1 = 30;
			return 50;
		case 137:
			*iParam1 = 40;
			return 80;
		case 124:
			*iParam1 = 30;
			return 50;
		case 125:
			*iParam1 = 30;
			return 50;
		case 127:
			*iParam1 = 30;
			return 50;
		case 128:
			*iParam1 = 30;
			return 50;
		case 131:
			*iParam1 = 30;
			return 50;
		case 133:
			*iParam1 = 30;
			return 50;
		case 105:
			*iParam1 = 30;
			return 50;
		case 89:
			*iParam1 = 30;
			return 50;
		case 93:
			*iParam1 = 30;
			return 50;
		case 75:
			*iParam1 = 30;
			return 50;
		case 5:
			*iParam1 = 50;
			return 100;
		case 6:
			*iParam1 = 30;
			return 50;
		case 77:
			*iParam1 = 30;
			return 50;
		case 78:
			*iParam1 = 30;
			return 50;
		case 30:
			*iParam1 = 30;
			return 50;
		case 31:
			*iParam1 = 30;
			return 50;
		case 32:
			*iParam1 = 30;
			return 50;
		case 33:
			*iParam1 = 30;
			return 50;
		case 34:
			*iParam1 = 30;
			return 50;
		case 35:
			*iParam1 = 30;
			return 50;
		case 36:
			*iParam1 = 30;
			return 50;
		case 24:
			*iParam1 = 30;
			return 50;
		case 25:
			*iParam1 = 30;
			return 50;
		case 26:
			*iParam1 = 30;
			return 50;
		case 27:
			*iParam1 = 30;
			return 50;
		case 28:
			*iParam1 = 30;
			return 50;
		case 66:
			*iParam1 = 30;
			return 50;
		case 67:
			*iParam1 = 50;
			return 100;
		case 146:
			*iParam1 = 30;
			return 50;
		case 38:
			*iParam1 = 30;
			return 45;
		case 39:
			*iParam1 = 30;
			return 45;
		case 40:
			*iParam1 = 30;
			return 45;
		case 41:
			*iParam1 = 30;
			return 45;
		case 42:
			*iParam1 = 30;
			return 45;
		case 43:
			*iParam1 = 30;
			return 45;
		case 44:
			*iParam1 = 30;
			return 45;
		case 45:
			*iParam1 = 30;
			return 45;
		case 46:
			*iParam1 = 30;
			return 45;
		case 47:
			*iParam1 = 30;
			return 45;
		case 48:
			*iParam1 = 30;
			return 45;
		case 49:
			*iParam1 = 30;
			return 45;
		case 50:
			*iParam1 = 30;
			return 45;
		case 51:
			*iParam1 = 30;
			return 45;
		case 112:
			*iParam1 = 10;
			return 20;
		case 113:
			*iParam1 = 25;
			return 45;
		case 114:
			*iParam1 = 10;
			return 20;
		case 59:
			*iParam1 = 15;
			return 35;
		case 61:
			*iParam1 = 15;
			return 35;
		case 97:
			*iParam1 = 15;
			return 35;
		case 94:
			*iParam1 = 20;
			return 30;
		case 0:
			*iParam1 = 45;
			return 75;
		case 115:
			*iParam1 = 30;
			return 60;
	}
	return 120;
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case 57:
		case 125:
		case 150:
			return 1;
	}
	return 0;
}

void func_140(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_123() != -1)
	{
		return;
	}
	if ((Global_36615 && func_422(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_423(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_424(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
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
			func_425(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_424(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_141(int iParam0)
{
	if (!func_85(iParam0))
	{
		return -1;
	}
	return func_426(func_378(iParam0));
}

int func_142(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

bool func_143(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_144()
{
	if (func_123() != -1)
	{
		return 0;
	}
	if (!func_427())
	{
		return 0;
	}
	if (!func_154(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_154(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_154(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_154(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_154(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_154(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_154(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_154(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_154(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_154(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_154(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_154(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_154(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_154(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_154(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_154(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_154(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_154(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_154(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_154(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_154(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_154(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_154(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_154(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_154(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_154(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

void func_145()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 1);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_428(13);
		(*Global_1898441)[iVar0 /*38*/] = 13;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_WIN2_COM", 24);
	}
}

int func_146(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;

	if (!func_429(iParam0, 0))
	{
		return 0;
	}
	if (!func_430(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_431(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_432(iParam0, bParam2);
	iVar2 = 0;
	if (func_433(iParam0, 0, 0) == 0)
	{
		if (func_434(iParam0))
		{
			iVar5 = func_435(iParam0);
			iVar6 = func_436(iVar5);
			iVar7 = func_437(iVar6) + 1;
			func_438(iVar5);
			if (func_439(38))
			{
				func_152(483, 0);
			}
			else
			{
				func_152(482, 0);
			}
			if (iVar7 == func_440(iVar6))
			{
				func_146(func_441(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_427() && func_442(4))
				{
					if (func_427() && (func_443(38) || func_439(38)))
					{
						func_445(38, func_441(iVar6), 0, 0, func_444(), 0, -1, 0);
						func_446(2);
					}
					else
					{
						func_445(38, func_441(iVar6), 0, 0, func_444(), 0, -1, 0);
						func_446(1);
					}
				}
			}
			else if (func_427() && func_442(4))
			{
				if (func_427() && (func_443(38) || func_439(38)))
				{
					func_445(38, 0, 0, 0, func_444(), 0, -1, 0);
					func_446(2);
				}
				else
				{
					func_445(38, 0, 0, 0, func_444(), 0, -1, 0);
					func_446(1);
				}
			}
			if (func_427() && func_442(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_427() && (func_443(38) || func_439(38)))
					{
						func_447(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_447(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_448(iParam0) == -1037537535)
	{
		if ((!func_449(iParam0, 866047851) && !func_449(iParam0, -1979000645)) && !func_449(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_450(iParam0, 8388608) && !func_451(28))
	{
		func_452(28);
	}
	if (!bVar3)
	{
		if (func_449(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_453(iParam0) == -1447088266)
			{
				iVar1 = func_455(func_454(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_123() == -1)
					{
						func_456(iVar1);
					}
					if (func_457(0) && func_458(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_459(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
				if (WEAPON::_IS_AMMO_VALID(iVar1))
				{
					if (func_123() == -1)
					{
						func_456(iParam0);
					}
					if (func_457(0) && func_458(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_459(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_448(iParam0) == -427144552)
		{
			if (!func_460(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_448(iParam0) == 307971639 && func_461(iParam0))
		{
			if (!func_462(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_449(iParam0, 866047851))
		{
			func_463(iParam0);
		}
		else if (func_449(iParam0, 2000026003))
		{
			func_464(iParam0);
		}
		else if (func_449(iParam0, -103750053))
		{
			func_466(func_465(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_466(func_467(-717883113, 2091222383), iVar0);
		}
		else if (func_449(iParam0, -121341956) && !func_449(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_154(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_152(498, 0);
				}
			}
			if (func_449(iParam0, -2017733358) || func_449(iParam0, -1369131378))
			{
				func_468(iParam0);
			}
		}
		else if (func_449(iParam0, -136654233))
		{
			if (func_449(iParam0, -1021472396))
			{
			}
		}
		else if (func_449(iParam0, -1466706512) && func_449(iParam0, 1147021565))
		{
			func_152(484, 0);
		}
		else if (func_449(iParam0, 1147021565) && func_449(iParam0, -524514947))
		{
		}
		else if (func_449(iParam0, 554195525))
		{
		}
		else if (func_449(iParam0, 589988438))
		{
			if (func_469())
			{
				func_470(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_449(iParam0, 787083290) && func_449(iParam0, 949916894))
		{
			func_471(iParam0);
		}
		else if (func_449(iParam0, -1718133314))
		{
			func_472(iParam0);
		}
		else if (func_449(iParam0, -1738650224))
		{
			func_473(iParam0);
		}
		else if (func_449(iParam0, -1112814642) && func_449(iParam0, 949916894))
		{
			func_474(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_449(iParam0, 1841149704))
		{
			func_475();
		}
		else if (func_449(iParam0, 606799272))
		{
			func_476(iParam0, iParam1);
			func_477(iParam0);
		}
		else if (func_449(iParam0, -1112814642) && func_449(iParam0, -1697809989))
		{
			func_478(iParam0, 0, 0, 0);
		}
		else if (func_449(iParam0, -2017733358) || func_449(iParam0, -1369131378))
		{
			func_468(iParam0);
		}
		else if (func_449(iParam0, -1921346699))
		{
			if (func_123() != -1)
			{
				return 0;
			}
			func_479(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_449(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_174(215778062, 1, 0))
					{
						func_146(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_174(670273567, 1, 0))
					{
						func_146(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_174(-967317137, 1, 0))
					{
						func_146(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_174(526074061, 1, 0))
					{
						func_146(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_174(-1045488665, 1, 0))
					{
						func_146(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_174(471514780, 1, 0))
					{
						func_146(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_449(iParam0, -839724752) && func_450(iParam0, 4))
		{
			if (!func_439(42))
			{
				func_480(iParam0);
			}
		}
		else if (func_449(iParam0, 1399091007))
		{
			func_481(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_449(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563:
					iVar8 = -1281487556; /* GXTEntry: "Legend of the East Satchel" */
					break;
				case -1421669656:
					iVar8 = -59585102; /* GXTEntry: "Tonics Satchel" */
					break;
				case -830181022:
					iVar8 = 1018123892; /* GXTEntry: "Ingredients Satchel" */
					break;
				case 917695895:
					iVar8 = -1455768246; /* GXTEntry: "Kit Satchel" */
					break;
				case -1580595448:
					iVar8 = -921879912; /* GXTEntry: "Provisions Satchel" */
					break;
				case 1309992709:
					iVar8 = 982182330; /* GXTEntry: "Materials Satchel" */
					break;
				case 1541618973:
					iVar8 = -1406390556; /* GXTEntry: "Valuables Satchel" */
					break;
			}
			if (iVar8 != 0)
			{
				func_146(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case 990323211:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case -1073808995:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			case 1903483453:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			case 224572565:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case -13395913:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case 1859340712:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1614861441:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1336735809:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case -1109613870:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case 637788839:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case -1161163727:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case 648503798:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -1434556002:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -843069275:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1356680930:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case -1185145312:
				func_452(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_482(PLAYER::PLAYER_PED_ID(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_483(&iVar9, 0))
				{
					func_458(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_123() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_482(PLAYER::PLAYER_PED_ID(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("weapon_kit_binoculars"):
				break;
			case 2131771850:
				func_152(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_484();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_485();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_486();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_487();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_488();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_489(499813453, 854119837, 0);
				func_490(499813453, 0);
				func_491(1);
				break;
			case 2127812557:
				func_489(499813453, -1292544588, 0);
				func_490(499813453, 0);
				func_491(2);
				break;
			case 808991383:
				func_489(499813453, -1003325394, 0);
				func_490(499813453, 0);
				func_491(4);
				break;
			case 1134518629:
				func_489(666607663, -335460405, 0);
				func_490(666607663, 0);
				func_492(1);
				break;
			case 902940106:
				func_489(666607663, 903797617, 0);
				func_490(666607663, 0);
				func_492(2);
				break;
			case -418174898:
				func_489(666607663, 669728650, 0);
				func_490(666607663, 0);
				func_492(4);
				break;
			case -648114971:
				func_489(-220219788, 1214120047, 0);
				func_490(-220219788, 0);
				func_493(1);
				break;
			case 211153747:
				func_489(-220219788, 655769340, 0);
				func_490(-220219788, 0);
				func_493(2);
				break;
			case -32876996:
				func_489(-220219788, 885316185, 0);
				func_490(-220219788, 0);
				func_493(4);
				break;
			case 1191437462:
				func_489(218622660, -1491419385, 0);
				func_490(218622660, 0);
				func_494(1);
				break;
			case 1119149048:
				func_489(218622660, 1809565830, 0);
				func_490(218622660, 0);
				func_494(2);
				break;
			case 506073827:
				func_489(390004462, -628873767, 0);
				func_490(390004462, 0);
				func_495(1);
				break;
			case -1876986168:
				func_489(390004462, -405421956, 0);
				func_490(390004462, 0);
				func_495(2);
				break;
			case 2142623221:
				func_489(390004462, -1108972386, 0);
				func_490(390004462, 0);
				func_495(4);
				break;
			case 1508215381:
				func_489(6410548, 1053716392, 0);
				func_490(6410548, 0);
				func_496(1);
				break;
			case -888935280:
				func_489(6410548, 806507056, 0);
				func_490(6410548, 0);
				func_496(2);
				break;
			case -1252474566:
				func_489(6410548, 1571925350, 0);
				func_490(6410548, 0);
				func_496(4);
				break;
			case -1465702449:
				func_489(6410548, 1330352282, 0);
				func_490(6410548, 0);
				func_496(8);
				break;
			case -21093309:
				func_498(242, func_497(-21093309), 0);
				break;
			case 204375141:
				func_498(240, func_497(204375141), 0);
				break;
			case -417963070:
				func_498(241, func_497(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_499(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_499(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_499(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_499(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_499(595, -103579, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_499(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case 80178851:
				func_152(488, 0);
				break;
			case 1613651027:
				func_152(491, 0);
				break;
			case -885810591:
				func_152(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_146(func_500(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_146(func_501(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_451(1))
				{
					func_152(487, 0);
				}
				break;
			case -898386032:
				func_152(486, 0);
				break;
			case -2035110427:
				if (func_123() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case 1510719693:
				func_152(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_502(&iVar10);
		if (!func_503(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_457(0))
		{
			return 1;
		}
		if (func_448(iParam0) == -1037537535)
		{
			func_504(iParam0);
		}
		if (func_449(iParam0, -1979000645))
		{
			func_505(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_457(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_146(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_506(iVar2, 0);
		}
	}
	Var35 = { func_507(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_508(iParam0);
	if (sParam6 > 0f)
	{
		if (func_449(iParam0, -839724752))
		{
			func_509(iParam0, sParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_510(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_147(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (func_449(iParam0, 1989861793))
	{
		iVar0 = func_511(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_512(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_513(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_514(iVar14, iVar1);
					if (iVar15 != iParam0 && func_429(iVar15, 0))
					{
						if (func_515(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_516(iVar1);
				if (bVar13)
				{
					func_517(iParam0);
				}
				else
				{
					func_152(306, 0);
				}
			}
		}
	}
}

void func_148()
{
	if (func_123() != -1)
	{
		return;
	}
	func_518();
	func_519();
	func_520();
	func_521();
	func_522();
	func_523();
	func_524();
}

void func_149(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;

	func_525(iParam0, 1, 1, -142743235, 1);
	if (func_526(iParam0))
	{
		func_527(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_529(func_528(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_530(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1 /*11*/];
		*(Global_1946804->f_1616.f_1[iVar1 /*3*/]) = { vVar4 };
		(Global_1946804->f_1616.f_1[iVar1 /*3*/])->f_2 = ((Global_1946804->f_1497.f_1[iVar1 /*3*/])->f_2 || (Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_2);
		iVar1++;
	}
	if (func_531() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_532(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_532(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { func_533(8, 0) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { func_533(9, 0) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { func_533(0, 0) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { func_533(2, 0) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { func_533(3, 0) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { func_533(1, 0) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { func_533(5, 0) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { func_533(6, 0) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { func_533(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_534(iVar8, iVar0))
				{
					func_535(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_534(iVar8, iVar0))
		{
			func_535(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == &Global_1946804->f_1497.f_1[iVar8 /*3*/])
			{
				*(Global_1946804->f_1497.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
				bVar3 = true;
			}
			if (iParam0 == &Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				*(Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == &Global_1946804->f_1497.f_1[iVar8 /*3*/])
		{
			*(Global_1946804->f_1497.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
		}
		if (iParam0 == &Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			*(Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar1 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar1 /*3*/]) };
		iVar1++;
	}
}

void func_150()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_534(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5 /*11*/] || iVar1 == 0)
		{
			if (func_531() == -2125499975 || func_531() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_535(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_535(&vVar2, iVar5, iVar0);
			}
		}
		iVar0++;
	}
	vVar2.x = -2018863109;
	vVar2.f_1 = 1530758430;
	if (&Global_1946804->f_57[iVar5 /*11*/] == &Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/] || 0 == &Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/])
	{
		*(Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/]) = { vVar2 };
	}
}

void func_151()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 2);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_428(14);
		(*Global_1898441)[iVar0 /*38*/] = 14;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MUD1_COM", 24);
	}
}

void func_152(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_536(iParam0, &iVar0, &iVar1);
	if (!func_537(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_538(iVar0, iVar1);
}

void func_153(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_529(iParam0, 1);
	func_539(Global_1946804->f_1497.f_1[iVar0 /*3*/], 2, 6);
	func_539(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
		(Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1 = 0;
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		if (bParam2)
		{
			func_540(17, iParam0, 0, 0, 0);
		}
	}
	if (func_123() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_539((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_539((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
}

int func_154(int iParam0, bool bParam1)
{
	switch (func_84(iParam0))
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

void func_155()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 5);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_428(17);
		(*Global_1898441)[iVar0 /*38*/] = 17;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA2_COM", 24);
	}
}

void func_156()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 6);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_428(18);
		(*Global_1898441)[iVar0 /*38*/] = 18;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA3_COM", 24);
	}
}

int func_157(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	struct<5> Var0;

	if (iParam3 == -358215195)
	{
		Var0 = { func_541(iParam1, 1, 0) };
		iParam3 = func_542(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_543(iParam3);
	return func_482(iParam0, iParam1, iParam2, iParam3, bParam4, iParam5, 1, 0, 1, 0);
}

bool func_158()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

void func_159(int iParam0)
{
	int iVar0;

	if (!func_544(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_VISIBLE(iVar0, true);
}

int func_160(int iParam0, int iParam1)
{
	if (!func_545(iParam0))
	{
		return 0;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_546(iParam0);
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	return func_547(Global_40.f_9910[iParam1 /*6*/], 4);
}

void func_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_548(*iParam0);
	iVar1 = func_549(*iParam0);
	iVar2 = func_550(*iParam0);
	iVar3 = func_551(*iParam0);
	iVar4 = func_552(*iParam0);
	iVar5 = func_553(*iParam0);
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
	iVar6 = func_554(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_554(iVar1, iVar0);
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
	func_555(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_162(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_545(iParam0))
	{
		return;
	}
	if (!func_556(iParam1))
	{
		return;
	}
	if (func_557(iParam1, 1))
	{
		return;
	}
	iVar0 = func_546(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_160(iParam0, -1))
	{
		return;
	}
	else
	{
		func_558(Global_40.f_9910[iVar0 /*6*/], 2);
	}
	(Global_40.f_9910[iVar0 /*6*/])->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_102(0, 0, 1))
		{
			func_194(0, 17);
		}
	}
}

void func_163()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 7);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_428(19);
		(*Global_1898441)[iVar0 /*38*/] = 19;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MOB5_COM", 24);
	}
}

void func_164()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 8);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_428(20);
		(*Global_1898441)[iVar0 /*38*/] = 20;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_165()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

void func_166()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 9);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_428(21);
		(*Global_1898441)[iVar0 /*38*/] = 21;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA1_COM", 24);
	}
}

void func_167()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 10);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_428(22);
		(*Global_1898441)[iVar0 /*38*/] = 22;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA3_COM", 24);
	}
}

void func_168()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 12);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_428(24);
		(*Global_1898441)[iVar0 /*38*/] = 24;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ODR5_COM", 24);
	}
}

void func_169()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 13);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_428(25);
		(*Global_1898441)[iVar0 /*38*/] = 25;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN1_COM", 24);
	}
}

void func_170()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 14);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_428(27);
		(*Global_1898441)[iVar0 /*38*/] = 27;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MAR51_COM", 24);
	}
}

void func_171()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 15);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_428(28);
		(*Global_1898441)[iVar0 /*38*/] = 28;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_172(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_173(int iParam0)
{
	return (Global_40.f_12018.f_4 && iParam0) != 0;
}

bool func_174(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_429(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_448(iParam0);
	if (iVar0 == -427144552)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_559(iParam0, 1))
		{
			return false;
		}
	}
	return func_433(iParam0, 0, bParam2) >= iParam1;
}

void func_175(int iParam0)
{
	if (func_20(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_560(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_BANK_FEED", MISC::ABSI(iParam0)), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_560(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_176()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 16);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_428(29);
		(*Global_1898441)[iVar0 /*38*/] = 29;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BEE22_COM", 24);
	}
}

void func_177()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 17);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_428(26);
		(*Global_1898441)[iVar0 /*38*/] = 26;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN2_COM", 24);
	}
}

void func_178()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 11);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_428(23);
		(*Global_1898441)[iVar0 /*38*/] = 23;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOC_COM", 24);
	}
}

void func_179()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 3);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_428(15);
		(*Global_1898441)[iVar0 /*38*/] = 15;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOW3_COM", 24);
	}
}

void func_180()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 4);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_428(16);
		(*Global_1898441)[iVar0 /*38*/] = 16;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DUT1_COM", 24);
	}
}

void func_181()
{
	if (func_561() > 1)
	{
		func_562();
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-707360575))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-707360575, true);
			func_152(444, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-1201174711))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-1201174711, true);
			func_152(447, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(151582343))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(151582343, true);
			func_152(448, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-642492359))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-642492359, true);
			func_152(450, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(5171247))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(5171247, true);
			func_152(452, 1);
		}
	}
}

bool func_182(int iParam0)
{
	return func_377(iParam0, 4, 1);
}

void func_183(int iParam0)
{
	func_563(iParam0, 4, 1);
}

void func_184(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_127(-160912108) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_185(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_20(32768))
	{
		return;
	}
	if (!func_85(iParam0))
	{
		return;
	}
	func_99(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_88(iParam0))
	{
		case 1:
			func_466(func_467(909007663, -587839005), 1);
			iVar0 = func_128(iParam0);
			func_466(func_127(-634848880), 1);
			switch (func_394(iVar0))
			{
				case 0:
					func_466(func_467(909007663, 1325140787), 1);
					break;
				case 1:
					func_466(func_467(909007663, 2101241783), 1);
					break;
				case 2:
					func_466(func_467(909007663, -1296936294), 1);
					break;
				case 3:
					func_466(func_467(909007663, -798388728), 1);
					break;
				case 4:
					func_466(func_467(909007663, -1787586531), 1);
					break;
				case 5:
					func_466(func_467(909007663, -1002834519), 1);
					break;
				case 6:
					func_466(func_467(909007663, -50600144), 1);
					break;
				case 7:
					func_466(func_467(909007663, -348503123), 1);
					break;
				case 8:
					func_466(func_467(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_466(func_467(909007663, -406093146), 1);
			}
			if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_8))))
			{
				func_466(func_467(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_128(iParam0);
			if (func_129(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				func_466(func_127(-634848880), 1);
			}
			if (func_129(((*Global_1347702)[iVar1 /*49*/])->f_12, 4) || iVar1 == 59)
			{
				if (func_129(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
				{
					func_466(func_467(909007663, -587839005), 1);
				}
				else
				{
					func_466(func_467(909007663, -2049243343), 1);
				}
			}
			if (func_129(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				switch (func_395(iVar1))
				{
					case 0:
						func_466(func_467(909007663, 1325140787), 1);
						break;
					case 1:
						func_466(func_467(909007663, 2101241783), 1);
						break;
					case 2:
						func_466(func_467(909007663, -1296936294), 1);
						break;
					case 3:
						func_466(func_467(909007663, -798388728), 1);
						break;
					case 4:
						func_466(func_467(909007663, -1787586531), 1);
						break;
					case 5:
						func_466(func_467(909007663, -1002834519), 1);
						break;
					case 6:
						func_466(func_467(909007663, -50600144), 1);
						break;
					case 7:
						func_466(func_467(909007663, -348503123), 1);
						break;
					case 8:
						func_466(func_467(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1347702)[iVar1 /*49*/])->f_3))))
				{
					func_466(func_467(909007663, 532323983), 1);
				}
			}
			else if (func_129(((*Global_1347702)[iVar1 /*49*/])->f_12, 4))
			{
				if (func_129(((*Global_1347702)[iVar1 /*49*/])->f_12, 4194304))
				{
				}
				else if (!func_129(((*Global_1347702)[iVar1 /*49*/])->f_12, 512))
				{
					func_466(func_467(909007663, 551192206), 1);
				}
				else
				{
					func_466(func_467(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_186()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (func_123() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575->f_2)
	{
		return;
	}
	if (!func_564(64))
	{
		return;
	}
	else if (func_103(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_102(0, 0, 1) || func_565()) || func_144())
	{
		return;
	}
	iVar0 = func_106();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_566(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_567(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_567(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_568(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_194(0, -1);
	}
	if (iVar2 > 0)
	{
		func_569("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_570(1, 0);
	Global_1956575->f_2 = 1;
}

void func_187(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_20(32768))
	{
		return;
	}
	func_571(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
	if (bParam2)
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-843169622))
		{
			Global_1879514->f_12 = 1;
		}
		else
		{
			Global_1879514->f_12 = 0;
		}
		func_572(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_188(int iParam0)
{
	if (!func_85(iParam0))
	{
		return -1;
	}
	return func_573(iParam0);
}

int func_189(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_574(iParam0))
	{
		return 0;
	}
	if (!func_427())
	{
		return 0;
	}
	if (!func_575(iParam0, &iVar0, &iVar1))
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

int func_190(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1835011)[iParam0 /*74*/])->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1347702)[iParam0 /*49*/])->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_576())
	{
		iVar2 = func_576();
	}
	iVar5 = func_577(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_378(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_378(iVar6) == 0)
			{
				return func_578(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_378(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_378(iVar6) == 0)
			{
				return func_578(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == 0)
			{
				return func_578(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_579(1330954593, 0, -1);
		case 1:
			return func_579(1330954593, 0, -1);
		case 2:
			return func_579(1330954593, 0, -1) * 2;
		case 4:
			return func_579(1330954593, 0, -1);
		case 5:
			return func_579(1330954593, 0, -1);
		case 6:
			return func_579(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_579(1330954593, 0, -1) * 3;
		case 9:
			return func_579(1330954593, 0, -1) * 3;
		case 10:
			return func_579(1330954593, 0, -1) * 3;
		case 11:
			return func_579(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

var func_192(int iParam0)
{
	char[] cVar0[8];

	if (!func_85(iParam0))
	{
		return cVar0;
	}
	switch (func_88(iParam0))
	{
		case 1:
			cVar0 = ((*Global_1835011)[func_414(iParam0) /*74*/])->f_8;
			break;
		case 8:
			cVar0 = ((*Global_1347702)[func_128(iParam0) /*49*/])->f_3;
			break;
		case 11:
			if (iParam0 == func_190(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_193(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!Global_1879514->f_11)
	{
		iVar0 = func_24();
		iVar1 = MISC::GET_HASH_KEY(&uParam0);
		if (MISSIONDATA::_0x57E798B54C45EE1A(iVar1) != 5 && iVar0 == 5)
		{
			if (func_88(Global_1879514->f_1) == 1)
			{
				func_189(5, 1);
			}
			else if (func_88(Global_1879514->f_1) == 8 && (func_129(((*Global_1347702)[func_128(Global_1879514->f_1) /*49*/])->f_12, 1) || func_129(((*Global_1347702)[func_128(Global_1879514->f_1) /*49*/])->f_12, 33554432)))
			{
				func_189(5, 1);
			}
		}
		MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&uParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&uParam0), 3);
	}
}

void func_194(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_580(&Global_0, 8);
	}
	if (!func_427() || func_123() != -1)
	{
		return;
	}
	func_580(&Global_0, 1);
}

int func_195()
{
	return Global_40.f_4283;
}

int func_196(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_85(iParam0))
	{
		return 0;
	}
	uVar0 = func_192(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_197(var uParam0)
{
	return STATS::_0x4DAC398297981B87(uParam0);
}

void func_198(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_199(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = MISC::GET_GAME_TIMER();
}

Vector3 func_200(vector3 vParam0, var uParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, float fParam9, int iParam10)
{
	vector3 vVar0;

	vVar0 = { func_581(vParam0, uParam3, uParam4, bParam5, bParam6, 1, iParam7, bParam8, fParam9, iParam10, -1, 1103626240) };
	if (func_582(vVar0))
	{
		vVar0 = { func_581(vParam0, uParam3, uParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_201(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = uParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_202(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_203(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = func_353();
	if (func_583(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_584(vParam0, bParam3);
}

void func_204()
{
	func_585();
	func_586();
	func_587();
	SCRIPTS::_0x11B0A0B282FA9B10(0);
}

char* func_205(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		case 3:
			return "BILL";
		case 1:
			return "JOHN";
		case 2:
			return "JAVIER";
		case 4:
			return "UNCLE";
		case 5:
			return "HOSEA";
		case 6:
			return "MICAH";
		case 7:
			return "CHARLES";
		case 8:
			return "SEAN";
		case 9:
			return "LENNY";
		case 13:
			return "ABIGAIL";
		case 10:
			return "KIERAN";
		case 14:
			return "JACK";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 17:
			return "PEARSON";
		case 18:
			return "STRAUSS";
		case 19:
			return "GRIMSHAW";
		case 20:
			return "KAREN";
		case 21:
			return "SWANSON";
		case 22:
			return "TILLY";
		case 23:
			return "TRELAWNY";
		case 11:
			return "SADIE";
		case 24:
			return "CLEET";
		case 25:
			return "JOE";
		case 26:
			return "EAGLEFLIES";
		case 12:
			return "DOG";
		default:
			break;
	}
	return "Companion unknown";
}

bool func_206(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_207()
{
	return Global_40.f_4283.f_1;
}

bool func_208(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_588(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_209(var uParam0)
{
	return func_589(*uParam0, 1);
}

void func_210(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_211(var uParam0, char* sParam1, var uParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	uParam0->f_269 = 0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 1;
	}
	bVar0 = DATAFILE::_0x7907969497EA92F5(uParam0->f_264);
	if (!bVar0)
	{
		if (!DATAFILE::_0x4F9E3ED7617123AC(MISC::GET_HASH_KEY(sParam1)))
		{
			return 1;
		}
		if (!bParam4)
		{
			uParam0->f_264 = DATAFILE::_0xCA56DD6AB7A39F64(MISC::GET_HASH_KEY(sParam1));
		}
		else
		{
			uParam0->f_264 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(sParam1));
		}
	}
	uParam0->f_270 = DATAFILE::PARSEDDATA_IS_FILE_LOADED(uParam0->f_264);
	if (!uParam0->f_270)
	{
		if (!bParam4)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_590(uParam0);
	uParam0->f_264.f_2 = 0;
	uParam0->f_277 = DATAFILE::_DATAFILE_GET_NUM_NODES(&(uParam0->f_264));
	uParam0->f_264.f_2 = 12;
	uParam0->f_279 = DATAFILE::_DATAFILE_GET_NUM_NODES(&(uParam0->f_264));
	uParam0->f_270 = 1;
	uParam0->f_278 = 0;
	uParam0->f_280 = 0;
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

bool func_212(var uParam0, int iParam1)
{
	uParam0->f_264.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_264.f_1), &(uParam0->f_264));
}

bool func_213(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, var uParam5)
{
	bool bVar0;

	if (iParam2 == -1)
	{
		if (func_214(uParam0, 2, iParam4))
		{
			*uParam5 = *iParam4;
		}
		if (func_214(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_214(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_214(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_214(uParam0, 2, iParam4))
	{
		*uParam5 = *iParam4;
	}
	if (func_214(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_214(uParam0, 5, iParam4))
	{
		cParam3->f_9 = *iParam4;
	}
	if (*uParam5 == 1 || *uParam5 == 3)
	{
		if (iParam1 == 0)
		{
			if ((cParam3->f_9 == 7 || cParam3->f_9 == 8) || cParam3->f_9 == 9)
			{
				bVar0 = true;
			}
		}
		else if (iParam1 == 1 || iParam1 == 2)
		{
			if (cParam3->f_9 == 3 || cParam3->f_9 == 5)
			{
				bVar0 = true;
			}
		}
		if ((bVar0 && !uParam0->f_272) || (!bVar0 && cParam3->f_11 == iParam2))
		{
			if (func_214(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_214(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_214(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_264.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_INT(iParam2, &(uParam0->f_264));
}

bool func_215(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_264.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_STRING(cParam2, &(uParam0->f_264));
}

int func_216(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (((func_54((*uParam0)[iVar0 /*16*/], 1048576) && MISC::ARE_STRINGS_EQUAL((*uParam0)[iVar0 /*16*/], sParam1)) && ((*uParam0)[iVar0 /*16*/])->f_9 == sParam1->f_9) && ((*uParam0)[iVar0 /*16*/])->f_10 == sParam1->f_10)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_217(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_218(var uParam0)
{
	DATAFILE::_DATAFILE_UNLOAD(uParam0->f_264);
	uParam0->f_264 = 0;
	uParam0->f_270 = 0;
}

int func_219(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (func_29(&(uParam0->f_2[iVar0]), 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_220(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 1;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_FATALLY_INJURED(iParam0))
	{
		return 1;
	}
	return 0;
}

float func_221(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_222(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_223(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_224(int iParam0)
{
	if (func_591())
	{
		Global_1357509 = 1;
	}
	if (func_592(-92416669))
	{
	}
	if (iParam0 && Global_1935630->f_44 == joaat("weapon_kit_camera"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		Global_1935630->f_44 = joaat("weapon_unarmed");
	}
}

void func_225(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_54((*uParam1)[iVar0 /*16*/], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 7)
					{
						func_56((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
				case 1:
				case 2:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 3)
					{
						func_56((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
				case 3:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 2)
					{
						func_56((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_226(var uParam0)
{
	vector3 vVar0[24];
	int iVar3;
	vector3 vVar4[24];
	vector3 vVar7[24];

	if (!func_232(1) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
	{
		if (!func_209(&uLocal_1384))
		{
			func_238(&uLocal_1384);
		}
		else if (func_266(&uLocal_1384) > 15f && !func_593(Global_35))
		{
			StringCopy(&cVar0, "CAUNC_RIDEBANT1", 24);
			if (func_233(&uLocal_1286, cVar0, 0, -1, 0, 0))
			{
				func_210(&uLocal_1384);
				func_236(1);
			}
		}
	}
	else if (!func_232(2048) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
	{
		iVar3 = -1;
		if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_1517, ENTITY::GET_ENTITY_COORDS(iLocal_22, true, false), &iVar3))
		{
			if (iVar3 >= (func_594() - 1))
			{
				StringCopy(&cVar4, "CAUNC_RIDEUPA", 24);
				if (func_233(&uLocal_1286, cVar4, 0, -1, 0, 0))
				{
					func_236(2048);
				}
			}
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_1272) && !func_229(131072))
	{
		if (func_29(iLocal_22, 0) && ENTITY::IS_ENTITY_IN_VOLUME(iLocal_22, iLocal_1272, true, 0))
		{
			func_231(131072);
		}
	}
	else if (func_229(131072))
	{
		if (!func_232(512))
		{
			StringCopy(&cVar7, "CAUNC_RIDETURN", 24);
			if (func_233(&uLocal_1286, cVar7, 0, -1, 0, 0))
			{
				func_236(512);
			}
		}
	}
}

void func_227(int iParam0)
{
	if (!PED::DOES_GROUP_EXIST(iLocal_95))
	{
		if (PED::IS_PED_IN_GROUP(iLocal_22))
		{
			iLocal_95 = PED::GET_PED_GROUP_INDEX(iLocal_22);
		}
		else
		{
			iLocal_95 = PED::CREATE_GROUP(2);
			PED::SET_PED_AS_GROUP_LEADER(iLocal_22, iLocal_95, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_22, 279, true);
		}
		PED::SET_GROUP_FORMATION(iLocal_95, 10);
	}
	if (((func_29(iLocal_22, 0) && !PED::IS_PED_IN_GROUP(iLocal_22)) && PED::DOES_GROUP_EXIST(iLocal_95)) && PED::IS_PED_ON_MOUNT(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_22, 279, true);
		PED::SET_PED_AS_GROUP_LEADER(iLocal_22, iLocal_95, 1);
	}
	else if (((func_29(iLocal_22, 0) && PED::IS_PED_IN_GROUP(iLocal_22)) && !PED::IS_PED_ON_MOUNT(Global_35)) && iParam0)
	{
		func_72(4);
		PED::REMOVE_PED_FROM_GROUP(iLocal_22);
	}
}

void func_228()
{
	if (!PED::IS_PED_ON_MOUNT(iLocal_22))
	{
		if ((!func_259(iLocal_22, 1868526510) && !ENTITY::IS_ENTITY_DEAD(iLocal_22)) && !ENTITY::IS_ENTITY_DEAD(iLocal_23))
		{
			TASK::TASK_MOUNT_ANIMAL(iLocal_22, iLocal_23, 30000, -1, 1f, 1, 0, 0);
			Local_1520.f_3 = Global_35;
			Local_1520.f_7 = 40000;
			Local_1520.f_20 = 4;
			Local_1520.f_19 = 4;
			Local_1520.f_17 = 0;
			Local_1520.f_18 = 0;
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_22, &Local_1520);
		}
		else if (ENTITY::IS_ENTITY_DEAD(iLocal_23))
		{
			func_595(4, 1, 1, 0, 0, 0, 0, 0);
			iLocal_23 = func_596(4, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_23))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_23, true);
			}
		}
	}
	else if (!func_259(iLocal_22, 713668775) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_22, vLocal_932, 3f, 4f, 4f, false, true, 0))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_22, vLocal_932, 0.55f, 20000, 0.25f, false, 40000f);
	}
}

bool func_229(int iParam0)
{
	return (iLocal_1797 && iParam0) != 0;
}

int func_230(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_597(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_598(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_597(sVar0, iParam1, 0, 0, 1, 1);
}

void func_231(int iParam0)
{
	if (func_229(iParam0))
	{
		return;
	}
	iLocal_1797 = (iLocal_1797 || iParam0);
}

bool func_232(int iParam0)
{
	return (uLocal_1798 && iParam0) != 0;
}

bool func_233(var uParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&cParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_599(cParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

void func_234(int iParam0)
{
	iParam0 = func_336(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_600(iParam0, 32);
	func_235();
}

void func_235()
{
	if (func_601(0))
	{
		func_602(0);
	}
	if (func_601(1))
	{
		func_602(1);
	}
	if (func_601(5))
	{
		func_602(5);
	}
	if (func_601(6))
	{
		func_603(6);
	}
}

void func_236(int iParam0)
{
	if (func_232(iParam0))
	{
		return;
	}
	uLocal_1798 = (uLocal_1798 || iParam0);
}

void func_237(char* sParam0)
{
	func_604(sParam0);
	func_210(&uLocal_1494);
}

void func_238(var uParam0)
{
	func_605(uParam0, 0f);
}

float func_239(var uParam0)
{
	if (!func_209(uParam0))
	{
		return 0f;
	}
	if (func_606(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_607() - uParam0->f_1);
}

int func_240(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return (func_608(sParam0, 0, 0, -1, -1, 0) && func_609());
}

struct<4> func_241(int iParam0)
{
	struct<4> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { func_610(0) };
			Var0.f_3 = 60.2491f;
			break;
		case 1:
			Var0 = { func_610(1) };
			Var0.f_3 = 281.7799f;
			break;
		case 2:
			Var0 = { func_610(2) };
			Var0.f_3 = 281.7799f;
			break;
		case 4:
			Var0 = { func_610(4) };
			Var0.f_3 = 114.4156f;
			break;
		case 5:
			Var0 = { func_610(5) };
			Var0.f_3 = 168.2971f;
			break;
		case 6:
			Var0 = { func_610(6) };
			Var0.f_3 = 354.3703f;
			break;
	}
	return Var0;
}

void func_242(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<4> Var4;

	if (Global_1391438->f_3 != iParam9)
	{
		func_108(0);
	}
	uParam0->f_7 = iParam9;
	Global_1391438->f_3 = iParam9;
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_611(uParam0->f_5, Var0, Var4, iParam9, iParam10);
}

int func_243(int iParam0, int iParam1, bool bParam2)
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

void func_244(int iParam0)
{
	func_81(iParam0, 8, 1);
}

void func_245()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3[24];

	if (func_29(iLocal_22, 0))
	{
		iVar0 = -1;
		iVar1 = -1;
		switch (iLocal_74)
		{
			case 0:
				if (!PED::IS_PED_ON_MOUNT(iLocal_22))
				{
					if ((!func_259(iLocal_22, 242628503) && !ENTITY::IS_ENTITY_DEAD(iLocal_22)) && !ENTITY::IS_ENTITY_DEAD(iLocal_23))
					{
						TASK::CLEAR_SEQUENCE_TASK(&iVar2);
						TASK::OPEN_SEQUENCE_TASK(&iVar2);
						TASK::TASK_GO_TO_ENTITY(0, iLocal_23, 30000, 2f, 1f, 1f, 0);
						TASK::TASK_MOUNT_ANIMAL(0, iLocal_23, 30000, -1, 2f, 1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar2);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_22, iVar2);
					}
					else if (ENTITY::IS_ENTITY_DEAD(iLocal_23))
					{
						func_595(4, 1, 1, 0, 0, 0, 0, 0);
						iLocal_23 = func_596(4, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_23))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_23, true);
						}
					}
				}
				else
				{
					if (((((PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_22, true) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && !func_259(iLocal_22, 658540077)) && ((func_593(Global_35) && func_612()) || !func_593(Global_35))) && PED::DOES_GROUP_EXIST(iLocal_95)) && PED::IS_PED_IN_GROUP(iLocal_22))
					{
						if (func_593(iLocal_22))
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_22, sLocal_1517, 0, 25602, -1, 0, 0, -1);
						}
						else
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_22, sLocal_1517, 0, 25608, -1, 0, 0, -1);
						}
						PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iLocal_23, -1082130432, -1082130432, 4, 2, 0);
						PED::_0x0E9E95FDEDCC9D35(Global_35, 0, 0);
						PED::SET_PED_CONFIG_FLAG(iLocal_22, 167, true);
						_NAMESPACE29::_0x0EABF182FBB63D72(iLocal_22, 6, 0);
						if (func_593(iLocal_22))
						{
							iLocal_74 = 1;
						}
						else
						{
							iLocal_74 = 2;
						}
					}
					if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_22, true) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
					{
						if (!TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_1517, ENTITY::GET_ENTITY_COORDS(iLocal_22, true, false), &iVar0))
						{
						}
						else if (!TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_1517, Global_36, &iVar1))
						{
						}
						else if (iVar1 >= func_613() && iVar0 >= func_613())
						{
							iLocal_74 = 4;
						}
					}
				}
				break;
			case 1:
				if ((!func_259(iLocal_22, 658540077) && !func_259(iLocal_22, 242628503)) || !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_22, true))
				{
					iLocal_74 = 0;
				}
				else if (!func_593(iLocal_22))
				{
					iLocal_74 = 2;
				}
				break;
			case 2:
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_22, 0) || !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_22, true))
				{
					iLocal_74 = 0;
				}
				else
				{
					func_614(iLocal_22, 2.001f, 0, 0.1f, 1, 7f, 20f, 35f, 1033476506, 1061158912, 1, 1, 1045220557, 0);
					if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, false))
					{
						if (func_221(Global_35, iLocal_22, 1, 1) <= 10f)
						{
							if (!func_209(&uLocal_1408))
							{
								func_238(&uLocal_1408);
							}
							else if (func_239(&uLocal_1408) > 8f)
							{
								if (!AUDIO::_0xA2CAC9DEF0195E6F(1) && iLocal_94 < iLocal_93)
								{
									StringCopy(&cVar3, "CAUNC_NOHORSE", 24);
									if (func_233(&uLocal_1286, cVar3, 0, -1, 0, 0))
									{
										iLocal_94++;
										func_238(&uLocal_1408);
									}
								}
							}
						}
					}
					if (!TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_1517, ENTITY::GET_ENTITY_COORDS(iLocal_22, true, false), &iVar0))
					{
					}
					else if (iVar0 >= func_594())
					{
						iLocal_74 = 4;
					}
				}
				break;
			case 4:
				if (func_272(Global_35))
				{
					if (func_265(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_22, false, false), &uLocal_1387, 1112014848, 1106247680, 5f, 1084227584, 1082130432, 0, 0, 1, 1, 1))
					{
						func_63(7);
					}
				}
				if (!func_259(iLocal_22, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_22, vLocal_935, 1.25f, 20000, 0.25f, true, fLocal_938);
				}
				else if (func_223(iLocal_22, vLocal_935, 1) < 3f)
				{
					PED::_0x89F5E7ADECCCB49C(iLocal_22, "Stealth");
					iLocal_74 = 5;
				}
				break;
			case 5:
				if (func_272(Global_35))
				{
					if (func_265(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_22, false, false), &uLocal_1387, 1112014848, 1106247680, 5f, 1084227584, 1082130432, 0, 0, 1, 1, 1))
					{
						func_63(7);
					}
				}
				if (func_259(iLocal_22, 658540077))
				{
					TASK::CLEAR_PED_TASKS(iLocal_22, 1, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_22, 167, false);
				}
				else if ((PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_22, true) && !func_259(iLocal_22, 501393341)) && !func_259(iLocal_22, 1920417248))
				{
					PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), iLocal_23);
					TASK::TASK_DISMOUNT_ANIMAL(iLocal_22, 64, 0, 0, 0, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_22, 167, false);
				}
				else if (!PED::IS_PED_ON_MOUNT(iLocal_22))
				{
					if (func_64(4, 0))
					{
						func_65(4);
					}
					if (func_29(iLocal_23, 0))
					{
						TASK::TASK_STAND_STILL(iLocal_23, -1);
					}
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_22, Global_35, -1, -1082130432, -1082130432, -1082130432);
					iLocal_74 = 6;
					func_244(4);
				}
				break;
			case 6:
				break;
		}
	}
}

void func_246()
{
	if ((CLOCK::GET_CLOCK_HOURS() < 4 && CLOCK::GET_CLOCK_HOURS() > 0) || CLOCK::GET_CLOCK_HOURS() > 4)
	{
		func_615(Global_35, vLocal_929, 4, 0, 0, 50f, 300f);
	}
	else
	{
		func_616(4, 0, 0, 0);
	}
}

bool func_247(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

int func_248()
{
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_1283))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1283);
		if (INTERIOR::IS_INTERIOR_READY(iLocal_1283))
		{
			if (!VOLUME::DOES_VOLUME_EXIST(iLocal_908))
			{
				iLocal_908 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1378.653f, -875.9824f, 70.15073f, 0f, 0f, 14.53047f, 3.153452f, 3.46254f, 2.191711f, "Rancher too close wakeup check");
			}
			else if (!VOLUME::DOES_VOLUME_EXIST(iLocal_909))
			{
				iLocal_909 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1378.509f, -869.1351f, 69.7963f, 0f, 0f, 15.4992f, 6.995067f, 9.077378f, 3.1563f, "Rancher porch interrupt check");
			}
			else if (iLocal_55 == 0)
			{
				iLocal_55 = GRAPHICS::_0x5D1C5D8E62E8EE1C(iLocal_1283);
			}
			else if (GRAPHICS::_0x113857D66A9CABE6(iLocal_55))
			{
				GRAPHICS::_0xBFCB17895BB99E4E(iLocal_55, false);
			}
			else
			{
				return 1;
			}
		}
	}
	else
	{
		iLocal_1283 = INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_926);
	}
	return 0;
}

int func_249()
{
	return 1;
	if (iLocal_56 == 0)
	{
		iLocal_56 = func_617(-1536551334);
	}
	if (GRAPHICS::_0x113857D66A9CABE6(iLocal_56))
	{
		GRAPHICS::_0xBFCB17895BB99E4E(iLocal_56, false);
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_250(bool bParam0)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_897))
	{
		iLocal_897 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1431.615f, -835.8602f, 58.87785f, 0.066662f, 9.410843f, 4.525022f, 67.16203f, 37.79922f, 7.926406f, "CURU Herding start vol");
		if (bParam0)
		{
			Local_96.f_188 = joaat("a_c_cow");
			func_618(&Local_96);
		}
	}
	else if (func_619(&Local_96, vLocal_968, 20, vLocal_971, vLocal_974, vLocal_977, joaat("a_c_cow"), -1612834106, iLocal_897, 0, 0, 0, 1, 0))
	{
		if (!VOLUME::DOES_VOLUME_EXIST(Local_96.f_694))
		{
			Local_96.f_694 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(659.9146f, -491.0696f, 87.56485f, 0f, 0f, 40.93697f, 341.5773f, 151.8329f, 116.7063f, "volLimitMovement");
		}
		func_620(&Local_96);
		func_261(1785985962, 1);
		func_261(283363467, 1);
		func_261(-22174689, 1);
		func_261(558917988, 1);
		return 1;
	}
	return 0;
}

int func_251()
{
	float fVar0;

	if (func_621())
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_920))
		{
			STREAMING::REQUEST_MODEL(829415368, false);
			if (STREAMING::HAS_MODEL_LOADED(829415368))
			{
				if (iLocal_919 == 0)
				{
					iLocal_919 = ENTITY::PIN_CLOSEST_MAP_ENTITY(829415368, vLocal_921, 9);
				}
				else if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_919))
				{
					iLocal_920 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(iLocal_919));
				}
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_925))
		{
			if (iLocal_924 == 0)
			{
				iLocal_924 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("p_cs_chainlink01x"), vLocal_921, 11);
			}
			else if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_924))
			{
				iLocal_925 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(iLocal_924));
			}
		}
		else
		{
			if (!VOLUME::DOES_VOLUME_EXIST(iLocal_899))
			{
				vLocal_921 = { ENTITY::GET_ENTITY_COORDS(iLocal_920, false, false) };
				fVar0 = ENTITY::GET_ENTITY_HEADING(iLocal_920);
				iLocal_899 = VOLUME::_CREATE_VOLUME_CYLINDER(vLocal_921, 0f, 0f, fVar0, 4f, 2f, 6f);
				ENTITY::_SET_ENTITY_HEALTH(iLocal_920, 50, 0);
				PHYSICS::SET_DISABLE_BREAKING(iLocal_920, false);
				PHYSICS::SET_DISABLE_FRAG_DAMAGE(iLocal_920, false);
				OBJECT::SET_OBJECT_TARGETTABLE(iLocal_920, false);
				PHYSICS::SET_DISABLE_BREAKING(iLocal_925, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_925, true);
				OBJECT::SET_OBJECT_TARGETTABLE(iLocal_925, false);
				PHYSICS::SET_DISABLE_FRAG_DAMAGE(iLocal_925, false);
				if (func_289(iLocal_1158) && !func_622(iLocal_1158))
				{
					func_261(iLocal_1158, 1);
				}
				if (func_289(iLocal_1159) && !func_622(iLocal_1159))
				{
					func_261(iLocal_1159, 1);
				}
				POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_899, 480, 0, 0, -1, -1, 0);
				POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_899, 480, 0, 0, -1, -1, 0);
			}
			if (VOLUME::DOES_VOLUME_EXIST(iLocal_899))
			{
				if (func_289(iLocal_1158) && func_623(iLocal_1158))
				{
					func_261(iLocal_1158, 1);
				}
				if (func_289(iLocal_1159) && !func_622(iLocal_1159))
				{
					func_261(iLocal_1159, 1);
				}
				return 1;
			}
			else if (!VOLUME::DOES_VOLUME_EXIST(iLocal_899))
			{
				return 0;
			}
		}
		return 0;
	}
	return 0;
}

int func_252()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_25))
	{
		return 1;
	}
	if (!func_249())
	{
		return 0;
	}
	if (!func_248())
	{
		return 0;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_910))
	{
		iLocal_910 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1397.281f, -852.8032f, 65.48918f, 0f, 0f, 17.41141f, 51.07673f, 40.1183f, 16.91399f, "Uncle can see KO vol");
		return 0;
	}
	if (func_624(760, 1))
	{
		iLocal_25 = func_625(760, 1, 0, 0, 1, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_25))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_25, true);
			func_626(&uLocal_1286, iLocal_25, "HILLHAVEN_RANCHER", 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_25, iLocal_1169);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_25, 1);
			ENTITY::SET_ENTITY_COORDS(iLocal_25, 1378.65f, -875.95f, 69.12f, true, false, true, true);
			func_261(1511858696, 1);
		}
	}
	return 0;
}

int func_253()
{
	bool bVar0;
	bool bVar1;

	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_27) && ENTITY::DOES_ENTITY_EXIST(iLocal_28)) && ENTITY::DOES_ENTITY_EXIST(iLocal_33)) && ENTITY::DOES_ENTITY_EXIST(iLocal_34))
	{
		func_627(vLocal_955, 15f, 0, 0, 1, 1, 0);
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_27))
	{
		iLocal_27 = func_628(iLocal_41, vLocal_939, fLocal_942, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_27, true);
		PED::_0x7DE9692C6F64CFE8(iLocal_27, true, 0, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_27, iLocal_1168);
		PED::SET_PED_HEARING_RANGE(iLocal_27, 30f);
		PED::_0x9238A3D970BBB0A9(iLocal_27, -820192119);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iLocal_27, 1, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_27, 6, true);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_27, func_629(16384, 1056964608, 1065353216), 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_28))
	{
		iLocal_28 = func_628(iLocal_41, vLocal_943, fLocal_946, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_28, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_28, iLocal_1168);
		PED::SET_PED_HEARING_RANGE(iLocal_28, 30f);
		PED::_0x9238A3D970BBB0A9(iLocal_28, -820192119);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iLocal_28, 1, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_28, 6, true);
		bVar1 = WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_28, func_630(138240, 1056964608, 1065353216), 60, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_33))
	{
		iLocal_33 = OBJECT::CREATE_OBJECT(iLocal_44, vLocal_955, true, true, false, false, true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_33, 160);
		ENTITY::SET_ENTITY_PROOFS(iLocal_33, 9, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_33, true);
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34))
	{
		iLocal_34 = OBJECT::CREATE_OBJECT(iLocal_44, vLocal_958, true, true, false, false, true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_34, 160);
		ENTITY::SET_ENTITY_PROOFS(iLocal_34, 9, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_34, true);
	}
	return 0;
}

int func_254()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_29) && ENTITY::DOES_ENTITY_EXIST(iLocal_30))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_29))
	{
		iLocal_29 = func_628(iLocal_42, vLocal_947, fLocal_950, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		func_631(iLocal_29, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_29, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_29, 6, true);
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_30))
	{
		iLocal_30 = func_628(iLocal_43, vLocal_951, fLocal_954, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_30, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_30, 6, true);
		func_631(iLocal_30, 1);
	}
	return 0;
}

int func_255()
{
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_901))
	{
		iLocal_901 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1398.507f, -889.322f, 64.59841f, 0f, 0f, -30.30944f, 2.183321f, 4.251626f, 3.228534f, "Player cover safe zone 1");
	}
	else if (!VOLUME::DOES_VOLUME_EXIST(iLocal_902))
	{
		iLocal_902 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1400.308f, -885.0298f, 64.20551f, 0f, 0f, -10.84263f, 2.846307f, 5.442308f, 3.835784f, "Player cover safe zone 2");
	}
	else if (!VOLUME::DOES_VOLUME_EXIST(iLocal_903))
	{
		iLocal_903 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1396.194f, -891.5717f, 65.05345f, 0f, 0f, -52.51001f, 1.77192f, 2.99292f, 2.722458f, "Player cover safe zone 3");
	}
	else if (!VOLUME::DOES_VOLUME_EXIST(iLocal_904))
	{
		iLocal_904 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_986, vLocal_989, vLocal_992, "Pla