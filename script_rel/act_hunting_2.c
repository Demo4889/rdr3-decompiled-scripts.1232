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
	struct<642> Local_15 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0 } ;
	var uLocal_657 = 2;
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
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 2;
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
	var uLocal_723 = 10;
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
	var uLocal_788 = 0;
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
	var uLocal_884 = 2;
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
	var uLocal_917 = 3;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
	{
		func_1(&uScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2(&uScriptParam_0, &uLocal_657);
	while (!func_3(&uScriptParam_0))
	{
		func_5(&uScriptParam_0, &uLocal_657, func_4());
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
				func_42(&uLocal_657);
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

	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED() > 0)
	{
		PED::_UNRESERVE_AMBIENT_PEDS(PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED());
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_307[0])))
	{
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[0]), 297, false);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[0]), 315, false);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[0]), 130, false);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[0]), 331, false);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[0]), 330, false);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[0]), 279, false);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[0]), 167, false);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[0]), 512, false);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 473, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 474, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 475, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 258, false);
	PED::_0x949B2F9ED2917F5D(Global_35, 3);
	PED::_0x949B2F9ED2917F5D(Global_35, 4);
	PED::_0x949B2F9ED2917F5D(Global_35, 1);
	PED::_0x949B2F9ED2917F5D(Global_35, 23);
	PED::_0x949B2F9ED2917F5D(Global_35, 24);
	PED::_ENABLE_HUD_CONTEXT_THIS_FRAME(Global_35, 1);
	PED::_ENABLE_HUD_CONTEXT_THIS_FRAME(Global_35, 32);
	PED::_ENABLE_HUD_CONTEXT_THIS_FRAME(Global_35, 8);
	PED::_ENABLE_HUD_CONTEXT_THIS_FRAME(Global_35, 16);
	PED::_ENABLE_HUD_CONTEXT_THIS_FRAME(Global_35, 4);
	PED::_ENABLE_HUD_CONTEXT_THIS_FRAME(Global_35, 128);
	if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_307[2])))
	{
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[2]), 136, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_307[17])))
	{
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[17]), 159, false);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[17]), 225, false);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[17]), 297, false);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[17]), 130, false);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[17]), 315, false);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[17]), 351, false);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[17]), 21, false);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[17]), 302, false);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[17]), 360, false);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[17]), 317, false);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[17]), 359, false);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[17]), 213, false);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[17]), 6, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_307[18])))
	{
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[18]), 301, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_307[19])))
	{
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[19]), 301, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_307[13])))
	{
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[13]), 186, false);
	}
	if (func_10(uParam0->f_2))
	{
		func_61(uParam0->f_2, 0);
		func_62(uParam0->f_2, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_307[1])))
	{
		func_63(&(Local_15.f_307[1]), uParam0->f_2, 1, 0, 0);
	}
	func_64(&(Local_15.f_53[7]));
	PATHFIND::RESET_ROADS_IN_VOLUME(&(Local_15.f_53[19]), 0);
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (VOLUME::DOES_VOLUME_EXIST(&(Local_15.f_53[iVar0])))
		{
			VOLUME::DELETE_VOLUME(&(Local_15.f_53[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 16;
	while (iVar0 <= 17)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_307[iVar0])))
		{
			func_65(Local_15.f_307[iVar0], 1);
		}
		iVar0++;
	}
	iVar0 = 3;
	while (iVar0 <= 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_307[iVar0])))
		{
			func_65(Local_15.f_307[iVar0], 1);
		}
		iVar0++;
	}
	iVar0 = 10;
	while (iVar0 <= 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_307[iVar0])))
		{
			if (iVar0 == 13)
			{
				PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[iVar0]), 186, false);
			}
			func_65(Local_15.f_307[iVar0], 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 32)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_466[iVar0])))
		{
			OBJECT::DELETE_OBJECT(Local_15.f_466[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 40)
	{
		Local_15.f_204[iVar0] = 0;
		iVar0++;
	}
	func_67(Local_15.f_418, func_66(Local_15.f_418));
	func_67(Local_15.f_419, func_66(Local_15.f_419));
	func_68(&(Local_15.f_421));
	if (Local_15.f_423 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&(Local_15.f_423), 1);
		Local_15.f_423 = -1;
	}
	if (Local_15.f_424 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&(Local_15.f_424), 1);
		Local_15.f_424 = -1;
	}
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	func_69(1410198831);
	func_70(7);
	TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_LOCKBOX_LRG_LOCKED", true);
	STREAMING::_0x9F348DE670423460(func_71(0));
	STREAMING::_0x9F348DE670423460(func_71(1));
	STREAMING::_0x9F348DE670423460(func_71(2));
	STREAMING::_0x9F348DE670423460(func_71(3));
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
	func_72(iParam0, 8, 0);
}

