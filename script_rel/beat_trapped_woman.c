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
	struct<193> Local_15 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 9999;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	struct<32> Local_229[6];
	struct<6> Local_422 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	struct<12> Local_430[1];
	var uLocal_443[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_450[6] = { 0, 0, 0, 0, 0, 0 };
	struct<2> Local_457[1];
	var uLocal_460 = 1;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	vector3 vLocal_469 = { 0f, 0f, 0f };
	float fLocal_472 = 0f;
	vector3 vLocal_473 = { 0f, 0f, 0f };
	vector3 vLocal_476 = { 0f, 0f, 0f };
	vector3 vLocal_479 = { 0f, 0f, 0f };
	vector3 vLocal_482 = { 0f, 0f, 0f };
	int iLocal_485 = 0;
	int iLocal_486 = 0;
	int iLocal_487 = 0;
	var uLocal_488[2] = { 0, 0 };
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	int iLocal_495 = 0;
	int iLocal_496 = 0;
	vector3 vLocal_497 = { 0f, 0f, 0f };
	int iLocal_500 = 0;
	int iLocal_501 = 0;
	char* sLocal_502 = NULL;
	char* sLocal_503 = NULL;
	int iLocal_504 = 0;
	bool bLocal_505 = false;
	int iLocal_506 = 0;
	bool bLocal_507 = false;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	int iLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = -1;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 2;
	var uLocal_522 = 1;
	var uLocal_523 = 1;
	var uLocal_524 = 1;
	var uLocal_525 = 0;
	var uLocal_526 = 1;
	var uLocal_527 = 2;
	var uLocal_528 = 2;
	var uLocal_529 = 3;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 3;
	var uLocal_533 = 1;
	var uLocal_534 = 3;
	var uLocal_535 = 3;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	int iLocal_538 = 0;
	var uLocal_539 = -1;
	var uLocal_540 = 0;
	var uLocal_541 = -1;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = -1;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 1073741824;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 1;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	struct<17> Local_559[3];
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
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
	var uLocal_687 = 0;
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
	vector3 vLocal_732 = { 0f, 0f, 0f };
	float fLocal_735 = 0f;
	float fLocal_736 = 0f;
	float fLocal_737 = 0f;
	int iLocal_738 = 0;
	var uLocal_739 = 0;
	int iLocal_740 = 0;
	int iLocal_741 = 0;
	int iLocal_742 = 0;
	int iLocal_743 = 0;
	int iLocal_744 = 0;
	int iLocal_745 = 0;
	int iLocal_746 = 0;
	int iLocal_747 = 0;
	int iLocal_748 = 0;
	int iLocal_749 = 0;
	int iLocal_750 = 0;
	int iLocal_751 = 0;
	var uLocal_752 = 0;
	int iLocal_753 = 0;
	var uLocal_754 = 0;
	int iLocal_755 = 0;
	int iLocal_756 = 0;
	int iLocal_757 = 0;
	int iLocal_758 = 0;
	int iLocal_759 = 0;
	int iLocal_760 = 0;
	int iLocal_761 = 0;
	int iLocal_762 = 0;
	int iLocal_763 = 0;
	int iLocal_764 = 0;
	int iLocal_765 = 0;
	int iLocal_766 = 0;
	int iLocal_767 = 0;
	int iLocal_768 = 0;
	int iLocal_769 = 0;
	int iLocal_770 = 0;
	int iLocal_771 = 0;
	int iLocal_772 = 0;
	int iLocal_773 = 0;
	int iLocal_774 = 0;
	int iLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	int iLocal_778 = 0;
	int iLocal_779 = 0;
	int iLocal_780 = 0;
	int iLocal_781 = 0;
	int iLocal_782 = 0;
	int iLocal_783 = 0;
	int iLocal_784 = 0;
	int iLocal_785 = 0;
	int iLocal_786 = 0;
	int iLocal_787 = 0;
	int iLocal_788 = 0;
	int iLocal_789 = 0;
	int iLocal_790 = 0;
	int iLocal_791 = 0;
	int iLocal_792 = 0;
	int iLocal_793 = 0;
	int iLocal_794 = 0;
	int iLocal_795 = 0;
	int iLocal_796 = 0;
	int iLocal_797 = 0;
	int iLocal_798 = 0;
	int iLocal_799 = 0;
	int iLocal_800 = 0;
	int iLocal_801 = 0;
	int iLocal_802 = 0;
	int iLocal_803 = 0;
	int iLocal_804 = 0;
	int iLocal_805 = 0;
	int iLocal_806 = 0;
	int iLocal_807 = 0;
	int iLocal_808 = 0;
	int iLocal_809 = 0;
	int iLocal_810 = 0;
	int iLocal_811 = 0;
	int iLocal_812 = 0;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	int iLocal_815 = 0;
	int iLocal_816 = 0;
	int iLocal_817 = 0;
	int iLocal_818 = 0;
	int iLocal_819 = 0;
	int iLocal_820 = 0;
	int iLocal_821 = 0;
	int iLocal_822 = 0;
	int iLocal_823 = 0;
	int iLocal_824 = 0;
	int iLocal_825 = 0;
	int iLocal_826 = 0;
	int iLocal_827 = 0;
	int iLocal_828 = 0;
	int iLocal_829 = 0;
	int iLocal_830 = 0;
	int iLocal_831 = 0;
	bool bLocal_832 = false;
	int iLocal_833 = 0;
	int iLocal_834 = 0;
	int iLocal_835 = 0;
	int iLocal_836 = 0;
	int iLocal_837 = 0;
	int iLocal_838 = 0;
	int iLocal_839 = 0;
	int iLocal_840 = 0;
	bool bLocal_841 = false;
	bool bLocal_842 = false;
	char* sLocal_843 = NULL;
	char* sLocal_844 = NULL;
	char* sLocal_845 = NULL;
	char* sLocal_846 = NULL;
	char* sLocal_847 = NULL;
	vector3 vLocal_848 = { 0f, 0f, 0f };
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 1065353216;
	var uLocal_857 = 1119092736;
	var uLocal_858 = 1092616192;
	var uLocal_859 = 1085276160;
	int iLocal_860 = 0;
	struct<26> Local_861 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0 } ;
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
	int iLocal_898 = 0;
	int iLocal_899 = 0;
	int iLocal_900[3] = { 0, 0, 0 };
	int iLocal_904 = 0;
	int iLocal_905[6] = { 0, 0, 0, 0, 0, 0 };
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
	iLocal_751 = -1;
	iLocal_773 = 1;
	iLocal_802 = 1;
	iLocal_860 = func_1(2, 0, 0);
	Local_15.f_3 = func_2(&vScriptParam_0);
	Local_15.f_161 = func_3(vScriptParam_0.z, 2);
	Local_15.f_45 = 0;
	func_4(&Local_15, 1);
	func_5();
	func_6(65);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_841 = true;
	}
	while (true)
	{
		func_8(bLocal_841, 649/*func_7*/, 0);
		if (bLocal_841)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_773)
			{
				case 1:
					if (func_9(&Local_15, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_10(&Local_15, &uLocal_777, &uLocal_776);
						if (func_11())
						{
							func_7();
						}
						else
						{
							iLocal_773 = 0;
						}
					}
					else if (Local_15.f_160)
					{
						func_7();
					}
					break;
				case 0:
					if (func_12())
					{
						iLocal_773 = 3;
					}
					break;
				case 3:
					if (func_13())
					{
						if (iLocal_14 == 0)
						{
							if (func_14())
							{
								func_15(0);
								iLocal_773 = 4;
							}
						}
						else if (func_16())
						{
							func_15(11);
							iLocal_773 = 4;
						}
					}
					break;
				case 4:
					func_17();
					if (!func_18(&Local_15, &uLocal_443, iLocal_14, 0, 1, 0, 1, 0))
					{
						func_7();
					}
					if (func_19())
					{
						Local_15.f_50 = 1;
						func_7();
					}
					if (func_20(&Local_15, &uLocal_443, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, iLocal_830))
					{
						Local_15.f_50 = 1;
						func_7();
					}
					break;
			}
			BUILTIN::WAIT(Local_15.f_158);
		}
	}
}

int func_1(int iParam0, int iParam1, int iParam2)
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

var func_2(var uParam0)
{
	return *uParam0;
}

bool func_3(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_4(var uParam0, bool bParam1)
{
	func_21(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_22("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

void func_5()
{
}

void func_6(int iParam0)
{
	if (!func_23(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_46 = 1;
}

void func_7()
{
	int iVar0;
	int iVar1;

	func_24();
	if (iLocal_838 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
		iLocal_838 = 0;
	}
	MAP::DISPLAY_RADAR(true);
	func_25(Global_1935630, 4);
	func_26(&uLocal_508, 1);
	if (PED::IS_SCENARIO_BLOCKING_AREA_VALID(iLocal_486))
	{
		PATHFIND::RESET_ROADS_IN_VOLUME(iLocal_487, 0);
		PED::CLEAR_PED_NON_CREATION_AREA();
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_486, true);
	}
	if (func_27(&(uLocal_443[1]), 0, 0))
	{
		if (iLocal_786)
		{
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(&(uLocal_443[1])) == 1391706777)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(uLocal_443[1]), 841021282);
				iLocal_786 = 0;
			}
		}
		if (PED::IS_PED_ON_MOUNT(&(uLocal_443[1])))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::TASK_STAND_STILL(0, 1);
			func_28(&(uLocal_443[1]), &iVar0, 0, 0, 1, 1);
		}
	}
	func_29(&iLocal_611, 1);
	if (Local_15.f_45)
	{
		if (((iLocal_804 == 0 && iLocal_617 < 1) && iLocal_621 < 1) && iLocal_622 < 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_443[1])) && !Global_16)
			{
				if (iLocal_810 == 0)
				{
					func_30(2, 0, 0, "RE_HONOR_IGNORED_VICTIM", &(uLocal_443[1]), 0, 1065353216, 0);
				}
			}
		}
		else if (iLocal_14 == 0)
		{
			if (ENTITY::IS_ENTITY_DEAD(&(uLocal_443[1])))
			{
				if (iLocal_810 == 0)
				{
					func_30(4, 0, 0, "RE_HONOR_CRUEL_KILLING", &(uLocal_443[1]), 0, 1065353216, 0);
					iLocal_810 = 1;
				}
			}
		}
	}
	if (iLocal_837 == 1)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 87, false);
		iLocal_837 = 0;
	}
	if (iLocal_506 == 1)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 2, false);
		iLocal_506 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_443[iVar1])))
		{
			func_31(uLocal_443[iVar1]);
		}
		iVar1++;
	}
	func_32(&(uLocal_443[0]), 0, -1082130432, -1082130432, -1, -1, -1, -1082130432);
	if (!Local_15.f_45 || func_33(&(uLocal_443[1]), 1, 0) > 80f)
	{
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_443[iVar1])) && ENTITY::DOES_THREAD_OWN_THIS_ENTITY(&(uLocal_443[iVar1])))
			{
				if (!func_34(&(uLocal_443[iVar1]), 200f, 80f, -1082130432, -1082130432))
				{
					PED::DELETE_PED(uLocal_443[iVar1]);
				}
			}
			iVar1++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_443[0])) && ENTITY::DOES_THREAD_OWN_THIS_ENTITY(&(uLocal_443[0])))
		{
			PED::DELETE_PED(uLocal_443[0]);
		}
	}
	else
	{
		func_35();
	}
	if (iLocal_839 == 1)
	{
		PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
		PED::SET_PED_RESET_FLAG(Global_35, 179, false);
		iLocal_839 = 0;
	}
	func_36(&Local_15, &uLocal_443, &iLocal_450, iLocal_14, uLocal_777, Local_15.f_51.f_4, 0, 1, 0, 1);
	func_37(&Local_430);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_738);
	func_38(65);
	if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_443[0])))
	{
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(&(uLocal_443[0]), true);
		PED::SET_PED_CAN_RAGDOLL(&(uLocal_443[0]), true);
	}
	if (iLocal_833 == 1)
	{
		func_39(&iLocal_780);
		func_39(&iLocal_781);
		func_40(7);
		func_40(1);
		iLocal_833 = 0;
	}
	func_41(1);
	func_42(&iLocal_538, &Local_559);
	if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_443[1])))
	{
		func_43(&(uLocal_443[1]), 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_443[2])))
	{
		func_43(&(uLocal_443[2]), 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_443[3])))
	{
		func_43(&(uLocal_443[3]), 1, 1);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_779))
	{
		MAP::REMOVE_BLIP(&iLocal_779);
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, &(Local_457[0 /*2*/]), (Local_457[0 /*2*/])->f_1, 1))
	{
		TASK::STOP_ANIM_TASK(Global_35, &(Local_457[0 /*2*/]), (Local_457[0 /*2*/])->f_1, -1.5f);
		TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
	}
	if (iLocal_14 == 1)
	{
		PLAYER::RESET_PLAYER_ARREST_STATE(PLAYER::PLAYER_ID());
		PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), 0, 0, 0);
	}
	func_44(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_8(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_45(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Call_Loc(iParam1);
		}
	}
}

int func_9(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
{
	float fVar0;

	if (iParam6 || func_46(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, bParam3, bParam4))
	{
		if (iParam6 || func_47(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_48(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_49(uParam0, -1, 0, bParam7);
			}
			_NAMESPACE49::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_50(uParam0->f_51);
			}
			return 1;
		}
	}
	return 0;
}

void func_10(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 6;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 6;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 6;
			*uParam2 = 2;
			break;
		case 3:
			*uParam1 = 6;
			*uParam2 = 3;
			break;
		case 4:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 5:
			*uParam1 = 9;
			*uParam2 = 1;
			break;
		case 6:
			*uParam1 = 9;
			*uParam2 = 2;
			break;
		case 7:
			*uParam1 = 11;
			*uParam2 = 0;
			break;
		case 8:
			*uParam1 = 11;
			*uParam2 = 1;
			break;
		case 9:
			*uParam1 = 11;
			*uParam2 = 2;
			break;
	}
}

int func_11()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iLocal_14 != 0)
	{
		return 0;
	}
	iVar1 = func_51(Local_15.f_51);
	switch (iVar1)
	{
		case 6:
		case 7:
			if (Local_15.f_51.f_4 == 3)
			{
				iVar0 = 2097152;
			}
			else
			{
				iVar0 = 2;
			}
			break;
		case 9:
			iVar0 = 2097152;
			break;
		case 11:
			iVar0 = 8192;
			break;
		default:
			return 1;
	}
	iVar2 = func_52(iVar0);
	if (func_53(iVar2) || func_54(iVar2))
	{
		return 1;
	}
	return 0;
}

int func_12()
{
	switch (iLocal_774)
	{
		case 0:
			if (func_55(&Local_15))
			{
				func_56();
				func_57();
				func_58();
				func_59();
				func_60();
				func_61();
				func_62();
				func_63();
				func_64();
				func_63();
				iLocal_774 = 1;
			}
			break;
		case 1:
			if (!func_65(&Local_229))
			{
				return 0;
			}
			if (!func_66(&Local_430))
			{
				return 0;
			}
			if (iLocal_14 == 1)
			{
				if (!func_67(&uLocal_460))
				{
					return 0;
				}
			}
			return 1;
	}
	return 0;
}

int func_13()
{
	switch (iLocal_775)
	{
		case 0:
			if (func_68(Local_15.f_51, Local_15.f_51.f_3, &Local_229, &uLocal_443, 1, 0, -1, 1))
			{
				iLocal_775 = 1;
			}
			break;
		case 1:
			func_69(Local_15.f_51, &Local_430, Local_15.f_51.f_3, 0, 0, -1, 0);
			func_70();
			func_41(0);
			func_71();
			func_72();
			iLocal_775 = 6;
			break;
		case 6:
			if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_443[1])))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((Local_229[1 /*32*/])->f_1);
			}
			else
			{
				func_7();
				return 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_443[0])))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((Local_229[0 /*32*/])->f_1);
			}
			return 1;
	}
	return 0;
}

int func_14()
{
	if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_INT"))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_INT", true);
	}
	if (ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_422, 1, 0) && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_422, 0))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_422);
		return 1;
	}
	return 0;
}

void func_15(int iParam0)
{
	iLocal_614 = iParam0;
}

int func_16()
{
	if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_INT"))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_INT", true);
	}
	if (ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_422, 1, 0) && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_422, 0))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_422);
		return 1;
	}
	return 0;
}

void func_17()
{
	func_73();
	func_74();
	if (iLocal_14 == 0)
	{
		if (iLocal_614 != 4)
		{
			func_75();
		}
	}
	else if (iLocal_614 != 16)
	{
		func_76();
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_422))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_422, 0))
		{
			fLocal_736 = ANIMSCENE::GET_ANIM_SCENE_PHASE(Local_422);
		}
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_422.f_1))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_422.f_1, 0))
		{
			fLocal_737 = ANIMSCENE::GET_ANIM_SCENE_PHASE(Local_422.f_1);
		}
	}
	if (iLocal_829 == 0)
	{
		if (PED::IS_PED_READY_TO_RENDER(&(uLocal_443[0])))
		{
			func_78(&(uLocal_443[0]), func_77(9), 1);
			iLocal_829 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_443[2])))
	{
		AUDIO::STOP_PED_SPEAKING(&(uLocal_443[2]), true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_443[3])))
	{
		AUDIO::STOP_PED_SPEAKING(&(uLocal_443[3]), true);
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iLocal_782 = PED::GET_MOUNT(Global_35);
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_443[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_782))
	{
		if (func_79(iLocal_782, vLocal_469, 1) <= 4f)
		{
			if (!PED::IS_PED_ON_MOUNT(Global_35) && iLocal_782 != 0)
			{
				if (!func_80(iLocal_782, 518218985))
				{
					TASK::_TASK_FLEE_FROM_PED(iLocal_782, &(uLocal_443[1]), 0f, 0f, 0f, 5f, 5000, 256, 1f, 0);
				}
			}
		}
	}
}

int func_18(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_81(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_82(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_83(&(uParam0->f_5));
			}
			func_84(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_85(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_86(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_87(&(uParam0->f_121));
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
					func_88(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_89(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_48(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam1[0]) && !PED::IS_PED_INJURED(uParam1[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID_2(VOLUME::_0xF6F5447D418DAA82(uParam1[0])))
			{
				func_90(uParam0, uParam1[0]);
			}
		}
		if (bParam6)
		{
			if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
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

int func_19()
{
	switch (iLocal_14)
	{
		case 0:
			switch (iLocal_614)
			{
				case 0:
					func_91();
					break;
				case 1:
					func_92();
					break;
				case 2:
					func_93();
					break;
				case 3:
					func_94();
					break;
				case 5:
					func_95();
					break;
				case 6:
					func_96();
					break;
				case 7:
					func_97();
					break;
				case 8:
					func_98();
					break;
				case 4:
					func_99();
					break;
				case 10:
					Local_15.f_44 = 1;
					PED::SET_PED_KEEP_TASK(&(uLocal_443[1]), true);
					PED::SET_PED_KEEP_TASK(&(uLocal_443[0]), true);
					return 1;
				case 9:
					PED::SET_PED_KEEP_TASK(&(uLocal_443[1]), true);
					PED::SET_PED_KEEP_TASK(&(uLocal_443[0]), true);
					return 1;
			}
			break;
		case 1:
			if (iLocal_614 >= 14)
			{
				func_100(&Local_861);
			}
			switch (iLocal_614)
			{
				case 11:
					func_101();
					break;
				case 12:
					func_102();
					break;
				case 13:
					func_103();
					break;
				case 14:
					func_104();
					break;
				case 15:
					func_105();
					break;
				case 16:
					func_106();
					break;
				case 18:
					Local_15.f_44 = 1;
					PED::SET_PED_KEEP_TASK(&(uLocal_443[1]), true);
					PED::SET_PED_KEEP_TASK(&(uLocal_443[0]), true);
					PED::SET_PED_KEEP_TASK(&(uLocal_443[2]), true);
					PED::SET_PED_KEEP_TASK(&(uLocal_443[3]), true);
					PED::SET_PED_KEEP_TASK(&(uLocal_443[4]), true);
					PED::SET_PED_KEEP_TASK(&(uLocal_443[5]), true);
					return 1;
				case 17:
					PED::SET_PED_KEEP_TASK(&(uLocal_443[1]), true);
					PED::SET_PED_KEEP_TASK(&(uLocal_443[0]), true);
					PED::SET_PED_KEEP_TASK(&(uLocal_443[2]), true);
					PED::SET_PED_KEEP_TASK(&(uLocal_443[3]), true);
					PED::SET_PED_KEEP_TASK(&(uLocal_443[4]), true);
					PED::SET_PED_KEEP_TASK(&(uLocal_443[5]), true);
					return 1;
			}
			break;
	}
	return 0;
}

int func_20(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_107())
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
			else if (func_108(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_48(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_48(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_48(uParam0->f_3, 2) || iParam12 == 1)
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
				if (func_109(Global_36, uParam0->f_51) > fVar0)
				{
					return 1;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_109(Global_36, vVar1) > fVar0)
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

void func_21(var uParam0)
{
	func_110(uParam0, 0);
	func_111(uParam0, 0);
	func_112(uParam0, 1);
	func_113(uParam0, 1);
	func_114(uParam0, 0);
	func_115(uParam0, 1);
	func_116(uParam0, 1, 1, 1);
}

var func_22(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_117(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_118(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_117(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_23(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_24()
{
	if (iLocal_613)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_612))
		{
			PED::_0x2EB75FB86C41F026(iLocal_612, 3, 1);
			iLocal_613 = 0;
		}
	}
}

void func_25(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_26(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!*uParam0)
		{
			func_119(0);
			*uParam0 = 1;
		}
	}
	else if (*uParam0)
	{
		func_119(1);
		*uParam0 = 0;
	}
}

bool func_27(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_120(iParam0, iParam1);
}

void func_28(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_29(int iParam0, int iParam1)
{
	if (func_121(iParam0))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(iParam0, iParam1);
	}
}

void func_30(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_122() != -1)
	{
		return;
	}
	if ((Global_36615 && func_123(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_124(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_125(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
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
			func_126(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_125(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_31(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

void func_32(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	var uVar0;

	uVar0 = func_79(iParam0, Global_36, 1);
	switch (iParam1)
	{
		case 1:
			fParam2 = 100f;
			fParam3 = 200f;
			iParam4 = 3000;
			iParam5 = 1000;
			iParam6 = 4000;
			break;
		case 2:
			fParam2 = 60f;
			fParam3 = 120f;
			iParam4 = 1000;
			iParam5 = 1;
			iParam6 = 1000;
			break;
		case 0:
			fParam2 = 75f;
			fParam3 = 140f;
			iParam4 = 1000;
			iParam5 = 1;
			iParam6 = 1500;
			break;
		case 3:
			if (fParam2 < 0f)
			{
			}
			if (fParam3 < 0f)
			{
			}
			if (iParam4 < 0)
			{
			}
			if (iParam5 < 0)
			{
			}
			break;
	}
	if (fParam2 >= fParam3)
	{
	}
	PED::_0x39A2FC5AF55A52B1(iParam0, iParam6);
	if (fParam7 > 0f)
	{
		PED::_0x7C08E7CB8D951B70(iParam0, fParam7);
	}
	PED::_0x36E4B61DC56DE77C(iParam0, fParam2, fParam3, iParam4, iParam5);
}

float func_33(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_127(Global_35, iParam0, bParam1, iParam2);
}

int func_34(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_79(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return 1;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_IS_PED_VISIBILITY_TRACKED(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(iParam0, fParam4))
				{
					return 1;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
			{
				return 1;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_35()
{
	if (func_27(&(uLocal_443[1]), 0, 1))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
		if (PED::IS_PED_IN_ANY_VEHICLE(&(uLocal_443[1]), false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
		}
		if (PED::IS_PED_ON_MOUNT(&(uLocal_443[1])))
		{
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
		}
		TASK::_TASK_FLEE_FROM_PED(0, Global_35, 0f, 0f, 0f, 999f, -1, 64, 2f, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
		TASK::TASK_PERFORM_SEQUENCE(&(uLocal_443[1]), iLocal_783);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
		func_128(1);
	}
}

void func_36(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;

	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_129(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_130(uParam0->f_3, 524288);
		}
	}
	if (func_27(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (iParam8 && DECORATOR::DECOR_EXIST_ON(uParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_27(uParam1[iVar0], 0, 0))
			{
				func_131(uParam1[iVar0], bVar3);
				if (func_132(uParam0, (*uParam1)[iVar0]))
				{
					func_31((*uParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_27(uParam1[iVar0], 0, 1))
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
							func_134(uParam1[iVar0], 1073741824, func_133(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
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
		func_135(uParam0);
	}
	func_136(uParam0);
	if (!uParam0->f_186)
	{
		func_81(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_137(uParam0->f_3, uParam0->f_185);
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
		func_138(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_37(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(((*uParam0)[iVar0 /*12*/])->f_8))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(((*uParam0)[iVar0 /*12*/])->f_8));
		}
		iVar0++;
	}
}

void func_38(int iParam0)
{
	if (!func_23(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_46 = 0;
}

void func_39(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_40(int iParam0)
{
	iParam0 = func_139(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_140(iParam0, 32);
	func_141();
}

void func_41(bool bParam0)
{
	if (bParam0)
	{
		func_142(Local_15.f_51, 20f, 5);
	}
	else
	{
		func_143(Local_15.f_51, 20f, 0, 0, 6);
	}
}

void func_42(int* iParam0, var uParam1)
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
	func_144(iParam0, uParam1, 1);
	func_145(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_43(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

void func_44(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_504 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_443[1])))
			{
				PED::_0x89F5E7ADECCCB49C(&(uLocal_443[1]), "INJURED_RIGHT_LEG");
				iLocal_504 = 1;
			}
		}
	}
	else if (iLocal_504)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_443[1])))
		{
			PED::_0x58F7DB5BD8FA2288(&(uLocal_443[1]));
			iLocal_504 = 0;
		}
	}
}

int func_45(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return 1;
	}
	if (func_146(iVar0))
	{
		return 0;
	}
	if (func_147(iVar0, 1) || func_147(iVar0, 2))
	{
		return 1;
	}
	return 0;
}

int func_46(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;

	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_148(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_149(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_85(iParam0, 128))
			{
				if (!func_150(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_151(iParam0, &fVar1, &fVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_152(&bVar4, iParam0, fVar2, fVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_153(*uParam1))
				{
					return func_154(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_155(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_3(Param4.f_2, 8))
				{
					func_149(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_156(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_157(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_158(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
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
			if (func_85(iParam0, 128))
			{
				if (!func_159(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_154(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_151(iParam0, &fVar1, &fVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!func_156(uParam1))
					{
						return func_154(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
			if (func_160(iParam0, Param4.f_1, uParam1, Param4, bParam14))
			{
				func_149(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_154(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
		func_22("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
			func_22("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

int func_47(var uParam0, int iParam1)
{
	if (func_48(iParam1, 256))
	{
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_172) || func_162(iParam1, func_161(uParam0), &(uParam0->f_172)))
		{
			if (func_27(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return 1;
}

bool func_48(int iParam0, int iParam1)
{
	if (!func_23(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

void func_49(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_163(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_48(uParam0->f_3, 1) && !func_48(uParam0->f_3, 32))
	{
		func_163(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_48(uParam0->f_3, 2) && !func_48(uParam0->f_3, 32))
	{
		func_163(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_164(uParam0->f_171, 1);
	}
	if (func_48(uParam0->f_3, 1))
	{
		func_163(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, VOLUME::_0x3E2A25B2416DD67E(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_165(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_50(vector3 vParam0)
{
	vector3 vVar0;

	vVar0 = { Global_36 - vParam0 };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

int func_51(vector3 vParam0)
{
	return func_166(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 40;
		case 2:
			return 78;
		case 4:
			return 37;
		case 8:
			return 38;
		case 16:
			return 93;
		case 32:
			return 82;
		case 64:
			return 95;
		case 128:
			return 65;
		case 256:
			return 68;
		case 512:
			return 69;
		case 1024:
			return 3;
		case 2048:
			return 61;
		case 4096:
			return 110;
		case 8192:
			return 5;
		case 16384:
			return 35;
		case 32768:
			return 22;
		case 65536:
			return 105;
		case 131072:
			return 8;
		case 262144:
			return 32;
		case 524288:
			return 26;
		case 1048576:
			return 115;
		case 2097152:
			return 76;
		case 4194304:
			return 92;
		case 8388608:
			return 56;
		case 16777216:
			return 120;
		case 0:
		default:
			break;
	}
	return -1;
}

int func_53(int iParam0)
{
	if (!func_167(iParam0))
	{
		return 0;
	}
	return func_168(iParam0, 67108864);
}

int func_54(int iParam0)
{
	if (!func_167(iParam0))
	{
		return 0;
	}
	return func_168(iParam0, 33554432);
}

int func_55(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_169(uParam0->f_3);
	iVar1 = func_170(1);
	if (iVar1 > 0)
	{
		iVar0 = (iVar0 + iVar1);
	}
	PED::_RESERVE_AMBIENT_PEDS(iVar0);
	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() >= iVar0)
	{
		return 1;
	}
	return 0;
}

void func_56()
{
	iLocal_14 = func_171(Local_15.f_3, 2, 0);
	switch (iLocal_14)
	{
		case 0:
			break;
		case 1:
			break;
	}
}

void func_57()
{
	if (iLocal_14 == 1)
	{
		Local_457[0 /*2*/] = "MECH_BUSTED@ARREST";
		(Local_457[0 /*2*/])->f_1 = "hands_up_transition";
		func_172(&(Local_457[0 /*2*/]), &uLocal_460);
	}
}

void func_58()
{
	bool bVar0;
	int iVar1;

	bVar0 = func_173(20, 5);
	if (!bVar0)
	{
		func_174(&((Local_430[0 /*12*/])->f_11), 16);
	}
	(Local_430[0 /*12*/])->f_7 = joaat("p_lantern05x");
	(Local_430[0 /*12*/])->f_10 = 1;
	(Local_430[0 /*12*/])->f_4 = { 0f, 0f, 0f };
	switch (Local_15.f_51.f_4)
	{
		case 0:
			*(Local_430[0 /*12*/]) = { 1602.873f, 1619.675f, 146.9995f };
			break;
		case 1:
			*(Local_430[0 /*12*/]) = { 1422.484f, 1099.328f, 185.5029f };
			break;
		case 2:
			*(Local_430[0 /*12*/]) = { 2040.918f, 1719.684f, 154.6122f };
			break;
		case 3:
			*(Local_430[0 /*12*/]) = { 649.54f, 1901.99f, 213.34f };
			break;
		case 4:
			*(Local_430[0 /*12*/]) = { 948.2737f, 386.9772f, 110.5665f };
			break;
		case 5:
			*(Local_430[0 /*12*/]) = { 1353.89f, 467.55f, 87.5f };
			break;
		case 6:
			*(Local_430[0 /*12*/]) = { -468.9537f, -169.3734f, 43.0089f };
			break;
		case 7:
			*(Local_430[0 /*12*/]) = { 1335.754f, -1625.608f, 65.62613f };
			break;
		case 8:
			*(Local_430[0 /*12*/]) = { 1521.31f, -2080.63f, 42.71f };
			break;
		case 9:
			*(Local_430[0 /*12*/]) = { 1166.897f, -2133.632f, 55.90456f };
			break;
	}
	iVar1 = 298;
	func_175(&iLocal_611, *(Local_430[0 /*12*/]), 1f, 2, iVar1, 0);
	func_176(&Local_430);
}

void func_59()
{
	switch (iLocal_14)
	{
		case 0:
			switch (Local_15.f_51.f_4)
			{
				case 0:
					vLocal_469 = { 1604.07f, 1616.55f, 147.29f };
					fLocal_472 = 140.81f;
					break;
				case 1:
					vLocal_469 = { 1424.09f, 1102.421f, 185.6158f };
					fLocal_472 = -75.88f;
					break;
				case 2:
					vLocal_469 = { 2042.723f, 1721.919f, 154.4438f };
					fLocal_472 = 0f;
					break;
				case 3:
					vLocal_469 = { 648.3405f, 1898.194f, 212.7968f };
					fLocal_472 = 90f;
					break;
				case 4:
					vLocal_469 = { 946.5699f, 388.4111f, 110.6878f };
					fLocal_472 = 9f;
					break;
				case 5:
					vLocal_469 = { 1357.1f, 466.92f, 87.62f };
					fLocal_472 = -166.34f;
					break;
				case 6:
					vLocal_469 = { -471.4132f, -171.1197f, 42.99802f };
					fLocal_472 = -145.18f;
					break;
				case 7:
					vLocal_469 = { 1335.407f, -1622.697f, 65.6165f };
					fLocal_472 = -51.57f;
					break;
				case 8:
					vLocal_469 = { 1519.02f, -2082.39f, 42.68f };
					fLocal_472 = 101.41f;
					break;
				case 9:
					vLocal_469 = { 1169.49f, -2127.449f, 56.3056f };
					fLocal_472 = 180f;
					break;
			}
			break;
		case 1:
			switch (Local_15.f_51.f_4)
			{
				case 0:
					vLocal_469 = { 1602.984f, 1616.687f, 147.0576f };
					fLocal_472 = -151.81f;
					break;
				case 1:
					vLocal_469 = { 1424.09f, 1102.421f, 185.6158f };
					fLocal_472 = -75.88f;
					break;
				case 2:
					vLocal_469 = { 2042.723f, 1721.919f, 154.4438f };
					fLocal_472 = 0f;
					break;
				case 3:
					vLocal_469 = { 648.3405f, 1898.194f, 212.7968f };
					fLocal_472 = 92.98f;
					break;
				case 4:
					vLocal_469 = { 946.5699f, 388.4111f, 110.6878f };
					fLocal_472 = 9f;
					break;
				case 5:
					vLocal_469 = { 1357.1f, 466.92f, 87.52f };
					fLocal_472 = -166.34f;
					break;
				case 6:
					vLocal_469 = { -471.4132f, -171.1197f, 42.99802f };
					fLocal_472 = -145.18f;
					break;
				case 7:
					vLocal_469 = { 1335.407f, -1622.697f, 65.6165f };
					fLocal_472 = -51.57f;
					break;
				case 8:
					vLocal_469 = { 1519.02f, -2082.39f, 42.63f };
					fLocal_472 = 101.41f;
					break;
				case 9:
					vLocal_469 = { 1168.803f, -2132.834f, 56.07936f };
					fLocal_472 = 0f;
					break;
			}
			break;
	}
}

void func_60()
{
	if (iLocal_14 == 0)
	{
		switch (func_177())
		{
			case 6:
			case 7:
				if (Local_15.f_51.f_4 == 3)
				{
					vLocal_473 = { -306.7529f, 791.3841f, 116.9215f };
					vLocal_476 = { -312.9f, 779.62f, 118.19f };
				}
				else
				{
					vLocal_473 = { 2941.94f, 1351.1f, 43.01f };
					vLocal_476 = { 2949.25f, 1347.58f, 44.31f };
				}
				break;
			case 9:
				vLocal_473 = { -306.7529f, 791.3841f, 116.9215f };
				vLocal_476 = { -312.9f, 779.62f, 118.19f };
				break;
			case 11:
				vLocal_473 = { 2807.66f, -1111.92f, 45.61f };
				vLocal_476 = { 2819.86f, -1113.45f, 45.9f };
				break;
		}
		(Local_229[1 /*32*/])->f_6 = { vLocal_469 };
		(Local_229[1 /*32*/])->f_9 = fLocal_472;
		(Local_229[0 /*32*/])->f_6 = { vLocal_469 };
		(Local_229[0 /*32*/])->f_9 = fLocal_472;
		vLocal_479 = { vLocal_469 };
		vLocal_482 = { 0f, 0f, 0f };
	}
	else
	{
		(Local_229[1 /*32*/])->f_6 = { vLocal_469 };
		(Local_229[1 /*32*/])->f_9 = fLocal_472;
		(Local_229[0 /*32*/])->f_6 = { vLocal_469 };
		(Local_229[0 /*32*/])->f_9 = fLocal_472;
		(Local_229[2 /*32*/])->f_6 = { vLocal_469 + Vector(-10f, 5f, 0f) };
		(Local_229[2 /*32*/])->f_9 = fLocal_472;
		(Local_229[3 /*32*/])->f_6 = { vLocal_469 + Vector(-10f, 0f, 0f) };
		(Local_229[3 /*32*/])->f_9 = fLocal_472;
		(Local_229[4 /*32*/])->f_6 = { vLocal_469 + Vector(-10f, 5f, 0f) };
		(Local_229[4 /*32*/])->f_9 = fLocal_472;
		(Local_229[5 /*32*/])->f_6 = { vLocal_469 + Vector(-10f, 0f, 0f) };
		(Local_229[5 /*32*/])->f_9 = fLocal_472;
	}
}

void func_61()
{
	if (iLocal_14 == 0)
	{
		Local_422.f_4 = "script@beat@wilderness@berryGang@trapped_woman";
		Local_422.f_5 = "script@beat@wilderness@inbredkidnap@goodbye";
	}
	else
	{
		Local_422.f_4 = "script@beat@wilderness@berrygang@trapped_woman_trap";
	}
}

void func_62()
{
	if (iLocal_14 == 0)
	{
		switch (func_177())
		{
			case 6:
			case 7:
				(Local_229[1 /*32*/])->f_1 = -1449944654;
				(Local_229[1 /*32*/])->f_3 = -2024423022;
				StringCopy(&((Local_229[1 /*32*/])->f_23), "CONCERNED_AUNT", 64);
				break;
			case 9:
				(Local_229[1 /*32*/])->f_1 = -1449944654;
				(Local_229[1 /*32*/])->f_3 = -2024423022;
				StringCopy(&((Local_229[1 /*32*/])->f_23), "CONCERNED_AUNT", 64);
				break;
			case 11:
				(Local_229[1 /*32*/])->f_1 = -1449944654;
				(Local_229[1 /*32*/])->f_3 = -1726716657;
				StringCopy(&((Local_229[1 /*32*/])->f_23), "PC_TOWNSPERSON", 64);
				break;
		}
		(Local_229[0 /*32*/])->f_1 = -1038436471;
	}
	else
	{
		(Local_229[1 /*32*/])->f_1 = -1449944654;
		(Local_229[1 /*32*/])->f_3 = 1799817589;
		StringCopy(&((Local_229[1 /*32*/])->f_23), "0867_A_F_M_Civ_Poor_White_AVOID_05", 64);
		(Local_229[4 /*32*/])->f_1 = func_178(997958153, 1);
		(Local_229[5 /*32*/])->f_1 = func_178(997958153, 1);
		(Local_229[2 /*32*/])->f_1 = joaat("g_m_m_unicriminals_01");
		(Local_229[2 /*32*/])->f_3 = 1913827357;
		StringCopy(&((Local_229[2 /*32*/])->f_23), "1063_G_M_M_UniCriminals_01_WHITE_10", 64);
		(Local_229[3 /*32*/])->f_1 = joaat("g_m_m_unicriminals_01");
		(Local_229[3 /*32*/])->f_3 = 1640861587;
		StringCopy(&((Local_229[3 /*32*/])->f_23), "1064_G_M_M_UniCriminals_01_BLACK_03", 64);
	}
	func_179(&Local_229);
}

void func_63()
{
	if (iLocal_14 == 0)
	{
		switch (func_177())
		{
			case 6:
			case 7:
				if (Local_15.f_51.f_4 == 3)
				{
					sLocal_502 = "RETW_TAKE_HOME_B";
					iLocal_512 = 9;
				}
				else
				{
					sLocal_502 = "RETW_TAKE_HOME_A";
					iLocal_512 = 6;
				}
				break;
			case 9:
				sLocal_502 = "RETW_TAKE_HOME_B";
				iLocal_512 = 9;
				break;
			case 11:
				sLocal_502 = "RETW_TAKE_HOME_C";
				iLocal_512 = 11;
				break;
		}
		sLocal_503 = "RETW_RETURN_TO_WOMAN";
	}
}

void func_64()
{
	if (iLocal_14 == 0)
	{
		func_181(Local_559[1 /*17*/], "INTERACT_GREET", func_180(67), -163964935, 0, 0, 0, 1, 0);
		func_181(Local_559[2 /*17*/], "RE_INTER_ANTAGONIZE", func_180(68), 648122183, 0, 0, 0, 1, 0);
		func_181(Local_559[0 /*17*/], "BERRY_CON_HELP", func_180(150), -1616532217, 0, 0, 0, 1, 0);
		func_182(Local_559[0 /*17*/], 1);
		func_183(Local_559[0 /*17*/], 1, 0);
		func_184(Local_559[0 /*17*/], 6f);
	}
	else
	{
		func_181(Local_559[1 /*17*/], "INTERACT_GREET", func_180(67), -163964935, 0, 0, 0, 1, 0);
		func_181(Local_559[2 /*17*/], "RE_INTER_ANTAGONIZE", func_180(68), 648122183, 0, 0, 0, 1, 0);
		func_181(Local_559[0 /*17*/], "BERRY_CON_HELP", func_180(150), -1616532217, 0, 0, 0, 1, 0);
		func_184(Local_559[0 /*17*/], 7f);
		func_183(Local_559[0 /*17*/], 1, 0);
	}
}

bool func_65(var uParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_185((*uParam0)[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

int func_66(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*12*/])->f_7 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(((*uParam0)[iVar0 /*12*/])->f_7))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_67(var uParam0)
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

int func_68(vector3 vParam0, float fParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;

	if (*uParam4 != *uParam5)
	{
		return 0;
	}
	if (iParam7 < 0 || iParam7 >= *uParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *uParam4)
	{
		iParam8 = (*uParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (func_186() || !func_187((*uParam4)[iVar0 /*32*/], (*uParam5)[iVar0], vParam0, fParam3, iParam6, bParam9))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_69(vector3 vParam0, var uParam3, float fParam4, bool bParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	vector3 vVar9;

	iVar4 = 1;
	if (iParam7 < 0 || iParam7 >= *uParam3)
	{
		iParam7 = (*uParam3 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (iParam8 && ENTITY::DOES_ENTITY_EXIST(((*uParam3)[iVar0 /*12*/])->f_8))
		{
		}
		else if (((*uParam3)[iVar0 /*12*/])->f_7 != 0 && !func_188(((*uParam3)[iVar0 /*12*/])->f_11, 16))
		{
			if (!STREAMING::HAS_MODEL_LOADED(((*uParam3)[iVar0 /*12*/])->f_7))
			{
				iVar4 = 0;
			}
			else
			{
				if (((*uParam3)[iVar0 /*12*/])->f_9 != -1)
				{
					iVar8 = ((*uParam3)[iVar0 /*12*/])->f_9;
					vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(((*uParam3)[iVar8 /*12*/])->f_8, *((*uParam3)[iVar0 /*12*/])) };
					if (func_188(((*uParam3)[iVar0 /*12*/])->f_11, 64))
					{
						((*uParam3)[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET(((*uParam3)[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						((*uParam3)[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT(((*uParam3)[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY(((*uParam3)[iVar0 /*12*/])->f_8, ((*uParam3)[iVar8 /*12*/])->f_8, 0, *((*uParam3)[iVar0 /*12*/]), ((*uParam3)[iVar0 /*12*/])->f_4, 0, 0, 0, 0, 2, 1, 0, 0);
				}
				else
				{
					if (!func_188(((*uParam3)[iVar0 /*12*/])->f_11, 8))
					{
						vVar5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam4, *((*uParam3)[iVar0 /*12*/])) };
					}
					else
					{
						vVar5 = { *((*uParam3)[iVar0 /*12*/]) };
					}
					if (!func_188(((*uParam3)[iVar0 /*12*/])->f_11, 128))
					{
						func_189(&vVar5, ((*uParam3)[iVar0 /*12*/])->f_10);
					}
					if (func_188(((*uParam3)[iVar0 /*12*/])->f_11, 64))
					{
						((*uParam3)[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET(((*uParam3)[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						((*uParam3)[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT(((*uParam3)[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					if (func_153(((*uParam3)[iVar0 /*12*/])->f_4))
					{
						vVar1 = { 0f, 0f, ((*uParam3)[iVar0 /*12*/])->f_3 };
					}
					else
					{
						vVar1 = { ((*uParam3)[iVar0 /*12*/])->f_4 };
					}
					if (func_188(((*uParam3)[iVar0 /*12*/])->f_11, 4))
					{
						vVar1.f_2 = func_190((vVar1.z + fParam4));
					}
					ENTITY::SET_ENTITY_ROTATION(((*uParam3)[iVar0 /*12*/])->f_8, vVar1, 2, true);
					if (!func_188(((*uParam3)[iVar0 /*12*/])->f_11, 128))
					{
						if (((*uParam3)[iVar0 /*12*/])->f_10)
						{
							ENTITY::_0x9587913B9E772D29(((*uParam3)[iVar0 /*12*/])->f_8, 0);
						}
					}
				}
				if (func_188(((*uParam3)[iVar0 /*12*/])->f_11, 2))
				{
					ENTITY::FREEZE_ENTITY_POSITION(((*uParam3)[iVar0 /*12*/])->f_8, true);
				}
				if (func_188(((*uParam3)[iVar0 /*12*/])->f_11, 32))
				{
					ENTITY::SET_ENTITY_VISIBLE(((*uParam3)[iVar0 /*12*/])->f_8, false);
				}
				if (bParam5)
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(((*uParam3)[iVar0 /*12*/])->f_8, 1);
					PHYSICS::ACTIVATE_PHYSICS(((*uParam3)[iVar0 /*12*/])->f_8);
				}
				ENTITY::_0xA91E6CF94404E8C9(((*uParam3)[iVar0 /*12*/])->f_8);
				vVar9 = { ENTITY::GET_ENTITY_COORDS(((*uParam3)[iVar0 /*12*/])->f_8, true, false) };
			}
		}
		iVar0++;
	}
	return iVar4;
}

void func_70()
{
	PED::SET_PED_CONFIG_FLAG(&(uLocal_443[0]), 186, false);
	PED::SET_PED_LASSO_HOGTIE_FLAG(&(uLocal_443[0]), 0, 0);
	PED::SET_PED_LASSO_HOGTIE_FLAG(&(uLocal_443[0]), 1, 0);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(&(uLocal_443[0]), false);
	PED::SET_PED_CAN_RAGDOLL(&(uLocal_443[0]), false);
	func_191(&(uLocal_443[0]), 0);
	PED::_0x6569F31A01B4C097(&(uLocal_443[0]), 1, 0);
	PED::_0x6569F31A01B4C097(&(uLocal_443[0]), 0, 0);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_443[0]), 324, true);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_443[0]), 257, true);
	func_192(&(uLocal_443[0]), uLocal_488[1], 1, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(&(uLocal_443[1]), false);
	func_193(&((Local_229[1 /*32*/])->f_22));
	PED::SET_PED_CONFIG_FLAG(&(uLocal_443[1]), 146, true);
	func_194(&(uLocal_443[1]), 1142025875);
	if (iLocal_14 == 0)
	{
		func_192(&(uLocal_443[1]), uLocal_488[0], 1, 1);
	}
	ENTITY::_0x203BEFFDBE12E96A(&(uLocal_443[1]), (Local_229[1 /*32*/])->f_6, (Local_229[1 /*32*/])->f_9, 1, 0, 1);
	ENTITY::_0x203BEFFDBE12E96A(&(uLocal_443[0]), (Local_229[0 /*32*/])->f_6, (Local_229[0 /*32*/])->f_9, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST((Local_430[0 /*12*/])->f_8))
	{
		OBJECT::_0x7FCD49388BC9B775((Local_430[0 /*12*/])->f_8, 0);
		(Local_430[0 /*12*/])->f_2 = ((Local_430[0 /*12*/])->f_2 + 0.09f);
		ENTITY::SET_ENTITY_COORDS((Local_430[0 /*12*/])->f_8, *(Local_430[0 /*12*/]), true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION((Local_430[0 /*12*/])->f_8, 90f, 0f, 0f, 2, true);
	}
	func_195(&(uLocal_443[1]), &((Local_229[1 /*32*/])->f_23), 0);
	func_196(&(uLocal_443[1]), &Local_15, 0);
	if (iLocal_14 == 0)
	{
		PED::SET_PED_LASSO_HOGTIE_FLAG(&(uLocal_443[1]), 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST((Local_430[0 /*12*/])->f_8))
	{
		GRAPHICS::_0xE63D68F455CA0B47(2, *(Local_430[0 /*12*/]), 1.2f, 1.2f, 1f);
	}
	func_197(&(uLocal_443[1]), 1);
	PED::_0xF1C03A5352243A30(&(uLocal_443[1]));
	MAP::ALLOW_SONAR_BLIPS(true);
	iLocal_485 = VOLUME::_CREATE_VOLUME_BOX(vLocal_476, 0f, 0f, 0f, 2f, 2f, 2f);
	PED::_0x4C39C95AE5DB1329(iLocal_485, 0, 15);
	func_199(&iLocal_491, vLocal_479, 0f, 0f, 0f, func_198(), "HelpBlocker");
	PED::_0x7C00CFC48A782DC0(iLocal_491, &(uLocal_443[1]), 0f, 3.1f, 0f, vLocal_482 + Vector(20f, 0f, 0f), 2, 1);
	iLocal_492 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_479, 0f, 0f, 0f, func_200(), "HelpBlocker2");
	PED::_0x7C00CFC48A782DC0(iLocal_492, &(uLocal_443[1]), -2.75f, 0f, 0f, vLocal_482 + Vector(90f, 0f, 0f), 2, 1);
	iLocal_493 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_479, 0f, 0f, 0f, func_201(), "HelpEnabler");
	PED::_0x7C00CFC48A782DC0(iLocal_493, &(uLocal_443[1]), func_202(), func_203(), 2, 1);
	iLocal_494 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_479, 0f, 0f, 0f, func_204(), "HelpEnabler2");
	PED::_0x7C00CFC48A782DC0(iLocal_494, &(uLocal_443[1]), func_205(), func_206(), 2, 1);
	iLocal_495 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_479, 0f, 0f, 0f, func_207(), "HelpEnabler3");
	PED::_0x7C00CFC48A782DC0(iLocal_495, &(uLocal_443[1]), func_208(), func_209(), 2, 1);
	iLocal_496 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_479, 0f, 0f, 0f, func_210(), "HelpEnablerNormalNav");
	PED::_0x7C00CFC48A782DC0(iLocal_496, &(uLocal_443[1]), func_211(), func_212(), 2, 1);
	PED::_0x028E7B3BBA0BD2FC(&(uLocal_443[0]));
	func_213(&(uLocal_443[0]), 0, 0);
	PED::SET_PED_CAN_RAGDOLL(&(uLocal_443[0]), true);
	if (iLocal_14 == 1)
	{
		ENTITY::_0x203BEFFDBE12E96A(&(uLocal_443[2]), (Local_229[2 /*32*/])->f_6, (Local_229[2 /*32*/])->f_9, 1, 0, 1);
		ENTITY::_0x203BEFFDBE12E96A(&(uLocal_443[3]), (Local_229[3 /*32*/])->f_6, (Local_229[3 /*32*/])->f_9, 1, 0, 1);
		ENTITY::_0x203BEFFDBE12E96A(&(uLocal_443[4]), (Local_229[4 /*32*/])->f_6, (Local_229[4 /*32*/])->f_9, 1, 0, 1);
		ENTITY::_0x203BEFFDBE12E96A(&(uLocal_443[5]), (Local_229[5 /*32*/])->f_6, (Local_229[5 /*32*/])->f_9, 1, 0, 1);
		PED::_SET_PED_ON_MOUNT(&(uLocal_443[2]), &(uLocal_443[4]), -1, true);
		PED::_SET_PED_ON_MOUNT(&(uLocal_443[3]), &(uLocal_443[5]), -1, true);
		PED::SET_PED_COMBAT_MOVEMENT(&(uLocal_443[2]), 2);
		PED::SET_PED_COMBAT_MOVEMENT(&(uLocal_443[3]), 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_443[2]), 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_443[3]), 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_443[1]), 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_443[2]), 17, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_443[3]), 17, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_443[1]), 17, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_443[1]), 3, true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(&(uLocal_443[2]), true, true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(&(uLocal_443[3]), true, true);
		func_215(&(uLocal_443[2]), func_214(131072, 1056964608, 1065353216), -1, 1, 0, 1056964608, 1065353216, 0);
		func_215(&(uLocal_443[3]), func_216(0, 1056964608, 1065353216), -1, 1, 0, 1056964608, 1065353216, 0);
		func_215(&(uLocal_443[1]), joaat("weapon_revolver_cattleman"), -1, 0, 0, 1056964608, 1065353216, 0);
		WEAPON::SET_AMMO_IN_CLIP(&(uLocal_443[2]), func_214(131072, 1056964608, 1065353216), 100);
		WEAPON::SET_AMMO_IN_CLIP(&(uLocal_443[3]), func_216(0, 1056964608, 1065353216), 100);
		ENTITY::FREEZE_ENTITY_POSITION(&(uLocal_443[4]), true);
		ENTITY::FREEZE_ENTITY_POSITION(&(uLocal_443[5]), true);
		PED::APPLY_DAMAGE_TO_PED(&(uLocal_443[1]), 5, 1, 54157, 0);
		func_194(&(uLocal_443[2]), 0);
		func_194(&(uLocal_443[3]), 0);
		func_193(&((Local_229[2 /*32*/])->f_22));
		PED::SET_PED_CONFIG_FLAG(&(uLocal_443[2]), 146, true);
		PED::SET_PED_CONFIG_FLAG(&(uLocal_443[2]), 383, true);
		func_193(&((Local_229[3 /*32*/])->f_22));
		PED::SET_PED_CONFIG_FLAG(&(uLocal_443[3]), 146, true);
		PED::SET_PED_CONFIG_FLAG(&(uLocal_443[3]), 383, true);
		func_217(&(uLocal_443[1]), 100);
		func_218(&(uLocal_443[1]), -885810591, 1, 0);
	}
	else
	{
		func_44(1);
		PED::APPLY_DAMAGE_TO_PED(&(uLocal_443[1]), 5, 1, 38142, 0);
		PED::SET_PED_CONFIG_FLAG(&(uLocal_443[1]), 2, true);
		PED::SET_PED_CONFIG_FLAG(&(uLocal_443[1]), 269, true);
		PED::SET_PED_CONFIG_FLAG(Global_35, 2, true);
		iLocal_506 = 1;
		func_217(&(uLocal_443[1]), 200);
		func_218(&(uLocal_443[1]), -324053813, 1, 0);
	}
}

void func_71()
{
	if (iLocal_14 == 0)
	{
		Local_422 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_422.f_4, 64, 0, false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_422, vLocal_469, 0f, 0f, fLocal_472, 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_422, "player", Global_35, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_422, "Horse", &(uLocal_443[0]), 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_422, "LADY", &(uLocal_443[1]), 0);
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_422, 1, 0))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_422);
		}
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "cower_L_Bool", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "INT_BOOL", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "LIFT_BOOL", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "MOURN_BOOL", false, false);
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_INT");
	}
	else
	{
		Local_422 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_422.f_4, 0, 0, false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_422, vLocal_469, 0f, 0f, fLocal_472, 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_422, "player", Global_35, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_422, "LADY", &(uLocal_443[1]), 0);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "cower_L_Bool", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "INT_BOOL", false, false);
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_INT");
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_422, 1, 0))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_422);
		}
	}
}

void func_72()
{
	func_219(&(Local_15.f_5), &(uLocal_443[1]));
	func_220(&(Local_15.f_5), 1);
	func_113(&(Local_15.f_5), 1);
	func_111(&(Local_15.f_5), 1);
	func_110(&(Local_15.f_5), 1);
	func_221(&(Local_15.f_5), 1);
	func_222(&(Local_15.f_5), 1);
	func_223(&(Local_15.f_5), 1);
	func_115(&(Local_15.f_5), 1);
}

void func_73()
{
}

void func_74()
{
}

void func_75()
{
	int iVar0;

	if (bLocal_505)
	{
		return;
	}
	if (((iLocal_623 == 0 || iLocal_623 == 1) || iLocal_623 == 2) || iLocal_623 == 5)
	{
		if (((((func_224(Global_35, iLocal_491, 0, 1) || func_224(Global_35, iLocal_492, 0, 1)) && !func_224(Global_35, iLocal_493, 0, 1)) && !func_224(Global_35, iLocal_494, 0, 1)) && !func_224(Global_35, iLocal_495, 0, 1)) && !func_224(Global_35, iLocal_496, 0, 1))
		{
			func_225(Local_559[0 /*17*/], 0, 0);
		}
		else
		{
			func_225(Local_559[0 /*17*/], 1, 0);
		}
	}
	iVar0 = func_226(uLocal_443[1], &iLocal_538, 12f, &Local_559, &(Local_15.f_192), 0f, 1, 0, 0, iLocal_860, 0, 0, 2, 1, -1082130432, 0);
	if (iVar0 != -1)
	{
	}
	switch (iLocal_623)
	{
		case 0:
			switch (iLocal_624)
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							func_225(Local_559[1 /*17*/], 0, 0);
							iLocal_624 = 1;
							break;
						case 2:
							func_225(Local_559[2 /*17*/], 0, 0);
							iLocal_624 = 2;
							break;
						case 0:
							if (func_227(iVar0))
							{
								iLocal_623 = 13;
							}
							break;
					}
					break;
				case 1:
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_443[1]), 0);
					if (func_227(iVar0))
					{
						iLocal_623 = 13;
					}
					else if (func_228(&(uLocal_443[1]), Global_35, func_180(71), 3f, 0))
					{
						iLocal_624 = 4;
						func_229();
					}
					break;
				case 2:
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_443[1]), 0);
					if (func_227(iVar0))
					{
						iLocal_623 = 13;
					}
					else if (func_228(&(uLocal_443[1]), Global_35, func_180(72), 3f, 0))
					{
						iLocal_624 = 5;
						func_229();
					}
					break;
				case 4:
					if (func_227(iVar0))
					{
						iLocal_623 = 13;
					}
					else if (func_230(-4f, 1, &(uLocal_443[1]), 1))
					{
						iLocal_623 = 2;
						iLocal_624 = 0;
						func_225(Local_559[1 /*17*/], 0, 0);
						func_225(Local_559[2 /*17*/], 1, 0);
						func_225(Local_559[0 /*17*/], 1, 0);
					}
					break;
				case 5:
					if (func_227(iVar0))
					{
						iLocal_623 = 13;
					}
					else if (func_230(-4f, 1, &(uLocal_443[1]), 1))
					{
						iLocal_623 = 1;
						iLocal_624 = 0;
						func_225(Local_559[1 /*17*/], 1, 0);
						func_225(Local_559[2 /*17*/], 0, 0);
						func_225(Local_559[0 /*17*/], 1, 0);
					}
					break;
			}
			break;
		case 1:
			switch (iLocal_624)
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							func_225(Local_559[1 /*17*/], 0, 0);
							iLocal_624 = 1;
							break;
						case 0:
							if (func_227(iVar0))
							{
								func_231(Global_35, &(uLocal_443[1]), func_180(73), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								func_232(&uLocal_684);
								func_233(&uLocal_669);
								iLocal_623 = 13;
							}
							break;
					}
					break;
				case 1:
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_443[1]), 0);
					if (func_227(iVar0))
					{
						iLocal_623 = 13;
					}
					else if (func_228(&(uLocal_443[1]), Global_35, func_180(71), 3f, 0))
					{
						func_229();
						iLocal_624 = 6;
					}
					break;
				case 6:
					if (func_227(iVar0))
					{
						iLocal_623 = 13;
					}
					else
					{
						iLocal_623 = 5;
						iLocal_624 = 0;
						(Local_559[0 /*17*/])->f_13 = "";
						func_225(Local_559[1 /*17*/], 0, 0);
						func_225(Local_559[2 /*17*/], 0, 0);
						func_225(Local_559[0 /*17*/], 1, 0);
					}
					break;
			}
			break;
		case 2:
			switch (iLocal_624)
			{
				case 0:
					switch (iVar0)
					{
						case 2:
							func_225(Local_559[2 /*17*/], 0, 0);
							iLocal_624 = 2;
							break;
						case 0:
							if (func_227(iVar0))
							{
								func_231(Global_35, &(uLocal_443[1]), func_180(73), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_623 = 13;
							}
							break;
					}
					break;
				case 2:
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_443[1]), 0);
					if (func_227(iVar0))
					{
						iLocal_623 = 13;
					}
					else if (func_228(&(uLocal_443[1]), Global_35, func_180(72), 3f, 0))
					{
						func_229();
						iLocal_624 = 6;
					}
					break;
				case 6:
					if (func_227(iVar0))
					{
						iLocal_623 = 13;
					}
					else
					{
						iLocal_623 = 5;
						iLocal_624 = 0;
						(Local_559[0 /*17*/])->f_13 = "";
						func_225(Local_559[1 /*17*/], 0, 0);
						func_225(Local_559[2 /*17*/], 0, 0);
						func_225(Local_559[0 /*17*/], 1, 0);
					}
					break;
			}
			break;
		case 5:
			switch (iVar0)
			{
				case 0:
					if (func_227(iVar0))
					{
						func_231(Global_35, &(uLocal_443[1]), func_180(73), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_804 = 1;
						func_232(&uLocal_684);
						func_233(&uLocal_669);
						iLocal_623 = 13;
					}
					break;
			}
			break;
		case 6:
			switch (iLocal_624)
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							func_234(&(uLocal_443[1]), 0);
							iLocal_806 = 1;
							iLocal_740 = 3;
							func_225(Local_559[1 /*17*/], 0, 0);
							iLocal_624 = 1;
							break;
					}
					break;
				case 1:
					if (!func_235())
					{
						if (func_228(&(uLocal_443[1]), Global_35, func_180(86), 0f, 0))
						{
							iLocal_624 = 6;
						}
					}
					break;
				case 6:
					if (!func_235())
					{
						func_225(Local_559[1 /*17*/], 0, 0);
						func_236(Local_559[2 /*17*/], 0, 1);
						func_237(&iLocal_538, 0);
						iLocal_860 = func_1(3, 0, 0);
						func_225(Local_559[2 /*17*/], 1, 0);
						(Local_559[2 /*17*/])->f_13 = func_180(69);
						func_238(Local_559[2 /*17*/], "BEAT_GRT_NEG");
						iLocal_623 = 8;
						iLocal_624 = 0;
					}
					break;
			}
			break;
		case 7:
			switch (iVar0)
			{
				case 1:
					func_239();
					iLocal_787 = 1;
					iLocal_740 = 2;
					func_237(&iLocal_538, 0);
					iLocal_860 = func_1(3, 0, 0);
					if (!MAP::DOES_BLIP_EXIST(&(iLocal_450[1])))
					{
						iLocal_450[1] = MAP::BLIP_ADD_FOR_ENTITY(-89429847, &(uLocal_443[1]));
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(iLocal_450[1]), "RE_INTER_STRANGER");
					}
					break;
				case 2:
					func_237(&iLocal_538, 0);
					iLocal_860 = func_1(3, 0, 0);
					iLocal_787 = 1;
					iLocal_740 = 7;
					break;
			}
			break;
		case 8:
			switch (iLocal_624)
			{
				case 0:
					switch (iVar0)
					{
						case 2:
							func_25(Global_1935630, 4);
							func_225(Local_559[2 /*17*/], 0, 0);
							func_225(Local_559[1 /*17*/], 0, 0);
							func_225(Local_559[0 /*17*/], 0, 0);
							if (iLocal_810 == 0)
							{
								func_30(2, 0, 0, "RE_HONOR_BROKE_AGREEMENT", &(uLocal_443[1]), 0, 1065353216, 0);
								iLocal_810 = 1;
							}
							iLocal_790 = 1;
							iLocal_624 = 2;
							break;
					}
					break;
				case 2:
					if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(&(uLocal_443[1]), Local_422))
					{
						if (!func_235())
						{
							if (func_228(&(uLocal_443[1]), Global_35, func_180(70), 0f, 0))
							{
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
								if (PED::IS_PED_IN_ANY_VEHICLE(&(uLocal_443[1]), false))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
								}
								if (PED::IS_PED_ON_MOUNT(&(uLocal_443[1])))
								{
									TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
								}
								TASK::_TASK_MOVE_IN_TRAFFIC(0, 1f, 656, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
								TASK::TASK_PERFORM_SEQUENCE(&(uLocal_443[1]), iLocal_783);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
								func_15(8);
								iLocal_624 = 6;
							}
						}
					}
					break;
				case 6:
					break;
			}
			break;
		case 9:
			switch (iLocal_624)
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							func_225(Local_559[1 /*17*/], 0, 0);
							func_225(Local_559[2 /*17*/], 0, 0);
							iLocal_624 = 1;
							break;
						case 2:
							if (func_240())
							{
								func_225(Local_559[1 /*17*/], 0, 0);
								iLocal_624 = 2;
							}
							else
							{
								func_225(Local_559[1 /*17*/], 0, 0);
								func_225(Local_559[2 /*17*/], 0, 0);
								iLocal_624 = 2;
							}
							break;
					}
					break;
				case 1:
					if (!func_235())
					{
						if (func_228(&(uLocal_443[1]), Global_35, func_180(76), 0f, 0))
						{
							iLocal_624 = 6;
						}
					}
					break;
				case 2:
					if (!func_235())
					{
						if (func_228(&(uLocal_443[1]), Global_35, func_180(77), 0f, 0))
						{
							if (func_240())
							{
								iLocal_623 = 10;
								(Local_559[2 /*17*/])->f_13 = func_180(78);
								iLocal_624 = 0;
								func_225(Local_559[2 /*17*/], 1, 0);
							}
							else
							{
								iLocal_624 = 6;
							}
						}
					}
					break;
				case 6:
					func_128(1);
					iLocal_624 = 0;
					iLocal_623 = 13;
					break;
			}
			break;
		case 10:
			switch (iLocal_624)
			{
				case 0:
					switch (iVar0)
					{
						case 2:
							iLocal_624 = 2;
							break;
					}
					break;
				case 2:
					if (!func_235())
					{
						if (func_228(&(uLocal_443[1]), Global_35, func_180(79), 0f, 0))
						{
							func_225(Local_559[2 /*17*/], 1, 0);
							iLocal_623 = 11;
							(Local_559[2 /*17*/])->f_13 = func_180(81);
							iLocal_624 = 0;
						}
					}
					break;
			}
			break;
		case 11:
			switch (iLocal_624)
			{
				case 0:
					switch (iVar0)
					{
						case 2:
							func_225(Local_559[2 /*17*/], 0, 0);
							iLocal_624 = 2;
							break;
					}
					break;
				case 2:
					if (!func_235())
					{
						if (func_228(&(uLocal_443[1]), Global_35, func_180(82), 0f, 0))
						{
							func_15(4);
							iLocal_624 = 6;
						}
					}
					break;
				case 6:
					iLocal_624 = 0;
					iLocal_623 = 13;
					break;
			}
			break;
		case 12:
			switch (iLocal_624)
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							func_225(Local_559[1 /*17*/], 0, 0);
							func_225(Local_559[2 /*17*/], 0, 0);
							func_225(Local_559[0 /*17*/], 0, 0);
							iLocal_624 = 1;
							break;
						case 2:
							func_225(Local_559[1 /*17*/], 0, 0);
							func_225(Local_559[2 /*17*/], 0, 0);
							func_225(Local_559[0 /*17*/], 0, 0);
							iLocal_624 = 2;
							break;
					}
					break;
				case 1:
					if (!func_235())
					{
						if (func_228(&(uLocal_443[1]), Global_35, func_180(89), 0f, 0))
						{
							iLocal_624 = 4;
						}
					}
					break;
				case 2:
					if (!func_235())
					{
						if (func_228(&(uLocal_443[1]), Global_35, func_180(90), 0f, 0))
						{
							iLocal_624 = 5;
						}
					}
					break;
				case 4:
					iLocal_623 = 13;
					break;
				case 5:
					iLocal_624 = 0;
					iLocal_623 = 13;
					break;
			}
			break;
		case 13:
			func_225(Local_559[1 /*17*/], 0, 0);
			func_225(Local_559[2 /*17*/], 0, 0);
			func_225(Local_559[0 /*17*/], 0, 0);
			break;
		case 14:
			break;
	}
}

void func_76()
{
	int iVar0;

	if (bLocal_505)
	{
		return;
	}
	iVar0 = func_226(uLocal_443[1], &iLocal_538, 12f, &Local_559, &(Local_15.f_192), 0f, 1, 0, 0, iLocal_860, 0, 0, 2, 1, -1082130432, 0);
	switch (iLocal_623)
	{
		case 0:
			switch (iLocal_624)
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							func_234(&(uLocal_443[1]), 500);
							func_225(Local_559[1 /*17*/], 0, 0);
							iLocal_624 = 1;
							func_231(Global_35, &(uLocal_443[1]), func_180(67), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
						case 2:
							func_234(&(uLocal_443[1]), 500);
							func_225(Local_559[1 /*17*/], 0, 0);
							iLocal_624 = 2;
							break;
						case 0:
							func_234(&(uLocal_443[1]), 500);
							iLocal_828 = 1;
							iLocal_623 = 13;
							break;
					}
					break;
				case 1:
					if (iLocal_622 <= 0)
					{
						if (!func_235())
						{
							func_231(&(uLocal_443[1]), Global_35, func_180(71), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_241();
							iLocal_624 = 4;
						}
					}
					break;
				case 2:
					if (iLocal_622 <= 0)
					{
						if (!func_235())
						{
							func_231(&(uLocal_443[1]), Global_35, func_180(72), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_241();
							iLocal_624 = 5;
						}
					}
					break;
				case 4:
					if (func_230(-4f, 1, &(uLocal_443[1]), 1))
					{
						iLocal_623 = 2;
						(Local_559[2 /*17*/])->f_13 = func_180(69);
						iLocal_624 = 0;
						func_225(Local_559[2 /*17*/], 1, 0);
					}
					break;
				case 5:
					if (func_230(-4f, 1, &(uLocal_443[1]), 1))
					{
						iLocal_623 = 3;
						iLocal_624 = 0;
						(Local_559[2 /*17*/])->f_13 = func_180(69);
						func_225(Local_559[2 /*17*/], 1, 0);
					}
					break;
			}
			break;
		case 2:
			switch (iLocal_624)
			{
				case 0:
					switch (iVar0)
					{
						case 2:
							func_234(&(uLocal_443[1]), 500);
							iLocal_624 = 2;
							break;
						case 0:
							func_234(&(uLocal_443[1]), 500);
							iLocal_623 = 13;
							break;
					}
					break;
				case 2:
					if (iLocal_622 <= 0)
					{
						if (!func_235())
						{
							func_231(&(uLocal_443[1]), Global_35, func_180(70), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_241();
							iLocal_624 = 6;
						}
					}
					break;
				case 6:
					iLocal_623 = 4;
					iLocal_624 = 0;
					func_225(Local_559[2 /*17*/], 0, 0);
					break;
			}
			break;
		case 3:
			switch (iLocal_624)
			{
				case 0:
					switch (iVar0)
					{
						case 2:
							func_234(&(uLocal_443[1]), 500);
							iLocal_624 = 2;
							break;
						case 0:
							func_234(&(uLocal_443[1]), 500);
							iLocal_623 = 13;
							break;
					}
					break;
				case 2:
					if (iLocal_622 <= 0)
					{
						if (!func_235())
						{
							func_231(&(uLocal_443[1]), Global_35, func_180(70), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_241();
							iLocal_624 = 6;
						}
					}
					break;
				case 6:
					iLocal_623 = 4;
					iLocal_624 = 0;
					(Local_559[2 /*17*/])->f_13 = func_180(75);
					func_225(Local_559[2 /*17*/], 1, 0);
					break;
			}
			break;
		case 4:
			switch (iLocal_772)
			{
				case 0:
					if (!func_235())
					{
						func_231(&(uLocal_443[1]), Global_35, func_180(24), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_25(Global_1935630, 4);
						func_225(Local_559[2 /*17*/], 0, 0);
						iLocal_772++;
					}
					break;
				case 1:
					if (!func_235())
					{
						func_231(Global_35, &(uLocal_443[1]), func_180(75), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_225(Local_559[2 /*17*/], 0, 0);
						iLocal_772++;
					}
					break;
				case 2:
					if (!func_235())
					{
						if (func_231(&(uLocal_443[1]), Global_35, func_180(140), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							func_242(&(uLocal_443[1]), Global_35);
							func_243();
							if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, sLocal_844))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, sLocal_844, true);
							}
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(&(uLocal_443[1]), true);
							PED::SET_PED_LASSO_HOGTIE_FLAG(&(uLocal_443[1]), 0, 1);
							WEAPON::SET_CURRENT_PED_WEAPON(&(uLocal_443[1]), joaat("weapon_revolver_cattleman"), false, 0, false, false);
							iLocal_772++;
						}
					}
					break;
				case 3:
					if (!func_235())
					{
						if (func_231(&(uLocal_443[1]), Global_35, func_180(141), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							func_25(Global_1935630, 4);
							func_15(14);
							iLocal_826 = 1;
							iLocal_623 = 13;
							iLocal_624 = 6;
						}
					}
					break;
			}
			break;
		case 5:
			switch (iVar0)
			{
				case 0:
					func_234(&(uLocal_443[1]), 500);
					iLocal_623 = 13;
					break;
			}
			break;
		case 13:
			func_225(Local_559[1 /*17*/], 0, 0);
			func_225(Local_559[2 /*17*/], 0, 0);
			func_225(Local_559[0 /*17*/], 0, 0);
			break;
		case 14:
			break;
	}
}

int func_77(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 399422490;
		case 1:
			return -385635273;
		case 2:
			return -1163401704;
		case 3:
			return 561239516;
		case 7:
			return 168005805;
		case 9:
			return -273475295;
		case 10:
			return -2142954459;
		case 11:
			return -1442703445;
		case 12:
			return -1505972720;
		case 13:
			return -508773182;
		default:
			break;
	}
	return -1;
}

void func_78(int iParam0, int iParam1, bool bParam2)
{
	PED::_0xD710A5007C2AC539(iParam0, iParam1, 1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

float func_79(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_80(int iParam0, int iParam1)
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

void func_81(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { func_244(uParam0) };
	iVar3 = func_137(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::STATSTRACKER_IS_INITIALIZED(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_82(var uParam0, var uParam1)
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

void func_83(var uParam0)
{
	func_112(uParam0, 1);
	func_245(uParam0, 20);
}

void func_84(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_85(int iParam0, int iParam1)
{
	if (!func_23(iParam0))
	{
		return false;
	}
	return (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1) != 0;
}

void func_86(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_23(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_246())
	{
		func_247(1);
	}
	func_248(iParam2, uParam0->f_43);
	func_249(iParam2, 0, 0, 0, 0);
	if (func_250(iParam2) != -1)
	{
		MISC::_0xD74ACDF7DB8114AF(1);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_129(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_251(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_87(var uParam0)
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

void func_88(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (uParam0->f_178 && func_252())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_85(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_86(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_87(&(uParam0->f_121));
			return;
		}
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (!func_253(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_254(uParam0, bVar0);
		func_255(uParam0->f_121[iParam1 /*9*/], fVar1, 1082130432, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_256(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_86(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_87(&(uParam0->f_121));
		}
	}
}

int func_89(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 30f;
	fVar1 = 150f;
	if (func_48(uParam2->f_3, 1))
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
			if (func_257())
			{
				fVar0 = 15f;
			}
		}
		if (func_258(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_259(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return 0;
		}
		if (!func_258(uParam2, fVar1))
		{
			if (!func_260(((*Global_1310750)[uParam2->f_3 /*111*/])->f_38))
			{
				return 0;
			}
		}
		if (!func_261(uParam2->f_3, 2) && func_262(2))
		{
			return 0;
		}
		if (func_48(iParam0, 4194304) || func_48(iParam0, 33554432))
		{
			if (func_263(1))
			{
				return 0;
			}
		}
	}
	if (func_264(Global_35))
	{
		return 0;
	}
	if (func_265(0, 1, 1) && !func_266(iParam0))
	{
		return 0;
	}
	if (!*uParam1 && func_48(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (func_267(Global_35, 0))
		{
			return 0;
		}
		if (Global_16)
		{
			return 0;
		}
		if (func_259(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return 0;
		}
		if (func_268())
		{
			return 0;
		}
		iVar2 = func_270(func_269());
		if (func_271(iVar2))
		{
			if (func_272(Global_36, iVar2))
			{
				return 0;
			}
		}
		if (func_273(Global_36) && !uParam2->f_161)
		{
			return 0;
		}
		if (!uParam2->f_48)
		{
			if (func_274(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_90(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;

	if (func_275(uParam0->f_51))
	{
		func_276(uParam0->f_51, 0);
		fVar0 = func_277(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_278());
		fVar1 = func_133(!func_48(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_280(iVar2, func_279(uParam0->f_3), 1, iParam1, 8, 0, fVar1);
	}
}

void func_91()
{
	iLocal_738 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(792302887, &(uLocal_443[1]), 0f, 30f, 30f, 15f, -1082130432, 1127481344, 0, 0, -1, -1);
	func_281();
	Local_15.f_45 = 0;
	func_15(1);
}

void func_92()
{
	func_282();
	func_283();
	if (func_284(&Local_15, 1f, 80f, 65f, 1, 0, 0, -1082130432, 1, 1125515264, 0, 0) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_422, 0))
	{
		func_285(1515458263, ENTITY::GET_ENTITY_COORDS(&(uLocal_443[1]), true, false), 1);
		func_231(&(uLocal_443[1]), Global_35, func_180(2), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
		func_15(2);
	}
}

void func_93()
{
	func_286(&(uLocal_443[1]), Global_35, &uLocal_513, -1, 15, 0);
	func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
	func_282();
	func_283();
	if (!func_287() && iLocal_811 == 0)
	{
		func_288();
		func_289();
		if (iLocal_797 == 0)
		{
			func_290();
		}
	}
	if (!func_291(&uLocal_669))
	{
		if (func_33(&(uLocal_443[1]), 1, 1) < 25f)
		{
			func_232(&uLocal_669);
		}
	}
	else if (func_292(&uLocal_669) >= 60f)
	{
		iLocal_811 = 1;
		if ((iLocal_804 == 0 && func_230(0f, 1, 0, 0)) && func_230(-4f, 1, &(uLocal_443[1]), 1))
		{
			func_15(7);
		}
	}
	if (PED::IS_PED_RAGDOLL(&(uLocal_443[1])))
	{
		func_213(&(uLocal_443[1]), 0, 0);
	}
	if (PED::IS_PED_DEAD_OR_DYING(&(uLocal_443[1]), true))
	{
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(&(uLocal_443[0]), true);
		PED::SET_PED_CAN_RAGDOLL(&(uLocal_443[0]), true);
		if (iLocal_810 == 0)
		{
			func_30(3, 0, 0, "RE_HONOR_CRUEL_KILLING", &(uLocal_443[1]), 0, 1065353216, 0);
			iLocal_810 = 1;
		}
		func_15(9);
	}
	if (func_293())
	{
		func_15(3);
	}
}

void func_94()
{
	func_283();
	if (func_294())
	{
		func_197(&(uLocal_443[1]), 0);
		if (MAP::DOES_BLIP_EXIST(&(iLocal_450[1])))
		{
			MAP::REMOVE_BLIP(iLocal_450[1]);
		}
		func_192(&(uLocal_443[1]), uLocal_488[0], 0, 1);
		func_295();
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_TALK");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_MOURN_LOOP_SUBTLE");
		func_15(5);
	}
}

void func_95()
{
	func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 8, 0);
	func_296();
	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, Local_422))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 255439828, false);
		PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1046962283, false);
	}
	if (fLocal_736 >= 0.4f)
	{
		if (iLocal_808 == 0)
		{
			iLocal_808 = 1;
			iLocal_623 = 6;
			iLocal_624 = 0;
			func_237(&iLocal_538, 0);
			iLocal_860 = func_1(1, 0, 0);
			func_236(Local_559[1 /*17*/], 0, 1);
			(Local_559[1 /*17*/])->f_13 = func_180(85);
			(Local_559[2 /*17*/])->f_13 = func_180(68);
			func_238(Local_559[2 /*17*/], "RE_INTER_ANTAGONIZE");
			func_225(Local_559[1 /*17*/], 0, 0);
			func_225(Local_559[2 /*17*/], 0, 0);
			func_225(Local_559[0 /*17*/], 0, 0);
		}
	}
	if (fLocal_736 >= 0.41f)
	{
		iLocal_805 = 1;
	}
	if (iLocal_806 == 0)
	{
		func_297();
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_TALK");
		if ((func_33(&(uLocal_443[1]), 1, 1) <= 15f && func_292(&uLocal_642) >= 30f) && iLocal_760 > 6)
		{
			iLocal_791 = 1;
		}
		if (iLocal_791 == 1 && func_33(&(uLocal_443[1]), 1, 1) <= 15f)
		{
			func_298();
		}
	}
	else if (iLocal_805 == 1 && func_230(-4f, 1, Global_35, 1))
	{
		func_298();
		if (iLocal_809 == 0)
		{
			iLocal_809 = 1;
			func_239();
		}
	}
	if (func_292(&uLocal_645) >= 12f && iLocal_787 == 0)
	{
		func_286(&(uLocal_443[1]), Global_35, &uLocal_513, -1, 8, 0);
		func_299();
	}
}

void func_96()
{
	var uVar0;
	var uVar1;

	func_295();
	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, Local_422.f_1))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 255439828, false);
		PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1046962283, false);
	}
	if (!func_300(&(uLocal_443[1])) && !ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_473, 20f, 20f, 10f, false, true, 0))
	{
		func_286(&(uLocal_443[1]), Global_35, &uLocal_513, -1, 15, 0);
	}
	if (ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_473, 35f, 35f, 3f, false, true, 0))
	{
		if (iLocal_820 == 0)
		{
			iLocal_820 = 1;
			func_301();
		}
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(Global_35)))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35), 1.5f);
		}
	}
	if (!func_291(&uLocal_687))
	{
		if (func_302())
		{
			func_232(&uLocal_687);
		}
	}
	if (func_292(&uLocal_648) > 15f)
	{
		if (func_300(&(uLocal_443[1])))
		{
			if (func_303())
			{
				if (iLocal_796 == 0 && !func_235())
				{
					iLocal_796 = 1;
					func_304(0);
					func_231(&(uLocal_443[1]), Global_35, func_180(108), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			if ((func_305(&uLocal_209, PED::GET_MOUNT(Global_35), vLocal_473) && func_300(Global_35)) && func_302() == 0)
			{
				if (!func_291(&uLocal_651))
				{
					func_232(&uLocal_651);
				}
				func_232(&uLocal_672);
				func_306();
			}
			else if (func_308(&uLocal_209, func_307()) && func_302() == 0)
			{
				if (!func_291(&uLocal_651))
				{
					func_232(&uLocal_651);
				}
				func_232(&uLocal_672);
				func_309();
			}
			else if (((func_310(&uLocal_209, Global_35, 20, 1090519040) && func_302() == 0) && PED::_0x42688E94E96FD9B4(&(uLocal_443[0]), 3, 0) == 0f) || !func_300(Global_35))
			{
				if (!func_291(&uLocal_651))
				{
					func_232(&uLocal_651);
				}
				func_232(&uLocal_672);
				func_311();
			}
			else if (iLocal_821 == 1)
			{
				if (!func_291(&uLocal_693))
				{
					if (func_230(-4f, 1, 0, 0))
					{
						func_232(&uLocal_693);
					}
				}
				else if (func_292(&uLocal_693) >= 3f)
				{
					if (!func_312())
					{
						iLocal_821 = 0;
						func_233(&uLocal_693);
					}
					else if (iLocal_744 == 0 || iLocal_743 == 0)
					{
						iLocal_821 = 0;
					}
					else
					{
						func_233(&uLocal_636);
						func_313();
						func_233(&uLocal_693);
					}
				}
			}
			else if ((func_292(&uLocal_648) >= 25f && func_292(&uLocal_672) >= 5f) && iLocal_745 < 1)
			{
				if (iLocal_512 == 11)
				{
					func_314();
				}
				else if (iLocal_512 == 6 || iLocal_512 == 7)
				{
					func_315();
				}
				else
				{
					func_315();
				}
			}
			if (func_292(&uLocal_687) >= IntToFloat(func_316()))
			{
				func_317();
			}
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_473, 6f, 6f, 2f, false, true, 0))
	{
		iLocal_807 = 1;
	}
	if (iLocal_807 == 1)
	{
		uVar0 = func_318();
		uVar1 = func_319(PED::IS_PED_IN_ANY_VEHICLE(&(uLocal_443[1]), false));
		if (uVar0 && uVar1)
		{
			func_15(8);
		}
	}
	else
	{
		if (!func_291(&uLocal_654))
		{
			func_232(&uLocal_654);
		}
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		if (iLocal_835 == 0)
		{
			func_192(&(uLocal_443[1]), uLocal_488[0], 0, 0);
			iLocal_835 = 1;
		}
		func_320();
		func_321();
		if (iLocal_792 == 0)
		{
			func_322();
		}
		if (!func_300(&(uLocal_443[1])) && iLocal_812 == 1)
		{
			bLocal_832 = true;
			func_15(4);
		}
		func_323();
		if (!func_300(&(uLocal_443[1])) && iLocal_812 == 0)
		{
			if ((!PED::IS_PED_FACING_PED(&(uLocal_443[1]), Global_35, 30f) && !func_80(&(uLocal_443[1]), -875674219)) && iLocal_793 == 0)
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(uLocal_443[1]), Global_35, -1, -1082130432, -1082130432, -1082130432);
			}
			if (func_292(&uLocal_654) >= 30f && iLocal_793 == 0)
			{
				func_225(Local_559[1 /*17*/], 0, 0);
				func_225(Local_559[2 /*17*/], 0, 0);
				func_238(Local_559[1 /*17*/], "RE_INTER_POS");
				func_238(Local_559[2 /*17*/], "RE_INTER_ANTAGONIZE");
				if (func_240())
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(32), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
				else
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(103), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
				TASK::_TASK_MOVE_IN_TRAFFIC(&(uLocal_443[1]), 1f, 656, 0);
				func_324();
				func_15(8);
			}
			if (func_292(&uLocal_654) >= 30f && iLocal_793 == 1)
			{
				func_225(Local_559[1 /*17*/], 0, 0);
				func_225(Local_559[2 /*17*/], 0, 0);
				func_238(Local_559[1 /*17*/], "RE_INTER_POS");
				func_238(Local_559[2 /*17*/], "RE_INTER_ANTAGONIZE");
				if (func_240())
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(32), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
				else
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(103), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
				TASK::_TASK_MOVE_IN_TRAFFIC(&(uLocal_443[1]), 1f, 656, 0);
				func_324();
				func_15(8);
			}
		}
	}
	func_296();
	func_325();
	func_326(75);
}

void func_97()
{
	func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 3, 0);
	func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 5, 0);
	switch (iLocal_617)
	{
		case 0:
			func_237(&iLocal_538, 0);
			iLocal_860 = func_1(3, 0, 0);
			if (iLocal_810 == 0)
			{
				func_30(2, 0, 0, "RE_HONOR_IGNORED_VICTIM", &(uLocal_443[1]), 0, 1065353216, 0);
				iLocal_810 = 1;
			}
			func_192(&(uLocal_443[1]), uLocal_488[0], 0, 0);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_443[1]), 0);
			func_231(&(uLocal_443[1]), Global_35, func_180(91), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "INT_BOOL", true, false);
			if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_FREE_HERSELF"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_FREE_HERSELF", true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_443[0])))
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(&(uLocal_443[0]), true);
				PED::SET_PED_CAN_RAGDOLL(&(uLocal_443[0]), true);
			}
			func_238(Local_559[0 /*17*/], "INTERACT_ROB");
			func_225(Local_559[1 /*17*/], 0, 0);
			func_225(Local_559[2 /*17*/], 0, 0);
			func_225(Local_559[0 /*17*/], 0, 0);
			if (MAP::DOES_BLIP_EXIST(&(iLocal_450[1])))
			{
				MAP::REMOVE_BLIP(iLocal_450[1]);
			}
			if (func_292(&uLocal_684) >= 10f)
			{
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			}
			iLocal_617 = 1;
			break;
		case 1:
			if (fLocal_736 >= 0.75f)
			{
				func_296();
			}
			if (fLocal_736 >= 0.99f)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
				TASK::_TASK_MOVE_IN_TRAFFIC(0, 1f, 656, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
				TASK::TASK_PERFORM_SEQUENCE(&(uLocal_443[1]), iLocal_783);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
				func_327(&(uLocal_443[1]));
				func_197(&(uLocal_443[1]), 0);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(&(uLocal_443[1]), true);
				PED::SET_PED_LASSO_HOGTIE_FLAG(&(uLocal_443[1]), 0, 1);
				func_231(&(uLocal_443[1]), Global_35, func_180(92), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_617 = 2;
			}
			break;
		case 2:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_422))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_422);
			}
			func_295();
			if (func_230(-4f, 1, &(uLocal_443[1]), 1))
			{
				func_236(Local_559[1 /*17*/], 0, 1);
				func_236(Local_559[2 /*17*/], 0, 1);
				func_328(Local_559[0 /*17*/], 1);
				func_225(Local_559[1 /*17*/], 1, 0);
				func_225(Local_559[2 /*17*/], 1, 0);
				(Local_559[1 /*17*/])->f_13 = func_180(87);
				(Local_559[2 /*17*/])->f_13 = func_180(88);
				func_238(Local_559[1 /*17*/], "RE_INTER_POS");
				func_238(Local_559[2 /*17*/], "RE_INTER_ANTAGONIZE");
				func_238(Local_559[0 /*17*/], "INTERACT_ROB");
				func_328(Local_559[0 /*17*/], 0);
				iLocal_860 = func_1(3, 0, 0);
				iLocal_623 = 12;
				iLocal_617 = 3;
			}
			break;
		case 3:
			func_296();
			break;
	}
}

void func_98()
{
	func_286(&(uLocal_443[1]), Global_35, &uLocal_513, -1, 6, 0);
	if (MAP::DOES_BLIP_EXIST(iLocal_779))
	{
		MAP::REMOVE_BLIP(&iLocal_779);
	}
	if (MAP::DOES_BLIP_EXIST(&(iLocal_450[1])))
	{
		MAP::REMOVE_BLIP(iLocal_450[1]);
	}
	func_296();
}

void func_99()
{
	switch (iLocal_620)
	{
		case 0:
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(&(uLocal_443[1]), true);
			PED::SET_PED_LASSO_HOGTIE_FLAG(&(uLocal_443[1]), 0, 1);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(&(uLocal_443[0]), true);
			PED::SET_PED_CAN_RAGDOLL(&(uLocal_443[0]), true);
			PED::_0xEEED8FAFEC331A70(&(uLocal_443[1]), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
			func_197(&(uLocal_443[1]), 0);
			func_324();
			func_329(&(uLocal_443[1]), "GENERIC_FRIGHTENED_HIGH", -1408561526, 0, 1, 0, 0, 1);
			func_330(&(Local_15.f_162), 1, 1);
			func_39(&iLocal_779);
			func_42(&iLocal_538, &Local_559);
			if (func_27(&(uLocal_443[1]), 0, 0))
			{
				if (iLocal_786)
				{
					if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(&(uLocal_443[1])) == 1391706777)
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(uLocal_443[1]), 841021282);
						iLocal_786 = 0;
					}
				}
			}
			if (iLocal_805 == 1 && !ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_443[1]), "script_re@berry_gang", "exit_help_walk_girl", 1))
			{
				func_242(&(uLocal_443[1]), Global_35);
				func_331();
				if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, sLocal_844))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, sLocal_844, true);
				}
				if (bLocal_832 == 0)
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(22), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(112), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_620 = 1;
			}
			else
			{
				func_332(uLocal_443[1], &iLocal_538, &Local_559, 1, 1);
				func_35();
				iLocal_620 = 2;
			}
			break;
		case 1:
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_422, "LADY") || !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(&(uLocal_443[1]), Local_422))
			{
				if (MAP::DOES_BLIP_EXIST(&(iLocal_450[1])))
				{
					MAP::REMOVE_BLIP(iLocal_450[1]);
				}
				func_332(uLocal_443[1], &iLocal_538, &Local_559, 1, 1);
				func_35();
				iLocal_620 = 3;
			}
			break;
		case 2:
			if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_443[1]), true))
			{
				if (func_228(&(uLocal_443[1]), Global_35, func_180(22), 0.8f, 0))
				{
					iLocal_620 = 3;
				}
			}
			else
			{
				iLocal_620 = 3;
			}
			break;
		case 3:
			func_333();
			break;
	}
}

void func_100(var uParam0)
{
	if (uParam0->f_35)
	{
		return;
	}
	if (!uParam0->f_8)
	{
		return;
	}
	if (uParam0->f_14 && !uParam0->f_13)
	{
		if (func_334(Global_1935630->f_44) || uParam0->f_6)
		{
			if (func_335(uParam0->f_36))
			{
				func_330(&(uParam0->f_36), 1, 1);
				uParam0->f_13 = 1;
			}
		}
	}
	if (!func_291(&(uParam0->f_29)))
	{
		if (func_336(uParam0->f_28))
		{
			func_337(&(uParam0->f_29), 0);
		}
	}
	else if (uParam0->f_6 && !uParam0->f_1)
	{
		if (func_338(&(uParam0->f_29), 3f) && func_336(uParam0->f_28))
		{
			func_339(1);
			uParam0->f_35 = 1;
			if (!func_338(&(uParam0->f_29), 6f) && !uParam0->f_4)
			{
				func_340(609);
			}
		}
	}
}

void func_101()
{
	iLocal_738 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(792302887, &(uLocal_443[1]), 0f, 30f, 30f, 15f, -1082130432, 1127481344, 0, 0, -1, -1);
	func_281();
	Local_15.f_45 = 0;
	func_15(12);
}

void func_102()
{
	func_282();
	func_283();
	if (func_284(&Local_15, 1f, 80f, 65f, 1, 0, 0, -1082130432, 1, 1125515264, 0, 0) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_422, 0))
	{
		func_285(1515458263, ENTITY::GET_ENTITY_COORDS(&(uLocal_443[1]), true, false), 1);
		func_231(&(uLocal_443[1]), Global_35, func_180(4), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
		func_15(13);
	}
}

void func_103()
{
	func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
	func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
	func_282();
	func_283();
	if (!func_287() && iLocal_811 == 0)
	{
		func_288();
		func_289();
	}
	if (func_33(&(uLocal_443[1]), 1, 1) <= 5f)
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			func_15(14);
		}
		if (iLocal_778 == 2048)
		{
			func_15(14);
		}
	}
	if (iLocal_828 && func_230(-3f, 1, Global_35, 1))
	{
		func_15(14);
	}
	if (!func_291(&uLocal_678))
	{
		if (func_33(&(uLocal_443[1]), 1, 1) < 30f)
		{
			func_232(&uLocal_678);
		}
	}
	else if (func_292(&uLocal_678) >= 30f)
	{
		if ((iLocal_804 == 0 && func_230(1f, 1, 0, 0)) && func_230(-4f, 1, &(uLocal_443[1]), 1))
		{
			iLocal_811 = 1;
			func_15(14);
		}
	}
	if (PED::IS_PED_DEAD_OR_DYING(&(uLocal_443[1]), true))
	{
		func_30(2, 0, 0, "RE_HONOR_CRUEL_KILLING", &(uLocal_443[1]), 0, 1065353216, 0);
		func_15(17);
	}
	if (PED::_0x9682F850056C9ADE(&(uLocal_443[1])) || PED::IS_PED_HOGTIED(&(uLocal_443[1])))
	{
		func_15(14);
	}
}

void func_104()
{
	int iVar0;

	func_283();
	func_341();
	switch (iLocal_622)
	{
		case 0:
			if (MAP::DOES_BLIP_EXIST(&(iLocal_450[1])))
			{
				MAP::REMOVE_BLIP(iLocal_450[1]);
				func_342(&(uLocal_443[1]), iLocal_450[1], 831283580, 0, 0, 0);
			}
			func_232(&uLocal_723);
			func_197(&(uLocal_443[1]), 0);
			iLocal_623 = 13;
			PED::SET_PED_CONFIG_FLAG(&(uLocal_443[1]), 6, true);
			PED::SET_PED_CONFIG_FLAG(&(uLocal_443[2]), 6, true);
			PED::SET_PED_CONFIG_FLAG(&(uLocal_443[3]), 6, true);
			ENTITY::FREEZE_ENTITY_POSITION(&(uLocal_443[4]), false);
			ENTITY::FREEZE_ENTITY_POSITION(&(uLocal_443[5]), false);
			func_343();
			ENTITY::_0x203BEFFDBE12E96A(&(uLocal_443[4]), (Local_229[4 /*32*/])->f_6, (Local_229[4 /*32*/])->f_9, 1, 1, 1);
			ENTITY::_0x203BEFFDBE12E96A(&(uLocal_443[5]), (Local_229[5 /*32*/])->f_6, (Local_229[4 /*32*/])->f_9, 1, 1, 1);
			ENTITY::_0x9587913B9E772D29(&(uLocal_443[4]), 0);
			ENTITY::_0x9587913B9E772D29(&(uLocal_443[5]), 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(uLocal_443[1]), 1269650476);
			WEAPON::SET_CURRENT_PED_WEAPON(&(uLocal_443[1]), joaat("weapon_revolver_cattleman"), false, 0, false, false);
			PAD::DISABLE_CONTROL_ACTION(0, -1722177808, false);
			func_344();
			iLocal_622 = 1;
			break;
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0, -1722177808, false);
			if (func_33(&(uLocal_443[1]), 1, 1) <= 35f)
			{
				iLocal_738 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(-1215290486, &(uLocal_443[1]), 8000f, 40f, 40f, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1);
				if (func_230(0, 1, &(uLocal_443[1]), 1) || iLocal_826)
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_500);
					TASK::TASK_GO_TO_ENTITY(0, &(uLocal_443[1]), -1, 15f, 2f, 20f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_500);
					TASK::TASK_PERFORM_SEQUENCE(&(uLocal_443[2]), iLocal_500);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_501);
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, &(uLocal_443[2]), 3f, -3f, 0f, 2f, -1, 2f, 1, 1, 1, 1, 1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_501);
					TASK::TASK_PERFORM_SEQUENCE(&(uLocal_443[3]), iLocal_501);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
					func_242(&(uLocal_443[1]), Global_35);
					func_243();
					if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, sLocal_844))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, sLocal_844, true);
					}
					if (iLocal_811 == 1 && iLocal_826 == 0)
					{
						func_231(&(uLocal_443[1]), Global_35, func_180(140), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					func_192(&(uLocal_443[1]), uLocal_488[0], 0, 0);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(&(uLocal_443[1]), true);
					PED::SET_PED_LASSO_HOGTIE_FLAG(&(uLocal_443[1]), 0, 1);
					iLocal_622 = 3;
				}
			}
			else
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_500);
				TASK::TASK_GO_TO_ENTITY(0, &(uLocal_443[1]), -1, 15f, 2f, 20f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_500);
				TASK::TASK_PERFORM_SEQUENCE(&(uLocal_443[2]), iLocal_500);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_501);
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, &(uLocal_443[2]), 3f, -3f, 0f, 2f, -1, 2f, 1, 1, 1, 1, 1);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_501);
				TASK::TASK_PERFORM_SEQUENCE(&(uLocal_443[3]), iLocal_501);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
				func_242(&(uLocal_443[1]), &(uLocal_443[2]));
				func_243();
				if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, sLocal_844))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, sLocal_844, true);
				}
				func_192(&(uLocal_443[1]), uLocal_488[0], 0, 0);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(&(uLocal_443[1]), true);
				PED::SET_PED_LASSO_HOGTIE_FLAG(&(uLocal_443[1]), 0, 1);
				iLocal_899 = PED::CREATE_GROUP(0);
				PED::SET_PED_AS_GROUP_LEADER(&(uLocal_443[2]), iLocal_899, 0);
				PED::SET_PED_AS_GROUP_MEMBER(&(uLocal_443[3]), iLocal_899);
				PED::SET_PED_CONFIG_FLAG(&(uLocal_443[3]), 279, true);
				PAD::ENABLE_CONTROL_ACTION(0, -1722177808, true);
				iLocal_622 = 2;
			}
			break;
		case 3:
			PAD::DISABLE_CONTROL_ACTION(0, -1722177808, false);
			if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(&(uLocal_443[1]), Local_422) || ANIMSCENE::_0x005E6F28DD7ED58D(Local_422, "LADY"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(&(uLocal_443[1]), joaat("weapon_revolver_cattleman"), false, 0, false, false);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
				TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
				TASK::TASK_PERFORM_SEQUENCE(&(uLocal_443[1]), iLocal_783);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
				func_345();
				PAD::ENABLE_CONTROL_ACTION(0, -1722177808, true);
				iLocal_622 = 4;
			}
			break;
		case 2:
			if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(&(uLocal_443[1]), Local_422) || ANIMSCENE::_0x005E6F28DD7ED58D(Local_422, "LADY"))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, &(uLocal_443[2]), 0, -1082130432, -1082130432, -1082130432);
				TASK::TASK_PAUSE(0, 3000);
				TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_443[4]), -1, 0, 1f, 1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
				TASK::TASK_PERFORM_SEQUENCE(&(uLocal_443[1]), iLocal_783);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
				iLocal_622 = 8;
			}
			break;
		case 4:
			if (func_33(&(uLocal_443[1]), 1, 1) <= 30f)
			{
				func_26(&uLocal_508, 0);
				func_345();
				func_346(uLocal_443[1], 1, 1, 1, 1, 0, 0, 0);
				if (func_230(0f, 1, &(uLocal_443[1]), 1) && func_230(0f, 1, Global_35, 1))
				{
					func_347(610, 1);
					PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), &(uLocal_443[1]), 1, 0);
					PLAYER::_0xBED386157F65942C(PLAYER::PLAYER_ID(), 1);
					PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), func_180(169));
					iLocal_839 = 1;
					PED::SET_PED_RESET_FLAG(Global_35, 179, true);
					if (iLocal_826 == 0)
					{
						func_231(&(uLocal_443[1]), Global_35, func_180(141), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					vLocal_848 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
					func_237(&iLocal_538, 0);
					iLocal_860 = func_1(2, 0, 0);
					func_225(Local_559[1 /*17*/], 0, 0);
					func_225(Local_559[2 /*17*/], 0, 0);
					func_225(Local_559[0 /*17*/], 0, 0);
					iLocal_622 = 5;
				}
			}
			else
			{
				func_15(16);
			}
			break;
		case 5:
			PED::SET_PED_RESET_FLAG(Global_35, 179, true);
			if (func_33(&(uLocal_443[1]), 1, 1) > 20f)
			{
				if (iLocal_839 == 1)
				{
					PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
					PED::SET_PED_RESET_FLAG(Global_35, 179, false);
					iLocal_839 = 0;
				}
				func_15(16);
			}
			func_346(uLocal_443[1], 1, 1, 1, 1, 0, 0, 0);
			if (func_230(0f, 1, &(uLocal_443[1]), 1))
			{
				if (!func_291(&uLocal_681))
				{
					func_232(&uLocal_681);
					func_231(&(uLocal_443[2]), Global_35, func_180(80), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (func_292(&uLocal_681) >= 7f || func_348(vLocal_848, 1) >= 5f)
				{
					if (!PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
					{
						func_231(&(uLocal_443[1]), Global_35, func_180(25), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_826 = 1;
						PLAYER::RESET_PLAYER_ARREST_STATE(PLAYER::PLAYER_ID());
						PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), 0, 0, 0);
						iLocal_622 = 9;
					}
				}
			}
			if (PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
			{
				iLocal_860 = func_1(3, 0, 0);
				func_237(&iLocal_538, 0);
				func_232(&uLocal_708);
				PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
				iLocal_622 = 6;
			}
			break;
		case 6:
			PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
			func_346(uLocal_443[1], 0, 0, 1, 1, 0, 0, 0);
			if (func_292(&uLocal_708) >= 2f)
			{
				if (func_230(-4f, 1, &(uLocal_443[1]), 1))
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(132), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_233(&uLocal_708);
				}
			}
			if ((((PED::IS_PED_ON_MOUNT(Global_35) || func_80(Global_35, 501393341)) || func_80(Global_35, 1553520516)) || func_80(Global_35, 1920417248)) || PAD::IS_CONTROL_JUST_PRESSED(0, -874806616))
			{
			}
			else
			{
				if (func_349(&(uLocal_443[1]), &Local_861, 0.1f, 1, 0, 18, 0, 0, 0, 2000, 0, 0))
				{
					if (Local_861.f_4)
					{
						func_26(&uLocal_508, 1);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
						TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_443[4]), -1, 0, 3f, 1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
						TASK::TASK_PERFORM_SEQUENCE(&(uLocal_443[1]), iLocal_783);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
						iLocal_767 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(func_350(1)) * 0.1f));
						func_217(&(uLocal_443[1]), iLocal_767);
						iLocal_899 = PED::CREATE_GROUP(0);
						PED::SET_PED_AS_GROUP_LEADER(&(uLocal_443[2]), iLocal_899, 0);
						PED::SET_PED_AS_GROUP_MEMBER(&(uLocal_443[3]), iLocal_899);
						PED::SET_PED_CONFIG_FLAG(&(uLocal_443[3]), 279, true);
						PLAYER::RESET_PLAYER_ARREST_STATE(PLAYER::PLAYER_ID());
						PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), 0, 0, 0);
						iLocal_622 = 7;
					}
					else
					{
						iVar0 = 1;
					}
				}
				if ((((PLAYER::_0xDAB6A2FC56B7DE65(PLAYER::PLAYER_ID()) >= 0.8f || MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_861.f_25, true) >= 4f) || Local_861.f_1) || Local_861.f_5) || (iVar0 && !Local_861.f_4))
				{
					PLAYER::RESET_PLAYER_ARREST_STATE(PLAYER::PLAYER_ID());
					PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), 0, 0, 0);
					iLocal_826 = 1;
					func_231(Global_35, &(uLocal_443[1]), func_180(143), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_231(&(uLocal_443[1]), Global_35, func_180(25), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					iLocal_622 = 9;
				}
				Jump @3362; //curOff = 2528
				func_351();
				if (PED::IS_PED_ON_MOUNT(&(uLocal_443[1])))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_500);
					TASK::_TASK_SMART_FLEE_STYLE_COORD(0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 2, 64, -1f, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_500);
					TASK::TASK_PERFORM_SEQUENCE(&(uLocal_443[2]), iLocal_500);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_501);
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, &(uLocal_443[2]), 3f, -3f, 0f, 2f, -1, 2f, 1, 1, 1, 1, 1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_501);
					TASK::_TASK_PERFORM_SEQUENCE_2(&(uLocal_443[3]), iLocal_501, 0.8f, 0.8f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
					iLocal_622 = 10;
				}
				Jump @3362; //curOff = 2695
				func_351();
				if (iLocal_839 == 1)
				{
					PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
					PED::SET_PED_RESET_FLAG(Global_35, 179, false);
					iLocal_839 = 0;
				}
				if ((func_33(&(uLocal_443[2]), 1, 1) <= 25f || func_33(&(uLocal_443[3]), 1, 1) <= 25f) || func_33(&(uLocal_443[1]), 1, 1) <= 25f)
				{
					func_286(&(uLocal_443[2]), Global_35, &uLocal_513, 3000, 25, 0);
					func_286(&(uLocal_443[3]), Global_35, &uLocal_513, 3000, 25, 0);
					func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 3000, 25, 0);
				}
				if (func_352() && ((func_79(&(uLocal_443[2]), vLocal_469, 1) >= 40f && func_79(&(uLocal_443[3]), vLocal_469, 1) >= 40f) && func_79(&(uLocal_443[1]), vLocal_469, 1) >= 40f))
				{
					func_231(&(uLocal_443[2]), &(uLocal_443[1]), func_180(114), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					iLocal_826 = 1;
					func_15(16);
				}
				Jump @3362; //curOff = 3008
				PED::SET_PED_RESET_FLAG(&(uLocal_443[1]), 27, true);
				if (iLocal_839 == 1)
				{
					PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
					PED::SET_PED_RESET_FLAG(Global_35, 179, false);
					iLocal_839 = 0;
				}
				if ((func_230(-4f, 1, &(uLocal_443[1]), 1) && func_230(-4f, 1, &(uLocal_443[2]), 1)) && func_230(-4f, 1, &(uLocal_443[3]), 1))
				{
					func_15(16);
				}
				Jump @3362; //curOff = 3124
				func_286(&(uLocal_443[1]), &(uLocal_443[2]), &uLocal_513, -1, 15, 0);
				func_286(&(uLocal_443[2]), &(uLocal_443[1]), &uLocal_513, -1, 15, 0);
				func_286(&(uLocal_443[3]), &(uLocal_443[1]), &uLocal_513, -1, 15, 0);
				if (PED::IS_PED_ON_MOUNT(&(uLocal_443[1])))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_500);
					TASK::_TASK_SMART_FLEE_STYLE_COORD(0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 2, 64, -1f, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_500);
					TASK::TASK_PERFORM_SEQUENCE(&(uLocal_443[2]), iLocal_500);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_501);
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, &(uLocal_443[2]), 3f, -3f, 0f, 2f, -1, 2f, 1, 1, 1, 1, 1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_501);
					TASK::_TASK_PERFORM_SEQUENCE_2(&(uLocal_443[3]), iLocal_501, 0.8f, 0.8f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
					iLocal_622 = 11;
				}
			}
		}

void func_105()
{
	vector3 vVar0;

	func_283();
	switch (iLocal_621)
	{
		case 0:
			if (MAP::DOES_BLIP_EXIST(&(iLocal_450[1])))
			{
				MAP::REMOVE_BLIP(iLocal_450[1]);
			}
			func_197(&(uLocal_443[1]), 0);
			func_237(&iLocal_538, 0);
			iLocal_860 = func_1(3, 0, 0);
			func_225(Local_559[1 /*17*/], 0, 0);
			func_225(Local_559[2 /*17*/], 0, 0);
			func_225(Local_559[0 /*17*/], 0, 0);
			func_238(Local_559[1 /*17*/], "RE_INTER_POS");
			func_238(Local_559[2 /*17*/], "RE_INTER_ANTAGONIZE");
			func_238(Local_559[0 /*17*/], "INTERACT_ROB");
			ENTITY::FREEZE_ENTITY_POSITION(&(uLocal_443[4]), false);
			ENTITY::FREEZE_ENTITY_POSITION(&(uLocal_443[5]), false);
			func_343();
			ENTITY::_0x203BEFFDBE12E96A(&(uLocal_443[4]), (Local_229[4 /*32*/])->f_6, (Local_229[4 /*32*/])->f_9, 1, 1, 0);
			ENTITY::_0x203BEFFDBE12E96A(&(uLocal_443[5]), (Local_229[5 /*32*/])->f_6, (Local_229[4 /*32*/])->f_9, 1, 1, 0);
			ENTITY::_0x9587913B9E772D29(&(uLocal_443[4]), 0);
			ENTITY::_0x9587913B9E772D29(&(uLocal_443[5]), 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(uLocal_443[1]), 1269650476);
			func_192(&(uLocal_443[1]), uLocal_488[0], 0, 0);
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(&(uLocal_443[1]), true, false), ENTITY::GET_ENTITY_HEADING(&(uLocal_443[1])), 0f, -7f, 0f) };
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_500);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, vVar0, Global_35, 3f, 0, 20f, 1082130432, 1, 1048580, 0, -687903391, -1, 0);
			TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_500);
			TASK::TASK_PERFORM_SEQUENCE(&(uLocal_443[2]), iLocal_500);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_501);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, vVar0, Global_35, 3f, 0, 20f, 1082130432, 1, 1048580, 0, -687903391, -1, 0);
			TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_501);
			TASK::TASK_PERFORM_SEQUENCE(&(uLocal_443[3]), iLocal_501);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
			iLocal_621 = 1;
			break;
		case 1:
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_422, "LADY") || !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(&(uLocal_443[1]), Local_422))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
				TASK::TASK_PERFORM_SEQUENCE(&(uLocal_443[1]), iLocal_783);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
				iLocal_621 = 2;
			}
			if (ENTITY::IS_ENTITY_DEAD(&(uLocal_443[1])))
			{
				iLocal_621 = 2;
			}
			break;
		case 2:
			func_15(16);
			iLocal_621 = 3;
			break;
		case 3:
			break;
	}
}

void func_106()
{
	int iVar0;
	int iVar1;

	func_286(&(uLocal_443[1]), Global_35, &uLocal_513, -1, 15, 0);
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, &(Local_457[0 /*2*/]), (Local_457[0 /*2*/])->f_1, 1))
	{
		TASK::STOP_ANIM_TASK(Global_35, &(Local_457[0 /*2*/]), (Local_457[0 /*2*/])->f_1, -1.5f);
		TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
	}
	func_26(&uLocal_508, 1);
	switch (iLocal_619)
	{
		case 0:
			if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_443[2]), true))
			{
				if (!MAP::DOES_BLIP_EXIST(&(iLocal_450[2])))
				{
					iLocal_450[2] = MAP::BLIP_ADD_FOR_ENTITY(831283580, &(uLocal_443[2]));
				}
			}
			if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_443[3]), true))
			{
				if (!MAP::DOES_BLIP_EXIST(&(iLocal_450[3])))
				{
					iLocal_450[3] = MAP::BLIP_ADD_FOR_ENTITY(831283580, &(uLocal_443[3]));
				}
			}
			func_237(&iLocal_538, 0);
			iLocal_860 = func_1(3, 0, 0);
			func_225(Local_559[1 /*17*/], 0, 0);
			func_225(Local_559[2 /*17*/], 0, 0);
			func_225(Local_559[0 /*17*/], 0, 0);
			func_238(Local_559[1 /*17*/], "RE_INTER_POS");
			func_238(Local_559[2 /*17*/], "RE_INTER_ANTAGONIZE");
			func_238(Local_559[0 /*17*/], "INTERACT_ROB");
			func_197(&(uLocal_443[1]), 0);
			func_192(&(uLocal_443[1]), uLocal_488[0], 0, 0);
			func_39(iLocal_450[1]);
			iLocal_450[1] = MAP::BLIP_ADD_FOR_ENTITY(831283580, &(uLocal_443[1]));
			PLAYER::RESET_PLAYER_ARREST_STATE(PLAYER::PLAYER_ID());
			PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), 0, 0, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(uLocal_443[1]), 1269650476);
			PED::_0xD8736EFDA38EDC5C(&(uLocal_443[1]), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3f);
			WEAPON::SET_CURRENT_PED_WEAPON(&(uLocal_443[1]), joaat("weapon_revolver_cattleman"), false, 0, false, false);
			iLocal_619 = 1;
			break;
		case 1:
			if (func_27(&(uLocal_443[1]), 0, 1))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
				TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
				TASK::TASK_PERFORM_SEQUENCE(&(uLocal_443[1]), iLocal_783);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
			}
			if (func_27(&(uLocal_443[2]), 0, 1))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_500);
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_500);
				TASK::_TASK_PERFORM_SEQUENCE_2(&(uLocal_443[2]), iLocal_500, 0.5f, 0.5f);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
			}
			if (func_27(&(uLocal_443[3]), 0, 1))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_501);
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_501);
				TASK::_TASK_PERFORM_SEQUENCE_2(&(uLocal_443[3]), iLocal_501, 1f, 1f);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
			}
			iLocal_619 = 2;
			break;
		case 2:
			if (PED::IS_PED_DEAD_OR_DYING(&(uLocal_443[1]), true))
			{
				func_353();
			}
			if (PED::IS_PED_DEAD_OR_DYING(&(uLocal_443[2]), true) && PED::IS_PED_DEAD_OR_DYING(&(uLocal_443[3]), true))
			{
				if ((PED::IS_PED_HOGTIED(&(uLocal_443[1])) && !PED::IS_PED_RAGDOLL(&(uLocal_443[1]))) && !PED::_0x42429C674B61238B(Global_35))
				{
					func_354();
				}
			}
			func_355();
			func_356();
			if (func_357(&(uLocal_443[1])))
			{
				if (iLocal_834 == 0)
				{
					iVar0 = PED::GET_MOUNT(&(uLocal_443[1]));
					if (!PED::IS_PED_DEAD_OR_DYING(iVar0, true))
					{
						iVar1 = PED::_0xB676EFDA03DADA52(iVar0, 0);
						if ((iVar1 == 0 || PED::_IS_MOUNT_SEAT_FREE(iVar0, -1)) || iVar1 == Global_35)
						{
							iLocal_834 = 1;
							TASK::CLEAR_PED_TASKS(&(uLocal_443[1]), 1, 0);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
							TASK::TASK_DISMOUNT_ANIMAL(0, 4096, 0, 0, 0, 0);
							TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
							TASK::TASK_PERFORM_SEQUENCE(&(uLocal_443[1]), iLocal_783);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
						}
					}
				}
			}
			if (PED::IS_PED_DEAD_OR_DYING(&(uLocal_443[2]), true) || PED::IS_PED_HOGTIED(&(uLocal_443[2])))
			{
				if (!PED::IS_PED_INJURED(&(uLocal_443[4])))
				{
					if (PED::_0xB676EFDA03DADA52(&(uLocal_443[4]), 0) == 0)
					{
						if (PED::IS_PED_FLEEING(&(uLocal_443[4])) == 0)
						{
							TASK::TASK_SMART_FLEE_PED(&(uLocal_443[4]), Global_35, 9999f, -1, 0, 3f, 0);
						}
					}
					else if (PED::IS_PED_FLEEING(&(uLocal_443[4])))
					{
						TASK::CLEAR_PED_TASKS(&(uLocal_443[4]), 1, 0);
					}
				}
			}
			if (PED::IS_PED_DEAD_OR_DYING(&(uLocal_443[3]), true) || PED::IS_PED_HOGTIED(&(uLocal_443[3])))
			{
				if (!PED::IS_PED_INJURED(&(uLocal_443[5])))
				{
					if (PED::_0xB676EFDA03DADA52(&(uLocal_443[5]), 0) == 0)
					{
						if (PED::IS_PED_FLEEING(&(uLocal_443[5])) == 0)
						{
							TASK::TASK_SMART_FLEE_PED(&(uLocal_443[5]), Global_35, 9999f, -1, 0, 3f, 0);
						}
					}
					else if (PED::IS_PED_FLEEING(&(uLocal_443[5])))
					{
						TASK::CLEAR_PED_TASKS(&(uLocal_443[5]), 1, 0);
					}
				}
			}
			if (func_358())
			{
				func_15(18);
			}
			break;
	}
}

int func_107()
{
	if (!func_359(Global_1395482->f_1))
	{
		return 0;
	}
	return func_360(Global_1395482->f_1, 32);
}

bool func_108(int iParam0)
{
	if (func_48(iParam0, 1))
	{
		return false;
	}
	return (1 == func_361(iParam0) || 2 == func_361(iParam0));
}

float func_109(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_110(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_362(&(uParam0->f_1), 16384);
	}
	else
	{
		func_84(&(uParam0->f_1), 16384);
	}
}

void func_111(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_362(&(uParam0->f_1), 2048);
	}
	else
	{
		func_84(&(uParam0->f_1), 2048);
	}
}

void func_112(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_362(&(uParam0->f_1), 256);
	}
	else
	{
		func_84(&(uParam0->f_1), 256);
	}
}

void func_113(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_84(uParam0, 16);
	}
	else
	{
		func_362(uParam0, 67108864);
		func_362(uParam0, 16);
	}
}

void func_114(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_362(&(uParam0->f_1), 128);
	}
	else
	{
		func_84(&(uParam0->f_1), 128);
	}
}

void func_115(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_84(uParam0, 256);
	}
	else
	{
		func_362(uParam0, 256);
	}
}

void func_116(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_84(uParam0, 268435456);
	}
	else
	{
		func_362(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_84(uParam0, 1073741824);
	}
	else
	{
		func_362(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_84(uParam0, 536870912);
	}
	else
	{
		func_362(uParam0, 536870912);
	}
}

var func_117(char* sParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_118(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return MISC::_CREATE_VAR_STRING(2, func_363(sParam1));
}

void func_119(bool bParam0)
{
	Global_1935496->f_15 = !bParam0;
}

int func_120(int iParam0, int iParam1)
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
	if (func_188(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_188(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_188(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_188(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_188(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_188(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return 0;
		}
	}
	if (func_188(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_188(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_121(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

int func_122()
{
	return Global_1572887->f_12;
}

int func_123(int iParam0)
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

int func_124(int iParam0)
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

void func_125(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
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

	iVar0 = func_364();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_365(iParam0);
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
	if (func_366(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_367())
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
	Global_40.f_11095.f_35 = func_368(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_364();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_369(iVar1);
		func_371(func_370(), 0, 4000);
		func_372(Global_40.f_11095.f_35);
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
		func_373(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_375(func_374(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_124(14))
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
					sParam4 = func_376(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_377(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_377(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_375(func_374(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_124(4))
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
					sParam4 = func_376(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_377(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_377(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_374(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_378(10, 1);
	}
}

void func_126(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

float func_127(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_128(bool bParam0)
{
	func_332(uLocal_443[1], &iLocal_538, &Local_559, 1, 1);
	func_43(&(uLocal_443[1]), 1, 1);
	PLAYER::MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), &(uLocal_443[1]), 7, 0, 1);
	PLAYER::MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), &(uLocal_443[1]), 20, 0, 1);
	PLAYER::MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), &(uLocal_443[1]), 19, 0, 1);
	PLAYER::MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), &(uLocal_443[1]), 3, 1, 0);
	PLAYER::MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), &(uLocal_443[1]), 4, 1, 0);
	PLAYER::MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), &(uLocal_443[1]), 3, 2, bParam0);
	PLAYER::MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), &(uLocal_443[1]), 4, 2, !bParam0);
	bLocal_505 = true;
	PED::_0xE737D5F14304A2EC(&(uLocal_443[1]), PLAYER::GET_PLAYER_INDEX(), 120000);
	if (bParam0)
	{
		PED::SET_PED_CONFIG_FLAG(&(uLocal_443[1]), 330, false);
	}
}

char* func_129(int iParam0)
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

void func_130(int iParam0, int iParam1)
{
	if (!func_23(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 || iParam1);
}

void func_131(int iParam0, bool bParam1)
{
	if (func_27(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		func_379(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

int func_132(var uParam0, var uParam1)
{
	if (func_48(uParam0->f_3, 16777216))
	{
		if (func_380(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("g_m_m_unibrontegoons_01"))
		{
			return 1;
		}
	}
	return 0;
}

float func_133(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_134(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (!Global_1935630->f_12 && (!bParam4 || func_27(iParam0, 0, 1)))
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
			fVar2 = func_133(fParam2 >= 0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				func_381(&iParam0);
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

void func_135(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_171))
	{
		func_382(uParam0->f_171);
		POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_171);
		POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_383(uParam0);
	func_384(uParam0);
	func_385(uParam0);
	if (!func_386(uParam0))
	{
		if (VOLUME::IS_VOLUME_LOCK_REQUEST_VALID_2(uParam0->f_51.f_11))
		{
			VOLUME::RELEASE_LOCK_VOLUME(uParam0->f_51.f_11);
		}
		func_276(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_387();
	}
	if (!func_388(uParam0->f_3) && !func_48(uParam0->f_3, 256))
	{
		func_389(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_390(uParam0->f_173);
	func_390(uParam0->f_172);
}

void func_136(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_181));
	}
}

int func_137(int iParam0, int iParam1)
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

void func_138(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_122() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_139(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_140(int iParam0, int iParam1)
{
	iParam0 = func_139(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_24 = (((*Global_1900383)[iParam0 /*45*/])->f_24 - (((*Global_1900383)[iParam0 /*45*/])->f_24 && iParam1));
}

void func_141()
{
	if (func_391(0))
	{
		func_392(0);
	}
	if (func_391(1))
	{
		func_392(1);
	}
	if (func_391(5))
	{
		func_392(5);
	}
	if (func_391(6))
	{
		func_393(6);
	}
}

void func_142(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_394(vVar0, vVar3, 0f) };
	vVar9 = { func_395(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

void func_143(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_394(vVar0, vVar3, 0f) };
	vVar9 = { func_395(vVar0, vVar3, 0f) };
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

void func_144(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_330(&(((*uParam1)[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_237(iParam0, 0);
		}
	}
}

void func_145(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_335(((*uParam0)[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_330(&(((*uParam0)[iVar0 /*17*/])->f_6), 1, 1);
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

int func_146(int iParam0)
{
	if (((func_147(iParam0, 1) && func_147(iParam0, 2)) && func_147(iParam0, 8)) && func_147(iParam0, 512))
	{
		return 1;
	}
	return 0;
}

bool func_147(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

Vector3 func_148(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_23(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_396(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_397(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *(Global_1310750->f_13358[iVar0 /*3*/]);
}

void func_149(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	if (func_48(iParam0, 32))
	{
		if (func_398(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_399(Global_35, &(uParam1->f_12)) };
				if (!func_153(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_400(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_277(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_278());
		if (func_401(Global_1310750[iParam0 /*111*/], 33554432))
		{
			func_280(iVar0, func_279(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_280(iVar0, func_279(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_48(iParam0, 1))
		{
			func_402(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_403(iParam0);
}

int func_150(int iParam0, var uParam1)
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
			func_404(uParam1, *(((*Global_1310750)[iParam0 /*111*/])->f_4.f_4[iVar0 /*3*/]));
		}
		iVar0++;
	}
	if (func_85(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180f);
		fVar2 = BUILTIN::TO_FLOAT(func_405(iParam0));
		fVar1 = 60f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65f);
		fVar2 = BUILTIN::TO_FLOAT(func_405(iParam0));
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

void func_151(int iParam0, float fParam1, float fParam2, var uParam3, bool bParam4)
{
	switch (func_406(iParam0))
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
			if (!func_48(iParam0, 1))
			{
				if (func_85(iParam0, 2))
				{
				}
			}
			func_407(fParam1, fParam2, uParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		case 2:
			func_408(fParam1, fParam2, uParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		case 3:
			func_408(fParam1, fParam2, uParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		default:
			break;
	}
	if (func_108(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_152(int iParam0, int iParam1, float fParam2, float fParam3)
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
	while (iVar0 < func_396(iParam1))
	{
		if (!func_409(iParam1, iVar0))
		{
			vVar4 = { func_148(iParam1, iVar0) };
			if (!func_153(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (func_158(fVar8, iParam1))
				{
					*iParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_410(iParam1, vVar4, fParam2, fParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_153(vVar4))
	{
	}
	return vVar1;
}

int func_153(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_154(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
			func_22("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_155(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_396(iParam0))
	{
		vVar1 = { func_148(iParam0, iVar0) };
		if (func_411(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_156(var uParam0)
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

int func_157(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	vVar2 = { *uParam0 };
	func_412(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_413(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_153(*(uParam0->f_12[iVar0 /*3*/])))
			{
				vVar5 = { *(uParam0->f_12[iVar0 /*3*/]) };
				vVar8 = { MISC::_0x83ACC65D9ACEC5EF(Global_36, vVar2, vVar5, true) };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35f * 35f) || BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar0 /*3*/])) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_414(uParam0);
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
	return func_154(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

int func_158(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	fVar3 = (fParam0 * fParam0);
	func_151(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return 0;
	}
	if (func_48(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return 0;
		}
	}
	return 1;
}

int func_159(var uParam0, var uParam1)
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

int func_160(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_415(iParam0, *uParam2))
	{
		return 0;
	}
	if (!func_416(iParam0, uParam2))
	{
		return 0;
	}
	if (!func_417(Param3))
	{
		return 0;
	}
	if (bParam10)
	{
		if (!func_418(*uParam2, Global_35))
		{
			return 0;
		}
	}
	return 1;
}

int func_161(var uParam0)
{
	return uParam0->f_51.f_4;
}

int func_162(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 106:
			switch (iParam1)
			{
				case 1:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -771.7f, -1343.6f, 43.9f, 0f, 0f, 0f, 95f, 140f, 50f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -852.4f, -1349.5f, 45f, 5f, 0f, 0f, 70f, 130f, 50f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -907.6f, -1362.1f, 49f, 0f, 0f, 0f, 50f, 100f, 50f);
					return 1;
				case 2:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -270.606f, 827.282f, 118.4249f, 0f, 0f, 11.275f, 80f, 100.4f, 86.6f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -235.442f, 653.1498f, 112.3099f, 0f, 0f, 49.575f, 44.4f, 76.775f, 50f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -236.9004f, 797.5648f, 121.6383f, 0f, 0f, 17.55f, 53.975f, 105.5f, 20f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -339.8f, 829.675f, 100f, 0f, 0f, 14.975f, 25f, 75f, 50f);
					return 1;
			}
			break;
	}
	return 0;
}

void func_163(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_164(int iParam0, int iParam1)
{
	if (func_419(iParam0))
	{
		return;
	}
	if (func_420(iParam0) == iParam1)
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

void func_165(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_362(&iParam1, 8192);
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

int func_166(int iParam0)
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

bool func_167(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_168(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_169(int iParam0)
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

int func_170(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_421(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_422(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_422(), iVar3);
		if (func_423(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_171(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return (func_424(iParam0) % iParam1);
	}
	return (func_425(iParam0) % iParam1);
}

void func_172(char* sParam0, var uParam1)
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

int func_173(int iParam0, int iParam1)
{
	return func_426(CLOCK::GET_CLOCK_HOURS(), iParam0, iParam1);
}

void func_174(int iParam0, int iParam1)
{
	func_427(iParam0, iParam1);
}

void func_175(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_121(iParam0))
	{
		*iParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_121(iParam0))
		{
		}
	}
}

void func_176(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*12*/])->f_7 != 0)
		{
			STREAMING::REQUEST_MODEL(((*uParam0)[iVar0 /*12*/])->f_7, false);
		}
		iVar0++;
	}
}

int func_177()
{
	return Global_1897952->f_41;
}

var func_178(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 997958153:
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(1468170991, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		case 918497150:
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(-62570976, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		case 356361174:
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(-165971473, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		case -1771663379:
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(-2049218219, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		case -311956671:
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(989061023, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		default:
			break;
	}
	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(1468170991, 0, -1190799868, 1, 0, 0f, 0f, 0f);
}

void func_179(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_428(&(((*uParam0)[iVar0 /*32*/])->f_1));
		func_428(&(((*uParam0)[iVar0 /*32*/])->f_12));
		iVar0++;
	}
}

char* func_180(int iParam0)
{
	if (iLocal_14 == 0)
	{
		switch (iParam0)
		{
			case 35:
				if (iLocal_512 == 6 || iLocal_512 == 7)
				{
					return "RE_TWO_MTN_V1_ASK_HOME_F";
				}
				if (Local_15.f_51.f_4 == 3)
				{
					return "RE_TWO_MTN_V1_ASK_HOME_G";
				}
				if (iLocal_512 == 9)
				{
					return "RE_TWO_MTN_V1_ASK_HOME_G";
				}
				if (iLocal_512 == 11)
				{
					return "RE_TWO_SCL_V1_ASK_HOME_STD";
				}
				break;
		}
		if ((iLocal_512 == 6 || iLocal_512 == 7) || iLocal_512 == 9)
		{
			switch (iParam0)
			{
				case 0:
					return "RE_TWO_MTN_V1_CALLOUT_IDLE_A";
				case 1:
					return "RE_TWO_MTN_V1_CALLOUT_IDLE_B";
				case 2:
					return "RE_TWO_MTN_V1_TRAPPED";
				case 3:
					return "RE_TWO_MTN_V1_MY_LEG";
				case 4:
					return "RE_TWO_MTN_V1_HELP_ME";
				case 5:
					return "RE_TWO_MTN_V1_CALL";
				case 6:
					return "RE_TWO_MTN_V1_HANG_AROUND_A";
				case 7:
					return "RE_TWO_MTN_V1_HANG_AROUND_B";
				case 8:
					return "RE_TWO_MTN_V1_HANG_AROUND_C";
				case 12:
					return "RE_TWO_MTN_V1_THANKS";
				case 13:
					return "RE_TWO_MTN_V1_STUCK_A";
				case 14:
					return "RE_TWO_MTN_V1_MOSES";
				case 15:
					return "RE_TWO_MTN_V1_MOSESTHANKS";
				case 16:
					return "RE_TWO_MTN_V1_AIM";
				case 17:
					return "GUN";
				case 18:
					return "PLEAD";
				case 19:
					return "PLEAD";
				case 20:
					return "RE_TWO_MTN_V1_SHOOTING";
				case 21:
					return "RE_TWO_MTN_V1_DYNAMITE";
				case 22:
					return "RE_TWO_MTN_V1_AGGRO";
				case 24:
					return "CUT_THAT_OUT";
				case 26:
					return "RE_TWO_MTN_V1_ASK_HOME_A";
				case 27:
					return "RE_TWO_MTN_V1_ASK_HOME_B";
				case 28:
					return "RE_TWO_MTN_V1_ASK_HOME_A";
				case 29:
					return "RE_TWO_MTN_V1_ASK_HOME_B";
				case 30:
					return "RE_TWO_MTN_V1_ASK_HOME_A";
				case 31:
					return "RE_TWO_MTN_V1_ASK_HOME_B";
				case 32:
					return "RE_TWO_MTN_V1_ASK_HOME_C";
				case 33:
					return "RE_TWO_MTN_V1_ASK_HOME_D";
				case 34:
					return "RE_TWO_MTN_V1_ASK_HOME_E";
				case 36:
					return "RE_TWO_MTN_V1_ASK_HOME_I";
				case 39:
					return "RE_TWO_MTN_V1_TAKE_HOME_A";
				case 40:
					return "RE_TWO_MTN_V1_TAKE_HOME_B";
				case 41:
					return "RE_TWO_MTN_V1_TAKE_HOME_C";
				case 55:
					return "RE_TWO_MTN_V1_TAKE_HOME_PLY_INT_A";
				case 42:
					return "RE_TWO_MTN_V1_TAKE_HOME_D";
				case 43:
					return "RE_TWO_MTN_V1_TAKE_HOME_E";
				case 58:
					return "RE_TWO_MTN_V1_TAKE_HOME_F";
				case 45:
					return "RE_TWO_MTN_V1_TAKE_HOME_G";
				case 59:
					return "RE_TWO_MTN_V1_TAKE_HOME_WEALTHYMEN_A";
				case 47:
					return "RE_TWO_MTN_V1_TAKE_HOME_H";
				case 61:
					return "RE_TWO_MTN_V1_TAKE_HOME_WEALTHYMEN_B";
				case 48:
					return "RE_TWO_MTN_V1_TAKE_HOME_I";
				case 62:
					return "RE_TWO_MTN_V1_TAKE_HOME_PLY_INT_V";
				case 49:
					return "RE_TWO_MTN_V1_TAKE_HOME_J";
				case 50:
					return "RE_TWO_MTN_V1_ARRIVED_HOME_CLOSE";
				case 63:
					return "RE_TWO_MTN_V1_ARRIVED_HOME_A";
				case 64:
					return "RE_TWO_MTN_V1_ARRIVED_HOME_B";
				case 65:
					return "RE_TWO_MTN_V1_ARRIVED_HOME_C";
				case 66:
					return "RE_TWO_MTN_V1_ARRIVED_HOME_REWARD";
				case 98:
					return "RE_TWO_MTN_V1_WRONG_WAY_A";
				case 99:
					return "RE_TWO_MTN_V1_WRONG_WAY_B";
				case 100:
					return "RE_TWO_MTN_V1_WRONG_WAY_C";
				case 101:
					return "RE_TWO_MTN_V1_TOO_LONG_A";
				case 102:
					return "RE_TWO_MTN_V1_TOO_LONG_B";
				case 103:
					return "RE_TWO_MTN_V1_TOO_LONG_C";
				case 104:
					return "RE_TWO_MTN_V1_STATIONARY_A";
				case 105:
					return "RE_TWO_MTN_V1_STATIONARY_B";
				case 106:
					return "RE_TWO_MTN_V1_STATIONARY_C";
				case 107:
					return "RE_TWO_MTN_V1_WOMAN_LEAVING_A";
				case 108:
					return "RE_TWO_MTN_V1_WRONG_TOWN_A";
				case 109:
					return "RE_TWO_MTN_V1_TAKE_HOME_JUMP";
				case 110:
					return "RE_TWO_MTN_V1_TAKE_HOME_OFFHORSE";
				case 111:
					return "RE_TWO_MTN_V1_TOOFAST";
				case 112:
					return "GENERIC_SHOCKED_HIGH";
				case 113:
					return "SCARED_HELP";
				case 67:
					return "RE_TWO_MTN_V1_ILO_PLAYER_POS_A";
				case 68:
					return "RE_TWO_MTN_V1_ILO_PLAYER_NEG_A";
				case 69:
					return "RE_TWO_MTN_V1_ILO_PLAYER_NEG_B";
				case 70:
					return "RE_TWO_MTN_V1_ILO_PED_NEG_B";
				case 74:
					return "RE_TWO_MTN_V1_ILO_PLAYER_POS_C";
				case 75:
					return "RE_TWO_MTN_V1_ILO_PLAYER_NEG_C";
				case 78:
					return "RE_TWO_MTN_V1_ILO_PLAYER_NEG_C_CONT";
				case 81:
					return "RE_TWO_MTN_V1_ILO_PLAYER_NEG_D_CONT";
				case 87:
					return "RE_TWO_MTN_V1_ILO_PLAYER_POS_E";
				case 88:
					return "RE_TWO_MTN_V1_ILO_PLAYER_NEG_E";
				case 83:
					return "RE_TWO_MTN_V1_PLAYER_RESPONSE_A";
				case 84:
					return "RE_TWO_MTN_V1_PLAYER_RESPONSE_B";
				case 71:
					return "RE_TWO_MTN_V1_ILO_PED_POS_A";
				case 72:
					return "RE_TWO_MTN_V1_ILO_PED_NEG_A";
				case 73:
					return "RE_TWO_MTN_V1_ILO_AGREE_A";
				case 76:
					return "RE_TWO_MTN_V1_ILO_PED_POS_C";
				case 77:
					return "RE_TWO_MTN_V1_ILO_PED_NEG_C";
				case 79:
					return "RE_TWO_MTN_V1_ILO_PED_NEG_C_CONT";
				case 82:
					return "RE_TWO_MTN_V1_ILO_PED_NEG_D_CONT";
				case 85:
					return "RE_TWO_MTN_V1_ILO_PLAYER_POS_D";
				case 86:
					return "RE_TWO_MTN_V1_ILO_PED_POS_D";
				case 89:
					return "RE_TWO_MTN_V1_ILO_PED_POS_E";
				case 90:
					return "RE_TWO_MTN_V1_ILO_PED_NEG_E";
				case 91:
					return "RE_TWO_MTN_V1_TIMEOUT_A";
				case 92:
					return "RE_TWO_MTN_V1_TIMEOUT_B";
				case 93:
					return "RE_TWO_MTN_V1_CANCEL_HELP_A";
				case 94:
					return "RE_TWO_MTN_V1_CANCEL_HELP_B";
				case 95:
					return "RE_TWO_MTN_V1_CANCEL_HELP_C";
				case 96:
					return "RE_TWO_MTN_V1_MOAN_B";
				case 97:
					return "RE_TWO_MTN_V1_MOAN_C";
				case 145:
					return "RE_TWO_MTN_V1_ANIMAL_ON_HORSE_A";
				case 146:
					return "RE_TWO_MTN_V1_HELP_YES_START";
				case 147:
					return "RE_TWO_MTN_V1_HELP_YES_RISING";
				case 148:
					return "RE_TWO_MTN_V1_SEGUE";
				case 149:
					return "RE_TWO_MTN_V1_SEGUE";
				case 163:
					return "RE_TWO_MTN_V1_LIFT_GRUNT";
				case 164:
					return "RE_TWO_MTN_V1_THANKS_RSP";
				case 165:
					return "RE_TWO_MTN_V1_MOAN_A";
				case 166:
					return "RE_TWO_MTN_V1_MOAN_B";
				case 167:
					return "RE_TWO_MTN_V1_MOAN_C";
				case 168:
					return "STORM_OFF";
				default:
					break;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					return "RE_TWO_SCL_V1_CALLOUT_IDLE_A";
				case 1:
					return "RE_TWO_SCL_V1_CALLOUT_IDLE_B";
				case 2:
					return "RE_TWO_SCL_V1_TRAPPED";
				case 3:
					return "RE_TWO_SCL_V1_MY_LEG";
				case 4:
					return "RE_TWO_SCL_V1_HELP_ME";
				case 5:
					return "RE_TWO_SCL_V1_CALL";
				case 6:
					return "RE_TWO_SCL_V1_HANG_AROUND_A";
				case 7:
					return "RE_TWO_SCL_V1_HANG_AROUND_B";
				case 8:
					return "RE_TWO_SCL_V1_HANG_AROUND_C";
				case 12:
					return "RE_TWO_SCL_V1_THANKS";
				case 13:
					return "RE_TWO_SCL_V1_STUCK_A";
				case 14:
					return "RE_TWO_SCL_V1_MOSES";
				case 23:
					return "RE_TWO_SCL_V1_SOB";
				case 16:
					return "RE_TWO_SCL_V1_AIM";
				case 17:
					return "RE_TWO_SCL_V1_AIM_CONT";
				case 18:
					return "RE_TWO_SCL_V1_AIM_CONT";
				case 19:
					return "RE_TWO_SCL_V1_AIM_CONT";
				case 20:
					return "RE_TWO_SCL_V1_SHOOTING";
				case 21:
					return "RE_TWO_SCL_V1_DYNAMITE";
				case 22:
					return "RE_TWO_SCL_V1_TAKE_HOME_AGGRO";
				case 24:
					return "DONT_BE_STUPID";
				case 26:
					return "RE_TWO_SCL_V1_ASK_HOME_A";
				case 27:
					return "RE_TWO_SCL_V1_ASK_HOME_B";
				case 28:
					return "RE_TWO_SCL_V1_ASK_HOME_SICK_A";
				case 29:
					return "RE_TWO_SCL_V1_ASK_HOME_SICK_B";
				case 30:
					return "RE_TWO_SCL_V1_ASK_HOME_POSSE_A";
				case 31:
					return "RE_TWO_SCL_V1_ASK_HOME_POSSE_B";
				case 32:
					return "RE_TWO_SCL_V1_ASK_HOME_C";
				case 33:
					return "RE_TWO_SCL_V1_ASK_HOME_D";
				case 34:
					return "RE_TWO_SCL_V1_ASK_HOME_E";
				case 36:
					return "RE_TWO_SCL_V1_ASK_HOME_I";
				case 39:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_A";
				case 40:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_B";
				case 41:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_C";
				case 42:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_D";
				case 43:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_E";
				case 44:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_F";
				case 45:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_G";
				case 46:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_G2";
				case 47:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_H";
				case 48:
					return "RE_TWO_SCL_V1_ARRIVED_HOME_CLOSE";
				case 49:
					return "RE_TWO_SCL_V1_TAKE_HOME_RANDOM";
				case 51:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_RESPA";
				case 52:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_RESPB";
				case 53:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_B_SIGH";
				case 54:
					return "RE_TWO_MTN_V1_TAKE_HOME_PLY_INT_A";
				case 56:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_RESPD";
				case 57:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_RESPE";
				case 60:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_RESPG";
				case 61:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_RESPH";
				case 63:
					return "RE_TWO_SCL_V1_ARRIVED_HOME_A";
				case 64:
					return "RE_TWO_SCL_V1_ARRIVED_HOME_B";
				case 65:
					return "RE_TWO_SCL_V1_ARRIVED_HOME_C";
				case 66:
					return "RE_TWO_SCL_V1_ARRIVED_HOME_REWARD";
				case 98:
					return "RE_TWO_SCL_V1_TAKE_HOME_WRONG_WAY";
				case 99:
					return "RE_TWO_SCL_V1_TAKE_HOME_WRONG_WAY";
				case 100:
					return "RE_TWO_SCL_V1_WRONG_WAY_C";
				case 101:
					return "RE_TWO_SCL_V1_TAKE_HOME_TOOLONG_A";
				case 102:
					return "RE_TWO_SCL_V1_TAKE_HOME_TOOLONG_B";
				case 103:
					return "RE_TWO_SCL_V1_TAKE_HOME_TOOLONG_C";
				case 104:
					return "RE_TWO_SCL_V1_STATIONARY_A";
				case 105:
					return "RE_TWO_SCL_V1_STATIONARY_B";
				case 106:
					return "RE_TWO_SCL_V1_STATIONARY_C";
				case 107:
					return "RE_TWO_SCL_V1_TAKE_HOME_TOOLONG_C";
				case 109:
					return "RE_TWO_SCL_V1_TAKE_HOME_JUMP";
				case 110:
					return "RE_TWO_SCL_V1_TAKE_HOME_OFFHORSE";
				case 111:
					return "RE_TWO_SCL_V1_TAKE_HOME_TOOFAST";
				case 112:
					return "RE_TWO_SCL_V1_CRAZY_RIDE";
				case 113:
					return "RE_TWO_SCL_V1_CRAZY_RIDE";
				case 67:
					return "RE_TWO_SCL_V1_ILO_PLAYER_POS_A";
				case 68:
					return "RE_TWO_SCL_V1_ILO_PLAYER_NEG_A";
				case 69:
					return "RE_TWO_SCL_V1_ILO_PLAYER_NEG_B";
				case 70:
					return "RE_TWO_SCL_V1_ILO_PED_NEG_B";
				case 74:
					return "RE_TWO_SCL_V1_ILO_PLAYER_POS_C";
				case 75:
					return "RE_TWO_SCL_V1_ILO_PLAYER_NEG_C";
				case 87:
					return "RE_TWO_SCL_V1_ILO_PLAYER_POS_E";
				case 88:
					return "RE_TWO_SCL_V1_ILO_PLAYER_NEG_E";
				case 83:
					return "RE_TWO_SCL_V1_PLAYER_RESPONSE_A";
				case 84:
					return "RE_TWO_SCL_V1_PLAYER_RESPONSE_B";
				case 71:
					return "RE_TWO_SCL_V1_ILO_PED_POS_A";
				case 72:
					return "RE_TWO_SCL_V1_ILO_PED_NEG_A";
				case 73:
					return "RE_TWO_SCL_V1_ILO_AGREE_A";
				case 76:
					return "RE_TWO_SCL_V1_ILO_PED_POS_C";
				case 77:
					return "RE_TWO_SCL_V1_ILO_PED_NEG_C";
				case 85:
					return "RE_TWO_SCL_V1_ILO_PLAYER_POS_D";
				case 86:
					return "RE_TWO_SCL_V1_ASK_HOME_E";
				case 89:
					return "RE_TWO_SCL_V1_ILO_PED_POS_E";
				case 90:
					return "RE_TWO_SCL_V1_ILO_PED_NEG_E";
				case 91:
					return "RE_TWO_SCL_V1_TIMEOUT_A";
				case 92:
					return "RE_TWO_SCL_V1_TIMEOUT_B";
				case 93:
					return "RE_TWO_SCL_V1_CANCEL_HELP_A";
				case 94:
					return "RE_TWO_SCL_V1_CANCEL_HELP_B";
				case 95:
					return "RE_TWO_SCL_V1_CANCEL_HELP_C";
				case 145:
					return "RE_TWO_SCL_V1_ANIMAL_ON_HORSE_A";
				case 146:
					return "RE_TWO_SCL_V1_HELP_YES_START";
				case 147:
					return "RE_TWO_SCL_V1_HELP_YES_RISING";
				case 148:
					return "RE_TWO_SCL_V1_SEGUE";
				case 149:
					return "RE_TWO_SCL_V1_SEGUE";
				case 151:
					return "RE_TWO_SCL_V1_SD_A";
				case 152:
					return "RE_TWO_SCL_V1_SD_B_NICE";
				case 153:
					return "RE_TWO_SCL_V1_SD_B_NICE2";
				case 154:
					return "RE_TWO_SCL_V1_SD_C_NICE";
				case 155:
					return "RE_TWO_SCL_V1_SD_C_NICE";
				case 156:
					return "RE_TWO_SCL_V1_SD_C_NICE_CONT";
				case 157:
					return "RE_TWO_SCL_V1_SD_B_OTHER";
				case 158:
					return "RE_TWO_SCL_V1_SD_B_OTHER2";
				case 159:
					return "RE_TWO_SCL_V1_SD_C_OTHER";
				case 160:
					return "RE_TWO_SCL_V1_SD_C_OTHER";
				case 161:
					return "RE_TWO_SCL_V1_SD_C_OTHER_CONT";
				case 162:
					return "RE_TWO_SCL_V1_NEAR_SLUMS";
				case 163:
					return "RE_TWO_SCL_V1_LIFT_GRUNT";
				case 164:
					return "RE_TWO_SCL_V1_THANKS_RSP";
				case 165:
					return "RE_TWO_SCL_V1_MOAN_A";
				case 166:
					return "RE_TWO_SCL_V1_MOAN_A";
				case 167:
					return "RE_TWO_SCL_V1_MOAN_A";
				case 168:
					return "STORM_OFF";
				default:
					break;
			}
		}
	}
	else
	{
		switch (iParam0)
		{
			case 2:
				return "RE_TWO_MTN_V2_TRAPPED";
			case 3:
				return "RE_TWO_MTN_V2_MY_LEG";
			case 4:
				return "RE_TWO_MTN_V2_HELP_ME";
			case 5:
				return "RE_TWO_MTN_V2_CALL";
			case 6:
				return "RE_TWO_MTN_V2_HANG_AROUND_A";
			case 7:
				return "RE_TWO_MTN_V2_HANG_AROUND_B";
			case 8:
				return "RE_TWO_MTN_V2_HANG_AROUND_C";
			case 9:
				return "RE_TWO_MTN_V2_HANG_AROUND_D";
				return "RE_TWO_MTN_V2_HANG_AROUND_E";
				return "RE_TWO_MTN_V2_HANG_AROUND_F";
				return "RE_TWO_MTN_V2_AIM";
				return "RE_TWO_MTN_V2_SHOOTING";
				return "RE_TWO_MTN_V2_DYNAMITE";
				return "RE_TWO_MTN_V2_ATTACKED_A_1";
				return "RE_TWO_MTN_V2_ATTACKED_A_2";
				return "RE_TWO_MTN_V2_ATTACKED_A_2_B";
				return "RE_TWO_MTN_V2_PLAYER_KILLS_THUG_A";
				return "RE_TWO_MTN_V2_PLAYER_KILLS_THUG_B";
				return "RE_TWO_MTN_V2_WOMAN_SOLO_A";
				return "RE_TWO_MTN_V2_WOMAN_SOLO_B";
				return "RE_TWO_MTN_V2_WOMAN_SOLO_C";
				return "RE_TWO_MTN_V2_HOGTIE_POST_A";
				return "RE_TWO_MTN_V2_HOGTIE_POST_B";
				return "RE_TWO_MTN_V2_SOLO_LEAVE_A";
				return "RE_TWO_MTN_V2_SOLO_LEAVE_B";
				return "OPENS_FIRE";
				return "OPENS_FIRE";
				return "OPENS_FIRE";
				return "OPENS_FIRE";
				return "GENERIC_INSULT_MED_MALE";
				return "RE_TWO_MTN_V2_HELPED_A";
				return "RE_TWO_MTN_V2_HELPED_B";
				return "RE_TWO_MTN_V2_HELPED_C";
				return "RE_TWO_MTN_V2_HELPED_D";
				return "RE_TWO_MTN_V2_HELPED_E";
				return "RE_TWO_MTN_V2_HELPED_F";
				return "RE_TWO_MTN_V2_HELPED_G";
				return "RE_TWO_MTN_V2_GANG_LEAVES_A";
				return "RE_TWO_MTN_V2_GANG_LEAVES_B";
				return "RE_TWO_MTN_V2_GANG_LEAVES_C";
				return "RE_TWO_MTN_V2_PLAYER_ROB_A";
				return "RE_TWO_MTN_V2_PLAYER_ROB_B";
				return "RE_TWO_MTN_V2_PLAYER_ROB_C";
				return "RE_TWO_MTN_V2_PLAYER_HELP";
				return "RE_TWO_MTN_V2_PLAYER_DISOBEYS_A";
				return "RE_TWO_MTN_V2_PLAYER_DISOBEYS_B";
				return "RE_TWO_MTN_V2_ILO_PLAYER_POS_A";
				return "RE_TWO_MTN_V2_ILO_PLAYER_NEG_A";
				return "RE_TWO_MTN_V2_ILO_PLAYER_NEG_B";
				return "RE_TWO_MTN_V2_ILO_PLAYER_NEG_C";
				return "RE_TWO_MTN_V2_ILO_START_D";
				return "RE_TWO_MTN_V2_ILO_START_D2";
				return "DONT_BE_STUPID_02";
				return "GANG_INTERACT_COMPLY";
				return "DONT_BE_STUPID";
				return "RE_TWO_MTN_V1_LIFT_GRUNT";
				return "RE_TWO_MTN_V2_THANKS_RSP";
				return "RE_TWO_MTN_V1_MOAN_A";
				return "RE_TWO_MTN_V1_MOAN_B";
				return "RE_TWO_MTN_V1_MOAN_C";
				return "STORM_OFF";
				return "RE_TWO_MTN_V2_PLAYER_SURRENDERS";
			}
			return "";
		}

void func_181(int* iParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = uParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_335(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_429(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_430(iParam0->f_6, iParam0->f_5, 0);
			}
			func_431(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_238(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_182(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_432(iParam0, 5);
	}
	else
	{
		func_433(iParam0, 5);
	}
}

void func_183(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		MISC::SET_BIT(iParam0, 20);
		if (bParam2)
		{
			MISC::SET_BIT(iParam0, 21);
		}
		else
		{
			MISC::CLEAR_BIT(iParam0, 21);
		}
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 20);
		MISC::CLEAR_BIT(iParam0, 21);
	}
}

void func_184(int* iParam0, float fParam1)
{
	iParam0->f_4 = fParam1;
	func_432(iParam0, 7);
}

int func_185(var uParam0)
{
	if (!func_434(uParam0->f_1))
	{
		return 0;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_434(uParam0->f_12))
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

int func_186()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1899517)
	{
		if (Global_1899517[iVar0] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_187(var uParam0, var uParam1, vector3 vParam2, float fParam5, var uParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	struct<4> Var2;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) && uParam0->f_1 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12))
			{
				Var2 = { func_435(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_436(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_437(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_438(uParam0->f_1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
					{
						func_194(uParam0->f_11, 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_12, false);
			}
			return 0;
		}
		else
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
			{
				bVar0 = (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_13);
				if (bVar0)
				{
					Var2 = { func_435(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_436(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (uParam6 || func_439(&(uParam0->f_22)));
					Var2 = { func_435(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_436(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_437(uParam0->f_1, uParam0, Var2, Var2.f_3, bParam7, PED::_0x772A1969F649E902(uParam0->f_1), uParam0->f_14, 0, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam1, 307, true);
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
				{
					if (bVar0)
					{
						func_440(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
					{
						func_195(*uParam1, &(uParam0->f_23), 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_1, false);
			}
			return 0;
		}
	}
	return 1;
}

bool func_188(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_189(var uParam0, bool bParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!func_441(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

float func_190(float fParam0)
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

void func_191(int iParam0, int iParam1)
{
	func_442(iParam0, iParam1);
}

void func_192(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam3)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 344, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 344, false);
		}
		if (bParam2)
		{
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
			{
				if (PED::IS_PED_HUMAN(iParam0))
				{
					*uParam1 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(665633627, ENTITY::GET_ENTITY_COORDS(iParam0, true, false) - Vector(1f, 0f, 0f), 0f, 0f, 0f, 0.5f, 0.5f, 1f);
				}
				else
				{
					*uParam1 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(665633627, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0f, 0f, 0f, 0.5f, 1f, 0.5f);
				}
				PED::_0x7C00CFC48A782DC0(*uParam1, iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			}
		}
		else if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			VOLUME::DELETE_VOLUME(*uParam1);
		}
	}
}

void func_193(var uParam0)
{
	func_174(uParam0, 256);
}

void func_194(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_123(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

void func_195(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 || func_27(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

int func_196(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_443(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_197(int iParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 263, !bParam1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 138, bParam1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 488, bParam1);
	}
}

Vector3 func_198()
{
	return 2.37f, 5.5f, 2f;
}

void func_199(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

Vector3 func_200()
{
	return 14.42f, 6.5f, 2f;
}

Vector3 func_201()
{
	return 6.5f, 7.69f, 2.5f;
}

Vector3 func_202()
{
	return -0.58f, 5.83f, 0f;
}

Vector3 func_203()
{
	return 0f, 0f, 131.69f;
}

Vector3 func_204()
{
	return 8.7f, 7.69f, 2.5f;
}

Vector3 func_205()
{
	return -5f, -2.27f, 0f;
}

Vector3 func_206()
{
	return 0f, 0f, 90.19f;
}

Vector3 func_207()
{
	return 6.5f, 7.69f, 2.5f;
}

Vector3 func_208()
{
	return -4.98f, -0.77f, 0f;
}

Vector3 func_209()
{
	return 0f, 0f, 131.69f;
}

Vector3 func_210()
{
	return 6.5f, 9.19f, 2.5f;
}

Vector3 func_211()
{
	return -0.28f, -5.27f, 0f;
}

Vector3 func_212()
{
	return 0f, 0f, 131.69f;
}

void func_213(int iParam0, bool bParam1, bool bParam2)
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

int func_214(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((func_444(iParam0, 8192) && func_444(iParam0, 16384)) && func_444(iParam0, 131072))
	{
		return joaat("weapon_revolver_cattleman");
	}
	iVar0 = WEAPON::_0xF8204EF17410BF43(416676503, iParam1, iParam2, 0);
	iVar1 = WEAPON::_0xF8204EF17410BF43(-1101297303, iParam1, iParam2, 0);
	iVar2 = joaat("weapon_shotgun_sawedoff");
	iVar3 = 0;
	if (!func_444(iParam0, 16384))
	{
		iVar3 = iVar1;
	}
	if (!func_444(iParam0, 8192))
	{
		if (!func_334(iVar3) || WEAPON::_0xF2F585411E748B9C(iVar0, 0) > WEAPON::_0xF2F585411E748B9C(iVar3, 0))
		{
			iVar3 = iVar0;
		}
	}
	if (!func_444(iParam0, 131072) && func_445(iVar2))
	{
		if (!func_334(iVar3) || WEAPON::_0xF2F585411E748B9C(iVar2, 0) > WEAPON::_0xF2F585411E748B9C(iVar3, 0))
		{
			iVar3 = iVar2;
		}
	}
	if (!func_334(iVar3))
	{
		return joaat("weapon_revolver_cattleman");
	}
	return iVar3;
}

bool func_215(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = func_446(iParam3, 1);
	bVar1 = func_446(iParam3, 2);
	bVar2 = !func_446(iParam3, 4);
	bVar3 = func_446(iParam3, 8);
	bVar4 = !func_446(iParam3, 16);
	bVar5 = func_446(iParam3, 32);
	bVar6 = func_446(iParam3, 64);
	return func_447(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

int func_216(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (((func_444(iParam0, 4096) && func_444(iParam0, 512)) && func_444(iParam0, 1024)) && func_444(iParam0, 2048))
	{
		return joaat("weapon_repeater_carbine");
	}
	iVar0 = WEAPON::_0xF8204EF17410BF43(-594562071, iParam1, iParam2, 0);
	iVar1 = WEAPON::_0xF8204EF17410BF43(970310034, iParam1, iParam2, 0);
	iVar2 = WEAPON::_0xF8204EF17410BF43(-1212426201, iParam1, iParam2, 0);
	iVar3 = WEAPON::_0xF8204EF17410BF43(860033945, iParam1, iParam2, 0);
	while (func_448(iVar3))
	{
		iVar4++;
		if (iVar4 >= 10)
		{
			iVar3 = joaat("weapon_shotgun_doublebarrel");
			Jump @185; //curOff = 160
		}
		else
		{
			iVar3 = WEAPON::_0xF8204EF17410BF43(860033945, iParam1, iParam2, 0);
		}
	}
	if (!func_445(iVar3))
	{
		iVar3 = joaat("weapon_repeater_carbine");
	}
	iVar5 = 0;
	if (!func_444(iParam0, 4096))
	{
		iVar5 = iVar0;
	}
	if (!func_444(iParam0, 512))
	{
		if (!func_334(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar1, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar1;
		}
	}
	if (!func_444(iParam0, 1024))
	{
		if (!func_334(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar3, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar3;
		}
	}
	if (!func_444(iParam0, 2048))
	{
		if (!func_334(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar2, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar2;
		}
	}
	if (!func_334(iVar5))
	{
		return joaat("weapon_repeater_carbine");
	}
	return iVar5;
}

bool func_217(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_449(iParam0);
		return func_450(iParam0, 2084597891, iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

void func_218(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_449(iParam0);
		func_450(iParam0, iParam1, iParam2, iVar0);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type1", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt1", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type2", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt2", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model2", iParam3);
		return;
	}
}

void func_219(var uParam0, int iParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, true);
	EVENT::_0xBB1E41DD3D3C6250(iParam1, "SpAggroDefault", 0);
	DECORATOR::DECOR_SET_BOOL(iParam1, "UsesTracker", true);
}

void func_220(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_362(&(uParam0->f_1), 8);
	}
	else
	{
		func_84(&(uParam0->f_1), 8);
	}
}

void func_221(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_362(&(uParam0->f_1), 4);
	}
	else
	{
		func_84(&(uParam0->f_1), 4);
	}
}

void func_222(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_362(&(uParam0->f_1), 2);
	}
	else
	{
		func_84(&(uParam0->f_1), 2);
	}
}

void func_223(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_362(&(uParam0->f_1), 16);
	}
	else
	{
		func_84(&(uParam0->f_1), 16);
	}
}

bool func_224(int iParam0, int iParam1, int iParam2, int iParam3)
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

void func_225(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 && !func_451(iParam0, 13))
	{
		func_432(iParam0, 0);
	}
	else
	{
		func_433(iParam0, 0);
	}
	if (func_335(iParam0->f_6))
	{
		if (bParam2)
		{
			func_330(&(iParam0->f_6), 0, 1);
		}
	}
}

var func_226(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam9;
	func_452(&iVar0);
	if (func_3(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	uVar1 = func_453(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_3(iVar0, 134217728))
	{
		func_454(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_455(558))
				{
					func_347(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return uVar1;
}

int func_227(int iParam0)
{
	if (iParam0 == 0)
	{
		iLocal_804 = 1;
		vLocal_497 = { Global_36 };
		func_232(&uLocal_684);
		func_233(&uLocal_669);
		return 1;
	}
	return 0;
}

int func_228(int iParam0, int iParam1, char* sParam2, float fParam3, int iParam4)
{
	if (!func_291(&uLocal_657))
	{
		func_232(&uLocal_657);
	}
	else if (func_292(&uLocal_657) > fParam3)
	{
		func_231(iParam0, iParam1, sParam2, 0, -1082130432, iParam4, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
		func_233(&uLocal_657);
		return 1;
	}
	return 0;
}

void func_229()
{
	func_242(&(uLocal_443[1]), Global_35);
	func_456();
	if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, sLocal_845))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, sLocal_845, true);
	}
}

int func_230(float fParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_457(iParam2, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_458(fParam0))
	{
		return 0;
	}
	return 1;
}

bool func_231(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_459(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, iParam7, iParam8, bParam9, iParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_232(var uParam0)
{
	func_460(uParam0, 0f);
}

void func_233(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_234(int iParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0, iParam1);
}

int func_235()
{
	if (!func_230(0, 1, Global_35, 1))
	{
		return 1;
	}
	if (!func_230(0, 1, &(uLocal_443[1]), 1))
	{
		return 1;
	}
	return 0;
}

void func_236(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_451(iParam0, 13))
		{
			if (bParam2)
			{
				func_225(iParam0, 0, 0);
			}
			func_432(iParam0, 13);
		}
	}
	else if (func_451(iParam0, 13))
	{
		func_433(iParam0, 13);
	}
}

void func_237(int iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_233(&(iParam0->f_18));
}

void func_238(int* iParam0, char* sParam1)
{
	if (func_335(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_430(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_433(iParam0, 1);
}

void func_239()
{
	func_242(&(uLocal_443[1]), Global_35);
	func_461();
	if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, sLocal_846))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, sLocal_846, true);
	}
}

int func_240()
{
	if (iLocal_14 == 0)
	{
		if ((iLocal_512 == 6 || iLocal_512 == 7) || iLocal_512 == 9)
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
		return 0;
	}
	return 0;
}

void func_241()
{
	func_242(&(uLocal_443[1]), Global_35);
	func_462();
	if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, sLocal_845))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, sLocal_845, true);
	}
}

void func_242(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam1) * FtoV((ENTITY::GET_ENTITY_SPEED(iParam1) * 0f)) };
	vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar9 = { vVar3 - vVar0 };
	fVar12 = func_463(vVar6, vVar9);
	fVar13 = 0.707f;
	if (MISC::ABSF(fVar12) > fVar13)
	{
		if (fVar12 > 0f)
		{
			iLocal_618 = 0;
		}
		else if (func_464(vVar0, vVar0 + vVar6, ENTITY::GET_ENTITY_COORDS(iParam1, true, false)))
		{
			iLocal_618 = 1;
		}
		else
		{
			iLocal_618 = 2;
		}
	}
	else if (func_464(vVar0, vVar0 + vVar6, vVar3))
	{
		iLocal_618 = 3;
	}
	else
	{
		iLocal_618 = 4;
	}
}

void func_243()
{
	switch (iLocal_618)
	{
		case 0:
			sLocal_844 = "PB_BRK_N";
			break;
		case 2:
			sLocal_844 = "PB_BRK_BACK";
			break;
		case 1:
			sLocal_844 = "PB_BRK_BACK";
			break;
		case 3:
			sLocal_844 = "PB_BRK_L";
			break;
		case 4:
			sLocal_844 = "PB_BRK_R";
			break;
	}
}

Vector3 func_244(var uParam0)
{
	return uParam0->f_51;
}

void func_245(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_246()
{
	return &Global_1935436 == 2;
}

void func_247(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_248(int iParam0, int iParam1)
{
	float fVar0;

	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17503.f_3++;
	(Global_17503.f_42[iParam0 /*8*/])->f_1++;
	if (func_48(iParam0, 2))
	{
		func_466(iParam0, func_465(iParam1));
	}
	else
	{
		func_467(iParam0, func_177());
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
	func_468(iParam0, ((*Global_1310750)[iParam0 /*111*/])->f_36, fVar0, 1, 0);
	func_469(iParam0, 0);
	func_470(iParam0);
	func_471(1);
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
	if (!func_48(iParam0, 16))
	{
		func_249(iParam0, 0, 0, 0, 0);
	}
}

void func_249(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_472() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_23(iVar1) && !func_48(iVar1, iParam2)) && (!bParam3 || !func_266(iVar1))) && (!bParam4 || !func_473(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_474(iVar0);
			}
		}
		iVar0++;
	}
}

int func_250(int iParam0)
{
	return ((*Global_1310750)[iParam0 /*111*/])->f_39;
}

void func_251(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_401(Global_1310750[uParam0->f_3 /*111*/], 16777216))
	{
		if (bParam2)
		{
			if (func_48(uParam0->f_3, 1073741824))
			{
				func_475(2, -1, 0, 0, 0);
			}
			else
			{
				func_475(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_475(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_476(1, uParam0->f_177))
				{
					func_477(16, uParam0->f_177);
					func_478(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_479(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_475(8, -1, 0, 0, 0);
	}
}

int func_252()
{
	if (func_334(Global_1935630->f_44))
	{
		if (WEAPON::_0x6AD66548840472E5(Global_1935630->f_44))
		{
			if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 1))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
		else if (func_480())
		{
			return 1;
		}
	}
	return 0;
}

bool func_253(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_254(var uParam0, bool bParam1)
{
	float fVar0;

	if (uParam0->f_119 == -1f)
	{
		if (func_48(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_48(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_48(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_48(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_48(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_48(uParam0->f_3, 1))
		{
		}
		else if (func_48(uParam0->f_3, 2))
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

int func_255(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6)
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
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_IS_PED_VISIBILITY_TRACKED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (func_481(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					bVar1 = PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), fParam4);
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
					if (func_482(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_483() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

int func_256(var uParam0, int iParam1, float fParam2)
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
	func_87(uParam0);
	return 1;
}

bool func_257()
{
	return (Global_1894899 & 1 != 0 && func_269() != -1);
}

int func_258(var uParam0, float fParam1)
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

int func_259(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_484(bParam1, iParam2, bParam3);
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
	if (LAW::IS_LAW_INCIDENT_ACTIVE(iParam0))
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

int func_260(int iParam0)
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
	iVar0 = func_486(func_485());
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

bool func_261(int iParam0, int iParam1)
{
	return (func_250(iParam0) && iParam1) != 0;
}

int func_262(int iParam0)
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
	if (iParam0 & 1 == 1 && func_487(iVar3))
	{
		return 1;
	}
	if (iParam0 & 2 == 2 && func_488(iVar3))
	{
		return 1;
	}
	if (iParam0 & 4 == 4 && func_489(iVar3))
	{
		return 1;
	}
	if (iParam0 & 8 == 8 && func_490(iVar3))
	{
		return 1;
	}
	if (iParam0 & 16 == 16 && func_491(iVar3))
	{
		return 1;
	}
	if (iParam0 & 32 == 32 && func_492(iVar3))
	{
		return 1;
	}
	if (iParam0 & 64 == 64 && func_493(iVar3))
	{
		return 1;
	}
	return 0;
}

int func_263(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_494(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_264(int iParam0)
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

int func_265(int iParam0, bool bParam1, int iParam2)
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
		if (func_495())
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
		iVar0 = func_496(&(Global_1898164->f_1[0 /*5*/]));
		if (func_497(iVar0) && func_498(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_499(&(Global_1898164->f_1[0 /*5*/])))
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

int func_266(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0;
	}
	if (func_500(64) && func_501(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_267(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_502(iVar0) || func_503(iVar0))
				{
					return 0;
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_268()
{
	return Global_1894899 & 4 != 0;
}

int func_269()
{
	return Global_1894899->f_2;
}

int func_270(int iParam0)
{
	if (!func_167(iParam0))
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

int func_271(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return 0;
	}
	return 1;
}

int func_272(vector3 vParam0, int iParam3)
{
	if (!func_271(iParam3))
	{
		return 0;
	}
	if (VOLUME::DOES_VOLUME_EXIST(((*Global_1392194)[iParam3 /*10*/])->f_5))
	{
		return VOLUME::IS_POINT_IN_VOLUME(((*Global_1392194)[iParam3 /*10*/])->f_5, vParam0);
	}
	return 0;
}

bool func_273(vector3 vParam0)
{
	float fVar0;

	if (func_153(vParam0))
	{
		return false;
	}
	fVar0 = func_133(func_257(), 6f, 22f);
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fVar0, 1, 0, 16384);
}

int func_274(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
						func_232(uParam0);
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
		func_232(uParam0);
		return 1;
	}
	if (!bParam4)
	{
		if (!func_291(uParam0))
		{
			return 0;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return 1;
		}
		if (!func_338(uParam0, fParam2))
		{
			return 1;
		}
		if (func_291(uParam0))
		{
			func_233(uParam0);
		}
	}
	return 0;
}

bool func_275(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

void func_276(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_153(vParam0))
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
			if (func_411(vVar2, vParam0, 2f, 1))
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

float func_277(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0f;
	}
	if (!func_504(iParam0))
	{
		return 0f;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_44;
}

char* func_278()
{
	return "unnamed";
}

char* func_279(int iParam0)
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

int func_280(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, float fParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::GET_VOLUME_COORDS(iParam0) };
	vVar3 = { VOLUME::_0x3E2A25B2416DD67E(iParam0) };
	uVar6 = func_402(vVar0, vVar3.x, uParam1, bParam2, iParam3, iParam4, bParam5, fParam6);
	return uVar6;
}

void func_281()
{
	if (iLocal_14 == 0)
	{
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_CALL_L");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_CALL_LB");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_CALL_N");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_CALL_R");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_CALL_RB");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "pb_cower_l");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "pb_cower_r");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_FREE_HERSELF");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_BREAK_HELP");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_HELP");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_MOURN");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_MOURN_SUBTLE");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_TALK");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_INT");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_BRKOUT_BACK_L");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_BRKOUT_BACK_R");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_BRKOUT_L");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_BRKOUT_R");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_BRKOUT_N");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_N");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_R");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_L");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_BR");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_BL");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_RIDE_N");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_RIDE_R");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_RIDE_L");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_RIDE_BR");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_RIDE_BL");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_ASK_N");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_ASK_R");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_ASK_L");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_ASK_BACK_R");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_ASK_BACK_L");
	}
	else
	{
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_CALL_L");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_CALL_LB");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_CALL_N");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_CALL_R");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_CALL_RB");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "pb_cower_l");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "pb_cower_r");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_BRK_BACK");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_BRK_L");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_BRK_R");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_BRK_N");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_INT");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_TRAP_L");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_TRAP_R");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_PUSH_AWAY");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_BL_NEG");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_BL_POS");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_BR_NEG");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_BR_POS");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_L_NEG");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_L_POS");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_R_NEG");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_R_POS");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_N_NEG");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_ILO_N_POS");
	}
}

void func_282()
{
	if (((((PAD::IS_CONTROL_PRESSED(0, -128997553) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(&(uLocal_443[1]), Global_35, 17)) && WEAPON::_0xCB690F680A3EA971(Global_35, 4)) && func_505(&(uLocal_443[1]), 1090519040, 1103626240, 1097859072, 0)) || (func_33(&(uLocal_443[1]), 1, 1) <= 3f && func_505(&(uLocal_443[1]), 1090519040, 1103626240, 1097859072, 0))) || func_506(&(uLocal_443[1]), 0, &(Local_15.f_5), &iLocal_778, 0, 0))
	{
		iLocal_800 = 1;
		iLocal_803 = 1;
		Local_15.f_45 = 1;
		if (Local_15.f_48 == 0)
		{
			func_86(&Local_15, &(Local_15.f_48), Local_15.f_3, &(Local_15.f_51.f_6));
		}
	}
	else
	{
		iLocal_800 = 0;
	}
	if (iLocal_800 == 1)
	{
		if (!func_287())
		{
			func_225(Local_559[1 /*17*/], 0, 0);
			func_225(Local_559[2 /*17*/], 0, 0);
			func_225(Local_559[0 /*17*/], 0, 0);
			if (iLocal_14 == 0)
			{
				func_237(&iLocal_538, 0);
				iLocal_860 = func_1(3, 0, 0);
				func_225(Local_559[1 /*17*/], 0, 0);
				func_225(Local_559[2 /*17*/], 0, 0);
				func_225(Local_559[0 /*17*/], 0, 0);
			}
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "pb_cower_l");
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "pb_cower_r");
			func_242(&(uLocal_443[1]), Global_35);
			func_507();
			if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, sLocal_847))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, sLocal_847, true);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "cower_L_Bool", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "cower_r_Bool", false, false);
		}
	}
	if ((iLocal_800 == 0 && iLocal_801 == 1) && iLocal_803 == 1)
	{
		if (!func_291(&uLocal_627))
		{
			func_232(&uLocal_627);
		}
	}
	if (func_291(&uLocal_627))
	{
		if (func_292(&uLocal_627) >= 2f)
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "cower_L_Bool", true, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "cower_r_Bool", true, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "INT_BOOL", false, false);
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_INT");
			if (func_508())
			{
				iLocal_803 = 0;
				if (iLocal_14 == 1)
				{
					if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_INT"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_INT", true);
					}
				}
				func_225(Local_559[1 /*17*/], 1, 0);
				func_225(Local_559[2 /*17*/], 1, 0);
				func_225(Local_559[0 /*17*/], 1, 0);
				func_233(&uLocal_627);
				if (iLocal_14 == 0)
				{
					func_15(7);
				}
			}
		}
	}
	if (PED::IS_PED_PLANTING_BOMB(Global_35) && func_33(&(uLocal_443[1]), 1, 1) <= 6f)
	{
		if (iLocal_794 == 0)
		{
			iLocal_794 = 1;
			func_304(0);
			func_231(&(uLocal_443[1]), Global_35, func_180(21), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	if (iLocal_795 == 0)
	{
		if (func_506(&(uLocal_443[1]), 0, &(Local_15.f_5), &iLocal_778, 0, 0))
		{
			if (iLocal_778 == 4 || iLocal_778 == 256)
			{
				iLocal_795 = 1;
				func_304(0);
				func_231(&(uLocal_443[1]), Global_35, func_180(20), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			}
		}
	}
	if (iLocal_800 == 1)
	{
		if (func_506(&(uLocal_443[1]), 0, &(Local_15.f_5), &iLocal_778, 0, 0))
		{
			if (iLocal_778 == 8)
			{
				func_509();
			}
		}
	}
}

void func_283()
{
	if (!EVENT::IS_SHOCKING_EVENT_IN_SPHERE(792302887, ENTITY::GET_ENTITY_COORDS(&(uLocal_443[1]), true, false), 5f))
	{
		iLocal_738 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(792302887, &(uLocal_443[1]), 0f, 30f, 30f, 15f, -1082130432, 1127481344, 0, 0, -1, -1);
	}
}

int func_284(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, int iParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	bVar1 = false;
	fVar2 = func_254(uParam0, bVar1);
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
	if (uParam0->f_178 && func_252())
	{
		bVar1 = true;
		fVar3 = func_133(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_255(uParam0->f_121[iVar0 /*9*/], fVar3, 1082130432, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_255(uParam0->f_121[0 /*9*/], fVar3, 1082130432, 1, 90f, 0, 0);
		}
		if (func_256(&(uParam0->f_121), iParam4, fParam1))
		{
			func_87(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_137(uParam0->f_3, uParam0->f_185), 0);
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
						func_86(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_87(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::STATSTRACKER_DEED_STARTED(func_137(uParam0->f_3, uParam0->f_185), 0);
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_285(int iParam0, vector3 vParam1, bool bParam4)
{
	if (bParam4)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::TRIGGER_SONAR_BLIP(iParam0, vParam1);
}

void func_286(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	uParam2->f_3 = iParam1;
	uParam2->f_7 = iParam3;
	if (func_127(iParam0, iParam1, 1, 1) <= IntToFloat(iParam4))
	{
		if (iParam5 == 0)
		{
			TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, iParam3, 2060, 51, 0);
		}
		else
		{
			TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, iParam3, 2048, 51, 0);
		}
	}
	else
	{
		TASK::TASK_CLEAR_LOOK_AT(iParam0);
	}
}

int func_287()
{
	if (iLocal_14 == 0)
	{
		if (((((((ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_422, "pb_cower_l") || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_422, "pb_cower_r")) || ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_443[1]), "script_re@berry_gang", "cower_l_loop_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_443[1]), "script_re@berry_gang", "cower_l_enter_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_443[1]), "script_re@berry_gang", "cower_l_exit_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_443[1]), "script_re@berry_gang", "cower_r_loop_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_443[1]), "script_re@berry_gang", "cower_r_enter_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_443[1]), "script_re@berry_gang", "cower_r_exit_girl", 1))
		{
			Local_15.f_44 = 1;
			iLocal_801 = 1;
			return 1;
		}
	}
	else if (((((((ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_422, "pb_cower_l") || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_422, "pb_cower_r")) || ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_443[1]), "script_re@berry_gang@trap", "cower_l_loop_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_443[1]), "script_re@berry_gang@trap", "cower_l_enter_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_443[1]), "script_re@berry_gang@trap", "cower_l_exit_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_443[1]), "script_re@berry_gang@trap", "cower_r_loop_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_443[1]), "script_re@berry_gang@trap", "cower_r_enter_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_443[1]), "script_re@berry_gang@trap", "cower_r_exit_girl", 1))
	{
		Local_15.f_44 = 1;
		iLocal_801 = 1;
		return 1;
	}
	return 0;
}

void func_288()
{
	if (func_33(&(uLocal_443[1]), 1, 1) <= func_510() && iLocal_797 == 0)
	{
		func_242(&(uLocal_443[1]), Global_35);
		func_511();
		func_286(&(uLocal_443[1]), Global_35, &uLocal_513, -1, 30, 0);
		Local_15.f_45 = 1;
		if (Local_15.f_48 == 0)
		{
			func_86(&Local_15, &(Local_15.f_48), Local_15.f_3, &(Local_15.f_51.f_6));
		}
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "INT_BOOL", true, false);
		if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, sLocal_843))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, sLocal_843, true);
		}
		if (func_230(-4f, 1, &(uLocal_443[1]), 1))
		{
			func_231(&(uLocal_443[1]), Global_35, func_180(5), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		func_285(1515458263, ENTITY::GET_ENTITY_COORDS(&(uLocal_443[1]), true, false), 1);
		if (!MAP::DOES_BLIP_EXIST(&(iLocal_450[1])))
		{
			iLocal_450[1] = MAP::BLIP_ADD_FOR_ENTITY(-89429847, &(uLocal_443[1]));
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(iLocal_450[1]), "RE_INTER_STRANGER");
		}
		Local_15.f_44 = 1;
		iLocal_797 = 1;
	}
	if (iLocal_14 == 0)
	{
		if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_443[1]), "script_re@berry_gang", "callout_l_girl", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_443[1]), "script_re@berry_gang", "callout_l_back_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_443[1]), "script_re@berry_gang", "callout_n_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_443[1]), "script_re@berry_gang", "callout_r_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_443[1]), "script_re@berry_gang", "callout_r_back_girl", 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "INT_BOOL", false, false);
		}
	}
	else if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_443[1]), "script_re@berry_gang@trap", "callout_l_girl", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_443[1]), "script_re@berry_gang@trap", "callout_l_back_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_443[1]), "script_re@berry_gang@trap", "callout_n_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_443[1]), "script_re@berry_gang@trap", "callout_r_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_443[1]), "script_re@berry_gang@trap", "callout_r_back_girl", 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "INT_BOOL", false, false);
	}
}

void func_289()
{
	if (func_33(&(uLocal_443[1]), 1, 1) < 25f)
	{
		if (!func_291(&uLocal_630))
		{
			func_232(&uLocal_630);
		}
		else if (func_292(&uLocal_630) > 6f)
		{
			func_286(&(uLocal_443[1]), Global_35, &uLocal_513, -1, 15, 0);
			func_512();
		}
	}
}

void func_290()
{
	switch (iLocal_749)
	{
		case 0:
			if ((func_33(&(uLocal_443[1]), 1, 1) >= 30f && func_230(1f, 1, 0, 0)) && func_230(-4f, 1, &(uLocal_443[1]), 1))
			{
				if (iLocal_831 == 0)
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(3), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					func_285(1515458263, ENTITY::GET_ENTITY_COORDS(&(uLocal_443[1]), true, false), 1);
					iLocal_831 = 1;
					iLocal_749++;
				}
				else
				{
					iLocal_749++;
				}
			}
			break;
		case 1:
			if ((func_33(&(uLocal_443[1]), 1, 1) >= 30f && func_230(1f, 1, 0, 0)) && func_230(-4f, 1, &(uLocal_443[1]), 1))
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(4), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_285(2001176446, ENTITY::GET_ENTITY_COORDS(&(uLocal_443[1]), true, false), 1);
				iLocal_749++;
			}
			break;
		case 2:
			if (iLocal_14 == 0 && iLocal_797 == 0)
			{
				if (func_230(1f, 1, 0, 0) && func_230(-4f, 1, &(uLocal_443[1]), 1))
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(0), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					func_285(2001176446, ENTITY::GET_ENTITY_COORDS(&(uLocal_443[1]), true, false), 1);
					iLocal_749++;
				}
			}
			else
			{
				iLocal_749++;
			}
			break;
		case 3:
			if (iLocal_14 == 0 && iLocal_797 == 0)
			{
				if (func_230(1f, 1, 0, 0) && func_230(-4f, 1, &(uLocal_443[1]), 1))
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(1), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					func_285(2001176446, ENTITY::GET_ENTITY_COORDS(&(uLocal_443[1]), true, false), 1);
					iLocal_749++;
				}
			}
			else
			{
				iLocal_749++;
			}
			break;
	}
}

bool func_291(var uParam0)
{
	return func_513(*uParam0, 1);
}

float func_292(var uParam0)
{
	if (!func_291(uParam0))
	{
		return 0f;
	}
	if (func_514(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_483() - uParam0->f_1);
}

int func_293()
{
	switch (iLocal_615)
	{
		case 0:
			if (!func_287())
			{
				if ((func_292(&uLocal_684) >= 10f && func_230(-4f, 1, &(uLocal_443[1]), 1)) && iLocal_799 == 0)
				{
					iLocal_623 = 5;
					iLocal_624 = 0;
					(Local_559[0 /*17*/])->f_13 = "";
					func_328(Local_559[0 /*17*/], 0);
					func_225(Local_559[1 /*17*/], 0, 0);
					func_225(Local_559[2 /*17*/], 0, 0);
					func_225(Local_559[0 /*17*/], 1, 0);
					iLocal_798 = 0;
					iLocal_804 = 0;
					func_232(&uLocal_684);
				}
				if (iLocal_798 == 1)
				{
					PAD::DISABLE_CONTROL_ACTION(0, 255439828, false);
					PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
					PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
					PAD::DISABLE_CONTROL_ACTION(0, -1046962283, false);
					if (func_348(vLocal_732, 1) <= 0.5f && iLocal_799 == 0)
					{
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
						if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_HELP"))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_HELP", true);
						}
						if (iLocal_837 == 1)
						{
							PED::SET_PED_CONFIG_FLAG(Global_35, 87, false);
							iLocal_837 = 0;
						}
						iLocal_799 = 1;
					}
				}
				if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_422, "PB_HELP"))
				{
					iLocal_615 = 1;
				}
				if (iLocal_798 == 0 && iLocal_799 == 0)
				{
					if (iLocal_804 == 1)
					{
						iLocal_837 = 1;
						Local_15.f_44 = 1;
						func_515();
						func_237(&iLocal_538, 0);
						iLocal_860 = func_1(3, 0, 0);
						func_236(Local_559[1 /*17*/], 1, 1);
						func_236(Local_559[2 /*17*/], 1, 1);
						func_328(Local_559[0 /*17*/], 1);
						iLocal_798 = 1;
						if (func_335(Local_15.f_162))
						{
							func_330(&(Local_15.f_162), 1, 1);
						}
					}
				}
			}
			break;
		case 1:
			return 1;
	}
	return 0;
}

int func_294()
{
	switch (iLocal_616)
	{
		case 0:
			func_304(0);
			iLocal_898 = func_516("BERRY_LIFT_HORSE", -1300031296, 9, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_HELP"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_HELP", true);
			}
			func_517("BERRY_CON_LIFT", -1, 0, 0, 0, 1);
			func_232(&uLocal_675);
			iLocal_616 = 1;
			break;
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0, 255439828, false);
			PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
			PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
			PAD::DISABLE_CONTROL_ACTION(0, -1046962283, false);
			if (func_518(iLocal_898, 1))
			{
				func_519(iLocal_898, 1);
			}
			func_520();
			func_521();
			if (func_522(&(Local_15.f_162), "BERRY_CANCEL_LIFT", 0f, 0f, 0f, &(uLocal_443[1]), 992265328, 5f, 0f, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1704213876, 0) || func_292(&uLocal_675) >= 20f)
			{
				func_237(&iLocal_538, 0);
				func_330(&iLocal_898, 1, 1);
				func_330(&(Local_15.f_162), 1, 1);
				func_232(&uLocal_669);
				func_339(1);
				iLocal_616 = 2;
			}
			if (func_523(iLocal_898, 1))
			{
				PAD::SET_PAD_SHAKE(0, 100, 100);
			}
			if (func_524(iLocal_898, 1))
			{
				func_330(&iLocal_898, 1, 1);
				func_339(1);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(&(uLocal_443[1]), true);
				PED::SET_PED_LASSO_HOGTIE_FLAG(&(uLocal_443[1]), 0, 1);
				if (iLocal_838 == 1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
					iLocal_838 = 0;
				}
				func_30(12, 0, 0, "RE_HONOR_SAVED_VICTIM", &(uLocal_443[1]), 0, 1065353216, 0);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "LIFT_BOOL", true, false);
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_MOURN");
				PED::SET_PED_CAN_RAGDOLL(&(uLocal_443[0]), true);
				func_232(&uLocal_633);
				func_232(&uLocal_642);
				func_330(&(Local_15.f_162), 1, 1);
				func_525();
				iLocal_860 = func_1(0, 0, 0);
				iLocal_616 = 3;
			}
			break;
		case 2:
			if (iLocal_840 == 0)
			{
				if (iLocal_753 > 0 && func_230(0f, 1, Global_35, 1))
				{
					iLocal_860 = func_1(3, 0, 0);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "LIFT_BOOL", true, false);
					if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_BREAK_HELP"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_BREAK_HELP", true);
					}
					iLocal_840 = 1;
					if (iLocal_838 == 1)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
						iLocal_838 = 0;
					}
				}
			}
			if (PED::IS_PED_RAGDOLL(&(uLocal_443[1])))
			{
				func_213(&(uLocal_443[1]), 0, 0);
			}
			if (func_526() && iLocal_840)
			{
				if (func_292(&uLocal_669) >= 10f)
				{
					func_15(7);
				}
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

void func_295()
{
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(792302887, ENTITY::GET_ENTITY_COORDS(&(uLocal_443[1]), true, false), 5f))
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_738);
	}
}

void func_296()
{
	if (func_506(&(uLocal_443[1]), 0, &(Local_15.f_5), &iLocal_778, 0, 0))
	{
		Local_15.f_45 = 1;
		if (iLocal_825 == 0)
		{
			if (PED::IS_PED_ON_MOUNT(&(uLocal_443[1])))
			{
				if ((iLocal_778 == 256 || iLocal_778 == 4) || iLocal_778 == 8)
				{
					iLocal_825 = 1;
					func_231(&(uLocal_443[1]), Global_35, func_180(24), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_527(&(Local_15.f_5), &iLocal_778);
					func_232(&uLocal_726);
					return;
				}
			}
		}
		if (((iLocal_825 && func_230(0f, 1, &(uLocal_443[1]), 1)) && func_292(&uLocal_726) > 6f) || iLocal_825 == 0)
		{
			func_324();
			if (Local_15.f_48 == 0)
			{
				func_86(&Local_15, &(Local_15.f_48), Local_15.f_3, &(Local_15.f_51.f_6));
			}
			Local_15.f_44 = 1;
			func_25(Global_1935630, 4);
			func_15(4);
		}
	}
}

void func_297()
{
	switch (iLocal_760)
	{
		case 0:
			if (func_230(-4f, 1, &(uLocal_443[1]), 1) && func_292(&uLocal_633) > 2.4f)
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(12), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_760++;
			}
			break;
		case 1:
			if (func_292(&uLocal_633) > 3.4f)
			{
				func_231(Global_35, &(uLocal_443[1]), func_180(164), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_760++;
			}
			break;
		case 2:
			if (func_230(-1f, 1, 0, 0) && !func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(13), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_760++;
			}
			Jump @686; //curOff = 284
			if (func_230(-3f, 1, 0, 0) && func_230(-4f, 1, &(uLocal_443[1]), 1))
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(14), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_760++;
			}
			Jump @686; //curOff = 372
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_422, "MOURN_LOOP", 1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_TALK", true);
				iLocal_760++;
			}
			Jump @686; //curOff = 410
			if (func_230(0f, 1, 0, 0) && func_230(-4f, 1, &(uLocal_443[1]), 1))
			{
				func_238(Local_559[1 /*17*/], "RETW_ILO_OFFER_HELP");
				func_225(Local_559[1 /*17*/], 1, 0);
				func_237(&iLocal_538, 0);
				iLocal_860 = func_1(2, 0, 0);
				if (func_240())
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(15), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(23), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_760++;
			}
			Jump @686; //curOff = 588
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_MOURN_SUBTLE");
			if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_MOURN_SUBTLE"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "TALK_BOOL", true, false);
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_422, "MOURN_SUBTLE", 1) && ANIMSCENE::GET_ANIM_SCENE_PHASE(Local_422) >= 0.99f)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_MOURN_SUBTLE", true);
				iLocal_760++;
			}
		}

void func_298()
{
	int iVar0;
	struct<7> Var1;
	int iVar9;

	Var1.f_5 = 1;
	Var1.f_6 = 1;
	switch (iLocal_740)
	{
		case 0:
			if ((func_230(4f, 1, 0, 0) && func_230(-4f, 1, &(uLocal_443[1]), 1)) && ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_TALK"))
			{
				iVar0 = 26;
				if (func_528(0))
				{
					iVar0 = 28;
				}
				if (func_170(1) > 0)
				{
					iVar0 = 30;
				}
				if (func_231(&(uLocal_443[1]), Global_35, func_180(iVar0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_TALK", true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "TALK_BOOL", false, false);
					iLocal_860 = func_1(3, 0, 0);
					func_225(Local_559[1 /*17*/], 0, 0);
					func_225(Local_559[2 /*17*/], 0, 0);
					iLocal_740++;
				}
			}
			break;
		case 1:
			if (iLocal_822 == 0 && func_230(-4f, 1, &(uLocal_443[1]), 1))
			{
				iLocal_822 = 1;
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "TALK_BOOL", true, false);
				func_237(&iLocal_538, 0);
				iLocal_860 = func_1(2, 0, 0);
				func_236(Local_559[1 /*17*/], 0, 1);
				func_236(Local_559[2 /*17*/], 0, 1);
				func_225(Local_559[1 /*17*/], 1, 0);
				func_225(Local_559[2 /*17*/], 1, 0);
				iLocal_623 = 7;
				(Local_559[1 /*17*/])->f_13 = func_180(83);
				(Local_559[2 /*17*/])->f_13 = func_180(84);
				func_238(Local_559[1 /*17*/], func_529(4));
				func_238(Local_559[2 /*17*/], func_529(6));
				func_232(&uLocal_645);
			}
			break;
		case 2:
			func_530();
			if (!func_235())
			{
				if (func_231(&(uLocal_443[1]), Global_35, func_180(34), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					func_530();
					iLocal_740++;
				}
			}
			break;
		case 3:
			func_530();
			if (!func_235())
			{
				if (func_228(&(uLocal_443[1]), Global_35, func_180(35), 2f, 0))
				{
					func_530();
					func_225(Local_559[1 /*17*/], 0, 0);
					func_236(Local_559[2 /*17*/], 0, 1);
					func_237(&iLocal_538, 0);
					iLocal_860 = func_1(3, 0, 0);
					func_225(Local_559[2 /*17*/], 1, 0);
					(Local_559[2 /*17*/])->f_13 = func_180(69);
					func_238(Local_559[2 /*17*/], "BEAT_GRT_NEG");
					iLocal_623 = 8;
					iLocal_624 = 0;
					iLocal_740++;
				}
			}
			break;
		case 4:
			func_530();
			func_320();
			if (!func_235())
			{
				if (func_531())
				{
					func_459(Global_35, &(uLocal_443[1]), "ARTHUR_FAREWELL_CONTRIBUTION_RESPONSE", 0, -1082130432, 2, 0, 0, 1, 1, 1, -417894478, 1, 1, 0, 0);
					iLocal_740++;
				}
				else
				{
					Var1 = "ACCEPT_INVITATION";
					Var1.f_3 = -417894478;
					Var1.f_4 = &uLocal_443[1];
					Var1.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
					Var1.f_6 = 0;
					Var1.f_2 = 3;
					Var1.f_1 = "John";
					iVar9 = AUDIO::_0x72E4D1C4639BC465(Global_35, &Var1);
					if (iVar9 >= 0)
					{
						AUDIO::_0xB18FEC133C7C6C69(iVar9);
					}
					iLocal_740++;
				}
			}
			break;
		case 5:
			func_530();
			func_320();
			if (!func_300(Global_35))
			{
				if (func_230(2f, 1, 0, 0) && func_230(-4f, 1, &(uLocal_443[1]), 1))
				{
					if (func_231(&(uLocal_443[1]), Global_35, func_180(36), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
						iLocal_740++;
					}
				}
			}
			else
			{
				iLocal_740++;
			}
			break;
		case 6:
			func_530();
			if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(&(uLocal_443[1]), -1) || func_532(&(uLocal_443[1]), "canwalk", 1067030938))
			{
				func_32(&(uLocal_443[0]), 0, -1082130432, -1082130432, -1, -1, -1, -1082130432);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uLocal_443[0]);
				func_15(6);
			}
			break;
		case 7:
			func_530();
			if (!func_235())
			{
				if (func_231(&(uLocal_443[1]), Global_35, func_180(33), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_MOURN");
					iLocal_740++;
				}
			}
			break;
		case 8:
			func_530();
			if (func_230(-4f, 1, &(uLocal_443[1]), 1))
			{
				if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_MOURN"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_MOURN", true);
				}
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "MOURN_BOOL", true, false);
				iLocal_740++;
			}
			break;
		case 9:
			func_530();
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_422, "LADY"))
			{
				iLocal_623 = 9;
				func_182(Local_559[0 /*17*/], 0);
				func_184(Local_559[0 /*17*/], 12f);
				(Local_559[1 /*17*/])->f_13 = func_180(74);
				(Local_559[2 /*17*/])->f_13 = func_180(75);
				func_238(Local_559[1 /*17*/], "RE_INTER_POS");
				func_238(Local_559[2 /*17*/], "RE_INTER_ANTAGONIZE");
				func_238(Local_559[0 /*17*/], "INTERACT_ROB");
				func_328(Local_559[0 /*17*/], 1);
				func_225(Local_559[1 /*17*/], 1, 0);
				func_225(Local_559[2 /*17*/], 1, 0);
				TASK::_TASK_MOVE_IN_TRAFFIC(&(uLocal_443[1]), 1f, 656, 0);
				func_15(8);
			}
			break;
	}
}

void func_299()
{
	int iVar0;

	switch (iLocal_741)
	{
		case 0:
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_TALK");
			if ((func_230(2f, 1, 0, 0) && func_230(-4f, 1, &(uLocal_443[1]), 1)) && ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_TALK"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_TALK", true);
				if (func_33(&(uLocal_443[1]), 1, 1) <= 20f)
				{
					iVar0 = 27;
					if (func_528(0))
					{
						iVar0 = 29;
					}
					if (func_170(1) > 0)
					{
						iVar0 = 31;
					}
					func_231(&(uLocal_443[1]), Global_35, func_180(iVar0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_741++;
			}
			break;
		case 1:
			if ((func_230(4f, 1, 0, 0) && func_292(&uLocal_645) >= 26f) && func_230(-4f, 1, &(uLocal_443[1]), 1))
			{
				if (func_33(&(uLocal_443[1]), 1, 1) <= 20f)
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(32), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_741++;
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_MOURN");
				func_225(Local_559[1 /*17*/], 0, 0);
				func_225(Local_559[2 /*17*/], 0, 0);
				func_225(Local_559[0 /*17*/], 0, 0);
				func_238(Local_559[1 /*17*/], "RE_INTER_POS");
				func_238(Local_559[2 /*17*/], "RE_INTER_ANTAGONIZE");
			}
			break;
		case 2:
			if (func_230(-4f, 1, &(uLocal_443[1]), 1))
			{
				func_237(&iLocal_538, 0);
				if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422, "PB_MOURN"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_MOURN", true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "MOURN_BOOL", true, false);
					iLocal_741++;
				}
			}
			break;
		case 3:
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_422, "LADY"))
			{
				iLocal_860 = func_1(3, 0, 0);
				iLocal_623 = 9;
				func_182(Local_559[0 /*17*/], 0);
				func_184(Local_559[0 /*17*/], 12f);
				func_236(Local_559[1 /*17*/], 0, 1);
				func_236(Local_559[2 /*17*/], 0, 1);
				(Local_559[1 /*17*/])->f_13 = func_180(74);
				(Local_559[2 /*17*/])->f_13 = func_180(75);
				func_328(Local_559[0 /*17*/], 1);
				func_238(Local_559[1 /*17*/], "RE_INTER_POS");
				func_238(Local_559[2 /*17*/], "RE_INTER_ANTAGONIZE");
				func_238(Local_559[0 /*17*/], "INTERACT_ROB");
				func_225(Local_559[1 /*17*/], 1, 0);
				func_225(Local_559[2 /*17*/], 1, 0);
				TASK::_TASK_MOVE_IN_TRAFFIC(&(uLocal_443[1]), 1f, 656, 0);
				func_15(8);
			}
			break;
	}
}

int func_300(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		return 1;
	}
	if (PED::IS_PED_ON_MOUNT(iParam0))
	{
		return 1;
	}
	if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true))
	{
		return 1;
	}
	return 0;
}

void func_301()
{
	Local_422.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_422.f_5, 0, 0, false, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_422.f_1, "Female", &(uLocal_443[1]), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_422.f_1, "player", Global_35, 0);
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_422.f_1, 1, 0))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_422.f_1);
	}
	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_422.f_1, "PBL_GOODBYE");
}

int func_302()
{
	int iVar0;

	if (func_257())
	{
		iVar0 = func_533(0);
		switch (iLocal_512)
		{
			case 6:
				if (iVar0 == 2)
				{
					return 1;
				}
				break;
			case 9:
				if (iVar0 == 2097152)
				{
					return 1;
				}
				break;
			case 11:
				if (iVar0 == 8192)
				{
					return 1;
				}
				break;
		}
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_303()
{
	int iVar0;

	if (func_257())
	{
		iVar0 = func_533(0);
		if (iVar0 == 0 || MAP::_0xF47A1EB2A538A3A3())
		{
			return 0;
		}
		switch (iLocal_512)
		{
			case 6:
				if (iVar0 != 2)
				{
					if (iVar0 != 32)
					{
						return 1;
					}
				}
				break;
			case 9:
				if (iVar0 != 2097152)
				{
					return 1;
				}
				break;
			case 11:
				if (iVar0 != 8192)
				{
					return 1;
				}
				break;
		}
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_304(int iParam0)
{
	func_233(&uLocal_0);
	func_534(1, iParam0, 0);
	_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
	func_535();
}

int func_305(var uParam0, int iParam1, vector3 vParam2)
{
	if (func_536(Global_36, &(uParam0->f_4), 1f, 1, 0))
	{
		if (func_537(Global_35, uParam0->f_4, 10f, 1, 1))
		{
			if (PED::IS_PED_HEADING_TOWARDS_POSITION(iParam1, vParam2, 80f))
			{
				uParam0->f_3 = 0;
				func_233(&(uParam0->f_10));
				return 0;
			}
			if (PATHFIND::GET_GPS_BLIP_ROUTE_FOUND())
			{
				if (!MAP::_0xF47A1EB2A538A3A3())
				{
					uParam0->f_3 = 1;
				}
				else
				{
					uParam0->f_3 = 0;
					func_233(&(uParam0->f_10));
				}
			}
		}
		else if (!PED::IS_PED_HEADING_TOWARDS_POSITION(iParam1, vParam2, 80f))
		{
			if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(iParam1)) != 0f)
			{
				uParam0->f_3 = 1;
			}
		}
		else
		{
			uParam0->f_3 = 0;
			func_233(&(uParam0->f_10));
		}
	}
	if (uParam0->f_3 == 1)
	{
		if (!func_291(&(uParam0->f_10)))
		{
			func_232(&(uParam0->f_10));
		}
		else if (func_292(&(uParam0->f_10)) >= 3f)
		{
			if (uParam0->f_3 == 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_306()
{
	switch (iLocal_746)
	{
		case 0:
			func_232(&uLocal_651);
			iLocal_746++;
			break;
		case 1:
			if ((func_230(0f, 1, 0, 0) && func_292(&uLocal_651) >= 2f) && !func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(98), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_821 = 1;
				func_233(&uLocal_651);
				iLocal_746++;
			}
			break;
		case 2:
			if ((func_230(0f, 1, 0, 0) && func_292(&uLocal_651) >= 15f) && !func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(99), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_821 = 1;
				func_233(&uLocal_651);
				iLocal_746++;
			}
			break;
		case 3:
			if ((func_230(0f, 1, 0, 0) && func_292(&uLocal_651) >= 20f) && !func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(100), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_821 = 1;
				func_233(&uLocal_651);
				iLocal_746++;
			}
			break;
		case 4:
			if ((func_230(0f, 1, 0, 0) && func_292(&uLocal_651) >= 8f) && !func_235())
			{
				func_238(Local_559[1 /*17*/], "RE_INTER_POS");
				func_238(Local_559[2 /*17*/], "RE_INTER_ANTAGONIZE");
				func_538();
			}
			break;
	}
}

int func_307()
{
	switch (Local_15.f_51.f_4)
	{
		case 0:
			return 318;
		case 1:
			return 318;
		case 2:
			return 198;
		case 3:
			return 198;
		case 4:
			return 240;
		case 5:
			return 198;
		case 6:
			return 240;
		case 7:
			return 300;
		case 8:
			return 318;
		case 9:
			return 240;
	}
	return 720;
}

int func_308(var uParam0, int iParam1)
{
	if (!func_291(&(uParam0->f_16)))
	{
		func_232(&(uParam0->f_16));
	}
	else if (func_539(&(uParam0->f_16)) > IntToFloat(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_309()
{
	switch (iLocal_747)
	{
		case 0:
			func_232(&uLocal_651);
			iLocal_747++;
			break;
		case 1:
			if ((func_230(0f, 1, 0, 0) && func_292(&uLocal_651) >= 2f) && !func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(101), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_233(&uLocal_651);
				iLocal_821 = 1;
				iLocal_747++;
			}
			break;
		case 2:
			if ((func_230(0f, 1, 0, 0) && func_292(&uLocal_651) >= 17f) && !func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(102), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_233(&uLocal_651);
				iLocal_821 = 1;
				iLocal_747++;
			}
			break;
		case 3:
			if ((func_230(0f, 1, 0, 0) && func_292(&uLocal_651) >= 15f) && !func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(103), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_233(&uLocal_651);
				iLocal_821 = 1;
				iLocal_747++;
			}
			break;
		case 4:
			if ((func_230(0f, 1, 0, 0) && func_292(&uLocal_651) >= 18f) && !func_235())
			{
				func_238(Local_559[1 /*17*/], "RE_INTER_POS");
				func_238(Local_559[2 /*17*/], "RE_INTER_ANTAGONIZE");
				func_538();
			}
			break;
	}
}

int func_310(var uParam0, int iParam1, int iParam2, float fParam3)
{
	float fVar0;

	switch (uParam0->f_19)
	{
		case 0:
			uParam0->f_7 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
			func_232(&(uParam0->f_13));
			uParam0->f_19 = 1;
			uParam0->f_1 = fParam3;
			break;
		case 1:
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35));
				if (fVar0 == 0f)
				{
					fParam3 = 4f;
				}
				else if (fVar0 == 1f)
				{
					fParam3 = 20f;
				}
				else if (fVar0 > 1f && fVar0 <= 1.5f)
				{
					fParam3 = 12f;
				}
				else if (fVar0 > 1.5f && fVar0 <= 2f)
				{
					fParam3 = 10f;
				}
				else
				{
					fParam3 = 10f;
				}
			}
			if (func_539(&(uParam0->f_13)) > fParam3)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, uParam0->f_7, IntToFloat(iParam2), IntToFloat(iParam2), 2f, false, true, 0))
				{
					uParam0->f_19 = 2;
				}
				else
				{
					uParam0->f_19 = 0;
				}
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, uParam0->f_7, IntToFloat(iParam2), IntToFloat(iParam2), IntToFloat(iParam2), false, true, 0))
			{
				return 1;
			}
			else
			{
				uParam0->f_19 = 0;
			}
			break;
	}
	return 0;
}

void func_311()
{
	switch (iLocal_748)
	{
		case 0:
			func_232(&uLocal_651);
			iLocal_748++;
			break;
		case 1:
			if ((func_230(0f, 1, 0, 0) && func_292(&uLocal_651) >= 0f) && !func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(104), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_233(&uLocal_651);
				iLocal_821 = 1;
				iLocal_748++;
			}
			break;
		case 2:
			if ((func_230(0f, 1, 0, 0) && func_292(&uLocal_651) >= 25f) && !func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(105), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_233(&uLocal_651);
				iLocal_821 = 1;
				iLocal_748++;
			}
			break;
		case 3:
			if ((func_230(0f, 1, 0, 0) && func_292(&uLocal_651) >= 15f) && !func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(106), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_233(&uLocal_651);
				iLocal_821 = 1;
				iLocal_748++;
			}
			break;
		case 4:
			if ((func_230(0f, 1, 0, 0) && func_292(&uLocal_651) >= 13f) && !func_235())
			{
				func_238(Local_559[1 /*17*/], "RE_INTER_POS");
				func_238(Local_559[2 /*17*/], "RE_INTER_ANTAGONIZE");
				func_538();
			}
			break;
	}
}

int func_312()
{
	if (func_240())
	{
		if ((((iLocal_743 == 4 || iLocal_743 == 9) || iLocal_743 == 13) || iLocal_743 == 14) || iLocal_743 == 15)
		{
			if (iLocal_821)
			{
				iLocal_821 = 0;
			}
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else if ((iLocal_744 == 6 || iLocal_744 == 28) || iLocal_744 == 29)
	{
		if (iLocal_821)
		{
			iLocal_821 = 0;
		}
		return 0;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_313()
{
	switch (iLocal_759)
	{
		case 0:
			if (func_230(-4f, 1, 0, 0) && !func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(148), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_759++;
				iLocal_821 = 0;
			}
			break;
		case 1:
			if (func_230(-4f, 1, 0, 0) && !func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(149), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_759++;
				iLocal_821 = 0;
			}
			break;
		case 2:
			if (iLocal_821)
			{
				iLocal_821 = 0;
			}
			break;
	}
}

void func_314()
{
	switch (iLocal_744)
	{
		case 0:
			if (!func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(39), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_744 = 1;
			}
			break;
		case 1:
			if (func_230(0f, 1, 0, 0) && !func_235())
			{
				func_231(Global_35, &(uLocal_443[1]), func_180(51), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_744 = 2;
			}
			break;
		case 2:
			if (!func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(40), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_744 = 3;
			}
			break;
		case 3:
			if (func_230(2f, 1, 0, 0) && !func_235())
			{
				func_231(Global_35, &(uLocal_443[1]), func_180(52), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_744 = 4;
			}
			break;
		case 4:
			if (!func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(53), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_744 = 5;
			}
			break;
		case 5:
			if (!func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(41), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_744 = 6;
			}
			break;
		case 6:
			if (!func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(42), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_744 = 7;
			}
			break;
		case 7:
			if (!func_235())
			{
				func_231(Global_35, &(uLocal_443[1]), func_180(56), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_744 = 8;
			}
			break;
		case 8:
			if (!func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(43), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_744 = 9;
			}
			break;
		case 9:
			if (func_230(1f, 1, 0, 0) && !func_235())
			{
				func_231(Global_35, &(uLocal_443[1]), func_180(57), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_744 = 10;
			}
			break;
		case 10:
			if (!func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(44), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_744 = 11;
			}
			break;
		case 11:
			if (!func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(45), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_744 = 12;
			}
			break;
		case 12:
			if (!func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(46), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_744 = 13;
			}
			break;
		case 13:
			if (!func_235())
			{
				func_231(Global_35, &(uLocal_443[1]), func_180(60), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_744 = 29;
				func_232(&uLocal_702);
				func_232(&uLocal_696);
				iLocal_769 = MISC::GET_RANDOM_INT_IN_RANGE(15, 35);
			}
			break;
		case 16:
			if (func_79(Global_35, vLocal_473, 1) <= 550f || func_302())
			{
				if (!func_235())
				{
					if (func_292(&uLocal_699) > 3f || !func_291(&uLocal_699))
					{
						func_231(&(uLocal_443[1]), Global_35, func_180(151), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_232(&uLocal_720);
						iLocal_744 = 22;
					}
				}
				else
				{
					func_232(&uLocal_699);
				}
			}
			else
			{
				func_232(&uLocal_699);
			}
			break;
		case 22:
			if (!func_235())
			{
				if (func_292(&uLocal_720) > 3f)
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(157), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_744 = 23;
				}
			}
			else
			{
				func_232(&uLocal_720);
			}
			break;
		case 23:
			if (func_79(Global_35, 2411f, -1232f, 46f, 1) <= 250f)
			{
				iLocal_744 = 24;
				func_232(&uLocal_720);
			}
			else
			{
				iLocal_744 = 24;
			}
			break;
		case 24:
			if (!func_235())
			{
				if (func_292(&uLocal_720) > 0f)
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(159), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_744 = 25;
				}
			}
			else
			{
				func_232(&uLocal_720);
			}
			break;
		case 25:
			if (!func_235())
			{
				if (func_292(&uLocal_720) > 0f)
				{
					func_231(Global_35, &(uLocal_443[1]), func_180(160), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_744 = 26;
				}
			}
			else
			{
				func_232(&uLocal_720);
			}
			break;
		case 26:
			if (!func_235())
			{
				if (func_292(&uLocal_720) > 2f)
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(161), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_744 = 17;
				}
			}
			else
			{
				func_232(&uLocal_720);
			}
			break;
		case 17:
			if (bLocal_842 == 0)
			{
				if (func_79(Global_35, 2411f, -1232f, 46f, 1) <= 50f || func_79(Global_35, 2415f, -1188f, 46f, 1) <= 50f)
				{
					bLocal_842 = true;
					func_232(&uLocal_720);
				}
			}
			if (bLocal_842)
			{
				if (!func_235())
				{
					if (func_292(&uLocal_720) > 10f)
					{
						func_231(&(uLocal_443[1]), Global_35, func_180(152), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_744 = 18;
					}
				}
				else
				{
					func_232(&uLocal_720);
				}
			}
			if (func_79(Global_35, vLocal_473, 1) <= 100f)
			{
				iLocal_744 = 27;
			}
			break;
		case 18:
			if (!func_235())
			{
				if (func_292(&uLocal_720) > 1f)
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(153), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_744 = 19;
				}
			}
			else
			{
				func_232(&uLocal_720);
			}
			break;
		case 19:
			if (!func_235())
			{
				if (func_292(&uLocal_720) > 1f)
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(154), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_744 = 20;
				}
			}
			else
			{
				func_232(&uLocal_720);
			}
			break;
		case 20:
			if (!func_235())
			{
				if (func_292(&uLocal_720) > 1f)
				{
					func_231(Global_35, &(uLocal_443[1]), func_180(155), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_744 = 21;
				}
			}
			else
			{
				func_232(&uLocal_720);
			}
			break;
		case 21:
			if (!func_235())
			{
				if (func_292(&uLocal_720) > 1f)
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(156), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_744 = 27;
				}
			}
			else
			{
				func_232(&uLocal_720);
			}
			break;
		case 27:
			if (func_79(Global_35, vLocal_473, 1) <= 100f)
			{
				if (!func_235())
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(162), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_744 = 28;
				}
			}
			break;
		case 28:
			if (func_79(Global_35, vLocal_473, 1) <= 50f || func_302())
			{
				if (!func_235())
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(48), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
					func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
					iLocal_830 = 1;
					iLocal_744 = 14;
				}
			}
			break;
		case 14:
			if (!func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(47), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_744 = 15;
			}
			break;
		case 15:
			if (!func_235())
			{
				func_231(Global_35, &(uLocal_443[1]), func_180(61), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				func_232(&uLocal_696);
				iLocal_769 = MISC::GET_RANDOM_INT_IN_RANGE(15, 35);
				iLocal_744 = 30;
			}
			break;
		case 29:
			if (func_79(Global_35, vLocal_473, 1) <= 530f || func_302())
			{
				iLocal_744 = 16;
			}
			if ((iLocal_770 < 3 && iLocal_807 == 0) && func_79(Global_35, vLocal_473, 1) > 600f)
			{
				if (func_292(&uLocal_696) > IntToFloat(iLocal_769))
				{
					if (!func_235())
					{
						if (func_292(&uLocal_702) > 3f || !func_291(&uLocal_702))
						{
							func_231(&(uLocal_443[1]), Global_35, func_180(49), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
							func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
							func_232(&uLocal_696);
							iLocal_769 = MISC::GET_RANDOM_INT_IN_RANGE(15, 35);
							iLocal_770++;
						}
					}
					else
					{
						func_232(&uLocal_702);
					}
				}
				else
				{
					func_232(&uLocal_702);
				}
			}
			break;
		case 30:
			break;
	}
}

void func_315()
{
	switch (iLocal_743)
	{
		case 0:
			if (func_230(3f, 1, 0, 0) && !func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(39), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_743 = 1;
			}
			break;
		case 1:
			if (func_230(-2f, 1, 0, 0) && !func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(40), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_743 = 2;
			}
			break;
		case 2:
			if (func_230(-2f, 1, 0, 0) && !func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(41), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_743 = 3;
			}
			break;
		case 3:
			if (func_230(-2f, 1, 0, 0) && !func_235())
			{
				func_231(Global_35, &(uLocal_443[1]), func_180(55), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_743 = 4;
			}
			break;
		case 4:
			if (func_230(-4f, 1, 0, 0) && !func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(42), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				func_232(&uLocal_729);
				iLocal_743 = 5;
			}
			break;
		case 5:
			if (func_230(-2f, 1, 0, 0) && !func_235())
			{
				if (func_292(&uLocal_729) > 1f)
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(43), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
					func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
					iLocal_743 = 6;
				}
			}
			else
			{
				func_232(&uLocal_729);
			}
			break;
		case 6:
			if (func_230(-2f, 1, 0, 0) && !func_235())
			{
				func_231(Global_35, &(uLocal_443[1]), func_180(58), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_743 = 7;
			}
			break;
		case 7:
			if (func_230(-3f, 1, 0, 0) && !func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(45), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_743 = 8;
			}
			break;
		case 8:
			if (func_230(-3f, 1, 0, 0) && !func_235())
			{
				func_231(Global_35, &(uLocal_443[1]), func_180(59), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_743 = 9;
			}
			break;
		case 9:
			if (!func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(47), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_743 = 10;
			}
			break;
		case 10:
			if (!func_235())
			{
				func_231(Global_35, &(uLocal_443[1]), func_180(61), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				func_232(&uLocal_729);
				iLocal_743 = 11;
			}
			break;
		case 11:
			if (!func_235())
			{
				if (func_292(&uLocal_729) > 1f)
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(48), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
					func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
					iLocal_743 = 12;
				}
			}
			else
			{
				func_232(&uLocal_729);
			}
			break;
		case 12:
			if (!func_235())
			{
				func_231(Global_35, &(uLocal_443[1]), func_180(62), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				func_232(&uLocal_729);
				iLocal_743 = 13;
			}
			break;
		case 13:
			if (!func_235())
			{
				if (func_292(&uLocal_729) > 1f)
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(49), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
					func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
					iLocal_743 = 14;
				}
			}
			else
			{
				func_232(&uLocal_729);
			}
			break;
		case 14:
			if (!func_235() && func_79(Global_35, vLocal_473, 1) <= 200f)
			{
				iLocal_830 = 1;
				func_231(&(uLocal_443[1]), Global_35, func_180(50), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_743 = 15;
			}
			break;
		case 15:
			break;
	}
}

int func_316()
{
	if (func_257())
	{
		switch (iLocal_512)
		{
			case 6:
				return 80;
			case 9:
				return 80;
			case 11:
				return 120;
		}
	}
	return 60;
}

void func_317()
{
	switch (iLocal_756)
	{
		case 0:
			func_232(&uLocal_690);
			iLocal_756++;
			break;
		case 1:
			if (iLocal_807 == 0)
			{
				if (func_230(-4f, 1, &(uLocal_443[1]), 1) && func_292(&uLocal_690) >= 5f)
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(101), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_232(&uLocal_690);
					iLocal_756++;
				}
			}
			break;
		case 2:
			if (iLocal_807 == 0)
			{
				if (func_230(-4f, 1, &(uLocal_443[1]), 1) && func_292(&uLocal_690) >= BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(-3, 65536)))
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(105), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_232(&uLocal_690);
					iLocal_756++;
				}
			}
			break;
		case 3:
			if (iLocal_807 == 0)
			{
				if (func_230(-4f, 1, &(uLocal_443[1]), 1) && func_292(&uLocal_690) >= BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(-3, 65536)))
				{
					func_540();
					func_231(&(uLocal_443[1]), Global_35, func_180(107), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_324();
					func_15(8);
					func_238(Local_559[1 /*17*/], "RE_INTER_POS");
					func_238(Local_559[2 /*17*/], "RE_INTER_ANTAGONIZE");
					iLocal_756++;
				}
			}
			break;
	}
}

int func_318()
{
	int iVar0;

	iVar0 = PED::GET_MOUNT(Global_35);
	switch (iLocal_625)
	{
		case 0:
			func_44(0);
			if (MAP::DOES_BLIP_EXIST(iLocal_779))
			{
				MAP::REMOVE_BLIP(&iLocal_779);
			}
			func_324();
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
				iLocal_838 = 1;
				func_541(Global_35, &iLocal_742, 65, 256, 0, 1084227584, 100, 0, 0);
				func_542(iVar0);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 0, false, false);
				if (!func_80(iVar0, -982327190))
				{
					TASK::TASK_STAND_STILL(iVar0, 10000);
				}
				if (TASK::IS_PED_STILL(iVar0) && ENTITY::GET_ENTITY_SPEED(Global_35) <= 0.3f)
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_422.f_1, "HORSE", iVar0, 0);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_422.f_1, PED::GET_PED_BONE_COORDS(iVar0, 0, 0f, 0f, 0f), ENTITY::GET_ENTITY_ROTATION(iVar0, 2), 2);
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_422.f_1, iVar0, PED::GET_PED_BONE_INDEX(iVar0, 0));
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_422.f_1, 0f, 0f, 0f, 0f, 0f, 0f, 2);
					iLocal_625 = 1;
				}
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(&(uLocal_443[1]), true))
			{
				iLocal_784 = PED::GET_VEHICLE_PED_IS_IN(&(uLocal_443[1]), false);
				VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_784, 2f, 3, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
				iLocal_838 = 1;
				iLocal_625 = 4;
			}
			else if (TASK::_0xEFC4303DDC6E60D3(Global_35) && TASK::_0xED1F514AF4732258(Global_35) == PED::GET_MOUNT(&(uLocal_443[1])))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
				iLocal_838 = 1;
				iLocal_625 = 5;
			}
			break;
		case 1:
			ANIMSCENE::START_ANIM_SCENE(Local_422.f_1);
			func_327(&(uLocal_443[1]));
			iLocal_625 = 2;
			break;
		case 2:
			if (fLocal_737 >= 0.98f)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(&(uLocal_443[1]), 1, 1);
				iLocal_625 = 3;
			}
			if (iLocal_836 == 0)
			{
				if (fLocal_737 >= 0.316384f)
				{
					func_543(1216207974, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					func_30(12, 0, 0, "RE_HONOR_HELPED_VICTIM", &(uLocal_443[1]), 0, 1065353216, 0);
					iLocal_836 = 1;
				}
			}
			break;
		case 3:
			if (func_544(Local_422.f_1))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_422.f_1))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_422.f_1);
				}
				if (iLocal_838 == 1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
					iLocal_838 = 0;
				}
				func_540();
				func_24();
				iLocal_623 = 9;
				func_182(Local_559[0 /*17*/], 0);
				func_184(Local_559[0 /*17*/], 12f);
				func_328(Local_559[0 /*17*/], 1);
				func_236(Local_559[1 /*17*/], 0, 1);
				func_236(Local_559[2 /*17*/], 0, 1);
				(Local_559[1 /*17*/])->f_13 = func_180(74);
				(Local_559[2 /*17*/])->f_13 = func_180(75);
				func_238(Local_559[1 /*17*/], "RE_INTER_POS");
				func_238(Local_559[2 /*17*/], "RE_INTER_ANTAGONIZE");
				func_238(Local_559[0 /*17*/], "INTERACT_ROB");
				func_225(Local_559[1 /*17*/], 1, 0);
				func_225(Local_559[2 /*17*/], 1, 0);
				iLocal_624 = 0;
				iLocal_625 = 6;
			}
			break;
		case 4:
			if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_784))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(&(uLocal_443[1]), false))
				{
					func_540();
				}
				else
				{
					func_30(12, 0, 0, "RE_HONOR_HELPED_VICTIM", &(uLocal_443[1]), 0, 1065353216, 0);
					func_231(&(uLocal_443[1]), Global_35, func_180(64), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_623 = 9;
					func_182(Local_559[0 /*17*/], 0);
					func_184(Local_559[0 /*17*/], 12f);
					func_328(Local_559[0 /*17*/], 1);
					func_236(Local_559[1 /*17*/], 0, 1);
					func_236(Local_559[2 /*17*/], 0, 1);
					(Local_559[1 /*17*/])->f_13 = func_180(74);
					(Local_559[2 /*17*/])->f_13 = func_180(75);
					func_238(Local_559[1 /*17*/], "RE_INTER_POS");
					func_238(Local_559[2 /*17*/], "RE_INTER_ANTAGONIZE");
					func_238(Local_559[0 /*17*/], "INTERACT_ROB");
					func_225(Local_559[1 /*17*/], 1, 0);
					func_225(Local_559[2 /*17*/], 1, 0);
					iLocal_624 = 0;
					iLocal_625 = 6;
				}
			}
			break;
		case 5:
			if (TASK::IS_PED_STILL(&(uLocal_443[1])))
			{
				if (iLocal_838 == 1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
					iLocal_838 = 0;
				}
				func_540();
				func_30(12, 0, 0, "RE_HONOR_HELPED_VICTIM", &(uLocal_443[1]), 0, 1065353216, 0);
				iLocal_623 = 9;
				func_182(Local_559[0 /*17*/], 0);
				func_184(Local_559[0 /*17*/], 12f);
				func_328(Local_559[0 /*17*/], 1);
				func_236(Local_559[1 /*17*/], 0, 1);
				func_236(Local_559[2 /*17*/], 0, 1);
				(Local_559[1 /*17*/])->f_13 = func_180(74);
				(Local_559[2 /*17*/])->f_13 = func_180(75);
				func_238(Local_559[1 /*17*/], "RE_INTER_POS");
				func_238(Local_559[2 /*17*/], "RE_INTER_ANTAGONIZE");
				func_238(Local_559[0 /*17*/], "INTERACT_ROB");
				func_225(Local_559[1 /*17*/], 1, 0);
				func_225(Local_559[2 /*17*/], 1, 0);
				iLocal_624 = 0;
				iLocal_625 = 6;
			}
			break;
		case 6:
			func_25(Global_1935630, 4);
			if (iLocal_838 == 1)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				iLocal_838 = 0;
			}
			return 1;
	}
	return 0;
}

int func_319(bool bParam0)
{
	switch (iLocal_745)
	{
		case 0:
			if (func_230(-4f, 1, &(uLocal_443[1]), 1) && func_230(0f, 1, Global_35, 1))
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(63), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_745++;
				func_39(&iLocal_779);
			}
			break;
		case 1:
			if (func_230(-4f, 1, &(uLocal_443[1]), 1))
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(64), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_745++;
				func_39(&iLocal_779);
			}
			break;
		case 2:
			if (!func_235())
			{
				func_231(Global_35, &(uLocal_443[1]), func_180(65), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
				iLocal_745++;
				func_39(&iLocal_779);
			}
			break;
		case 3:
			if (fLocal_737 >= 0.45f || bParam0)
			{
				if (!func_235())
				{
					func_231(Global_35, &(uLocal_443[1]), func_180(66), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 15, 0);
					func_286(Global_35, &(uLocal_443[1]), &uLocal_513, 2000, 15, 0);
					iLocal_745++;
				}
			}
			break;
		case 4:
			iLocal_745++;
			break;
		case 5:
			iLocal_745++;
			break;
		case 6:
			return 1;
	}
	return 0;
}

void func_320()
{
	if ((func_300(Global_35) && !func_300(&(uLocal_443[1]))) && !func_545(iLocal_782))
	{
		if (iLocal_793 == 0)
		{
			iLocal_793 = 1;
			func_232(&uLocal_654);
			func_546();
			if (VOLUME::DOES_VOLUME_EXIST(iLocal_491))
			{
				VOLUME::DELETE_VOLUME(iLocal_491);
			}
			if (VOLUME::DOES_VOLUME_EXIST(iLocal_492))
			{
				VOLUME::DELETE_VOLUME(iLocal_492);
			}
			if (VOLUME::DOES_VOLUME_EXIST(iLocal_493))
			{
				VOLUME::DELETE_VOLUME(iLocal_493);
			}
			if (VOLUME::DOES_VOLUME_EXIST(iLocal_494))
			{
				VOLUME::DELETE_VOLUME(iLocal_494);
			}
			if (VOLUME::DOES_VOLUME_EXIST(iLocal_495))
			{
				VOLUME::DELETE_VOLUME(iLocal_495);
			}
			if (VOLUME::DOES_VOLUME_EXIST(iLocal_496))
			{
				VOLUME::DELETE_VOLUME(iLocal_496);
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				TASK::TASK_MOUNT_ANIMAL(&(uLocal_443[1]), iLocal_785, -1, 0, 1.5f, 1, 0, 0);
			}
			if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_784, true))
			{
				TASK::TASK_ENTER_VEHICLE(&(uLocal_443[1]), iLocal_784, -1, 0, 1.5f, 8388608, 0);
			}
		}
		else if (!func_80(&(uLocal_443[1]), 1868526510) && !func_80(&(uLocal_443[1]), -1794415470))
		{
			iLocal_793 = 0;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(iLocal_779) && func_300(&(uLocal_443[1])))
	{
		if (iLocal_824 == 0)
		{
			iLocal_824 = 1;
			iLocal_812 = 1;
			if (func_291(&uLocal_636))
			{
				func_233(&uLocal_636);
			}
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_422))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_422);
			}
			if (!VOLUME::DOES_VOLUME_EXIST(&(iLocal_900[0])))
			{
				iLocal_900[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1646.43f, -284.92f, 166.25f, 0f, 0f, 0f, 10f, 10f, 3f, "GPS Volume 0");
			}
			if (!VOLUME::DOES_VOLUME_EXIST(&(iLocal_900[1])))
			{
				iLocal_900[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1410.98f, -343.39f, 104.89f, 0f, 0f, 0f, 10f, 10f, 3f, "GPS Volume 1");
			}
			if (!VOLUME::DOES_VOLUME_EXIST(&(iLocal_900[2])))
			{
				iLocal_900[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1382.54f, -88.17f, 87.18f, 0f, 0f, 0f, 10f, 10f, 3f, "GPS Volume 2");
			}
			PATHFIND::_0xF2A2177AC848B3A8(&(iLocal_900[0]), 0, 1);
			PATHFIND::_0xF2A2177AC848B3A8(&(iLocal_900[1]), 0, 1);
			PATHFIND::_0xF2A2177AC848B3A8(&(iLocal_900[2]), 0, 1);
			func_547(Global_1935630, 4);
			iLocal_779 = MAP::BLIP_ADD_FOR_COORDS(408396114, vLocal_473);
			MAP::BLIP_ADD_MODIFIER(iLocal_779, -1878373110);
			MAP::BLIP_ADD_MODIFIER(iLocal_779, 231194138);
			func_232(&uLocal_672);
			func_232(&uLocal_648);
			func_232(&uLocal_705);
		}
	}
}

void func_321()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	if (iLocal_817 == 0)
	{
		if (PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_ON_MOUNT(&(uLocal_443[1])))
		{
			if (PAD::IS_CONTROL_PRESSED(0, -640622144))
			{
				if (!func_291(&uLocal_711))
				{
					func_337(&uLocal_711, 0);
				}
			}
			if (func_292(&uLocal_711) > 1f)
			{
				if (func_231(&(uLocal_443[1]), Global_35, func_180(109), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					iLocal_817 = 1;
					func_233(&uLocal_711);
				}
			}
		}
	}
	bVar0 = PED::IS_PED_ON_MOUNT(&(uLocal_443[1]));
	bVar1 = PED::IS_PED_ON_MOUNT(Global_35);
	bVar2 = PED::IS_PED_IN_ANY_VEHICLE(&(uLocal_443[1]), false);
	bVar3 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, false);
	if ((bVar0 && !bVar1) || (bVar2 && !bVar3))
	{
		if (iLocal_818 == 0)
		{
			if ((bVar0 && func_228(&(uLocal_443[1]), Global_35, func_180(110), 1f, 0)) || bVar2)
			{
				iLocal_818 = 1;
				iLocal_771++;
				if (iLocal_771 > 1)
				{
					func_538();
				}
			}
		}
	}
	else
	{
		iLocal_818 = 0;
	}
	if (bVar0 && bVar1)
	{
		if (PED::GET_MOUNT(&(uLocal_443[1])) != PED::GET_MOUNT(Global_35))
		{
			bVar4 = true;
		}
	}
	if (bVar3 && bVar2)
	{
		if (PED::GET_VEHICLE_PED_IS_IN(&(uLocal_443[1]), false) != PED::GET_VEHICLE_PED_IS_IN(Global_35, false))
		{
			bVar4 = true;
		}
	}
	if ((bVar2 && bVar1) || (bVar3 && bVar0))
	{
		bVar4 = true;
	}
	if (bVar4)
	{
		if (func_230(0, 1, &(uLocal_443[1]), 1))
		{
			iLocal_818 = 1;
			iLocal_771++;
			func_538();
		}
	}
	if (!func_291(&uLocal_663))
	{
		func_232(&uLocal_663);
	}
	else if (func_292(&uLocal_663) >= 20f)
	{
		if ((bVar1 && bVar0) && Global_1935630->f_40 == PED::GET_MOUNT(&(uLocal_443[1])))
		{
			if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35)) >= 3f)
			{
				if (func_231(&(uLocal_443[1]), Global_35, func_180(111), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					func_232(&uLocal_699);
					func_233(&uLocal_663);
				}
			}
		}
	}
	if (!func_291(&uLocal_705))
	{
		func_232(&uLocal_705);
	}
	else if (func_292(&uLocal_705) > 6f)
	{
		if (iLocal_819 == 0)
		{
			if ((bVar1 && bVar0) && Global_1935630->f_40 == PED::GET_MOUNT(&(uLocal_443[1])))
			{
				if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35)) >= 1.5f)
				{
					if (PED::_0x498F2E77982D6945(Global_35, "FoliageActive") && PED::_0x56E58D4D118FB45E(Global_35, "FoliageHeight") >= 1.8f)
					{
						if (func_231(&(uLocal_443[1]), Global_35, func_180(112), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							func_232(&uLocal_699);
							iLocal_819 = 1;
						}
					}
				}
			}
		}
	}
	if (iLocal_827 == 0)
	{
		if ((bVar1 && bVar0) && Global_1935630->f_40 == PED::GET_MOUNT(&(uLocal_443[1])))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_MOUNT(Global_35)) && ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PED::GET_MOUNT(Global_35)) >= 0.5f)
			{
				if (func_231(&(uLocal_443[1]), Global_35, func_180(113), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					iLocal_827 = 1;
				}
			}
			else if (!ENTITY::IS_ENTITY_IN_WATER(PED::GET_MOUNT(Global_35)))
			{
				iLocal_827 = 0;
			}
		}
	}
	if (!func_291(&uLocal_666))
	{
		func_232(&uLocal_666);
	}
	else if (func_292(&uLocal_666) >= 20f)
	{
		if ((bVar1 && bVar0) && Global_1935630->f_40 == PED::GET_MOUNT(&(uLocal_443[1])))
		{
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_MOUNT(Global_35)) && ENTITY::_0x6D58167F62238284(PED::GET_MOUNT(Global_35)) > 2f)
			{
				if (func_231(&(uLocal_443[1]), Global_35, func_180(112), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
				}
				func_232(&uLocal_666);
			}
		}
	}
}

void func_322()
{
	int iVar0;

	if (func_548(&(uLocal_443[1])))
	{
		if (func_548(Global_35))
		{
			if (iLocal_833 == 1)
			{
				func_39(&iLocal_780);
				func_39(&iLocal_781);
				if (func_549(7) == Global_1935630->f_41 && Global_1935630->f_41 == PED::GET_MOUNT(&(uLocal_443[1])))
				{
					func_40(7);
				}
				else if (func_549(1) == Global_1935630->f_41 && Global_1935630->f_41 == PED::GET_MOUNT(&(uLocal_443[1])))
				{
					func_40(1);
				}
				iLocal_833 = 0;
			}
			if (MAP::DOES_BLIP_EXIST(&(iLocal_450[1])))
			{
				MAP::REMOVE_BLIP(iLocal_450[1]);
			}
			if (!bLocal_507)
			{
				if (!MAP::DOES_BLIP_EXIST(iLocal_779))
				{
					iLocal_779 = MAP::BLIP_ADD_FOR_COORDS(408396114, vLocal_473);
					MAP::BLIP_ADD_MODIFIER(iLocal_779, -1878373110);
					MAP::BLIP_ADD_MODIFIER(iLocal_779, 231194138);
				}
			}
		}
		else
		{
			if (!bLocal_507)
			{
				if (!MAP::DOES_BLIP_EXIST(&(iLocal_450[1])))
				{
					iLocal_450[1] = MAP::BLIP_ADD_FOR_ENTITY(-89429847, &(uLocal_443[1]));
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(iLocal_450[1]), "RE_INTER_STRANGER");
					if (iLocal_833 == 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(&(uLocal_443[1]), true))
						{
							iVar0 = PED::GET_VEHICLE_PED_IS_IN(&(uLocal_443[1]), true);
							if (!iLocal_786)
							{
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(uLocal_443[1]), 1391706777);
								iLocal_786 = 1;
							}
							func_342(iVar0, &iLocal_780, 408396114, 0, 0, 0);
						}
						else if (func_549(7) == Global_1935630->f_41)
						{
							func_550(7);
						}
						else if (func_549(1) == Global_1935630->f_41)
						{
							func_550(1);
						}
						else
						{
							func_342(Global_1935630->f_41, &iLocal_781, 408396114, 0, 0, 0);
						}
						iLocal_833 = 1;
					}
				}
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_779))
			{
				MAP::REMOVE_BLIP(&iLocal_779);
			}
		}
	}
	else
	{
		if (iLocal_833 == 1)
		{
			func_39(&iLocal_780);
			func_39(&iLocal_781);
			if (func_549(7) == Global_1935630->f_41 && Global_1935630->f_41 == PED::GET_MOUNT(&(uLocal_443[1])))
			{
				func_40(7);
			}
			else if (func_549(1) == Global_1935630->f_41 && Global_1935630->f_41 == PED::GET_MOUNT(&(uLocal_443[1])))
			{
				func_40(1);
			}
			iLocal_833 = 0;
		}
		if (!bLocal_507)
		{
			if (!MAP::DOES_BLIP_EXIST(&(iLocal_450[1])))
			{
				iLocal_450[1] = MAP::BLIP_ADD_FOR_ENTITY(-89429847, &(uLocal_443[1]));
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(iLocal_450[1]), "RE_INTER_STRANGER");
			}
		}
	}
}

void func_323()
{
	switch (iLocal_626)
	{
		case 0:
			if (PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_ON_MOUNT(&(uLocal_443[1])))
			{
				if (func_545(iLocal_782))
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(145), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_232(&uLocal_654);
					iLocal_626 = 1;
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_FACING_PED(&(uLocal_443[1]), Global_35, 30f) && !func_80(&(uLocal_443[1]), -875674219))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(uLocal_443[1]), Global_35, 0, -1082130432, -1082130432, -1082130432);
			}
			if (!func_545(iLocal_782))
			{
				TASK::TASK_MOUNT_ANIMAL(&(uLocal_443[1]), iLocal_782, -1, 0, 1f, 1, 0, 0);
				iLocal_793 = 0;
				func_232(&uLocal_654);
				iLocal_626 = 2;
			}
			if (func_292(&uLocal_654) >= 40f)
			{
				TASK::_TASK_MOVE_IN_TRAFFIC(&(uLocal_443[1]), 1f, 656, 0);
				func_231(&(uLocal_443[1]), Global_35, func_180(107), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_15(8);
			}
			break;
		case 2:
			iLocal_626 = 0;
			break;
	}
}

void func_324()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_325()
{
	if (func_300(&(uLocal_443[1])))
	{
		if (func_305(&uLocal_209, Global_35, vLocal_473) || func_310(&uLocal_209, Global_35, 20, 1090519040))
		{
			if (!func_291(&uLocal_636) && func_302() == 0)
			{
				func_232(&uLocal_636);
				iLocal_765 = 4;
			}
		}
		if (!func_300(Global_35))
		{
			if (!func_291(&uLocal_639))
			{
				func_232(&uLocal_639);
				iLocal_765 = 7;
				iLocal_789 = 1;
			}
		}
	}
	if (!func_300(&(uLocal_443[1])))
	{
		if (!func_291(&uLocal_636))
		{
			func_232(&uLocal_636);
			iLocal_765 = 12;
		}
	}
	if (iLocal_790 == 0)
	{
		if (iLocal_789 == 1)
		{
			if (func_292(&uLocal_639) >= IntToFloat(iLocal_766))
			{
				iLocal_789 = 0;
				func_232(&uLocal_636);
				func_22(sLocal_503, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
		}
		if (iLocal_788 == 0)
		{
			if (func_300(&(uLocal_443[1])) && func_300(&(uLocal_443[1])))
			{
				if (func_292(&uLocal_636) >= IntToFloat(iLocal_765))
				{
					iLocal_788 = 1;
					func_233(&uLocal_636);
					func_22(sLocal_502, 7500, 0, 1, 0, 0, -1, -1, 0);
				}
			}
		}
	}
}

void func_326(int iParam0)
{
	if (func_33(&(uLocal_443[1]), 1, 1) > IntToFloat(iParam0))
	{
		if (func_300(&(uLocal_443[1])))
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				TASK::TASK_MOUNT_ANIMAL(0, PED::GET_MOUNT(&(uLocal_443[1])), -1, 0, 1f, 16, 0, 0);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
			{
				TASK::TASK_ENTER_VEHICLE(0, PED::GET_VEHICLE_PED_IS_USING(&(uLocal_443[1])), -1, 0, 1f, 16, 0);
			}
			TASK::_TASK_MOVE_IN_TRAFFIC(0, 1f, 656, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
			TASK::TASK_PERFORM_SEQUENCE(&(uLocal_443[1]), iLocal_783);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
		}
		else
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
			TASK::_TASK_MOVE_IN_TRAFFIC(0, 1f, 656, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
			TASK::TASK_PERFORM_SEQUENCE(&(uLocal_443[1]), iLocal_783);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
		}
		func_231(&(uLocal_443[1]), Global_35, func_180(107), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
		func_324();
		func_15(8);
	}
}

void func_327(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			DECORATOR::DECOR_REMOVE(iParam0, "honor_block");
		}
	}
}

void func_328(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_451(iParam0, 4))
		{
			func_330(&(iParam0->f_6), 1, 1);
			func_432(iParam0, 4);
		}
	}
	else if (func_451(iParam0, 4))
	{
		func_433(iParam0, 4);
		func_432(iParam0, 14);
	}
}

bool func_329(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_551(iParam0, &Var0);
}

void func_330(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_335(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_552(*iParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_553(iVar0);
	*iParam0 = 0;
}

void func_331()
{
	switch (iLocal_618)
	{
		case 0:
			sLocal_844 = "PB_BRKOUT_N";
			break;
		case 2:
			sLocal_844 = "PB_BRKOUT_BACK_R";
			break;
		case 1:
			sLocal_844 = "PB_BRKOUT_BACK_L";
			break;
		case 3:
			sLocal_844 = "PB_BRKOUT_L";
			break;
		case 4:
			sLocal_844 = "PB_BRKOUT_R";
			break;
	}
}

void func_332(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_554(uParam0);
		func_42(iParam1, uParam2);
	}
	func_43(*uParam0, 1, bParam4);
}

void func_333()
{
	switch (iLocal_768)
	{
		case 0:
			if (!PED::IS_PED_RAGDOLL(&(uLocal_443[1])))
			{
				if (bLocal_832)
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(168), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_768++;
				}
			}
			break;
		case 1:
			if (func_230(2f, 1, &(uLocal_443[1]), 1))
			{
				func_329(&(uLocal_443[1]), "SCREAM_TERROR", -435184212, 0, 1, 0, 0, 1);
				iLocal_768++;
			}
			break;
	}
}

bool func_334(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

bool func_335(int iParam0)
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

bool func_336(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _NAMESPACE71::_UI_FEED_GET_MESSAGE_STATE(iParam0) == 4;
}

void func_337(var uParam0, int iParam1)
{
	if (iParam1 || !func_291(uParam0))
	{
		func_232(uParam0);
	}
}

int func_338(var uParam0, float fParam1)
{
	if (!func_291(uParam0))
	{
		return 0;
	}
	if (func_539(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_339(int iParam0)
{
	_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(1, iParam0, 0);
}

void func_340(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_122() != -1)
	{
		uVar3 = &Global_36637.f_1444[iVar1];
		MISC::CLEAR_BIT(&uVar3, iVar2);
		Global_36637.f_1444[iVar1] = uVar3;
		return;
	}
	uVar4 = &Global_40.f_7832[iVar1];
	MISC::CLEAR_BIT(&uVar4, iVar2);
	Global_40.f_7832[iVar1] = uVar4;
}

int func_341()
{
	if ((((func_555(&uLocal_443, &(Local_15.f_5), &iLocal_778, &uLocal_739, 1, 3, 1) || ENTITY::IS_ENTITY_DEAD(&(uLocal_443[2]))) || ENTITY::IS_ENTITY_DEAD(&(uLocal_443[3]))) || ENTITY::IS_ENTITY_DEAD(&(uLocal_443[1]))) || (uLocal_508 && func_556(&uLocal_508)))
	{
		Local_15.f_45 = 1;
		if (Local_15.f_48 == 0)
		{
			func_86(&Local_15, &(Local_15.f_48), Local_15.f_3, &(Local_15.f_51.f_6));
		}
		Local_15.f_46 = 1;
		if (iLocal_778 == 2048 && !ENTITY::IS_ENTITY_DEAD(&(uLocal_443[1])))
		{
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_443[1]), 0);
			func_231(&(uLocal_443[1]), Global_35, func_180(132), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		func_15(16);
		return 1;
	}
	return 0;
}

void func_342(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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
		*iParam1 = MAP::BLIP_ADD_FOR_ENTITY(iParam2, iParam0);
		if (iParam3 != 0)
		{
			MAP::BLIP_ADD_MODIFIER(*iParam1, iParam3);
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

void func_343()
{
	switch (Local_15.f_51.f_4)
	{
		case 0:
			if (!CAM::IS_SPHERE_VISIBLE(1639.15f, 1583.75f, 153.7f, 1f))
			{
				(Local_229[4 /*32*/])->f_6 = { 1639.15f, 1583.75f, 149.78f };
				(Local_229[5 /*32*/])->f_6 = { 1637.7f, 1582.11f, 149.77f };
				(Local_229[4 /*32*/])->f_9 = 57.2f;
				(Local_229[5 /*32*/])->f_9 = 57.2f;
			}
			else
			{
				(Local_229[4 /*32*/])->f_6 = { 1566.22f, 1593.56f, 146.43f };
				(Local_229[5 /*32*/])->f_6 = { 1567.9f, 1591.92f, 146.46f };
				(Local_229[4 /*32*/])->f_9 = -40.67f;
				(Local_229[5 /*32*/])->f_9 = -40.67f;
			}
			break;
		case 1:
			if (!CAM::IS_SPHERE_VISIBLE(1417.81f, 1162.01f, 184.03f, 1f))
			{
				(Local_229[4 /*32*/])->f_6 = { 1420.02f, 1161.46f, 183.98f };
				(Local_229[5 /*32*/])->f_6 = { 1417.81f, 1162.01f, 184.03f };
				(Local_229[4 /*32*/])->f_9 = 177.34f;
				(Local_229[5 /*32*/])->f_9 = 177.34f;
			}
			else
			{
				(Local_229[4 /*32*/])->f_6 = { 1440.75f, 1080.24f, 182.72f };
				(Local_229[5 /*32*/])->f_6 = { 1442.38f, 1081.87f, 182.72f };
				(Local_229[4 /*32*/])->f_9 = 36.9f;
				(Local_229[5 /*32*/])->f_9 = 36.9f;
			}
			break;
		case 2:
			if (!CAM::IS_SPHERE_VISIBLE(1977.03f, 1695.66f, 163.46f, 1f))
			{
				(Local_229[4 /*32*/])->f_6 = { 1977.03f, 1695.66f, 161.46f };
				(Local_229[5 /*32*/])->f_6 = { 1976.8f, 1698.08f, 161.35f };
				(Local_229[4 /*32*/])->f_9 = -49.84f;
				(Local_229[5 /*32*/])->f_9 = -49.84f;
			}
			else
			{
				(Local_229[4 /*32*/])->f_6 = { 2061.05f, 1732.16f, 152.78f };
				(Local_229[5 /*32*/])->f_6 = { 2061.48f, 1729.58f, 152.87f };
				(Local_229[4 /*32*/])->f_9 = 155.62f;
				(Local_229[5 /*32*/])->f_9 = 155.62f;
			}
			break;
		case 3:
			if (!CAM::IS_SPHERE_VISIBLE(657.9f, 1941.64f, 223.2f, 1f))
			{
				(Local_229[4 /*32*/])->f_6 = { 657.9f, 1941.64f, 221.2f };
				(Local_229[5 /*32*/])->f_6 = { 655.31f, 1942.22f, 221.08f };
				(Local_229[4 /*32*/])->f_9 = 175.46f;
				(Local_229[5 /*32*/])->f_9 = 175.46f;
			}
			else
			{
				(Local_229[4 /*32*/])->f_6 = { 643.16f, 1845.39f, 204.49f };
				(Local_229[5 /*32*/])->f_6 = { 645.38f, 1845.46f, 204.55f };
				(Local_229[4 /*32*/])->f_9 = 5.23f;
				(Local_229[5 /*32*/])->f_9 = 5.23f;
			}
			break;
		case 4:
			if (!CAM::IS_SPHERE_VISIBLE(902f, 391.47f, 117.88f, 1f))
			{
				(Local_229[4 /*32*/])->f_6 = { 902f, 391.47f, 115.88f };
				(Local_229[5 /*32*/])->f_6 = { 902.32f, 389.06f, 115.84f };
				(Local_229[4 /*32*/])->f_9 = -58.46f;
				(Local_229[5 /*32*/])->f_9 = -58.46f;
			}
			else
			{
				(Local_229[4 /*32*/])->f_6 = { 1006.58f, 402.63f, 105.39f };
				(Local_229[5 /*32*/])->f_6 = { 1005.74f, 404.6f, 105.42f };
				(Local_229[4 /*32*/])->f_9 = 42.43f;
				(Local_229[5 /*32*/])->f_9 = 42.43f;
			}
			break;
		case 5:
			if (!CAM::IS_SPHERE_VISIBLE(1408.96f, 488.42f, 88.2f, 1f))
			{
				(Local_229[4 /*32*/])->f_6 = { 1408.96f, 488.42f, 86.2f };
				(Local_229[5 /*32*/])->f_6 = { 1407.61f, 490.23f, 86.19f };
				(Local_229[4 /*32*/])->f_9 = 76.47f;
				(Local_229[5 /*32*/])->f_9 = 76.47f;
			}
			else
			{
				(Local_229[4 /*32*/])->f_6 = { 1303.55f, 463.51f, 86.98f };
				(Local_229[5 /*32*/])->f_6 = { 1304.14f, 461.11f, 86.93f };
				(Local_229[4 /*32*/])->f_9 = -62.2f;
				(Local_229[5 /*32*/])->f_9 = -62.2f;
			}
			break;
		case 6:
			if (!CAM::IS_SPHERE_VISIBLE(-420.27f, -132.75f, 45.4f, 1f))
			{
				(Local_229[4 /*32*/])->f_6 = { -420.27f, -132.75f, 43.4f };
				(Local_229[5 /*32*/])->f_6 = { -422.16f, -131.99f, 43.33f };
				(Local_229[4 /*32*/])->f_9 = 155.93f;
				(Local_229[5 /*32*/])->f_9 = 155.93f;
			}
			else
			{
				(Local_229[4 /*32*/])->f_6 = { -494.54f, -212.7f, 46.52f };
				(Local_229[5 /*32*/])->f_6 = { -491.78f, -211.96f, 46.41f };
				(Local_229[4 /*32*/])->f_9 = -57.95f;
				(Local_229[5 /*32*/])->f_9 = -57.95f;
			}
			break;
		case 7:
			if (!CAM::IS_SPHERE_VISIBLE(1264.2f, -1601.4f, 66.07f, 1f))
			{
				(Local_229[4 /*32*/])->f_6 = { 1262.8f, -1604.4f, 64.07f };
				(Local_229[5 /*32*/])->f_6 = { 1264.2f, -1601.4f, 64.1f };
				(Local_229[4 /*32*/])->f_9 = -108f;
				(Local_229[5 /*32*/])->f_9 = -108f;
			}
			else
			{
				(Local_229[4 /*32*/])->f_6 = { 1378.56f, -1640.28f, 66.38f };
				(Local_229[5 /*32*/])->f_6 = { 1378.34f, -1637.9f, 66.28f };
				(Local_229[4 /*32*/])->f_9 = 44.4f;
				(Local_229[5 /*32*/])->f_9 = 44.4f;
			}
			break;
		case 8:
			if (!CAM::IS_SPHERE_VISIBLE(1517.16f, -2042.11f, 44.94f, 1f))
			{
				(Local_229[4 /*32*/])->f_6 = { 1517.16f, -2042.11f, 42.94f };
				(Local_229[5 /*32*/])->f_6 = { 1514.66f, -2042.05f, 42.88f };
				(Local_229[4 /*32*/])->f_9 = 169.36f;
				(Local_229[5 /*32*/])->f_9 = 169.36f;
			}
			else
			{
				(Local_229[4 /*32*/])->f_6 = { 1517.76f, -2131.14f, 42.19f };
				(Local_229[5 /*32*/])->f_6 = { 1519.67f, -2130.73f, 42.23f };
				(Local_229[4 /*32*/])->f_9 = 33.94f;
				(Local_229[5 /*32*/])->f_9 = 33.94f;
			}
			break;
		case 9:
			if (!CAM::IS_SPHERE_VISIBLE(1124.98f, -2120.87f, 53.25f, 1f))
			{
				(Local_229[4 /*32*/])->f_6 = { 1124.98f, -2120.87f, 51.25f };
				(Local_229[5 /*32*/])->f_6 = { 1124.41f, -2123.29f, 51.18f };
				(Local_229[4 /*32*/])->f_9 = -109.47f;
				(Local_229[5 /*32*/])->f_9 = -109.47f;
			}
			else
			{
				(Local_229[4 /*32*/])->f_6 = { 1206.88f, -2145.83f, 53.53f };
				(Local_229[5 /*32*/])->f_6 = { 1208.32f, -2143.71f, 53.7f };
				(Local_229[4 /*32*/])->f_9 = 72.6f;
				(Local_229[5 /*32*/])->f_9 = 72.6f;
			}
			break;
	}
}

void func_344()
{
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_500);
	TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, func_557(), 0, 15f, 4f, 1, 0, -687903391, 1048580);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_500);
	TASK::TASK_PERFORM_SEQUENCE(&(uLocal_443[2]), iLocal_500);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_501);
	TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(0, &(uLocal_443[2]), Global_35, 0, -1, 9f, 2f, 0);
	TASK::TASK_CONFRONT(0, Global_35, 128);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_501);
	TASK::TASK_PERFORM_SEQUENCE(&(uLocal_443[3]), iLocal_501);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
}

void func_345()
{
	if (func_292(&uLocal_723) > 0.5f)
	{
		if (!MAP::DOES_BLIP_EXIST(&(iLocal_450[2])))
		{
			func_342(&(uLocal_443[2]), iLocal_450[2], 831283580, 0, 0, 0);
		}
	}
	if (func_292(&uLocal_723) > 1f)
	{
		if (!MAP::DOES_BLIP_EXIST(&(iLocal_450[3])))
		{
			func_342(&(uLocal_443[3]), iLocal_450[3], 831283580, 0, 0, 0);
		}
	}
}

int func_346(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;

	if (((PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, iParam6, iParam7) && (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iVar0))) && ENTITY::IS_ENTITY_A_PED(iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == *uParam0)
	{
		PLAYER::MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::GET_PLAYER_INDEX(), *uParam0, 3, 2, iParam1);
		PLAYER::MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::GET_PLAYER_INDEX(), *uParam0, 4, 2, iParam2);
		PLAYER::MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::GET_PLAYER_INDEX(), *uParam0, 7, 2, iParam3);
		return 1;
	}
	if (bParam4)
	{
		PLAYER::MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::GET_PLAYER_INDEX(), *uParam0, 3, 2, 0);
		PLAYER::MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::GET_PLAYER_INDEX(), *uParam0, 4, 2, 0);
		PLAYER::MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::GET_PLAYER_INDEX(), *uParam0, 7, 2, 0);
	}
	return 0;
}

void func_347(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_558(iParam0, &iVar0, &iVar1);
	if (!func_559(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_560(iVar0, iVar1);
}

float func_348(vector3 vParam0, bool bParam3)
{
	return func_79(Global_35, vParam0, bParam3);
}

int func_349(int iParam0, var uParam1, float fParam2, bool bParam3, float fParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, int iParam11)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	func_100(uParam1);
	if (Global_1935630->f_12)
	{
		uParam1->f_1 = 0;
		uParam1->f_2 = 1;
		return 1;
	}
	PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1632043089, false);
	PAD::DISABLE_CONTROL_ACTION(0, -124244224, false);
	PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2131587435, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
	PAD::DISABLE_CONTROL_ACTION(0, 2103129879, false);
	PED::SET_PED_RESET_FLAG(Global_35, 194, true);
	switch (*uParam1)
	{
		case 0:
			if (!uParam1->f_7)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
				{
					if (bParam3)
					{
						func_304(0);
					}
					if (func_230(fParam4, 1, 0, 0))
					{
						func_231(iParam0, Global_35, uParam1->f_16, 0, -1082130432, uParam1->f_21, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				uParam1->f_7 = 1;
			}
			if ((((((!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_FALLING(Global_35)) && !PED::_0x3E592D0486DEC0F6(Global_35)) && !ENTITY::IS_ENTITY_IN_AIR(Global_35, 1)) && !func_80(Global_35, 501393341)) && !func_80(Global_35, 1553520516)) && !func_80(Global_35, 451360105))
			{
				PED::_0xC163DAC52AC975D3(iParam0, 32);
				uParam1->f_25 = { Global_36 };
				if (func_3(iParam5, 4))
				{
					PED::FORCE_PED_MOTION_STATE(Global_35, -1871534317, false, 0, false);
				}
				else
				{
					TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
				}
				if (func_334(Global_1935630->f_44))
				{
					func_337(&(uParam1->f_32), 0);
				}
				else
				{
					func_561(&(uParam1->f_32), 0.5f, 0);
				}
				TASK::TASK_ROB_PED(iParam0, Global_35, 0f, iParam5, iParam9);
				if (!func_455(609))
				{
					func_339(1);
					uParam1->f_28 = func_517("TF_AIM_AMBUSH", 10000, 0, 0, 0, 1);
					func_558(609, &uVar0, &uVar1);
					func_562(&uVar0, &uVar1);
				}
				uParam1->f_8 = 1;
				*uParam1 = 2;
			}
			break;
		case 2:
			if (((!uParam1->f_12 && !uParam1->f_13) && func_338(&(uParam1->f_32), 2f)) && func_563(iParam0, -663203358, "bStartSuccess", 1, 1.8f, 1))
			{
				if (func_522(&(uParam1->f_36), "PLAYER_SURRENDER_REACH_FOR_WEAPON", Global_36, 0, 130948705, 1097859072, 0, 0, 1, "", 1, 0, 0, 0, 1, 0, 1704213876, 0))
				{
					uParam1->f_12 = 1;
				}
				if (!uParam1->f_14)
				{
					if (func_335(uParam1->f_36))
					{
						uParam1->f_14 = 1;
					}
				}
			}
			if (uParam1->f_14)
			{
				if (func_563(iParam0, 534755167, "bEndSuccess", 1, 1.8f, 1))
				{
					func_330(&(uParam1->f_36), 1, 1);
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				uParam1->f_1 = 1;
				return 1;
			}
			bVar2 = false;
			if (func_564() && PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
			{
				bVar2 = true;
			}
			else if (Global_1935630->f_25)
			{
				bVar2 = true;
			}
			else if (PED::IS_PED_IN_COMBAT(iParam0, 0) && func_80(iParam0, 780511057))
			{
				bVar2 = true;
			}
			else if (func_565(uParam1))
			{
				bVar2 = true;
			}
			else if (func_566(uParam1, iParam11))
			{
				bVar2 = true;
			}
			else if ((func_3(iParam5, 16) && !func_80(iParam0, 1435919172)) && !ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, -1898385492))
			{
				bVar2 = true;
			}
			if (!uParam1->f_15)
			{
				if (PED::IS_PED_SHOOTING(iParam0))
				{
					TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_20))
				{
					if (bParam3)
					{
						func_304(0);
					}
					if (func_230(fParam4, 1, 0, 0))
					{
						func_231(Global_35, iParam0, uParam1->f_20, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				func_330(&(uParam1->f_36), 1, 1);
				uParam1->f_13 = 1;
				uParam1->f_6 = 1;
				return 1;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, -1898385492))
			{
				if (iParam6 != 0)
				{
					func_567(iParam6, 1, 0, -142743235, 0);
					func_218(iParam0, iParam6, 1, 0);
				}
				iVar3 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(func_350(1)) * fParam2));
				if (iVar3 > 0)
				{
					func_568(iVar3, 0, 0, 1, 1);
					func_569(iVar3);
					func_570(iParam0, &iVar4);
					func_217(iParam0, (iVar4 + iVar3));
				}
				PAD::SET_PAD_SHAKE(0, 100, 100);
				if (!uParam1->f_3)
				{
					uParam1->f_2 = 1;
				}
			}
			if (bParam7)
			{
				if (func_563(iParam0, -1631911761, "bBeforeHitBreakout", iParam8, 0.9f, 0))
				{
					uParam1->f_5 = 1;
					return 1;
				}
			}
			if (func_563(iParam0, 641027726, "DLG_INTRO", iParam8, 0.5f, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_17))
				{
					if (bParam3)
					{
						func_304(0);
					}
					if (func_230(0f, 1, iParam0, 1))
					{
						func_231(iParam0, Global_35, uParam1->f_17, 0, -1082130432, uParam1->f_22, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				uParam1->f_15 = 1;
			}
			if (func_563(iParam0, -502975245, "DLG_HIT", iParam8, 0.6f, 0))
			{
				if (bParam3)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
					{
						func_304(0);
					}
				}
				if (uParam1->f_11)
				{
					if (func_230(0, 1, iParam0, 1))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
						{
							func_231(iParam0, Global_35, uParam1->f_18, 0, -1082130432, uParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
				}
				else if (func_230(fParam4, 1, 0, 0))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
					{
						func_231(iParam0, Global_35, uParam1->f_18, 0, -1082130432, uParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				func_330(&(uParam1->f_36), 1, 1);
				uParam1->f_13 = 1;
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Right_cut_cheek", 0f, 1f);
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Right_bruise_eye_A", 0f, 1f);
				if (bParam10)
				{
				}
				uParam1->f_4 = 1;
			}
			if (func_563(iParam0, 1729031946, "DLG_FAILED", iParam8, 0.7f, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_19))
				{
					if (bParam3)
					{
						func_304(0);
					}
					if (func_230(fParam4, 1, 0, 0))
					{
						func_231(iParam0, Global_35, uParam1->f_19, 0, -1082130432, uParam1->f_24, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				uParam1->f_2 = 0;
				uParam1->f_3 = 1;
			}
			if (func_563(iParam0, 1842457532, "Blendout", iParam8, 0.8f, 0) || !func_80(iParam0, 2137044382))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_350(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_351()
{
	switch (iLocal_755)
	{
		case 0:
			if (func_230(-4f, 1, &(uLocal_443[1]), 1))
			{
				func_231(&(uLocal_443[1]), &(uLocal_443[2]), func_180(131), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_755++;
			}
			break;
		case 1:
			if (func_230(-4f, 1, &(uLocal_443[1]), 1) && func_230(-4f, 1, &(uLocal_443[2]), 1))
			{
				func_231(&(uLocal_443[2]), &(uLocal_443[1]), func_180(133), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_755++;
			}
			break;
		case 2:
			if (func_230(-4f, 1, &(uLocal_443[1]), 1) && func_230(-4f, 1, &(uLocal_443[2]), 1))
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(134), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_755++;
			}
			break;
		case 3:
			if (func_230(-4f, 1, &(uLocal_443[1]), 1) && func_230(-4f, 1, &(uLocal_443[2]), 1))
			{
				func_231(&(uLocal_443[2]), &(uLocal_443[1]), func_180(135), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_755++;
			}
			break;
		case 4:
			if (func_230(-4f, 1, &(uLocal_443[1]), 1) && func_230(-4f, 1, &(uLocal_443[2]), 1))
			{
				func_231(&(uLocal_443[2]), &(uLocal_443[1]), func_180(137), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_755++;
			}
			break;
		case 5:
			if (func_230(-4f, 1, &(uLocal_443[3]), 1) && func_230(-4f, 1, &(uLocal_443[2]), 1))
			{
				func_231(&(uLocal_443[3]), &(uLocal_443[1]), func_180(138), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_755++;
			}
			break;
		case 6:
			if (func_230(-4f, 1, &(uLocal_443[3]), 1) && func_230(-4f, 1, &(uLocal_443[1]), 1))
			{
				func_231(&(uLocal_443[1]), &(uLocal_443[3]), func_180(139), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_755++;
			}
			break;
	}
}

int func_352()
{
	float fVar0;
	vector3 vVar1;

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		fVar0 = 20f;
	}
	else
	{
		fVar0 = 15f;
	}
	if (PED::_0xD5FE956C70FF370B(Global_35))
	{
		vVar1 = { 0f, 0f, 0f };
	}
	else if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		vVar1 = { 16f, 16f, 10f };
	}
	else
	{
		vVar1 = { 10f, 10f, 10f };
	}
	if ((((((func_127(&(uLocal_443[2]), Global_35, 1, 1) <= fVar0 && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(&(uLocal_443[2]), Global_35, 17)) || (func_127(&(uLocal_443[3]), Global_35, 1, 1) <= fVar0 && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(&(uLocal_443[3]), Global_35, 17))) || (func_127(&(uLocal_443[1]), Global_35, 1, 1) <= fVar0 && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(&(uLocal_443[1]), Global_35, 17))) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(&(uLocal_443[2]), true, false), vVar1, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(&(uLocal_443[3]), true, false), vVar1, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(&(uLocal_443[1]), true, false), vVar1, false, true, 0))
	{
		func_286(&(uLocal_443[2]), Global_35, &uLocal_513, 2000, 25, 0);
		func_286(&(uLocal_443[3]), Global_35, &uLocal_513, 2000, 25, 0);
		func_286(&(uLocal_443[1]), Global_35, &uLocal_513, 2000, 25, 0);
		Local_15.f_44 = 1;
		return 1;
	}
	return 0;
}

void func_353()
{
	switch (iLocal_761)
	{
		case 0:
			if (func_230(-4f, 1, &(uLocal_443[3]), 1) && func_230(-4f, 1, &(uLocal_443[2]), 1))
			{
				func_231(&(uLocal_443[3]), Global_35, func_180(115), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_826 = 1;
				iLocal_761++;
			}
			break;
		case 1:
			if (func_230(-4f, 1, &(uLocal_443[3]), 1) && func_230(-4f, 1, &(uLocal_443[2]), 1))
			{
				func_231(&(uLocal_443[3]), Global_35, func_180(116), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_761++;
			}
			break;
	}
}

void func_354()
{
	switch (iLocal_763)
	{
		case 0:
			iLocal_763++;
			break;
		case 1:
			if (iLocal_767 > 0)
			{
				if (func_230(2f, 1, &(uLocal_443[1]), 1))
				{
					if (func_231(&(uLocal_443[1]), Global_35, func_180(127), 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 0, 0, 0))
					{
						iLocal_763++;
					}
				}
			}
			else if (func_230(0f, 1, &(uLocal_443[1]), 1))
			{
				if (func_231(&(uLocal_443[1]), Global_35, func_180(126), 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 0, 0, 0))
				{
					iLocal_763++;
				}
			}
			break;
		case 2:
			iLocal_763++;
			break;
		case 3:
			iLocal_763++;
			break;
	}
}

void func_355()
{
	switch (iLocal_762)
	{
		case 0:
			if (func_230(-4f, 1, &(uLocal_443[1]), 1) && PED::IS_PED_DEAD_OR_DYING(&(uLocal_443[2]), true))
			{
				if (!func_291(&uLocal_714))
				{
					func_337(&uLocal_714, 0);
				}
				else if (func_292(&uLocal_714) > 1.5f)
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(121), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_826 = 1;
					iLocal_762 = 1;
				}
			}
			if (func_230(-4f, 1, &(uLocal_443[1]), 1) && PED::IS_PED_DEAD_OR_DYING(&(uLocal_443[3]), true))
			{
				if (!func_291(&uLocal_717))
				{
					func_337(&uLocal_717, 0);
				}
				else if (func_292(&uLocal_717) > 2.5f)
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(122), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_826 = 1;
					iLocal_762 = 2;
				}
			}
			break;
		case 1:
			if (func_230(-4f, 1, &(uLocal_443[1]), 1) && PED::IS_PED_DEAD_OR_DYING(&(uLocal_443[3]), true))
			{
				if (!func_291(&uLocal_717))
				{
					func_337(&uLocal_717, 0);
				}
				else
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(122), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_762 = 3;
				}
			}
			break;
		case 2:
			if (func_230(-4f, 1, &(uLocal_443[1]), 1) && PED::IS_PED_DEAD_OR_DYING(&(uLocal_443[2]), true))
			{
				if (!func_291(&uLocal_714))
				{
					func_337(&uLocal_714, 0);
				}
				else if (func_292(&uLocal_714) > 1f)
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(121), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_762 = 3;
				}
			}
			break;
		case 3:
			if (func_230(-4f, 1, &(uLocal_443[1]), 1))
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(123), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_762++;
			}
			break;
		case 4:
			if (func_230(-4f, 1, &(uLocal_443[1]), 1))
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(124), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_762++;
			}
			break;
		case 5:
			if (func_230(-4f, 1, &(uLocal_443[1]), 1))
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(125), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_762++;
			}
			break;
	}
}

void func_356()
{
	var uVar0[3];
	int iVar4;

	if (iLocal_826 == 0)
	{
		uVar0[0] = &uLocal_443[2];
		uVar0[1] = &uLocal_443[3];
		uVar0[2] = &uLocal_443[1];
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if ((!ENTITY::IS_ENTITY_DEAD(&(uVar0[iVar4])) && !PED::IS_PED_RAGDOLL(&(uVar0[iVar4]))) && func_230(-4f, 1, &(uVar0[iVar4]), 1))
			{
				func_506(&(uVar0[iVar4]), 0, &(Local_15.f_5), &iLocal_778, 0, 0);
				if (PED::IS_PED_HOGTIED(&(uVar0[iVar4])) || PED::_0x9682F850056C9ADE(&(uVar0[iVar4])))
				{
					if (iLocal_813 == 0)
					{
						iLocal_813 = 1;
						iLocal_751 = 1;
					}
				}
				if (iLocal_778 == 8)
				{
					if (iLocal_814 == 0)
					{
						iLocal_814 = 1;
						iLocal_751 = 3;
					}
				}
				if (((((((iLocal_778 == 4 || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uVar0[iVar4]), Global_35, 1, 1)) || iLocal_778 == 0) || iLocal_778 == 8192) || iLocal_778 == 1) || iLocal_778 == 256) || iLocal_778 == 2) || iLocal_778 == 2048)
				{
					if (iLocal_815 == 0)
					{
						iLocal_815 = 1;
						iLocal_751 = 0;
					}
				}
				if (PED::_0x29FCE825613FEFCA(&(uVar0[iVar4]), 500) || PED::_0xD0B7AEB56229D317(Global_35) == &uVar0[iVar4])
				{
					if (iLocal_816 == 0)
					{
						iLocal_816 = 1;
						iLocal_751 = 2;
					}
				}
				if (iLocal_823 == 1 || &uVar0[iVar4] == &uLocal_443[1])
				{
					iLocal_751 = 4;
				}
			}
			switch (iLocal_751)
			{
				case 0:
					if (func_228(&(uVar0[iVar4]), Global_35, func_180(117), 0.8f, 0))
					{
						iLocal_826 = 1;
						iLocal_751 = -1;
					}
					break;
				case 1:
					if (func_228(&(uVar0[iVar4]), Global_35, func_180(118), 0.8f, 0))
					{
						iLocal_826 = 1;
						iLocal_751 = -1;
					}
					break;
				case 2:
					if (func_228(&(uVar0[iVar4]), Global_35, func_180(119), 0.8f, 0))
					{
						iLocal_826 = 1;
						iLocal_751 = -1;
					}
					break;
				case 3:
					if (func_228(&(uVar0[iVar4]), Global_35, func_180(120), 0.8f, 0))
					{
						iLocal_826 = 1;
						iLocal_751 = -1;
					}
					break;
				case 4:
					if (func_228(&(uLocal_443[1]), Global_35, func_180(25), 0.8f, 0))
					{
						iLocal_826 = 1;
						iLocal_751 = -1;
					}
					break;
			}
			iVar4++;
		}
	}
}

bool func_357(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

bool func_358()
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	while (iVar1 <= 3)
	{
		if (func_27(&(uLocal_443[iVar1]), 0, 1))
		{
			iLocal_905[iVar1] = 0;
			iVar0++;
		}
		else if (!&iLocal_905[iVar1])
		{
			if (PED::IS_PED_HOGTIED(&(uLocal_443[iVar1])))
			{
				if (iVar1 == 1)
				{
					if (iLocal_763 <= 3)
					{
						iVar0++;
					}
					else
					{
						TASK::TASK_COMBAT_PED(&(uLocal_443[iVar1]), Global_35, 0, 0);
						func_39(iLocal_450[iVar1]);
						iLocal_905[iVar1] = 1;
					}
					iVar1++;
					return iVar0 <= 0;
				}
			}
		}
	}

bool func_359(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_360(int iParam0, int iParam1)
{
	if (!func_359(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

int func_361(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_5;
}

void func_362(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_363(char* sParam0)
{
	return sParam0;
}

int func_364()
{
	int iVar0;

	iVar0 = func_571();
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

int func_365(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_122() != -1)
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
	fVar1 = func_133(MISC::ABSF(fVar1) < 1f, func_133(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_366(int iParam0)
{
	if (!func_572(iParam0))
	{
		return 0;
	}
	return func_573(iParam0);
}

int func_367()
{
	if (func_122() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_368(int iParam0, int iParam1, int iParam2)
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

int func_369(int iParam0)
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

int func_370()
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

void func_371(int iParam0, bool bParam1, int iParam2)
{
	func_574((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_575(iParam0);
}

void func_372(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_576(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_373(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_577(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_578(iVar5, &iVar2, &iVar0))
			{
				if (!func_579(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_580(iVar2);
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
							if (func_581(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_364() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_364() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_582();
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

struct<2> func_374(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_375(var uParam0, var uParam1, int iParam2)
{
	STATS::STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

char* func_376(int iParam0)
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

var func_377(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_583(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_378(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_584(iParam0))
	{
		return 0;
	}
	if (!func_585())
	{
		return 0;
	}
	if (!func_586(iParam0, &iVar0, &iVar1))
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

int func_379(int iParam0, float fParam1, bool bParam2, int iParam3)
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

int func_380(int iParam0)
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

void func_381(int* iParam0)
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

void func_382(int iParam0)
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

void func_383(var uParam0)
{
	if (func_335(uParam0->f_162))
	{
		func_330(&(uParam0->f_162), 1, 1);
	}
	if (func_335(uParam0->f_163))
	{
		func_330(&(uParam0->f_163), 1, 1);
	}
	if (func_335(uParam0->f_164))
	{
		func_330(&(uParam0->f_164), 1, 1);
	}
	if (func_335(uParam0->f_165))
	{
		func_330(&(uParam0->f_165), 1, 1);
	}
}

void func_384(var uParam0)
{
	if (uParam0->f_170)
	{
		func_587();
	}
}

void func_385(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_588(32);
		func_389(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

int func_386(var uParam0)
{
	if (func_589(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_590(uParam0->f_3);
		func_251(uParam0, 0, 1);
		func_591(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_592(0, 0);
		return 1;
	}
	return 0;
}

void func_387()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_388(int iParam0)
{
	if (!func_23(iParam0))
	{
		return true;
	}
	return (Global_17503.f_42[iParam0 /*8*/])->f_4 > 0;
}

void func_389(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_361(iParam0) == 1 && iParam7)
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
	if ((iParam1 || bParam6) || func_122() != -1)
	{
		(Global_17503.f_42[iParam0 /*8*/])->f_4 = 0;
	}
	(Global_17503.f_42[iParam0 /*8*/])->f_4 = ((Global_17503.f_42[iParam0 /*8*/])->f_4 + iVar0);
}

void func_390(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

int func_391(int iParam0)
{
	iParam0 = func_139(iParam0);
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

void func_392(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = func_549(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::IS_PED_READY_TO_RENDER(iVar0))
	{
		return;
	}
	if (func_593(iParam0, 64))
	{
		func_393(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26) && !MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_366(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
		}
		if (iVar0 == PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
			{
				((*Global_1900383)[iParam0 /*45*/])->f_27 = MAP::BLIP_ADD_FOR_ENTITY(-515518185, iVar0);
				MAP::SET_BLIP_SPRITE(((*Global_1900383)[iParam0 /*45*/])->f_27, -1327110633, true);
				func_594(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630->f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26) && bVar4)
	{
		func_393(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = -1925605092;
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_595(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
			{
				MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		((*Global_1900383)[iParam0 /*45*/])->f_26 = MAP::BLIP_ADD_FOR_ENTITY(iVar5, iVar0);
		((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
		func_596(&(((*Global_1900383)[iParam0 /*45*/])->f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_593(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_597(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar15 = func_598(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_599(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 3)
		{
			iVar17 = -401963276;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_0xEBE89623EB861271(iVar0, 1);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 4)
		{
			iVar17 = -1380599892;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 2)
		{
			iVar17 = 1313031610;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 1)
		{
			iVar17 = -1012863186;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_600(((*Global_1900383)[iParam0 /*45*/])->f_26);
		func_601(((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::BLIP_ADD_MODIFIER(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar17);
		if (iVar17 == -401963276)
		{
			MAP::BLIP_ADD_MODIFIER(((*Global_1900383)[iParam0 /*45*/])->f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar18);
	}
	if ((PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::BLIP_ADD_MODIFIER(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	if (func_602(iVar0) && !bVar9)
	{
		if (iVar5 == -1925605092)
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		MAP::BLIP_ADD_MODIFIER(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar20);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(((*Global_1900383)[iParam0 /*45*/])->f_26, 561559387);
		MAP::BLIP_REMOVE_MODIFIER(((*Global_1900383)[iParam0 /*45*/])->f_26, -201249929);
	}
	iVar21 = func_595(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = -217389439;
				break;
			case 1:
				iVar22 = 13992470;
				break;
			case 2:
				iVar22 = 396341162;
				break;
			case 3:
				iVar22 = 623069873;
				break;
			case 4:
				iVar22 = -637422489;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = 937553910;
				break;
			case 1:
				iVar22 = 489732756;
				break;
			case 2:
				iVar22 = 195204984;
				break;
			case 3:
				iVar22 = -103418913;
				break;
			case 4:
				iVar22 = -815685893;
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(iVar0, ((*Global_1900383)[iParam0 /*45*/])->f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, ((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

void func_393(int iParam0)
{
	iParam0 = func_139(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
}

Vector3 func_394(vector3 vParam0, vector3 vParam3, float fParam6)
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

Vector3 func_395(vector3 vParam0, vector3 vParam3, float fParam6)
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

int func_396(int iParam0)
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

int func_397(int iParam0)
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

int func_398(int iParam0, int iParam1, var uParam2)
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
			break;
	}
	return 0;
}

Vector3 func_399(int iParam0, var uParam1)
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
			if (!func_153(*((*uParam1)[iVar0 /*3*/])))
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

void func_400(var uParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		uParam0->f_6 = MAP::BLIP_ADD_FOR_COORDS(-1702907713, *uParam0);
		MAP::BLIP_ADD_MODIFIER(uParam0->f_6, 580546400);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
			func_22("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		PED::_0x9851DE7AEC10B4E1(*uParam0, 100f, 1, 0);
	}
}

bool func_401(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_402(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
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
	if (func_153(vParam0))
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
		if (func_275(vParam0))
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
	func_603(iVar0, bParam8);
	return iVar0;
}

void func_403(int iParam0)
{
	if (!func_23(iParam0))
	{
		return;
	}
	func_604(iParam0);
}

void func_404(var uParam0, vector3 vParam1)
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

int func_405(int iParam0)
{
	if (func_85(iParam0, 2))
	{
		return 200;
	}
	if (func_85(iParam0, 4))
	{
		return 70;
	}
	if (func_85(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_406(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (func_48(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_177() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_48(iParam0, 2);
		bVar1 = func_48(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_257())
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

void func_407(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
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
	if (func_85(iParam3, 2097152))
	{
		*uParam0 = (*uParam0 + 15f);
		*uParam2 = BUILTIN::CEIL((*uParam0 + 50f));
	}
	else
	{
		*uParam2 = 70;
	}
}

void func_408(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
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
	if (func_85(iParam3, 2))
	{
		*uParam0 = (*uParam0 + 60f);
		*uParam1 = (*uParam1 + 60f);
		*uParam2 = BUILTIN::CEIL((*uParam0 + 110f));
	}
	else if (func_85(iParam3, 2097152))
	{
		*uParam0 = (*uParam0 + 30f);
		*uParam2 = BUILTIN::CEIL((*uParam0 + 30f));
	}
	else
	{
		*uParam2 = 70;
	}
}

bool func_409(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_397(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_17503.f_12[iVar1]), iVar2);
}

int func_410(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	float fVar0;

	if (func_153(vParam1))
	{
		return 0;
	}
	if (func_415(iParam0, vParam1))
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
	if (func_108(iParam0))
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

int func_411(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_412(int iParam0, vector3 vParam1, var uParam4, float fParam5, bool bParam6, int iParam7)
{
	float fVar0;

	fVar0 = func_133(bParam6, iParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!uParam4->f_1)
	{
		if (fVar0 < uParam4->f_2 || (func_418(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*uParam4 = func_605();
			uParam4->f_2 = func_79(iParam0, vParam1, 1);
			uParam4->f_1 = 1;
		}
	}
	else if (fVar0 > uParam4->f_2 || (!func_418(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*uParam4 = func_605();
		uParam4->f_2 = func_79(iParam0, vParam1, 1);
		uParam4->f_1 = 0;
	}
}

int func_413(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_605() - *uParam0) >= iParam1;
	}
	return 0;
}

int func_414(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_153(*(uParam0->f_12[iVar0 /*3*/])))
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

int func_415(int iParam0, vector3 vParam1)
{
	int iVar0;

	if (!func_48(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_606(vParam1, 0, 0, iVar0))
	{
		return 1;
	}
	if (func_48(iParam0, 33554432))
	{
		if (func_607(vParam1, 200f, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_416(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;

	iVar0 = 1;
	if (func_85(iParam0, 128))
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
	if (func_48(iParam0, 1) && !func_48(iParam0, 2))
	{
		if (func_48(iParam0, 4096) || func_48(iParam0, 2048))
		{
			if (func_608(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

int func_417(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;

	uVar0 = func_2(&uParam0);
	if (!func_609())
	{
		return 0;
	}
	return 1;
}

bool func_418(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_610(vVar0, vParam0) > func_610(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_419(int iParam0)
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

int func_420(int iParam0)
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

int func_421(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_611(&iVar1, -2147483648);
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

int func_422()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_423(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_122() != -1)
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

int func_424(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_1;
}

int func_425(int iParam0)
{
	return &(Global_17503.f_42[iParam0 /*8*/]);
}

int func_426(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_427(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_428(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

void func_429(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_335(iParam0))
	{
		return;
	}
	iVar0 = func_552(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_430(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_335(iParam0))
	{
		return;
	}
	iVar0 = func_552(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

void func_431(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_335(iParam0))
	{
		return;
	}
	iVar0 = func_552(iParam0);
	if (bParam1)
	{
		func_612(iParam0, 4);
		func_613(iVar0, 1);
		func_614(iVar0, 1);
	}
	else
	{
		func_615(iParam0, 4);
		func_614(iVar0, 0);
	}
}

void func_432(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_433(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_434(int iParam0)
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

Vector3 func_435(vector3 vParam0, float fParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam3, vParam4);
}

float func_436(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_190((fParam0 + fParam1));
}

int func_437(int iParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;

	if (bParam6)
	{
		func_616(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_617(uParam1))
	{
		iVar0 = PED::_0xEAF682A14F8E5F53(uParam1->f_5, vParam2, fParam5, 1, 1, iParam9, iParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = func_618(iParam0, vParam2, fParam5, 1, 1, 0, 1, bParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_618(iParam0, vParam2, fParam5, 1, 1, 0, 1, bParam8, 1, 0, 0, 0, 0);
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
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !func_619(iVar0))
		{
			func_195(iVar0, &(uParam1->f_23), 0);
		}
		if (func_619(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
		}
		if (func_620(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, !func_621(&(uParam1->f_22)));
			func_213(iVar0, func_622(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (func_623(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (func_624(&(uParam1->f_22)))
		{
			func_625(iVar0, 1);
		}
		ENTITY::_0xA91E6CF94404E8C9(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, func_626(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
		if (!func_188(uParam1->f_22, 8192))
		{
			ENTITY::_SET_ENTITY_SOMETHING(iVar0, true);
		}
		if (!func_619(iVar0))
		{
			func_628(iVar0, !func_627(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4, func_629(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, !func_630(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, !func_630(&(uParam1->f_22)));
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

int func_438(int iParam0, int iParam1)
{
	if (func_631(iParam0) != -1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("u_m_m_nbxbrontegoon_01"):
		case joaat("g_m_m_uniswamp_01"):
		case joaat("u_m_m_nbxbrontesecform_01"):
		case joaat("u_m_m_nbxbronteasc_01"):
		case joaat("g_m_m_unibrontegoons_01"):
			return 1;
		case joaat("g_m_m_unicriminals_02"):
		case joaat("g_m_m_unicriminals_01"):
			return iParam1;
		default:
			break;
	}
	return 0;
}

bool func_439(var uParam0)
{
	return func_188(*uParam0, 32);
}

int func_440(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (PED::GET_MOUNT(iParam0) != iParam1)
	{
		PED::_SET_PED_ON_MOUNT(iParam0, iParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, bParam2);
	}
	return 1;
}

int func_441(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_632(*uParam0, 0f, 0f, 0f))
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

void func_442(int iParam0, int iParam1)
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

int func_443(int iParam0, var uParam1)
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

bool func_444(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_445(int iParam0)
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

bool func_446(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_447(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_334(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_334(iVar4) && iVar4 != bVar0)
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
	if (func_122() == -1 && !func_445(bVar0))
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
				if (func_445(joaat("weapon_repeater_carbine")))
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
		if (iParam0 != Global_35 && func_334(bVar0))
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
		func_633(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_634(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_635(bVar0))
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

int func_448(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_shotgun_sawedoff_charles"):
		case joaat("weapon_shotgun_sawedoff"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_449(int iParam0)
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

var func_450(int iParam0, int iParam1, var uParam2, int iParam3)
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

bool func_451(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_452(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | 16777216;
	}
}

int func_453(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_452(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_133(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_232(&(iParam1->f_13));
		}
		if (func_636(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_637(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_453(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_554(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_638(*uParam0, 1, 1);
						}
					}
					else if (func_639(iParam1, 22))
					{
						func_638(*uParam0, 0, 1);
					}
				}
				if (func_640(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_641(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_642(iParam8);
					if (func_643(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET(uParam3[iParam1->f_1 /*17*/], 20))
								{
									func_644(uParam3);
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
					func_645(iParam1, uParam3, fVar8);
					if (func_646(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_145(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_647(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_640(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_648(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_643(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_641(uParam0, func_640(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_642(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_145(uParam3, 0, 0, 1, 1);
					}
					func_649(iParam1, 1);
				}
				func_645(iParam1, uParam3, fVar8);
				if (func_647(uParam0, iParam1, fParam4, bVar6))
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
			func_42(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_454(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	var uVar2;

	iVar0 = func_650(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = ((*uParam1)[iVar0 /*17*/])->f_13;
		uVar2 = ((*uParam1)[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_231(Global_35, *uParam2, sVar1, "", -1082130432, uVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_455(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_122() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_456()
{
	switch (iLocal_618)
	{
		case 0:
			sLocal_845 = "PB_ILO_N";
			break;
		case 2:
			sLocal_845 = "PB_ILO_BR";
			break;
		case 1:
			sLocal_845 = "PB_ILO_BL";
			break;
		case 3:
			sLocal_845 = "PB_ILO_L";
			break;
		case 4:
			sLocal_845 = "PB_ILO_R";
			break;
	}
}

int func_457(int iParam0, int iParam1)
{
	if (func_27(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (iParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return 0;
}

int func_458(float fParam0)
{
	if (func_651(1))
	{
		return 1;
	}
	if (func_291(&uLocal_0) && !func_652(&uLocal_0, (7.5f + fParam0)))
	{
		return 1;
	}
	return 0;
}

int func_459(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;

	iParam5 = iParam5;
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
		if (func_257())
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
				if (func_33(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_127(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || iParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_232(&uLocal_0);
			if (!bVar0 && iParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_653(iParam0, iParam1, fVar1, bParam13))
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
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
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
				iVar2 = func_654(func_329(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_460(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_483() - fParam1);
	func_655(uParam0, 1);
	func_656(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_461()
{
	switch (iLocal_618)
	{
		case 0:
			sLocal_846 = "PB_ILO_RIDE_N";
			break;
		case 2:
			sLocal_846 = "PB_ILO_RIDE_BR";
			break;
		case 1:
			sLocal_846 = "PB_ILO_RIDE_BL";
			break;
		case 3:
			sLocal_846 = "PB_ILO_RIDE_L";
			break;
		case 4:
			sLocal_846 = "PB_ILO_RIDE_R";
			break;
	}
}

void func_462()
{
	switch (iLocal_618)
	{
		case 0:
			sLocal_845 = "PB_ILO_N_NEG";
			break;
		case 2:
			sLocal_845 = "PB_ILO_BR_NEG";
			break;
		case 1:
			sLocal_845 = "PB_ILO_BL_NEG";
			break;
		case 3:
			sLocal_845 = "PB_ILO_L_NEG";
			break;
		case 4:
			sLocal_845 = "PB_ILO_R_NEG";
			break;
	}
}

float func_463(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_464(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, Vector3 vParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_465(int iParam0)
{
	var uVar0;

	if (iParam0 == -1)
	{
		uVar0 = func_533(1);
	}
	else
	{
		uVar0 = func_657(iParam0);
	}
	return uVar0;
}

void func_466(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_658(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_659(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17503.f_2205[iVar2 /*2*/] = &Global_17503.f_2205[iVar2 /*2*/] + 1;
	}
}

void func_467(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_85(iParam0, 8192))
	{
		iVar0 = func_659(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17503.f_2205[iVar0 /*2*/] = &Global_17503.f_2205[iVar0 /*2*/] + 1;
	}
}

void func_468(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
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
	func_389(iParam0, iParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_469(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_48(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_660(262144, iVar0, 0, 1);
		}
	}
	if (func_48(iParam0, 128))
	{
		func_660(128, iVar0, 0, 1);
	}
	else if (func_48(iParam0, 524288))
	{
		func_660(524288, iVar0, 0, 1);
	}
	else if (func_48(iParam0, 536870912))
	{
		func_660(536870912, iVar0, 0, 1);
	}
	else if (func_48(iParam0, 4194304))
	{
		func_660(4194304, iVar0, 0, 1);
	}
	else if (func_48(iParam0, 8388608))
	{
		func_660(8388608, iVar0, 0, 1);
	}
}

void func_470(int iParam0)
{
	Global_1310750->f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750->f_16071 = iParam0;
}

int func_471(bool bParam0)
{
	if (!bParam0 && func_661(373691918))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(752193127, bParam0, 0);
	return 1;
}

int func_472()
{
	return Global_1310750->f_16037;
}

int func_473(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_474(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_23(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_662(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_475(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_663(Global_1393447, 1);
	func_664();
	func_665();
	func_666((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_605() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_667();
		if (iParam1 == -1)
		{
			if (func_3(iParam0, 1))
			{
				func_660(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_3(iParam0, 2))
			{
				func_660(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_3(iParam0, 4))
			{
				func_660(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_668(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_669(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_669((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

bool func_476(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] && iParam0) != 0;
}

void func_477(int iParam0, int iParam1)
{
	((*Global_1392050)[iParam1 /*14*/])->f_1 = (((*Global_1392050)[iParam1 /*14*/])->f_1 - (((*Global_1392050)[iParam1 /*14*/])->f_1 && iParam0));
}

void func_478(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1 /*10*/] = (Global_40.f_9571[iParam1 /*10*/] || iParam0);
}

int func_479(int iParam0)
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

bool func_480()
{
	return (Global_1935630->f_44 == joaat("weapon_kit_binoculars") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

int func_481(var uParam0, float fParam1, float fParam2, var uParam3)
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

int func_482(var uParam0, float fParam1, float fParam2, var uParam3)
{
	if (func_481(uParam0, fParam1, fParam2, uParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_483() - 0.02f);
		}
		return 1;
	}
	uParam0->f_8 = 0f;
	return 0;
}

float func_483()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_484(bool bParam0, var uParam1, var uParam2)
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

int func_485()
{
	return &Global_1899515;
}

int func_486(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_487(int iParam0)
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

int func_488(int iParam0)
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

int func_489(int iParam0)
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

int func_490(int iParam0)
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

int func_491(int iParam0)
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

int func_492(int iParam0)
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

int func_493(int iParam0)
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

int func_494(bool bParam0, var uParam1, var uParam2)
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

int func_495()
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

int func_496(int iParam0)
{
	if (!func_499(iParam0))
	{
		return -1;
	}
	return func_671(func_670(iParam0));
}

bool func_497(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_498(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_499(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_500(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_501(int iParam0)
{
	return func_48(iParam0, Global_1310750->f_16072 | 64);
}

int func_502(int iParam0)
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

int func_503(int iParam0)
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

bool func_504(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1310750)[iParam0 /*111*/])->f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1310750)[iParam0 /*111*/])->f_40)) != 0);
}

int func_505(int iParam0, float fParam1, float fParam2, float fParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	float fVar14;

	if (!Global_1935630->f_27 && !bParam4)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, -128997553))
	{
		fVar0 = func_127(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
		if (fVar0 < fParam3 && fVar0 > 0.5f)
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, 0, 0))
				{
					iVar2 = iParam0;
					if (iVar1 == iVar2)
					{
						return 0;
					}
				}
				iVar3 = func_672(PLAYER::PLAYER_PED_ID(), 0);
				if (func_673(iVar3) && !PAD::IS_CONTROL_PRESSED(0, 130948705))
				{
					return 0;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && PED::WAS_PED_SKELETON_UPDATED(iParam0))
				{
					vVar4 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
				}
				else
				{
					vVar4 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
				}
				vVar7 = { func_674(0) };
				vVar10 = { func_675(vVar4 - CAM::GET_GAMEPLAY_CAM_COORD()) };
				fVar13 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.x, vVar10.y, vVar7.x, vVar7.y));
				fVar14 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.y, vVar10.z, vVar7.y, vVar7.z));
				if (fVar13 < fParam1)
				{
					if (fVar14 < fParam2)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_506(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_676(uParam2, 1, iVar0);
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
			if (func_677(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_678(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_679(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_678(iParam0, uParam2, *iParam3);
					return 1;
				}
				else if (func_680(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_678(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_681(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_678(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_259(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_678(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_682(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_683(Global_35, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_678(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_684(Global_35, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_678(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_685(Global_35, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_678(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			else if (func_685(Global_35, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_678(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_686(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_678(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_687(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_678(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_688(uParam2, 4000))
				{
					if ((func_689(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_690(uParam2, iParam0)) && func_691(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_678(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_689(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_690(uParam2, iParam0)) && func_691(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_678(iParam0, uParam2, *iParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_692(iParam0, Global_1935630->f_41))
							{
								func_693();
								*iParam3 = 2;
								func_678(iParam0, uParam2, *iParam3);
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
						if (func_692(iParam0, Global_1935630->f_41))
						{
							func_693();
							*iParam3 = 2;
							func_678(iParam0, uParam2, *iParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_694(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_605() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_693();
						*iParam3 = 2;
						func_678(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_695())
					{
						if (func_692(iParam0, Global_1935630->f_42))
						{
							func_693();
							*iParam3 = 2;
							func_678(iParam0, uParam2, *iParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_696(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_678(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_697(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_678(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_698(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_678(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_699(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_678(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_700(uParam2, 4000))
				{
					if (func_701(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_678(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_702(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_4 = 0;
					func_678(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_703(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_678(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
	}
	return 0;
}

void func_507()
{
	switch (iLocal_618)
	{
		case 0:
			sLocal_847 = "pb_cower_r";
			break;
		case 2:
			sLocal_847 = "pb_cower_r";
			break;
		case 1:
			sLocal_847 = "pb_cower_l";
			break;
		case 3:
			sLocal_847 = "pb_cower_l";
			break;
		case 4:
			sLocal_847 = "pb_cower_r";
			break;
	}
}

int func_508()
{
	if (iLocal_14 == 0)
	{
		if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(&(uLocal_443[1]), "script_re@berry_gang", "cower_l_exit_girl") >= 0.88f || ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(&(uLocal_443[1]), "script_re@berry_gang", "cower_r_exit_girl") >= 0.88f)
		{
			return 1;
		}
	}
	else if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(&(uLocal_443[1]), "script_re@berry_gang@trap", "cower_l_exit_girl") >= 0.88f || ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(&(uLocal_443[1]), "script_re@berry_gang@trap", "cower_r_exit_girl") >= 0.88f)
	{
		return 1;
	}
	return 0;
}

void func_509()
{
	switch (iLocal_764)
	{
		case 0:
			func_231(&(uLocal_443[1]), Global_35, func_180(16), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iLocal_764++;
			break;
		case 1:
			if (func_230(-4f, 1, &(uLocal_443[1]), 1) && func_230(-1f, 1, 0, 0))
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(17), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_764++;
			}
			break;
		case 2:
			if (func_230(-4f, 1, &(uLocal_443[1]), 1) && func_230(-1f, 1, 0, 0))
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(18), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_764++;
			}
			break;
		case 3:
			if (func_230(-4f, 1, &(uLocal_443[1]), 1) && func_230(-1f, 1, 0, 0))
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(19), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_764++;
			}
			break;
	}
}

float func_510()
{
	float fVar0;
	float fVar1;

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35));
		if (fVar0 == 0f)
		{
			fVar1 = 15f;
		}
		else if (fVar0 == 1f)
		{
			fVar1 = 20f;
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fVar1 = 20f;
		}
		else if (fVar0 > 1.5f && fVar0 <= 2f)
		{
			fVar1 = 30f;
		}
		else
		{
			fVar1 = 40f;
		}
	}
	else
	{
		fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35);
		if (fVar0 == 0f)
		{
			fVar1 = 15f;
		}
		else if (fVar0 == 1f)
		{
			fVar1 = 20f;
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fVar1 = 25f;
		}
		else if (fVar0 > 1.5f && fVar0 <= 2f)
		{
			fVar1 = 30f;
		}
		else
		{
			fVar1 = 30f;
		}
	}
	return fVar1;
}

void func_511()
{
	switch (iLocal_618)
	{
		case 0:
			sLocal_843 = "PB_CALL_N";
			break;
		case 2:
			sLocal_843 = "PB_CALL_RB";
			break;
		case 1:
			sLocal_843 = "PB_CALL_LB";
			break;
		case 3:
			sLocal_843 = "PB_CALL_L";
			break;
		case 4:
			sLocal_843 = "PB_CALL_R";
			break;
	}
}

void func_512()
{
	if (iLocal_14 == 0)
	{
		if (iLocal_798 == 0 && !func_287())
		{
			switch (iLocal_750)
			{
				case 0:
					if (func_230(0f, 1, 0, 0) && func_230(-4f, 1, &(uLocal_443[1]), 1))
					{
						func_231(&(uLocal_443[1]), Global_35, func_180(6), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_750++;
					}
					break;
				case 1:
					if (func_230(1f, 1, 0, 0) && func_230(-4f, 1, &(uLocal_443[1]), 1))
					{
						func_231(&(uLocal_443[1]), Global_35, func_180(7), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_750++;
					}
					break;
				case 2:
					if (func_230(1f, 1, 0, 0) && func_230(-4f, 1, &(uLocal_443[1]), 1))
					{
						func_231(&(uLocal_443[1]), Global_35, func_180(8), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_750++;
					}
					break;
			}
		}
	}
	else if ((iLocal_798 == 0 && !func_287()) && iLocal_624 == 0)
	{
		switch (iLocal_750)
		{
			case 0:
				if (iLocal_831 == 0)
				{
					if (func_230(-4f, 1, &(uLocal_443[1]), 1))
					{
						func_231(&(uLocal_443[1]), Global_35, func_180(3), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
						iLocal_831 = 1;
						iLocal_750++;
					}
				}
				else
				{
					iLocal_750++;
				}
				break;
			case 1:
				if (func_230(-1f, 1, 0, 0) && func_230(-4f, 1, &(uLocal_443[1]), 1))
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(7), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_750++;
				}
				break;
			case 2:
				if (func_230(-1f, 1, 0, 0) && func_230(-4f, 1, &(uLocal_443[1]), 1))
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(11), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_750++;
				}
				break;
			case 3:
				if (func_230(0f, 1, 0, 0) && func_230(-4f, 1, &(uLocal_443[1]), 1))
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(8), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_750++;
				}
				break;
			case 4:
				if (func_230(0f, 1, 0, 0) && func_230(-4f, 1, &(uLocal_443[1]), 1))
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(9), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_750++;
				}
				break;
			case 5:
				if (func_230(0f, 1, 0, 0) && func_230(-4f, 1, &(uLocal_443[1]), 1))
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(10), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_750++;
				}
				break;
			case 6:
				if (func_230(1f, 1, 0, 0) && func_230(-4f, 1, &(uLocal_443[1]), 1))
				{
					func_231(&(uLocal_443[1]), Global_35, func_180(7), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_750++;
				}
				break;
		}
	}
}

bool func_513(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_514(var uParam0)
{
	return func_513(*uParam0, 2);
}

void func_515()
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	fLocal_735 = func_704(Global_35, Local_422, "player", "PB_HELP", 0);
	vLocal_732 = { func_705(Global_35, Local_422, "player", "PB_HELP", 0) };
	WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, 0);
	PED::_0x7DE9692C6F64CFE8(Global_35, false, 0, 0);
	uVar4 = func_706(iLocal_493, vLocal_497);
	uVar5 = func_706(iLocal_493, Global_36);
	uVar6 = (func_706(iLocal_494, vLocal_497) || func_706(iLocal_495, vLocal_497));
	uVar7 = (func_706(iLocal_494, Global_36) || func_706(iLocal_495, Global_36));
	uVar8 = func_706(iLocal_496, vLocal_497);
	uVar9 = func_706(iLocal_496, Global_36);
	uVar10 = func_706(iLocal_491, Global_36);
	uVar11 = func_706(iLocal_492, Global_36);
	if ((uVar4 || uVar5) && (uVar10 || uVar11))
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_732, fLocal_735, 1.4f, -0.25f, 0f) };
		func_441(&vVar0, 1, 10, 0);
	}
	if ((uVar6 || uVar7) && (uVar10 || uVar11))
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_732, fLocal_735, -1.5f, 0.4f, 0f) };
		func_441(&vVar0, 1, 10, 0);
	}
	if (uVar8 || uVar9)
	{
		vVar0 = { 0f, 0f, 0f };
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar3);
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
	}
	TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
	if (!func_153(vVar0))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1.5f, 9000, 0.25f, true, 40000f);
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_732, 1.5f, 9000, 0.25f, false, fLocal_735);
	TASK::CLOSE_SEQUENCE_TASK(iVar3);
	TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar3);
}

int func_516(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_707(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_708(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

var func_517(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_UI_FEED_POST_HELP_TEXT(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_518(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_335(iParam0))
	{
		return false;
	}
	iVar0 = func_552(iParam0);
	return HUD::_UIPROMPT_HAS_MASH_MODE_FAILED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_519(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_335(iParam0))
	{
		return;
	}
	iVar0 = func_552(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_520()
{
	switch (iLocal_757)
	{
		case 0:
			if (func_230(-4f, 1, &(uLocal_443[1]), 1) && func_709(iLocal_898, 1) >= 0.05f)
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(146), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_757++;
			}
			break;
		case 1:
			if (func_230(-4f, 1, &(uLocal_443[1]), 1) && func_709(iLocal_898, 1) >= 0.5f)
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(147), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_757++;
			}
			break;
	}
}

void func_521()
{
	switch (iLocal_758)
	{
		case 0:
			if (func_230(-4f, 1, Global_35, 1) && func_709(iLocal_898, 1) >= 0.05f)
			{
				func_231(Global_35, &(uLocal_443[1]), func_180(163), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_758++;
			}
			break;
		case 1:
			if (func_230(-4f, 1, Global_35, 1) && func_709(iLocal_898, 1) >= 0.5f)
			{
				func_231(Global_35, &(uLocal_443[1]), func_180(163), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_758++;
			}
			break;
	}
}

int func_522(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	int iVar0;

	if (!func_335(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			*uParam0 = func_710(sParam1, iParam6, iParam5, iParam10, iParam9, 0, iParam15, iVar0, 1070386381, 570, 4000, 10, 1073741824, 0, iParam18, 0, 0);
			func_711(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_712(sParam1, iParam6, iParam13, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		else
		{
			if (func_153(vParam2))
			{
				return 0;
			}
			*uParam0 = func_713(sParam1, iParam6, vParam2, fParam7, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		if (fParam8 != 0f)
		{
			func_429(*uParam0, sParam1, BUILTIN::CEIL(MISC::ABSF(fParam8)), 1);
			if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_350(1))
			{
				func_431(*uParam0, 0, 1);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		{
		}
		if (bParam19)
		{
			func_714(*uParam0, 0, 1);
		}
		return 0;
	}
	if (!bParam16)
	{
		if (func_715(*uParam0, 0))
		{
			if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
			{
				func_431(*uParam0, 0, 1);
			}
		}
		else if (!PED::IS_PED_CARRYING_SOMETHING(Global_35))
		{
			func_431(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_350(1))
		{
			func_431(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam5) && ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (func_335(*uParam0))
			{
				func_330(uParam0, 1, 1);
				return 0;
			}
		}
	}
	if ((!bParam17 && func_716(*uParam0, 1)) || (bParam17 && func_524(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				func_568(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				func_717(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 1065353216, 1, 0, 0, 1, 752097756);
			}
		}
		func_330(uParam0, 1, 1);
		return 1;
	}
	return 0;
}

int func_523(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_335(iParam0))
	{
		return 0;
	}
	iVar0 = func_552(iParam0);
	return HUD::_0xB0E8599243B3F568(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_524(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_335(iParam0))
	{
		return false;
	}
	iVar0 = func_552(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_525()
{
	func_238(Local_559[1 /*17*/], "INTERACT_GREET");
	func_238(Local_559[2 /*17*/], "RE_INTER_ANTAGONIZE");
	func_236(Local_559[1 /*17*/], 0, 1);
	func_236(Local_559[2 /*17*/], 0, 1);
	func_236(Local_559[2 /*17*/], 0, 1);
	func_236(Local_559[1 /*17*/], 0, 1);
}

int func_526()
{
	switch (iLocal_753)
	{
		case 0:
			if (!func_235())
			{
				if (func_231(Global_35, &(uLocal_443[1]), func_180(93), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					iLocal_753++;
				}
			}
			break;
		case 1:
			if (!func_235())
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(94), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_753++;
			}
			break;
		case 2:
			if (func_230(-4f, 1, &(uLocal_443[1]), 1))
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(95), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_753++;
			}
			break;
		case 3:
			if (func_230(-4f, 1, &(uLocal_443[1]), 1))
			{
				func_231(&(uLocal_443[1]), Global_35, func_180(96), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_753++;
			}
			break;
		case 4:
			if (func_230(-4f, 1, &(uLocal_443[1]), 1))
			{
				iLocal_753++;
			}
			break;
		case 5:
			return 1;
	}
	return 0;
}

void func_527(var uParam0, int iParam1)
{
	if (uParam0->f_16 != 0 || *iParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		uParam0->f_8 = func_605();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_5 = 0;
	uParam0->f_10 = 0;
	func_718(uParam0, 0);
	*iParam1 = 0;
	uParam0->f_16 = 0;
}

int func_528(int iParam0)
{
	if (func_367())
	{
		return 0;
	}
	return func_719(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

char* func_529(int iParam0)
{
	if (func_720(iParam0))
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

void func_530()
{
	if ((!func_80(&(uLocal_443[1]), 1435919172) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_443[1]), Global_35, 1, 1)) && !PED::IS_PED_RAGDOLL(&(uLocal_443[1])))
	{
		if (func_721(&(uLocal_443[1]), Local_422, "LADY", 0, 0, 1, 0))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(uLocal_443[1]), Global_35, -1, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_531()
{
	if (func_122() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

int func_532(int iParam0, char* sParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, MISC::GET_HASH_KEY(sParam1)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_533(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_722(1, 0, 0);
	}
	else
	{
		iVar0 = func_269();
	}
	return func_657(iVar0);
}

void func_534(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_535()
{
	_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(4, 1, 0);
}

int func_536(vector3 vParam0, var uParam3, float fParam4, int iParam5, bool bParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	var uVar10;
	var uVar11;

	if (PATHFIND::GET_CLOSEST_ROAD(vParam0, fParam4, iParam5, &vVar3, &vVar0, &uVar10, &uVar9, &uVar11, bParam6))
	{
		vVar6 = { func_675(vVar3 - vVar0) };
		*uParam3 = { vVar0 + vVar6 * FtoV((0.5f * MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, true))) };
		return 1;
	}
	return 0;
}

int func_537(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_109(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

void func_538()
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_443[1]), true);
	if (iLocal_833 == 1)
	{
		func_39(&iLocal_780);
		func_39(&iLocal_781);
		if (func_549(7) == Global_1935630->f_41 && Global_1935630->f_41 == PED::GET_MOUNT(&(uLocal_443[1])))
		{
			func_40(7);
		}
		else if (func_549(1) == Global_1935630->f_41 && Global_1935630->f_41 == PED::GET_MOUNT(&(uLocal_443[1])))
		{
			func_40(1);
		}
		iLocal_833 = 0;
	}
	bLocal_507 = true;
	func_324();
	iLocal_790 = 1;
	if (func_27(&(uLocal_443[1]), 0, 0))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
		if (func_300(&(uLocal_443[1])))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(&(uLocal_443[1]), false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4096);
			}
			if (PED::IS_PED_ON_MOUNT(&(uLocal_443[1])))
			{
				TASK::TASK_DISMOUNT_ANIMAL(0, 4096, 0, 0, 0, 0);
			}
			TASK::_TASK_FLEE_FROM_PED(0, Global_35, vLocal_473, 999f, -1, 321, 1.5f, 0);
		}
		else
		{
			TASK::_TASK_FLEE_FROM_PED(0, Global_35, vLocal_473, 999f, -1, 320, 1.5f, 0);
		}
		TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
		TASK::TASK_PERFORM_SEQUENCE(&(uLocal_443[1]), iLocal_783);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
		if (iLocal_786)
		{
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(&(uLocal_443[1])) == 1391706777)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(uLocal_443[1]), 841021282);
				iLocal_786 = 0;
			}
		}
	}
	func_30(2, 0, 0, "RE_HONOR_BROKE_AGREEMENT", &(uLocal_443[1]), 0, 1065353216, 0);
	func_128(1);
	func_231(&(uLocal_443[1]), Global_35, func_180(107), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	func_324();
	func_15(8);
}

float func_539(var uParam0)
{
	if (!func_291(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_514(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_483() - uParam0->f_1);
}

void func_540()
{
	vector3 vVar0;

	if (iLocal_904)
	{
		return;
	}
	switch (iLocal_512)
	{
		case 6:
		case 7:
			vVar0 = { 2947.83f, 1348.28f, 43.8f };
			break;
		case 9:
			vVar0 = { -312.07f, 781.36f, 117.75f };
			break;
		case 11:
			vVar0 = { 2818.74f, -1114.02f, 45.47f };
			break;
	}
	bLocal_507 = true;
	if (MAP::DOES_BLIP_EXIST(&(iLocal_450[1])))
	{
		func_39(iLocal_450[1]);
	}
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
	if (PED::IS_PED_ON_MOUNT(&(uLocal_443[1])))
	{
		TASK::TASK_DISMOUNT_ANIMAL(0, 1, 0, 0, 0, 0);
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(&(uLocal_443[1]), false))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1f, -1, 0.25f, 7471124, 40000f);
	TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_476, 5f, 0, 0, 0, 1, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
	TASK::TASK_PERFORM_SEQUENCE(&(uLocal_443[1]), iLocal_783);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
	iLocal_904 = 1;
}

int func_541(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	bVar3 = PED::IS_PED_ON_MOUNT(iParam0);
	if (bVar3)
	{
		iVar2 = PED::GET_MOUNT(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (func_188(*iParam1, 128))
	{
		if (!func_80(iParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			*iParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_188(*iParam1, 2))
	{
		if (bVar3)
		{
			if (!func_723(iVar2))
			{
				return 0;
			}
			if (!func_80(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_724(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_188(*iParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return 0;
		}
		else if ((func_3(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_0x4C8B59171957BCF7(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_0x4C8B59171957BCF7(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_0x4C8B59171957BCF7(iParam0)));
			func_174(iParam1, 128);
			return 0;
		}
		else
		{
			*iParam1 = 0;
			return 1;
		}
	}
	if (func_188(*iParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return 0;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, 0, 1);
			*iParam1 = 0;
			return 1;
		}
	}
	if (func_188(*iParam1, 8))
	{
		if (bVar3)
		{
			if (!func_723(iVar2))
			{
				return 0;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*iParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!func_3(iParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!func_3(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam3, 0);
				if (func_3(iParam2, 8192))
				{
					HUD::_DISABLE_HUD_CONTEXT(724769646);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, -1879280170, false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar2, 0))
		{
			return 0;
		}
		if (func_188(*iParam1, 2336))
		{
			if (!func_723(iVar2))
			{
			}
			if (func_725(iVar2, *iParam1))
			{
				func_726(iParam1, 32);
				func_726(iParam1, 256);
				func_726(iParam1, 2048);
				func_174(iParam1, 512);
				func_174(iParam1, 1024);
				func_174(iParam1, 4096);
			}
			else
			{
				return 0;
			}
		}
		if (func_188(*iParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
			if (!func_723(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return 0;
			}
			else
			{
				func_726(iParam1, 64);
			}
		}
		if (func_3(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*iParam1 = 0;
			return 1;
		}
		PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && func_3(iParam2, 1024))) || func_3(iParam2, 8)) && !func_188(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			func_174(iParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && func_3(iParam2, 4096)) && !func_188(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			func_174(iParam1, 2048);
			func_174(iParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && func_3(iParam2, 32)) && !func_188(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			func_174(iParam1, 256);
			func_174(iParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			func_174(iParam1, 64);
		}
		else if (!func_3(iParam2, 1))
		{
			if (!func_3(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_724(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_188(*iParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			func_174(iParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			func_174(iParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_3(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			func_174(iParam1, 4);
		}
		else
		{
			*iParam1 = 0;
			return 1;
		}
	}
	else if (!func_3(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		func_174(iParam1, 8);
	}
	return 0;
}

void func_542(int iParam0)
{
	iLocal_612 = iParam0;
	PED::_0x2EB75FB86C41F026(iLocal_612, 3, 0);
	iLocal_613 = 1;
}

int func_543(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
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
	bool bVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;

	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	if (!func_727(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_728(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_729(iParam0, bParam2);
	iVar2 = 0;
	if (func_730(iParam0, 0, 0) == 0)
	{
		if (func_731(iParam0))
		{
			iVar5 = func_732(iParam0);
			iVar6 = func_733(iVar5);
			iVar7 = func_734(iVar6) + 1;
			func_735(iVar5);
			if (func_736(38))
			{
				func_347(483, 0);
			}
			else
			{
				func_347(482, 0);
			}
			if (iVar7 == func_737(iVar6))
			{
				func_543(func_738(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_585() && func_739(4))
				{
					if (func_585() && (func_740(38) || func_736(38)))
					{
						func_742(38, func_738(iVar6), 0, 0, func_741(), 0, -1, 0);
						func_743(2);
					}
					else
					{
						func_742(38, func_738(iVar6), 0, 0, func_741(), 0, -1, 0);
						func_743(1);
					}
				}
			}
			else if (func_585() && func_739(4))
			{
				if (func_585() && (func_740(38) || func_736(38)))
				{
					func_742(38, 0, 0, 0, func_741(), 0, -1, 0);
					func_743(2);
				}
				else
				{
					func_742(38, 0, 0, 0, func_741(), 0, -1, 0);
					func_743(1);
				}
			}
			if (func_585() && func_739(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_585() && (func_740(38) || func_736(38)))
					{
						func_744(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_744(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_581(iParam0) == -1037537535)
	{
		if ((!func_745(iParam0, 866047851) && !func_745(iParam0, -1979000645)) && !func_745(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_746(iParam0, 8388608) && !func_366(28))
	{
		func_747(28);
	}
	if (!bVar3)
	{
		if (func_745(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_748(iParam0) == -1447088266)
			{
				iVar1 = func_750(func_749(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_122() == -1)
					{
						func_751(iVar1);
					}
					if (func_752(0) && func_633(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_753(iParam0, iVar0, iParam5);
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
					if (func_122() == -1)
					{
						func_751(iParam0);
					}
					if (func_752(0) && func_633(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_753(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_581(iParam0) == -427144552)
		{
			if (!func_754(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_581(iParam0) == 307971639 && func_755(iParam0))
		{
			if (!func_756(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_745(iParam0, 866047851))
		{
			func_757(iParam0);
		}
		else if (func_745(iParam0, 2000026003))
		{
			func_758(iParam0);
		}
		else if (func_745(iParam0, -103750053))
		{
			func_375(func_759(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_375(func_760(-717883113, 2091222383), iVar0);
		}
		else if (func_745(iParam0, -121341956) && !func_745(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_719(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_347(498, 0);
				}
			}
			if (func_745(iParam0, -2017733358) || func_745(iParam0, -1369131378))
			{
				func_761(iParam0);
			}
		}
		else if (func_745(iParam0, -136654233))
		{
			if (func_745(iParam0, -1021472396))
			{
			}
		}
		else if (func_745(iParam0, -1466706512) && func_745(iParam0, 1147021565))
		{
			func_347(484, 0);
		}
		else if (func_745(iParam0, 1147021565) && func_745(iParam0, -524514947))
		{
		}
		else if (func_745(iParam0, 554195525))
		{
		}
		else if (func_745(iParam0, 589988438))
		{
			if (func_762())
			{
				func_763(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_745(iParam0, 787083290) && func_745(iParam0, 949916894))
		{
			func_764(iParam0);
		}
		else if (func_745(iParam0, -1718133314))
		{
			func_765(iParam0);
		}
		else if (func_745(iParam0, -1738650224))
		{
			func_766(iParam0);
		}
		else if (func_745(iParam0, -1112814642) && func_745(iParam0, 949916894))
		{
			func_767(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_745(iParam0, 1841149704))
		{
			func_768();
		}
		else if (func_745(iParam0, 606799272))
		{
			func_769(iParam0, iParam1);
			func_770(iParam0);
		}
		else if (func_745(iParam0, -1112814642) && func_745(iParam0, -1697809989))
		{
			func_771(iParam0, 0, 0, 0);
		}
		else if (func_745(iParam0, -2017733358) || func_745(iParam0, -1369131378))
		{
			func_761(iParam0);
		}
		else if (func_745(iParam0, -1921346699))
		{
			if (func_122() != -1)
			{
				return 0;
			}
			func_772(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_745(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_773(215778062, 1, 0))
					{
						func_543(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_773(670273567, 1, 0))
					{
						func_543(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_773(-967317137, 1, 0))
					{
						func_543(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_773(526074061, 1, 0))
					{
						func_543(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_773(-1045488665, 1, 0))
					{
						func_543(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_773(471514780, 1, 0))
					{
						func_543(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_745(iParam0, -839724752) && func_746(iParam0, 4))
		{
			if (!func_736(42))
			{
				func_774(iParam0);
			}
		}
		else if (func_745(iParam0, 1399091007))
		{
			func_775(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_745(iParam0, 1248798204))
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
				func_543(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_747(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_776(PLAYER::PLAYER_PED_ID(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_777(&bVar9, 0))
				{
					func_633(bVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_122() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_776(PLAYER::PLAYER_PED_ID(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("weapon_kit_binoculars"):
				break;
			case 2131771850:
				func_347(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_778();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_779();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_780();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_781();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_782();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_783(499813453, 854119837, 0);
				func_784(499813453, 0);
				func_785(1);
				break;
			case 2127812557:
				func_783(499813453, -1292544588, 0);
				func_784(499813453, 0);
				func_785(2);
				break;
			case 808991383:
				func_783(499813453, -1003325394, 0);
				func_784(499813453, 0);
				func_785(4);
				break;
			case 1134518629:
				func_783(666607663, -335460405, 0);
				func_784(666607663, 0);
				func_786(1);
				break;
			case 902940106:
				func_783(666607663, 903797617, 0);
				func_784(666607663, 0);
				func_786(2);
				break;
			case -418174898:
				func_783(666607663, 669728650, 0);
				func_784(666607663, 0);
				func_786(4);
				break;
			case -648114971:
				func_783(-220219788, 1214120047, 0);
				func_784(-220219788, 0);
				func_787(1);
				break;
			case 211153747:
				func_783(-220219788, 655769340, 0);
				func_784(-220219788, 0);
				func_787(2);
				break;
			case -32876996:
				func_783(-220219788, 885316185, 0);
				func_784(-220219788, 0);
				func_787(4);
				break;
			case 1191437462:
				func_783(218622660, -1491419385, 0);
				func_784(218622660, 0);
				func_788(1);
				break;
			case 1119149048:
				func_783(218622660, 1809565830, 0);
				func_784(218622660, 0);
				func_788(2);
				break;
			case 506073827:
				func_783(390004462, -628873767, 0);
				func_784(390004462, 0);
				func_789(1);
				break;
			case -1876986168:
				func_783(390004462, -405421956, 0);
				func_784(390004462, 0);
				func_789(2);
				break;
			case 2142623221:
				func_783(390004462, -1108972386, 0);
				func_784(390004462, 0);
				func_789(4);
				break;
			case 1508215381:
				func_783(6410548, 1053716392, 0);
				func_784(6410548, 0);
				func_790(1);
				break;
			case -888935280:
				func_783(6410548, 806507056, 0);
				func_784(6410548, 0);
				func_790(2);
				break;
			case -1252474566:
				func_783(6410548, 1571925350, 0);
				func_784(6410548, 0);
				func_790(4);
				break;
			case -1465702449:
				func_783(6410548, 1330352282, 0);
				func_784(6410548, 0);
				func_790(8);
				break;
			case -21093309:
				func_792(242, func_791(-21093309), 0);
				break;
			case 204375141:
				func_792(240, func_791(204375141), 0);
				break;
			case -417963070:
				func_792(241, func_791(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_793(594, 1934060482, 1, 1);
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
					func_793(594, 1110018439, 1, 1);
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
					func_793(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_793(594, -1228016946, 1, 1);
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
					func_793(595, -103579, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_793(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case 80178851:
				func_347(488, 0);
				break;
			case 1613651027:
				func_347(491, 0);
				break;
			case -885810591:
				func_347(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_543(func_794(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_543(func_795(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_366(1))
				{
					func_347(487, 0);
				}
				break;
			case -898386032:
				func_347(486, 0);
				break;
			case -2035110427:
				if (func_122() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case 1510719693:
				func_347(496, 0);
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
		func_796(&iVar10);
		if (!func_797(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_752(0))
		{
			return 1;
		}
		if (func_581(iParam0) == -1037537535)
		{
			func_798(iParam0);
		}
		if (func_745(iParam0, -1979000645))
		{
			func_799(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_752(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_543(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_800(iVar2, 0);
		}
	}
	Var35 = { func_801(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_802(iParam0);
	if (sParam6 > 0f)
	{
		if (func_745(iParam0, -839724752))
		{
			func_803(iParam0, sParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_804(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

bool func_544(int iParam0)
{
	return (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0) || ANIMSCENE::_0xD8254CB2C586412B(iParam0, 0));
}

bool func_545(int iParam0)
{
	return func_805(iParam0);
}

void func_546()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iLocal_785 = PED::GET_MOUNT(Global_35);
	}
	if ((PED::IS_PED_IN_ANY_VEHICLE(Global_35, true) && !PED::IS_PED_IN_ANY_BOAT(Global_35)) && !PED::IS_PED_IN_ANY_TRAIN(Global_35))
	{
		iLocal_784 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
	}
}

void func_547(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_548(int iParam0)
{
	if (PED::IS_PED_IN_VEHICLE(iParam0, iLocal_784, false))
	{
		return 1;
	}
	if (func_806(iParam0, iLocal_785, 0))
	{
		return 1;
	}
	return 0;
}

int func_549(int iParam0)
{
	iParam0 = func_139(iParam0);
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

void func_550(int iParam0)
{
	iParam0 = func_139(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_807(iParam0, 32);
	func_141();
}

var func_551(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

int func_552(int iParam0)
{
	return iParam0;
}

void func_553(int iParam0)
{
	if (!func_808(iParam0))
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

void func_554(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

int func_555(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		iVar0 = func_809(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_506(uParam0[*uParam3], 0, uParam1, iParam2, 0, 0))
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

int func_556(var uParam0)
{
	if (TASK::_0x038B1F1674F0E242(Global_35))
	{
		func_337(&(uParam0->f_1), 0);
		if (func_338(&(uParam0->f_1), 1.5f))
		{
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			return 1;
		}
	}
	return 0;
}

float func_557()
{
	switch (Local_15.f_51.f_4)
	{
		case 0:
			return 3f;
		case 1:
			return 3f;
		case 2:
			return 3f;
		case 3:
			return 3f;
		case 4:
			return 3f;
		case 5:
			return 3f;
		case 6:
			return 3f;
		case 7:
			return 3f;
		case 8:
			return 3f;
		case 9:
			return 3f;
	}
	return 3f;
}

void func_558(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_559(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_810(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_811(iParam0))
	{
		return 0;
	}
	if (func_812(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_813(iParam0, 1)) || func_814(32768))
	{
		if (!func_813(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_815())
	{
		return 0;
	}
	return 1;
}

void func_560(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_561(var uParam0, float fParam1, int iParam2)
{
	if (iParam2 || !func_291(uParam0))
	{
		func_460(uParam0, fParam1);
	}
}

void func_562(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;

	if (func_122() != -1)
	{
		uVar0 = &Global_36637.f_1444[*uParam0];
		MISC::SET_BIT(&uVar0, *uParam1);
		Global_36637.f_1444[*uParam0] = uVar0;
		return;
	}
	uVar1 = &Global_40.f_7832[*uParam0];
	MISC::SET_BIT(&uVar1, *uParam1);
	Global_40.f_7832[*uParam0] = uVar1;
}

int func_563(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_564()
{
	if (func_816(4))
	{
		return Global_1935630->f_27;
	}
	return func_817();
}

int func_565(var uParam0)
{
	if (uParam0->f_4)
	{
		return 0;
	}
	if (uParam0->f_9)
	{
		return 0;
	}
	if (!WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
	{
		return 0;
	}
	if (!WEAPON::_0x705BE297EEBDB95D(Global_1935630->f_44))
	{
		return 0;
	}
	if (func_338(&(uParam0->f_32), 1f))
	{
		if (!func_80(Global_35, 716706914))
		{
			return 1;
		}
	}
	return 0;
}

int func_566(var uParam0, var uParam1)
{
	if (uParam0->f_10)
	{
		return 0;
	}
	if ((TASK::IS_PED_WALKING(Global_35) || TASK::IS_PED_RUNNING(Global_35)) || TASK::IS_PED_SPRINTING(Global_35))
	{
		if (uParam1 || MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_25, false) > 2f)
		{
			return 1;
		}
	}
	return 0;
}

int func_567(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_818(iParam0, 1);
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
			func_804(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_773(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_801(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_730(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_730(iParam0, 0, 0) - iParam1) < 0)
		{
			func_567(iParam0, func_730(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_581(iParam0) == -427144552)
	{
		if (!func_819(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_820(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_752(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_804(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_821(iParam0, iParam1);
	return 1;
}

void func_568(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_822(iParam0);
	if (bParam3)
	{
		func_823(iParam0, sParam1, iParam2);
	}
}

void func_569(int iParam0)
{
	if (iParam0 < 200)
	{
		AUDIO::_0x6FB1DA3CA9DA7D90("LOOT_MONEY", Global_35, "LOOT_BODY_SOUNDSET", 0, 0, 0);
	}
	else
	{
		AUDIO::_0x6FB1DA3CA9DA7D90("LOOT_MONEY_BILLS", Global_35, "LOOT_BODY_SOUNDSET", 0, 0, 0);
	}
}

int func_570(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return ENTITY::_0xBA2A089E60ED1163(iParam1, iParam0, 2084597891, 0, 0);
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_money"))
	{
		return 0;
	}
	*iParam1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_money");
	return 1;
}

var func_571()
{
	return Global_40.f_11095.f_35;
}

int func_572(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_573(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_574(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_824(bParam1);
	}
}

void func_575(int iParam0)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-156028329, iParam0);
}

char* func_576(int iParam0)
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

int func_577(var uParam0)
{
	vector3 vVar0;

	if (!func_825(23, &vVar0))
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

int func_578(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_825(23, &Var0))
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

int func_579(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_580(int iParam0)
{
	return iParam0;
}

int func_581(int iParam0)
{
	vector3 vVar0;

	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_582()
{
	int iVar0;

	iVar0 = func_364();
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

void func_583(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_584(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_585()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_586(int iParam0, var uParam1, var uParam2)
{
	if (!func_584(iParam0))
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

void func_587()
{
	func_826(23);
}

void func_588(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_589(var uParam0)
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

void func_590(int iParam0)
{
	int iVar0;

	iVar0 = func_827(iParam0);
	if (iVar0 != 0)
	{
		func_828(-1, 24, 0, iVar0);
	}
}

void func_591(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17503.f_42[iParam0 /*8*/] == 0)
	{
		func_375(func_374(-1029789297), 1);
	}
	Global_17503.f_4++;
	Global_17503.f_42[iParam0 /*8*/] = &Global_17503.f_42[iParam0 /*8*/] + 1;
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 8;
	if (func_48(iParam0, 2))
	{
		func_829(iParam0, func_465(iParam3));
	}
	if (func_48(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_177();
		}
		func_830(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_85(iParam0, 65536))
	{
		func_831(iParam0, iParam1);
		func_832(iParam0, func_148(iParam0, iParam1));
		func_588(128);
	}
	func_468(iParam0, ((*Global_1310750)[iParam0 /*111*/])->f_37, 1065353216, 0, 0);
	func_469(iParam0, 1);
	if (!bParam2)
	{
		func_588(16);
		Global_17503.f_5 = iParam0;
		Global_17503.f_9 = 1;
		Global_17503.f_7 = 0;
		Global_17503.f_8 = 0;
		func_833(524288);
	}
	if (func_834(iParam0) != 0)
	{
		if (&Global_17503.f_42[iParam0 /*8*/] >= func_834(iParam0))
		{
			(Global_17503.f_42[iParam0 /*8*/])->f_6 = 1;
		}
	}
}

void func_592(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_835(&Global_0, 8);
	}
	if (!func_585() || func_122() != -1)
	{
		return;
	}
	func_835(&Global_0, 1);
}

bool func_593(int iParam0, int iParam1)
{
	iParam0 = func_139(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (((*Global_1900383)[iParam0 /*45*/])->f_24 && iParam1) != 0;
}

void func_594(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*uParam0, func_837(func_836(255), 109029619));
	}
	else if (func_531())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_367();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_595(int iParam0)
{
	iParam0 = func_139(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372;
}

void func_596(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*uParam0, func_837(func_836(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_531())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_367())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_597(int iParam0)
{
	iParam0 = func_139(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_37;
}

float func_598(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_599(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	var uVar12;

	iParam0 = func_139(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_838(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_595(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_595(iParam0) + 1;
	fVar6 = func_839(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_840(fVar3, fVar4, fVar11);
	return uVar12;
}

void func_600(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -401963276);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 231194138);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -1012863186);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -272772079);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 1313031610);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -1814032670);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -1380599892);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 430539302);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -995247980);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -25056193);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -264630352);
}

void func_601(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 673950256);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 561559387);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -201249929);
}

int func_602(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x34D6AC1157C8226C(iParam0, -1805387726))
	{
		return 1;
	}
	return 0;
}

int func_603(int iParam0, bool bParam1)
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

void func_604(int iParam0)
{
	Global_17503.f_2++;
	(Global_17503.f_42[iParam0 /*8*/])->f_3++;
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 2;
}

int func_605()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_606(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	var uVar0[4];
	int iVar5[4];

	if (func_153(vParam0))
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

bool func_607(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_153(vParam0))
	{
		return false;
	}
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fParam3, iParam5, iParam4, 16384);
}

int func_608(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_153(*(Global_1310750->f_16043[iVar0 /*3*/])))
		{
			if (func_109(vParam0, *(Global_1310750->f_16043[iVar0 /*3*/])) < 2500f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_609()
{
	int iVar0;
	int iVar1;

	iVar0 = func_841(func_269());
	if (iVar0 == 8)
	{
		iVar1 = func_270(func_269());
		if (func_272(Global_36, iVar1))
		{
			return 0;
		}
	}
	if (func_842(func_533(0)))
	{
		return 0;
	}
	if (func_843())
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

float func_610(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_611(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_612(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_613(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_707(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_614(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_615(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

int func_616(var uParam0, var uParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	if (func_844(&uParam1))
	{
		return 1;
	}
	if (!func_441(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

int func_617(var uParam0)
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

int func_618(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_845(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_619(int iParam0)
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

bool func_620(var uParam0)
{
	return func_188(*uParam0, 4);
}

bool func_621(var uParam0)
{
	return func_188(*uParam0, 64);
}

bool func_622(var uParam0)
{
	return func_188(*uParam0, 8);
}

bool func_623(var uParam0)
{
	return func_188(*uParam0, 128);
}

bool func_624(var uParam0)
{
	return func_188(*uParam0, 2048);
}

void func_625(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

bool func_626(var uParam0)
{
	return func_188(*uParam0, 1024);
}

bool func_627(var uParam0)
{
	return func_188(*uParam0, 256);
}

void func_628(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148, !bParam1);
}

bool func_629(var uParam0)
{
	return func_188(*uParam0, 512);
}

bool func_630(var uParam0)
{
	return func_188(*uParam0, 4096);
}

int func_631(int iParam0)
{
	switch (iParam0)
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
			return 0;
		case joaat("g_m_y_uniexconfeds_02"):
		case joaat("g_m_y_uniexconfeds_01"):
		case joaat("g_m_o_uniexconfeds_01"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("u_m_m_uniexconfedsbounty_01"):
			return 2;
		case joaat("g_m_m_uniinbred_01"):
			return 1;
		case joaat("u_m_m_bht_skinnersearch"):
		case joaat("g_m_m_unimountainmen_01"):
		case joaat("u_m_m_bht_skinnerbrother"):
			return 3;
		case joaat("g_m_m_uniranchers_01"):
		case joaat("cs_laramie"):
			return 4;
		case joaat("u_m_m_bht_banditoshack"):
		case joaat("u_m_m_bht_banditomine"):
		case joaat("g_m_m_unibanditos_01"):
			return 5;
	}
	return -1;
}

bool func_632(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_633(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
	{
		Var0 = { func_846(bParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_847((375 + iVar28), 1);
			if (func_848(bParam0, &Var0, iVar5, 0))
			{
				if (func_849(bParam0, &Var6, iVar5))
				{
					Var29 = { func_850(bParam0, Var0, iVar5, 0) };
					func_851(bParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_752(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
					{
						return 0;
					}
					func_753(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
					func_852(bParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

void func_634(int iParam0, int iParam1, float fParam2)
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

bool func_635(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

int func_636(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_853(iParam0, uParam1))
		{
			if (!func_3(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_145(uParam2, 0, 0, 1, 0);
				func_84(&(uParam1->f_10), 1);
			}
			return 1;
		}
		else if (func_3(uParam1->f_10, 1))
		{
			func_854(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_362(&(uParam1->f_10), 1);
		}
	}
	return 0;
}

int func_637(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_3(iParam4, 32);
		func_144(iParam1, uParam2, 0);
		iVar5 = func_855(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return 1;
		}
		func_145(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_3(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_3(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_3(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_3(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_3(iParam4, 8388608) || func_3(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_3(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_3(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_639(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_639(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_3(iParam4, 67108864))
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
				iParam6 = func_856(uParam0);
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
			if (func_3(iParam4, 268435456))
			{
				iVar8 = func_857(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_858(iParam1, (*uParam2)[iVar8 /*17*/]);
				}
			}
			if (func_639(iParam1, 23))
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
			if (func_3(iParam4, 2) || func_3(iParam4, 16))
			{
				func_638(*uParam0, 1, 1);
			}
			else
			{
				func_638(*uParam0, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_638(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_639(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

int func_640(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_859(*uParam0, bParam3, bVar2, bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_641(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_860(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_3(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_642(int iParam0)
{
	if (func_3(iParam0, 4))
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
	if (func_3(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	}
	if (func_3(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
	}
}

bool func_643(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_350(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_861(Global_35)) || func_862(Global_35)) || func_863(Global_35));
	fVar12 = -1f;
	if (func_291(&(iParam1->f_13)))
	{
		fVar12 = func_539(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (((*uParam4)[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = ((*uParam4)[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_335(((*uParam4)[iVar0 /*17*/])->f_6);
		func_864(*uParam0, (*uParam4)[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_865(*uParam0, iParam1, (*uParam4)[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_866(iParam12, ((*uParam4)[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_145(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_867(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 11))
					{
						func_144(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_868(iParam1, fParam6, iParam1->f_9))
					{
						func_232(&(iParam1->f_18));
						if (bVar6)
						{
							func_867(uParam4, 0, 0);
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
		func_869(iParam1, fParam2);
	}
	return bVar5;
}

void func_644(var uParam0)
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

void func_645(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_870((*uParam1)[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1[iVar0 /*17*/], 20))
			{
				func_869(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

int func_646(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, -124244224))
		{
			if (func_871(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_872(iParam1, 0);
				func_144(iParam1, uParam2, func_639(iParam1, 6));
				return 1;
			}
		}
	}
	return 0;
}

int func_647(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_232(&(iParam1->f_18));
			return 0;
		}
		else if (func_291(&(iParam1->f_18)))
		{
			func_233(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_291(&(iParam1->f_18)))
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
	return func_652(&(iParam1->f_18), fParam2);
	return 1;
}

void func_648(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_864(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_649(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_650(int* iParam0)
{
	if (func_639(iParam0, 0))
	{
		if (func_873(iParam0))
		{
			func_649(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

bool func_651(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

int func_652(var uParam0, float fParam1)
{
	if (func_338(uParam0, fParam1))
	{
		func_233(uParam0);
		return 1;
	}
	return 0;
}

int func_653(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_654(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_655(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_656(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_657(int iParam0)
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

int func_658(int iParam0)
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

int func_659(int iParam0, int iParam1)
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

void func_660(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_401(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_388(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_874(iVar0) < func_875(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_468(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_661(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_876(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_662(int iParam0)
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

void func_663(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_664()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_877(iVar0, 128))
		{
			func_878(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_665()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_877(iVar0, 128) && func_877(iVar0, 1))
		{
			func_878(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_666(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237->f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237->f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_667()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_48(iVar0, 16777216))
		{
			if (!func_879(iVar0))
			{
				func_880(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_668(int iParam0, int iParam1, int iParam2, int iParam3)
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
			func_389(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_389(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_389(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_389(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_389(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_389(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_389(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_669(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_483();
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

int func_670(int iParam0)
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

int func_671(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

var func_672(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_673(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

Vector3 func_674(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	if (!CAM::DOES_CAM_EXIST(iParam0))
	{
		vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	else
	{
		vVar0 = { CAM::GET_CAM_ROT(iParam0, 2) };
	}
	fVar3 = BUILTIN::SIN(vVar0.z);
	fVar4 = BUILTIN::COS(vVar0.z);
	fVar5 = BUILTIN::SIN(vVar0.x);
	fVar6 = BUILTIN::COS(vVar0.x);
	return func_675((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_675(vector3 vParam0)
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

void func_676(var uParam0, bool bParam1, int iParam2)
{
	func_881(iParam2);
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
		uParam0->f_13 = func_882(0);
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
							func_84(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_263(1))
						{
							func_84(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_263(1) || *uParam0 & 8192 != 0))
				{
					func_362(uParam0, 33554432);
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
			if (func_883(uParam0))
			{
				uParam0->f_15 = func_605();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_605() - uParam0->f_15) > 500)
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
	func_884(uParam0);
}

int func_677(int iParam0, var uParam1)
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
			if (!func_885(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_886(iParam0, iVar2) <= func_887(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_678(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_888(iParam2, 1, 1, 1, 0))
	{
		func_84(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_718(uParam1, 1);
	func_387();
}

int func_679(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_889(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_890(uParam1);
			if (func_891(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_892(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_718(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_718(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_680(int iParam0, int iParam1, var uParam2)
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
	if (func_893(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_890(uParam2);
		if (func_891(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_892(uParam2)
				{
					func_718(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_681(int iParam0, var uParam1)
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
	if (func_885(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_892(uParam1)
		{
			fVar3 = func_890(uParam1);
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

int func_682(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_605();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_683(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_894(uParam2);
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
			if (func_691(uParam2, iParam1))
			{
				func_718(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_684(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_895(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_691(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_718(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_685(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_896(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_718(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(956330317, vVar0, uParam2->f_27))
				{
					func_718(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar4, 0, 0);
					if (func_897(iParam1, vVar0, vVar4))
					{
						func_718(uParam2, 1);
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
					func_718(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar7, 0, 0);
					if (func_897(iParam1, vVar0, vVar7))
					{
						func_718(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_686(int iParam0, var uParam1)
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
		if (!func_885(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_898(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_899(&(Global_1935630->f_34[iVar0])))
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
			if (func_900(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_901(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_902(uParam1, iParam0, fVar1, iVar0))
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

int func_687(int iParam0, var uParam1)
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

int func_688(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_605();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_689(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_903(iVar0, &iVar2))
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
	if (func_904(iVar0, iParam0))
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

int func_690(var uParam0, int iParam1)
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

int func_691(var uParam0, int iParam1)
{
	if (func_905(uParam0))
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

int func_692(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_127(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_693()
{
}

int func_694(var uParam0, int iParam1)
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
		if (func_906(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_605();
			return 1;
		}
		else if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(iVar0, &iVar5, &iVar4))
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
						if (func_79(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_605();
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

int func_695()
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
	if ((func_605() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_696(var uParam0, int iParam1)
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
	fVar0 = func_887(uParam0);
	if (uParam0->f_12 > func_907(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_908(iParam1);
	iVar1 = func_909(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_697(int iParam0, int iParam1, var uParam2)
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
	return func_910(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_698(int iParam0, var uParam1)
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
		if (func_911(iParam0, uParam1, 1))
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
					if (!func_912(uParam1, iParam0))
					{
						if (func_79(iVar4, Global_36, 1) < 7f)
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

int func_699(int iParam0, var uParam1)
{
	if (!func_528(0))
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

int func_700(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_605();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_701(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_702(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_605();
	}
	else if (func_605() - uParam1->f_4) > func_913(uParam1)
	{
		return func_914(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

int func_703(var uParam0, int iParam1)
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

float func_704(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	struct<4> Var0;

	if (!bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return 0f;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return 0f;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1, sParam2, &Var0, true, sParam3, 2))
	{
		return Var0.f_3.f_2;
	}
	return 0f;
}

Vector3 func_705(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	vector3 vVar0;

	if (!bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return 0f, 0f, 0f;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1, sParam2, &vVar0, true, sParam3, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

bool func_706(int iParam0, vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(iParam0, vParam1);
}

bool func_707(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

void func_708(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16, int iParam17, var uParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(iVar0, iParam11);
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
	func_613(iParam0, 1);
	func_614(iParam0, 1);
	func_615(iParam0, 128);
}

float func_709(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_335(iParam0))
	{
		return 0f;
	}
	iVar0 = func_552(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_0x81801291806DBC50(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_710(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
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
		if (func_707(iVar0, 2))
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
				func_708(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_711(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_335(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_552(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	((*Global_1945938)[iVar0 /*18*/])->f_9 = fParam1;
	HUD::_UIPROMPT_CONTEXT_SET_SIZE(((*Global_1945938)[iVar0 /*18*/])->f_3, fParam1);
}

int func_712(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_707(iVar0, 2))
		{
			if (iParam2 == ((*Global_1945938)[iVar0 /*18*/])->f_10 && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_708(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_713(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (func_153(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_707(iVar0, 2))
		{
			if (func_411(vParam2, ((*Global_1945938)[iVar0 /*18*/])->f_6, 0.01f, 1) && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_708(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, iParam15, bParam16);
		return iVar1;
	}
	return 0;
}

void func_714(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_335(iParam0))
	{
		return;
	}
	iVar0 = func_552(iParam0);
	func_613(iVar0, iParam1);
}

bool func_715(int iParam0, int iParam1)
{
	if (iParam1 && !func_335(iParam0))
	{
		return false;
	}
	return !func_707(iParam0, 4);
}

bool func_716(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_335(iParam0))
	{
		return false;
	}
	iVar0 = func_552(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_717(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_915(iParam0, sParam4, iParam5);
	}
	func_916(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_718(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_84(uParam0, 134217728);
	}
	else
	{
		func_362(uParam0, 134217728);
	}
}

int func_719(int iParam0, bool bParam1)
{
	switch (func_917(iParam0))
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

int func_720(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return 1;
	}
	return 0;
}

int func_721(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, int iParam6)
{
	if (func_918(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, iParam6 == 0))
	{
		return 1;
	}
	return 0;
}

int func_722(int iParam0, bool bParam1, int iParam2)
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
				if (!bParam1 || func_919(iVar2))
				{
					vVar3 = { VOLUME::GET_VOLUME_COORDS(((*Global_1888801)[iVar2 /*35*/])->f_3) };
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

int func_723(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::IS_PED_INJURED(Global_35))
		{
			if (PED::_0xB676EFDA03DADA52(iParam0, 0) == Global_35)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 308778731, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1002303471, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
			}
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 0f);
	if (func_80(iParam0, 1041577989))
	{
		return 0;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_724(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	return func_464(vVar0, vVar3, vParam1);
}

int func_725(int iParam0, int iParam1)
{
	float fVar0;

	if (!func_80(iParam0, 1041577989))
	{
		return 1;
	}
	fVar0 = TASK::_0xA710DC5D25F8B942(iParam0, 1041577989);
	if (func_188(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return 1;
		}
		return 0;
	}
	if (func_188(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return 1;
		}
		return 0;
	}
	if (func_188(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_726(int iParam0, int iParam1)
{
	func_611(iParam0, iParam1);
}

int func_727(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_122() == -1)
	{
		if (func_920(iParam0) && func_921(iParam0))
		{
			func_922(iParam0, iParam1, 1, &iParam2, iParam3);
			return 0;
		}
	}
	else if (iParam0 == 1259508039)
	{
		iParam2 = 1;
	}
	else if (iParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	return 1;
}

int func_728(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*uParam1 = iParam2;
	func_923(iParam0, uParam1);
	Var0 = { func_846(iParam0, 0, 1) };
	iVar5 = func_924(iParam0, &Var0, 0, 0);
	iVar6 = func_925(iParam0, 0);
	if ((iVar5 > 1 && !func_926()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_745(iParam0, -2051813666))
		{
			func_347(583, 1);
		}
		else
		{
			func_347(582, 0);
		}
	}
	if (func_927(iParam0, &Var0, *uParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*uParam1 = (iVar5 - iVar6);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_729(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_928(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

int func_730(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_581(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_818(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_929(iParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_930(bParam2), iParam0, 0);
	return iVar2;
}

bool func_731(int iParam0)
{
	if (func_122() != -1)
	{
		return false;
	}
	return func_732(iParam0) != 0;
}

int func_732(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_931())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_932(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_733(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_734(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_931())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_733(iVar0))
		{
			if (func_773(func_932(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_735(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_933(48);
	func_592(0, -1);
}

int func_736(int iParam0)
{
	if (func_122() != -1)
	{
		return 0;
	}
	return func_719(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_737(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_738(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_739(int iParam0)
{
	if (func_122() != -1)
	{
		return 0;
	}
	return func_719(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_740(int iParam0)
{
	if (func_122() != -1)
	{
		return 0;
	}
	if (!func_497(iParam0))
	{
		return 0;
	}
	return func_934(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_741()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_773(func_935(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_742(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_585() && (func_740(38) || func_736(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838; /* GXTEntry: "A New Hobby" */
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_585() && (func_740(39) || func_736(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770; /* GXTEntry: "Deborah MacGuiness" */
				iVar13 = -1223580455; /* GXTEntry: "A Test of Faith" */
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279; /* GXTEntry: "Digging up the Past" */
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_936(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			if (func_585() && (func_740(41) || func_736(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610; /* GXTEntry: "Jeremy Gill" */
			iVar13 = -1666208710; /* GXTEntry: "A Fisher of Fish" */
			break;
		case 49:
			if (func_585() && (func_740(49) || func_736(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276; /* GXTEntry: "Francis Sinclair" */
				iVar13 = -170865073; /* GXTEntry: "Geology for Beginners" */
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712; /* GXTEntry: "Rock Carvings" */
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_936(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar13 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	sVar2 = func_937(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_938(iParam0, iVar13, iVar14))
	{
	}
	if (func_939(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_940(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_941(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_942(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_943(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_743(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_744(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_585() && (func_740(38) || func_736(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_585() && (func_740(39) || func_736(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770; /* GXTEntry: "Deborah MacGuiness" */
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455; /* GXTEntry: "A Test of Faith" */
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610; /* GXTEntry: "Jeremy Gill" */
			iVar6 = -1666208710; /* GXTEntry: "A Fisher of Fish" */
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_585() && (func_740(49) || func_736(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276; /* GXTEntry: "Francis Sinclair" */
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073; /* GXTEntry: "Geology for Beginners" */
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar6 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_585() && (func_740(38) || func_736(38)))
		{
			iVar6 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
		}
		else
		{
			iVar6 = 578982838; /* GXTEntry: "A New Hobby" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_944(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_944(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_946(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_945(func_738(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_944(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_944(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_585() && (func_740(39) || func_736(39)))
		{
			iVar6 = -1223580455; /* GXTEntry: "A Test of Faith" */
		}
		else
		{
			iVar6 = 349797279; /* GXTEntry: "Digging up the Past" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_944(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_944(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_585() && (func_740(49) || func_736(49)))
		{
			iVar6 = -170865073; /* GXTEntry: "Geology for Beginners" */
		}
		else
		{
			iVar6 = 1974744712; /* GXTEntry: "Rock Carvings" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_944(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_944(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_944(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_944(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_745(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_746(int iParam0, int iParam1)
{
	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

void func_747(int iParam0)
{
	if (!func_572(iParam0))
	{
		return;
	}
	func_947(iParam0);
	func_948(iParam0);
}

int func_748(int iParam0)
{
	struct<2> Var0;

	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_749(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -1639263599:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1222378998:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 2074469742:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 480079517:
			iVar0 = joaat("weapon_thrown_dynamite");
			break;
		case 840671577:
			iVar0 = joaat("weapon_thrown_dynamite");
			break;
		case joaat("ammo_molotov"):
			iVar0 = joaat("weapon_thrown_molotov");
			break;
		case -2006166057:
			iVar0 = joaat("weapon_thrown_molotov");
			break;
		case 1235846615:
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -228768324:
			iVar0 = joaat("weapon_thrown_tomahawk_ancient");
			break;
		case -1411922943:
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -834103244:
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case 424030678:
			iVar0 = joaat("weapon_melee_hatchet");
			break;
		case 446901936:
			iVar0 = joaat("weapon_melee_hatchet_hunter");
			break;
		case -1092841802:
			iVar0 = joaat("weapon_melee_hatchet_hunter_rusted");
			break;
		case -1452241321:
			iVar0 = joaat("weapon_melee_ancient_hatchet");
			break;
		case -1188697038:
			iVar0 = joaat("weapon_melee_cleaver");
			break;
		case 1671758975:
			iVar0 = joaat("weapon_melee_hatchet_double_bit");
			break;
		case -893514737:
			iVar0 = joaat("weapon_melee_hatchet_double_bit_rusted");
			break;
		case -2063089161:
			iVar0 = joaat("weapon_melee_hatchet_hewing");
			break;
		case -452897925:
			iVar0 = joaat("weapon_melee_hatchet_viking");
			break;
		default:
			break;
	}
	if (func_579(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_949(iVar0) || func_445(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_750(int iParam0, bool bParam1)
{
	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_751(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_334(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

int func_752(bool bParam0)
{
	if (func_122() == -1)
	{
		return 1;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_930(bParam0));
}

int func_753(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_755(iParam0))
	{
		return 0;
	}
	if (!func_752(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

int func_754(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	bVar0 = func_750(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_122() == -1)
		{
			func_751(bVar0);
			if (iParam1 == 1248274121)
			{
				func_950(bVar0);
			}
		}
		if (!func_927(iParam0, &uVar1, 1, 0, 0))
		{
			func_922(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_951(bVar0);
			if (WEAPON::_0x6AD66548840472E5(bVar0))
			{
				func_633(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("weapon_fishingrod") || bVar0 == joaat("weapon_kit_binoculars"))
			{
				func_633(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("weapon_lasso"))
			{
				func_633(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(bVar0))
			{
				if (bVar0 == joaat("weapon_melee_knife_john") && !func_367())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_635(bVar0))
				{
					func_633(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_633(bVar0, WEAPON::_0xD3750CCC00635FC2(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(bVar0))
			{
				iVar7 = func_952(Global_35, 2, 0, 1);
				if ((((func_334(iVar7) && !Global_43890) && iVar7 != bVar0) && !func_773(-1185145312, 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				if (func_334(iVar7) && func_773(-1185145312, 1, 0))
				{
					if (!func_633(bVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_633(bVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_633(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_347(480, 1);
	}
	return 1;
}

bool func_755(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_756(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_755(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_334(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (iVar4 == joaat("weapon_bow"))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_773(611073244, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_792(func_953(iParam0), func_791(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_122() == -1)
		{
			if (func_719(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_347(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_752(0))
	{
		if (func_753(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_797(iParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_757(int iParam0)
{
	var uVar0;

	if ((iParam0 == -615217896 && !func_954()) || iParam0 != -615217896)
	{
		if (func_955(Global_35, iParam0, &uVar0))
		{
			func_776(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_782();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_782();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_782();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_780();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_778();
			break;
	}
}

void func_758(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_778();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_779();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_780();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_781();
			break;
		case 1299744282:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 1631240196:
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case 1768869276:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_782();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_956();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_957();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_759(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_760(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_761(int iParam0)
{
	bool bVar0;

	bVar0 = func_745(iParam0, -2017733358);
	if (func_958() < 3)
	{
		if (bVar0)
		{
			if (func_960(func_959(iParam0), iParam0))
			{
				func_792(79, func_791(func_959(iParam0)), 1);
			}
			else
			{
				func_792(78, func_791(func_959(iParam0)), 1);
			}
		}
		else
		{
			func_792(80, func_791(func_961(iParam0)), 1);
		}
	}
}

int func_762()
{
	if (((((func_962(839908568, 400) || func_962(-1134030454, 400)) || func_962(623353496, 400)) || func_962(-344413337, 400)) || func_962(-1664948962, 400)) || func_962(1795228059, 400))
	{
		return 1;
	}
	return 0;
}

int func_763(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_963(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_915(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_916(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_764(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_742(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_744(51, 0, 0, 0, 0, -1, 0);
			func_964(8192);
			break;
		case 581047644:
			func_742(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_744(51, 0, 0, 0, 0, -1, 0);
			func_964(524288);
			break;
		case -644199619:
			func_742(39, 0, 0, 0, 0, 0, 1, 0);
			func_744(39, 0, 0, 0, 0, -1, 0);
			func_965(16);
			break;
		case 684296857:
			func_742(41, 0, 0, 0, 0, 0, 1, 0);
			func_744(41, 0, 0, 0, 0, -1, 0);
			func_966(8);
			break;
		case 466137807:
			func_742(49, 0, 0, 0, 0, 0, 1, 0);
			func_744(49, 0, 0, 0, 0, -1, 0);
			func_967(16);
			break;
		case -1087522507:
			func_742(43, 0, 0, -1791518714, func_968(1), 0, -1, 0);
			func_969(1);
			break;
		case -405829000:
			func_742(43, 0, 0, -2087881550, func_968(2), 0, -1, 0);
			func_969(2);
			break;
		case 378660860:
			func_742(43, 0, 0, 1908068621, func_968(4), 0, -1, 0);
			func_969(4);
			break;
		case 1566111097:
			func_742(43, 0, 0, 1611247019, func_968(8), 0, -1, 0);
			func_969(8);
			break;
		case 1276007140:
			func_742(43, 0, 0, 1319635688, func_968(16), 0, -1, 0);
			func_969(16);
			break;
	}
}

void func_765(int iParam0)
{
	if (func_970() == 1)
	{
		if (func_736(39))
		{
			func_347(342, 0);
		}
		else
		{
			func_347(343, 0);
			func_965(1);
		}
	}
	if (func_970() >= 30)
	{
		func_347(344, 0);
	}
	func_742(39, 0, 0, 0, 0, 0, -1, 0);
	func_744(39, 0, 0, func_970(), 30, 1, 0);
}

void func_766(int iParam0)
{
	if (func_971() == 1)
	{
		if (func_736(49))
		{
			func_347(409, 0);
		}
		else
		{
			func_347(410, 0);
			func_967(1);
		}
	}
	if (func_971() >= 10)
	{
		func_347(411, 0);
	}
	func_742(49, 0, 0, 0, 0, 0, -1, 0);
	func_744(49, 0, 0, func_971(), 10, 1, 0);
}

void func_767(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1369162587:
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_347(437, 0);
			func_347(440, 0);
			func_972(-949689219, 444160793, &iVar0, 1, 0, 0);
			func_742(51, 0, 0, -949689219, iVar0, 0, -1, 0);
			func_744(51, 0, 0, iVar0, func_936(-949689219, 20), 1, 0);
			func_964(1);
			func_973(-748969569, 0, 0);
			break;
		case 1610047510:
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_972(-1248968496, -1969404854, &iVar0, 1, 0, 0);
			func_742(51, 0, 0, -1248968496, iVar0, 0, -1, 0);
			func_744(51, 0, 0, iVar0, func_936(-1248968496, 20), 1, 0);
			func_964(8);
			break;
		case 1317879106:
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_972(1706369307, -832850511, &iVar0, 1, 0, 0);
			func_742(51, 0, 0, 1706369307, iVar0, 0, -1, 0);
			func_744(51, 0, 0, iVar0, func_936(1706369307, 20), 1, 0);
			func_964(64);
			break;
		case 1062444751:
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_972(1520110311, -100913452, &iVar0, 1, 0, 0);
			func_742(51, 0, 0, 1520110311, iVar0, 0, -1, 0);
			func_744(51, 0, 0, iVar0, func_936(1520110311, 20), 1, 0);
			func_964(512);
			break;
		case 754186760:
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_347(438, 0);
			func_972(-1992824800, 905173572, &iVar0, 1, 0, 0);
			func_742(51, 0, 0, -1992824800, iVar0, 0, -1, 0);
			func_744(51, 0, 0, iVar0, func_936(-1992824800, 20), 1, 0);
			func_964(32768);
			break;
		default:
			func_347(439, 0);
			break;
	}
}

void func_768()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_769(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_122() == -1)
	{
		if (!func_736(43))
		{
			if (iParam0 == 281887510)
			{
				func_347(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_347(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_347(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_347(400, 0);
			}
		}
		else if (func_745(iParam0, 412399755))
		{
			func_974(-1791518714);
			if (func_975() == 0)
			{
				func_592(0, 10);
				iVar1 = func_976(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_977(iParam0) < func_978(iParam0))
					{
						func_742(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_744(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_736(44))
		{
			if (iParam0 == -222563712)
			{
				func_347(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_347(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_347(401, 0);
			}
		}
		else if (func_745(iParam0, 709057512))
		{
			func_974(-2087881550);
			if (func_975() == 1)
			{
				func_592(0, 10);
				iVar1 = func_976(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_977(iParam0) < func_978(iParam0))
					{
						func_742(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_744(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_736(45))
		{
			if (iParam0 == 2116770557)
			{
				func_347(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_347(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_347(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_347(398, 0);
			}
		}
		else if (func_745(iParam0, -1478961327))
		{
			func_974(1908068621);
			if (func_975() == 2)
			{
				func_592(0, 10);
				iVar1 = func_976(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_979(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
					{
						func_980(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
						func_933(48);
					}
					if (func_977(iParam0) < func_978(iParam0))
					{
						func_742(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_744(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_977(iParam0) < func_978(iParam0))
					{
						func_742(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_744(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_736(46))
		{
			if (iParam0 == 2085530337)
			{
				func_347(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_347(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_347(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_347(406, 0);
			}
		}
		else if (func_745(iParam0, -1238404098))
		{
			func_974(1611247019);
			if (func_975() == 3)
			{
				func_592(0, 10);
				iVar1 = func_976(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_977(iParam0) < func_978(iParam0))
					{
						func_742(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_744(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_736(47))
		{
			if (iParam0 == -1521783510)
			{
				func_347(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_347(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_347(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_347(403, 0);
			}
		}
		else if (func_745(iParam0, 1160548794))
		{
			func_974(1319635688);
			if (func_975() == 4)
			{
				func_592(0, 10);
				iVar1 = func_976(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_977(iParam0) < func_978(iParam0))
					{
						func_742(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_744(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_770(int iParam0)
{
	int iVar0;

	if (iParam0 == 2116770557)
	{
		if (!func_979(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
		{
			func_980(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
			func_933(48);
		}
	}
}

void func_771(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_773(func_981(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_982(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_983(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_772(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_122() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_763(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_763(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_763(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_763(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_763(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_763(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_763(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_763(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_763(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_763(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_763(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_763(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_763(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_984())
			{
				func_763(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_763(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_763(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_763(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_763(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_763(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_763(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_763(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_763(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_763(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_763(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_763(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_763(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

bool func_773(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_579(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_581(iParam0);
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
		if (!func_985(iParam0, 1))
		{
			return false;
		}
	}
	return func_730(iParam0, 0, bParam2) >= iParam1;
}

void func_774(int iParam0)
{
	if (func_736(41))
	{
		func_347(363, 0);
	}
	else
	{
		func_347(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_986(-1865241121);
			func_987(-642026005);
			func_988(-642026005);
			func_592(0, 10);
			break;
		case -2108314374:
			func_986(2117142684);
			func_987(-940584364);
			func_988(-940584364);
			func_592(0, 10);
			break;
		case -1193798153:
			func_986(-1409326024);
			func_987(1972645282);
			func_988(1972645282);
			func_592(0, 10);
			break;
		case -787702678:
			func_986(-641744968);
			func_987(1667205433);
			func_988(1667205433);
			func_592(0, 10);
			break;
		case -804542901:
			func_986(-946988203);
			func_987(1362715885);
			func_988(1362715885);
			func_592(0, 10);
			break;
		case -1696275132:
			func_986(-646136018);
			func_987(1053540370);
			func_988(1053540370);
			func_592(0, 10);
			break;
		case -161595323:
			func_986(-955835837);
			func_987(-1100103852);
			func_988(-1100103852);
			func_592(0, 10);
			break;
		case -1114363619:
			func_986(-179276075);
			func_987(-1409869209);
			func_988(-1409869209);
			func_592(0, 10);
			break;
		case -368407134:
			func_986(-492711560);
			func_987(-1760235357);
			func_988(-1760235357);
			func_592(0, 10);
			break;
		case 1997759228:
			func_986(1764383959);
			func_987(-138366827);
			func_988(-138366827);
			func_592(0, 10);
			break;
		case 1265573293:
			func_986(317501533);
			func_987(-1261163843);
			func_988(-1261163843);
			func_592(0, 10);
			break;
		case -1030441283:
			func_986(817753087);
			func_987(-963523016);
			func_988(-963523016);
			func_592(0, 10);
			break;
		case -1490884871:
			func_986(576606016);
			func_987(560825326);
			func_988(560825326);
			func_592(0, 10);
			break;
		case -395458616:
			func_986(814934957);
			func_987(858269539);
			func_988(858269539);
			break;
	}
}

void func_775(int iParam0, int iParam1)
{
	var uVar0;

	func_989(iParam0, iParam1, &uVar0);
}

int func_776(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_846(iParam1, 1, 0) };
		iParam3 = func_990(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_992(iParam1, iParam2, func_991(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_993(1, (func_122() == -1 && iParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (iParam8 && iParam1 != &Global_1946804->f_57[func_991(iParam3, 1) /*11*/])
			{
				func_994(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_995(32768) && iParam1 != &Global_1946804->f_57[func_991(iParam3, 1) /*11*/])
			{
				func_996();
				func_994(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_994(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_997(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_994(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_998(0);
			func_999(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_994(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

int func_777(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	int iVar18;
	int iVar19;

	Var3.f_9 = -1591664384;
	bVar17 = false;
	*uParam0 = 0;
	iVar18 = func_952(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_952(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_1000("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1001(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_IS_WEAPON_ONE_HANDED(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*uParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_1002(iVar0);
						if (*uParam0 != 0)
						{
							return 1;
						}
						return 0;
					}
				}
			}
		}
	}

void func_778()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_779()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_780()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_781()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_782()
{
	func_1003();
	func_1004();
	func_1005();
}

void func_783(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	vector3 vVar4;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728; /* GXTEntry: "Jack Hall Gang Treasure" */
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390; /* GXTEntry: "High Stakes Treasure" */
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075; /* GXTEntry: "The Poisonous Trail Treasure" */
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026; /* GXTEntry: "Le Tresor des Morts Treasure" */
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735; /* GXTEntry: "The Elemental Trail Treasure" */
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085; /* GXTEntry: "Landmarks Of Riches Treasure" */
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, 0, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, 1);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::_CREATE_VAR_STRING(2, sVar3));
}

void func_784(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728; /* GXTEntry: "Jack Hall Gang Treasure" */
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390; /* GXTEntry: "High Stakes Treasure" */
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075; /* GXTEntry: "The Poisonous Trail Treasure" */
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026; /* GXTEntry: "Le Tresor des Morts Treasure" */
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735; /* GXTEntry: "The Elemental Trail Treasure" */
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085; /* GXTEntry: "Landmarks Of Riches Treasure" */
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_944(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), 1433015236, MISC::_CREATE_VAR_STRING(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_785(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_786(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_787(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_788(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_789(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_790(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_791(int iParam0)
{
	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_792(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_558(iParam0, &iVar0, &iVar1);
	if (!func_559(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_813(iParam0, 1024))
	{
		return;
	}
	func_560(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_793(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_558(iParam0, &iVar0, &iVar1);
	if (!func_559(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_813(iParam0, 1024))
	{
		return;
	}
	func_560(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 1;
	}
	else
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 5;
	}
}

int func_794()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_931())
	{
		return func_795();
	}
	iVar4 = (func_931() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_931())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_1006(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_932(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_795()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_931());
	return func_932(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_796(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			break;
		case 998010398:
			*iParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			break;
		case 1358243310:
			*iParam0 = 1463786584; /* GXTEntry: "Cigarettes" */
			break;
		case -541584777:
			*iParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			break;
	}
}

int func_797(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_846(iParam0, 0, 1) };
	Var5 = { func_850(iParam0, Var0, Var0.f_4, 0) };
	return func_1007(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_798(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (func_122() != -1)
	{
		return;
	}
	switch (func_748(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1008(81053684, 0) <= 0)
			{
				func_994(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_994(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1009(iParam0);
			if (func_1010(iVar0))
			{
				func_1011(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_994(30, iParam0, 0, 0, 0);
			}
			if (func_1012() == -2125499975 || func_1012() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_994(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_1012() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_994(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1013(-525676072, 0))
			{
				if (func_1014(-525676072, &iVar1))
				{
					func_994(33, iVar1, 0, 0, 0);
				}
			}
			func_994(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1015(99217379))
		{
			func_776(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_747(24);
		if (func_777(&bVar2, 0))
		{
			func_633(bVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_799(int iParam0)
{
	if (func_745(iParam0, 943695443))
	{
		func_1016(0, iParam0);
	}
	else if (func_745(iParam0, -2096528786))
	{
		func_1016(1, iParam0);
	}
	else if (func_745(iParam0, -1094167013))
	{
		func_1016(2, iParam0);
	}
	else if (func_745(iParam0, 1936654645))
	{
		func_1016(3, iParam0);
	}
	else if (func_745(iParam0, 1306489306))
	{
		func_1016(4, iParam0);
	}
	else if (func_745(iParam0, 435762317))
	{
		func_1016(5, iParam0);
	}
	else if (func_745(iParam0, 1259363210))
	{
		func_1016(6, iParam0);
	}
	else if (func_745(iParam0, 881398259))
	{
		func_1016(7, iParam0);
	}
	else if (func_745(iParam0, -541549214))
	{
		func_1016(8, iParam0);
	}
	else if (func_745(iParam0, 130796156))
	{
		func_1016(-1, iParam0);
	}
}

int func_800(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_1017(&Var4, 1356624740);
	return func_1018(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_801(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_579(iParam0, 0))
	{
		return Var0;
	}
	if (func_745(iParam0, -305066475))
	{
		if (func_122() == -1)
		{
			if (func_745(iParam0, -537818634))
			{
				return func_374(189951448);
			}
			else
			{
				return func_374(1176172851);
			}
		}
	}
	else if (func_745(iParam0, -537818634))
	{
		return func_374(-963660207);
	}
	if (func_745(iParam0, 2084895747))
	{
		return func_374(1694039471);
	}
	return Var2;
}

void func_802(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_122() == -1)
			{
				if (func_719(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_347(109, 1);
				}
			}
			break;
	}
}

void func_803(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_1020(func_1019(0));
	func_377(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1021(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_804(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;

	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_579(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_1022())
	{
		func_1023(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_1024(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1024(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_746(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_581(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_1025(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_1026(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_791(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_745(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_791(iParam0));
	}
	func_377(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_805(int iParam0)
{
	struct<4> Var0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_899(iParam0))
		{
			if (PED::_0x608BC6A6AACD5036(&Var0, iParam0, 4, 0))
			{
				return ENTITY::DOES_ENTITY_EXIST(Var0.f_3);
			}
		}
	}
	return 0;
}

int func_806(int iParam0, int iParam1, bool bParam2)
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

void func_807(int iParam0, int iParam1)
{
	iParam0 = func_139(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_24 = (((*Global_1900383)[iParam0 /*45*/])->f_24 || iParam1);
}

bool func_808(int iParam0)
{
	return func_707(iParam0, 2);
}

int func_809(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_810(int iParam0, int iParam1)
{
	if (func_122() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_811(int iParam0)
{
	if (func_122() != -1)
	{
		if (func_813(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_813(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_812(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_813(iParam0, 65536) && !func_813(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_813(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_813(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_813(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_814(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_815()
{
	return Global_1905944->f_5694;
}

bool func_816(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

int func_817()
{
	if (func_1027())
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

int func_818(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_581(iParam0);
	if (iVar0 == -427144552 && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == 307971639 && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_745(iParam0, 1399091007))
	{
		func_989(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_819(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	struct<4> Var30;
	int iVar35;
	int iVar36;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1028(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1030(&Var0, func_1029(0));
	}
	if (!func_1031(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_1001(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_851(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1002(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

int func_820(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_846(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1032(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_850(iParam0, Var0, Var0.f_4, bParam4) };
	return func_851(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_821(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_745(iParam0, 606799272))
		{
			func_1033(iParam0, iParam1);
		}
		if (func_745(iParam0, -1112814642) && func_745(iParam0, -1697809989))
		{
			func_771(iParam0, iParam1, 1, 0);
		}
	}
}

void func_822(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_350(1) < iParam0)
	{
		iParam0 = func_350(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_374(1644987397) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_823(int iParam0, char* sParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_377(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

void func_824(bool bParam0)
{
	func_1034(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_0x4CC5F2FC1332577F(121713391);
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(121713391);
	}
}

int func_825(int iParam0, var uParam1)
{
	if (!func_1035(iParam0))
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

void func_826(int iParam0)
{
	int iVar0;

	if (func_122() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_120(func_1036(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_1036(iVar0), func_422(), 1))
			{
				func_1037(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_827(int iParam0)
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

void func_828(int iParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_1038() > (Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5)
					{
						(Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5 = func_1038();
					}
					func_1039(&((Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_362(&((Global_1415419->f_19[iVar0 /*12*/])->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_829(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_658(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_659(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		(Global_17503.f_2205[iVar2 /*2*/])->f_1++;
	}
}

void func_830(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_85(iParam0, 8192))
	{
		iVar0 = func_659(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		(Global_17503.f_2205[iVar0 /*2*/])->f_1++;
	}
}

void func_831(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_397(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(Global_17503.f_12[iVar1], iVar2);
}

void func_832(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_48(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_153(vParam1))
	{
		return;
	}
	if (!func_23(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17503.f_2084)
	{
		vVar2 = { *(Global_17503.f_2084[iVar0 /*5*/]) };
		if (func_153(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if ((Global_17503.f_2084[iVar0 /*5*/])->f_3 == iParam0)
		{
			if (func_411(vVar2, vParam1, 1f, 1))
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

void func_833(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_880(iVar0, iParam0);
		iVar0++;
	}
}

int func_834(int iParam0)
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

void func_835(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

char* func_836(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_1040(37, iParam0))
		{
			return HUD::GET_TEXT_SUBSTRING_2(&(Global_1109400->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109400->f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!&Global_1225638->f_21[iParam0])
	{
		return sVar0;
	}
	if (func_1040(37, iParam0))
	{
		return HUD::GET_TEXT_SUBSTRING_2(&(((*Global_1108178)[iParam0 /*37*/])->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1108178)[iParam0 /*37*/])->f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(&(Global_1225638->f_120[iParam0]));
}

char* func_837(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_1026(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_838(int iParam0)
{
	iParam0 = func_139(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_9;
}

float func_839(int iParam0)
{
	iParam0 = func_139(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1;
}

float func_840(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_841(int iParam0)
{
	if (!func_167(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

bool func_842(var uParam0)
{
	return (Global_1310750->f_16074 && uParam0) != 0;
}

bool func_843()
{
	return Global_1894899 & 2 != 0;
}

bool func_844(var uParam0)
{
	return func_188(*uParam0, 1);
}

void func_845(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_1041(iParam1))
		{
			func_1042(iParam0, 41788943);
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, 1);
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
			func_1043(iParam0, 0, 1);
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
			func_1044(iParam0, 0);
			bVar0 = true;
		}
		func_1045(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

struct<5> func_846(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_1046(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_581(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_850(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1029(bParam1) };
			if (iParam2 && func_1047(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_848(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_848(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_849(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1048(bParam1) };
			switch (func_748(iParam0))
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
			if (func_1049(iParam0, -1823706425))
			{
				Var0 = { func_850(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, -1838434463);
			}
			else if (func_1049(iParam0, -1483207246))
			{
				Var0 = { func_850(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, 889965687);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_1050(Var0, &Var27, bParam1, 0))
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
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_847(int iParam0, int iParam1)
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

bool func_848(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1051(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_849(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1052(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_850(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_579(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_930(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_851(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return 0;
	}
	if (func_1053(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1050(*uParam1, &Var0, bParam6, 0))
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
	if (!func_752(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_930(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_852(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_809(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

int func_853(int iParam0, var uParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_1054((bVar1 && !bVar0), Global_35, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_854(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_870((*uParam0)[iVar0 /*17*/]))
		{
			func_432((*uParam0)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_855(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (uParam1->f_3 > -1 && uParam1->f_3 < *uParam2)
	{
		iVar0 = uParam1->f_3;
		((*uParam2)[iVar0 /*17*/])->f_8 = 6;
		func_1055(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_335(((*uParam2)[iVar0 /*17*/])->f_6))
		{
			func_432((*uParam2)[iVar0 /*17*/], 11);
			return ((*Global_1945938)[((*uParam2)[iVar0 /*17*/])->f_6 /*18*/])->f_3;
		}
	}
	return 0;
}

int func_856(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_380(*uParam0);
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

int func_857(var uParam0, int iParam1)
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

void func_858(int* iParam0, int* iParam1)
{
	if (!func_639(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_432(iParam1, 19);
			func_872(iParam0, 23);
			func_1056(iParam1, 2);
		}
	}
}

int func_859(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_816(16))
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
					func_1057(16);
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

void func_860(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_1055(iParam0, (*uParam1)[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, iParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT((*uParam1)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

var func_861(int iParam0)
{
	return (func_1058(iParam0, 4) || func_1058(iParam0, 5));
}

int func_862(int iParam0)
{
	return func_1058(iParam0, 7);
}

int func_863(int iParam0)
{
	return func_1058(iParam0, 6);
}

void func_864(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_870(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_1055(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

int func_865(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, var uParam13, float fParam14, bool bParam15, int iParam16)
{
	int iVar0;
	bool bVar1;

	iVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_1059(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, uParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_715(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_431(iParam2->f_6, 0, 1);
				iVar0 = 0;
			}
		}
		else if (!bVar1)
		{
			func_431(iParam2->f_6, 1, 1);
			iVar0 = 0;
		}
		if (bParam8)
		{
			func_1060(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return iVar0;
}

int func_866(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_524(iParam1, 1))
		{
			return 1;
		}
	}
	else if (func_1061(iParam1, 1))
	{
		func_519(iParam1, 1);
		return 1;
	}
	return 0;
}

void func_867(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_225((*uParam0)[iVar0 /*17*/], iParam1, bParam2);
		iVar0++;
	}
}

int func_868(int* iParam0, float fParam1, var uParam2)
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

void func_869(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1101824977, true);
		PAD::DISABLE_CONTROL_ACTION(0, 966551065, true);
		PAD::DISABLE_CONTROL_ACTION(0, 668058244, true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

int func_870(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_5))
	{
		return 1;
	}
	return 0;
}

int func_871(int iParam0)
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

void func_872(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_873(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return 1;
	}
	return 0;
}

int func_874(int iParam0)
{
	if (func_23(iParam0))
	{
		return (Global_17503.f_42[iParam0 /*8*/])->f_4;
	}
	return 0;
}

int func_875(int iParam0)
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

int func_876(int iParam0, int iParam1)
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

bool func_877(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return ((Global_1393237->f_11[iParam0 /*30*/])->f_10 && iParam1) != 0;
}

void func_878(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	(Global_1393237->f_11[iParam0 /*30*/])->f_10 = ((Global_1393237->f_11[iParam0 /*30*/])->f_10 || iParam1);
}

int func_879(int iParam0)
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

void func_880(int iParam0, int iParam1)
{
	if (!func_23(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 - (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1));
}

void func_881(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_817();
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
			func_1062(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_882(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_883(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_122() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_1063(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_1063(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_909(iVar0) == -1)
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

void func_884(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_1064(uParam0);
	}
}

int func_885(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_909(iParam2);
	}
	else
	{
		iVar1 = func_908(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_909(iParam0);
	}
	else
	{
		iVar0 = func_908(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_3(*uParam1, 8388608))
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

float func_886(int iParam0, int iParam1)
{
	return func_127(iParam0, iParam1, 1, 1);
}

float func_887(var uParam0)
{
	return uParam0->f_26;
}

int func_888(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

int func_889(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_127(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_0x6AD66548840472E5(func_672(iVar0, 0)))
		{
			if (func_1065(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_890(var uParam0)
{
	return uParam0->f_17;
}

int func_891(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_3(*uParam0, 4194304))
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

int func_892(var uParam0)
{
	return uParam0->f_18;
}

int func_893(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_0x6AD66548840472E5(func_672(iVar0, 0)))
		{
			if (func_1066(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_894(var uParam0)
{
	return uParam0->f_23;
}

int func_895(var uParam0)
{
	return uParam0->f_21;
}

int func_896(var uParam0)
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

int func_897(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_1067(iParam0, vParam4, 0.5f))
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

int func_898(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1935630->f_44 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46))
		{
			if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_46) || WEAPON::IS_WEAPON_BOW(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_1068(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_899(int iParam0)
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

int func_900(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_264(iParam1))
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

int func_901(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_264(iParam1))
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

int func_902(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_264(iParam1))
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

int func_903(int iParam0, var uParam1)
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

int func_904(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_1069(iParam0, 1, 0, 0) != joaat("weapon_lasso"))
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

bool func_905(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

int func_906(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_79(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_907(var uParam0)
{
	return uParam0->f_24;
}

int func_908(int iParam0)
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

int func_909(int iParam0)
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

int func_910(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_903(Global_35, &iVar1))
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
		fVar2 = func_127(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_127(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

int func_911(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_494(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_912(uParam1, iVar0))
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
				if (!bParam2 || !func_912(uParam1, iVar1))
				{
					if (func_79(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_912(var uParam0, int iParam1)
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

int func_913(var uParam0)
{
	return uParam0->f_20;
}

int func_914(int iParam0, var uParam1, bool bParam2, float fParam3)
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

void func_915(int iParam0, char* sParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_377(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_916(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1070())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_377(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1071(iVar0);
			func_1072(iVar0, 0, 0);
		}
		func_377(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_375(func_374(1644987397), iVar1);
	}
}

int func_917(int iParam0)
{
	if (!func_499(iParam0))
	{
		return -1;
	}
	return func_1073(iParam0);
}

int func_918(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, var uParam5, bool bParam6)
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
	if (fParam4 > 0f && ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam1) >= fParam4)
	{
		return 1;
	}
	return 0;
}

bool func_919(int iParam0)
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

bool func_920(int iParam0)
{
	return func_581(iParam0) == -427144552;
}

int func_921(int iParam0)
{
	var uVar0;

	if (func_122() != -1)
	{
		return 0;
	}
	if (func_746(iParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_927(iParam0, &uVar0, 1, 0, 0);
	}
	return func_773(iParam0, 1, 0);
}

void func_922(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	int iVar0;

	if (func_581(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_750(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (iParam2 || !func_445(iVar0))
	{
		if (func_122() == -1)
		{
			func_751(iVar0);
		}
		if (iParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 0) && func_730(iParam0, 0, 0) == 0))
		{
			if (!*uParam3 && !iParam4 == 1248274121)
			{
				func_804(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}
}

void func_923(int iParam0, var uParam1)
{
	int iVar0;

	if (func_745(iParam0, 58855631))
	{
		func_1074(iParam0, -915411861, &iVar0, 1);
		*uParam1 = (*uParam1 * iVar0);
	}
}

int func_924(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	if (!func_752(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_930(bParam3), iParam0);
}

int func_925(int iParam0, bool bParam1)
{
	if (func_755(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_930(bParam1), iParam0, 0);
}

int func_926()
{
	if (func_122() != -1)
	{
		return 0;
	}
	if (!func_585())
	{
		return 0;
	}
	if (!func_719(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_719(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_719(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_719(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_719(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_719(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_719(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_719(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_719(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_719(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_719(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_719(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_719(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_719(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_719(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_719(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_719(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_719(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_719(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_719(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_719(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_719(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_719(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_719(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_719(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_719(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_927(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_1075(&iParam0);
	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	if (!func_752(0))
	{
		bParam3 = true;
	}
	if (func_920(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { func_1029(0) };
			Var4.f_9 = -1591664384;
			if (!func_848(iParam0, &Var0, 1728382685, 0))
			{
				return 0;
			}
			else if (func_849(iParam0, &Var4, 1728382685))
			{
				return 0;
			}
			if (func_1047(iParam0, 1))
			{
				if (!func_848(iParam0, &Var0, -649335959, 0))
				{
					return 0;
				}
				else if (func_849(iParam0, &Var4, -649335959))
				{
					return 0;
				}
			}
		}
		else if (!func_1076(iParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_924(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return 0;
	}
	else if (iVar27 == 0)
	{
		return 1;
	}
	if (bParam3)
	{
		iVar28 = func_1051(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_930(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_928(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if ((Var0[iVar42 /*2*/])->f_1 == iParam1)
			{
				return &(Var0[iVar42 /*2*/]);
			}
			iVar42++;
		}
	}
	return 0;
}

int func_929(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1028(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1030(&Var0, func_1029(0));
	}
	if (!func_1031(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1002(iVar14);
	return uVar15;
}

int func_930(bool bParam0)
{
	if (func_122() == -1)
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

int func_931()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_932(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_933(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_122() != -1)
	{
		return;
	}
	iVar0 = func_1077(iParam0);
	fVar1 = func_1078(iParam0);
	if ((Global_1347477->f_117 || !func_366(31)) || !func_1079(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1080(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	func_1081(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_377(MISC::_CREATE_VAR_STRING(6, func_1082(iParam0), fVar1), "itemtype_textures", func_1083(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_934(int iParam0)
{
	int iVar0;

	iVar0 = func_917(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_935(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_936(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_825(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_937(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_741() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1084(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1085(), 12);
			}
			break;
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_970() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1086(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_970(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1087(), 13);
			}
			break;
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_971() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1088(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_971(), 10);
			}
			break;
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_936(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_938(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 578982838))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 349797279))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 1974744712))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 1974744712);
			}
		}
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iParam1);
	}
	return 1;
}

int func_939(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_940(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, 0, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, 1);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_941(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1089(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_773(iVar2, 1, 0) || func_1091(func_1090(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_945(func_1089(iVar0))), func_945(func_1089(iVar0)), bVar1, 1, 0);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_970() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1092(iVar0)), func_1092(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1086() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1092(iVar0)), func_1092(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1092(iVar0)), func_1092(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_981(iParam3, func_1093(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_977(iVar2) - iParam7) >= func_936(iParam3, func_1094(iVar0));
				}
				else
				{
					bVar1 = func_977(iVar2) >= func_936(iParam3, func_1094(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_977(iVar2) + iParam7) >= func_936(iParam3, func_1094(iVar0));
			}
			else
			{
				bVar1 = func_977(iVar2) >= func_936(iParam3, func_1094(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1095(iVar2)), func_1095(iVar2), bVar1, 1, 0);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1096(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1097(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_1097(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, 1, 0);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_971() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1098(iVar0)), func_1098(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1088() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1098(iVar0)), func_1098(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1098(iVar0)), func_1098(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_981(iParam3, func_1093(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_977(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1099(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1099(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1100(iVar2)), func_1100(iVar2), bVar1, 1, 0);
		}
		iVar0++;
	}
	return 1;
}

int func_942(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	if (iParam3 == 8)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iParam2 == -2076669067)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", iVar0, 1, 0);
	}
	if (iParam2 == -1531394072)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", iVar0, 1, 0);
	}
	if (iParam2 == 1995362678)
	{
		if (func_1087() >= 13)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 0;
		}
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", iVar0, 1, 0);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iParam2 == 678508515)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", iVar0, 1, 0);
	}
	return 1;
}

int func_943(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_499(func_1101(0)) && ((func_1102(0) == 1 || func_1102(0) == 8) || func_1102(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
			}
		}
	}
	return 1;
}

var func_944(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_945(int iParam0)
{
	switch (iParam0)
	{
		case 554799588:
			return "COL_CC_GUN_SET";
		case -1021394391:
			return "COL_CC_ART_SET";
		case -987306668:
			return "COL_CC_LND_SET";
		case -1028735103:
			return "COL_CC_GRL_SET";
		case 515229791:
			return "COL_CC_PLT_SET";
		case -1230863414:
			return "COL_CC_ACT_SET";
		case 232875659:
			return "COL_CC_AML_SET";
		case 1423129537:
			return "COL_CC_VEH_SET";
		case -435742319:
			return "COL_CC_SPT_SET";
		case -1854702679:
			return "COL_CC_INV_SET";
		case 1265323898:
			return "COL_CC_HOR_SET";
		case -479775696:
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

var func_946(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

void func_947(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_948(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_1103(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_1104(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1104(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1104(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_1105(1);
			break;
		case 34:
			func_1106(1);
			break;
		case 35:
			func_1107(1);
			break;
		case 36:
			break;
		case 37:
			func_1108(0);
			break;
		case 38:
			func_1109(0);
			break;
		case 39:
			func_1110(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_585()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_946("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 2);
			func_347(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_585()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_946("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 3);
			func_347(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_585()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_946("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 4);
			func_347(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_585()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_946("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 5);
			func_347(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_122() == -1)
			{
				if (!func_1015(99217379) || func_1111(99217379) == 2110595215)
				{
					if (func_367())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = 899611344; /* GXTEntry: "Off-Hand Holster" */
					}
					if (!func_773(iVar0, 1, 0))
					{
						func_797(iVar0, 1, 752097756);
					}
					func_776(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_122() == -1)
			{
				if (!func_773(1013902307, 1, 0))
				{
					func_797(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_122() == -1)
			{
				if (!func_773(1013902307, 1, 0))
				{
					func_797(1013902307, 1, 752097756);
				}
				if (!func_773(142640135, 1, 0))
				{
					func_797(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_122() == -1)
			{
				if (!func_773(786809402, 1, 0))
				{
					func_797(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_122() == -1)
			{
				if (!func_773(786809402, 1, 0))
				{
					func_797(786809402, 1, 752097756);
				}
				if (!func_773(-518019409, 1, 0))
				{
					func_797(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-843169622, true);
			Global_1935630->f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_1112();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-78935213, true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-384786155, true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(296662302, true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1871453000, true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(1397349651, true);
			break;
	}
}

int func_949(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_950(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (WEAPON::IS_WEAPON_BOW(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_0xDDC64F5E31EEDAB6(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_0xC212F1D05A8232BB(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_0x0A82317B7EBFC420(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_0xC75386174ECE95D5(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, iParam0);
	iVar2 = func_485();
	func_1039(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_951(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_673(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0x6AD66548840472E5(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_0xD3750CCC00635FC2(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

int func_952(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_953(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_366(50))
			{
				if (!func_366(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_366(51))
			{
				if (!func_366(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_954()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

int func_955(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_579(iParam1, 0))
	{
		return 0;
	}
	if (func_581(iParam1) != -1037537535)
	{
		return 0;
	}
	bVar1 = func_122() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (func_748(iParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_1113(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_745(iParam1, 866047851))
	{
		iVar5 = func_991(iVar4, 1);
		if (func_1114(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return 0;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_0x5FF9A878C3D115B8(iVar8, iVar2, bVar1) == 2056714954 && PED::_0xFB4891BD7578CDC1(iParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return 0;
			}
			iVar5 = 10;
			iVar3 = func_748(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return 0;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_745(iParam1, -1638171711))
			{
				*uParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return 0;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return 0;
			}
			if (PED::_0xFB4891BD7578CDC1(iParam0, -1968556728))
			{
				*uParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return 0;
			}
			break;
		case -1505978566:
			if (func_1115(1868067663, &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
				return 0;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_0x90403E8107B60E81(iParam0);
				iVar10 = func_1116(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1116(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return 0;
				}
				Jump @728; //curOff = 585
				iVar3 = func_748(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_745(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return 0;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
						return 0;
					}
				}
			}
			*uParam2 = 0;
			return 1;
		}

void func_956()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_957()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xFECA17CF3343694B(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), (1f - fVar1));
}

int func_958()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_773(func_1117(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_959(int iParam0)
{
	switch (iParam0)
	{
		case -1217729597:
		case 363594903:
		case 425319238:
			return -62615415;
		case -1540119664:
		case 446659922:
		case 2100194981:
			return -832719552;
		case -1018798851:
		case -757567246:
		case -390982951:
			return -184823984;
		case -2054602073:
		case -585121677:
		case -378441099:
			return -1941112926;
		case 1566949660:
			return -121629511;
	}
	return 0;
}

int func_960(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case -62615415:
			if (iParam1 == 425319238)
			{
				iVar0 = 363594903; /* GXTEntry: "Vintage Civil War Handcuffs" */
				iVar1 = -1217729597; /* GXTEntry: "Gold Jointed Bracelet" */
			}
			else if (iParam1 == 363594903)
			{
				iVar0 = 425319238; /* GXTEntry: "Legendary Alligator Tooth" */
				iVar1 = -1217729597; /* GXTEntry: "Gold Jointed Bracelet" */
			}
			else
			{
				iVar0 = 425319238; /* GXTEntry: "Legendary Alligator Tooth" */
				iVar1 = 363594903; /* GXTEntry: "Vintage Civil War Handcuffs" */
			}
			break;
		case -832719552:
			if (iParam1 == -1540119664)
			{
				iVar0 = 2100194981; /* GXTEntry: "Quartz Chunk" */
				iVar1 = 446659922; /* GXTEntry: "Silver Chain Bracelet" */
			}
			else if (iParam1 == 2100194981)
			{
				iVar0 = -1540119664; /* GXTEntry: "Legendary Bear Claw" */
				iVar1 = 446659922; /* GXTEntry: "Silver Chain Bracelet" */
			}
			else
			{
				iVar0 = -1540119664; /* GXTEntry: "Legendary Bear Claw" */
				iVar1 = 2100194981; /* GXTEntry: "Quartz Chunk" */
			}
			break;
		case -184823984:
			if (iParam1 == -390982951)
			{
				iVar0 = -1018798851; /* GXTEntry: "Cobalt Petrified Wood" */
				iVar1 = -757567246; /* GXTEntry: "Gold Earring" */
			}
			else if (iParam1 == -1018798851)
			{
				iVar0 = -390982951; /* GXTEntry: "Legendary Boar Tusk" */
				iVar1 = -757567246; /* GXTEntry: "Gold Earring" */
			}
			else
			{
				iVar0 = -390982951; /* GXTEntry: "Legendary Boar Tusk" */
				iVar1 = -1018798851; /* GXTEntry: "Cobalt Petrified Wood" */
			}
			break;
		case -1941112926:
			if (iParam1 == -2054602073)
			{
				iVar0 = -378441099; /* GXTEntry: "Abalone Shell Fragment" */
				iVar1 = -585121677; /* GXTEntry: "Silver Earring" */
			}
			else if (iParam1 == -378441099)
			{
				iVar0 = -2054602073; /* GXTEntry: "Legendary Bison Horn" */
				iVar1 = -585121677; /* GXTEntry: "Silver Earring" */
			}
			else
			{
				iVar0 = -2054602073; /* GXTEntry: "Legendary Bison Horn" */
				iVar1 = -378441099; /* GXTEntry: "Abalone Shell Fragment" */
			}
			break;
	}
	if (func_773(iVar0, 1, 0) && func_773(iVar1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_961(int iParam0)
{
	switch (iParam0)
	{
		case 968830139:
			return -224110471;
		case -649219937:
			return 1289585739;
		case -858567048:
			return -269048282;
		case -718162726:
			return 1441506783;
		case -1284282080:
			return 780305678;
		case -725003445:
			return 1811977508;
		case -1445630104:
			return -935153695;
		case 580970876:
			return 1299744282;
		case 967601061:
			return 1631240196;
		case 1946030891:
			return 517396587;
		case -1511404982:
			return 1620353486;
		case -944465290:
			return 1816443627;
		case -1701098855:
			return -127011478;
		default:
			break;
	}
	return 0;
}

int func_962(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1118(iParam0);
	if (iVar0 != -15)
	{
		func_1039(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_1119(iVar0, 1);
	}
	return 0;
}

int func_963(int iParam0, var uParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (uParam1 && func_773(1811977508, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_579(iVar25, 0) && func_745(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_964(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_965(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_966(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_967(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_968(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			iVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			iVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			iVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			iVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			iVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			iVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			iVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			iVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			iVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			iVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			iVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			iVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			iVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			iVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_977(iVar9);
	iVar2 = func_977(iVar10);
	iVar3 = func_977(iVar11);
	iVar5 = func_978(iVar9);
	iVar6 = func_978(iVar10);
	iVar7 = func_978(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_977(iVar12);
		iVar8 = func_978(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_969(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_970()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1120(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_971()
{
	return COLLECTION::_0x5461C821D00FE15A(2103522376, 0);
}

int func_972(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793; /* GXTEntry: "Perfect Squirrel Carcass" */
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239; /* GXTEntry: "Perfect Rabbit Carcass" */
			}
			break;
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
				iVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				iVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				iVar1 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
			}
			break;
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar2 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
			}
			break;
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar3 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
			}
			break;
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar3 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_1099(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1099(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1099(iVar0))
		{
			*iParam2++;
		}
		if (func_1099(iVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1099(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1099(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1099(iVar0))
		{
			*iParam2++;
		}
		if (func_1099(iVar1))
		{
			*iParam2++;
		}
		if (func_1099(iVar0) && func_1099(iVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1099(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1099(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1099(iVar0))
		{
			*iParam2++;
		}
		if (func_1099(iVar1))
		{
			*iParam2++;
		}
		if (func_1099(iVar2))
		{
			*iParam2++;
		}
		if ((func_1099(iVar0) && func_1099(iVar1)) && func_1099(iVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1099(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1099(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1099(iVar0))
		{
			*iParam2++;
		}
		if (func_1099(iVar1))
		{
			*iParam2++;
		}
		if (func_1099(iVar2))
		{
			*iParam2++;
		}
		if (func_1099(iVar3))
		{
			*iParam2++;
		}
		if (((func_1099(iVar0) && func_1099(iVar1)) && func_1099(iVar2)) && func_1099(iVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_973(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1121(1497516462);
			func_1122(2016141805);
			func_1122(1010885152);
			func_1122(-502324015);
			break;
		case 2016141805:
			func_1122(1497516462);
			func_1121(2016141805);
			func_1122(1010885152);
			func_1122(-502324015);
			break;
		case 1010885152:
			func_1122(1497516462);
			func_1122(2016141805);
			func_1121(1010885152);
			func_1122(-502324015);
			break;
		case -502324015:
			func_1122(1497516462);
			func_1122(2016141805);
			func_1122(1010885152);
			func_1121(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1122(-538889627);
			func_1122(-538880323);
			func_1122(-1056767524);
			func_1121(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1123();
			func_1121(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_1124();
			func_1121(iParam0);
			break;
		case 2019386373:
			func_1122(-664252410);
			func_1122(2109952320);
			func_1121(2019386373);
			break;
		case -664252410:
			func_1122(2019386373);
			func_1122(2109952320);
			func_1121(-664252410);
			break;
		case 2109952320:
			func_1122(2019386373);
			func_1122(-664252410);
			func_1121(2109952320);
			break;
		case -1674179981:
			func_1122(-1835851517);
			func_1122(-1838352012);
			func_1121(-1674179981);
			break;
		case -1835851517:
			func_1122(-1674179981);
			func_1122(-1838352012);
			func_1121(-1835851517);
			break;
		case -1838352012:
			func_1122(-1674179981);
			func_1122(-1835851517);
			func_1121(-1838352012);
			break;
		case -1717960576:
			func_1122(210001842);
			func_1121(-1717960576);
			break;
		case 210001842:
			func_1122(-1717960576);
			func_1121(210001842);
			break;
		case -150493654:
			func_1122(-1271608261);
			func_1122(1846061697);
			func_1122(-1145519186);
			func_1121(-150493654);
			break;
		case -1271608261:
			func_1122(-150493654);
			func_1122(1846061697);
			func_1122(-1145519186);
			func_1121(-1271608261);
			break;
		case 1846061697:
			func_1122(-150493654);
			func_1122(-1271608261);
			func_1122(-1145519186);
			func_1121(1846061697);
			break;
		case -1145519186:
			func_1122(-150493654);
			func_1122(-1271608261);
			func_1122(1846061697);
			func_1121(-1145519186);
			break;
		case 1766284049:
			func_1122(280705402);
			func_1122(1926308480);
			func_1121(1766284049);
			break;
		case 280705402:
			func_1122(1766284049);
			func_1122(1926308480);
			func_1121(280705402);
			break;
		case 1926308480:
			func_1122(1766284049);
			func_1122(280705402);
			func_1121(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1122(439465264);
				func_1121(1609506757);
			}
			else
			{
				func_1122(1609506757);
				func_1122(439465264);
			}
			break;
		case 439465264:
			if (func_661(1609506757))
			{
				if (bParam1)
				{
					func_1121(439465264);
				}
				else
				{
					func_1122(439465264);
				}
			}
			break;
		case 1822001510:
			func_1122(-1612662716);
			func_1121(1822001510);
			break;
		case -1612662716:
			func_1122(1822001510);
			func_1121(-1612662716);
			break;
		case 1306158345:
			func_1122(1952610440);
			func_1122(-223469678);
			func_1122(-404698347);
			func_1122(1517904467);
			func_1121(1306158345);
			break;
		case 1952610440:
			func_1122(1306158345);
			func_1122(-223469678);
			func_1122(-404698347);
			func_1122(1517904467);
			func_1121(1952610440);
			break;
		case -223469678:
			func_1122(1306158345);
			func_1122(1952610440);
			func_1122(-404698347);
			func_1122(1517904467);
			func_1121(-223469678);
			break;
		case -404698347:
			func_1122(1306158345);
			func_1122(1952610440);
			func_1122(-223469678);
			func_1122(1517904467);
			func_1121(-404698347);
			break;
		case 1517904467:
			func_1122(1306158345);
			func_1122(1952610440);
			func_1122(-223469678);
			func_1122(-404698347);
			func_1121(1517904467);
			break;
		case 1376646519:
			func_1122(931649776);
			func_1122(-434590080);
			func_1122(1743048395);
			func_1122(449774763);
			func_1121(1376646519);
			break;
		case 931649776:
			func_1122(1376646519);
			func_1122(-434590080);
			func_1122(1743048395);
			func_1122(449774763);
			func_1121(931649776);
			break;
		case -434590080:
			func_1122(1376646519);
			func_1122(931649776);
			func_1122(1743048395);
			func_1122(449774763);
			func_1121(-434590080);
			break;
		case 1743048395:
			func_1122(1376646519);
			func_1122(931649776);
			func_1122(-434590080);
			func_1122(449774763);
			func_1121(1743048395);
			break;
		case 449774763:
			func_1122(1376646519);
			func_1122(931649776);
			func_1122(-434590080);
			func_1122(1743048395);
			func_1121(449774763);
			break;
		case -1414537028:
			func_1122(38162571);
			func_1122(1350391819);
			func_1122(54073871);
			func_1121(-1414537028);
			break;
		case 38162571:
			func_1122(-1414537028);
			func_1122(1350391819);
			func_1122(54073871);
			func_1121(38162571);
			break;
		case 1350391819:
			func_1122(-1414537028);
			func_1122(38162571);
			func_1122(54073871);
			func_1121(1350391819);
			break;
		case 54073871:
			func_1122(-1414537028);
			func_1122(38162571);
			func_1122(1350391819);
			func_1121(54073871);
			break;
		case 198200492:
			func_1121(198200492);
			func_1122(-1124061431);
			func_1122(52706132);
			func_1122(-259123672);
			break;
		case -1124061431:
			func_1122(198200492);
			func_1121(-1124061431);
			func_1122(52706132);
			func_1122(-259123672);
			break;
		case 52706132:
			func_1122(198200492);
			func_1122(-1124061431);
			func_1121(52706132);
			func_1122(-259123672);
			break;
		case -259123672:
			func_1122(198200492);
			func_1122(-1124061431);
			func_1122(52706132);
			func_1121(-259123672);
			break;
		case -919512195:
			func_1121(-919512195);
			func_1122(-1925798111);
			func_1122(420709909);
			func_1122(1703426636);
			break;
		case -1925798111:
			func_1121(-1925798111);
			func_1122(-919512195);
			func_1122(420709909);
			func_1122(1703426636);
			break;
		case 420709909:
			func_1121(420709909);
			func_1122(-919512195);
			func_1122(-1925798111);
			func_1122(1703426636);
			break;
		case 1703426636:
			func_1121(1703426636);
			func_1122(-919512195);
			func_1122(-1925798111);
			func_1122(420709909);
			break;
		case -1223121209:
			func_1121(-1223121209);
			func_1122(630808005);
			break;
		case 630808005:
			func_1121(630808005);
			func_1122(-1223121209);
			break;
		case 1453909576:
			func_1121(1453909576);
			func_1122(1643531967);
			break;
		case 1643531967:
			func_1121(1643531967);
			func_1122(1453909576);
			break;
		case 0:
			func_1121(0);
			func_1122(473295046);
			func_1122(-1738165526);
			break;
		case 473295046:
			func_1121(473295046);
			func_1122(0);
			func_1122(-1738165526);
			break;
		case -1738165526:
			func_1121(-1738165526);
			func_1122(0);
			func_1122(473295046);
			break;
		case 932909855:
			func_1121(932909855);
			func_1122(2051822093);
			break;
		case 2051822093:
			func_1121(2051822093);
			func_1122(932909855);
			break;
		case 405586984:
			func_1121(405586984);
			func_1122(1509509592);
			func_1122(-959357075);
			func_1122(-1311865656);
			break;
		case 1509509592:
			func_1121(1509509592);
			func_1122(405586984);
			func_1122(-959357075);
			func_1122(-1311865656);
			break;
		case -959357075:
			func_1121(-959357075);
			func_1122(1509509592);
			func_1122(405586984);
			func_1122(-1311865656);
			break;
		case -1311865656:
			func_1121(-1311865656);
			func_1122(1509509592);
			func_1122(-959357075);
			func_1122(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1121(-524145696);
			}
			else
			{
				func_1122(-524145696);
			}
			func_1122(1626481264);
			func_1122(282809459);
			break;
		case 282809459:
			func_1121(282809459);
			func_1122(1626481264);
			func_1122(-524145696);
			break;
		case 1626481264:
			func_1121(1626481264);
			func_1122(-524145696);
			func_1122(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1121(885203519);
			}
			else
			{
				func_1122(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1121(-1080627546);
			}
			else
			{
				func_1122(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_661(iParam0))
				{
					func_1121(iParam0);
				}
			}
			else if (func_661(iParam0))
			{
				func_1122(iParam0);
			}
			break;
	}
}

void func_974(int iParam0)
{
	if (!func_1125(iParam0))
	{
		func_1127(func_1126(iParam0));
	}
}

int func_975()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1125(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_976(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			iVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			iVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			iVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			iVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			iVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			iVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			iVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			iVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			iVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			iVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			iVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			iVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			iVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			iVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_977(iVar9);
	iVar2 = func_977(iVar10);
	iVar3 = func_977(iVar11);
	iVar5 = func_978(iVar9);
	iVar6 = func_978(iVar10);
	iVar7 = func_978(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_977(iVar12);
		iVar8 = func_978(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_977(int iParam0)
{
	int iVar0;

	if (func_773(iParam0, 1, 0))
	{
		iVar0 = func_730(iParam0, 0, 0);
	}
	return iVar0;
}

int func_978(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return 5;
		case -164081697:
			return 5;
		case -1161319399:
			return 5;
		case 728781265:
			return 15;
		case -222563712:
			return 20;
		case 1794857344:
			return 7;
		case 1952409553:
			return 10;
		case 2116770557:
			return 25;
		case -651064726:
			return 3;
		case -404270094:
			return 7;
		case 2093126853:
			return 5;
		case 2085530337:
			return 30;
		case -150591160:
			return 5;
		case -323969289:
			return 10;
		case 1504361882:
			return 5;
		case -1521783510:
			return 5;
		case 1714875242:
			return 5;
		case 1019229063:
			return 5;
		case 927763737:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_979(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_980(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_981(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_825(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_982(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_981(iParam1, 5) || iParam0 == func_981(iParam1, 6)) || iParam0 == func_981(iParam1, 7)) || iParam0 == func_981(iParam1, 8)) || iParam0 == func_981(iParam1, 9))
	{
		func_972(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_742(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_744(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_983(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_981(iParam1, 5) || iParam0 == func_981(iParam1, 6)) || iParam0 == func_981(iParam1, 7)) || iParam0 == func_981(iParam1, 8)) || iParam0 == func_981(iParam1, 9))
	{
		if (func_972(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_742(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_744(51, 0, 0, iVar0, func_936(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_742(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_744(51, 0, 0, iVar0, func_936(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_984()
{
	if (func_934(((*Global_1347702)[37 /*49*/])->f_15) && Global_1392388->f_7)
	{
		return 1;
	}
	return 0;
}

int func_985(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_818(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1000("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1001(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_334(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_1002(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_1002(iVar1);
	}
	return 0;
}

void func_986(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_987(int iParam0)
{
	if (!func_1128(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_988(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_989(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*uParam1 = 1802325493;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case -1202134084:
			*uParam1 = -864693164;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case 1297050066:
			*uParam1 = -603289736;
			*uParam2 = 1232099469; /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case -1780177928:
			*uParam1 = -1803237008;
			*uParam2 = -2084181920; /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case -1467836497:
			*uParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622:
			*uParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		case -153287664:
			*uParam1 = -1650796693;
			*uParam2 = 836939099; /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case 1845082736:
			*uParam1 = -1521597660;
			*uParam2 = -1411815376; /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case 406755377:
			*uParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 1469029564:
			*uParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 45760211:
			*uParam1 = -851229814;
			*uParam2 = 1654725195; /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case -276295943:
			*uParam1 = 914704115;
			*uParam2 = 1858824185; /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case -2029793397:
			*uParam1 = -219896679;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case -2075613923:
			*uParam1 = -385817936;
			*uParam2 = -578347576; /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case 122656217:
			*uParam1 = 1192843172;
			*uParam2 = 231465488; /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case 2107187484:
			*uParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case -791844268:
			*uParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case 305770744:
			*uParam1 = -2087227528;
			*uParam2 = 314966081; /* GXTEntry: "Shotgun - Slug" */
			break;
		case 550900979:
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

int func_990(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_1129(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_991(int iParam0, int iParam1)
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

int func_992(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_1130();
	if (iParam2 == 39)
	{
		Var0 = { func_846(iParam0, 1, 0) };
		iParam2 = func_991(func_990(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_745(iParam0, 866047851) && func_1114(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_995(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_1131(func_1129(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1132(iParam2);
	func_1133(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_1134(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_1134(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_1135(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = iParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_1136(iParam0, iParam2, iParam1, func_122() != -1);
	if (bParam4)
	{
		func_1137(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1137(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6 /*2*/] >= 0 && &Global_1946804->f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_1138(func_1129(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_993(bool bParam0, bool bParam1, bool bParam2)
{
	func_1139(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_994(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_1140(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1141(Var0);
}

bool func_995(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_996()
{
	func_1142(&(Global_1946804->f_2776));
	func_1143(32768);
	func_1138(1108822547, 8, 6);
}

int func_997(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_991(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/] || &Global_1946804->f_1378.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_998(int iParam0)
{
	struct<4> Var0;

	if (func_1144(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1145(Var0);
}

void func_999(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1145(Var0);
}

int func_1000(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_930(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1001(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

int func_1002(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
	{
		return 0;
	}
	return 1;
}

float func_1003()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1146())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1147(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1147(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1148();
	fVar2 = func_1149();
	fVar3 = func_1150();
	fVar4 = func_1151();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1152()));
	fVar7 = (func_1147(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1153(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1154(3, fVar9, fVar9 > 100f);
	return func_1155(fVar7, -100f, 100f);
}

float func_1004()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1146())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1147(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1147(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1148();
	fVar2 = func_1149();
	fVar3 = func_1150();
	fVar4 = func_1151();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1152()));
	fVar7 = (func_1147(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1153(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1154(2, fVar9, fVar9 > 100f);
	return func_1155(fVar7, -100f, 100f);
}

float func_1005()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1146())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1147(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1156())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1157())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1147(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1148();
	fVar2 = func_1149();
	fVar3 = func_1150();
	fVar4 = func_1151();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1152()));
	fVar7 = (func_1147(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1153(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1154(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_1147(0);
	}
	return func_1155(fVar7, -100f, 100f);
}

bool func_1006(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1007(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_579(iParam0, 0))
	{
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return 0;
	}
	if (func_927(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_752(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_930(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1008(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		case 81053684:
			return Global_1946804->f_2657.f_23;
		case -525676072:
			return Global_1946804->f_2657.f_22;
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		case -413129408:
			return Global_1946804->f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_1158();
			}
			break;
	}
	return 0;
}

int func_1009(int iParam0)
{
	switch (iParam0)
	{
		case 439606975:
			return 14;
		case 1661121390:
			return 6;
		case 1164374808:
			return 7;
		case 624063935:
			return 9;
		case -1476781101:
			return 10;
		case 1560492757:
			return 15;
		case -769081407:
			return 16;
		case 688004210:
			return 20;
		case 166243423:
			return 0;
		case -1826731591:
			return 24;
		case 2119049229:
			return 25;
		case 1352942778:
			return 26;
		case 1964379549:
			return 27;
		case 1201189539:
			return 28;
		case 1351927599:
			return 21;
		case 2032023096:
			return 22;
		case 1784889667:
			return 13;
		case 1160643979:
			return 8;
		case 1383300684:
			return 1;
		case 2051441678:
			return 2;
		case 162509669:
			return 3;
		case 635948769:
			return 4;
		case 274995506:
			return 5;
		case 1902428294:
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332:
			return 11;
		case 1788874135:
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555:
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021:
			return 70;
		case 890706995:
			return 93;
		case 1156438275:
			return 90;
		case -1611873049:
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024:
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653:
			return 65;
		case 509954990:
			return 29;
		case -445916744:
			return 30;
		case -866249154:
			return 31;
		case -2077063704:
			return 32;
		case 205207539:
			return 33;
		case -1033657275:
			return 34;
		case 1806002837:
			return 35;
		case 705324896:
			return 36;
		case -1541763703:
			return 37;
		case 387052410:
			return 38;
		case -361288914:
			return 39;
		case -911054515:
			return 40;
		case 1084200963:
			return 41;
		case 1847948074:
			return 42;
		case -1212526764:
			return 43;
		case 1851440270:
			return 44;
		case -2028985700:
			return 45;
		case 1074435214:
			return 46;
		case -883015675:
			return 47;
		case -1047155604:
			return 48;
		case 1123231221:
			return 49;
		case 1866989210:
			return 50;
		case 478183719:
			return 51;
		case -1698955868:
			return 52;
		case -2029378634:
			return 53;
		case 1339864416:
			return 54;
		case 890998115:
			return 55;
		case -1376288999:
			return 56;
		case -1041123771:
			return 57;
		case 1389254668:
			return 58;
		case -346112633:
			return 59;
		case 773309172:
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

int func_1010(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

void func_1011(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_1010(iParam0))
	{
		return;
	}
	if (func_1159(iParam0))
	{
		return;
	}
	if (!func_1160(iParam0))
	{
		func_1161(iParam0, 1, 0);
	}
	iVar0 = func_1162(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1163(iParam0, 512))
		{
			func_994(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1164() && !bParam1) && !func_265(0, 0, 1))
	{
		func_517(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1165(iParam0, 6);
	if (bParam2)
	{
		if (!func_265(0, 0, 1))
		{
			func_592(1, 4);
		}
	}
}

int func_1012()
{
	return Global_1946804->f_1;
}

bool func_1013(int iParam0, bool bParam1)
{
	return func_1008(iParam0, 0) < func_1166(iParam0, bParam1);
}

int func_1014(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_748(iVar1) == iParam0)
		{
			*uParam1 = iVar1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1015(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_991(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_991(iParam0, 1) /*11*/];
}

void func_1016(int iParam0, int iParam1)
{
	if (func_745(iParam1, 130796156))
	{
		func_1167(iParam1, 0);
	}
	else if (func_745(iParam1, 930141731))
	{
		func_1167(iParam1, 1);
		func_1168(iParam0);
	}
}

void func_1017(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_1018(int iParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	struct<14> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_1169(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = uParam3;
	Var1.f_2 = { *uParam1 };
	func_1170(uParam2, iParam0, Var1);
	return 1;
}

int func_1019(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1020(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_1021(int iParam0)
{
	var uVar0;

	if (!func_1171(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1022()
{
	return !&Global_1911774;
}

void func_1023(int iParam0, int iParam1, var uParam2, var uParam3)
{
	Global_1911774->f_4[Global_1911774->f_3 /*4*/] = iParam0;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_1 = iParam1;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_2 = uParam2;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_3 = uParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_1024(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_1025(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *(Var3.f_2[iVar0 /*3*/]) };
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_1026(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_1027()
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

struct<14> func_1028(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

struct<4> func_1029(bool bParam0)
{
	int iVar0;

	iVar0 = func_930(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(Global_1224214))
		{
			*Global_1224214 = { func_850(923904168, func_1046(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(Global_1224222))
		{
			*Global_1224222 = { func_850(923904168, func_1046(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_850(923904168, func_1046(bParam0), -740156546, 0);
}

void func_1030(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_1031(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_930(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1032(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;

	if (func_1053(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	if (!func_752(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_930(bParam4), iParam0, iParam1, uParam2))
	{
		return 0;
	}
	return 1;
}

void func_1033(int iParam0, int iParam1)
{
	char* sVar0;

	sVar0 = 0;
	if (func_122() == -1)
	{
		if (func_736(43))
		{
			if (func_745(iParam0, 412399755))
			{
				func_974(-1791518714);
				if (func_975() == 0)
				{
					func_592(0, 10);
					sVar0 = func_1172(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_977(iParam0) < func_978(iParam0))
						{
							func_742(43, iParam0, iParam1, -1791518714, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_736(44))
		{
			if (func_745(iParam0, 709057512))
			{
				func_974(-2087881550);
				if (func_975() == 1)
				{
					func_592(0, 10);
					sVar0 = func_1172(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_977(iParam0) < func_978(iParam0))
						{
							func_742(43, iParam0, iParam1, -2087881550, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_736(45))
		{
			if (func_745(iParam0, -1478961327))
			{
				func_974(1908068621);
				if (func_975() == 2)
				{
					func_592(0, 10);
					sVar0 = func_1172(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_977(iParam0) < func_978(iParam0))
						{
							func_742(43, iParam0, iParam1, 1908068621, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_736(46))
		{
			if (func_745(iParam0, -1238404098))
			{
				func_974(1611247019);
				if (func_975() == 3)
				{
					func_592(0, 10);
					sVar0 = func_1172(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_977(iParam0) < func_978(iParam0))
						{
							func_742(43, iParam0, iParam1, 1611247019, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_736(47))
		{
			if (func_745(iParam0, 1160548794))
			{
				func_974(1319635688);
				if (func_975() == 4)
				{
					func_592(0, 10);
					sVar0 = func_1172(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_977(iParam0) < func_978(iParam0))
						{
							func_742(43, iParam0, iParam1, 1319635688, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_1034(bool bParam0)
{
	_NAMESPACE84::_0xB6FD96420C0126A1(-1056478928, bParam0);
}

bool func_1035(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1036(int iParam0)
{
	if (!func_1173(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_1037(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1174(iParam0))
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

int func_1038()
{
	return &Global_1899515;
}

void func_1039(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_1175(*iParam0);
	iVar1 = func_1176(*iParam0);
	iVar2 = func_1177(*iParam0);
	iVar3 = func_486(*iParam0);
	iVar4 = func_1178(*iParam0);
	iVar5 = func_1179(*iParam0);
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
	iVar6 = func_1180(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1180(iVar1, iVar0);
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
	func_1181(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_1040(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1182(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1183())
	{
		return func_1182(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1225638->f_21[iParam1])
	{
		return func_1182(&(((*Global_1108178)[iParam1 /*37*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_1041(int iParam0)
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

void func_1042(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1184(iParam0, iParam1))
		{
			if (func_1185(iParam0, iParam1))
			{
				if (func_1186(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1187(iParam0);
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

void func_1043(int iParam0, int iParam1, bool bParam2)
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

void func_1044(int iParam0, bool bParam1)
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

void func_1045(int iParam0, int iParam1)
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

struct<4> func_1046(bool bParam0)
{
	return func_850(1328661203, func_1188(), -1591664384, bParam0);
}

int func_1047(int iParam0, bool bParam1)
{
	if (func_748(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_925(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_1048(bool bParam0)
{
	int iVar0;

	iVar0 = func_930(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(Global_1224218))
		{
			*Global_1224218 = { func_850(271701509, func_1046(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_850(271701509, func_1046(bParam0), 12999093, 0);
}

int func_1049(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_748(iParam0);
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

int func_1050(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_930(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_1051(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_850(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_930(bParam6), &Var0, 0);
	return uVar4;
}

int func_1052(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_930(0);
	*uParam1 = { func_850(iParam0, func_1029(0), iParam3, 0) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_1053(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_1054(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_1055(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	int iVar1;

	if (func_335(iParam1->f_6))
	{
		if (iParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_330(&(iParam1->f_6), 0, 1);
	}
	if (!func_335(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_870(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_710(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_335(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_1060(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_1189(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_1190(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_429(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_1189(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_431(iParam1->f_6, 0, 1);
				}
				else
				{
					func_431(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_1056(int* iParam0, int iParam1)
{
	if (!func_451(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_432(iParam0, 14);
		}
	}
}

void func_1057(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_1058(int iParam0, int iParam1)
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

bool func_1059(int* iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, var uParam8, float fParam9, bool bParam10, int iParam11)
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

void func_1060(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam3 && !func_335(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_552(iParam0);
	func_1189(iParam0, 18, 0, 1);
	func_1189(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam4, iParam2);
}

bool func_1061(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_335(iParam0))
	{
		return false;
	}
	iVar0 = func_552(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_1062(var uParam0, var uParam1)
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

int func_1063(var uParam0)
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

void func_1064(var uParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_362(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY(&(Global_1935630->f_34[iVar0])))
				{
					func_84(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

int func_1065(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1066(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_1066(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_1067(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_1068(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_1069(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_1070()
{
	if (func_954())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_1071(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1191((Global_40.f_4283.f_325 + iParam0));
}

void func_1072(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1070())
	{
		func_377(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_377(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

int func_1073(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_1192(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_1074(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*uParam2 = Var0.f_1;
	return 1;
}

int func_1075(var uParam0)
{
	if (!func_579(*uParam0, 0))
	{
		return 0;
	}
	switch (*uParam0)
	{
		case -1073808995:
			*uParam0 = -1753819339; /* GXTEntry: "Cricket Bait" */
			return 1;
		case 1903483453:
			*uParam0 = -1527293029; /* GXTEntry: "Worm Bait" */
			return 1;
		case -541584777:
			*uParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			return 1;
		case 998010398:
			*uParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			return 1;
		case -1424823393:
			*uParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1076(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_846(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_847((375 + iVar29), 1);
		if (func_848(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_849(iParam0, &Var6, iVar5);
			if ((iParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return 1;
			}
		}
		iVar29++;
	}
	return 0;
}

int func_1077(var uParam0)
{
	int iVar0;

	iVar0 = uParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_1078(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_1193(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_1193(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_1193(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

int func_1079(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_366(18);
		case 2:
			return func_366(20);
		case 1:
			return func_366(19);
		default:
			break;
	}
	return 1;
}

int func_1080(int iParam0)
{
	return func_1194(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1081(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_122() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_366(31))
	{
		return;
	}
	iVar0 = func_1080(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1080(iParam0);
	if (func_1195(iParam0) && func_1196(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1197(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1198(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_347(func_1199(iParam0), 0);
					}
					func_1200(iParam0, iVar2, iVar3);
					func_1201(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_1082(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1083(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 837097462;
		case 0:
			return 2001720289;
		case 2:
			return 234329797;
		default:
			break;
	}
	return 0;
}

int func_1084()
{
	return func_1202(Global_40.f_12018);
}

int func_1085()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_935(iVar1);
		if (func_773(iVar2, 1, 0) || func_1091(func_1090(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1086()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1203(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1087()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1096(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1088()
{
	return COLLECTION::_0x3A65F4844913A047(2103522376, 0);
}

int func_1089(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_1090(int iParam0)
{
	switch (iParam0)
	{
		case -1230863414:
			return 1;
		case -1021394391:
			return 8;
		case 232875659:
			return 4;
		case -1028735103:
			return 16;
		case 554799588:
			return 32;
		case 1265323898:
			return 64;
		case -1854702679:
			return 128;
		case -987306668:
			return 256;
		case -479775696:
			return 2;
		case 515229791:
			return 512;
		case -435742319:
			return 1024;
		case 1423129537:
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_1091(var uParam0)
{
	return (Global_40.f_12018 && uParam0) != 0;
}

char* func_1092(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_1093(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_1094(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_1095(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return "COL_EP_LITTLE_FOUND";
		case -164081697:
			return "COL_EP_REDDISH_FOUND";
		case -1161319399:
			return "COL_EP_SNOWY_FOUND";
		case 728781265:
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case -222563712:
			return "COL_HF_FOUND";
		case 1794857344:
			return "COL_RO_LADY_SLIPPER_FOUND";
		case 1952409553:
			return "COL_RO_MOCCASIN_FOUND";
		case 2116770557:
			return "COL_GF_FOUND";
		case -651064726:
			return "COL_RO_ACUNAS_STAR_FOUND";
		case -404270094:
			return "COL_RO_CIGAR_FOUND";
		case 2093126853:
			return "COL_RO_GHOST_FOUND";
		case 2085530337:
			return "COL_SF_FOUND";
		case -150591160:
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case -323969289:
			return "COL_RO_RAT_TAIL_FOUND";
		case 1504361882:
			return "COL_RO_SPIDER_FOUND";
		case -1521783510:
			return "COL_RO_CLAMSHELL_FOUND";
		case 1714875242:
			return "COL_RO_DRAGONS_FOUND";
		case 1019229063:
			return "COL_RO_QUEENS_FOUND";
		case 927763737:
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_1096(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_1097(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_1098(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

int func_1099(int iParam0)
{
	if (func_1204(iParam0) && func_773(iParam0, 1, 0))
	{
		return 1;
	}
	else if (func_1205(iParam0) && func_1206(iParam0))
	{
		return 1;
	}
	return 0;
}

char* func_1100(int iParam0)
{
	if (!func_579(iParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_791(iParam0));
}

int func_1101(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_1102(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

void func_1103(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 1);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 0);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, 1);
	}
}

void func_1104(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (DATABINDING::_DATABDING_GET_ARRAY_COUNT(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0 /*36*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0 /*36*/]));
}

void func_1105(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
}

void func_1106(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
}

void func_1107(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
}

void func_1108(bool bParam0)
{
	int iVar0;

	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_0x4CC5F2FC1332577F(iVar0);
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(iVar0);
	}
}

void func_1109(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

void func_1110(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

int func_1111(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_991(iParam0, 1) /*3*/]);
}

void func_1112()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1526891582))
	{
		func_1207();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, true);
		func_751(joaat("weapon_revolver_cattleman_john"));
		func_797(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_751(joaat("weapon_melee_knife_john"));
		func_797(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}
}

int func_1113(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_846(iParam0, 1, 0) };
	return func_990(Var0.f_4);
}

int func_1114(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_745(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_745(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_745(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_745(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_745(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_745(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

int func_1115(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_991(func_1208(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_748(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_1116(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == &Global_1946804->f_57[func_991(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_995(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(iParam0, 1155669136, iParam2, bParam3));
	return iVar0;
}

int func_1117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139;
		case 1:
			return -649219937;
		case 2:
			return -858567048;
		case 3:
			return -718162726;
		case 4:
			return -1284282080;
		case 5:
			return -725003445;
		case 6:
			return -1445630104;
		case 7:
			return 580970876;
		case 8:
			return 967601061;
		case 9:
			return 1946030891;
		case 10:
			return -1511404982;
		case 11:
			return -944465290;
		case 12:
			return -1701098855;
		case 13:
			return 425319238;
		case 14:
			return 363594903;
		case 15:
			return -1217729597;
		case 16:
			return -1540119664;
		case 17:
			return 2100194981;
		case 18:
			return 446659922;
		case 19:
			return -390982951;
		case 20:
			return -1018798851;
		case 21:
			return -757567246;
		case 22:
			return -2054602073;
		case 23:
			return -378441099;
		case 24:
			return -585121677;
		case 25:
			return 1566949660;
		default:
			break;
	}
	return 0;
}

int func_1118(var uParam0)
{
	return func_1209(uParam0, -1);
}

bool func_1119(int iParam0, bool bParam1)
{
	return func_1210(func_485(), iParam0, bParam1);
}

bool func_1120(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_1121(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_876(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::SET_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::SET_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::SET_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
		MISC::SET_BIT(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_1122(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_876(iParam0, 1);
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

void func_1123()
{
	func_1122(-939420910);
	func_1122(-1187950766);
	func_1122(356365161);
	func_1122(753127042);
	func_1122(-2038424081);
	func_1122(1884271742);
	func_1122(459290420);
}

void func_1124()
{
	func_1122(704802028);
	func_1122(588987611);
	func_1122(2008888900);
	func_1122(1649996811);
	func_1122(227918160);
	func_1122(168171957);
	func_1122(1193080109);
	func_1122(-491981251);
	func_1122(-639037538);
	func_1122(-618620429);
}

bool func_1125(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1126(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		case -2087881550:
			return 2;
		case 1908068621:
			return 4;
		case 1611247019:
			return 8;
		case 1319635688:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_1127(var uParam0)
{
	Global_40.f_12018.f_43 = (Global_40.f_12018.f_43 || uParam0);
}

bool func_1128(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1129(int iParam0, int iParam1)
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

void func_1130()
{
	int iVar0;

	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

void func_1131(int iParam0)
{
	func_1138(iParam0, 8, 6);
}

void func_1132(int iParam0)
{
	func_1211(&(Global_1946804->f_2589), iParam0);
}

void func_1133(int iParam0, int iParam1)
{
	func_1212(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_1134(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1135(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_748(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1213(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1133(iVar1, iVar3);
		}
	}
	if (func_1015(-1586649372) && func_1213(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1133(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1 /*3*/] == 1516947474)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1133(iVar1, iVar3);
					}
				}
			}
			func_1214(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1214(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1155669136 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1133(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_1214(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1155669136)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_1133(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_1133(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_1214(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_1214(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1133(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_1214(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1170; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1133(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1133(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_748(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1133(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_745(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
				Jump @1170; //curOff = 1110
				iVar1 = 36;
				if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
			}
			switch (func_748(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_748(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1133(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_748(&(uParam0->f_1[iVar1 /*3*/])) || func_745(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1133(iVar1, iVar3);
						}
					}
					break;
			}
		}

int func_1136(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;

	uVar0 = func_1215(0);
	if (iParam2 != 0 && func_1216(iParam0, uVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1217(iParam0, func_1129(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1137(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	bVar6 = func_122() != -1;
	iVar7 = func_1215(0);
	if (func_995(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_1129(iVar0, 1);
			if (func_1218(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_1218(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_1116(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1219(uParam0);
				if (iVar3 > 0)
				{
					if (!func_995(524288))
					{
						func_1140(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_1129(iVar0, 1);
							if (func_1218(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_1218(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_1116(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_1133(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_1143(524288);
				}
			}
		}
	}

void func_1138(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_991(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_991(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_991(iParam0, 1) /*11*/])->f_10 && iParam1));
}

void func_1139(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1220(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_122() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1221(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_1162(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_1162(Global_40.f_7729);
				Global_1946804->f_1378 = func_1162(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_1222(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1223(0, 1);
	}
}

void func_1140(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1141(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_1224(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1 /*4*/] == Param0 && (Global_1946804->f_668[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1946804->f_668[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_1225(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1140(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_1224(Param0))
			{
				return;
			}
			func_1225(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_1140(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_999(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_1142(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_0x13E7320C762F0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_1143(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1144(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1145(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1224(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_1224(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1225(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1140(8);
}

int func_1146()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_1147(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1148()
{
	float fVar0;
	int iVar1;

	fVar0 = func_1226(13);
	iVar1 = func_1227(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_1149()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1150()
{
	if (func_954())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1151()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_1152()
{
	return Global_1955565->f_3;
}

void func_1153(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;

	sVar0 = func_1228(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), iParam2);
}

void func_1154(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1228(iParam0, 2, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[2]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), 859817522);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 1);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), 1105014447);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 0);
	}
}

float func_1155(float fParam0, float fParam1, float fParam2)
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

bool func_1156()
{
	return func_1226(12) <= -99f;
}

bool func_1157()
{
	return func_1226(12) >= 99f;
}

int func_1158()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_748(iVar1) == -999503751)
		{
			if (func_1229() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_1159(int iParam0)
{
	if (!func_1010(iParam0))
	{
		return 0;
	}
	if (func_1163(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_1160(int iParam0)
{
	if (!func_1010(iParam0))
	{
		return 0;
	}
	if (func_1163(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_1161(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1010(iParam0))
	{
		return;
	}
	if (!func_1160(iParam0))
	{
		func_1165(iParam0, 2);
		if (bParam2)
		{
			if (!func_265(0, 0, 1))
			{
				func_592(1, 4);
			}
		}
		if ((!func_1164() && !bParam1) && !func_265(0, 0, 1))
		{
			func_517(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", func_1230(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1162(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975;
		case 6:
			return 1661121390;
		case 7:
			return 1164374808;
		case 8:
			return 1160643979;
		case 9:
			return 624063935;
		case 10:
			return -1476781101;
		case 11:
			return 294553332;
		case 12:
			return 1788874135;
		case 15:
			return 1560492757;
		case 16:
			return -769081407;
		case 17:
			return 1902428294;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210;
		case 0:
			return 166243423;
		case 1:
			return 1383300684;
		case 2:
			return 2051441678;
		case 3:
			return 162509669;
		case 4:
			return 635948769;
		case 5:
			return 274995506;
		case 24:
			return -1826731591;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778;
		case 27:
			return 1964379549;
		case 28:
			return 1201189539;
		case 21:
			return 1351927599;
		case 22:
			return 2032023096;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021;
		case 93:
			return 890706995;
		case 90:
			return 1156438275;
		case 91:
			return -1611873049;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653;
		case 29:
			return 509954990;
		case 30:
			return -445916744;
		case 31:
			return -866249154;
		case 32:
			return -2077063704;
		case 33:
			return 205207539;
		case 34:
			return -1033657275;
		case 35:
			return 1806002837;
		case 36:
			return 705324896;
		case 37:
			return -1541763703;
		case 38:
			return 387052410;
		case 39:
			return -361288914;
		case 40:
			return -911054515;
		case 41:
			return 1084200963;
		case 42:
			return 1847948074;
		case 43:
			return -1212526764;
		case 44:
			return 1851440270;
		case 45:
			return -2028985700;
		case 46:
			return 1074435214;
		case 47:
			return -883015675;
		case 48:
			return -1047155604;
		case 49:
			return 1123231221;
		case 50:
			return 1866989210;
		case 51:
			return 478183719;
		case 52:
			return -1698955868;
		case 53:
			return -2029378634;
		case 54:
			return 1339864416;
		case 55:
			return 890998115;
		case 56:
			return -1376288999;
		case 57:
			return -1041123771;
		case 58:
			return 1389254668;
		case 59:
			return -346112633;
		case 60:
			return 773309172;
		default:
			break;
	}
	return 0;
}

bool func_1163(int iParam0, int iParam1)
{
	if (!func_1010(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_1164()
{
	int iVar0;

	iVar0 = _NAMESPACE71::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && _NAMESPACE71::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

void func_1165(int iParam0, int iParam1)
{
	if (!func_1010(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_1166(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		case -413129408:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

void func_1167(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1231(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_747(50);
			}
			else
			{
				func_747(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_747(51);
			}
			else
			{
				func_747(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1232(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_778();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_778();
			}
			break;
		case 3:
			func_747(24);
			if (bParam1)
			{
				if (!func_1232(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_778();
				}
			}
			break;
	}
}

void func_1168(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1233(0))
			{
				iVar0++;
			}
			if (func_1233(2))
			{
				iVar0++;
			}
			if (func_1233(4))
			{
				iVar0++;
			}
			if (!func_1234(16))
			{
				if (iVar0 == 1)
				{
					func_1235();
					func_347(456, 1);
					func_1236(16);
				}
			}
			if (!func_1234(32))
			{
				if (iVar0 >= 3)
				{
					func_1235();
					func_347(456, 1);
					func_1236(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1233(1))
			{
				iVar0++;
			}
			if (func_1233(3))
			{
				iVar0++;
			}
			if (func_1233(7))
			{
				iVar0++;
			}
			if (!func_1234(1))
			{
				if (iVar0 == 1)
				{
					func_1237();
					func_347(457, 1);
					func_1236(1);
				}
			}
			if (!func_1234(2))
			{
				if (iVar0 >= 3)
				{
					func_1237();
					func_347(457, 1);
					func_1236(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1233(5))
			{
				iVar0++;
			}
			if (func_1233(6))
			{
				iVar0++;
			}
			if (func_1233(8))
			{
				iVar0++;
			}
			if (!func_1234(4))
			{
				if (iVar0 == 1)
				{
					func_1238();
					func_347(455, 1);
					func_1236(4);
				}
			}
			if (!func_1234(8))
			{
				if (iVar0 >= 3)
				{
					func_1238();
					func_347(455, 1);
					func_1236(8);
				}
			}
			break;
	}
}

void func_1169(var uParam0)
{
	func_1017(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_1017(uParam0, 617531372);
	}
	else
	{
		func_1017(uParam0, 291123060);
	}
}

void func_1170(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_1239(uParam0))
	{
		return;
	}
	if (&Global_1224865 < 20)
	{
		Global_1224865 = &Global_1224865 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1224865->f_1[iVar0 /*21*/]) = { *(Global_1224865->f_1[iVar0 + 1 /*21*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224865->f_1[(&Global_1224865 - 1) /*21*/]) = { Var1 };
}

int func_1171(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1172(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			iVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			iVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			iVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			iVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			iVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			iVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			iVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			iVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			iVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			iVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			iVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			iVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			iVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			iVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_977(iVar9);
	iVar2 = func_977(iVar10);
	iVar3 = func_977(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_977(iVar12);
	}
	iVar5 = func_978(iVar9);
	iVar6 = func_978(iVar10);
	iVar7 = func_978(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_978(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

bool func_1173(int iParam0)
{
	return iParam0 > -1;
}

int func_1174(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

var func_1175(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_654(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_1176(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_1177(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_1178(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_1179(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_1180(int iParam0, int iParam1)
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

void func_1181(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1240(uParam0, iParam6);
	func_1241(uParam0, iParam5);
	func_1242(uParam0, iParam4);
	func_1243(uParam0, iParam3);
	func_1244(uParam0, iParam2);
	func_1245(uParam0, iParam1);
}

bool func_1182(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_1183()
{
	return Global_1109400->f_244;
}

bool func_1184(int iParam0, int iParam1)
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

int func_1185(int iParam0, int iParam1)
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

bool func_1186(int iParam0, int iParam1)
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
	if (!func_1184(iParam0, iVar0))
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

void func_1187(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

struct<4> func_1188()
{
	struct<4> Var0;

	return Var0;
}

void func_1189(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_335(iParam0))
	{
		return;
	}
	iVar0 = func_552(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_1190(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;

	if (iParam4 && !func_335(iParam0))
	{
		return;
	}
	iVar0 = func_552(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

void func_1191(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_374(1356759001) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

int func_1192(int iParam0)
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

float func_1193(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_1077(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1194(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1246(iVar6) - func_1246(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_1194(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_1195(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1196(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1197(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_1194(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_1246(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_1246(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = BUILTIN::FLOOR((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = BUILTIN::FLOOR((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_1198(int iParam0)
{
	int iVar0;

	if (func_1247(iParam0, &iVar0))
	{
		return func_1246(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1248())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1248())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1248())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_1199(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_1200(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	var uVar8;
	int iVar9;
	struct<6> Var10;

	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_1249(iParam0));
	sVar4 = func_1251(func_1250(iVar3, iParam2));
	sVar6 = func_1252(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::_CREATE_VAR_STRING(10, sVar0, func_1253(iParam0));
	uVar8 = func_1254(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = uVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1255(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_944(sVar7, sVar1, uVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1256(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1201(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

int func_1202(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1203(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_1204(int iParam0)
{
	switch (iParam0)
	{
		case 444160793:
			return 1;
		case -1969404854:
			return 1;
		case 1761263432:
			return 1;
		case -843795569:
			return 1;
		case -832850511:
			return 1;
		case -1464585113:
			return 1;
		case -1290897778:
			return 1;
		case -100913452:
			return 1;
		case 313332607:
			return 1;
		case -124539232:
			return 1;
		case 59384454:
			return 1;
		case 905173572:
			return 1;
		case 1432949803:
			return 1;
		case -983831788:
			return 1;
		case -1882344824:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1205(int iParam0)
{
	switch (iParam0)
	{
		case -1866642239:
			return 1;
		case -935543049:
			return 1;
		case 102446365:
			return 1;
		case 924882045:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1206(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1257(&iVar0, 0, iVar95, &Var1) && !func_1257(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_1258(iVar0, &Var1);
			if (func_579(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_1207()
{
	int iVar0;
	struct<4> Var30;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
	{
		return;
	}
	iVar0 = 29;
	func_1259(Global_35, &iVar0);
	Var30 = { func_1046(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_1260(0);
	func_1261(7);
	func_1262(-1623728698, 1, 1, 0);
	if (func_1012() == 1160113249)
	{
		func_1262(-763730846, 1, 1, 1);
		func_1262(-361635024, 1, 1, 1);
	}
	func_1263(Global_35, &iVar0);
}

int func_1208(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_990(iVar0);
}

int func_1209(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;

	if (iParam1 < 0)
	{
		iParam1 = func_930(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, uParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_1240(&uVar6, iVar0);
	func_1241(&uVar6, iVar1);
	func_1242(&uVar6, iVar2);
	func_1243(&uVar6, iVar3);
	func_1244(&uVar6, iVar4);
	func_1245(&uVar6, iVar5);
	return uVar6;
}

bool func_1210(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1264(iParam1) || !func_1264(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_1211(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;

	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_1265(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_1265(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_1266(uParam0->f_2[iVar0 /*2*/], 2, 6);
				}
				*(Var4[iVar1 /*2*/]) = { *(uParam0->f_2[iVar0 /*2*/]) };
				iVar1++;
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { *(Var4[iVar0 /*2*/]) };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}

void func_1212(var uParam0, var uParam1, var uParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1267(uParam0, 1))
	{
		func_1268(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = uParam2;
	uParam0->f_2[*uParam0 /*2*/] = uParam1;
	*uParam0++;
}

bool func_1213(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

void func_1214(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if ((uParam0->f_1[iVar3 /*3*/])->f_1 == 1216705912 || (uParam0->f_1[iVar3 /*3*/])->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = 1334603721;
		}
		else
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = -1539589426;
			(uParam0->f_1[iVar1 /*3*/])->f_1 = 1155669136;
		}
		if (bParam2)
		{
			func_1133(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1133(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == -1158926300)
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = 1155669136;
		if (bParam3)
		{
			func_1133(iVar2, iVar0);
		}
	}
}

int func_1215(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_1012();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1216(var uParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(uParam0, uParam1, uParam3))
	{
		if (PED::_0x6243635AF2F1B826(uParam0, iVar0, uParam1, uParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1217(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return 1;
}

bool func_1218(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_991(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

int func_1219(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	return iVar1;
}

void func_1220(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1946804->f_1497.f_1[iParam0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_122() == -1)
	{
		func_1269(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_26795.f_776);
	}
	else
	{
		func_1270(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_36637.f_45.f_350.f_1011);
	}
}

int func_1221(int iParam0, int iParam1)
{
	if (func_122() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26795.f_26[iParam1 /*120*/] && iParam0) != 0;
		}
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] && iParam0) != 0;
	}
	return 0;
}

void func_1222(int iParam0, bool bParam1, int iParam2)
{
	func_1271(&(Global_1946804->f_1378), iParam0);
	func_1272(2, iParam0, 6);
	if (bParam1)
	{
		func_1223(0, 1);
	}
}

void func_1223(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1273(0);
	}
	if (bParam0)
	{
		func_1140(8);
		func_1140(512);
	}
	else
	{
		func_1140(8);
		func_1140(16);
	}
}

bool func_1224(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1225(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

float func_1226(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_1227(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_1228(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_1024(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_1024(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_1229()
{
	return Global_1946804->f_1497;
}

char* func_1230(int iParam0)
{
	int iVar0;

	iVar0 = func_1162(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_1100(iVar0);
}

int func_1231(int iParam0)
{
	int iVar0;

	if (func_1274(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1275(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1276(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1277(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_1232(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_773(func_1278(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return 1;
	}
	return 0;
}

int func_1233(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_773(func_1279(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return 1;
	}
	return 0;
}

bool func_1234(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1235()
{
	int iVar0;

	if (func_122() != -1)
	{
		return;
	}
	func_797(1654063339, 1, 752097756);
	iVar0 = func_1080(1);
	func_1200(1, iVar0, 0);
}

void func_1236(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1237()
{
	int iVar0;

	if (func_122() != -1)
	{
		return;
	}
	func_797(1623931083, 1, 752097756);
	iVar0 = func_1080(2);
	func_1200(2, iVar0, 0);
}

void func_1238()
{
	int iVar0;

	if (func_122() != -1)
	{
		return;
	}
	func_797(-1845241476, 1, 752097756);
	iVar0 = func_1080(0);
	func_1200(0, iVar0, 0);
}

int func_1239(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

void func_1240(var uParam0, int iParam1)
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

void func_1241(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_1242(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1176(*uParam0);
	iVar1 = func_1175(*uParam0);
	if (iParam1 < 1 || iParam1 > func_1180(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_1243(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_1244(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_1245(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_1246(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

int func_1247(var uParam0, var uParam1)
{
	return 0;
}

int func_1248()
{
	return 0;
}

int func_1249(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_930(0), -1845241476, 0);
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_930(0), 1654063339, 0);
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_930(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_1250(int iParam0, int iParam1)
{
	char cVar0[32];

	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

var func_1251(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1252(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_1253(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_1254(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 444492752;
		case 0:
			return 1874233471;
		case 2:
			return -1285232277;
		default:
			break;
	}
	return 0;
}

int func_1255(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_1256(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

int func_1257(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	if (func_391(iParam1) && !func_1280(iParam1))
	{
		iVar0 = func_549(iParam1);
	}
	else
	{
		return 0;
	}
	func_1281(uParam3);
	iVar5 = func_1282(iParam2);
	if (!PED::_0x608BC6A6AACD5036(&Var1, iVar0, iVar5, 0))
	{
		return 0;
	}
	*uParam0 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && !ENTITY::DOES_THREAD_OWN_THIS_ENTITY(*uParam0))
	{
		return 0;
	}
	*uParam3 = ENTITY::GET_ENTITY_MODEL(*uParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*uParam0);
	uParam3->f_3 = ENTITY::_0x0FD25587BB306C86(*uParam0);
	return 1;
}

void func_1258(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_1283(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1284(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1259(int iParam0, int* iParam1)
{
	var uVar0;
	int iVar30;
	int iVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::_COPY_MEMORY(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar31, false, iVar30, true);
		if (func_334(iVar31))
		{
			(*iParam1)[iVar30] = iVar31;
		}
		else
		{
			(*iParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_1260(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_579(iVar1, 0))
		{
			func_1285(iVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

void func_1261(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_122() == -1)
	{
		func_1286(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26795.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26795[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26795.f_20;
		Global_1946804->f_2657.f_21 = Global_26795.f_21;
		Global_1946804->f_2657.f_22 = Global_26795.f_22;
		Global_1946804->f_2657.f_23 = Global_26795.f_23;
		Global_1946804->f_2657.f_24 = Global_26795.f_24;
		Global_1946804->f_2657.f_25 = Global_26795.f_25;
		Global_1946804->f_2657.f_19 = Global_26795.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36637.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36637.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36637.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36637.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36637.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36637.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36637.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36637.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36637.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar2 = &Global_1946804->f_2657[iVar0];
		if (func_748(iVar2) != -999503751)
		{
			func_1287(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1288(iVar2, 0))
		{
			func_1289(iVar2, &Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1262(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_1290(iParam0))
	{
		return;
	}
	iVar0 = func_748(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1291(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, iParam1);
			break;
		case 81053684:
			bVar1 = func_1291(iParam0, &(Global_1946804->f_2657.f_23), 1, iParam1);
			break;
		case -999503751:
			bVar1 = func_1291(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, iParam1);
			break;
		case -525676072:
			bVar1 = func_1291(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, iParam1);
			break;
		case -1719060085:
			bVar1 = func_1291(iParam0, &(Global_1946804->f_2657.f_24), 1, iParam1);
			break;
		case -413129408:
			bVar1 = func_1291(iParam0, &(Global_1946804->f_2657.f_24), 1, iParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1292(0))
	{
		func_1293(iParam0, 1);
		if (func_1012() == 1160113249)
		{
			func_1293(func_1292(-2125499975), 0);
		}
		else
		{
			func_1293(func_1292(1160113249), 0);
		}
	}
	func_1294();
	if (func_1295(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_930(0), iParam0, 0);
	}
	func_1289(iParam0, bParam3);
	if (bParam2)
	{
		func_1223(0, 0);
	}
}

void func_1263(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (iParam1[iVar0] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam1[iVar0], 0, 0))
			{
				if (func_445(iParam1[iVar0]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != iParam1[iVar0])
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

int func_1264(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_1179(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_1178(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_486(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_1175(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_1176(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_1177(iParam0);
	if (iVar5 < 1 || iVar5 > func_1180(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

bool func_1265(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1266(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1267(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1268(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1269(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_1270(var uParam0, int iParam1, int iParam2)
{
	*((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_1271(var uParam0, int iParam1)
{
	int iVar0;

	if (func_122() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1269(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	(Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_1270(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_1272(int iParam0, int iParam1, int iParam2)
{
	if (func_122() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26795.f_26[iParam1 /*120*/] = (Global_26795.f_26[iParam1 /*120*/] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36637.f_45.f_350.f_26[iParam1 /*120*/] = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] || iParam0);
	}
}

void func_1273(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

int func_1274(int iParam0)
{
	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	if (func_745(iParam0, -1066545920))
	{
		return 1;
	}
	return 0;
}

int func_1275(int iParam0)
{
	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	if (func_745(iParam0, -284267618))
	{
		return 1;
	}
	return 0;
}

int func_1276(int iParam0)
{
	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	if (func_745(iParam0, 363491182))
	{
		return 1;
	}
	return 0;
}

int func_1277(int iParam0)
{
	if (!func_579(iParam0, 0))
	{
		return 0;
	}
	if (func_745(iParam0, 1406113494))
	{
		return 1;
	}
	return 0;
}

int func_1278(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1296(iParam0);
		case 1:
			return func_1297(iParam0);
		case 2:
			return func_1298(iParam0);
		case 3:
			return func_1299(iParam0);
	}
	return 0;
}

int func_1279(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1300(iParam0);
		case 1:
			return func_1301(iParam0);
		case 2:
			return func_1302(iParam0);
		case 3:
			return func_1303(iParam0);
		case 4:
			return func_1304(iParam0);
		case 5:
			return func_1305(iParam0);
		case 6:
			return func_1306(iParam0);
		case 7:
			return func_1307(iParam0);
		case 8:
			return func_1308(iParam0);
	}
	return 0;
}

int func_1280(int iParam0)
{
	int iVar0;

	iParam0 = func_139(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_391(iParam0))
	{
		return 0;
	}
	iVar0 = func_549(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_1281(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0 /*8*/] = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_1 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_2 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_3 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_4 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_5 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_6 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_1282(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

void func_1283(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = PED::_0x88EFFED5FE8B0B4A(iParam0);
	*uParam2 = FLOCK::_0xF8B48A361DC388AE(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_0x7BCC6087D130312A(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_1284(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar0 = uParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = PED::_0x9E7738B291706746(uParam0, iParam1, iParam2);
	return uVar2;
}

void func_1285(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_748(iParam0))
	{
		case -2061583405:
			bVar0 = func_1309(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1309(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1309(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1309(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1309(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1309(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1294();
	}
	if (bParam1)
	{
		func_1223(0, 0);
	}
}

void func_1286(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;

	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_1028(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_1031(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_1002(iVar0);
	}
}

void func_1287(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1310(iParam2, *uParam0);
	func_1311(uParam0->f_1[*uParam0 /*5*/], iParam1, -1, 1, 0);
	*uParam0++;
}

int func_1288(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_846(iParam0, 0, 0) };
	Var5 = { func_850(iParam0, Var0, Var0.f_4, 0) };
	if (func_1051(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_930(0), &Var5, iParam1);
	return 1;
}

void func_1289(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_846(iParam0, 0, 0) };
	Var5 = { func_850(iParam0, Var0, Var0.f_4, 0) };
	if (func_1051(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_930(0), &Var5, bParam1);
}

int func_1290(int iParam0)
{
	if (func_122() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == 1164374808)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_1291(int iParam0, var uParam1, int iParam2, var uParam3)
{
	var uVar0;
	int iVar1;

	iVar1 = iParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_1312(iVar1, &uVar0))
	{
		return 0;
	}
	if (uParam3 && !func_1288(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_748(iParam0) != -999503751)
	{
		func_1287(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1292(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1012();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_1293(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_846(iParam0, 0, 0) };
	Var5 = { func_850(iParam0, Var0, Var0.f_4, 0) };
	if (func_1051(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_930(0), &Var5);
	return 1;
}

void func_1294()
{
	int iVar0;

	if (func_122() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26795[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26795.f_20 = Global_1946804->f_2657.f_20;
		Global_26795.f_21 = Global_1946804->f_2657.f_21;
		Global_26795.f_22 = Global_1946804->f_2657.f_22;
		Global_26795.f_23 = Global_1946804->f_2657.f_23;
		Global_26795.f_24 = Global_1946804->f_2657.f_24;
		Global_26795.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36637.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36637.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36637.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36637.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36637.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36637.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36637.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

bool func_1295(int iParam0)
{
	return func_1314(func_1313(iParam0));
}

int func_1296(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return 1877538667;
		case 2:
			return -747118240;
		case 3:
			return 356885366;
		case 4:
			return -733784435;
		case 5:
			return -2010021430;
		case 6:
			return -1563051210;
		case 7:
			return 1532314048;
		case 8:
			return -1378972544;
		default:
			break;
	}
	return 0;
}

int func_1297(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -77597297;
		case 1:
			return 1289620458;
		case 2:
			return 351104126;
		case 3:
			return -991258198;
		case 4:
			return -446539844;
		case 5:
			return 2146082234;
		case 6:
			return 330185476;
		case 7:
			return -1208917184;
		case 8:
			return -12904227;
		default:
			break;
	}
	return 0;
}

int func_1298(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 624387589;
		case 1:
			return 1398329674;
		case 2:
			return -35737408;
		case 3:
			return 651323163;
		case 4:
			return 343794650;
		case 5:
			return 2072880089;
		case 6:
			return -2120749726;
		case 7:
			return -1749072364;
		case 8:
			return -583780175;
		default:
			break;
	}
	return 0;
}

int func_1299(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1066104444;
		case 1:
			return -567070698;
		case 2:
			return 797308288;
		case 3:
			return -1669506545;
		case 4:
			return -1011624341;
		case 5:
			return 516134254;
		case 6:
			return -940514956;
		case 7:
			return 2030473481;
		case 8:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

int func_1300(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return -77597297;
		case 2:
			return 624387589;
		case 3:
			return 1066104444;
		default:
			break;
	}
	return 0;
}

int func_1301(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1877538667;
		case 1:
			return 1289620458;
		case 2:
			return 1398329674;
		case 3:
			return -567070698;
		default:
			break;
	}
	return 0;
}

int func_1302(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -747118240;
		case 1:
			return 351104126;
		case 2:
			return -35737408;
		case 3:
			return 797308288;
		default:
			break;
	}
	return 0;
}

int func_1303(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 356885366;
		case 1:
			return -991258198;
		case 2:
			return 651323163;
		case 3:
			return -1669506545;
		default:
			break;
	}
	return 0;
}

int func_1304(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -733784435;
		case 1:
			return -446539844;
		case 2:
			return 343794650;
		case 3:
			return -1011624341;
		default:
			break;
	}
	return 0;
}

int func_1305(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2010021430;
		case 1:
			return 2146082234;
		case 2:
			return 2072880089;
		case 3:
			return 516134254;
		default:
			break;
	}
	return 0;
}

int func_1306(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1563051210;
		case 1:
			return 330185476;
		case 2:
			return -2120749726;
		case 3:
			return -940514956;
		default:
			break;
	}
	return 0;
}

int func_1307(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1532314048;
		case 1:
			return -1208917184;
		case 2:
			return -1749072364;
		case 3:
			return 2030473481;
		default:
			break;
	}
	return 0;
}

int func_1308(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1378972544;
		case 1:
			return -12904227;
		case 2:
			return -583780175;
		case 3:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

int func_1309(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_1312(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_748(iParam0) != -999503751)
		{
			func_1315(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_748(iParam0) != -999503751)
	{
		func_1315(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1288(iParam0, 1);
	return 1;
}

void func_1310(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1311(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_1316(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_991(func_1113(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_1317(uParam0);
	}
}

int func_1312(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*uParam1])
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

int func_1313(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

bool func_1314(var uParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && uParam0) != 0;
}

void func_1315(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1318(iParam1);
	func_1319(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1320(&(uParam0->f_26), iVar1);
		if (func_1321(uParam0->f_26, &iVar0))
		{
			func_1322(iVar0, iVar1);
		}
	}
}

void func_1316(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1323(&(uParam0->f_3));
}

void func_1317(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1324(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

var func_1318(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1319(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1320(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1316(uParam0->f_1[iParam1 /*5*/]);
	*(uParam0->f_1[iParam1 /*5*/]) = { *(uParam0->f_1[*uParam0 /*5*/]) };
}

int func_1321(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*uParam1] == iParam0)
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

void func_1322(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1323(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1324(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1325(func_1012());
	if (*uParam0)
	{
		func_1323(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, uParam1, 0, func_122() != -1, iParam2);
	*uParam0 = 1;
}

int func_1325(int iParam0)
{
	if (func_122() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 2026485318:
			return 0;
		case 24043185:
			return 1;
		default:
			break;
	}
	return 0;
}