bool func_10(int iParam0)
{
	if (!func_58(iParam0))
	{
		return false;
	}
	if (!func_73(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_11(var uParam0, int iParam1)
{
	if (uParam0->f_8 > 0f && uParam0->f_14 == 1)
	{
		func_62(iParam1, 0, 0, 0, uParam0->f_8, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		AUDIO::STOP_PED_SPEAKING(func_74(iParam1), false);
		func_62(iParam1, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	}
}

void func_12()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_58(iVar0) && func_75(iVar0, 1))
		{
			func_76(iVar0);
		}
		iVar0++;
	}
}

bool func_13(int iParam0)
{
	int iVar0;

	iVar0 = func_77(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_14(int iParam0)
{
	int iVar0;

	if (!func_78(iParam0))
	{
		return;
	}
	if (iParam0 != func_79(0))
	{
		return;
	}
	if (func_80(iParam0) == 0)
	{
	}
	iVar0 = func_81(iParam0);
	if (func_82(iParam0) == 3)
	{
		if (func_80(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_80(iParam0)))
		{
			if (func_81(iParam0) != 1 && func_81(iParam0) != 8)
			{
				func_83(func_81(iParam0), func_80(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_84(iParam0);
	func_32(1);
	func_33(0);
	func_85(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_86(1);
			func_87(15, 0, 1);
			break;
		case 4:
			func_87(10, 0, 1);
			break;
		case 8:
			func_87(10, 0, 1);
			break;
		case 9:
			func_87(10, 0, 1);
			break;
		case 2:
			func_87(10, 0, 1);
			break;
		case 6:
			func_87(10, 0, 1);
			break;
		case 5:
			func_87(10, 0, 1);
			break;
	}
	func_88(1);
}

void func_15(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_89(Global_1347343->f_11, 536870912))
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
	if (func_90() >= 2)
	{
		if (!func_89(Global_1347343->f_11, 16384))
		{
			func_43(&(Global_1347343->f_11), 8);
		}
		func_91(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_92(Global_1935630, 2048);
	func_93(bParam5);
}

void func_16(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_78(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_13(iParam0) && !func_94(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_80(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_13(iParam0))
	{
		iParam2 = -1;
	}
	if (func_82(iParam0) == 3 || (func_82(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_80(iParam0))))
	{
		func_83(func_81(iParam0), func_80(iParam0), iParam2);
		if ((!func_78(Global_1572864->f_8) && !func_95(0, 1, 0)) && !func_96(&Global_1935630, 32768))
		{
			iVar0 = func_97(iParam0);
			if (iVar0 != -1)
			{
				func_98(0);
			}
			else if (func_81(iParam0) == 8)
			{
				iVar0 = func_99();
				if (iVar0 != -1)
				{
					func_98(0);
				}
			}
		}
	}
	func_85(iParam0, 0);
	if (func_79(0) == iParam0)
	{
		func_32(1);
		func_33(0);
		func_88(1);
	}
	func_100(iParam0, 1);
	func_84(iParam0);
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
	func_101(0);
	func_102(0);
	func_103(0);
	func_104(0);
	func_105(0);
	func_91(1f);
}

void func_19(var uParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	char cVar2[64];
	int iVar10;

	if (!func_106(uParam0->f_1))
	{
		return;
	}
	sVar0 = func_107(uParam0->f_1);
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar1))
	{
		StringCopy(&cVar2, MISC::_CREATE_VAR_STRING(2, func_108(*uParam0)), 64);
		StringConCat(&cVar2, " - ", 64);
		StringConCat(&cVar2, MISC::_CREATE_VAR_STRING(2, func_109(uParam0->f_2, 0)), 64);
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar1, Global_36, MISC::GET_HASH_KEY(func_108(*uParam0)), func_110(uParam0->f_1), iVar10);
		UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar1, &cVar2);
		UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar1, func_111(*uParam0), 676312963);
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar1, func_112(uParam0->f_1), func_113(uParam0->f_1));
	}
	else if (bParam2)
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar1);
		return;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar1, func_110(uParam0->f_1), "", bParam1, 0, 0);
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

	if (!func_78(iParam0))
	{
		return;
	}
	if (func_77(iParam0) == 4)
	{
		func_115(iParam0, func_114());
		if (!func_82(iParam0) == 5 && !func_82(iParam0) == 6)
		{
			if (bParam3)
			{
				func_85(iParam0, 6);
			}
			else
			{
				func_85(iParam0, 5);
			}
			func_84(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_32(1);
	}
	iVar0 = func_81(iParam0);
	bVar1 = func_116() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_117(0, 2);
		if (!bVar1 && bParam1)
		{
			func_118();
		}
	}
	else
	{
		func_33(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_119(iParam0);
	}
	else
	{
		Var2 = { func_120(-1876607090) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_20(32768))
		{
			Var4 = { func_120(773573510) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_82(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_121(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[76 /*74*/])->f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_121(iParam0) /*74*/])->f_8), true);
						}
					}
					else if ((func_121(iParam0) != 95 && func_121(iParam0) != 82) && !func_122(((*Global_1347702)[func_121(iParam0) /*49*/])->f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1347702)[func_121(iParam0) /*49*/])->f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_121(iParam0) /*74*/])->f_8), true);
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
		func_124(func_121(iParam0), iVar6, func_123());
	}
	else if (iVar0 == 8)
	{
		func_126(func_121(iParam0), iVar6, func_123(), func_125());
	}
	if (!func_82(iParam0) == 5 && !func_82(iParam0) == 6)
	{
		iVar9 = func_127(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_128(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_129(func_121(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_130((iVar10 - 20), 0, iVar10);
					iVar11 = func_130((iVar11 - 10), 0, iVar11);
				}
				func_86(1);
				func_87(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_87(45, 0, 1);
				break;
			case 8:
				iVar10 = func_131(func_121(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_130((iVar10 - 20), 0, iVar10);
					iVar11 = func_130((iVar11 - 10), 0, iVar11);
				}
				func_87(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				if (func_132(func_121(iParam0)))
				{
					func_133(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_87(120, 0, 1);
				break;
			case 2:
				func_87(120, 0, 1);
				break;
			case 6:
				func_87(func_135(func_134(iParam0)), 0, 1);
				break;
			case 5:
				func_87(120, 0, 1);
				break;
		}
	}
	func_100(iParam0, 1);
	func_115(iParam0, func_114());
	func_84(iParam0);
	if ((!func_82(iParam0) == 0 && bParam1) && func_116() == -1)
	{
		iVar12 = func_97(iParam0);
		if (iVar12 != -1)
		{
			func_98(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_99();
			if (iVar12 != -1)
			{
				func_98(0);
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
				switch (func_121(iParam0))
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
				if (func_136(func_121(iParam0)) && func_122(((*Global_1347702)[func_121(iParam0) /*49*/])->f_12, 4))
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
				if (func_121(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_137();
				}
				break;
			case 8:
				if (func_121(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_137();
				}
				break;
		}
	}
	if (!func_82(iParam0) == 5 && !func_82(iParam0) == 6)
	{
		if (bParam3)
		{
			func_85(iParam0, 6);
		}
		else
		{
			func_85(iParam0, 5);
		}
		func_84(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_121(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::MAP_DISCOVER_REGION(-1753910767);
						break;
					case 1:
						func_138();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_139(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140(-1267972061);
						func_139(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140(1619534881);
						func_139(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140(-755457379);
						func_139(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140(1015404643);
						func_139(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140(-1724192342);
						func_139(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140(1310680212);
						func_139(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140(-566881549);
						func_139(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140(-1753730528);
						func_139(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140(147796381);
						func_139(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140(-378547623);
						func_139(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140(829545206);
						func_139(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140(891318243);
						func_139(joaat("weapon_kit_camera"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_141();
						func_142(967523420);
						func_143();
						func_144();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_109(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131);
						break;
					case 15:
						func_139(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1231074654))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1231074654, true);
							func_145(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1880205078))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1880205078, true);
							func_145(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_146(304805134, 1, 1);
						if (!func_147(((*Global_1347702)[21 /*49*/])->f_15, 1))
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
						func_148();
						break;
					case 26:
						func_149();
						break;
					case 17:
						func_150(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_151())
						{
							func_152(joaat("weapon_repeater_evans"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_153(-514575035, -1))
						{
							iVar15 = func_114();
							func_154(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_155(-514575035, iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_151())
						{
							func_152(joaat("weapon_revolver_lemat"));
						}
						break;
					case 34:
						if (func_151())
						{
							func_152(joaat("weapon_revolver_doubleaction_gambler"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_156();
						break;
					case 37:
						func_157();
						if (func_158())
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
						func_159();
						break;
					case 43:
						func_160();
						break;
					case 44:
						if (!func_147(((*Global_1347702)[82 /*49*/])->f_15, 1))
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
						if (!func_147(((*Global_1347702)[83 /*49*/])->f_15, 1))
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
						func_161();
						break;
					case 59:
						func_162();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_163();
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
						func_164();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1673898385))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1673898385, true);
							func_145(451, 0);
						}
						if (!func_165(-1992824800))
						{
							if (func_165(1520110311))
							{
								iVar16 = func_114();
								func_154(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_155(1937177603, iVar16, 1);
							}
						}
						if (func_166(4))
						{
							if (!func_167(684296857, 1, 0))
							{
								iVar17 = func_114();
								func_154(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_155(-1439688706, iVar17, 1);
							}
						}
						func_139(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_168(89200);
						func_168(2300);
						func_168(2300);
						break;
					case 68:
						func_169();
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
						func_170();
						func_168(-139100);
						break;
					case 69:
						if (func_147(((*Global_1347702)[9 /*49*/])->f_15, 1))
						{
							func_168(-6000);
						}
						break;
					case 70:
						func_168(23400);
						func_168(1900);
						func_168(-15000);
						break;
					case 71:
						func_168(-5500);
						break;
				}
				break;
			case 8:
				switch (func_121(iParam0))
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
						func_171();
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
						func_172();
						break;
					case 66:
						func_173();
						func_174();
						break;
					case 67:
						if (!func_175(6))
						{
							func_176(6);
						}
						if (!func_175(3))
						{
							func_176(3);
						}
						if (func_151())
						{
							func_152(joaat("weapon_pistol_m1899"));
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
						if (func_147(((*Global_1835011)[69 /*74*/])->f_1, 1))
						{
							func_177(0);
							func_168(40500);
						}
						else
						{
							func_177(0);
							func_168(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_121(iParam0))
				{
					case 0:
						switch (func_134(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_178(iParam0);
		func_179();
		switch (iVar0)
		{
			case 1:
				switch (func_121(iParam0))
				{
					case 4:
						func_180(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_180(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_180(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_180(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_180(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_180(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_180(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_181(iParam0);
						func_180(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_180(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_180(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_167(-2046502963, 1, 0))
						{
							func_139(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_180(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_180(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_180(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_181(iParam0) == 0)
						{
							func_180(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_180(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_122(((*Global_1347702)[func_121(iParam0) /*49*/])->f_12, 536870912))
				{
					func_182(11, 1);
				}
				switch (func_121(iParam0))
				{
					case 109:
						func_180(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_182(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_180(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_180(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_180(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_180(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_183(0, 10, 11, 2116153146))
				{
					func_180(iParam0, func_181(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_183(0, 7, 11, -379687487))
				{
					func_180(iParam0, func_184(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_183(0, 8, 11, -1386089015))
				{
					func_180(iParam0, func_184(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_183(0, 11, 11, -1952009645))
				{
					func_180(iParam0, func_184(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_183(0, 12, 11, 2065895756))
				{
					func_180(iParam0, func_184(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_82(iParam0) == 0)
			{
				if (func_80(iParam0) == 0)
				{
				}
				else if (STATS::STATSTRACKER_IS_INITIALIZED(func_80(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_83(func_81(iParam0), func_80(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_121(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_186(func_185(Global_1879514->f_1));
						if (iVar0 == 8 && func_121(iParam0) == 58)
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
						if (func_136(func_121(iParam0)) && func_122(((*Global_1347702)[func_121(iParam0) /*49*/])->f_12, 1))
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
			func_187(bParam2, iVar20);
		}
	}
	func_88(1);
	if ((bVar13 || func_137()) && (func_81(iParam0) == 1 || func_81(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_22(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (STATS::STATSTRACKER_IS_INITIALIZED(func_80(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_83(func_81(iParam0), func_80(iParam0), iVar0);
		if (func_20(32768))
		{
			iVar1 = func_81(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_183(0, 10, 11, 2116153146)))
			{
				Global_1898438 = MISC::GET_GAME_TIMER();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_24();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_94(iParam0))
	{
		func_16(iParam0, 0, 2);
	}
	else if (func_13(iParam0))
	{
		if (!func_82(iParam0) == 5 && !func_82(iParam0) == 6)
		{
			if (bParam1)
			{
				func_85(iParam0, 6);
			}
			else
			{
				func_85(iParam0, 5);
			}
			func_84(iParam0);
		}
	}
	switch (func_81(iParam0))
	{
		case 1:
			switch (func_121(iParam0))
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
			switch (func_121(iParam0))
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
		switch (func_188())
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

	iVar0 = func_189(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_190(iVar0))
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

	func_191(4112);
	func_192(6);
	vVar2 = { func_193(((*Global_2621440)[0 /*12065*/])->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_194(vVar2, uVar1, uVar0, 0);
	func_195(vVar2);
	Global_40.f_9.f_15 = func_196(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_26(int iParam0)
{
	if (func_116() != -1)
	{
		return;
	}
	func_191(32);
	if (iParam0 == 0)
	{
		func_191(16);
	}
	else if (iParam0 == 1)
	{
		func_191(8);
	}
	func_197();
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
	StringConCat(&cVar0, func_198(iParam0), 64);
	return cVar0;
}

struct<8> func_28(int iParam0)
{
	struct<8> Var0;

	if (!func_58(iParam0))
	{
		return Var0;
	}
	StringCopy(&Var0, func_198(iParam0), 64);
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
	if (func_199(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_199(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_199(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_199(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_199(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_199(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return 0;
		}
	}
	if (func_199(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_199(iVar0, 256))
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
	switch (func_116())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

int func_31(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_196(vParam0, 1);
	if (iVar0 == func_200())
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
		func_92(Global_1935630, 4194304);
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
	if (!bParam0 && func_201(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
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
	if (func_202(uParam0->f_44))
	{
		func_203(&(uParam0->f_44), 1, 1);
	}
	if (func_204(&(uParam0->f_45)))
	{
		func_205(&(uParam0->f_45));
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
		if (!func_206(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_207(uParam0, 0))
			{
				if (func_208(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_209(uParam0, 1, &iVar0))
					{
					}
					if (func_210(uParam0, 3, &cVar2))
					{
					}
					if (func_209(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_209(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_209(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_209(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_209(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 2 && uParam0->f_273 < 2)
						{
							if (!func_211(uParam0, &cVar2, uParam0->f_273))
							{
								*((*uParam0)[uParam0->f_273 /*16*/]) = { cVar2 };
								func_212((*uParam0)[uParam0->f_273 /*16*/], 1048576);
								uParam0->f_273++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 2 && uParam0->f_274 < 2)
						{
							*(uParam0->f_33[uParam0->f_274 /*16*/]) = { cVar2 };
							func_212(uParam0->f_33[uParam0->f_274 /*16*/], 1048576);
							uParam0->f_274++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 10 && uParam0->f_275 < 10)
						{
							*(uParam0->f_66[uParam0->f_275 /*16*/]) = { cVar2 };
							func_212(uParam0->f_66[uParam0->f_275 /*16*/], 1048576);
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
						if (!func_211(&(uParam0->f_227), &cVar2, uParam0->f_276))
						{
							*(uParam0->f_227[uParam0->f_276 /*16*/]) = { cVar2 };
							func_212(uParam0->f_227[uParam0->f_276 /*16*/], 1048576);
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
			if (func_207(uParam0, 12))
			{
				if (func_209(uParam0, 13, &iVar0))
				{
				}
				if (func_209(uParam0, 14, &iVar1))
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
		func_213(uParam0);
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
	if (func_199(Local_15.f_631, 8192))
	{
		StringCopy(&(uParam0->f_15), "H2_FL_ABND", 24);
		uParam0->f_14 = 2;
		AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_FAIL");
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(&(Local_15.f_307[2])) || PED::IS_PED_FATALLY_INJURED(&(Local_15.f_307[2])))
	{
		StringCopy(&(uParam0->f_15), "H2_FL_KPLH", 24);
		uParam0->f_14 = 2;
		AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_FAIL");
		return 1;
	}
	if ((ENTITY::DOES_THREAD_OWN_THIS_ENTITY(&(Local_15.f_307[1])) && ENTITY::IS_ENTITY_DEAD(&(Local_15.f_307[1]))) || PED::IS_PED_FATALLY_INJURED(&(Local_15.f_307[1])))
	{
		StringCopy(&(uParam0->f_15), "H2_FL_KCPH", 24);
		uParam0->f_14 = 2;
		AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_FAIL");
		return 1;
	}
	if (func_214(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		StringCopy(&(uParam0->f_15), "H2_FL_WPL", 24);
		uParam0->f_14 = 2;
		AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_FAIL");
		return 1;
	}
	if (func_199(Local_15.f_631, 65536))
	{
		StringCopy(&(uParam0->f_15), "H2_FL_KLDB", 24);
		uParam0->f_14 = 2;
		AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_FAIL");
		return 1;
	}
	if (func_199(Local_15.f_631, 2097152))
	{
		StringCopy(&(uParam0->f_15), "H2_FL_DSPLT", 24);
		uParam0->f_14 = 2;
		AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_FAIL");
		return 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(Local_15.f_307[0]), Global_35, 1, 1))
	{
		StringCopy(&(uParam0->f_15), "H2_FL_AGRC", 24);
		uParam0->f_14 = 2;
		AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_FAIL");
		return 1;
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
	if (!func_29(func_74(uParam0->f_2), 0))
	{
		uParam0->f_14 = 4;
		return 1;
	}
	return 0;
}

void func_41(bool bParam0, bool bParam1)
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
		func_215(0);
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

void func_42(var uParam0)
{
	func_216(3, &(uParam0->f_66));
}

void func_43(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_44(var uParam0)
{
	if (!func_29(func_74(uParam0->f_2), 0))
	{
		return;
	}
	if (!func_204(&(uParam0->f_48)))
	{
		func_60(&(uParam0->f_48), 0);
	}
	switch (uParam0->f_13)
	{
		case 2:
			if (!func_217(&(uParam0->f_10), 1))
			{
				if (!PED::IS_PED_ON_FOOT(Global_35))
				{
					if (!uParam0->f_51)
					{
						uParam0->f_51 = 1;
						func_218(&(uParam0->f_48));
					}
					else if (func_219(&(uParam0->f_48)) > 5f)
					{
						func_220(&(uParam0->f_10), 1, 1);
						func_221(uParam0, "departLine", 0, 0, 0, -1);
						func_218(&(uParam0->f_48));
					}
				}
			}
			break;
		case 3:
			if (!func_217(&(uParam0->f_10), 1))
			{
				if (func_219(&(uParam0->f_48)) > 4f)
				{
					func_220(&(uParam0->f_10), 1, 1);
					func_221(uParam0, "departLine", 0, 0, 0, -1);
					func_218(&(uParam0->f_48));
				}
				return;
			}
			if (!func_217(&(uParam0->f_10), 2))
			{
				if (func_223(Global_35, func_222(), 1) > 150f)
				{
					func_220(&(uParam0->f_10), 2, 1);
					func_221(uParam0, "rideBanter", 0, 0, 0, -1);
				}
			}
			break;
		case 4:
			break;
	}
}

int func_45(var uParam0)
{
	if (Local_15 < 10)
	{
		func_224();
		func_225();
		func_226();
		func_227(uParam0);
		func_228(uParam0);
		func_229();
		ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 15, 1);
		if (func_230())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_375))
			{
				ENTITY::_0xC3ABCFBC7D74AFA5(Local_15.f_375, 12, 1);
			}
			if (PED::GET_PED_CONFIG_FLAG(&(Local_15.f_307[2]), 136, true))
			{
				PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[2]), 136, false);
			}
		}
		if (Local_15.f_568)
		{
			func_231();
		}
		if (func_232(0))
		{
			PLAYER::_0xC71D07C96946E263(PLAYER::PLAYER_ID(), &(Local_15.f_307[2]));
		}
	}
	switch (Local_15)
	{
		case 0:
			if (!func_29(&(Local_15.f_307[0]), 0))
			{
				return 0;
			}
			if (ENTITY::IS_ENTITY_DEAD(&(Local_15.f_307[1])))
			{
				return 0;
			}
			func_233(0, 0);
			func_235(uParam0, func_234(0), func_234(1), 0, 1);
			func_236(1, 1);
			break;
		case 1:
			if (func_237(uParam0))
			{
				func_236(2, 1);
			}
			break;
		case 2:
			if (func_238(uParam0))
			{
				func_236(3, 1);
			}
			break;
		case 3:
			if (func_239(uParam0))
			{
				func_236(4, 1);
			}
			break;
		case 4:
			PED::SET_PED_RESET_FLAG(&(Local_15.f_307[0]), 179, true);
			func_240();
			if (func_241(uParam0))
			{
				func_236(5, 1);
			}
			break;
		case 5:
			func_242(&(Local_15.f_421), 877.5134f, 418.416f, 110.7355f, "scr_campfire_distance_smoke_sma");
			func_240();
			if (func_243(uParam0))
			{
				func_236(6, 1);
			}
			break;
		case 6:
			func_242(&(Local_15.f_421), 877.5134f, 418.416f, 110.7355f, "scr_campfire_distance_smoke_sma");
			func_240();
			if (func_244(uParam0))
			{
				func_236(7, 1);
			}
			break;
		case 7:
			PED::SET_PED_RESET_FLAG(&(Local_15.f_307[0]), 179, true);
			ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 0, 1);
			func_240();
			func_242(&(Local_15.f_421), 877.5134f, 418.416f, 110.7355f, "scr_campfire_distance_smoke_sma");
			if (func_245(uParam0))
			{
				func_236(8, 1);
			}
			break;
		case 8:
			PED::SET_PED_RESET_FLAG(&(Local_15.f_307[0]), 179, true);
			ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 0, 1);
			func_242(&(Local_15.f_421), 877.5134f, 418.416f, 110.7355f, "scr_campfire_distance_smoke_sma");
			func_246();
			if (func_247(uParam0))
			{
				func_236(9, 1);
			}
			break;
		case 9:
			func_242(&(Local_15.f_421), 877.5134f, 418.416f, 110.7355f, "scr_campfire_distance_smoke_sma");
			if (func_223(&(Local_15.f_307[17]), 872.5671f, 417.5553f, 110.7346f, 1) > 2f)
			{
				func_248(&(Local_15.f_307[17]), &(Local_15.f_632), 0f, 0f, 0.5f, 0, 1106247680, 20f, -1, 1000, 1000, 0.5f, 1, 1, 1084227584);
			}
			if (func_249(uParam0))
			{
				func_236(10, 1);
			}
			break;
		case 10:
			func_235(uParam0, func_234(8), func_234(8), 8, 8);
			uParam0->f_14 = 1;
			uParam0->f_13 = 6;
			func_236(11, 1);
			break;
		case 11:
			return 1;
	}
	return 0;
}

int func_46(var uParam0)
{
	if (func_8(&(uParam0->f_9), 4))
	{
		if (!func_250(uParam0))
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
		if (func_252(&(uParam0->f_3), func_251(iVar0)))
		{
			if (func_253(iVar0))
			{
				if (!func_10(iVar0))
				{
					func_254(iVar0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					return 0;
				}
				if (((!func_75(iVar0, 0) && uParam0->f_1 != -103573613) && uParam0->f_1 != 194099983) && uParam0->f_1 != 2038046186)
				{
					func_255(iVar0, 0);
					AUDIO::STOP_PED_SPEAKING(func_74(iVar0), true);
				}
			}
			else if (!func_10(iVar0))
			{
				func_254(iVar0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				return 0;
			}
		}
		iVar0++;
	}
	if (!func_256(uParam0))
	{
		return 0;
	}
	func_257(uParam0);
	if (func_8(&(uParam0->f_9), 128))
	{
		if (!func_258(uParam0))
		{
			return 0;
		}
	}
	sVar1 = func_107(uParam0->f_1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		MISC::_0x1096603B519C905F(sVar1);
	}
	if (func_259())
	{
		func_260(1);
	}
	func_261(64);
	func_32(1);
	func_92(Global_1935630, 256);
	if (func_29(Global_35, 0))
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	}
	if (!func_20(32768))
	{
		func_262(Global_36, ENTITY::GET_ENTITY_HEADING(Global_35));
	}
	return 1;
}

int func_50()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_51(var uParam0)
{
	if (func_8(&(uParam0->f_9), 4))
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_27, false))
		{
			return 1;
		}
	}
	else if (func_263(uParam0))
	{
		if (func_264(uParam0))
		{
			return 1;
		}
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
	switch (func_265(uParam1))
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
		func_212(sParam0, 1);
		return 1;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_212(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_212(sParam0, 1);
			return 0;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_212(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_212(sParam0, 1);
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
		func_212(sParam0, 1);
		return 1;
	}
	func_212(sParam0, 1);
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
		if (!func_266(iParam0))
		{
			return;
		}
	}
	func_267(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_60(var uParam0, int iParam1)
{
	if (iParam1 || !func_204(uParam0))
	{
		func_218(uParam0);
	}
}

void func_61(int iParam0, bool bParam1)
{
	if (!func_266(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_74(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_74(iParam0), 204, false);
	}
}

void func_62(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_58(iParam0))
	{
		return;
	}
	if (func_73(iParam0))
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
	func_268(iParam0, 0);
	func_72(iParam0, 4, 0);
	func_9(iParam0);
	func_269(iParam0);
	func_270(iParam0, 37, 1);
	bVar0 = func_29(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_271(iParam0, 0);
	bVar2 = _NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_272(iParam0, 64, 1))
	{
		func_270(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_270(iParam0, 33, 1);
		func_270(iParam0, 34, 1);
		func_273(iParam0, 1056964608, -1, 1061158912);
		func_274(iParam0, 1, 1, 0);
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
			func_61(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		}
		if (bVar2)
		{
			_NAMESPACE48::_0xBB68908CD11AEBDC(iVar1);
		}
		func_270(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_59(iParam0, 33, 1);
		func_274(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_60(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_205(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
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
			func_275(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_272(iParam0, 45, 1))
	{
		func_270(iParam0, 45, 1);
	}
	func_276(iParam0, 16, 1);
	func_270(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_29(func_277(iParam0), 0))
		{
			func_63(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_63(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_266(iParam1))
	{
		return;
	}
	iVar0 = func_277(iParam1);
	if (func_278(iParam1))
	{
		if (!func_279(iParam1))
		{
			return;
		}
	}
	func_270(iParam1, 39, 1);
	func_280(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_280(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_280(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_59(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_281(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_64(int iParam0)
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

void func_65(int* iParam0, bool bParam1)
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

char* func_66(int iParam0)
{
	if (iParam0 == Local_15.f_418)
	{
		return "script@common@cnv_camp@cachr@hunt02@ig1_confront@hunt02_ig1";
	}
	else if (iParam0 == Local_15.f_419)
	{
		return "script@common@cnv_camp@cachr@hunt02@ig2_let_go@action";
	}
	return "";
}

void func_67(int iParam0, var uParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
}

void func_68(var uParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(*uParam0, false);
		STREAMING::REMOVE_NAMED_PTFX_ASSET(-458373790);
		func_282(&(uParam0->f_1), 4);
	}
}

void func_69(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_283(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::CLEAR_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::CLEAR_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_70(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_285(iParam0, 32);
	func_286();
}

char* func_71(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@MOUNTED@INTIMIDATION@LOCO@ATTACKER";
		case 1:
			return "CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@MOUNTED@INTIMIDATION@LOCO@VICTIM";
		case 2:
			return "CLIPSET@MECH_MELEE@UNARMED@_MALE@_AMBIENT@_HEALTHY@INTIMIDATION@ON_KNEES@_STREAMED";
		case 3:
			return "CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@MOUNTED@INTIMIDATION@ON_KNEES@_BASE";
		default:
			break;
	}
	return "";
}

void func_72(int iParam0, int iParam1, bool bParam2)
{
	if (!func_266(iParam0))
	{
		return;
	}
	func_287(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

bool func_73(int iParam0)
{
	return func_288(iParam0, 16, 1);
}

int func_74(int iParam0)
{
	if (!func_266(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

bool func_75(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_74(iParam0);
	if (bParam1)
	{
		if (!func_29(iVar0, 0))
		{
			return false;
		}
	}
	return PED::IS_PED_GROUP_MEMBER(iVar0, func_50(), 1);
}

void func_76(int iParam0)
{
	int iVar0;
	struct<15> Var1;

	if (!func_58(iParam0))
	{
		return;
	}
	if (!func_75(iParam0, 0))
	{
	}
	func_289(iParam0);
	Global_1359489->f_15 = func_290(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			(*Global_1359489)[iVar0] = -1;
		}
		iVar0++;
	}
	func_291();
	func_270(iParam0, 32, 1);
	if (func_29(Global_1360165[iParam0 /*1157*/], 0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, false);
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, false);
		Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		Var1.f_12 = 8;
		Var1.f_3 = Global_1360165[iParam0 /*1157*/];
		Var1.f_7 = func_292();
		Var1.f_8 = 0;
		Var1.f_11 = 10;
		Var1.f_14 = Global_1360165[iParam0 /*1157*/];
		MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	}
}

int func_77(int iParam0)
{
	if (!func_78(iParam0))
	{
		return -1;
	}
	return func_82(iParam0);
}

bool func_78(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_79(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_80(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

int func_81(int iParam0)
{
	if (!func_78(iParam0))
	{
		return 0;
	}
	return func_294(func_293(iParam0));
}

int func_82(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_295(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

void func_83(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_116() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_84(int iParam0)
{
	return func_297(func_296(iParam0));
}

void func_85(int iParam0, int iParam1)
{
	if (!func_78(iParam0))
	{
		return;
	}
	func_298(iParam0, iParam1);
}

void func_86(bool bParam0)
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

void func_87(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_4)
	{
		func_299(iParam0, iParam1, bParam2);
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

void func_88(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

bool func_89(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_90()
{
	return Global_1572864->f_12;
}

void func_91(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_92(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_93(bool bParam0)
{
	int iVar0;
	struct<16> Var1;

	if (func_300(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_301();
	Var1.f_3.f_3 = iVar0;
	if ((!func_302(Global_1347343->f_2) && !func_89(Global_1347343->f_11, 64)) || func_20(32768))
	{
		Var1.f_7 = func_303();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_89(Global_1347343->f_11, 1024) && !func_20(32768))
	{
		Var1.f_11 = func_304();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_89(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_305();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_306(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_307(&Var1, "REPLAY_T_DEAD", 0, 1);
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

int func_94(int iParam0)
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
		iVar0 = func_82(iParam0);
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

int func_95(int iParam0, bool bParam1, int iParam2)
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
		if (func_308())
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
		iVar0 = func_121(&(Global_1898164->f_1[0 /*5*/]));
		if (func_136(iVar0) && func_122(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_78(&(Global_1898164->f_1[0 /*5*/])))
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

bool func_96(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_97(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_81(iParam0))
	{
		case 1:
			iVar0 = func_121(iParam0);
			return func_309(iVar0);
		case 8:
			iVar1 = func_121(iParam0);
			if (func_122(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				return func_310(iVar1);
			}
			break;
	}
	return -1;
}

void func_98(bool bParam0)
{
	int iVar0;

	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_116() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_311(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_312();
		Global_1898077->f_9 = func_313(Global_1894899->f_2);
		func_314(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_99()
{
	if (!func_147(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_147(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_147(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_147(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_147(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_147(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_147(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_100(int iParam0, bool bParam1)
{
	if (func_116() != -1)
	{
		return;
	}
	if (func_79(0) != iParam0)
	{
		return;
	}
	if (func_315(iParam0))
	{
		if (bParam1)
		{
			func_316(-525676072);
		}
		else
		{
			func_317(-525676072);
		}
	}
}

void func_101(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_102(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_103(bool bParam0)
{
	Global_1572864->f_14 = bParam0;
	if (bParam0)
	{
		func_105(1);
	}
}

void func_104(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_105(0);
	}
}

void func_105(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

int func_106(int iParam0)
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

char* func_107(int iParam0)
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

char* func_108(int iParam0)
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

char* func_109(int iParam0, bool bParam1)
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
			if ((func_147(((*Global_1835011)[59 /*74*/])->f_1, 1) || func_147(((*Global_1347702)[1 /*49*/])->f_15, 1)) || func_13(((*Global_1347702)[1 /*49*/])->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_318(403634348, 1))
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

int func_110(int iParam0)
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

int func_111(int iParam0)
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

int func_112(int iParam0)
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

int func_113(int iParam0)
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

int func_114()
{
	return &Global_1899515;
}

void func_115(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_6 = uParam1;
}

int func_116()
{
	return Global_1572887->f_12;
}

int func_117(bool bParam0, int iParam1)
{
	int iVar0;

	if (!bParam0 && func_201(373691918))
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

void func_118()
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
			iVar18 = func_74(iVar17);
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
	func_205(&(Global_1359489->f_55));
	if (func_318(1777191912, 1))
	{
		func_319(1777191912, 1, 0);
	}
}

void func_119(int iParam0)
{
	if (!func_78(iParam0))
	{
		return;
	}
	func_321(iParam0, (func_320(iParam0) + BUILTIN::SHIFT_LEFT(1, 16)));
}

struct<2> func_120(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_121(int iParam0)
{
	if (!func_78(iParam0))
	{
		return -1;
	}
	return func_322(func_293(iParam0));
}

bool func_122(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_123()
{
	return func_323() > 0;
}

void func_124(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 67:
			func_324(-1032423150, iParam1);
			break;
		case 18:
			func_324(294066959, iParam1);
			func_324(-1925639563, iParam1);
			func_324(-378582304, iParam1);
			func_324(-338306437, iParam1);
			break;
		case 20:
			func_324(437270255, iParam1);
			break;
		case 2:
			func_324(-304000413, iParam1);
			func_324(-533612796, iParam1);
			func_324(48036954, iParam1);
			break;
		case 23:
			func_324(193108691, iParam1);
			func_324(491732588, iParam1);
			func_324(671962088, iParam1);
			func_325(1);
			break;
		case 16:
			func_324(-1836056650, iParam1);
			func_324(-754657922, iParam1);
			func_324(-1752355838, iParam1);
			func_324(-1375324510, iParam1);
			break;
		case 59:
			func_324(-514392105, iParam1);
			func_324(-822060246, iParam1);
			if (func_326(146))
			{
				func_324(1372748575, iParam1);
			}
			func_325(1);
			break;
		case 76:
			func_324(1991352213, iParam1);
			if (func_327() == 0)
			{
				func_324(1852488616, iParam1);
			}
			else
			{
				func_324(-9866350, iParam1);
			}
			break;
		case 44:
			func_324(863852599, iParam1);
			func_324(1228374935, iParam1);
			func_324(1517889050, iParam1);
			func_324(830657578, iParam1);
			func_324(1901354958, iParam1);
			break;
		case 46:
			func_324(-582805654, iParam1);
			func_324(250378940, iParam1);
			func_324(-2143265426, iParam1);
			break;
		case 17:
			func_324(-941494139, iParam1);
			func_324(1641489521, iParam1);
			break;
		case 19:
			func_324(-1829423531, iParam1);
			func_324(-1590504752, iParam1);
			func_324(1357221321, iParam1);
			break;
		case 21:
			func_324(-1037992610, iParam1);
			func_324(-1286414399, iParam1);
			func_325(0);
			break;
		case 15:
			func_324(-1014460309, iParam1);
			func_324(-1030502825, iParam1);
			break;
		case 33:
			func_324(479388090, iParam1);
			func_324(-1396342239, iParam1);
			func_324(-619618632, iParam1);
			break;
		case 34:
			func_324(1193561641, iParam1);
			break;
		case 64:
			func_324(1363960851, iParam1);
			break;
		case 60:
			func_324(-1232453926, iParam1);
			func_324(-882833584, iParam1);
			break;
		case 73:
			func_324(2023205767, iParam1);
			break;
		case 74:
			func_324(-2135286513, iParam1);
			if (func_327() == 0)
			{
				func_324(33799444, iParam1);
			}
			else
			{
				func_324(-161343203, iParam1);
			}
			break;
		case 8:
			func_324(841639693, iParam1);
			func_324(358952323, iParam1);
			break;
		case 36:
			func_324(852538149, iParam1);
			func_324(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_324(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_324(1116039310, iParam1);
			}
			break;
		case 27:
			func_324(107633428, iParam1);
			func_324(335902282, iParam1);
			func_324(575673055, iParam1);
			func_324(-425944207, iParam1);
			break;
		case 28:
			func_324(-1941530250, iParam1);
			func_324(1399269304, iParam1);
			func_324(1839684664, iParam1);
			func_324(923168503, iParam1);
			func_324(-1485078322, iParam1);
			break;
		case 29:
			func_324(574995900, iParam1);
			func_324(-1691275407, iParam1);
			func_324(-1725307861, iParam1);
			break;
		case 31:
			func_324(-2108383238, iParam1);
			func_324(-1321828931, iParam1);
			func_324(-1632118592, iParam1);
			func_324(334938948, iParam1);
			break;
		case 4:
			func_324(115823701, iParam1);
			func_324(-1896939736, iParam1);
			func_324(-1830746356, iParam1);
			func_324(-1235169781, iParam1);
			func_325(0);
			break;
		case 6:
			func_324(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_324(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_324(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_324(-384176140, iParam1);
			}
			break;
		case 25:
			func_324(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_324(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_324(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_324(-1374849484, iParam1);
			}
			break;
		case 48:
			func_324(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_324(217772674, iParam1);
			}
			else
			{
				func_324(2071798160, iParam1);
			}
			if (func_328(51))
			{
				func_324(-792802286, iParam1);
			}
			break;
		case 49:
			func_324(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_324(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_324(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_324(1402120602, iParam1);
			}
			break;
		case 58:
			func_324(-1661934591, iParam1);
			break;
		case 50:
			func_324(-1713759426, iParam1);
			break;
		case 52:
			func_324(-314799932, iParam1);
			func_324(-462260432, iParam1);
			func_324(822929377, iParam1);
			if (iParam2 == 1)
			{
				func_324(345256028, iParam1);
				func_324(-1635084094, iParam1);
			}
			else
			{
				func_324(114267347, iParam1);
			}
			break;
		case 32:
			func_324(615304157, iParam1);
			break;
		case 47:
			func_324(415434835, iParam1);
			break;
		case 69:
			func_324(1373465877, iParam1);
			if (func_147(((*Global_1347702)[9 /*49*/])->f_15, 1))
			{
				func_324(-2058273527, iParam1);
			}
			break;
		case 70:
			func_324(451334985, iParam1);
			if (func_327() == 0)
			{
				func_324(-224150200, iParam1);
			}
			else
			{
				func_324(289012628, iParam1);
			}
			break;
		case 71:
			if (func_327() == 0)
			{
				func_324(-41692120, iParam1);
			}
			else
			{
				func_324(1537840678, iParam1);
			}
			break;
		case 37:
			func_324(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_324(1842132550, iParam1);
			}
			else
			{
				func_324(-785735240, iParam1);
			}
			func_324(-1605690566, iParam1);
			break;
		case 13:
			func_324(-731367459, iParam1);
			func_324(224176585, iParam1);
			func_324(-14545580, iParam1);
			break;
		case 53:
			func_324(1095274522, iParam1);
			break;
		case 54:
			func_324(-572027988, iParam1);
			break;
		case 56:
			func_324(1339307101, iParam1);
			func_324(2102267732, iParam1);
			break;
		case 57:
			func_324(710102686, iParam1);
			break;
		case 22:
			func_324(-1754368482, iParam1);
			func_324(-2071408557, iParam1);
			break;
		case 12:
			func_324(-181334543, iParam1);
			break;
		case 0:
			func_324(-2134669864, iParam1);
			func_324(-548289709, iParam1);
			func_324(-911271922, iParam1);
			func_324(-604455775, iParam1);
			break;
		case 1:
			func_325(1);
			break;
		case 3:
			if (func_158())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1478534115))
				{
					func_324(-1286192062, iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1286192062))
			{
				func_324(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_125()
{
	if (func_116() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_126(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_324(-145926707, iParam1);
			func_324(-604922090, iParam1);
			func_324(-848690769, iParam1);
			break;
		case 1:
			func_324(-1477631591, iParam1);
			break;
		case 2:
			func_324(76112544, iParam1);
			break;
		case 9:
			func_324(1396404308, iParam1);
			func_324(-1357381228, iParam1);
			if (func_147(((*Global_1835011)[69 /*74*/])->f_1, 1))
			{
				func_324(1902679064, iParam1);
			}
			else
			{
				func_324(-2146422425, iParam1);
			}
			break;
		case 22:
			func_324(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_324(-1934184559, iParam1);
				func_324(1281755988, iParam1);
			}
			else
			{
				func_324(-1745220872, iParam1);
				func_324(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_324(-1641504538, iParam1);
				func_324(-988014485, iParam1);
			}
			else if (func_326(26))
			{
				func_324(-343043950, iParam1);
				func_324(-640062214, iParam1);
			}
			else
			{
				func_324(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_324(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_324(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_324(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_324(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_324(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_324(1301690984, iParam1);
				}
			}
			else
			{
				func_324(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_324(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_324(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_324(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_324(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_324(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_324(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_324(-754570528, iParam1);
			}
			else
			{
				func_324(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_324(-2072125821, iParam1);
			}
			else
			{
				func_324(270040030, iParam1);
			}
			break;
		case 37:
			func_324(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_324(-505314737, iParam1);
				func_324(-1853052860, iParam1);
			}
			else
			{
				func_324(-1975624994, iParam1);
				func_324(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_324(1690231002, iParam1);
			}
			else
			{
				func_324(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_324(1225386280, iParam1);
			}
			else if (func_326(54))
			{
				func_324(-283235773, iParam1);
			}
			else
			{
				func_324(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_324(1355398007, iParam1);
			}
			else
			{
				func_324(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_324(574636806, iParam1);
			}
			else
			{
				func_324(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_324(821118338, iParam1);
			}
			else if (func_326(39))
			{
				func_324(846829260, iParam1);
			}
			else
			{
				func_324(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_181(((*Global_1835011)[33 /*74*/])->f_1) == 1)
				{
					func_324(1422779093, iParam1);
				}
				else
				{
					func_324(-1769536986, iParam1);
				}
			}
			else
			{
				func_324(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_324(352134789, iParam1);
			}
			else if (func_326(43))
			{
				func_324(260723113, iParam1);
			}
			else
			{
				func_324(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_324(-457958799, iParam1);
			}
			else
			{
				func_324(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_326(41))
			{
				func_324(-546824600, iParam1);
			}
			else
			{
				func_324(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_324(1297261593, iParam1);
			}
			else
			{
				func_324(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_324(2068484886, iParam1);
			}
			else if (func_326(49))
			{
				func_324(-1489080639, iParam1);
				func_324(-2102244050, iParam1);
			}
			else
			{
				func_324(-1863040467, iParam1);
			}
			break;
		case 51:
			func_324(-2055943209, iParam1);
			break;
		case 58:
			if (func_147(((*Global_1347702)[23 /*49*/])->f_15, 1))
			{
				func_324(1650066845, iParam1);
			}
			else
			{
				func_324(151370023, iParam1);
			}
			func_324(1426057961, iParam1);
			func_324(476379584, iParam1);
			break;
		case 59:
			func_324(-1638117866, iParam1);
			break;
		case 62:
			func_324(199541730, iParam1);
			break;
		case 63:
			func_324(1703485804, iParam1);
			func_324(-800449045, iParam1);
			break;
		case 65:
			func_324(-1678210868, iParam1);
			func_324(-1448238026, iParam1);
			func_324(-1200864845, iParam1);
			func_324(1473511536, iParam1);
			break;
		case 66:
			func_324(-1774490051, iParam1);
			func_324(-34645921, iParam1);
			func_324(174027075, iParam1);
			func_324(-1155999, iParam1);
			func_325(1);
			break;
		case 67:
			func_324(701612593, iParam1);
			func_324(-1069631343, iParam1);
			func_324(1673428882, iParam1);
			break;
		case 68:
			func_324(-739133286, iParam1);
			func_324(-2130089358, iParam1);
			func_324(2056190391, iParam1);
			func_324(1941753817, iParam1);
			func_325(0);
			break;
		case 70:
			func_324(-1217555753, iParam1);
			break;
		case 71:
			func_324(697048821, iParam1);
			break;
		case 73:
			func_324(-553148661, iParam1);
			break;
		case 75:
			func_324(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_324(1414263863, iParam1);
			}
			else
			{
				func_324(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_324(1835465936, iParam1);
				func_324(523715611, iParam1);
			}
			else if (func_326(78))
			{
				func_324(1420338873, iParam1);
			}
			else
			{
				func_324(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_324(10180941, iParam1);
			}
			else if (func_326(79))
			{
				func_324(768420635, iParam1);
			}
			else
			{
				func_324(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_324(-383601523, iParam1);
			}
			else
			{
				func_324(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_324(1606472408, iParam1);
			}
			else
			{
				func_324(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_324(-203571927, iParam1);
			}
			else
			{
				func_324(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_324(729886222, iParam1);
			}
			else
			{
				func_324(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_324(-714816362, iParam1);
			}
			else
			{
				func_324(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_324(-932932179, iParam1);
				func_324(-1458537240, iParam1);
			}
			else
			{
				func_324(-1764383885, iParam1);
				func_324(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_324(1741466706, iParam1);
			}
			else
			{
				func_324(1405815775, iParam1);
			}
			break;
		case 94:
			func_324(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_324(1905280979, iParam1);
			}
			else
			{
				func_324(-1966245299, iParam1);
			}
			func_324(721468880, iParam1);
			break;
		case 99:
			func_324(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_324(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_324(-1117781095, iParam1);
				}
				else
				{
					func_324(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_324(141494548, iParam1);
			}
			else
			{
				func_324(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_324(-369525697, iParam1);
			}
			else if (func_326(101))
			{
				func_324(1595015219, iParam1);
			}
			else
			{
				func_324(-321486961, iParam1);
			}
			break;
		case 103:
			func_324(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_324(793460477, iParam1);
				func_324(-1610242176, iParam1);
			}
			else if (func_326(103))
			{
				func_324(1830897187, iParam1);
			}
			else
			{
				func_324(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_324(1528309077, iParam1);
			}
			else if (func_326(104))
			{
				func_324(1864966105, iParam1);
			}
			else
			{
				func_324(-103336013, iParam1);
			}
			break;
		case 108:
			func_324(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_324(-1123227713, iParam1);
				func_324(-889574341, iParam1);
			}
			else
			{
				func_324(2065385917, iParam1);
				func_324(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_324(-887421691, iParam1);
			}
			else if (func_326(109))
			{
				func_324(-1318117949, iParam1);
			}
			else
			{
				func_324(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_324(284822762, iParam1);
				}
				else
				{
					func_324(-1425017554, iParam1);
				}
			}
			else if (func_326(110))
			{
				if (&Global_1357515 == 0)
				{
					func_324(553087292, iParam1);
				}
				else
				{
					func_324(-1766870331, iParam1);
					func_324(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_324(-1980598735, iParam1);
			}
			else
			{
				func_324(-442732098, iParam1);
				func_324(1955756409, iParam1);
			}
			break;
		case 115:
			func_324(394303528, iParam1);
			func_324(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_324(1182403394, iParam1);
			}
			else
			{
				func_324(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_324(924445424, iParam1);
			}
			else
			{
				func_324(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_324(430755273, iParam1);
				func_324(-1473879802, iParam1);
			}
			else
			{
				func_324(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_324(73885747, iParam1);
			}
			else if (func_326(117))
			{
				func_324(1559707913, iParam1);
			}
			else
			{
				func_324(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_324(-2103887972, iParam1);
			}
			else if (func_326(118))
			{
				func_324(-435828462, iParam1);
			}
			else
			{
				func_324(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_324(2054486196, iParam1);
			}
			else
			{
				func_324(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_324(-570086056, iParam1);
			}
			else if (func_326(121))
			{
				func_324(32337856, iParam1);
			}
			else
			{
				func_324(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_324(813493663, iParam1);
			}
			else if (func_326(122))
			{
				func_324(-2132763590, iParam1);
			}
			else
			{
				func_324(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_324(-66240572, iParam1);
				func_324(1563075046, iParam1);
			}
			else
			{
				func_324(-787011772, iParam1);
				func_324(-1523377438, iParam1);
			}
			break;
		case 127:
			func_324(61020800, iParam1);
			break;
		case 129:
			func_324(428985222, iParam1);
			break;
		case 131:
			func_324(-1393851036, iParam1);
			break;
		case 133:
			func_324(1559531342, iParam1);
			break;
		case 134:
			func_324(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_324(-1374407408, iParam1);
				}
				else
				{
					func_324(471210931, iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(1732474719) && HUD::_JOURNAL_CAN_WRITE_ENTRY(801682048)) && HUD::_JOURNAL_CAN_WRITE_ENTRY(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_324(-472672138, iParam1);
				}
				else
				{
					func_324(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_324(-1678710489, iParam1);
			}
			else
			{
				func_324(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_324(1717582460, iParam1);
			}
			else
			{
				func_324(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_324(1568112362, iParam1);
				func_324(1388317526, iParam1);
			}
			else if (func_326(136))
			{
				func_324(-1597534828, iParam1);
				func_324(-1207918353, iParam1);
			}
			else
			{
				func_324(-1940891082, iParam1);
				func_324(-598277294, iParam1);
			}
			break;
		case 142:
			if (iParam2 == 1)
			{
				func_324(448334530, iParam1);
				func_324(2145375502, iParam1);
			}
			else
			{
				func_324(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_324(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_324(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_324(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_324(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_324(-66616327, iParam1);
			}
			else
			{
				func_324(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_324(1862916706, iParam1);
			}
			else if (func_326(147))
			{
				func_324(675105199, iParam1);
			}
			else
			{
				func_324(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_324(174409701, iParam1);
			}
			else if (func_326(148))
			{
				func_324(-1730895475, iParam1);
			}
			else
			{
				func_324(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_324(1295237052, iParam1);
			}
			else if (func_326(149))
			{
				func_324(-788577684, iParam1);
			}
			else
			{
				func_324(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_127(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	*uParam1 = 1137976064;
	*uParam2 = -1;
	iVar0 = func_81(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_329(iParam0);
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
					if (func_181(((*Global_1835011)[9 /*74*/])->f_1) == 0)
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
			iVar2 = func_121(iParam0);
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
			iVar3 = func_121(iParam0);
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

int func_128(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_330(iParam0);
	uVar3 = func_331(iParam0);
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
				iVar1 = func_114();
				func_154(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_1 = iVar1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_4 = iVar2;
			func_332(iParam0, 1);
			if (func_333(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if ((Global_40.f_4283.f_6[iVar4 /*5*/])->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_334(Global_40.f_4283.f_6[iVar4 /*5*/], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_335(1, iParam0);
				}
				else
				{
					func_336(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_129(int iParam0, var uParam1)
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

int func_130(int iParam0, int iParam1, int iParam2)
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

int func_131(int iParam0, int iParam1)
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

int func_132(int iParam0)
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

void func_133(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_116() != -1)
	{
		return;
	}
	if ((Global_36615 && func_337(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_338(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_339(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
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
			func_340(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_339(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_134(int iParam0)
{
	if (!func_78(iParam0))
	{
		return -1;
	}
	return func_341(func_293(iParam0));
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

bool func_136(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_137()
{
	if (func_116() != -1)
	{
		return 0;
	}
	if (!func_342())
	{
		return 0;
	}
	if (!func_147(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_147(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_147(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_147(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_147(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_147(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_147(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_147(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_147(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_147(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_147(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_147(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_147(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_147(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_147(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_147(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_147(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_147(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_147(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_147(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_147(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_147(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_147(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_147(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_147(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_147(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

void func_138()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 1);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_343(13);
		(*Global_1898441)[iVar0 /*38*/] = 13;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_WIN2_COM", 24);
	}
}

int func_139(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_344(iParam0, 0))
	{
		return 0;
	}
	if (!func_345(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_346(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_347(iParam0, bParam2);
	iVar2 = 0;
	if (func_348(iParam0, 0, 0) == 0)
	{
		if (func_349(iParam0))
		{
			iVar5 = func_350(iParam0);
			iVar6 = func_351(iVar5);
			iVar7 = func_352(iVar6) + 1;
			func_353(iVar5);
			if (func_354(38))
			{
				func_145(483, 0);
			}
			else
			{
				func_145(482, 0);
			}
			if (iVar7 == func_355(iVar6))
			{
				func_139(func_356(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_342() && func_357(4))
				{
					if (func_342() && (func_358(38) || func_354(38)))
					{
						func_360(38, func_356(iVar6), 0, 0, func_359(), 0, -1, 0);
						func_361(2);
					}
					else
					{
						func_360(38, func_356(iVar6), 0, 0, func_359(), 0, -1, 0);
						func_361(1);
					}
				}
			}
			else if (func_342() && func_357(4))
			{
				if (func_342() && (func_358(38) || func_354(38)))
				{
					func_360(38, 0, 0, 0, func_359(), 0, -1, 0);
					func_361(2);
				}
				else
				{
					func_360(38, 0, 0, 0, func_359(), 0, -1, 0);
					func_361(1);
				}
			}
			if (func_342() && func_357(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_342() && (func_358(38) || func_354(38)))
					{
						func_362(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_362(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_363(iParam0) == -1037537535)
	{
		if ((!func_364(iParam0, 866047851) && !func_364(iParam0, -1979000645)) && !func_364(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_365(iParam0, 8388608) && !func_366(28))
	{
		func_367(28);
	}
	if (!bVar3)
	{
		if (func_364(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_368(iParam0) == -1447088266)
			{
				iVar1 = func_370(func_369(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_116() == -1)
					{
						func_371(iVar1);
					}
					if (func_372(0) && func_373(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_374(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_0x5C2EA6C44F515F34(iParam0);
				if (WEAPON::_0x1F7977C9101F807F(iVar1))
				{
					if (func_116() == -1)
					{
						func_371(iParam0);
					}
					if (func_372(0) && func_373(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_374(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_363(iParam0) == -427144552)
		{
			if (!func_375(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_363(iParam0) == 307971639 && func_376(iParam0))
		{
			if (!func_377(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_364(iParam0, 866047851))
		{
			func_378(iParam0);
		}
		else if (func_364(iParam0, 2000026003))
		{
			func_379(iParam0);
		}
		else if (func_364(iParam0, -103750053))
		{
			func_381(func_380(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_381(func_382(-717883113, 2091222383), iVar0);
		}
		else if (func_364(iParam0, -121341956) && !func_364(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_147(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_145(498, 0);
				}
			}
			if (func_364(iParam0, -2017733358) || func_364(iParam0, -1369131378))
			{
				func_383(iParam0);
			}
		}
		else if (func_364(iParam0, -136654233))
		{
			if (func_364(iParam0, -1021472396))
			{
			}
		}
		else if (func_364(iParam0, -1466706512) && func_364(iParam0, 1147021565))
		{
			func_145(484, 0);
		}
		else if (func_364(iParam0, 1147021565) && func_364(iParam0, -524514947))
		{
		}
		else if (func_364(iParam0, 554195525))
		{
		}
		else if (func_364(iParam0, 589988438))
		{
			if (func_384())
			{
				func_385(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_364(iParam0, 787083290) && func_364(iParam0, 949916894))
		{
			func_386(iParam0);
		}
		else if (func_364(iParam0, -1718133314))
		{
			func_387(iParam0);
		}
		else if (func_364(iParam0, -1738650224))
		{
			func_388(iParam0);
		}
		else if (func_364(iParam0, -1112814642) && func_364(iParam0, 949916894))
		{
			func_389(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_364(iParam0, 1841149704))
		{
			func_390();
		}
		else if (func_364(iParam0, 606799272))
		{
			func_391(iParam0, iParam1);
			func_392(iParam0);
		}
		else if (func_364(iParam0, -1112814642) && func_364(iParam0, -1697809989))
		{
			func_393(iParam0, 0, 0, 0);
		}
		else if (func_364(iParam0, -2017733358) || func_364(iParam0, -1369131378))
		{
			func_383(iParam0);
		}
		else if (func_364(iParam0, -1921346699))
		{
			if (func_116() != -1)
			{
				return 0;
			}
			func_394(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_364(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_167(215778062, 1, 0))
					{
						func_139(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_167(670273567, 1, 0))
					{
						func_139(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_167(-967317137, 1, 0))
					{
						func_139(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_167(526074061, 1, 0))
					{
						func_139(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_167(-1045488665, 1, 0))
					{
						func_139(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_167(471514780, 1, 0))
					{
						func_139(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_364(iParam0, -839724752) && func_365(iParam0, 4))
		{
			if (!func_354(42))
			{
				func_395(iParam0);
			}
		}
		else if (func_364(iParam0, 1399091007))
		{
			func_396(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_364(iParam0, 1248798204))
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
				func_139(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_367(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_397(PLAYER::PLAYER_PED_ID(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_398(&iVar9, 0))
				{
					func_373(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_116() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_397(PLAYER::PLAYER_PED_ID(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("weapon_kit_binoculars"):
				break;
			case 2131771850:
				func_145(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_399();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_400();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_401();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_402();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_403();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_404(499813453, 854119837, 0);
				func_405(499813453, 0);
				func_406(1);
				break;
			case 2127812557:
				func_404(499813453, -1292544588, 0);
				func_405(499813453, 0);
				func_406(2);
				break;
			case 808991383:
				func_404(499813453, -1003325394, 0);
				func_405(499813453, 0);
				func_406(4);
				break;
			case 1134518629:
				func_404(666607663, -335460405, 0);
				func_405(666607663, 0);
				func_407(1);
				break;
			case 902940106:
				func_404(666607663, 903797617, 0);
				func_405(666607663, 0);
				func_407(2);
				break;
			case -418174898:
				func_404(666607663, 669728650, 0);
				func_405(666607663, 0);
				func_407(4);
				break;
			case -648114971:
				func_404(-220219788, 1214120047, 0);
				func_405(-220219788, 0);
				func_408(1);
				break;
			case 211153747:
				func_404(-220219788, 655769340, 0);
				func_405(-220219788, 0);
				func_408(2);
				break;
			case -32876996:
				func_404(-220219788, 885316185, 0);
				func_405(-220219788, 0);
				func_408(4);
				break;
			case 1191437462:
				func_404(218622660, -1491419385, 0);
				func_405(218622660, 0);
				func_409(1);
				break;
			case 1119149048:
				func_404(218622660, 1809565830, 0);
				func_405(218622660, 0);
				func_409(2);
				break;
			case 506073827:
				func_404(390004462, -628873767, 0);
				func_405(390004462, 0);
				func_410(1);
				break;
			case -1876986168:
				func_404(390004462, -405421956, 0);
				func_405(390004462, 0);
				func_410(2);
				break;
			case 2142623221:
				func_404(390004462, -1108972386, 0);
				func_405(390004462, 0);
				func_410(4);
				break;
			case 1508215381:
				func_404(6410548, 1053716392, 0);
				func_405(6410548, 0);
				func_411(1);
				break;
			case -888935280:
				func_404(6410548, 806507056, 0);
				func_405(6410548, 0);
				func_411(2);
				break;
			case -1252474566:
				func_404(6410548, 1571925350, 0);
				func_405(6410548, 0);
				func_411(4);
				break;
			case -1465702449:
				func_404(6410548, 1330352282, 0);
				func_405(6410548, 0);
				func_411(8);
				break;
			case -21093309:
				func_413(242, func_412(-21093309), 0);
				break;
			case 204375141:
				func_413(240, func_412(204375141), 0);
				break;
			case -417963070:
				func_413(241, func_412(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_414(594, 1934060482, 1, 1);
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
					func_414(594, 1110018439, 1, 1);
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
					func_414(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_414(594, -1228016946, 1, 1);
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
					func_414(595, -103579, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_414(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case 80178851:
				func_145(488, 0);
				break;
			case 1613651027:
				func_145(491, 0);
				break;
			case -885810591:
				func_145(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_139(func_415(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_139(func_416(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_366(1))
				{
					func_145(487, 0);
				}
				break;
			case -898386032:
				func_145(486, 0);
				break;
			case -2035110427:
				if (func_116() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case 1510719693:
				func_145(496, 0);
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
		func_417(&iVar10);
		if (!func_418(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_372(0))
		{
			return 1;
		}
		if (func_363(iParam0) == -1037537535)
		{
			func_419(iParam0);
		}
		if (func_364(iParam0, -1979000645))
		{
			func_420(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_372(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_139(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_421(iVar2, 0);
		}
	}
	Var35 = { func_422(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_423(iParam0);
	if (sParam6 > 0f)
	{
		if (func_364(iParam0, -839724752))
		{
			func_424(iParam0, sParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_425(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_140(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (func_364(iParam0, 1989861793))
	{
		iVar0 = func_426(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_427(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_428(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_429(iVar14, iVar1);
					if (iVar15 != iParam0 && func_344(iVar15, 0))
					{
						if (func_430(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_431(iVar1);
				if (bVar13)
				{
					func_432(iParam0);
				}
				else
				{
					func_145(306, 0);
				}
			}
		}
	}
}

void func_141()
{
	if (func_116() != -1)
	{
		return;
	}
	func_433();
	func_434();
	func_435();
	func_436();
	func_437();
	func_438();
	func_439();
}

void func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;

	func_440(iParam0, 1, 1, -142743235, 1);
	if (func_441(iParam0))
	{
		func_442(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_444(func_443(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_445(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1 /*11*/];
		*(Global_1946804->f_1616.f_1[iVar1 /*3*/]) = { vVar4 };
		(Global_1946804->f_1616.f_1[iVar1 /*3*/])->f_2 = ((Global_1946804->f_1497.f_1[iVar1 /*3*/])->f_2 || (Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_2);
		iVar1++;
	}
	if (func_446() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_447(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_447(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { func_448(8, 0) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { func_448(9, 0) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { func_448(0, 0) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { func_448(2, 0) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { func_448(3, 0) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { func_448(1, 0) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { func_448(5, 0) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { func_448(6, 0) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { func_448(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_449(iVar8, iVar0))
				{
					func_450(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_449(iVar8, iVar0))
		{
			func_450(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
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

void func_143()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_449(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5 /*11*/] || iVar1 == 0)
		{
			if (func_446() == -2125499975 || func_446() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_450(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_450(&vVar2, iVar5, iVar0);
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

void func_144()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 2);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_343(14);
		(*Global_1898441)[iVar0 /*38*/] = 14;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MUD1_COM", 24);
	}
}

void func_145(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_451(iParam0, &iVar0, &iVar1);
	if (!func_452(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_453(iVar0, iVar1);
}

void func_146(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_444(iParam0, 1);
	func_454(Global_1946804->f_1497.f_1[iVar0 /*3*/], 2, 6);
	func_454(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
		(Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1 = 0;
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		if (bParam2)
		{
			func_455(17, iParam0, 0, 0, 0);
		}
	}
	if (func_116() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_454((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
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
			func_454((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
}

int func_147(int iParam0, bool bParam1)
{
	switch (func_77(iParam0))
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

void func_148()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 5);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_343(17);
		(*Global_1898441)[iVar0 /*38*/] = 17;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA2_COM", 24);
	}
}

void func_149()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 6);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_343(18);
		(*Global_1898441)[iVar0 /*38*/] = 18;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA3_COM", 24);
	}
}

int func_150(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	struct<5> Var0;

	if (iParam3 == -358215195)
	{
		Var0 = { func_456(iParam1, 1, 0) };
		iParam3 = func_457(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_458(iParam3);
	return func_397(iParam0, iParam1, iParam2, iParam3, bParam4, iParam5, 1, 0, 1, 0);
}

bool func_151()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

void func_152(int iParam0)
{
	int iVar0;

	if (!func_459(iParam0))
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

int func_153(int iParam0, int iParam1)
{
	if (!func_460(iParam0))
	{
		return 0;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_461(iParam0);
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	return func_462(Global_40.f_9910[iParam1 /*6*/], 4);
}

void func_154(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_463(*iParam0);
	iVar1 = func_464(*iParam0);
	iVar2 = func_465(*iParam0);
	iVar3 = func_466(*iParam0);
	iVar4 = func_467(*iParam0);
	iVar5 = func_468(*iParam0);
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
	iVar6 = func_469(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_469(iVar1, iVar0);
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
	func_470(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_155(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_460(iParam0))
	{
		return;
	}
	if (!func_471(iParam1))
	{
		return;
	}
	if (func_472(iParam1, 1))
	{
		return;
	}
	iVar0 = func_461(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_153(iParam0, -1))
	{
		return;
	}
	else
	{
		func_473(Global_40.f_9910[iVar0 /*6*/], 2);
	}
	(Global_40.f_9910[iVar0 /*6*/])->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_95(0, 0, 1))
		{
			func_187(0, 17);
		}
	}
}

void func_156()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 7);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_343(19);
		(*Global_1898441)[iVar0 /*38*/] = 19;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MOB5_COM", 24);
	}
}

void func_157()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 8);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_343(20);
		(*Global_1898441)[iVar0 /*38*/] = 20;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_158()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

void func_159()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 9);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_343(21);
		(*Global_1898441)[iVar0 /*38*/] = 21;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA1_COM", 24);
	}
}

void func_160()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 10);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_343(22);
		(*Global_1898441)[iVar0 /*38*/] = 22;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA3_COM", 24);
	}
}

void func_161()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 12);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_343(24);
		(*Global_1898441)[iVar0 /*38*/] = 24;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ODR5_COM", 24);
	}
}

void func_162()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 13);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_343(25);
		(*Global_1898441)[iVar0 /*38*/] = 25;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN1_COM", 24);
	}
}

void func_163()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 14);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_343(27);
		(*Global_1898441)[iVar0 /*38*/] = 27;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MAR51_COM", 24);
	}
}

void func_164()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 15);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_343(28);
		(*Global_1898441)[iVar0 /*38*/] = 28;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_165(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_166(int iParam0)
{
	return (Global_40.f_12018.f_4 && iParam0) != 0;
}

bool func_167(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_344(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_363(iParam0);
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
		if (!func_474(iParam0, 1))
		{
			return false;
		}
	}
	return func_348(iParam0, 0, bParam2) >= iParam1;
}

void func_168(int iParam0)
{
	if (func_20(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_475(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_BANK_FEED", MISC::ABSI(iParam0)), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_475(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_169()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 16);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_343(29);
		(*Global_1898441)[iVar0 /*38*/] = 29;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BEE22_COM", 24);
	}
}

void func_170()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 17);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_343(26);
		(*Global_1898441)[iVar0 /*38*/] = 26;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN2_COM", 24);
	}
}

void func_171()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 11);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_343(23);
		(*Global_1898441)[iVar0 /*38*/] = 23;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOC_COM", 24);
	}
}

void func_172()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 3);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_343(15);
		(*Global_1898441)[iVar0 /*38*/] = 15;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOW3_COM", 24);
	}
}

void func_173()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 4);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_343(16);
		(*Global_1898441)[iVar0 /*38*/] = 16;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DUT1_COM", 24);
	}
}

void func_174()
{
	if (func_476() > 1)
	{
		func_477();
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-707360575))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-707360575, true);
			func_145(444, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-1201174711))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-1201174711, true);
			func_145(447, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(151582343))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(151582343, true);
			func_145(448, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-642492359))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-642492359, true);
			func_145(450, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(5171247))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(5171247, true);
			func_145(452, 1);
		}
	}
}

bool func_175(int iParam0)
{
	return func_288(iParam0, 4, 1);
}

void func_176(int iParam0)
{
	func_478(iParam0, 4, 1);
}

void func_177(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_120(-160912108) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_178(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_20(32768))
	{
		return;
	}
	if (!func_78(iParam0))
	{
		return;
	}
	func_92(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_81(iParam0))
	{
		case 1:
			func_381(func_382(909007663, -587839005), 1);
			iVar0 = func_121(iParam0);
			func_381(func_120(-634848880), 1);
			switch (func_309(iVar0))
			{
				case 0:
					func_381(func_382(909007663, 1325140787), 1);
					break;
				case 1:
					func_381(func_382(909007663, 2101241783), 1);
					break;
				case 2:
					func_381(func_382(909007663, -1296936294), 1);
					break;
				case 3:
					func_381(func_382(909007663, -798388728), 1);
					break;
				case 4:
					func_381(func_382(909007663, -1787586531), 1);
					break;
				case 5:
					func_381(func_382(909007663, -1002834519), 1);
					break;
				case 6:
					func_381(func_382(909007663, -50600144), 1);
					break;
				case 7:
					func_381(func_382(909007663, -348503123), 1);
					break;
				case 8:
					func_381(func_382(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_381(func_382(909007663, -406093146), 1);
			}
			if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_8))))
			{
				func_381(func_382(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_121(iParam0);
			if (func_122(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				func_381(func_120(-634848880), 1);
			}
			if (func_122(((*Global_1347702)[iVar1 /*49*/])->f_12, 4) || iVar1 == 59)
			{
				if (func_122(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
				{
					func_381(func_382(909007663, -587839005), 1);
				}
				else
				{
					func_381(func_382(909007663, -2049243343), 1);
				}
			}
			if (func_122(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				switch (func_310(iVar1))
				{
					case 0:
						func_381(func_382(909007663, 1325140787), 1);
						break;
					case 1:
						func_381(func_382(909007663, 2101241783), 1);
						break;
					case 2:
						func_381(func_382(909007663, -1296936294), 1);
						break;
					case 3:
						func_381(func_382(909007663, -798388728), 1);
						break;
					case 4:
						func_381(func_382(909007663, -1787586531), 1);
						break;
					case 5:
						func_381(func_382(909007663, -1002834519), 1);
						break;
					case 6:
						func_381(func_382(909007663, -50600144), 1);
						break;
					case 7:
						func_381(func_382(909007663, -348503123), 1);
						break;
					case 8:
						func_381(func_382(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1347702)[iVar1 /*49*/])->f_3))))
				{
					func_381(func_382(909007663, 532323983), 1);
				}
			}
			else if (func_122(((*Global_1347702)[iVar1 /*49*/])->f_12, 4))
			{
				if (func_122(((*Global_1347702)[iVar1 /*49*/])->f_12, 4194304))
				{
				}
				else if (!func_122(((*Global_1347702)[iVar1 /*49*/])->f_12, 512))
				{
					func_381(func_382(909007663, 551192206), 1);
				}
				else
				{
					func_381(func_382(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_179()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (func_116() != -1)
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
	if (!func_479(64))
	{
		return;
	}
	else if (func_96(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_95(0, 0, 1) || func_480()) || func_137())
	{
		return;
	}
	iVar0 = func_99();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_481(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_482(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_482(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_483(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_187(0, -1);
	}
	if (iVar2 > 0)
	{
		func_484("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_485(1, 0);
	Global_1956575->f_2 = 1;
}

void func_180(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_20(32768))
	{
		return;
	}
	func_486(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_487(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_181(int iParam0)
{
	if (!func_78(iParam0))
	{
		return -1;
	}
	return func_488(iParam0);
}

int func_182(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_489(iParam0))
	{
		return 0;
	}
	if (!func_342())
	{
		return 0;
	}
	if (!func_490(iParam0, &iVar0, &iVar1))
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

int func_183(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_491())
	{
		iVar2 = func_491();
	}
	iVar5 = func_492(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_293(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_293(iVar6) == 0)
			{
				return func_493(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_293(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_293(iVar6) == 0)
			{
				return func_493(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_493(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_494(1330954593, 0, -1);
		case 1:
			return func_494(1330954593, 0, -1);
		case 2:
			return func_494(1330954593, 0, -1) * 2;
		case 4:
			return func_494(1330954593, 0, -1);
		case 5:
			return func_494(1330954593, 0, -1);
		case 6:
			return func_494(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_494(1330954593, 0, -1) * 3;
		case 9:
			return func_494(1330954593, 0, -1) * 3;
		case 10:
			return func_494(1330954593, 0, -1) * 3;
		case 11:
			return func_494(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

var func_185(int iParam0)
{
	char[] cVar0[8];

	if (!func_78(iParam0))
	{
		return cVar0;
	}
	switch (func_81(iParam0))
	{
		case 1:
			cVar0 = ((*Global_1835011)[func_329(iParam0) /*74*/])->f_8;
			break;
		case 8:
			cVar0 = ((*Global_1347702)[func_121(iParam0) /*49*/])->f_3;
			break;
		case 11:
			if (iParam0 == func_183(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_186(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!Global_1879514->f_11)
	{
		iVar0 = func_24();
		iVar1 = MISC::GET_HASH_KEY(&uParam0);
		if (MISSIONDATA::_0x57E798B54C45EE1A(iVar1) != 5 && iVar0 == 5)
		{
			if (func_81(Global_1879514->f_1) == 1)
			{
				func_182(5, 1);
			}
			else if (func_81(Global_1879514->f_1) == 8 && (func_122(((*Global_1347702)[func_121(Global_1879514->f_1) /*49*/])->f_12, 1) || func_122(((*Global_1347702)[func_121(Global_1879514->f_1) /*49*/])->f_12, 33554432)))
			{
				func_182(5, 1);
			}
		}
		MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&uParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&uParam0), 3);
	}
}

void func_187(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_495(&Global_0, 8);
	}
	if (!func_342() || func_116() != -1)
	{
		return;
	}
	func_495(&Global_0, 1);
}

int func_188()
{
	return Global_40.f_4283;
}

int func_189(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_78(iParam0))
	{
		return 0;
	}
	uVar0 = func_185(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_190(var uParam0)
{
	return STATS::_0x4DAC398297981B87(uParam0);
}

void func_191(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_192(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = MISC::GET_GAME_TIMER();
}

Vector3 func_193(vector3 vParam0, var uParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, float fParam9, int iParam10)
{
	vector3 vVar0;

	vVar0 = { func_496(vParam0, uParam3, uParam4, bParam5, bParam6, 1, iParam7, bParam8, fParam9, iParam10, -1, 1103626240) };
	if (func_497(vVar0))
	{
		vVar0 = { func_496(vParam0, uParam3, uParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_194(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = uParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_195(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_196(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = func_292();
	if (func_498(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_499(vParam0, bParam3);
}

void func_197()
{
	func_500();
	func_501();
	func_502();
	SCRIPTS::_0x11B0A0B282FA9B10(0);
}

char* func_198(int iParam0)
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

bool func_199(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_200()
{
	return Global_40.f_4283.f_1;
}

bool func_201(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_283(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_202(int iParam0)
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

void func_203(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_202(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_503(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_504(iVar0);
	*uParam0 = 0;
}

bool func_204(var uParam0)
{
	return func_505(*uParam0, 1);
}

void func_205(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_206(var uParam0, char* sParam1, var uParam2, bool bParam3, bool bParam4)
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
	uParam0->f_270 = DATAFILE::_0x603AC35FD4602C76(uParam0->f_264);
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
	func_506(uParam0);
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

bool func_207(var uParam0, int iParam1)
{
	uParam0->f_264.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_264.f_1), &(uParam0->f_264));
}

bool func_208(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, var uParam5)
{
	bool bVar0;

	if (iParam2 == -1)
	{
		if (func_209(uParam0, 2, iParam4))
		{
			*uParam5 = *iParam4;
		}
		if (func_209(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_209(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_209(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_209(uParam0, 2, iParam4))
	{
		*uParam5 = *iParam4;
	}
	if (func_209(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_209(uParam0, 5, iParam4))
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
			if (func_209(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_209(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_209(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_264.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_INT(iParam2, &(uParam0->f_264));
}

bool func_210(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_264.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_STRING(cParam2, &(uParam0->f_264));
}

int func_211(var uParam0, char* sParam1, int iParam2)
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

void func_212(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_213(var uParam0)
{
	DATAFILE::_DATAFILE_UNLOAD(uParam0->f_264);
	uParam0->f_264 = 0;
	uParam0->f_270 = 0;
}

int func_214(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_507(bParam1, iParam2, iParam3);
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
		if ((iParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
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
			if (Var18.f_10 && (iParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
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
			if (iParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_215(int iParam0)
{
	if (func_508())
	{
		Global_1357509 = 1;
	}
	if (func_509(-92416669))
	{
	}
	if (iParam0 && Global_1935630->f_44 == joaat("weapon_kit_camera"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		Global_1935630->f_44 = joaat("weapon_unarmed");
	}
}

void func_216(int iParam0, var uParam1)
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

int func_217(var uParam0, int iParam1)
{
	if ((*uParam0 && iParam1) != 0)
	{
		return 1;
	}
	return 0;
}

void func_218(var uParam0)
{
	func_510(uParam0, 0f);
}

float func_219(var uParam0)
{
	if (!func_204(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_511(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_512() - uParam0->f_1);
}

void func_220(var uParam0, int iParam1, bool bParam2)
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

int func_221(var uParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, int iParam5)
{
	vector3 vVar0;
	struct<8> Var3;
	var uVar11;

	if (func_513(uParam0->f_1, sParam1, &Var3))
	{
		MemCopy(&vVar0, {Var3}, 3);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			StringConCat(&vVar0, sParam2, 24);
		}
		if (bParam3)
		{
			func_514(1, 1, 0);
		}
		uVar11 = 24;
		if (!func_515(&vVar0))
		{
			func_516(&uVar11, Global_35, "ARTHUR", 0);
			func_516(&uVar11, func_74(uParam0->f_2), func_517(uParam0->f_2), 0);
			func_518(&uVar11, vVar0, bParam4, iParam5, 0, 0);
			return 1;
		}
	}
	return 0;
}

Vector3 func_222()
{
	int iVar0;
	vector3 vVar1;
	var uVar4;

	iVar0 = func_188();
	if (!func_519(iVar0, &vVar1, &uVar4))
	{
	}
	return vVar1;
}

float func_223(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_224()
{
	if (Local_15.f_10 == -1)
	{
		return;
	}
	if (func_199(Local_15.f_631, 32768) && Local_15.f_10 != 8)
	{
		return;
	}
	if (!Local_15.f_246)
	{
		if (&Local_15.f_204[Local_15.f_10])
		{
			return;
		}
		if (func_520(1))
		{
			return;
		}
	}
	switch (Local_15.f_10)
	{
		case 0:
			func_521(0, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 1:
			func_521(1, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 2:
			func_521(2, Global_35, &(Local_15.f_307[0]), 1, 0);
			break;
		case 3:
			func_521(3, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 4:
			func_521(4, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 5:
			func_521(5, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 6:
			func_521(6, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 7:
			func_521(7, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 8:
			func_521(8, &(Local_15.f_307[0]), Global_35, 0, 1);
			break;
		case 9:
			func_521(9, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 10:
			func_521(10, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 11:
			func_521(11, Global_35, &(Local_15.f_307[0]), 1, 0);
			break;
		case 12:
			func_521(12, Global_35, &(Local_15.f_307[0]), 1, 0);
			break;
		case 13:
			func_521(13, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 14:
			func_521(14, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 15:
			func_521(15, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 16:
			func_521(16, Global_35, &(Local_15.f_307[0]), 1, 0);
			break;
		case 17:
			func_521(17, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 18:
			func_521(18, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 19:
			func_521(19, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 20:
			func_521(20, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 21:
			func_521(21, Global_35, &(Local_15.f_307[0]), 1, 0);
			break;
		case 22:
			func_521(22, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 23:
			func_521(23, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 24:
			func_521(24, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 25:
			func_521(25, Global_35, &(Local_15.f_307[0]), 1, 0);
			break;
		case 26:
			func_521(26, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 27:
			func_521(27, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 28:
			func_521(28, Global_35, &(Local_15.f_307[0]), 1, 0);
			break;
		case 29:
			func_521(29, Global_35, &(Local_15.f_307[17]), 1, 0);
			break;
		case 30:
			func_521(30, Global_35, &(Local_15.f_307[17]), 1, 0);
			break;
		case 31:
			func_521(31, Global_35, &(Local_15.f_307[17]), 1, 0);
			break;
		case 32:
			func_521(32, &(Local_15.f_307[17]), Global_35, 1, 0);
			break;
		case 33:
			func_521(33, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 34:
			func_521(34, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 35:
			func_521(35, Global_35, &(Local_15.f_307[17]), 1, 0);
			break;
		case 36:
			func_521(36, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 37:
			func_521(37, Global_35, &(Local_15.f_307[0]), 1, 0);
			break;
		case 38:
			func_521(38, Global_35, &(Local_15.f_307[0]), 1, 0);
			break;
		case 39:
			func_521(39, Global_35, &(Local_15.f_307[0]), 1, 0);
			break;
		case 40:
			func_521(40, Global_35, &(Local_15.f_307[0]), 1, 0);
			break;
		case -1:
			break;
	}
}

void func_225()
{
	switch (Local_15.f_11)
	{
		case 0:
			if (!func_520(1))
			{
				func_522("H2_OBJ_KILLBUF", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_523(-1);
			}
			break;
		case 1:
			if (!func_520(1))
			{
				func_522("H2_OBJ_SKINBUF", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_523(-1);
			}
			break;
		case 2:
			func_522("H2_OBJ_STWHID", 7500, 0, 1, 0, 0, -1, -1, 0);
			func_523(-1);
			break;
		case 3:
			func_522("H2_OBJ_MNTFLW", 7500, 0, 1, 0, 0, -1, -1, 0);
			func_523(-1);
			break;
		case 4:
			func_522("H2_OBJ_FOLLOW", 7500, 0, 1, 0, 0, -1, -1, 0);
			func_523(-1);
			break;
		case 5:
			if (!func_520(1))
			{
				func_522("H2_OBJ_SEARCH", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_523(-1);
			}
			break;
		case 6:
			if (!func_520(1))
			{
				func_522("H2_OBJ_FNDCMP", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_523(-1);
			}
			break;
		case 7:
			if (!func_520(1))
			{
				func_522("H2_OBJ_INT", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_523(-1);
			}
			break;
		case 8:
			if (!func_520(1))
			{
				func_522("H2_OBJ_LOOT", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_523(-1);
			}
			break;
		case -1:
			break;
	}
}

void func_226()
{
	if (!MAP::DOES_BLIP_EXIST(Local_15.f_18) || MAP::GET_BLIP_FROM_ENTITY(&(Local_15.f_307[0])) == 0)
	{
		Local_15.f_18 = func_524(&(Local_15.f_307[0]), 422991367, 1, 1);
	}
}

void func_227(var uParam0)
{
	if (func_199(Local_15.f_631, 1048576))
	{
		return;
	}
	if (func_223(Global_35, func_525(), 1) > func_526())
	{
		func_60(&(Local_15.f_93), 0);
		if (!func_199(Local_15.f_631, 4096))
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_522(func_527(), 7500, 0, 1, 0, 0, -1, -1, 0);
			func_528(&(Local_15.f_631), 4096);
		}
		if (func_529(&(Local_15.f_93), 7f))
		{
			StringCopy(&(uParam0->f_15), "H2_FL_ABND", 24);
			uParam0->f_14 = 5;
			func_528(&(Local_15.f_631), 8192);
		}
	}
	else if (func_199(Local_15.f_631, 4096))
	{
		func_205(&(Local_15.f_93));
		func_530(&(Local_15.f_631), 4096);
		func_532(func_531());
		if (Local_15.f_12 == 2)
		{
			func_523(2);
		}
	}
}

void func_228(var uParam0)
{
	vector3 vVar0;

	if (!func_199(Local_15.f_631, 64))
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	if (vVar0.z >= 117.4391f)
	{
		func_60(&(Local_15.f_99), 0);
		if (!func_199(Local_15.f_631, 1048576))
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_522("H2_OBJ_RTCHA", 7500, 0, 1, 0, 0, -1, -1, 0);
			func_528(&(Local_15.f_631), 1048576);
		}
	}
	if (func_529(&(Local_15.f_99), 3f))
	{
		StringCopy(&(uParam0->f_15), "H2_FL_ABND", 24);
		uParam0->f_14 = 5;
		func_528(&(Local_15.f_631), 8192);
	}
}

void func_229()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_376))
	{
		if (func_533() && !func_199(Local_15.f_631, 32768))
		{
			func_534(0);
			func_233(8, 0);
			func_528(&(Local_15.f_631), 32768);
			return;
		}
		else if ((func_535() && !func_199(Local_15.f_631, 16384)) && !func_199(Local_15.f_631, 32768))
		{
			func_233(8, 0);
			func_528(&(Local_15.f_631), 16384);
		}
	}
	if (func_199(Local_15.f_631, 32768) && !func_520(1))
	{
		func_60(&(Local_15.f_96), 0);
	}
	if (func_529(&(Local_15.f_96), 2f) && func_199(Local_15.f_631, 32768))
	{
		func_528(&(Local_15.f_631), 65536);
	}
}

int func_230()
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	if (PED::_0x608BC6A6AACD5036(&Var0, &(Local_15.f_307[2]), 4, 0))
	{
		iVar5 = Var0.f_3;
		iVar4 = ENTITY::_0x34F008A7E48C496B(iVar5, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar5) && iVar4 == 1400954984)
		{
			return 1;
		}
	}
	return 0;
}

void func_231()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 33)
	{
		if (!func_202(&(Local_15.f_432[iVar0])) && (func_536(Global_35, &(Local_15.f_466[iVar0]), 3.5f, 1) && !&Local_15.f_500[iVar0]))
		{
			Local_15.f_432[iVar0] = func_537("INSPECT", -719620017, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			HUD::_UIPROMPT_SET_GROUP(func_538(&(Local_15.f_432[iVar0])), 1892922820, 0);
		}
		if (func_536(Global_35, &(Local_15.f_466[iVar0]), 3.5f, 1) && !func_539())
		{
			if (&Local_15.f_500[iVar0])
			{
				func_540(&(Local_15.f_432[iVar0]), 0, 1);
				func_528(&iVar1, 8);
				HUD::_UIPROMPT_SET_VISIBLE(func_538(&(Local_15.f_432[iVar0])), 0);
			}
			else
			{
				if (func_541(&(Local_15.f_432[iVar0]), 1) && !&Local_15.f_500[iVar0])
				{
					func_233(func_542(iVar0), 1);
					Local_15.f_500[iVar0] = 1;
				}
				if (func_520(1))
				{
					func_540(&(Local_15.f_432[iVar0]), 0, 1);
				}
				else
				{
					func_540(&(Local_15.f_432[iVar0]), 1, 1);
				}
				func_530(&iVar1, 8);
				HUD::_UIPROMPT_SET_VISIBLE(func_538(&(Local_15.f_432[iVar0])), 1);
			}
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(1892922820, "INTERACT_DEAD_BUFFALO_ILO_PROMPT", 1, 0, iVar1, 0);
		}
		else if (func_202(&(Local_15.f_432[iVar0])))
		{
			func_540(&(Local_15.f_432[iVar0]), 0, 1);
			func_543(&(Local_15.f_432[iVar0]), 0, 1);
		}
		iVar0++;
	}
}

int func_232(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_544(iParam0, 32))
	{
		return 1;
	}
	return 0;
}

void func_233(int iParam0, int iParam1)
{
	if (Local_15.f_10 != iParam0)
	{
		Local_15.f_10 = iParam0;
	}
	Local_15.f_246 = iParam1;
}

struct<4> func_234(int iParam0)
{
	struct<4> Var0;

	switch (iParam0)
	{
		case 0:
			if (Local_15.f_411 == 71)
			{
				Var0 = { func_545(0, 0) };
				Var0.f_3 = func_546(0, 0);
			}
			else
			{
				Var0 = { func_545(1, 0) };
				Var0.f_3 = func_546(1, 0);
			}
			break;
		case 1:
			if (Local_15.f_411 == 71)
			{
				Var0 = { func_545(2, 0) };
				Var0.f_3 = func_546(2, 0);
			}
			else
			{
				Var0 = { func_545(3, 0) };
				Var0.f_3 = func_546(3, 0);
			}
			break;
		case 2:
			if (Local_15.f_411 == 71)
			{
				Var0 = { func_545(4, 0) };
				Var0.f_3 = func_546(4, 0);
			}
			else
			{
				Var0 = { func_545(5, 0) };
				Var0.f_3 = func_546(5, 0);
			}
			break;
		case 3:
			if (Local_15.f_411 == 71)
			{
				Var0 = { func_545(6, 0) };
				Var0.f_3 = func_546(6, 0);
			}
			else
			{
				Var0 = { func_545(7, 0) };
				Var0.f_3 = func_546(7, 0);
			}
			break;
		case 4:
			Var0 = { func_545(8, 0) };
			Var0.f_3 = func_546(8, 0);
			break;
		case 5:
			Var0 = { func_545(9, 0) };
			Var0.f_3 = func_546(9, 0);
			break;
		case 6:
			Var0 = { func_545(10, 0) };
			Var0.f_3 = func_546(10, 0);
			break;
		case 7:
			Var0 = { func_545(11, 0) };
			Var0.f_3 = func_546(11, 0);
			break;
		case 8:
			Var0 = { func_545(12, 0) };
			Var0.f_3 = func_546(12, 0);
			break;
	}
	return Var0;
}

void func_235(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<4> Var4;

	if (Global_1391438->f_3 != iParam9)
	{
		func_101(0);
	}
	uParam0->f_7 = iParam9;
	Global_1391438->f_3 = iParam9;
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_547(uParam0->f_5, Var0, Var4, iParam9, iParam10);
}

void func_236(int iParam0, bool bParam1)
{
	if (Local_15 != iParam0)
	{
		Local_15 = iParam0;
	}
	func_548(bParam1);
}

int func_237(var uParam0)
{
	int iVar0;

	switch (Local_15.f_1)
	{
		case 0:
			func_549(uParam0, 2);
			func_551(func_550(0), func_550(1), 1092616192, 5f, 10f, 0, 1);
			func_553(func_552(0));
			func_554(10, 999);
			func_555(0, 1);
			TASK::TASK_STAND_STILL(&(Local_15.f_307[2]), -1);
			TASK::TASK_STAND_STILL(&(Local_15.f_307[1]), -1);
			func_235(uParam0, func_234(1), func_234(2), 1, 2);
			if (func_556(&(Local_15.f_307[0]), 1, 2, 0) != joaat("weapon_shotgun_sawedoff_charles"))
			{
				func_557(&(Local_15.f_307[0]), joaat("weapon_shotgun_sawedoff_charles"), 0, 0, 2, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_START");
			func_558(1, 1);
			break;
		case 1:
			func_559(uParam0, 1);
			func_560(uParam0, 1107820544, 1, 1086324736, 0);
			if (!func_199(Local_15.f_631, 128))
			{
				func_561();
			}
			if (!func_199(Local_15.f_631, 256))
			{
				func_562();
			}
			if (Local_15.f_391 >= 4)
			{
				func_233(1, 0);
				if ((Local_15.f_411 == 98 && Local_15.f_204[1]) // PointerArith && TASK::GET_PED_WAYPOINT_PROGRESS(&(Local_15.f_307[0])) >= 55)
				{
					func_233(2, 0);
				}
			}
			if (TASK::GET_PED_WAYPOINT_PROGRESS(&(Local_15.f_307[0])) >= 113 && Local_15.f_411 == 71)
			{
				func_233(3, 0);
			}
			else if (TASK::GET_PED_WAYPOINT_PROGRESS(&(Local_15.f_307[0])) >= 290 && Local_15.f_411 == 98)
			{
				func_233(4, 0);
			}
			if (Local_15.f_411 == 71)
			{
				iVar0 = 169;
			}
			else
			{
				iVar0 = 361;
			}
			if (TASK::GET_PED_WAYPOINT_PROGRESS(&(Local_15.f_307[0])) >= iVar0 && func_563(Global_35, &(Local_15.f_307[0]), 1, 1) < 20f)
			{
				func_233(5, 0);
				if (!Local_15.f_641)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_BISON");
					Local_15.f_641 = 1;
				}
			}
			func_564(Global_35, Local_15.f_401, 0, 20f, 10f, 6f, 1084227584, 1, 1, 1, 0);
			if (Local_15.f_391 == 7)
			{
				func_235(uParam0, func_234(2), func_234(3), 2, 3);
				func_558(2, 1);
			}
			break;
		case 2:
			return 1;
	}
	return 0;
}

int func_238(var uParam0)
{
	float fVar0;
	var uVar1;

	switch (Local_15.f_2)
	{
		case 0:
			func_233(6, 0);
			func_60(&(Local_15.f_84), 0);
			if (func_529(&(Local_15.f_84), 8.75f))
			{
				func_205(&(Local_15.f_84));
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				func_523(0);
				if (!&Local_15.f_273[0])
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(&(Local_15.f_307[0]), &(Local_15.f_307[3]), 0f, 0f, -5f, 2f, -1, 1036831949, 1, 1, 0, 0, 1);
					Local_15.f_273[0] = 1;
				}
				func_565(1, 1);
			}
			else
			{
				func_566(Global_35, &(Local_15.f_630), 2113, 0, 0, 5f, 100, 0, 0);
			}
			break;
		case 1:
			if (func_567() && !Local_15.f_102)
			{
				func_568(uParam0, 1);
				func_568(uParam0, 2);
				func_549(uParam0, 4);
				Local_15.f_102 = 1;
			}
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 3f);
			func_569();
			func_570();
			func_60(&(Local_15.f_84), 0);
			if (Local_15.f_411 == 71)
			{
				fVar0 = 1.75f;
			}
			else
			{
				fVar0 = 2.75f;
			}
			if (func_529(&(Local_15.f_84), fVar0) && !func_199(Local_15.f_631, 131072))
			{
				func_528(&(Local_15.f_631), 131072);
			}
			if (func_199(Local_15.f_631, 131072))
			{
				func_571();
			}
			if (func_572())
			{
				func_568(uParam0, 4);
				func_532("H2_OBJ_SKINBUF");
				func_565(2, 1);
			}
			break;
		case 2:
			func_571();
			if (!func_520(1))
			{
				func_60(&(Local_15.f_75), 0);
			}
			if ((func_529(&(Local_15.f_75), 3f) && !func_520(1)) && !Local_15.f_102)
			{
				func_205(&(Local_15.f_75));
				func_523(1);
				Local_15.f_102 = 1;
			}
			if (func_573())
			{
				if (!&Local_15.f_273[0])
				{
					func_574(0, 1, 1);
					TASK::TASK_MOUNT_ANIMAL(0, &(Local_15.f_307[1]), 20000, -1, 2f, 1, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_575(Local_15.f_376, &(Local_15.f_307[0]), 10f), 2f, 20000, 0.25f, false, 40000f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_15.f_376, -1, -1082130432, -1082130432, -1082130432);
					func_576(0, 1, 0, 0, 1);
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(Local_15.f_376))
			{
				if ((!ENTITY::_0x8DE41E9902E85756(Local_15.f_376) && !PED::_0x3AEC4A410ECAF30D(Local_15.f_376)) && ENTITY::_0x0CCEFC6C2C95DA2A(&uVar1, Local_15.f_376, 0, Global_35) == 0)
				{
					func_528(&(Local_15.f_631), 2097152);
				}
			}
			if (func_577())
			{
				func_578();
				if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_375) && PED::_0xA911EE21EDF69DAF(Global_35))
				{
					Local_15.f_375 = PED::_0xD806CD2A4F2C2996(Global_35);
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(&(Local_15.f_307[0]), Global_35, 0f, -6f, 0f, 1f, -1, 15f, 1, 1, 0, 1, 1);
					Local_15.f_273[0] = 1;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_375))
				{
					func_233(10, 0);
					PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[2]), 136, true);
					AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_BIRDS");
					func_532("H2_OBJ_STWHID");
					func_565(3, 1);
				}
			}
			else
			{
				if ((func_563(Global_35, &(Local_15.f_307[0]), 1, 1) < 20f && !func_579()) && !func_199(Local_15.f_631, 32768))
				{
					func_233(7, 0);
					func_60(&(Local_15.f_84), 0);
					if (!Local_15.f_641)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_SKIN");
						Local_15.f_641 = 1;
					}
				}
				if ((func_529(&(Local_15.f_84), 4f) && !func_579()) && !func_199(Local_15.f_631, 32768))
				{
					func_233(9, 0);
				}
				if (func_579())
				{
					if (!&Local_15.f_273[2] && func_563(&(Local_15.f_307[2]), Global_35, 1, 1) < 3.5f)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(&(Local_15.f_307[2]), func_575(Local_15.f_376, &(Local_15.f_307[2]), 5f), 1f, 20000, 0.25f, false, 40000f);
						Local_15.f_273[2] = 1;
					}
				}
				func_569();
			}
			break;
		case 3:
			func_549(uParam0, 2);
			if (!func_199(Local_15.f_631, 512))
			{
				func_580();
			}
			if (!func_520(1) && !Local_15.f_102)
			{
				func_523(2);
				Local_15.f_102 = 1;
			}
			ENTITY::_0x18FF3110CF47115D(Local_15.f_375, 4, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_375) && func_581(Global_35))
			{
				func_205(&(Local_15.f_75));
				func_205(&(Local_15.f_84));
				ENTITY::_0x18FF3110CF47115D(Local_15.f_375, 4, 1);
				func_523(-1);
				_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
				PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[2]), 136, false);
				func_233(11, 0);
				func_549(uParam0, 2);
				func_532("H2_OBJ_MNTFLW");
				func_565(5, 1);
			}
			else if (func_223(&(Local_15.f_307[0]), func_550(3), 1) < 30f)
			{
				func_233(13, 0);
				func_565(6, 1);
			}
			break;
		case 5:
			if (!func_520(1) && func_582(&(Local_15.f_307[2]), Local_15.f_375))
			{
				func_60(&(Local_15.f_75), 0);
			}
			if ((func_529(&(Local_15.f_75), 6f) && !func_520(1)) && !Local_15.f_102)
			{
				func_205(&(Local_15.f_75));
				func_523(3);
				Local_15.f_102 = 1;
			}
			if (func_583(Global_35, &(Local_15.f_307[2]), 0))
			{
				func_205(&(Local_15.f_75));
				func_568(uParam0, 2);
				func_549(uParam0, 1);
				func_233(12, 0);
				func_565(6, 1);
			}
			else if (func_223(&(Local_15.f_307[0]), func_550(3), 1) < 30f)
			{
				func_233(13, 0);
				func_565(6, 1);
			}
			break;
		case 6:
			func_560(uParam0, 25f, 0, 1086324736, 1);
			if (!func_199(Local_15.f_631, 512))
			{
				func_580();
			}
			if (!PED::DOES_GROUP_EXIST(Local_15.f_420))
			{
				Local_15.f_420 = PED::CREATE_GROUP(0);
				PED::SET_GROUP_FORMATION(Local_15.f_420, 3);
				PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[0]), 279, true);
				PED::SET_PED_AS_GROUP_LEADER(&(Local_15.f_307[0]), Local_15.f_420, 0);
				PED::_0x0E9E95FDEDCC9D35(Global_35, 0, 0);
			}
			PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::GET_PLAYER_INDEX(), &(Local_15.f_307[0]), -2f, 0f, 1, 2, 0);
			if (func_223(Global_35, func_550(3), 1) < 15f)
			{
				func_584();
			}
			if (func_585(uParam0) && func_223(Global_35, func_550(3), 1) < 15f)
			{
				func_233(14, 0);
				func_565(7, 1);
			}
			break;
		case 7:
			func_586(uParam0);
			func_587(1);
			func_588(Local_15.f_307[0]);
			if (Local_15.f_411 == 71)
			{
				Local_15.f_377 = 10;
			}
			else
			{
				Local_15.f_377 = 12;
			}
			if (!&Local_15.f_273[0])
			{
				func_574(0, 1, 1);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, &(Local_15.f_307[Local_15.f_377]), 5500, -1082130432, -1082130432, -1082130432);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, func_550(5), 0.101f, 20000, 40000f, 1056964608, 0);
				func_576(0, 1, 0, 0, 1);
			}
			if (!func_520(1))
			{
				func_565(8, 1);
			}
			break;
		case 8:
			func_586(uParam0);
			if (func_589())
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_15.f_375) && !func_582(&(Local_15.f_307[2]), Local_15.f_375)) && !func_581(Global_35))
				{
					if (!&Local_15.f_273[0])
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(Local_15.f_307[0]), Global_35, -1, -1082130432, -1082130432, -1082130432);
					}
					func_565(9, 1);
				}
				else
				{
					func_523(-1);
					_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
					func_565(10, 1);
				}
			}
			break;
		case 9:
			func_586(uParam0);
			func_233(15, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_375) && (func_582(&(Local_15.f_307[2]), Local_15.f_375) || func_581(Global_35)))
			{
				func_523(-1);
				_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
				func_565(10, 1);
			}
			break;
		case 10:
			return 1;
	}
	return 0;
}

int func_239(var uParam0)
{
	int iVar0;

	switch (Local_15.f_3)
	{
		case 0:
			func_235(uParam0, func_234(3), func_234(4), 3, 4);
			func_551(func_550(5), func_550(6), 1092616192, 20f, 20f, 1, 1);
			func_553(func_552(1));
			func_554(10, 999);
			func_555(0, 1);
			func_587(1);
			func_590(1, 1);
			break;
		case 1:
			func_559(uParam0, 1);
			func_560(uParam0, 1107820544, 1, 8f, 0);
			if (Local_15.f_411 == 71)
			{
				iVar0 = 27;
			}
			else
			{
				iVar0 = 5;
			}
			if (TASK::GET_PED_WAYPOINT_PROGRESS(&(Local_15.f_307[0])) >= iVar0)
			{
				func_233(16, 0);
			}
			if (TASK::GET_PED_WAYPOINT_PROGRESS(&(Local_15.f_307[0])) >= 88 && Local_15.f_411 == 71)
			{
				func_587(0);
				func_233(17, 0);
			}
			else if (TASK::GET_PED_WAYPOINT_PROGRESS(&(Local_15.f_307[0])) >= 126 && Local_15.f_411 == 98)
			{
				func_587(0);
				func_233(18, 0);
			}
			func_564(Global_35, func_550(6), 0, 30f, 20f, 10f, 1084227584, 1, 1, 1, 0);
			if (Local_15.f_391 == 7)
			{
				func_235(uParam0, func_234(4), func_234(5), 4, 5);
				func_590(2, 1);
			}
			break;
		case 2:
			func_587(1);
			func_233(19, 0);
			func_549(uParam0, 1);
			func_590(3, 1);
			break;
		case 3:
			return 1;
	}
	return 0;
}

void func_240()
{
	int iVar0;

	if ((!func_202(Local_15.f_267) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Local_15.f_53[8]), true, 0)) && !PED::IS_PED_ON_MOUNT(Global_35))
	{
		Local_15.f_267 = func_537("INSPECT", -719620017, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		HUD::_UIPROMPT_SET_GROUP(func_538(Local_15.f_267), 925736033, 0);
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Local_15.f_53[8]), true, 0) && !PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Local_15.f_429)
		{
			func_540(Local_15.f_267, 0, 1);
			func_528(&iVar0, 8);
			HUD::_UIPROMPT_SET_VISIBLE(func_538(Local_15.f_267), 0);
		}
		else
		{
			func_540(Local_15.f_267, 1, 1);
			func_530(&iVar0, 8);
			HUD::_UIPROMPT_SET_VISIBLE(func_538(Local_15.f_267), 1);
		}
		HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 925736033, "H2_UC_TITLE_CAMP_FIRE", iVar0);
	}
	else if (func_202(Local_15.f_267))
	{
		func_540(Local_15.f_267, 0, 1);
		func_543(Local_15.f_267, 0, 1);
	}
}

int func_241(var uParam0)
{
	switch (Local_15.f_4)
	{
		case 0:
			func_549(uParam0, 1);
			if (!&Local_15.f_273[0])
			{
				func_574(0, 1, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_550(6), 1f, -1, 0.25f, false, 40000f);
				TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_550(4), 1f, -1, 0.25f, false, 40000f);
				TASK::_TASK_USE_SCENARIO_POINT(0, Local_15.f_621, 0, 0, 1, 0, 0, 0, -1082130432, 0);
				func_576(0, 1, 0, 0, 1);
			}
			func_564(Global_35, func_550(6), 1, 30f, 20f, 15f, 10f, 1, 1, 1, 0);
			if (!func_520(1))
			{
				func_568(uParam0, 1);
				func_568(uParam0, 2);
				func_549(uParam0, 5);
				func_523(5);
				AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_CAMP");
				func_591(1, 1);
			}
			break;
		case 1:
			if (PED::_0x9C54041BB66BCF9E(&(Local_15.f_307[0]), Local_15.f_621))
			{
				func_60(&(Local_15.f_84), 0);
			}
			if (func_529(&(Local_15.f_84), 3f) || func_541(Local_15.f_267, 1))
			{
				if (!&Local_15.f_273[0])
				{
					func_574(0, 1, 1);
					TASK::TASK_MOUNT_ANIMAL(0, &(Local_15.f_307[1]), -1, -1, 1f, 1, 0, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
					func_576(0, 1, 0, 0, 1);
				}
				Local_15.f_105 = 1;
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Local_15.f_53[8]), true, 0))
			{
				Local_15.f_425 = 1;
			}
			if (func_541(Local_15.f_267, 1) && !Local_15.f_429)
			{
				func_568(uParam0, 5);
				TASK::_TASK_USE_SCENARIO_POINT(Global_35, func_592(), 0, 3500, 1, 0, 0, 0, -1082130432, 0);
				TASK::TASK_LOOK_AT_COORD(Global_35, 482.4894f, 288.3185f, 110.1799f, 5000, 0, 51, 0);
				Local_15.f_429 = 1;
			}
			else if (func_583(&(Local_15.f_307[0]), &(Local_15.f_307[1]), 0) && Local_15.f_105)
			{
				func_233(20, 0);
			}
			if (Local_15.f_429 && TASK::GET_SCRIPT_TASK_STATUS(Global_35, -76381094, 1) == 8)
			{
				func_549(uParam0, 2);
				func_523(3);
				func_591(2, 1);
			}
			break;
		case 2:
			if (func_583(Global_35, &(Local_15.f_307[2]), 0))
			{
				func_568(uParam0, 2);
				func_549(uParam0, 1);
			}
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Local_15.f_53[8]), true, 0))
			{
				PED::_0x7DE9692C6F64CFE8(Global_35, false, 0, 0);
			}
			if (func_563(Global_35, &(Local_15.f_307[0]), 1, 1) < 15f)
			{
				func_233(21, 0);
			}
			if ((func_583(&(Local_15.f_307[0]), &(Local_15.f_307[1]), 0) && Local_15.f_204[21]) // PointerArith && !func_520(1))
			{
				func_591(3, 1);
			}
			break;
		case 3:
			func_591(4, 1);
			break;
		case 4:
			return 1;
	}
	return 0;
}

int func_242(var uParam0, vector3 vParam1, char* sParam4)
{
	if (func_593(uParam0->f_1, 1))
	{
		return 1;
	}
	STREAMING::REQUEST_NAMED_PTFX_ASSET(-458373790);
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(-458373790))
	{
		if (!func_593(uParam0->f_1, 8))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
				*uParam0 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(sParam4, vParam1, 0f, 0f, 0f, 1f, false, false, false, false);
				func_282(&(uParam0->f_1), 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_243(var uParam0)
{
	switch (Local_15.f_5)
	{
		case 0:
			func_235(uParam0, func_234(5), func_234(6), 5, 6);
			func_551(func_550(7), func_550(8), 1092616192, 15f, 15f, 0, 1);
			func_553(func_552(2));
			func_554(10, 999);
			func_555(0, 1);
			AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_LOOKOUT");
			func_594(1, 1);
			break;
		case 1:
			func_559(uParam0, 1);
			func_560(uParam0, 1107820544, 1, 1086324736, 0);
			if (TASK::GET_PED_WAYPOINT_PROGRESS(&(Local_15.f_307[0])) >= 5)
			{
				func_233(22, 0);
			}
			if (TASK::GET_PED_WAYPOINT_PROGRESS(&(Local_15.f_307[0])) >= 35)
			{
				func_233(23, 0);
			}
			func_564(Global_35, Local_15.f_401, 0, 15f, 10f, 6f, 1084227584, 1, 1, 1, 0);
			if (Local_15.f_391 == 7)
			{
				func_587(1);
				func_594(2, 1);
			}
			break;
		case 2:
			return 1;
	}
	return 0;
}

int func_244(var uParam0)
{
	switch (Local_15.f_6)
	{
		case 0:
			func_235(uParam0, func_234(6), func_234(8), 6, 8);
			func_564(Global_35, func_550(8), 0, 15f, 10f, 6f, 1084227584, 1, 1, 1, 0);
			func_564(Global_35, 549.0963f, 261.3567f, 121.7802f, 0, 15f, 10f, 6f, 1084227584, 1, 1, 1, 0);
			func_549(uParam0, 1);
			func_233(23, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_307[16])))
			{
				Local_15.f_307[16] = func_598(func_595(1), func_596(16), func_597(16), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				func_599(&(Local_15.f_307[16]), 0);
				WEAPON::REMOVE_ALL_PED_WEAPONS(&(Local_15.f_307[16]), true, true);
				Local_15.f_378 = WEAPON::_0x9888652B8BA77F73(joaat("weapon_revolver_cattleman"), -1, ENTITY::GET_ENTITY_COORDS(&(Local_15.f_307[16]), true, false), 1, 1065353216);
				WEAPON::_0x1A47699E8D533E8F(&(Local_15.f_378), &(Local_15.f_307[16]), 752097756, 0);
				return 0;
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_307[17])))
			{
				Local_15.f_307[17] = func_598(func_595(1), func_596(17), func_597(17), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				func_516(&(Local_15.f_106), &(Local_15.f_307[17]), "HUNHC_HUNTER2", 0);
				func_599(&(Local_15.f_307[17]), 0);
				return 0;
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_307[18])))
			{
				Local_15.f_307[18] = func_598(func_595(2), func_596(18), func_597(18), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				return 0;
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_307[19])))
			{
				Local_15.f_307[19] = func_598(func_595(3), func_596(19), func_597(19), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				return 0;
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_15.f_307[16]), true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_15.f_307[17]), true);
				PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[16]), 6, true);
				PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[17]), 6, true);
				if (func_600(&(Local_15.f_418), func_66(Local_15.f_418), 0, 1))
				{
					func_601(Local_15.f_418);
					func_602(1, 1);
				}
				else
				{
					return 0;
				}
			}
			break;
		case 1:
			func_564(Global_35, func_550(8), 0, 15f, 10f, 6f, 1084227584, 1, 1, 1, 0);
			func_564(Global_35, 549.0963f, 261.3567f, 121.7802f, 0, 15f, 10f, 6f, 1084227584, 1, 1, 1, 0);
			if (!func_603(Local_15.f_418, 1, func_66(Local_15.f_418)))
			{
				return 0;
			}
			if (!func_603(Local_15.f_418, 2, func_66(Local_15.f_418)))
			{
				return 0;
			}
			STREAMING::_0x03DDBF2D73799F9E(func_71(0));
			if (!STREAMING::_0x85B8F04555AB49B8(func_71(0)))
			{
				return 0;
			}
			STREAMING::_0x03DDBF2D73799F9E(func_71(1));
			if (!STREAMING::_0x85B8F04555AB49B8(func_71(1)))
			{
				return 0;
			}
			STREAMING::_0x03DDBF2D73799F9E(func_71(2));
			if (!STREAMING::_0x85B8F04555AB49B8(func_71(2)))
			{
				return 0;
			}
			STREAMING::_0x03DDBF2D73799F9E(func_71(3));
			if (!STREAMING::_0x85B8F04555AB49B8(func_71(3)))
			{
				return 0;
			}
			PED::_0xF7EA250B9A919E03(2017973493, &(Local_15.f_307[17]));
			if (!PED::_0x854BC9B1A1CCD034(2017973493, &(Local_15.f_307[17])))
			{
				return 0;
			}
			func_602(2, 1);
			break;
		case 2:
			func_564(Global_35, func_550(8), 0, 15f, 10f, 6f, 1084227584, 1, 1, 1, 0);
			func_564(Global_35, 549.0963f, 261.3567f, 121.7802f, 0, 15f, 10f, 6f, 1084227584, 1, 1, 1, 0);
			if (!func_520(1))
			{
				func_532("H2_OBJ_FNDCMP");
				func_602(3, 1);
			}
			break;
		case 3:
			func_568(uParam0, 1);
			func_568(uParam0, 2);
			if (PED::GET_PED_CONFIG_FLAG(&(Local_15.f_307[0]), 167, true))
			{
				PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[0]), 167, false);
			}
			if (!func_520(1))
			{
				func_60(&(Local_15.f_75), 0);
			}
			if (func_604(877.5134f, 418.416f, 116.7355f, 17.5f, 20f))
			{
				func_205(&(Local_15.f_87));
			}
			else
			{
				func_60(&(Local_15.f_87), 0);
			}
			if (func_529(&(Local_15.f_87), 2.5f))
			{
				func_205(&(Local_15.f_87));
				func_233(24, 0);
				CAM::SET_GAMEPLAY_COORD_HINT(func_545(13, 2), 2000, 2000, 2000, 0);
				func_587(0);
				func_602(4, 1);
			}
			else
			{
				if (func_604(877.5134f, 418.416f, 116.7355f, 17.5f, 20f))
				{
					func_60(&(Local_15.f_84), 0);
					func_205(&(Local_15.f_75));
				}
				else
				{
					func_205(&(Local_15.f_84));
				}
				if (func_529(&(Local_15.f_84), 1.5f))
				{
					func_205(&(Local_15.f_84));
					func_233(25, 0);
					CAM::SET_GAMEPLAY_COORD_HINT(func_545(13, 2), 2000, 2000, 2000, 0);
					func_587(0);
					func_602(4, 1);
				}
			}
			func_566(Global_35, &(Local_15.f_630), 2113, 0, 0, 5f, 100, 0, 0);
			break;
		case 4:
			func_60(&(Local_15.f_84), 0);
			if (func_529(&(Local_15.f_84), 4f))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				func_205(&(Local_15.f_84));
				func_549(uParam0, 1);
				func_602(6, 1);
			}
			else
			{
				func_566(Global_35, &(Local_15.f_630), 2113, 0, 0, 5f, 100, 0, 0);
			}
			break;
		case 6:
			return 1;
	}
	return 0;
}

int func_245(var uParam0)
{
	switch (Local_15.f_7)
	{
		case 0:
			func_235(uParam0, func_234(6), func_234(8), 6, 8);
			func_551(func_550(9), func_550(10), 1092616192, 15f, 15f, 0, 0);
			func_553(func_552(3));
			func_554(0, 999);
			func_555(0, 1);
			func_605(1, 1);
			break;
		case 1:
			func_559(uParam0, 1);
			func_560(uParam0, 1107820544, 1, 1086324736, 0);
			func_606(75f);
			if (TASK::GET_PED_WAYPOINT_PROGRESS(&(Local_15.f_307[0])) >= 35)
			{
				func_233(26, 0);
			}
			if (TASK::GET_PED_WAYPOINT_PROGRESS(&(Local_15.f_307[0])) >= 131 && func_583(&(Local_15.f_307[0]), &(Local_15.f_307[1]), 0))
			{
				func_233(27, 0);
				if (!func_199(Local_15.f_631, 64))
				{
					func_528(&(Local_15.f_631), 64);
				}
			}
			func_564(Global_35, Local_15.f_401, 0, 25f, 17f, 8f, 1084227584, 1, 1, 1, 0);
			if (func_223(&(Local_15.f_307[0]), Local_15.f_401, 1) < 3f)
			{
				func_587(1);
				func_605(2, 1);
			}
			break;
		case 2:
			func_564(Global_35, func_550(10), 0, 22f, 18f, 8f, 1084227584, 1, 1, 1, 0);
			if (func_223(Global_35, func_550(10), 1) < 8f)
			{
				if ((PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) && TASK::GET_SCRIPT_TASK_STATUS(Global_35, 501393341, 1) != 1) && TASK::GET_SCRIPT_TASK_STATUS(&(Local_15.f_307[0]), 501393341, 1) != 1)
				{
					TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
				}
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Local_15.f_53[20]), true, 0))
				{
					func_246();
				}
			}
			if (func_607(uParam0))
			{
				TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_LOCKBOX_LRG_LOCKED", false);
				if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
				{
					TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
				}
				func_606(20f);
				func_605(3, 1);
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

void func_246()
{
	if (!func_29(Global_35, 0))
	{
		return;
	}
	PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
	PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
	PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
	PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1242632265, false);
	PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
	PAD::DISABLE_CONTROL_ACTION(0, 613911080, false);
	PAD::DISABLE_CONTROL_ACTION(0, -620139643, false);
	PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1963753488, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1934388793, false);
	PAD::DISABLE_CONTROL_ACTION(2, -209515122, false);
	func_608(0);
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
	PED::SET_PED_RESET_FLAG(Global_35, 2, true);
	PED::SET_PED_RESET_FLAG(Global_35, 168, true);
	PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Local_15.f_53[17]), true, 0))
	{
		if ((PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) && TASK::GET_SCRIPT_TASK_STATUS(Global_35, 501393341, 1) != 1) && TASK::GET_SCRIPT_TASK_STATUS(&(Local_15.f_307[0]), 501393341, 1) != 1)
		{
			TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[2]), 136, true);
		}
	}
}

int func_247(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, 399753205, false);
	switch (Local_15.f_8)
	{
		case 0:
			if (!&Local_15.f_273[0])
			{
				TASK::TASK_ENTER_ANIM_SCENE(&(Local_15.f_307[0]), Local_15.f_418, "CharlesSmith", func_609(1), 1.5f, 1, 11, 20000, -1082130432);
				Local_15.f_273[0] = 1;
			}
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_15.f_418, "GenStoryMale"))
			{
				TASK::_TASK_INTIMIDATED_2(&(Local_15.f_307[17]), Global_35, 1, 1, 1, 1, 0, 0, 0);
				PED::_0x2208438012482A1A(&(Local_15.f_307[17]), false, false);
				if (!ENTITY::IS_ENTITY_DEAD(&(Local_15.f_307[16])))
				{
					func_610(&(Local_15.f_307[16]), 1, 1);
				}
				PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[18]), 301, true);
				PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[19]), 301, true);
				func_611(1, 1);
				VOLUME::DELETE_VOLUME(&(Local_15.f_53[18]));
			}
			break;
		case 1:
			func_568(uParam0, 1);
			func_549(uParam0, 3);
			if (func_29(Global_35, 0))
			{
				PED::_0xFC3DB99C8144CD81(Global_35, &(Local_15.f_53[11]), 0, 0, 0);
			}
			TASK::TASK_STAND_STILL(&(Local_15.f_307[0]), -1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
			Local_15.f_273[32] = 0;
			func_611(2, 1);
			break;
		case 2:
			if (!&Local_15.f_273[32])
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 0, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 1, false, false);
				TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
				Local_15.f_273[32] = 1;
			}
			if (!PED::_0x57779B55B83E2BEA(&(Local_15.f_307[17])))
			{
				TASK::_TASK_INTIMIDATED_2(&(Local_15.f_307[17]), Global_35, 1, 1, 1, 0, 0, 0, 0);
			}
			if (!&Local_15.f_273[0])
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(Local_15.f_307[0]), &(Local_15.f_307[17]), -1, -1082130432, -1082130432, -1082130432);
				Local_15.f_273[0] = 1;
			}
			if (!func_520(1))
			{
				func_60(&(Local_15.f_84), 0);
			}
			if ((func_529(&(Local_15.f_84), 1f) && !func_520(1)) && !Local_15.f_105)
			{
				func_205(&(Local_15.f_84));
				func_233(28, 0);
				func_611(3, 1);
			}
			break;
		case 3:
			if (func_600(&(Local_15.f_419), func_66(Local_15.f_419), 1, 1))
			{
				func_601(Local_15.f_419);
				func_611(4, 1);
			}
			else
			{
				return 0;
			}
			break;
		case 4:
			if (!func_520(1))
			{
				func_60(&(Local_15.f_75), 0);
			}
			if ((func_529(&(Local_15.f_75), 6f) && !func_520(1)) && !Local_15.f_102)
			{
				func_205(&(Local_15.f_75));
				if (!func_199(Local_15.f_631, 16))
				{
					func_523(7);
				}
				Local_15.f_102 = 1;
			}
			if (func_612())
			{
				func_568(uParam0, 3);
				PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[18]), 301, false);
				PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[19]), 301, false);
				if (VOLUME::_0x666C2F53ABEFC952(&(Local_15.f_53[17])) != 5)
				{
					VOLUME::SET_VOLUME_RELATIONSHIP(&(Local_15.f_53[17]), 623901053);
				}
				func_613(87457520, 874.567f, 417.295f, 110.864f, 0.15f, 0f, 0.03f, 0f, 0f, 0f, &(Local_15.f_629), 912296423, 1, 0, 0, joaat("p_cs_rt_envelope01x"));
				PED::_0x949B2F9ED2917F5D(Global_35, 3);
				PED::_0x949B2F9ED2917F5D(Global_35, 4);
				PED::_0x949B2F9ED2917F5D(Global_35, 1);
				PED::_0x949B2F9ED2917F5D(Global_35, 23);
				PED::_0x949B2F9ED2917F5D(Global_35, 24);
				func_611(5, 1);
			}
			break;
		case 5:
			return 1;
	}
	return 0;
}

void func_248(int iParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, int iParam13, float fParam14)
{
	if (func_614(&(uParam1->f_3), 1))
	{
		func_615(uParam1);
		if (func_616(iParam0, fParam7, fParam11, bParam12, iParam13, fParam14))
		{
			func_617();
		}
	}
	if (func_618(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1, fParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		func_619(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6, iParam9);
	}
}

int func_249(var uParam0)
{
	float fVar0;

	switch (Local_15.f_9)
	{
		case 0:
			if (Local_15.f_250)
			{
				fVar0 = 2.75f;
			}
			else
			{
				fVar0 = 4.75f;
			}
			func_60(&(Local_15.f_90), 0);
			if (func_529(&(Local_15.f_90), fVar0))
			{
				if (!&Local_15.f_273[0])
				{
					func_574(0, 1, 1);
					TASK::TASK_MOUNT_ANIMAL(0, &(Local_15.f_307[1]), 20000, -1, 1.5f, 1, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 724.6437f, 402.9194f, 107.0357f, 2f, -1, 0.25f, 1048580, 40000f);
					TASK::TASK_STAND_STILL(0, -1);
					func_576(0, 1, 0, 0, 1);
				}
				if (!func_520(1))
				{
					func_549(uParam0, 6);
					TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_LOCKBOX_LRG_LOCKED", true);
					func_523(8);
					func_620(1, 1);
				}
			}
			break;
		case 1:
			if (func_167(912296423, 1, 0))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(&(Local_15.f_307[0])) && !ENTITY::IS_ENTITY_ON_SCREEN(&(Local_15.f_307[1])))
				{
					if (!func_583(&(Local_15.f_307[0]), &(Local_15.f_307[1]), 0))
					{
						PED::_SET_PED_ON_MOUNT(&(Local_15.f_307[0]), &(Local_15.f_307[1]), -1, true);
					}
					ENTITY::SET_ENTITY_COORDS(&(Local_15.f_307[0]), 724.6437f, 402.9194f, 107.0357f, true, false, true, true);
				}
				AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_STOP");
				func_620(2, 1);
			}
			break;
		case 2:
			return 1;
	}
	return 0;
}

int func_250(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_18)))
	{
		return 1;
	}
	if (!uParam0->f_11)
	{
		SCRIPTS::REQUEST_SCRIPT(&(uParam0->f_18));
		uParam0->f_11 = 1;
	}
	if (!SCRIPTS::HAS_SCRIPT_LOADED(&(uParam0->f_18)))
	{
		return 0;
	}
	else if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(uParam0->f_18))) > 0)
	{
		SCRIPTS::_0x7423F7835770F619(MISC::GET_HASH_KEY(&(uParam0->f_18)));
		return 0;
	}
	else
	{
		uParam0->f_27 = BUILTIN::START_NEW_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(uParam0->f_18)), uParam0->f_26);
		func_621(&(uParam0->f_9), 4, 1);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(uParam0->f_18));
	}
	return 1;
}

int func_251(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

bool func_252(var uParam0, var uParam1)
{
	return (*uParam0 && uParam1) != 0;
}

int func_253(int iParam0)
{
	if (func_58(iParam0))
	{
		if (func_29(Global_1360165[iParam0 /*1157*/], 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_254(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_58(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_11)
	{
		case 0:
			if (func_272(iParam0, 2, 1))
			{
				func_270(iParam0, 2, 1);
			}
			if (func_288(iParam0, 16, 1))
			{
				if ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD()
				{
					if (bParam14)
					{
						func_59(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1360165)[iParam0 /*1157*/])->f_129, false))
					{
					}
					else
					{
						func_62(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_29(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (func_29(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						func_622(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_59(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_623(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_59(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_623(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = (Global_40.f_4942[iParam0 /*60*/])->f_4;
				}
			}
			if (!func_272(iParam0, 44, 0))
			{
				func_59(iParam0, 44, 0);
			}
			if (func_624(iParam0, vVar0, iParam13, 0, 1, bParam17, bParam20, -1, 1, 0))
			{
				func_623(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_270(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			_NAMESPACE48::_0x6759BEE6762E140B(((*Global_1360165)[iParam0 /*1157*/])->f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_274(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_625(iParam0, 0, 0, 1);
			}
			func_270(iParam0, 33, 1);
			func_270(iParam0, 34, 1);
			func_270(iParam0, 29, 1);
			if (!func_497(vVar0) && iParam7)
			{
				func_623(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_623(iParam0, 4);
			}
			else
			{
				func_623(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						func_622(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_626(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::_0x0C3CB2E600C8977D(Global_1360165[iParam0 /*1157*/], 1))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], 1, 0);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_623(iParam0, 4);
			}
			else
			{
				func_623(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = (Global_40.f_4942[iParam0 /*60*/])->f_4;
					}
				}
				if (func_627(iParam0, iParam13))
				{
					if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
					{
						func_628(iParam0, iParam13, 0);
						func_629(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_272(iParam0, 25, 0))
						{
							func_270(iParam0, 25, 0);
						}
						func_59(iParam0, 66, 0);
						func_623(iParam0, 5);
						((*Global_1360165)[iParam0 /*1157*/])->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_623(iParam0, 5);
				}
				func_59(iParam0, 28, 1);
			}
			else
			{
				func_623(iParam0, 5);
			}
			break;
		case 5:
			if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
			{
				func_623(iParam0, 6);
			}
			break;
		case 6:
			if (func_29(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_630(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_631(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_623(iParam0, 7);
		case 7:
			func_274(iParam0, bParam9, bParam15, 0);
			func_72(iParam0, 4, bParam11);
			func_269(iParam0);
			if (bParam20)
			{
				if (func_632(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_633(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			(Global_40.f_4942[iParam0 /*60*/])->f_4 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
			func_623(iParam0, 0);
			func_478(iParam0, 16, 1);
			func_270(iParam0, 44, 1);
			((*Global_1360165)[iParam0 /*1157*/])->f_1156 = 0;
			((*Global_1360165)[iParam0 /*1157*/])->f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

int func_255(int iParam0, bool bParam1)
{
	int iVar0;
	struct<15> Var1;

	if (!func_58(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]))
	{
		return 0;
	}
	if (func_75(iParam0, 0))
	{
		func_634(iParam0, 1);
		return 1;
	}
	if (!func_635())
	{
		return 0;
	}
	if (bParam1)
	{
		func_622(iParam0, 0, "Adding to Group");
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == -1)
		{
			(*Global_1359489)[iVar0] = iParam0;
		}
		else
		{
			iVar0++;
		}
	}
	func_634(iParam0, 1);
	Global_1359489->f_15 = func_290(1);
	func_59(iParam0, 32, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], -1247684992);
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, true);
	PED::_0x9238A3D970BBB0A9(Global_1360165[iParam0 /*1157*/], -1972074710);
	PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, true);
	if (COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())) != 234527101)
	{
		COMPANION::_0x0DE02DA3C0F66955(func_74(iParam0), COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())));
		COMPANION::_0x61BDA07407754A5C(func_74(iParam0), Global_1391438->f_414.f_37);
	}
	PED::_0x89E59DBD15E21177(func_50(), 0);
	func_636(iParam0);
	Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	Var1.f_12 = 3;
	Var1.f_3 = Global_1360165[iParam0 /*1157*/];
	Var1.f_7 = func_292();
	Var1.f_8 = 0;
	Var1.f_11 = 10;
	Var1.f_14 = Global_1360165[iParam0 /*1157*/];
	MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	return 1;
}

int func_256(var uParam0)
{
	int iVar0;
	struct<11> Var1;
	var uVar12;
	struct<11> Var13;

	func_549(uParam0, 2);
	if (VOLUME::IS_POINT_IN_VOLUME(((*Global_1888801)[71 /*35*/])->f_3, uParam0->f_37))
	{
		Local_15.f_411 = 71;
		Local_15.f_396 = 100;
	}
	else if (VOLUME::IS_POINT_IN_VOLUME(((*Global_1888801)[98 /*35*/])->f_3, uParam0->f_37))
	{
		Local_15.f_411 = 98;
		Local_15.f_396 = 58;
	}
	else
	{
		Local_15.f_411 = -1;
		return 0;
	}
	TASK::REQUEST_WAYPOINT_RECORDING(func_552(0));
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_552(0)))
	{
		return 0;
	}
	TASK::REQUEST_WAYPOINT_RECORDING(func_552(1));
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_552(1)))
	{
		return 0;
	}
	TASK::REQUEST_WAYPOINT_RECORDING(func_552(2));
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_552(2)))
	{
		return 0;
	}
	TASK::REQUEST_WAYPOINT_RECORDING(func_552(3));
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_552(3)))
	{
		return 0;
	}
	STREAMING::REQUEST_MODEL(func_595(0), false);
	STREAMING::REQUEST_MODEL(func_595(4), false);
	STREAMING::REQUEST_MODEL(func_595(5), false);
	STREAMING::REQUEST_MODEL(func_595(1), false);
	STREAMING::REQUEST_MODEL(func_595(2), false);
	STREAMING::REQUEST_MODEL(func_595(3), false);
	STREAMING::REQUEST_MODEL(1077976463, false);
	if (!STREAMING::HAS_MODEL_LOADED(func_595(0)))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(func_595(1)))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(func_595(4)))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(func_595(5)))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(func_595(2)))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(func_595(3)))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(1077976463))
	{
		return 0;
	}
	func_637(1410198831);
	STREAMING::_REQUEST_IMAP(-195226224);
	GRAPHICS::_0xDFEA23EC90113657(-195226224);
	if (!STREAMING::_IS_IMAP_ACTIVE(-195226224))
	{
		return 0;
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(Local_15.f_621))
	{
		Local_15.f_621 = TASK::CREATE_SCENARIO_POINT(1546182539, 481.24f, 266.5857f, 110.1667f, 0f, 0f, -1f, 0);
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(&(Local_15.f_622[0])))
	{
		Local_15.f_622[0] = TASK::CREATE_SCENARIO_POINT(-1241981548, 481.3692f, 288.3472f, 110.1164f, -90.72f, 0f, 5f, 0);
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(&(Local_15.f_622[1])))
	{
		Local_15.f_622[1] = TASK::CREATE_SCENARIO_POINT(-1241981548, 482.6278f, 287.5677f, 110.1579f, 26.96f, 0f, 5f, 0);
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(&(Local_15.f_622[2])))
	{
		Local_15.f_622[2] = TASK::CREATE_SCENARIO_POINT(-1241981548, 481.9943f, 289.3294f, 110.1512f, -164.81f, 0f, 5f, 0);
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(&(Local_15.f_622[3])))
	{
		Local_15.f_622[3] = TASK::CREATE_SCENARIO_POINT(-1241981548, 483.3066f, 288.7596f, 110.2767f, 117.97f, 0f, 5f, 0);
	}
	iVar0 = 5;
	while (iVar0 <= 20)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(&(Local_15.f_53[iVar0])))
		{
			Var1 = { func_638(iVar0) };
			Local_15.f_53[iVar0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var1, Var1.f_1, Var1.f_4, Var1.f_7, Var1.f_10);
			if (iVar0 == 14)
			{
				POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(&(Local_15.f_53[iVar0]), 0, 0, 1140376127, -1, -1, 0);
			}
			if (iVar0 == 16)
			{
				PED::_0x4C39C95AE5DB1329(&(Local_15.f_53[iVar0]), 0, 15);
			}
			if (iVar0 == 7)
			{
				PED::_0x4C39C95AE5DB1329(&(Local_15.f_53[iVar0]), 0, 15);
				POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(&(Local_15.f_53[iVar0]), 0, 0, 0, -1, -1, 0);
				func_639(&(Local_15.f_53[7]), 16);
				func_640(&(Local_15.f_53[iVar0]), 1);
			}
			if (iVar0 == 17)
			{
				if (VOLUME::_0x666C2F53ABEFC952(&(Local_15.f_53[iVar0])) != 21)
				{
					VOLUME::SET_VOLUME_RELATIONSHIP(&(Local_15.f_53[iVar0]), 1030835986);
				}
			}
			if (iVar0 == 18)
			{
				Local_15.f_53[iVar0] = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(Var1, Var1.f_1, Var1.f_4, Var1.f_7);
			}
			if (iVar0 == 19)
			{
				PATHFIND::_0xC1799FAFD2FDF52B(&(Local_15.f_53[iVar0]), 0, 0, 0);
			}
			return 0;
		}
		iVar0++;
	}
	if (Local_15.f_411 == 71)
	{
		*(Local_15.f_602[0 /*3*/]) = { 145.176f, 227.0798f, 112.549f };
		*(Local_15.f_602[1 /*3*/]) = { 128.4882f, 244.1535f, 113.4112f };
		*(Local_15.f_602[2 /*3*/]) = { 134.161f, 268.1133f, 111.3971f };
		*(Local_15.f_602[3 /*3*/]) = { 168.4228f, 269.3983f, 109.9575f };
		*(Local_15.f_602[4 /*3*/]) = { 177.1105f, 250.2016f, 108.8893f };
		*(Local_15.f_602[5 /*3*/]) = { 167.1574f, 230.7074f, 108.942f };
	}
	else
	{
		*(Local_15.f_602[0 /*3*/]) = { 185.722f, -45.01549f, 105.3866f };
		*(Local_15.f_602[1 /*3*/]) = { 204.197f, -6.08444f, 103.2539f };
		*(Local_15.f_602[2 /*3*/]) = { 241.1845f, -6.06027f, 103.3211f };
		*(Local_15.f_602[3 /*3*/]) = { 259.7549f, -45.01028f, 105.2906f };
		*(Local_15.f_602[4 /*3*/]) = { 241.1736f, -84.01103f, 106.2882f };
		*(Local_15.f_602[5 /*3*/]) = { 204.7602f, -84.17793f, 107.4515f };
		Local_15.f_423 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(307.144f, 31.118f, 103.143f, 10f, 1, -1, 0);
		Local_15.f_424 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(279.307f, 16.567f, 106.724f, 4f, 1, -1, 0);
	}
	Local_15.f_307[32] = Global_35;
	if (!ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_307[0])))
	{
		if (!func_10(uParam0->f_2))
		{
			func_254(7, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		else
		{
			Local_15.f_307[0] = func_74(uParam0->f_2);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_307[1])))
	{
		Local_15.f_307[1] = func_641(uParam0->f_2, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		return 0;
	}
	PED::SET_PED_RESET_FLAG(&(Local_15.f_307[0]), 185, true);
	if (!ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_307[2])))
	{
		Var13.f_10 = 7;
		Var13 = 1;
		Var13.f_1 = 1;
		Var13.f_2 = 0;
		Var13.f_3 = 1;
		Var13.f_4 = 1;
		Var13.f_6 = { func_596(2) };
		Var13.f_9 = func_597(2);
		Local_15.f_307[2] = func_642(&uVar12, &Var13);
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_307[1])))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_15.f_307[1]), true);
		TASK::TASK_STAND_STILL(&(Local_15.f_307[1]), -1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_307[0])))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_15.f_307[0]), true);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[0]), 297, true);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[0]), 315, true);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[0]), 130, true);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[0]), 331, true);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[0]), 330, true);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[0]), 512, true);
		if (PED::_0x30569F348D126A5A(&(Local_15.f_307[0])) != -1496612359)
		{
			PED::_0x1902C4CFCC5BE57C(&(Local_15.f_307[0]), -1496612359);
			PED::_0xCC8CA3E88256E58F(&(Local_15.f_307[0]), 0, 1, 1, 1, 0);
		}
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 473, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 474, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 475, true);
	PED::_RESERVE_AMBIENT_PEDS(33);
	func_621(&(uParam0->f_9), 256, 1);
	func_516(&(Local_15.f_106), Global_35, "ARTHUR", 0);
	func_516(&(Local_15.f_106), &(Local_15.f_307[0]), func_517(7), 0);
	AUDIO::STOP_PED_SPEAKING(func_74(uParam0->f_2), true);
	func_621(&(uParam0->f_9), 16, 0);
	func_220(&(uParam0->f_10), 4, 1);
	func_220(&(uParam0->f_10), 8, 1);
	func_220(&(uParam0->f_10), 16, 1);
	func_220(&(uParam0->f_10), 2, 1);
	func_220(&(uParam0->f_10), 1, 1);
	func_557(&(Local_15.f_307[0]), joaat("weapon_melee_knife"), 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	MISC::_0x59174F1AFE095B5A(1632247697, false, true, true, 45f, false);
	PED::SET_PED_CONFIG_FLAG(&(Local_15.f_307[2]), 136, false);
	func_643(0);
	func_606(100f);
	func_233(-1, 0);
	func_523(-1);
	return 1;
}

void func_257(var uParam0)
{
	COMPANION::_0x0F1CD8CA9E65D5F6(func_50(), *uParam0);
	COMPANION::_0xD55A871E1CE3481B(func_50(), uParam0->f_37);
}

int func_258(var uParam0)
{
	if (func_96(&Global_1935630, 2048))
	{
		return 0;
	}
	if (func_644(uParam0))
	{
		CAM::DO_SCREEN_FADE_IN(500);
		func_645(0);
		HUD::DISPLAY_HUD(true);
		MAP::DISPLAY_RADAR(true);
		return 1;
	}
	return 0;
}

bool func_259()
{
	return (func_646() || func_647());
}

void func_260(bool bParam0)
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
	func_648(0f);
	Global_1935436->f_11 = 1;
	if (func_125())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_649();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_261(int iParam0)
{
	switch (func_116())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

int func_262(vector3 vParam0, float fParam3)
{
	int iVar0;

	if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) != 1)
	{
		func_650(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_556(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_651(0, 0);
		if (func_459(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_652(1, 0);
		}
	}
	else
	{
		func_652(1, 0);
	}
	func_102(0);
	func_653(0, vParam0, fParam3);
	return 1;
}

int func_263(var uParam0)
{
	int iVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_42))
	{
		if (func_8(&(uParam0->f_9), 32))
		{
			uParam0->f_42 = VOLUME::_0x10157BC3247FF3BA(uParam0->f_37, 0f, 0f, 0f, uParam0->f_41, uParam0->f_41, uParam0->f_41, "Activity Volume");
		}
		else if (func_8(&(uParam0->f_9), 64))
		{
			iVar0 = 0;
			uParam0->f_42 = COMPANION::_0x722FBE08EF5B87BD(uParam0->f_37, 2, iVar0);
		}
		else
		{
			func_654(*uParam0, &(uParam0->f_42), uParam0->f_37, uParam0->f_41);
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_42) && VOLUME::IS_POINT_IN_VOLUME(uParam0->f_42, Global_36))
	{
		return 1;
	}
	return 0;
}

int func_264(var uParam0)
{
	if (!VOLUME::IS_POINT_IN_VOLUME(uParam0->f_42, Global_36))
	{
		return 1;
	}
	return 0;
}

int func_265(var uParam0)
{
	return uParam0->f_9;
}

bool func_266(int iParam0)
{
	return iParam0 > -1;
}

int func_267(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

void func_268(int iParam0, bool bParam1)
{
	if (!func_266(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_655(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_72(iParam0, 1, 0);
		}
	}
	func_72(iParam0, 16, bParam1);
}

void func_269(int iParam0)
{
	func_59(iParam0, 36, 1);
}

void func_270(int iParam0, int iParam1, bool bPar