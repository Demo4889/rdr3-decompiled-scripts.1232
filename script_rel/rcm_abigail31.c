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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	struct<25> Local_22 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
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
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = false;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101[2] = { 0, 0 };
	int iLocal_104[2] = { 0, 0 };
	int iLocal_107[2] = { 0, 0 };
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	float fLocal_118 = 0f;
	float fLocal_119 = 0f;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125[2] = { 0, 0 };
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	bool bLocal_139 = false;
	int iLocal_140 = 0;
	bool bLocal_141 = false;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	bool bLocal_158 = false;
	bool bLocal_159 = false;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	bool bLocal_163 = false;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	bool bLocal_167 = false;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175[3] = { 0, 0, 0 };
	int iLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 1;
	var uLocal_185 = 1;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	int iLocal_194[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<2> Local_217[9];
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	var uLocal_250 = 0;
	int iLocal_251 = 0;
	var uLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	struct<8> Local_273[4];
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	float fLocal_310 = 0f;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316[2] = { 0, 0 };
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	bool bLocal_326 = false;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	int iLocal_334[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	var uLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	bool bLocal_358 = false;
	int iLocal_359 = 0;
	bool bLocal_360 = false;
	bool bLocal_361 = false;
	int iLocal_362 = 0;
	bool bLocal_363 = false;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
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
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	float fLocal_397 = 0f;
	float fLocal_398 = 0f;
	struct<105> Local_399 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -262339715, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 6 } ;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 15;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
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
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 2;
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
	var uLocal_621 = 22;
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
	var uLocal_748 = 56;
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
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
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
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
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
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
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
	var uLocal_1321 = 2;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 8;
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
	var uLocal_1353 = 24;
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
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 4;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 180000;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 5;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 1092616192;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	bool bLocal_1532 = false;
	int iLocal_1533 = 0;
	int iLocal_1534 = 0;
	int iLocal_1535 = 0;
	int iLocal_1536 = 0;
	int iLocal_1537 = 0;
	var uLocal_1538 = -1;
	var uLocal_1539 = 0;
	var uLocal_1540 = -1;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = -1;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 1073741824;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 1;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	struct<17> Local_1558[1];
	int iLocal_1576 = 0;
	int iLocal_1577 = 0;
	int iLocal_1578 = 0;
	int iLocal_1579 = 0;
	int iLocal_1580 = 0;
	var uLocal_1581 = -1;
	var uLocal_1582 = 0;
	var uLocal_1583 = -1;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = -1;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 1073741824;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 1;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	struct<17> Local_1601[1];
	int iLocal_1619 = 0;
	int iLocal_1620 = 0;
	int iLocal_1621 = 0;
	int iLocal_1622 = 0;
	int iLocal_1623 = 0;
	char* sLocal_1624 = NULL;
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
	int iLocal_1640 = 0;
	struct<5> Local_1641[16];
	char* sLocal_1722 = NULL;
	char* sLocal_1723 = NULL;
	int iLocal_1724 = 0;
	char* sLocal_1725 = NULL;
	char* sLocal_1726 = NULL;
	char* sLocal_1727 = NULL;
	int iLocal_1728 = 0;
	int iLocal_1729 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<2606> Var0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_57 = 1;
	iLocal_61 = 1259608942;
	iLocal_64 = 648498740;
	iLocal_87 = joaat("p_broom02x");
	iLocal_89 = joaat("p_chair_crate02x");
	fLocal_118 = 0f;
	fLocal_119 = -1f;
	bLocal_163 = true;
	iLocal_263 = 1;
	iLocal_319 = 1;
	iLocal_325 = 1;
	bLocal_326 = true;
	iLocal_327 = 1;
	iLocal_328 = 1;
	iLocal_329 = 1;
	iLocal_330 = 1;
	iLocal_345 = 1;
	iLocal_1576 = -1;
	sLocal_1722 = "AMB_CAMP@WORLD_CAMP_FIRE_CROUCH@TEND@MALE_A@idle_a";
	sLocal_1723 = "idle_a";
	sLocal_1725 = "Script@Story@RABI3@WalkThroughBeechers";
	sLocal_1726 = "RABI3_END_WALK2";
	sLocal_1727 = "Script@Story@RABI3@WalkThroughBlackwater";
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
	func_185("nav_mesh_beech_barn_finished");
	func_186(uParam0, 2);
	func_187(uParam0, 12);
	func_188();
	func_189();
	uParam0->f_744 = 6f;
	if (Global_40.f_9028.f_16 > 0)
	{
		bLocal_358 = true;
	}
	else
	{
		bLocal_358 = false;
	}
	if (!func_190(-1077843421, 1))
	{
		func_191(-1077843421, 1017034651, 1120952528, -1, 1, 1, 0);
	}
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
	func_41(uParam0, joaat("cs_abigailroberts"), 7);
	func_41(uParam0, joaat("cs_blwphotographer"), 7);
	func_41(uParam0, joaat("wagon02x"), 7);
	func_41(uParam0, joaat("rowboat"), 7);
	func_41(uParam0, 161262996, 7);
	func_41(uParam0, iLocal_89, 7);
	func_41(uParam0, iLocal_87, 7);
	func_41(uParam0, -1926868415, 7);
	func_41(uParam0, 2074507271, 7);
	func_41(uParam0, 1546836623, 7);
	func_41(uParam0, joaat("p_camerabox01x"), 2);
	func_41(uParam0, joaat("p_screwdriver01x"), 2);
	func_41(uParam0, joaat("p_studiocamera01x"), 2);
	func_41(uParam0, joaat("p_chair17x"), 2);
	func_41(uParam0, joaat("p_chair12bx"), 2);
	func_41(uParam0, joaat("p_cs_billsingle01x"), 2);
	func_41(uParam0, joaat("p_cs_photo_4x6"), 2);
	func_196(uParam0, sLocal_1722, 7);
	STREAMING::REQUEST_NAMED_PTFX_ASSET(1064647651);
}

void func_43(var uParam0, int iParam1)
{
	if (func_197(uParam0) == iParam1)
	{
		return;
	}
	func_198(uParam0, uParam0->f_168, iParam1);
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
	if ((func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_6(uParam0->f_172, 1024)) && !func_199(uParam0->f_174))
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

	switch (func_200(&iVar0))
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
	func_201(bParam0);
	func_202(bParam0);
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
	if (func_203(uParam0, uParam0->f_168))
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
	if (func_204() != -1)
	{
		return 0;
	}
	if (!func_205(iParam0))
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
			Var1 = { func_206(2) };
			Var1.f_3 = func_207(2);
			break;
		case 1:
			Var1 = { func_206(15) };
			Var1.f_3 = func_207(15);
			break;
		case 2:
			Var1 = { func_206(28) };
			Var1.f_3 = func_207(28);
			break;
		case 3:
			Var1 = { func_206(39) };
			Var1.f_3 = func_207(39);
			break;
		case 4:
			Var1 = { func_206(50) };
			Var1.f_3 = func_207(50);
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_208(*uParam0, uParam0->f_3);
}

void func_63(var uParam0, int iParam1)
{
	uParam0->f_173 = (uParam0->f_173 - (uParam0->f_173 && iParam1));
}

int func_64(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_209(14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_210(uParam0, iVar0))
		{
			StringCopy(&(uParam0->f_2578), "ABI31_F_JH", 24);
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_67))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_67))
		{
			StringCopy(&(uParam0->f_2578), "ABI31_F_ABI", 24);
			return 1;
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_67, true, false), 5f) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_67, true, false), 5f, true))
		{
			StringCopy(&(uParam0->f_2578), "ABI31_F_SCARE", 24);
			return 1;
		}
		if (iLocal_47 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_124))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_67, iLocal_124, false) || !PED::IS_PED_IN_VEHICLE(Global_35, iLocal_124, false))
				{
					StringCopy(&(uParam0->f_2578), "ABI31_F_ABH", 24);
					return 1;
				}
			}
		}
	}
	if (func_211(Global_35, -1624.75f, -1395.4f, 81.56f, 80f, 1, 1))
	{
		iVar1 = func_209(7);
		iVar2 = func_209(4);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, Global_35, 1, 1))
			{
				StringCopy(&(uParam0->f_2578), "ABI31_F_CH", 24);
				return 1;
			}
			if (PED::IS_PED_RAGDOLL(iVar1) && ENTITY::IS_ENTITY_AT_ENTITY(Global_35, iVar1, 10f, 10f, 10f, false, true, 0))
			{
				func_80(&uLocal_239, 0);
			}
			else
			{
				func_212(&uLocal_239);
			}
			if (func_79(&uLocal_239))
			{
				if (func_213(&uLocal_239) > 1f)
				{
					StringCopy(&(uParam0->f_2578), "ABI31_F_CH", 24);
					return 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar2, Global_35, 1, 1))
			{
				StringCopy(&(uParam0->f_2578), "ABI31_F_UH", 24);
				return 1;
			}
			if (PED::IS_PED_RAGDOLL(iVar2) && ENTITY::IS_ENTITY_AT_ENTITY(Global_35, iVar2, 10f, 10f, 10f, false, true, 0))
			{
				func_80(&uLocal_242, 0);
			}
			else
			{
				func_212(&uLocal_242);
			}
			if (func_79(&uLocal_242))
			{
				if (func_213(&uLocal_242) > 1f)
				{
					StringCopy(&(uParam0->f_2578), "ABI31_F_UH", 24);
					return 1;
				}
			}
		}
		if (func_211(Global_35, -1581.172f, -1423.889f, 80.44695f, 25f, 1, 1))
		{
			if (PLAYER::_0x72AD59F7B7FB6E24(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				StringCopy(&(uParam0->f_2578), "ABI31_F_SCARE", 24);
				return 1;
			}
		}
	}
	if ((((iLocal_47 == 1 || iLocal_47 == 0) || iLocal_47 == 3) || iLocal_47 == 5) || iLocal_47 == 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_67))
		{
			if (!func_214(Global_35, iLocal_67, 50f, 1))
			{
				StringCopy(&(uParam0->f_2578), "ABI31_F_ABA", 24);
				return 1;
			}
		}
	}
	if (iLocal_47 == 10)
	{
		if (!func_211(Global_35, func_206(11), 120f, 1, 1))
		{
			StringCopy(&(uParam0->f_2578), "ABI31_F_LAKE", 24);
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_70) && ENTITY::IS_ENTITY_DEAD(iLocal_70))
	{
		StringCopy(&(uParam0->f_2578), "ABI31_F_PHO", 24);
		return 1;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0) || iLocal_1577)
	{
		if (!func_79(&uLocal_377))
		{
			func_80(&uLocal_377, 0);
		}
		else if (func_215(&uLocal_377) > 5f || (iLocal_1577 && func_215(&uLocal_377) > 2f))
		{
			func_212(&uLocal_377);
			if (func_214(Global_35, iLocal_67, 10f, 1))
			{
				StringCopy(&(uParam0->f_2578), "ABI31_F_SCARE", 24);
				return 1;
			}
			else
			{
				StringCopy(&(uParam0->f_2578), "ABI31_F_COMBAT", 24);
				return 1;
			}
		}
	}
	else if (func_79(&uLocal_377))
	{
		func_212(&uLocal_377);
	}
	if (iLocal_47 < 3 && ENTITY::DOES_ENTITY_EXIST(iLocal_124))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_124, 0, 0))
		{
			StringCopy(&(uParam0->f_2578), "ABI31_F_WAG", 24);
			return 1;
		}
	}
	if (iLocal_47 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_128))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_128, 0, 0))
			{
				StringCopy(&(uParam0->f_2578), "ABI31_F_BOA", 24);
				return 1;
			}
		}
	}
	if (func_216(PLAYER::PLAYER_ID(), 0, 0, 1))
	{
		StringCopy(&(uParam0->f_2578), "ABI31_F_WAN", 24);
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
}

Vector3 func_69(int iParam0)
{
	vector3 vVar0;

	if (!func_205(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_217(iParam0, &vVar0))
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
		if (func_57(iVar0) && func_218(uParam0, iVar0))
		{
		}
		else
		{
			func_51(uParam0, 12);
			return 1;
		}
	}
	if (func_219(uParam0->f_174))
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
	if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_199(uParam0->f_174))
	{
		func_220(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 16384);
		func_51(uParam0, 3);
		return 1;
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 8388608 != 0)
	{
		iVar1 = func_221(uParam0->f_174);
		if (iVar1 != -1)
		{
			if (func_222(iVar1))
			{
				if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
				{
					func_178(uParam0->f_174, 32768);
				}
				func_51(uParam0, 5);
				return 1;
			}
			else if (func_223(iVar1))
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
		if (func_222(((*Global_1347702)[uParam0->f_174 /*49*/])->f_45))
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
			iVar2 = func_224();
			if (!func_225(iVar2, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_46))
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
		if (func_226(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			func_178(uParam0->f_174, 16384);
			func_51(uParam0, 9);
			return 1;
		}
	}
	if (uParam0->f_172 & 256 != 0 && !func_227(uParam0->f_174, 1, 1, 0, 0))
	{
		func_51(uParam0, 10);
		return 1;
	}
	if (func_228(uParam0) || func_229(uParam0->f_174, uParam0->f_743))
	{
		func_178(uParam0->f_174, 1024);
		func_51(uParam0, 11);
		return 1;
	}
	if (!func_230(uParam0) && func_231(uParam0->f_743))
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

	func_232();
	func_233(uParam0);
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
				func_234(uParam0->f_174, 1);
			}
		}
		if (func_6(uParam0->f_172, 67108864))
		{
			func_54(1);
			func_2(&(uParam0->f_172), 67108864);
		}
		func_235(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_ENABLE_HUD_CONTEXT_THIS_FRAME(Global_35, 262143);
			func_236(Global_35);
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
		func_237(uParam0->f_174);
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
		func_238(uParam0);
	}
	func_161(uParam0);
	func_239(0);
	func_102(uParam0, 0);
	func_43(uParam0, 4);
	func_2(&(uParam0->f_172), 8);
	func_176(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 1024);
	func_176(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
	func_47(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 4);
	func_212(&(uParam0->f_2585));
	func_240(uParam0);
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
			fVar4 = func_241(uParam0->f_174);
			if ((((*Global_1347702)[uParam0->f_174 /*49*/])->f_36 != -1822497728 || func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 32)) || fVar3 < (fVar4 * fVar4))
			{
				func_242(uParam0->f_174, vVar0, 1, 0);
			}
		}
	}
	else
	{
		func_243(uParam0->f_174, fVar3);
		func_244(uParam0->f_174, vVar0, fVar3);
		func_245(uParam0->f_174);
		func_246(uParam0->f_174);
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
			func_247(uParam0);
		}
		else
		{
			func_248(uParam0);
		}
	}
	else if (uParam0->f_177 == 4)
	{
		if (func_45(uParam0))
		{
			if (func_6(uParam0->f_172, 16))
			{
				cVar0 = { func_249() };
				Var8 = { func_250(&(uParam0->f_206)) };
				if (!MISC::ARE_STRINGS_EQUAL(&Var8, &cVar0))
				{
					func_251(&(uParam0->f_206));
					func_252(&(uParam0->f_206), &cVar0);
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
	if (func_253(uParam0->f_206.f_5))
	{
		uParam0->f_206.f_5 = { func_69(uParam0->f_174) };
	}
	bVar0 = func_254(uParam0);
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
		if (func_255(&(uParam0->f_206), &(uParam0->f_2575), bVar0, bVar1))
		{
			if (!func_6(uParam0->f_172, 1))
			{
				func_256(uParam0);
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
	return iLocal_47;
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
			if (func_257(uParam0->f_2605[iVar0 /*16*/], 1048576))
			{
				if (func_258(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_259(uParam0->f_2605[iVar0 /*16*/]);
				}
				else if (func_260(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_261(uParam0->f_2605[iVar0 /*16*/]);
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
			if (func_257(uParam0->f_2605.f_241[iVar0 /*16*/], 1048576))
			{
				if (func_262(uParam0, uParam0->f_2605.f_241[iVar0 /*16*/], iParam1))
				{
					func_263(uParam0->f_2605.f_241[iVar0 /*16*/]);
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
			if (func_257(uParam0->f_2605.f_482[iVar0 /*16*/], 1048576))
			{
				if (func_262(uParam0, uParam0->f_2605.f_482[iVar0 /*16*/], iParam1))
				{
					if (func_264(uParam0->f_2605.f_482[iVar0 /*16*/], 0))
					{
						if (func_257(uParam0->f_2605.f_482[iVar0 /*16*/], 4))
						{
							func_265(&(uParam0->f_2605));
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
	if (func_266(&(uParam0->f_2605), &cVar0, 1, -1, 0, 1))
	{
		func_1(&(uParam0->f_172), 32);
		return 1;
	}
	return 0;
}

bool func_79(var uParam0)
{
	return func_267(*uParam0, 1);
}

void func_80(var uParam0, int iParam1)
{
	if (iParam1 || !func_79(uParam0))
	{
		func_268(uParam0);
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
	if (func_269(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_270() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
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
	if (func_271(uParam0) && func_272(uParam0))
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
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_273(uParam0->f_174), func_274(uParam0->f_174)))
		{
			func_275(uParam0->f_174, 128);
		}
		else
		{
			func_121(uParam0->f_174, 128);
		}
		if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
		{
			if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_273(uParam0->f_174), func_274(uParam0->f_174)))
			{
				func_276(uParam0->f_174);
				func_277(uParam0->f_174);
			}
		}
		else
		{
			func_278(Global_1347702[uParam0->f_174 /*49*/]);
			func_276(uParam0->f_174);
		}
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(func_273(uParam0->f_174), func_274(uParam0->f_174)))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_273(uParam0->f_174), func_274(uParam0->f_174), 0, "");
		}
	}
	if (!func_174(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
	{
		if (!func_279(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
		{
			func_280(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1);
		}
		func_281(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1, 1);
		func_282(Global_1935630, 8);
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
	func_283(uParam0);
	func_1(&(uParam0->f_172), 8);
	if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 8192))
	{
		func_54(0);
		LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
		LAW::_0x292AD61A33A7A485();
		func_284(1, 16384, 1);
		func_1(&(uParam0->f_172), 67108864);
	}
	func_119(uParam0, 1, 0);
	func_235(1);
	func_239(1);
	func_285();
	func_163(uParam0);
	func_164(uParam0->f_174);
	func_165(uParam0->f_174);
	func_286(uParam0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	func_287(1);
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
	func_288(uParam0);
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
	if (func_289(uParam0))
	{
		iVar5 = func_95(uParam0);
	}
	TELEMETRY::_TELEMETRY_MISSION_STARTED(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), 0, iVar5, func_32(uParam0, 64));
	if (uParam0->f_174 != func_19())
	{
		func_290(uParam0, func_61(0), func_61(1), 0, 1, 0);
	}
}

void func_87(var uParam0)
{
	func_291(uParam0, 1);
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
	func_292();
	func_293(1, 0);
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
	return 6;
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
	struct<4> Var1;

	iVar0 = iParam1;
	Var1 = { func_61(iParam1) };
	iLocal_48 = 0;
	if (iVar0 < 4)
	{
		CLOCK::PAUSE_CLOCK(false, 0);
		CLOCK::SET_CLOCK_TIME(15, 0, 0);
	}
	else
	{
		CLOCK::PAUSE_CLOCK(false, 0);
		CLOCK::SET_CLOCK_TIME(19, 10, 0);
	}
	func_297(-857562377, 0, 0, 1103626240);
	if (!iLocal_179)
	{
		if (iVar0 == 6)
		{
			func_298(&uLocal_180, -1633.25f, -1357.524f, 83.3966f, 0f, 0, 1, 0, 1, 0, 0, 1, 1);
		}
		else if (iVar0 == 0 && func_299(uParam0))
		{
			func_298(&uLocal_180, -1639.031f, -1362.668f, 83.4029f, 0f, 0, 1, 0, 1, 0, 0, 1, 1);
		}
		else
		{
			func_298(&uLocal_180, Var1, Var1.f_3, 0, 0, 0, 1, 0, 0, 1, 1);
		}
		iLocal_179 = 1;
	}
	func_300(0);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 1, false, false);
	switch (iVar0)
	{
		case 0:
			if (func_299(uParam0))
			{
				if (!func_301(&uLocal_180))
				{
					return 2;
				}
				func_291(uParam0, 1);
				func_290(uParam0, func_61(0), func_61(1), 0, 1, 0);
				if (!func_6(uParam0->f_172, 1))
				{
					return 2;
				}
				iLocal_179 = 0;
				return 5;
			}
			else
			{
				if (func_302())
				{
					func_290(uParam0, func_61(0), func_61(1), 0, 1, 0);
				}
				if (!func_303(uParam0))
				{
					return 2;
				}
				if (!func_304())
				{
					return 2;
				}
				func_305(-392430949);
				func_305(634752926);
				func_306(0);
				func_293(3, 0);
				if (!func_301(&uLocal_180))
				{
					return 2;
				}
				if (!func_307())
				{
					return 2;
				}
				ENTITY::_0x203BEFFDBE12E96A(Global_35, Var1, Var1.f_3, 1, 0, 1);
				ENTITY::_0x203BEFFDBE12E96A(iLocal_67, -1645.16f, -1379.239f, 82.97265f, func_207(3), 1, 0, 1);
				func_308(-668482597, 3000, 0, 1, 1, 0, 0, 0);
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				iLocal_179 = 0;
			}
			return 7;
		case 1:
			if (func_302())
			{
				func_309();
				if (!func_303(uParam0))
				{
					return 2;
				}
				if (!func_304())
				{
					return 2;
				}
				if (!func_310())
				{
					return 2;
				}
				if (!func_311(uParam0))
				{
					return 2;
				}
				if (!func_312())
				{
					return 2;
				}
				func_291(uParam0, 2);
				if (!func_6(uParam0->f_172, 1))
				{
					return 2;
				}
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_124, false);
				func_306(3);
				iLocal_179 = 0;
				func_290(uParam0, func_61(1), func_61(2), 1, 2, 0);
				return 5;
			}
			else
			{
				if (func_302())
				{
					func_290(uParam0, func_61(1), func_61(2), 1, 2, 0);
				}
				func_309();
				if (!func_303(uParam0))
				{
					return 2;
				}
				if (!func_304())
				{
					return 2;
				}
				if (!func_211(Global_35, Var1, 2f, 1, 1))
				{
					ENTITY::_0x203BEFFDBE12E96A(Global_35, Var1, Var1.f_3, 1, 0, 1);
				}
				if (!func_310())
				{
					return 2;
				}
				if (!func_311(uParam0))
				{
					return 2;
				}
				if (!func_301(&uLocal_180))
				{
					return 2;
				}
				ENTITY::_0x203BEFFDBE12E96A(iLocal_124, func_206(8), func_207(8), 1, 0, 1);
				ENTITY::_0x203BEFFDBE12E96A(iLocal_67, func_206(16), func_207(16), 1, 0, 1);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_124, false);
				func_291(uParam0, 3);
				func_306(3);
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_124, false);
				iLocal_179 = 0;
				return 7;
			}
			break;
		case 2:
			if (func_302())
			{
				func_309();
				if (!func_303(uParam0))
				{
					return 2;
				}
				if (!func_304())
				{
					return 2;
				}
				if (!func_311(uParam0))
				{
					return 2;
				}
				if (!func_310())
				{
					return 2;
				}
				if (!func_313())
				{
					return 2;
				}
				func_306(4);
				func_291(uParam0, 3);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_124, false);
				if (!func_6(uParam0->f_172, 1))
				{
					return 2;
				}
				iLocal_179 = 0;
				func_290(uParam0, func_61(2), func_61(3), 2, 3, 0);
				return 5;
			}
			else
			{
				if (func_302())
				{
					func_290(uParam0, func_61(2), func_61(3), 2, 3, 0);
				}
				func_309();
				if (!func_303(uParam0))
				{
					return 2;
				}
				if (!func_304())
				{
					return 2;
				}
				if (!func_311(uParam0))
				{
					return 2;
				}
				if (!func_313())
				{
					return 2;
				}
				if (!func_301(&uLocal_180))
				{
					return 2;
				}
				ENTITY::_0x203BEFFDBE12E96A(iLocal_124, func_206(8), func_207(8), 1, 0, 1);
				if ((func_314(4, 0, 0) && func_314(5, 0, 0)) && ENTITY::DOES_ENTITY_EXIST(iLocal_112))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(&(Local_1641[4 /*5*/]), 0))
					{
						func_315(4);
						ANIMSCENE::START_ANIM_SCENE(&(Local_1641[4 /*5*/]));
					}
					if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(&(Local_1641[5 /*5*/]), 0))
					{
						func_315(5);
						ANIMSCENE::START_ANIM_SCENE(&(Local_1641[5 /*5*/]));
					}
				}
				else
				{
					return 2;
				}
				func_306(4);
				func_291(uParam0, 4);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_124, false);
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				iLocal_179 = 0;
				return 7;
			}
			break;
		case 3:
			if (func_302())
			{
				func_290(uParam0, func_61(3), func_61(4), 3, 4, 0);
			}
			func_309();
			if (!func_303(uParam0))
			{
				return 2;
			}
			if (!func_304())
			{
				return 2;
			}
			if (!func_301(&uLocal_180))
			{
				return 2;
			}
			if (!func_311(uParam0))
			{
				return 2;
			}
			ENTITY::_0x203BEFFDBE12E96A(iLocal_124, func_206(8), func_207(8), 1, 0, 1);
			ENTITY::_0x203BEFFDBE12E96A(iLocal_67, func_206(41), func_207(41), 1, 0, 1);
			ENTITY::_0x203BEFFDBE12E96A(iLocal_70, func_206(27), func_207(27), 1, 0, 1);
			func_316(2);
			func_306(5);
			func_317();
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_124, false);
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			iLocal_179 = 0;
			func_290(uParam0, func_61(3), func_61(4), 3, 4, 0);
			return 7;
		case 4:
			func_318();
			func_309();
			if (!func_303(uParam0))
			{
				return 2;
			}
			if (!func_304())
			{
				return 2;
			}
			if (!func_319(1))
			{
				return 2;
			}
			if (!func_301(&uLocal_180))
			{
				return 2;
			}
			if (!func_311(uParam0))
			{
				return 2;
			}
			ENTITY::_0x203BEFFDBE12E96A(iLocal_124, func_206(8), func_207(8), 1, 0, 1);
			ENTITY::_0x203BEFFDBE12E96A(iLocal_128, func_206(10), func_207(10), 1, 0, 1);
			ENTITY::_0x203BEFFDBE12E96A(Global_35, func_206(52), func_207(52), 1, 0, 1);
			ENTITY::_0x203BEFFDBE12E96A(iLocal_67, func_206(52), func_207(52), 1, 0, 1);
			ENTITY::_0x203BEFFDBE12E96A(iLocal_70, func_206(27), func_207(27), 1, 0, 1);
			func_316(2);
			func_306(7);
			if (func_320())
			{
				func_291(uParam0, 5);
			}
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_124, false);
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			iLocal_179 = 0;
			func_290(uParam0, func_61(4), func_61(5), 4, 5, 0);
			return 7;
		case 5:
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("rowboat"), 47);
			func_318();
			func_321(-639037538, 1, 0);
			if (!func_303(uParam0))
			{
				return 2;
			}
			if (!func_304())
			{
				return 2;
			}
			if (!func_319(1))
			{
				return 2;
			}
			if (!CAM::_0xDD0B7C5AE58F721D("vehicles@boat_cam") && !CAM::_0xC285FD21294A1C49("vehicles@boat_cam"))
			{
				CAM::_0x6A4D224FC7643941("vehicles@boat_cam");
			}
			if (!func_314(14, 0, 0))
			{
				return 2;
			}
			if (!CAM::_0xDD0B7C5AE58F721D("vehicles@boat_cam"))
			{
				return 2;
			}
			if (!func_301(&uLocal_180))
			{
				return 2;
			}
			if (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("rowboat")))
			{
				return 2;
			}
			ENTITY::_0x203BEFFDBE12E96A(iLocal_124, func_206(8), func_207(8), 1, 0, 1);
			ENTITY::_0x203BEFFDBE12E96A(Global_35, func_206(18), func_207(52), 1, 0, 1);
			ENTITY::_0x203BEFFDBE12E96A(iLocal_67, func_206(18), func_207(52), 1, 0, 1);
			ENTITY::_0x203BEFFDBE12E96A(iLocal_70, func_206(27), func_207(27), 1, 0, 1);
			func_316(2);
			func_322(&Global_35, &iLocal_128, -1, 1);
			func_322(&iLocal_67, &iLocal_128, 1, 1);
			ENTITY::_0x0918E3565C20F03C(iLocal_128, -720.67f, -1380.78f, 40.58f, 266.92f, 0, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			func_293(10, 0);
			if (!func_323(14, 0, 0))
			{
				return 2;
			}
			func_306(10);
			if (func_320())
			{
				func_291(uParam0, 5);
			}
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_124, false);
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			iLocal_179 = 0;
			return 7;
		case 6:
			if (func_302())
			{
				func_318();
				func_321(-639037538, 1, 0);
				if (!func_303(uParam0))
				{
					return 2;
				}
				if (!func_319(1))
				{
					return 2;
				}
				func_322(&Global_35, &iLocal_128, -1, 1);
				func_322(&iLocal_67, &iLocal_128, 1, 1);
				if (!func_320())
				{
					return 2;
				}
				func_291(uParam0, 5);
				func_306(12);
				return 5;
			}
			else
			{
				func_324(Global_35, 67);
				if (!func_303(uParam0))
				{
					return 2;
				}
				if (!func_319(1))
				{
					return 2;
				}
				if (!func_301(&uLocal_180))
				{
					return 2;
				}
				func_321(-639037538, 1, 0);
				func_306(12);
				func_291(uParam0, 6);
				iLocal_179 = 0;
				return 5;
			}
			break;
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
		iVar0 = func_325();
		iVar1 = func_326(iVar0);
		fVar2 = (1f - (MISC::ABSF(BUILTIN::TO_FLOAT(iVar1)) / BUILTIN::TO_FLOAT(8)));
		fVar3 = func_327(iVar0 < 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		fVar4 = func_327(iVar0 > 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
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
		if (!func_328(uParam0))
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
		func_329();
		func_330(uParam0);
		if (!func_331(uParam0))
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
		func_332(&(uParam0->f_206), &(uParam0->f_753));
		if (uParam0->f_176 == 4 && !func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 512))
		{
			func_333(uParam0, 0);
		}
	}
	if (func_6(uParam0->f_172, 1024) && uParam0->f_176 == 4)
	{
		func_290(uParam0, func_61(0), func_61(1), 0, 1, 1);
	}
	func_2(&(uParam0->f_172), 512);
	if (uParam0->f_176 == 4)
	{
		if (func_334(Global_35))
		{
			if (func_335())
			{
				func_336(42, 1);
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
	return func_337(Var0, &(uParam0->f_206), uParam0);
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
		func_338(&(uParam0->f_206));
	}
	func_339(&(uParam0->f_206));
	func_340(uParam0);
}

int func_103(var uParam0)
{
	switch (iLocal_50)
	{
		case 1:
			func_341(&iLocal_90);
			func_268(&uLocal_368);
			return 7;
		case 2:
			return 7;
		case 4:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
			func_342("ABI31_H_SC", 10000, 0, 0, 0, 1);
			func_343(500, 0, 0, 1, 1);
			return 7;
		case 5:
			if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			func_344(Global_35, 0, 0);
			ENTITY::SET_ENTITY_COORDS(Global_35, -1633.25f, -1357.524f, 83.3966f, true, false, true, true);
			func_298(&uLocal_180, -1633.25f, -1357.524f, 83.3966f, 0f, 0, 1, 0, 1, 0, 0, 1, 1);
			ENTITY::SET_ENTITY_COORDS(iLocal_67, -1634.487f, -1359.77f, 83.3966f, true, false, true, true);
			func_291(uParam0, 6);
			func_345(733596224, 1, 1, -1387038764, 0);
			return 5;
		case 6:
			func_346(0);
			return 7;
	}
	return 7;
}

int func_104(var uParam0)
{
	if (func_6(uParam0->f_172, 256) && !func_6(uParam0->f_172, 1024))
	{
		if (!func_328(uParam0))
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
				func_290(uParam0, func_61(0), func_61(1), 0, 1, 1);
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
		if (func_347(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			func_1(&(uParam0->f_172), 1048576);
		}
		if (!func_6(uParam0->f_172, 524288))
		{
			if (func_348(&(uParam0->f_753)))
			{
				func_1(&(uParam0->f_172), 524288);
			}
		}
	}
}

int func_107(var uParam0)
{
	func_292();
	func_349();
	func_350();
	func_318();
	func_351();
	switch (iLocal_47)
	{
		case 0:
			if (func_352(uParam0))
			{
				func_306(1);
			}
			break;
		case 1:
			if (bLocal_141)
			{
				func_291(uParam0, 2);
			}
			if (func_353(uParam0))
			{
				func_306(3);
				return 5;
			}
			break;
		case 3:
			if (bLocal_92)
			{
				func_291(uParam0, 3);
			}
			if (func_354(uParam0))
			{
				func_306(4);
				return 5;
			}
			break;
		case 4:
			if (func_355())
			{
				if (!func_6(uParam0->f_172, 16))
				{
					func_291(uParam0, 4);
				}
			}
			if (func_356(uParam0))
			{
				if (!func_6(uParam0->f_172, 16))
				{
					func_291(uParam0, 4);
				}
				func_306(5);
				MISC::_0x2FCD528A397E5C88(iLocal_267, 8);
				return 6;
			}
			break;
		case 5:
			if (func_357(uParam0))
			{
				func_306(6);
			}
			break;
		case 6:
			if (func_358(uParam0))
			{
				func_306(7);
			}
			break;
		case 7:
			if (func_359(uParam0))
			{
				func_306(8);
			}
			break;
		case 8:
			CAM::_0x05AB44D906738426();
			if (func_360())
			{
				func_306(9);
			}
			break;
		case 9:
			if (func_361(uParam0))
			{
				func_306(10);
			}
			break;
		case 10:
			if (func_320())
			{
				func_291(uParam0, 5);
			}
			if (func_362(uParam0))
			{
				func_306(12);
				return 5;
			}
			break;
		case 12:
			func_363(0, 1, 1, 1);
			func_364(0);
			CAM::_0x05AB44D906738426();
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (!iLocal_133)
			{
				if (func_365())
				{
					iLocal_133 = 1;
				}
			}
			if (func_346(0))
			{
				func_306(11);
			}
			break;
		case 11:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			func_366();
			if (iLocal_1728 >= 2)
			{
				return 8;
			}
			break;
	}
	return 7;
}

bool func_108(int iParam0)
{
	return func_367(iParam0) == 0;
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
	return func_369(func_368(iParam0));
}

int func_111(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_370(func_368(iParam0));
}

int func_112(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_371(func_368(iParam0));
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
	if (!func_205(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		func_372(&(((*Global_1347702)[iParam0 /*49*/])->f_14));
		func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
		func_373(iParam0);
		if ((!func_226(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43890) || iParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(((*Global_1347702)[iParam0 /*49*/])->f_40, 0);
			func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
			func_374(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		else
		{
			func_178(iParam0, 16384);
			func_375(iParam0, 1, func_69(iParam0));
		}
	}
}

void func_116(var uParam0)
{
	func_376(1, &(uParam0->f_2605.f_482));
}

int func_117()
{
	return Global_1894899->f_2;
}

void func_118(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_377(iParam0))
	{
		return;
	}
	bVar0 = func_378(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_379(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_381(iParam0, func_380());
			func_382(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_383(iParam0, 67108864);
		func_381(iParam0, -15);
	}
	func_384(iParam0);
}

void func_119(var uParam0, int iParam1, int iParam2)
{
	if (func_385(0))
	{
		if (func_386(0))
		{
			func_387(0);
		}
	}
	if (func_385(1))
	{
		if (func_386(1))
		{
			func_387(1);
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
	int iVar0;

	func_345(733596224, 1, 1, -1387038764, 0);
	func_388(&(Global_40.f_9028.f_12), 64);
	iVar0 = 12;
	func_389(iVar0, -15);
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
			if (func_205(iVar1))
			{
				if (func_120(iVar1, 4))
				{
					func_234(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_390(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_111(iParam0);
		if (iVar3 == 59)
		{
			func_390(1);
		}
		else if (iVar3 == 61)
		{
			func_390(0);
		}
		else if (iVar3 == 83)
		{
			func_390(0);
		}
	}
}

void func_124()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_205(iVar0))
		{
			if (func_120(iVar0, 4))
			{
				if (func_120(iVar0, 16))
				{
					func_391(iVar0, 1);
				}
				if (func_120(iVar0, 8))
				{
					func_392(iVar0, 1);
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

	func_393(uParam0->f_174, sParam1, bParam5, fParam6, 0, 0, -1, -1, 0);
	if (iParam2 || !func_394(sParam1))
	{
		func_395(sParam1, iParam3, bParam4, bParam5, sParam7, sParam8, sParam9, sParam10, iParam11);
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

	if (!func_205(iParam0))
	{
		return;
	}
	if (func_396())
	{
		func_275(iParam0, 1);
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
		if (!func_396())
		{
			((*Global_1347702)[iParam0 /*49*/])->f_35 = 104;
			((*Global_1347702)[104 /*49*/])->f_48 = ((*Global_1347702)[iParam0 /*49*/])->f_15;
		}
	}
	func_397(iParam0, 0, iParam3);
	if (func_205(((*Global_1347702)[iParam0 /*49*/])->f_35))
	{
		func_398(((*Global_1347702)[iParam0 /*49*/])->f_35);
		if (iParam1 == 1)
		{
			func_399(((*Global_1347702)[iParam0 /*49*/])->f_35, 0);
			if (func_400(iParam0))
			{
				((*Global_1347702)[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])->f_43 = ((*Global_1347702)[iParam0 /*49*/])->f_43;
			}
		}
	}
	else
	{
		func_401();
	}
	if (!func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 1) && !func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 33554432))
	{
		if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 262144))
		{
			if (bParam5)
			{
				func_402(iParam0);
			}
			bParam5 = false;
			uVar0 = func_403(((*Global_1347702)[iParam0 /*49*/])->f_15);
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
		func_404(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_405(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam6);
	}
	func_406(iParam0);
}

int func_129(int iParam0)
{
	if (!func_205(iParam0))
	{
		return 0;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_15;
}

int func_130(int iParam0)
{
	iParam0 = func_407(iParam0);
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
	vVar2 = { func_408(((*Global_2621440)[0 /*12065*/])->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_409(vVar2, uVar1, uVar0, 0);
	func_410(vVar2);
	Global_40.f_9.f_15 = func_184(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_132(int iParam0)
{
	if (func_204() != -1)
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
	func_411();
	Global_43888 = 1;
}

void func_133(int iParam0, bool bParam1)
{
	if (func_204() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_60(32768))
	{
		return;
	}
	if (!func_60(32768))
	{
		func_412(1, bParam1);
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
		((*Global_2621440)[iParam0 /*12065*/])->f_9.f_14 = func_380();
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
	func_413(Var10, 0);
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
		func_414(0);
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
	if (func_415(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_416(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_416(&(Global_1347343->f_11), 16384);
	}
	if (func_417() >= 2)
	{
		if (!func_415(Global_1347343->f_11, 16384))
		{
			func_416(&(Global_1347343->f_11), 8);
		}
		func_158(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_282(Global_1935630, 2048);
	func_418(bParam5);
}

bool func_142(var uParam0)
{
	return uParam0->f_781;
}

void func_143(var uParam0)
{
	func_419(1, &(uParam0->f_2605.f_482));
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
	if (func_420(iParam0) == 3)
	{
		if (func_109(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_109(iParam0)))
		{
			if (func_110(iParam0) != 1 && func_110(iParam0) != 8)
			{
				func_421(func_110(iParam0), func_109(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_422(iParam0);
	func_202(1);
	func_423(0);
	func_424(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_425(1);
			func_426(15, 0, 1);
			break;
		case 4:
			func_426(10, 0, 1);
			break;
		case 8:
			func_426(10, 0, 1);
			break;
		case 9:
			func_426(10, 0, 1);
			break;
		case 2:
			func_426(10, 0, 1);
			break;
		case 6:
			func_426(10, 0, 1);
			break;
		case 5:
			func_426(10, 0, 1);
			break;
	}
	func_427(1);
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
		fParam2 = BUILTIN::VDIST2(Global_36, func_428(iParam0));
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
		if (func_429())
		{
			return;
		}
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "RCM_INVALID_TOD", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_342(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 1024 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_ANTAGONIZE", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_342(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 4096 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_MEMORY", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_342(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 2048 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_WANTED_REGION", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_342(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 16384 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_342(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 8192 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_COMBAT", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_342(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 32768 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED_2", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_342(sVar1, 10000, 0, 0, 0, 1);
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
		if (func_430())
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
		if (func_205(iVar0) && func_31(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
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
	return 5f;
}

int func_150(var uParam0)
{
	func_431(uParam0);
	if (func_71(uParam0) == 0)
	{
		if (iLocal_1728 < 2)
		{
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1956578->f_1), 5);
		}
		if (!func_366())
		{
			return 0;
		}
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

	iVar0 = 0;
	func_431(uParam0);
	func_432("nav_mesh_beech_barn_finished");
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_67))
	{
		AUDIO::STOP_PED_SPEAKING(iLocal_67, false);
	}
	func_433(13, 1, 1, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	func_168(4, 1, -1082130432, 1, 1, 0, 0);
	if (func_71(uParam0) == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_124))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_124);
		}
	}
	func_434(&iLocal_124);
	func_434(&iLocal_128);
	func_341(&iLocal_90);
	func_435(&iLocal_98, 1, 1);
	func_435(&iLocal_95, 1, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_89);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_87);
	iVar0 = 0;
	while (iVar0 <= (16 - 1))
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_1641[iVar0 /*5*/])))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(&(Local_1641[iVar0 /*5*/]));
		}
		iVar0++;
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
	func_212(&(uParam0->f_2588));
}

void func_162(var uParam0)
{
	struct<2> Var0;

	Var0 = { func_436(uParam0->f_174) };
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&Var0))
	{
		HUD::_TEXT_BLOCK_DELETE(&Var0);
	}
	Var0 = { func_437(uParam0->f_174) };
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
	switch (func_204())
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

	if (!func_438(iParam0))
	{
		return;
	}
	if (!func_439(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = func_209(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_KEEP_TASK(iVar0, false);
		}
	}
	func_433(iParam0, 0, 0, bParam1, fParam2, bParam3, bParam4, bParam5, bParam6, 0, 0);
	func_440(iParam0, 0);
	func_441(iParam0);
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
		func_442(((*Global_1347702)[iParam0 /*49*/])->f_41);
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

	if (func_443(iParam0, &iVar1, &iVar0))
	{
		if (func_444(iVar1, iVar0, 1))
		{
			func_445(iVar1, iVar0);
		}
	}
}

bool func_174(int iParam0)
{
	int iVar0;

	iVar0 = func_367(iParam0);
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
	if (!func_174(iParam0) && !func_279(iParam0))
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
	if (func_420(iParam0) == 3 || (func_420(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_109(iParam0))))
	{
		func_421(func_110(iParam0), func_109(iParam0), iParam2);
		if ((!func_57(Global_1572864->f_8) && !func_146(0, 1, 0)) && !func_90(&Global_1935630, 32768))
		{
			iVar0 = func_446(iParam0);
			if (iVar0 != -1)
			{
				func_447(0);
			}
			else if (func_110(iParam0) == 8)
			{
				iVar0 = func_448();
				if (iVar0 != -1)
				{
					func_447(0);
				}
			}
		}
	}
	func_424(iParam0, 0);
	if (func_56(0) == iParam0)
	{
		func_202(1);
		func_423(0);
		func_427(1);
	}
	func_449(iParam0, 1);
	func_422(iParam0);
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

	if (!func_205(iParam0))
	{
		return;
	}
	func_450(&(((*Global_1347702)[iParam0 /*49*/])->f_14), iParam1);
	func_450(&(((*Global_1347702)[iParam0 /*49*/])->f_14), 2);
	func_220(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 16384);
	func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_205(&(Global_40.f_450[iVar0])))
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
		func_451(uParam0->f_41[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_452(uParam0->f_117[iVar0 /*5*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_453((*uParam0)[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_454(uParam0->f_28[iVar0 /*3*/]);
		iVar0++;
	}
	func_162(uParam0);
}

void func_181(int iParam0)
{
	iParam0 = func_407(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_455(iParam0, 32);
	func_456();
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
	if (func_377(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_457(vParam0, bParam3);
}

void func_185(char* sParam0)
{
	if (PATHFIND::_0x5AC0944C156E5F44(sParam0))
	{
		PATHFIND::_0x527B97C203BB8606(sParam0);
	}
}

void func_186(var uParam0, int iParam1)
{
	uParam0->f_748 = iParam1;
}

void func_187(var uParam0, int iParam1)
{
	uParam0->f_749 = iParam1;
}

void func_188()
{
	(Local_1641[0 /*5*/])->f_1 = "script@rcm@abi3@leadin@rsc1@base";
	(Local_1641[0 /*5*/])->f_2 = "Main";
	(Local_1641[1 /*5*/])->f_1 = "script@rcm@abi3@leadin@rsc1@leadin";
	(Local_1641[1 /*5*/])->f_2 = "Main";
	(Local_1641[2 /*5*/])->f_1 = "script@rcm@abi3@ig@stage_01@ig10_helpabigailontowagon@ig10_helpabigailontowagon";
	(Local_1641[2 /*5*/])->f_2 = "";
	(Local_1641[3 /*5*/])->f_1 = "script@rcm@abi3@ig@stage_01@ig1_walktophotographer@ig1_walktophotographer";
	(Local_1641[3 /*5*/])->f_2 = "pl_walkntalk";
	(Local_1641[4 /*5*/])->f_1 = "script@rcm@abi3@ig@stage_01@ig6_choosebackground@ig6_choosebackground";
	(Local_1641[4 /*5*/])->f_2 = "pl_idling_FWD";
	(Local_1641[5 /*5*/])->f_1 = "script@rcm@abi3@ig@stage_01@ig6_choosebackground@ig6_choosebackground_photographer";
	(Local_1641[5 /*5*/])->f_2 = "pl_Idling_Photographer";
	(Local_1641[6 /*5*/])->f_1 = "script@rcm@ABI3@IG@Stage_01@IG2_PhotoPose@IG2_PhotoPose";
	(Local_1641[6 /*5*/])->f_2 = "pl_Pose_A_Idle";
	(Local_1641[7 /*5*/])->f_1 = "script@rcm@abi3@ig@stage_01@ig2_photopose@ig2_photopose_photographer";
	(Local_1641[7 /*5*/])->f_2 = "pl_idles";
	(Local_1641[8 /*5*/])->f_1 = "script@rcm@abi3@ig@ig_4_goingonadate@ig_4_goinonadate";
	(Local_1641[8 /*5*/])->f_2 = "pbl_movingpictureshow";
	(Local_1641[9 /*5*/])->f_1 = "script@rcm@abi3@ig@stage_01@ig8_holddoorexterior@ig8_holddoorexterior";
	(Local_1641[9 /*5*/])->f_2 = "pl_Enter_Door";
	(Local_1641[10 /*5*/])->f_1 = "script@rcm@abi3@ig@stage_01@ig9_holddoorinterior@ig9_holddoorinterior";
	(Local_1641[10 /*5*/])->f_2 = "pl_Enter_Idle";
	(Local_1641[11 /*5*/])->f_1 = "script@rcm@abi3@ig@ig3_watchingfilm@ig3_watchingfilm";
	(Local_1641[11 /*5*/])->f_2 = func_458(0);
	(Local_1641[12 /*5*/])->f_1 = "script@rcm@abi3@ig@stage_01@ig4_walkntalk@ig4_walkntalk";
	(Local_1641[12 /*5*/])->f_2 = "pl_WalkNTalk";
	(Local_1641[13 /*5*/])->f_1 = "script@rcm@abi3@ig@ig5_getinboat@ig5_getinboat";
	(Local_1641[13 /*5*/])->f_2 = "pl_GetIn_Land";
	(Local_1641[14 /*5*/])->f_1 = "script@rcm@abi3@ig@ig5_getinboat@ig5_idlesinboat";
	(Local_1641[14 /*5*/])->f_2 = "pl_Base";
	(Local_1641[15 /*5*/])->f_1 = "script@rcm@abi3@ig@stage_01@ig11_fence_sit@ig11_fence_sit";
	(Local_1641[15 /*5*/])->f_2 = "pl_WalkUp";
}

void func_189()
{
	(Local_273[0 /*8*/])->f_1 = { -811.5374f, -1375.802f, 44.4959f };
	(Local_273[0 /*8*/])->f_4 = { 0.1697f, 0f, 84.6106f };
	(Local_273[0 /*8*/])->f_7 = 51.282f;
	(Local_273[1 /*8*/])->f_1 = { -810.3845f, -1375.745f, 44.6952f };
	(Local_273[1 /*8*/])->f_4 = { -5.6848f, 0f, 60.5856f };
	(Local_273[1 /*8*/])->f_7 = 38.1778f;
	(Local_273[2 /*8*/])->f_1 = { -812.5682f, -1374.724f, 44.4911f };
	(Local_273[2 /*8*/])->f_4 = { 0.6423f, 0f, 89.2399f };
	(Local_273[2 /*8*/])->f_7 = 35.1257f;
	(Local_273[3 /*8*/])->f_1 = { -783.7311f, -1363.975f, 44.8674f };
	(Local_273[3 /*8*/])->f_4 = { -2.3261f, -0.1568f, -93.0758f };
	(Local_273[3 /*8*/])->f_7 = 30.7199f;
}

int func_190(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_459(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_191(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_460(iParam0);
	uVar3 = func_461(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_2 = iParam1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_3 = uVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_380();
				func_462(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_1 = iVar1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_4 = iVar2;
			func_463(iParam0, 1);
			if (func_464(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if ((Global_40.f_4283.f_6[iVar4 /*5*/])->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_465(Global_40.f_4283.f_6[iVar4 /*5*/], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_466(1, iParam0);
				}
				else
				{
					func_467(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_192(var uParam0)
{
	func_468(uParam0);
	func_469(uParam0, 1);
	func_470(uParam0, 1);
	func_471(uParam0, 1);
	func_472(uParam0, 1);
	func_473(uParam0, 1);
	func_474(uParam0, 1);
	func_475(uParam0, 1);
	func_476(uParam0, 0);
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
		if (!func_477((*uParam0)[iVar0 /*3*/]))
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

	Var0 = { func_436(uParam0->f_174) };
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
			uParam0->f_2573 = { func_437(uParam0->f_174) };
		}
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_2573)))
	{
		HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_2573));
	}
}

void func_196(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_478(uParam0, sParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_479(uParam0);
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

int func_197(var uParam0)
{
	return uParam0->f_168;
}

void func_198(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (func_480((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1))
		{
			func_481((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_41[iVar0 /*3*/])->f_2 == 0 || !func_480((uParam0->f_41[iVar0 /*3*/])->f_2, iParam2))
			{
				func_451(uParam0->f_41[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_480((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1))
		{
			func_481((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1);
			if ((uParam0->f_117[iVar0 /*5*/])->f_4 == 0 || !func_480((uParam0->f_117[iVar0 /*5*/])->f_4, iParam2))
			{
				func_452(uParam0->f_117[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_480(((*uParam0)[iVar0 /*3*/])->f_2, iParam1))
		{
			func_481(((*uParam0)[iVar0 /*3*/])->f_2, iParam1);
			if (((*uParam0)[iVar0 /*3*/])->f_2 == 0 || !func_480(((*uParam0)[iVar0 /*3*/])->f_2, iParam2))
			{
				func_453((*uParam0)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_480((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1))
		{
			func_481((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_28[iVar0 /*3*/])->f_2 == 0 || !func_480((uParam0->f_28[iVar0 /*3*/])->f_2, iParam2))
			{
				func_454(uParam0->f_28[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

int func_199(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_44 != -1)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_44 != 0)
		{
			if (!func_482(((*Global_1347702)[iParam0 /*49*/])->f_44))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_200(var uParam0)
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
						*uParam0 = func_483(vVar0.z);
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

void func_201(bool bParam0)
{
	if (!bParam0)
	{
		LAW::_0x61B98367D93F012F(PLAYER::GET_PLAYER_INDEX());
	}
	LAW::_ENABLE_DISPATCH_LAW(bParam0);
	LAW::_ENABLE_DISPATCH_LAW_2(bParam0);
}

void func_202(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_125(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_282(Global_1935630, 4194304);
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

int func_203(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if (func_477(uParam0->f_41[iVar1 /*3*/]))
		{
			if (func_480((uParam0->f_41[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_484(uParam0->f_41[iVar1 /*3*/]))
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
		if (func_485(uParam0->f_117[iVar1 /*5*/]))
		{
			if (func_480((uParam0->f_117[iVar1 /*5*/])->f_4, iParam1))
			{
				if (!func_486(uParam0->f_117[iVar1 /*5*/]))
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
		if (func_487((*uParam0)[iVar1 /*3*/]))
		{
			if (func_480(((*uParam0)[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_488((*uParam0)[iVar1 /*3*/]))
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
		if (func_489(uParam0->f_28[iVar1 /*3*/]))
		{
			if (func_480((uParam0->f_28[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_490(uParam0->f_28[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (iParam1 != 0 && iParam1 != 4)
	{
		if (!func_491(uParam0->f_174))
		{
			iVar0 = 0;
		}
		if (!func_492(uParam0))
		{
			iVar0 = 0;
		}
	}
	if (!func_493(uParam0, iParam1))
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

int func_204()
{
	return Global_1572887->f_12;
}

bool func_205(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

Vector3 func_206(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1637.182f, -1363.268f, 83.4566f;
		case 1:
			return -1638.037f, -1362.747f, 83.4154f;
		case 2:
			return -1649.257f, -1377.159f, 82.964f;
		case 3:
			return -1648.892f, -1379.462f, 82.9681f;
		case 4:
			return -1639.07f, -1361.8f, 83.3963f;
		case 5:
			return -1640.175f, -1349.222f, 82.9645f;
		case 6:
			return -1639.36f, -1361.69f, 83.71f;
		case 7:
			return -1631.63f, -1392.56f, 84.04f;
		case 8:
			return -803.4208f, -1356.068f, 42.6117f;
		case 9:
			return -736.2218f, -1386.159f, 41.6245f;
		case 10:
			return -723.3638f, -1385.355f, 40.6722f;
		case 11:
			return -637.859f, -1351.34f, 40.5f;
		case 12:
			return -724.5291f, -1386.677f, 41.5366f;
		case 13:
			return -725.2875f, -1386.631f, 41.562f;
		case 14:
			return -821.0524f, -1291.958f, 52.5716f;
		case 15:
			return -805.6536f, -1358.234f, 42.6396f;
		case 16:
			return -807.4793f, -1357.832f, 42.6479f;
		case 17:
			return -807.7739f, -1372.539f, 42.6711f;
		case 18:
			return -730.81f, -1385.43f, 40.8644f;
		case 22:
			return -809.6985f, -1374.368f, 43.0233f;
		case 28:
			return -814.4969f, -1375.312f, 43.2283f;
		case 29:
			return -814.5736f, -1374.483f, 43.2267f;
		case 23:
			return -811.2937f, -1372.482f, 43.0233f;
		case 24:
			return -812.2197f, -1374.073f, 43.0233f;
		case 25:
			return -810.098f, -1373.919f, 43.0233f;
		case 26:
			return -812.1721f, -1375.268f, 43.0233f;
		case 27:
			return -811.2576f, -1374.725f, 43.0233f;
		case 30:
			return -811.78f, -1374.95f, 44.95f;
		case 31:
			return -815.8605f, -1374.709f, 44.84257f;
		case 32:
			return -775.6129f, -1360.775f, 42.75766f;
		case 33:
			return -781.2982f, -1359.225f, 43.32217f;
		case 34:
			return -788.04f, -1359.25f, 42.82f;
		case 35:
			return -775.6241f, -1359.99f, 42.75945f;
		case 36:
			return -775.6149f, -1365.964f, 42.75939f;
		case 37:
			return -788.13f, -1360.4f, 42.82f;
		case 38:
			return -791.4093f, -1366.017f, 42.9258f;
		case 39:
			return -806.9867f, -1371.509f, 43.6161f;
		case 40:
			return -793.8678f, -1366.267f, 43.82f;
		case 41:
			return -807.68f, -1370.08f, 42.66f;
		case 42:
			return -793.5728f, -1368.482f, 42.5761f;
		case 43:
			return -793.7359f, -1367.062f, 43.82f;
		case 44:
			return -793.7336f, -1367.057f, 43.82f;
		case 19:
			return -789.8535f, -1362.626f, 43.8223f;
		case 20:
			return -788.7223f, -1362.653f, 43.8178f;
		case 21:
			return -786.8077f, -1363.845f, 43.8532f;
		case 46:
			return -781.0928f, -1364.509f, 42.8066f;
		case 47:
			return -781.1207f, -1363.929f, 42.8095f;
		case 45:
			return -791.1965f, -1366.185f, 42.9258f;
		case 48:
			return -790.1886f, -1366.127f, 42.8223f;
		case 49:
			return -789.5485f, -1365.956f, 42.8223f;
		case 50:
			return -707.9318f, -1404.889f, 45.6842f;
		case 51:
			return -750.8922f, -1382.503f, 42.3781f;
		case 52:
			return -748.9951f, -1384.657f, 42.4745f;
		case 53:
			return -1579.442f, -1406.865f, 80.2726f;
		case 54:
			return -1574.737f, -1406.985f, 80.74561f;
		case 55:
			return -1572.725f, -1406.995f, 80.84593f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_207(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 114.3195f;
		case 1:
			return 292.5111f;
		case 2:
			return 261.1712f;
		case 3:
			return 244.1729f;
		case 4:
			return 0f;
		case 5:
			return 335.7933f;
		case 6:
			return 35.45f;
		case 7:
			return 299.48f;
		case 8:
			return 5.2612f;
		case 10:
			return -94.52f;
		case 11:
			return 305.7476f;
		case 12:
			return 358.8398f;
		case 13:
			return -125.71f;
		case 15:
			return 180f;
		case 16:
			return 180f;
		case 17:
			return 162.6791f;
		case 18:
			return 302.2727f;
		case 28:
			return 275.2018f;
		case 29:
			return 250.2108f;
		case 23:
			return 181.3684f;
		case 24:
			return 330.8595f;
		case 25:
			return 20.5591f;
		case 26:
			return 96.5592f;
		case 27:
			return 93.7275f;
		case 32:
			return -88.74f;
		case 33:
			return -88.74f;
		case 34:
			return 173.17f;
		case 35:
			return -88.74f;
		case 36:
			return -88.74f;
		case 37:
			return 2.31f;
		case 38:
			return 4f;
		case 39:
			return 342.7454f;
		case 40:
			return 85.42f;
		case 41:
			return 342.8164f;
		case 43:
			return -75.12f;
		case 44:
			return -74.23f;
		case 19:
			return -90.36f;
		case 20:
			return 98.1846f;
		case 21:
			return 93.76f;
		case 46:
			return 272.1589f;
		case 47:
			return 282.989f;
		case 48:
			return 87.7667f;
		case 49:
			return 50f;
		case 51:
			return 276f;
		case 52:
			return 268.876f;
		case 50:
			return 268.876f;
		case 53:
			return 310.824f;
		case 54:
			return 34.8236f;
		case 55:
			return 30.2401f;
		default:
			break;
	}
	return 0f;
	return 0f;
}

int func_208(vector3 vParam0, var uParam3)
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
	iVar0 = func_494(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_495(0, 0);
		if (func_496(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_497(1, 0);
		}
	}
	else
	{
		func_497(1, 0);
	}
	func_154(0);
	func_498(0, vParam0, uParam3);
	return 1;
}

int func_209(int iParam0)
{
	if (func_438(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

int func_210(var uParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;

	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!func_499(iParam1, 207))
		{
			func_500(uParam0);
			return 1;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, Global_35, 1, 1))
		{
			func_500(uParam0);
			return 1;
		}
		else
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
			fVar3 = 10f;
			if (FIRE::IS_EXPLOSION_ACTIVE_IN_AREA(-1, vVar0 - Vector(fVar3, fVar3, fVar3), vVar0 + Vector(fVar3, fVar3, fVar3)))
			{
				func_500(uParam0);
				return 1;
			}
		}
	}
	return 0;
}

int func_211(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_501(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

void func_212(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_213(var uParam0)
{
	if (!func_79(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_269(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_502() - uParam0->f_1);
}

int func_214(int iParam0, int iParam1, float fParam2, bool bParam3)
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

float func_215(var uParam0)
{
	if (!func_79(uParam0))
	{
		return 0f;
	}
	if (func_269(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_502() - uParam0->f_1);
}

int func_216(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_503(bParam1, iParam2, iParam3);
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

int func_217(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_504(((*Global_1347702)[iParam0 /*49*/])->f_15) != 0)
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

int func_218(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_505(0);
	if (iVar0 == 11)
	{
		iVar1 = func_506(func_112(iParam1), 1);
		if (iVar1 != -589165916)
		{
			if ((iVar1 == -103573613 || iVar1 == 194099983) || iVar1 == 2038046186)
			{
				iVar2 = func_507(Global_40.f_4283);
				if (func_377(iVar2) && iVar2 == ((*Global_1347702)[uParam0->f_174 /*49*/])->f_27)
				{
					return 1;
				}
			}
		}
	}
	else if (iVar0 == 4)
	{
		iVar3 = func_508(iParam1);
		if (iVar3 != -1)
		{
			if ((iVar3 == 1 || iVar3 == 3) || iVar3 == 2)
			{
				if (func_377(Global_1894899->f_2) && Global_1894899->f_2 == func_507(Global_40.f_4283))
				{
					return 1;
				}
			}
		}
	}
	if (func_509(uParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_219(int iParam0)
{
	int iVar0;
	int iVar1;

	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 8 != 0)
	{
		return 1;
	}
	if (func_510(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		if (!func_510(((*Global_1835011)[44 /*74*/])->f_1, 1))
		{
			if (iParam0 != 82 && iParam0 != 83)
			{
				return 1;
			}
		}
		if (func_510(((*Global_1835011)[67 /*74*/])->f_1, 1))
		{
			if ((!func_510(((*Global_1347702)[8 /*49*/])->f_15, 1) && !func_510(((*Global_1835011)[69 /*74*/])->f_1, 1)) && iParam0 != 8)
			{
				if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1835011)[67 /*74*/])->f_22)) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(((*Global_1835011)[67 /*74*/])->f_22))) > 0)
				{
					return 1;
				}
			}
		}
	}
	else if ((!func_511(2) && !func_510(((*Global_1347702)[61 /*49*/])->f_15, 1)) && func_510(((*Global_1347702)[59 /*49*/])->f_15, 1))
	{
		if (iParam0 != 60 && iParam0 != 61)
		{
			return 1;
		}
	}
	if (iParam0 == 15)
	{
		iVar1 = func_514(func_512(65536), 0, 3, func_513(65536));
		if (func_57(iVar1))
		{
			iVar0 = func_504(iVar1);
			if (!func_515(iVar0, 4))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 26 || iParam0 == 27)
	{
		if (((((!func_510(((*Global_1835011)[14 /*74*/])->f_1, 1) && func_510(((*Global_1347702)[62 /*49*/])->f_15, 1)) && func_510(((*Global_1347702)[0 /*49*/])->f_15, 1)) && func_510(((*Global_1347702)[94 /*49*/])->f_15, 1)) && func_510(((*Global_1835011)[25 /*74*/])->f_1, 1)) && (func_510(((*Global_1835011)[8 /*74*/])->f_1, 1) || (func_510(((*Global_1347702)[98 /*49*/])->f_15, 1) && func_504(((*Global_1347702)[98 /*49*/])->f_15) == 0)))
		{
			return 1;
		}
	}
	else if (iParam0 == 27)
	{
		if (!func_510(((*Global_1835011)[34 /*74*/])->f_1, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 42)
	{
		if (!func_510(((*Global_1347702)[41 /*49*/])->f_15, 1))
		{
			if (!func_516(8))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 51)
	{
		if (!func_517(2))
		{
			return 1;
		}
	}
	else if (iParam0 == 52)
	{
		if (!func_510(((*Global_1347702)[51 /*49*/])->f_15, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 57)
	{
		if (func_279(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 69 || iParam0 == 70)
	{
		if (func_518(((*Global_1347702)[iParam0 /*49*/])->f_15) == 0)
		{
			if (func_519() <= 160)
			{
				return 1;
			}
			else
			{
				func_520(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
			}
		}
		if (!func_521(68))
		{
			return 1;
		}
	}
	else if (iParam0 == 77)
	{
		if (func_279(((*Global_1835011)[47 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_279(((*Global_1835011)[45 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_522(16, 0))
		{
			return 1;
		}
	}
	else if (iParam0 == 87)
	{
		if (func_279(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 95)
	{
		if (func_279(((*Global_1835011)[20 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_279(((*Global_1835011)[21 /*74*/])->f_1))
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
		else if (!SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[113 /*49*/])->f_42, false) && func_523())
		{
			if (func_395("MUDTOWN32_altobj", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
			{
				func_179(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 262144);
				func_220(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 64);
				func_128(113, 1, 0, 1, 1, 1, 0);
				return 1;
			}
		}
	}
	else if (iParam0 == 99)
	{
		if (func_190(-404697685, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 117)
	{
		if (func_279(((*Global_1835011)[69 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 136)
	{
		if (func_279(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_220(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_221(int iParam0)
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

int func_222(int iParam0)
{
	if (!func_377(iParam0))
	{
		return 0;
	}
	return func_378(iParam0, 33554432);
}

int func_223(int iParam0)
{
	if (!func_377(iParam0))
	{
		return 0;
	}
	return func_378(iParam0, 67108864);
}

var func_224()
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

bool func_225(int iParam0, int iParam1)
{
	return func_524(iParam0, iParam1);
}

int func_226(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (func_216(iParam0, bParam1, iParam2, iParam3))
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

int func_227(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
				else if (!func_439(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])))
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
			else if (!func_527(func_209(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])), -1f, 10f, 1, 1, 40f))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_228(var uParam0)
{
	return 0;
}

int func_229(int iParam0, float fParam1)
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

int func_230(var uParam0)
{
	return 0;
}

int func_231(float fParam0)
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

void func_232()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_438(iVar0) && func_439(iVar0))
		{
			func_528(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_80(&(Global_1359489->f_40), 1);
}

void func_233(var uParam0)
{
	func_431(uParam0);
}

void func_234(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_273(iParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_274(iParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(iVar0, func_274(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_274(iParam0)))
			{
				UILOG::_UILOG_REMOVE_ENTRY(2, func_274(iParam0));
			}
		}
	}
	func_121(iParam0, 4);
	func_121(iParam0, 8);
	func_121(iParam0, 16);
}

void func_235(int iParam0)
{
	Global_36579 = iParam0;
}

void func_236(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_237(int iParam0)
{
	func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			func_242(iParam0, func_69(iParam0), 1, 0);
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

void func_238(var uParam0)
{
	if (func_530(uParam0->f_174))
	{
		func_531(262144, 5, 0, 1);
		func_532(720f, 1, 0);
	}
}

void func_239(int iParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_fishingrod"), 0, 0))
	{
		return;
	}
	Global_1900073->f_18 = iParam0;
}

void func_240(var uParam0)
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

float func_241(int iParam0)
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

void func_242(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;

	if (!func_205(iParam0))
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
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::BLIP_ADD_FOR_RADIUS(((*Global_1347702)[iParam0 /*49*/])->f_38, func_428(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_18);
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
	if (func_204() == -1)
	{
		func_536(iParam0);
		iVar0 = func_507(Global_40.f_4283);
		if (func_377(iVar0) && func_537(((*Global_1888801)[iVar0 /*35*/])->f_13))
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
				func_336(185, 0);
			}
			else
			{
				func_336(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = ((*Global_1347702)[iParam0 /*49*/])->f_37;
			((*Global_1347702)[iParam0 /*49*/])->f_40 = func_342(MISC::_CREATE_VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_275(iParam0, 2);
	}
}

void func_243(int iParam0, float fParam1)
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

void func_244(int iParam0, vector3 vParam1, float fParam4)
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
		func_242(iParam0, vParam1, 1, 0);
	}
}

void func_245(int iParam0)
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

void func_246(int iParam0)
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

void func_247(var uParam0)
{
	if (func_6(uParam0->f_172, 16))
	{
		func_102(uParam0, 0);
		func_87(uParam0);
	}
}

int func_248(var uParam0)
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

struct<8> func_249()
{
	char cVar0[64];

	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

struct<8> func_250(var uParam0)
{
	return uParam0->f_350;
}

void func_251(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_547(uParam0) };
	func_548(uParam0, &Var0);
}

void func_252(var uParam0, char* sParam1)
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

int func_253(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_254(var uParam0)
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

int func_255(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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
		if (!func_253(func_554(uParam0)))
		{
			func_550(uParam0, 64);
		}
		else
		{
			vVar0 = { func_555(uParam0) };
			if (!func_253(vVar0))
			{
				func_556(uParam0, vVar0);
			}
		}
		return 0;
	}
	fVar3 = func_557(Global_35, func_554(uParam0), 1);
	if (func_552(uParam0, 128) || func_552(uParam0, 256))
	{
		if ((fVar3 >= func_558(uParam0) && !bParam2) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
		{
			if (uParam0->f_433)
			{
				func_559();
				uParam0->f_433 = 0;
			}
			func_560(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
			}
			func_338(uParam0);
			func_549(uParam0, 128, 1);
			func_549(uParam0, 256, 1);
			func_549(uParam0, 4096, 1);
			func_549(uParam0, 32768, 1);
			func_549(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_561(uParam0) || bParam2)
	{
		if (!func_552(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
			{
				if (func_561(uParam0) >= func_558(uParam0))
				{
				}
				Var4 = { func_250(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_562(uParam0);
				}
				Var4 = { func_250(uParam0) };
				iVar12 = 256;
				if (!func_552(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_348 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_344), iVar12, &Var4, false, true);
				func_563(uParam0, 0, 0, 0, 0);
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
		func_564(uParam0);
		if (!uParam0->f_433)
		{
			if (func_565())
			{
				func_566(4096);
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

void func_256(var uParam0)
{
}

bool func_257(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

int func_258(var uParam0, char* sParam1, int iParam2)
{
	if (func_257(sParam1, 2))
	{
		return 0;
	}
	if (func_257(sParam1, 1))
	{
		return 0;
	}
	if (iParam2 < sParam1->f_11 || iParam2 > sParam1->f_13)
	{
		return 0;
	}
	if ((func_567(sParam1) == 9 || func_567(sParam1) == 12) || func_567(sParam1) == 13)
	{
		if (!func_257(sParam1, 8))
		{
			if (iParam2 == sParam1->f_11)
			{
				func_568(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return 1;
		}
	}
	if (iParam2 >= sParam1->f_11)
	{
		return func_569(uParam0, func_567(sParam1));
	}
	return 0;
}

void func_259(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::START_AUDIO_SCENE(sParam0);
	}
	func_568(sParam0, 1);
}

int func_260(var uParam0, char* sParam1, int iParam2)
{
	if (!func_257(sParam1, 1))
	{
		return 0;
	}
	if (func_257(sParam1, 2))
	{
		return 0;
	}
	if (iParam2 > sParam1->f_13)
	{
		return 1;
	}
	if ((func_570(sParam1) == 9 || func_570(sParam1) == 12) || func_570(sParam1) == 13)
	{
		if (!func_257(sParam1, 8))
		{
			if (iParam2 == sParam1->f_13)
			{
				func_568(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return 1;
		}
	}
	if (iParam2 >= sParam1->f_13)
	{
		return func_569(uParam0, func_570(sParam1));
	}
	return 0;
}

void func_261(char* sParam0)
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
	func_568(sParam0, 2);
}

int func_262(var uParam0, char* sParam1, int iParam2)
{
	if (func_257(sParam1, 1))
	{
		return 0;
	}
	if (func_567(sParam1) == 2)
	{
		return uParam0->f_177 == 2;
	}
	if (func_567(sParam1) == 0)
	{
		if (uParam0->f_177 == 6 && func_571(uParam0) == -1)
		{
			return 1;
		}
	}
	if (sParam1->f_11 != iParam2)
	{
		if (((func_567(sParam1) == 9 || func_567(sParam1) == 12) || func_567(sParam1) == 13) && func_257(sParam1, 8))
		{
			return 1;
		}
		return 0;
	}
	switch (func_567(sParam1))
	{
		case 0:
			return uParam0->f_177 == 6;
		case 4:
			return func_348(&(uParam0->f_753));
		case 1:
		case 10:
		case 11:
			return uParam0->f_177 == 7;
		case 9:
		case 12:
		case 13:
			if (!func_257(sParam1, 8))
			{
				func_568(sParam1, 8);
			}
			break;
	}
	return 0;
}

void func_263(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::_0x2B9C37C01BF25EDB(sParam0);
	}
	func_568(sParam0, 1);
}

int func_264(char* sParam0, bool bParam1)
{
	if (func_257(sParam0, 1))
	{
		return 0;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		AUDIO::PREPARE_MUSIC_EVENT(sParam0);
		func_568(sParam0, 1);
		return 1;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_568(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_568(sParam0, 1);
			return 0;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_568(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_568(sParam0, 1);
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
		func_568(sParam0, 1);
		return 1;
	}
	func_568(sParam0, 1);
	return 0;
}

void func_265(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_482)
	{
		if ((func_257(uParam0->f_482[iVar0 /*16*/], 1048576) && func_257(uParam0->f_482[iVar0 /*16*/], 4)) && !func_257(uParam0->f_482[iVar0 /*16*/], 1))
		{
			AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_482[iVar0 /*16*/]);
			return;
		}
		iVar0++;
	}
}

int func_266(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
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
		if (!func_572(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_573(uParam0, 0))
			{
				if (func_574(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_575(uParam0, 1, &iVar0))
					{
					}
					if (func_576(uParam0, 3, &cVar2))
					{
					}
					if (func_575(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_575(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_575(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_575(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_575(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 15 && uParam0->f_785 < 15)
						{
							if (!func_577(uParam0, &cVar2, uParam0->f_785))
							{
								*((*uParam0)[uParam0->f_785 /*16*/]) = { cVar2 };
								func_568((*uParam0)[uParam0->f_785 /*16*/], 1048576);
								uParam0->f_785++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 15 && uParam0->f_786 < 15)
						{
							*(uParam0->f_241[uParam0->f_786 /*16*/]) = { cVar2 };
							func_568(uParam0->f_241[uParam0->f_786 /*16*/], 1048576);
							uParam0->f_786++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 16 && uParam0->f_787 < 16)
						{
							*(uParam0->f_482[uParam0->f_787 /*16*/]) = { cVar2 };
							func_568(uParam0->f_482[uParam0->f_787 /*16*/], 1048576);
							if (!bVar19 && func_257(&cVar2, 4))
							{
								AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_482[uParam0->f_787 /*16*/]);
								bVar19 = true;
							}
							uParam0->f_787++;
						}
					}
					else if (iVar0 < 2 && uParam0->f_788 < 2)
					{
						if (!func_577(&(uParam0->f_739), &cVar2, uParam0->f_788))
						{
							*(uParam0->f_739[uParam0->f_788 /*16*/]) = { cVar2 };
							func_568(uParam0->f_739[uParam0->f_788 /*16*/], 1048576);
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
			if (func_573(uParam0, 12))
			{
				if (func_575(uParam0, 13, &iVar0))
				{
				}
				if (func_575(uParam0, 14, &iVar1))
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
		func_578(uParam0);
	}
	return 1;
}

bool func_267(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_268(var uParam0)
{
	func_579(uParam0, 0f);
}

bool func_269(var uParam0)
{
	return func_267(*uParam0, 2);
}

int func_270()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_271(var uParam0)
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
		func_580(vVar0, 2.5f, 1, 0, 0, 0, 0);
		_NAMESPACE49::_0x9D16896F0DBE78A2(vVar0, 2.5f);
		if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 524288))
		{
			((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = func_581(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, vVar0, 0, 1, 1, 0, 1, 1, 0, 1, 1);
		}
		else
		{
			((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = func_581(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, vVar0, 0, 1, 1, 0, 1, 1, 1, 1, 0);
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

int func_272(var uParam0)
{
	int iVar0;

	if (!iLocal_135)
	{
		iVar0 = 1;
		if (!func_303(uParam0))
		{
			iVar0 = 0;
		}
		if (!func_32(uParam0, 64) || func_299(uParam0))
		{
			if ((!func_582() || !func_583(uParam0)) || !func_584())
			{
				iVar0 = 0;
			}
		}
		if (iVar0 == 0)
		{
			return 0;
		}
	}
	if (!AUDIO::_0xD9130842D7226045("ABIGAIL_3_SOUNDSET", 0))
	{
		return 0;
	}
	iLocal_135 = 1;
	func_585(uParam0);
	if (iLocal_49 < 2)
	{
		return 0;
	}
	func_432("nav_mesh_beech_abigail3");
	func_586(937);
	func_586(935);
	func_587(uParam0, Global_35, "JOHN", 1);
	func_588(1606546482, 0, 0f, 0, 0, 0, 0, 0);
	return 1;
}

int func_273(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0 || ((*Global_1347702)[iParam0 /*49*/])->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_274(int iParam0)
{
	var uVar0;

	uVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_3;
	return MISC::GET_HASH_KEY(&uVar0);
}

void func_275(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

void func_276(int iParam0)
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
	uVar10 = func_589(iParam0, 0);
	iVar11 = uVar10;
	iVar12 = uVar10;
	if (iParam0 == 82 || iParam0 == 83)
	{
		iVar12 = MISC::GET_HASH_KEY("LAW_UI_DUTCH_GANG");
	}
	MemCopy(&cVar0, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 8);
	StringConCat(&cVar0, "_DESC", 64);
	iVar13 = func_273(iParam0);
	UILOG::_UILOG_ADD_ENTRY_HASH(iVar13, func_274(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_24, iVar12, MISC::GET_HASH_KEY(&cVar0), ((*Global_1347702)[iParam0 /*49*/])->f_37);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar13, func_274(iParam0), iVar11, MISC::GET_HASH_KEY("toast_log_blips"));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar8) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar9))
	{
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(iVar13, func_274(iParam0), MISC::GET_HASH_KEY(sVar8), MISC::GET_HASH_KEY(sVar9));
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar13, func_274(iParam0)))
	{
		func_275(iParam0, 4);
	}
}

void func_277(int iParam0)
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
		cVar3 = func_590(0, &Var1, 0, 0, -1, -1);
		func_591(iParam0, &Var1, cVar3, -1082130432);
	}
}

void func_278(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_205(iVar0) && Global_1347702[iVar0 /*49*/] == iParam0)
		{
			bVar1 = true;
			func_234(iVar0, 1);
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

int func_279(int iParam0)
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
		iVar0 = func_420(iParam0);
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

void func_280(int iParam0, bool bParam1)
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
	func_424(iParam0, 1);
	bParam1 = bParam1;
}

void func_281(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_57(iParam0))
	{
		return;
	}
	if (!func_279(iParam0))
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
				func_592(func_111(iParam0));
			}
			if (func_204() != 0)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_109(iParam0), 0);
			}
			else
			{
				STATS::STATSTRACKER_DEED_STARTED(func_109(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_593(iParam0);
	if (!func_57(func_56(0)))
	{
		func_424(iParam0, 3);
		func_202(bParam2);
		if (func_204() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
			}
			func_423(1);
		}
		func_594(iParam0, -1);
		if (bParam1 && !func_60(2))
		{
			func_595(&Global_0, 1024);
		}
		if (func_204() == -1)
		{
			func_596(&(Global_1347343->f_11), 536870912);
			func_597(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_598(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_599(0);
			}
		}
		if (func_204() == -1)
		{
			iVar1 = func_446(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_448();
				switch (iVar1)
				{
					case 0:
						func_600(0);
						break;
					case 1:
						func_600(1);
						break;
					case 2:
						func_600(2);
						break;
					case 3:
						func_600(3);
						break;
					case 4:
						func_600(4);
						break;
					case 5:
						func_600(5);
						break;
					case 6:
						func_600(5);
						break;
					case 7:
						func_600(7);
						break;
					case 8:
						func_600(8);
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
						func_600(11);
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
						func_600(11);
						break;
					default:
						iVar1 = func_448();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_601(0);
									break;
								case 1:
									func_601(1);
									break;
								case 2:
									func_601(2);
									break;
								case 3:
									func_601(3);
									break;
								case 4:
									func_601(4);
									break;
								case 5:
									func_601(5);
									break;
								case 6:
									func_601(5);
									break;
								case 7:
									func_601(7);
									break;
								case 8:
									func_601(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_427(1);
	}
	else
	{
		func_594(iParam0, -1);
		func_424(iParam0, 4);
	}
	func_449(iParam0, 0);
}

void func_282(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_283(var uParam0)
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

void func_284(bool bParam0, int iParam1, bool bParam2)
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

void func_285()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_438(iVar0))
		{
			func_528(iVar0, 30, 1);
		}
		iVar0++;
	}
}

void func_286(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_510(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return;
	}
	else if (func_510(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return;
	}
	if (((((((((((((((uParam0->f_174 == 29 || uParam0->f_174 == 56) || uParam0->f_174 == 57) || uParam0->f_174 == 72) || uParam0->f_174 == 84) || uParam0->f_174 == 85) || uParam0->f_174 == 86) || uParam0->f_174 == 87) || uParam0->f_174 == 88) || uParam0->f_174 == 92) || uParam0->f_174 == 111) || uParam0->f_174 == 102) || uParam0->f_174 == 117) || uParam0->f_174 == 122) || uParam0->f_174 == 149) || uParam0->f_174 == 150)
	{
		iVar0 = 100;
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_revolver_cattleman"), 0, 0))
		{
			if (!func_602(joaat("weapon_revolver_cattleman")))
			{
				func_603(joaat("weapon_revolver_cattleman"));
			}
			func_604(Global_35, joaat("weapon_revolver_cattleman"), 0, 0, 2, 1, 0, 1056964608, 1065353216, iVar0, 0, 0, 0, 0);
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

void func_287(bool bParam0)
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
	func_605(0f);
	Global_1935436->f_11 = 1;
	if (func_396())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_606();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_288(var uParam0)
{
}

int func_289(var uParam0)
{
	if (uParam0->f_174 == func_19())
	{
		return 1;
	}
	return 0;
}

void func_290(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10, bool bParam11)
{
	struct<4> Var0;
	struct<4> Var4;

	if (uParam0->f_752 != iParam9)
	{
		if (uParam0->f_752 > -1)
		{
			func_607(uParam0);
		}
		uParam0->f_752 = iParam9;
		func_608(uParam0);
	}
	if (func_32(uParam0, 128) && func_29())
	{
		func_156(0);
		bParam11 = true;
	}
	if (!bParam11)
	{
		if ((func_296() == iParam9 && func_609() == iParam10) && !func_610(*Global_1347394, 0f, 0f, 0f))
		{
			return;
		}
	}
	if (func_296() != iParam9 && !func_610(*Global_1347394, 0f, 0f, 0f))
	{
		func_153(0);
	}
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_611(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, Var0, Var4, iParam9, iParam10);
}

void func_291(var uParam0, int iParam1)
{
	if (iParam1 != iLocal_50)
	{
		StringCopy(&(uParam0->f_2575), func_612(iParam1), 24);
		iLocal_50 = iParam1;
		switch (iLocal_50)
		{
			case 1:
				func_613(uParam0, func_206(1));
				func_550(&(uParam0->f_206), -2147483648);
				func_614(&(uParam0->f_206), -1645.325f, -1341.159f, 82.9685f, 244.7168f, 0);
				func_548(&(uParam0->f_206), "NormalStart");
				func_615(uParam0, Global_35, 0, 0, 0, 0);
				func_615(uParam0, iLocal_67, 0, 0, 0, 0);
				func_615(uParam0, iLocal_73, 0, 0, 0, 0);
				func_615(uParam0, iLocal_90, 0, 0, 0, 0);
				func_617(uParam0, 103030/*func_616*/);
				break;
			case 2:
				func_613(uParam0, func_206(8));
				func_615(uParam0, Global_35, 0, 0, 0, 0);
				func_615(uParam0, iLocal_67, 0, 0, 0, 0);
				func_615(uParam0, iLocal_124, "wagon02x", 0, 0, 0);
				func_615(uParam0, iLocal_91, "s_inv_ring02x", 0, 0, 0);
				func_615(uParam0, &(iLocal_125[0]), "Horse01^1", 0, 0, 0);
				func_615(uParam0, &(iLocal_125[1]), "Horse01", 0, 0, 0);
				func_615(uParam0, iLocal_79, "RCES_ABIGAIL3_FEMALES_01", 0, 0, 0);
				func_615(uParam0, iLocal_80, "RCES_ABIGAIL3_FEMALES_01^1", 0, 0, 0);
				func_615(uParam0, iLocal_78, "RCES_ABIGAIL3_MALES_01", 0, 0, 0);
				func_548(&(uParam0->f_206), "2. Backward_facing_wagon");
				func_550(&(uParam0->f_206), 134217728);
				func_617(uParam0, 103030/*func_616*/);
				break;
			case 3:
				func_613(uParam0, func_206(23));
				if (!func_302())
				{
					func_618(uParam0, &(uParam0->f_2575), 1);
					func_619(&(uParam0->f_753), Global_35, 0, 0);
					func_619(&(uParam0->f_753), iLocal_67, 0, 0);
					func_619(&(uParam0->f_753), iLocal_70, "Photographer", 0);
					func_619(&(uParam0->f_753), iLocal_94, "P_CAMERABOX01X", 0);
					func_619(&(uParam0->f_753), iLocal_95, "P_SCREWDRIVER01X", 0);
				}
				func_615(uParam0, Global_35, 0, 0, 0, 0);
				func_615(uParam0, iLocal_67, 0, 0, 0, 0);
				func_615(uParam0, iLocal_70, "Photographer", 0, 0, 0);
				func_615(uParam0, iLocal_94, "P_CAMERABOX01X", 0, 0, 0);
				func_615(uParam0, iLocal_95, "P_SCREWDRIVER01X", 0, 0, 0);
				func_615(uParam0, iLocal_97, "P_STUDIOCAMERA01X", 0, 0, 0);
				func_562(&(uParam0->f_206));
				func_617(uParam0, 103030/*func_616*/);
				break;
			case 4:
				func_613(uParam0, func_206(22));
				func_615(uParam0, Global_35, 0, 0, 0, 0);
				func_615(uParam0, iLocal_67, 0, 0, 0, 0);
				func_615(uParam0, iLocal_70, "Photographer", 0, 0, 0);
				func_615(uParam0, iLocal_97, "P_STUDIOCAMERA01X", 0, 0, 0);
				func_615(uParam0, &(iLocal_104[0]), "p_chair12bx", 0, 0, 0);
				func_615(uParam0, &(iLocal_104[1]), "p_chair12bx^1", 0, 0, 0);
				func_615(uParam0, &(iLocal_107[0]), "p_cs_billSingle01x", 0, 0, 0);
				func_615(uParam0, &(iLocal_107[1]), "p_cs_billSingle01x^1", 0, 0, 0);
				func_615(uParam0, iLocal_110, "P_CS_PHOTO_4X6", 0, 0, 0);
				func_251(&(uParam0->f_206));
				func_617(uParam0, 103030/*func_616*/);
				break;
			case 5:
				func_613(uParam0, func_206(11));
				func_615(uParam0, Global_35, 0, 0, 0, 0);
				func_615(uParam0, iLocal_67, 0, 0, 0, 0);
				func_615(uParam0, iLocal_128, "rowboat", 0, 0, 0);
				func_615(uParam0, iLocal_91, "s_inv_ring02x", 0, 0, 0);
				func_548(&(uParam0->f_206), "NormalStart");
				func_550(&(uParam0->f_206), 134217728);
				func_620(&(uParam0->f_206.f_404), 256);
				if (!func_302())
				{
					func_550(&(uParam0->f_206), 16384);
				}
				func_550(&(uParam0->f_206), 524288);
				func_617(uParam0, 103030/*func_616*/);
				break;
			case 6:
				func_251(&(uParam0->f_206));
				func_615(uParam0, Global_35, 0, 0, 0, 0);
				func_615(uParam0, iLocal_67, 0, 0, 0, 0);
				func_617(uParam0, 103030/*func_616*/);
				func_622(uParam0, 105060/*func_621*/);
				break;
		}
		func_1(&(uParam0->f_172), 16);
	}
}

void func_292()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_67))
	{
		switch (iLocal_51)
		{
			case 1:
				break;
			case 3:
				break;
			case 6:
				break;
			case 7:
				break;
			case 5:
				break;
		}
	}
}

void func_293(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iLocal_67))
	{
		return;
	}
	if (iLocal_51 != iParam0)
	{
		iLocal_51 = iParam0;
	}
	else if (iParam1 && iLocal_51 == iParam0)
	{
	}
	else
	{
		return;
	}
	if (iLocal_155)
	{
		iLocal_155 = 0;
	}
	switch (iLocal_51)
	{
		case 0:
			break;
		case 4:
			if (!iLocal_155)
			{
				func_623();
				iLocal_155 = 1;
			}
			break;
		case 3:
			break;
		case 5:
			break;
		case 1:
			break;
		case 2:
			TASK::CLEAR_PED_TASKS(iLocal_67, 1, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_67, Global_35, -1, -1f, func_624(30f), -1082130432);
			break;
		case 7:
			if (PED::IS_PED_HEADTRACKING_PED(iLocal_67, Global_35))
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_67);
			}
			break;
		case 8:
			TASK::CLEAR_PED_TASKS(iLocal_67, 1, 0);
			TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_67, 0, 0);
			break;
		case 9:
			break;
		case 10:
			PED::SET_PED_CONFIG_FLAG(iLocal_67, 3, false);
			break;
		case 11:
			TASK::CLEAR_PED_TASKS(iLocal_67, 1, 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_206(25), 1.1f, -1, 0.25f, false, 40000f);
			TASK::TASK_ACHIEVE_HEADING(0, func_207(25), 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 12:
			TASK::CLEAR_PED_TASKS(iLocal_67, 1, 0);
			TASK::TASK_LOOK_AT_COORD(iLocal_67, -810.44f, -1374.727f, 44.8652f, -1, 0, 51, 0);
			break;
		case 13:
		case 14:
			break;
		case 15:
			break;
	}
}

int func_294(var uParam0)
{
	if (func_585(uParam0))
	{
		return 1;
	}
	if (iLocal_49 >= 4)
	{
		if (ANIMSCENE::_0xD8254CB2C586412B(&(Local_1641[1 /*5*/]), 0) || ANIMSCENE::_0xCDC5512A407CF08D(&(Local_1641[1 /*5*/])))
		{
			if (iLocal_136)
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RABI3");
				iLocal_136 = 0;
			}
			return 1;
			iLocal_49 = 5;
		}
	}
	if (iLocal_49 >= 4)
	{
		if (func_625(Global_35, iLocal_256, 0, 1) && func_626(Global_35, 1))
		{
			bLocal_167 = true;
		}
		if (bLocal_167)
		{
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			func_67(1, 0);
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_73, 1835780023))
			{
				if (iLocal_136)
				{
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RABI3");
					iLocal_136 = 0;
				}
				return 1;
				iLocal_49 = 5;
			}
		}
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
				func_363(0, 1, 1, 1);
				uParam0->f_171 = 1;
			}
			else
			{
				return 1;
			}
			break;
		case 1:
			func_363(0, 1, 1, 1);
			if (func_627(Global_35, &(uParam0->f_747), 0, 0, 0, 1084227584, 100, 0, 0))
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

void func_297(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	func_628(iParam0, iParam1, bParam2, fParam3);
}

void func_298(var uParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
{
	struct<16> Var0;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	*uParam0 = { vParam1 };
	uParam0->f_3 = fParam4;
	uParam0->f_4 = bParam5;
	uParam0->f_5 = bParam6;
	uParam0->f_6 = iParam9;
	uParam0->f_7 = iParam10;
	uParam0->f_8 = iParam12;
	if (func_204() != -1)
	{
		func_629(!bParam5);
		func_630(!bParam6);
		func_631(vParam1, fParam4, 1);
		Var0.f_12 = 255;
		Var0.f_13 = 255;
		Var0.f_3 = 51;
		func_633(Var0, func_632(0, 15), 0, 0);
		return;
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
		{
			return;
		}
		CAM::DO_SCREEN_FADE_OUT(0);
		func_634(1);
		iVar16 = func_184(vParam1, 1);
		if (bParam8)
		{
			if ((func_379(iVar16) == 1 || func_379(iVar16) == 2) || iVar16 == func_507(Global_40.f_4283))
			{
				func_300(0);
			}
		}
		if (!bParam7)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 1, 1);
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
			}
		}
		if (bParam11)
		{
			iVar17 = ITEMSET::CREATE_ITEMSET(true);
			iVar18 = 0;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar17);
			iVar19 = 0;
			iVar19 = 0;
			while (iVar19 < ITEMSET::GET_ITEMSET_SIZE(iVar17))
			{
				iVar20 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar19, iVar17);
				iVar21 = MISC::_GET_ENTITY_FROM_ITEM(iVar20);
				if (ENTITY::DOES_ENTITY_EXIST(iVar21))
				{
					PED::_0xED00D72F81CF7278(iVar21, 0, 1);
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar21))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar21, true, true);
					}
					ENTITY::DELETE_ENTITY(&iVar21);
					iVar18 = 1;
				}
				iVar19++;
			}
			if (iVar18 && !ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
				PED::_0x2208438012482A1A(Global_35, false, false);
			}
			ITEMSET::DESTROY_ITEMSET(iVar17);
		}
		PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vParam1, fParam4, 1, 1, 0, 0);
	}
}

int func_299(var uParam0)
{
	if (func_32(uParam0, 64) && func_32(uParam0, 128))
	{
		return 1;
	}
	return 0;
}

void func_300(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (Global_43890)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_635(Global_35, iVar0, 0, 1);
		if (WEAPON::IS_WEAPON_VALID(iVar1))
		{
			if (WEAPON::_0x0556E9D2ECF39D01(iVar1) || func_636(iVar1))
			{
				if (!bParam0 || (iVar0 != 7 && iVar0 != 9))
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar1);
				}
			}
		}
		iVar0++;
	}
}

int func_301(var uParam0)
{
	int iVar0;

	if (func_204() != -1)
	{
		return 1;
	}
	if (uParam0->f_12 == 0)
	{
		uParam0->f_12 = MISC::GET_GAME_TIMER();
	}
	iVar0 = func_184(*uParam0, 1);
	if (func_377(iVar0))
	{
		if (((*Global_1888801)[iVar0 /*35*/])->f_12 != 0)
		{
			PED::SET_SCENARIO_PED_DENSITY_THIS_FRAME(((*Global_1888801)[iVar0 /*35*/])->f_12);
		}
	}
	if (!PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::PLAYER_ID()))
	{
		if (uParam0->f_12 + 20000 < MISC::GET_GAME_TIMER())
		{
			PLAYER::STOP_PLAYER_TELEPORT();
		}
		return 0;
	}
	if (uParam0->f_5)
	{
		func_637(1, 0);
		uParam0->f_5 = 0;
	}
	func_638();
	if (uParam0->f_10 == 0)
	{
		uParam0->f_10 = MISC::GET_GAME_TIMER();
	}
	if (uParam0->f_10 + 1000 > MISC::GET_GAME_TIMER())
	{
		return 0;
	}
	switch (func_379(iVar0))
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 8:
		case 9:
			if (!func_639(iVar0) && uParam0->f_10 + 20000 + 1000 > MISC::GET_GAME_TIMER())
			{
				return 0;
			}
			if (uParam0->f_11 == 0)
			{
				uParam0->f_11 = MISC::GET_GAME_TIMER();
			}
			if (uParam0->f_11 + 1000 > MISC::GET_GAME_TIMER())
			{
				return 0;
			}
			break;
	}
	if (uParam0->f_8 && !uParam0->f_9)
	{
		TASK::_0x4161648394262FDF(Global_36, 60f);
		PED::_0x4759CC730F947C81();
		uParam0->f_9 = 1;
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
	if (uParam0->f_6)
	{
		if (!STREAMING::_0xCF45DF50C7775F2A())
		{
			STREAMING::_0x387AD749E3B69B70(*uParam0, CAM::GET_GAMEPLAY_CAM_ROT(2), 500f, 4);
			return 0;
		}
		if (!STREAMING::_0x0909F71B5C070797() && uParam0->f_11 + 20000 + 1000 > MISC::GET_GAME_TIMER())
		{
			if (!PED::IS_PED_INJURED(Global_35))
			{
				if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), *uParam0) > 2500f)
				{
				}
			}
			return 0;
		}
		STREAMING::_0x5A8B01199C3E79C3();
	}
	if (uParam0->f_7)
	{
		if (uParam0->f_13 == 0)
		{
			uParam0->f_13 = MISC::GET_GAME_TIMER();
		}
		if (uParam0->f_13 + 20000 > MISC::GET_GAME_TIMER())
		{
			if (!func_640())
			{
				return 0;
			}
		}
	}
	if (uParam0->f_8 && !PED::IS_INSTANTLY_FILL_PED_POPULATION_FINISHED())
	{
		return 0;
	}
	Global_36 = { *uParam0 };
	if (uParam0->f_4)
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	return 1;
}

bool func_302()
{
	return Global_1572864->f_14;
}

int func_303(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_67))
	{
		iLocal_67 = func_641(13, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -1341683964, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		return 0;
	}
	if (((!ENTITY::IS_ENTITY_DEAD(iLocal_67) && func_439(13)) && func_209(13) == iLocal_67) && PED::IS_PED_READY_TO_RENDER(iLocal_67))
	{
		PED::_0x1902C4CFCC5BE57C(iLocal_67, 609066278);
		PED::_0xCC8CA3E88256E58F(iLocal_67, 0, 1, 1, 1, 0);
		func_642(iLocal_67, func_206(0), func_207(0), 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_67, -1538724068);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_67, false);
		func_587(uParam0, iLocal_67, "ABIGAIL", 1);
		AUDIO::STOP_PED_SPEAKING(iLocal_67, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 297, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 315, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 130, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 331, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 330, true);
		return 1;
	}
	return 0;
}

int func_304()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_124))
	{
		iLocal_124 = VEHICLE::CREATE_VEHICLE(joaat("wagon02x"), func_206(7), func_207(7), true, true, false, false);
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_124))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_124, false);
		VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(iLocal_124, true);
		AITRANSPORT::_0xB7079F4C72896756(Global_35, iLocal_124, 0, 16, -1);
		AITRANSPORT::_0xB7079F4C72896756(iLocal_67, iLocal_124, 0, 16, 0);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_124, 1, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_124, 2, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_124, 3, true);
		VEHICLE::_0x8268B098F6FCA4E2(iLocal_124, 5);
		VEHICLE::_0xF89D82A0582E46ED(iLocal_124, 0);
		VEHICLE::_0x226C6A4E3346D288(iLocal_124, 0);
		VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK(iLocal_124, false);
	}
	return 1;
}

void func_305(int iParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		STREAMING::_REQUEST_IMAP(iParam0);
	}
}

void func_306(int iParam0)
{
	if (iLocal_47 != iParam0)
	{
		iLocal_47 = iParam0;
		iLocal_48 = 0;
		if (iLocal_47 != 1)
		{
			func_48();
		}
		if (iLocal_47 == 11)
		{
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		}
		func_212(&uLocal_236);
		func_643(iParam0);
	}
}

int func_307()
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_124))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_125[1])))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_125[0])))
	{
		iVar0 = VEHICLE::_0xA8BA0BAE0173457B(iLocal_124, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iLocal_125[0] = iVar0;
			ATTRIBUTE::_0xC6258F41D86676E0(&(iLocal_125[0]), 1, 100);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_125[1])))
	{
		iVar0 = VEHICLE::_0xA8BA0BAE0173457B(iLocal_124, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iLocal_125[1] = iVar0;
			ATTRIBUTE::_0xC6258F41D86676E0(&(iLocal_125[1]), 1, 100);
		}
	}
	return 0;
}

void func_308(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	float fVar0;

	if (Global_1935630->f_12)
	{
		return;
	}
	fVar0 = 1f;
	switch (iParam0)
	{
		case -1871534317:
		case 1140525470:
			fVar0 = 0f;
			break;
		case -1415276238:
		case 1823606944:
			fVar0 = 1.5f;
			break;
		case -530524:
		case 898879241:
			fVar0 = 2f;
			break;
		case -1115154469:
			fVar0 = 3f;
			break;
		case -668482597:
		case 147004056:
			break;
	}
	PED::FORCE_PED_MOTION_STATE(Global_35, iParam0, bParam2, iParam3, false);
	if (bParam4)
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), fVar0, iParam1, ENTITY::GET_ENTITY_HEADING(Global_35), bParam6, bParam7);
	}
	else
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), fVar0, iParam1, fParam5, bParam6, bParam7);
	}
}

void func_309()
{
	if (!iLocal_248)
	{
		if (func_644(Global_36, func_206(8), 260f, 0))
		{
			if (!VOLUME::DOES_VOLUME_EXIST(iLocal_249))
			{
				iLocal_249 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-804.997f, -1355.383f, 43.925f, 0f, 0f, 0f, 78f, 84f, 3f, "RABI3_WagonBlock");
			}
			AUDIO::TRIGGER_MUSIC_EVENT("RABI3_NEAR_TOWN");
			func_645(1f, 0f, 0f, 0f);
			uLocal_250 = func_646(iLocal_249, 0, 0, 0);
			func_647(iLocal_249, 0, 0, 1, 1, 0);
			PATHFIND::_0xB03944057FD735BA(iLocal_249, 4, 0);
			iLocal_248 = 1;
		}
	}
}

int func_310()
{
	if (bLocal_92)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_95))
	{
		iLocal_95 = OBJECT::CREATE_OBJECT(joaat("p_screwdriver01x"), -809.6866f, -1371.271f, 43.02329f, true, true, false, false, true);
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_94))
	{
		if (iLocal_93 == 0)
		{
			iLocal_93 = ENTITY::_0x6F3068258A499E52(joaat("p_camerabox01x"), -810.9f, -1371.72f, 44.07f, 7);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_93))
		{
			iLocal_94 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_93));
		}
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_97))
	{
		if (iLocal_96 == 0)
		{
			iLocal_96 = ENTITY::_0x6F3068258A499E52(joaat("p_studiocamera01x"), -811.8663f, -1374.738f, 43.0233f, 7);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_96))
		{
			iLocal_97 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_96));
		}
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_100))
	{
		if (iLocal_99 == 0)
		{
			iLocal_99 = ENTITY::_0x6F3068258A499E52(joaat("p_chair17x"), -811.5582f, -1371.53f, 43.0239f, 7);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_99))
		{
			iLocal_100 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_99));
		}
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_98))
	{
		iLocal_98 = OBJECT::CREATE_OBJECT(joaat("p_cameraflash01x"), -809.5249f, -1371.321f, 43.02329f, true, true, false, false, true);
		return 0;
	}
	ENTITY::SET_ENTITY_VISIBLE(iLocal_100, false);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_98, false);
	bLocal_92 = true;
	return 1;
}

int func_311(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_70))
	{
		return 1;
	}
	if (!iLocal_71)
	{
		if (func_648(514, 0))
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_70, false);
			if (func_649(12))
			{
				func_650(12, 0);
			}
			func_651(514, 0, 1, 0, 0);
		}
		iLocal_71 = 1;
		return 0;
	}
	else
	{
		iLocal_70 = func_652(514, 1, 0, 0, 1, 1);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_70))
		{
			func_642(iLocal_70, func_206(23), func_207(23), 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_70, -1538724068);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_70, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_70, 448, true);
			AUDIO::STOP_PED_SPEAKING(iLocal_70, true);
			if (!func_649(12))
			{
				func_650(12, 1);
			}
			func_587(uParam0, iLocal_70, "BLW_Photographer", 1);
			return 1;
		}
	}
	return 0;
}

int func_312()
{
	if (bLocal_141)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_78))
	{
		iLocal_78 = func_653(2074507271, func_206(14), 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_78, true);
		return 0;
	}
	else if (PED::IS_PED_READY_TO_RENDER(iLocal_78))
	{
		PED::_0x1902C4CFCC5BE57C(iLocal_78, -1481374961);
		PED::_0xCC8CA3E88256E58F(iLocal_78, 0, 1, 1, 1, 0);
	}
	else
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_79))
	{
		iLocal_79 = func_653(1546836623, func_206(14), 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_79, true);
		return 0;
	}
	else if (PED::IS_PED_READY_TO_RENDER(iLocal_79))
	{
		PED::_0x1902C4CFCC5BE57C(iLocal_79, -2018479607);
		PED::_0xCC8CA3E88256E58F(iLocal_79, 0, 1, 1, 1, 0);
	}
	else
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_80))
	{
		iLocal_80 = func_653(1546836623, func_206(14), 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, true);
		return 0;
	}
	else if (PED::IS_PED_READY_TO_RENDER(iLocal_80))
	{
		PED::_0x1902C4CFCC5BE57C(iLocal_80, -1858486478);
		PED::_0xCC8CA3E88256E58F(iLocal_80, 0, 1, 1, 1, 0);
	}
	else
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_125[1])))
	{
		func_307();
	}
	bLocal_141 = true;
	return 1;
}

int func_313()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_112))
	{
		return 1;
	}
	if (iLocal_111 == 0)
	{
		iLocal_111 = ENTITY::_0x6F3068258A499E52(1076045342, -817.1328f, -1375.047f, 44.5194f, 7);
	}
	else if (ENTITY::_0x1FF441D7954F8709(iLocal_111))
	{
		iLocal_112 = ENTITY::_0x4735E2A4BB83D9DA(iLocal_111);
	}
	return 0;
}

bool func_314(int iParam0, int iParam1, char* sParam2)
{
	if (!(Local_1641[iParam0 /*5*/])->f_3)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_1641[iParam0 /*5*/])))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(&(Local_1641[iParam0 /*5*/]), 1, 0))
			{
				if (iParam0 == 2)
				{
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(&(Local_1641[iParam0 /*5*/]), iLocal_124, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_124, "seat_spring_exp"));
				}
				else if (iParam0 == 14)
				{
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(&(Local_1641[iParam0 /*5*/]), iLocal_128, 0);
				}
				(Local_1641[iParam0 /*5*/])->f_3 = 1;
				return (Local_1641[iParam0 /*5*/])->f_3;
			}
		}
		else
		{
			if (MISC::IS_STRING_NULL(sParam2))
			{
				Local_1641[iParam0 /*5*/] = ANIMSCENE::_CREATE_ANIM_SCENE((Local_1641[iParam0 /*5*/])->f_1, iParam1, (Local_1641[iParam0 /*5*/])->f_2, false, true);
			}
			else
			{
				Local_1641[iParam0 /*5*/] = ANIMSCENE::_CREATE_ANIM_SCENE((Local_1641[iParam0 /*5*/])->f_1, iParam1, sParam2, false, true);
			}
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_1641[iParam0 /*5*/])))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(&(Local_1641[iParam0 /*5*/]));
			}
		}
	}
	return (Local_1641[iParam0 /*5*/])->f_3;
}

void func_315(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "AbigailRoberts", iLocal_67, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "John", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "WAGON", iLocal_124, 0);
			break;
		case 3:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "CS_AbigailRoberts", iLocal_67, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "John", Global_35, 0);
			break;
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "AbigailRoberts", iLocal_67, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "John", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "p_studiocamera01x", iLocal_97, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "p_cameraFlash01x", iLocal_98, 0);
			break;
		case 5:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "GENSTORYMALE", iLocal_70, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "p_studiocamera01x", iLocal_97, 0);
			break;
		case 6:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "AbigailRoberts", iLocal_67, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "John", Global_35, 0);
			break;
		case 7:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "BLWPHOTOGRAPHER", iLocal_70, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "p_cameraFlash01x", iLocal_98, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "p_studiocamera01x", iLocal_97, 0);
			break;
		case 8:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "ABIGAIL", iLocal_67, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "MARSTON", Global_35, 0);
			break;
		case 9:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "AbigailRoberts", iLocal_67, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "John", Global_35, 0);
			break;
		case 10:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "AbigailRoberts", iLocal_67, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "John", Global_35, 0);
			break;
		case 11:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "CS_AbigailRoberts", iLocal_67, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "PLAYER_THREE", Global_35, 0);
			break;
		case 12:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "AbigailRoberts", iLocal_67, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "John", Global_35, 0);
			break;
		case 13:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "CS_AbigailRoberts", iLocal_67, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "JOHN", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "rowboat", iLocal_128, 0);
			break;
		case 14:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "CS_AbigailRoberts", iLocal_67, 0);
			break;
		case 15:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1641[iParam0 /*5*/]), "JOHN", Global_35, 0);
			break;
	}
}

void func_316(int iParam0)
{
	if (iLocal_52 != iParam0 && !ENTITY::IS_ENTITY_DEAD(iLocal_70))
	{
		iLocal_52 = iParam0;
	}
	else
	{
		return;
	}
	switch (iLocal_52)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			TASK::CLEAR_PED_TASKS(iLocal_70, 1, 0);
			TASK::TASK_PLAY_ANIM(iLocal_70, sLocal_1722, sLocal_1723, 1090519040, -1056964608, -1, 1, 0, 0, 0, 0, 0, 0);
			break;
	}
}

void func_317()
{
	struct<27> Var0;
	struct<27> Var38;

	Var0.f_4 = 1065353216;
	Var0.f_5 = 1065353216;
	Var0.f_9 = 1065353216;
	Var0.f_10 = 1065353216;
	Var0.f_14 = 1065353216;
	Var0.f_15 = 1065353216;
	Var0.f_17 = 1040187392;
	Var0.f_18 = 1040187392;
	Var0.f_19 = -1;
	Var0.f_26 = -1082130432;
	Var38.f_4 = 1065353216;
	Var38.f_5 = 1065353216;
	Var38.f_9 = 1065353216;
	Var38.f_10 = 1065353216;
	Var38.f_14 = 1065353216;
	Var38.f_15 = 1065353216;
	Var38.f_17 = 1040187392;
	Var38.f_18 = 1040187392;
	Var38.f_19 = -1;
	Var38.f_26 = -1082130432;
	func_654(Global_35, iLocal_67, &Var0, 0f, 0f, 0f, 0, 0, 1, 1069547520, -1082130432, 1073069561, 1056964608, 1092616192, -1, 1, 0, 0, 0, 1);
	func_655(iLocal_67, Global_35, &Var38, -1082130432, 0, 0, -1082130432, -1082130432, 1, 32, -0.8f, -0.2f, 1069547520, 1073741824, 1050253722, 0.6f, 0, 0, -1, 1, -1082130432, -1082130432, 1);
	func_656(&sLocal_1624);
	if (!PED::IS_PED_HEADTRACKING_PED(Global_35, iLocal_67))
	{
		TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_67, -1, 0, 51, 0);
	}
	if (!PED::IS_PED_HEADTRACKING_PED(iLocal_67, Global_35))
	{
		TASK::TASK_LOOK_AT_ENTITY(iLocal_67, Global_35, -1, 0, 51, 0);
	}
}

void func_318()
{
	if (!iLocal_152)
	{
		if (func_644(Global_36, func_206(10), 120f, 0))
		{
			if (!VOLUME::DOES_VOLUME_EXIST(iLocal_251))
			{
				iLocal_251 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_206(10), 0f, 0f, 0f, 30f, 30f, 12f, "RABI3_volBoatBlock");
			}
			uLocal_252 = func_646(iLocal_251, 0, 0, 0);
			func_647(iLocal_251, 0, 0, 1, 1, 0);
			iLocal_152 = 1;
		}
	}
}

int func_319(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_128))
	{
		iLocal_128 = VEHICLE::CREATE_VEHICLE(joaat("rowboat"), func_206(10), func_207(10), true, true, false, false);
		PHYSICS::ACTIVATE_PHYSICS(iLocal_128);
		if (bParam0)
		{
			VEHICLE::SET_BOAT_ANCHOR(iLocal_128, true);
		}
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_128, 1, true);
		VEHICLE::_0x8268B098F6FCA4E2(iLocal_128, 0);
		return 0;
	}
	AITRANSPORT::_0x4B6C9A43F7D9109B(iLocal_128, 0);
	return 1;
}

int func_320()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_91))
	{
		iLocal_91 = OBJECT::CREATE_OBJECT(-1926868415, func_206(11), true, true, false, false, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_91))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_91, true);
		return 1;
	}
	return 0;
}

void func_321(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_657(1497516462);
			func_658(2016141805);
			func_658(1010885152);
			func_658(-502324015);
			break;
		case 2016141805:
			func_658(1497516462);
			func_657(2016141805);
			func_658(1010885152);
			func_658(-502324015);
			break;
		case 1010885152:
			func_658(1497516462);
			func_658(2016141805);
			func_657(1010885152);
			func_658(-502324015);
			break;
		case -502324015:
			func_658(1497516462);
			func_658(2016141805);
			func_658(1010885152);
			func_657(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_658(-538889627);
			func_658(-538880323);
			func_658(-1056767524);
			func_657(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_659();
			func_657(iParam0);
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
			func_660();
			func_657(iParam0);
			break;
		case 2019386373:
			func_658(-664252410);
			func_658(2109952320);
			func_657(2019386373);
			break;
		case -664252410:
			func_658(2019386373);
			func_658(2109952320);
			func_657(-664252410);
			break;
		case 2109952320:
			func_658(2019386373);
			func_658(-664252410);
			func_657(2109952320);
			break;
		case -1674179981:
			func_658(-1835851517);
			func_658(-1838352012);
			func_657(-1674179981);
			break;
		case -1835851517:
			func_658(-1674179981);
			func_658(-1838352012);
			func_657(-1835851517);
			break;
		case -1838352012:
			func_658(-1674179981);
			func_658(-1835851517);
			func_657(-1838352012);
			break;
		case -1717960576:
			func_658(210001842);
			func_657(-1717960576);
			break;
		case 210001842:
			func_658(-1717960576);
			func_657(210001842);
			break;
		case -150493654:
			func_658(-1271608261);
			func_658(1846061697);
			func_658(-1145519186);
			func_657(-150493654);
			break;
		case -1271608261:
			func_658(-150493654);
			func_658(1846061697);
			func_658(-1145519186);
			func_657(-1271608261);
			break;
		case 1846061697:
			func_658(-150493654);
			func_658(-1271608261);
			func_658(-1145519186);
			func_657(1846061697);
			break;
		case -1145519186:
			func_658(-150493654);
			func_658(-1271608261);
			func_658(1846061697);
			func_657(-1145519186);
			break;
		case 1766284049:
			func_658(280705402);
			func_658(1926308480);
			func_657(1766284049);
			break;
		case 280705402:
			func_658(1766284049);
			func_658(1926308480);
			func_657(280705402);
			break;
		case 1926308480:
			func_658(1766284049);
			func_658(280705402);
			func_657(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_658(439465264);
				func_657(1609506757);
			}
			else
			{
				func_658(1609506757);
				func_658(439465264);
			}
			break;
		case 439465264:
			if (func_661(1609506757))
			{
				if (bParam1)
				{
					func_657(439465264);
				}
				else
				{
					func_658(439465264);
				}
			}
			break;
		case 1822001510:
			func_658(-1612662716);
			func_657(1822001510);
			break;
		case -1612662716:
			func_658(1822001510);
			func_657(-1612662716);
			break;
		case 1306158345:
			func_658(1952610440);
			func_658(-223469678);
			func_658(-404698347);
			func_658(1517904467);
			func_657(1306158345);
			break;
		case 1952610440:
			func_658(1306158345);
			func_658(-223469678);
			func_658(-404698347);
			func_658(1517904467);
			func_657(1952610440);
			break;
		case -223469678:
			func_658(1306158345);
			func_658(1952610440);
			func_658(-404698347);
			func_658(1517904467);
			func_657(-223469678);
			break;
		case -404698347:
			func_658(1306158345);
			func_658(1952610440);
			func_658(-223469678);
			func_658(1517904467);
			func_657(-404698347);
			break;
		case 1517904467:
			func_658(1306158345);
			func_658(1952610440);
			func_658(-223469678);
			func_658(-404698347);
			func_657(1517904467);
			break;
		case 1376646519:
			func_658(931649776);
			func_658(-434590080);
			func_658(1743048395);
			func_658(449774763);
			func_657(1376646519);
			break;
		case 931649776:
			func_658(1376646519);
			func_658(-434590080);
			func_658(1743048395);
			func_658(449774763);
			func_657(931649776);
			break;
		case -434590080:
			func_658(1376646519);
			func_658(931649776);
			func_658(1743048395);
			func_658(449774763);
			func_657(-434590080);
			break;
		case 1743048395:
			func_658(1376646519);
			func_658(931649776);
			func_658(-434590080);
			func_658(449774763);
			func_657(1743048395);
			break;
		case 449774763:
			func_658(1376646519);
			func_658(931649776);
			func_658(-434590080);
			func_658(1743048395);
			func_657(449774763);
			break;
		case -1414537028:
			func_658(38162571);
			func_658(1350391819);
			func_658(54073871);
			func_657(-1414537028);
			break;
		case 38162571:
			func_658(-1414537028);
			func_658(1350391819);
			func_658(54073871);
			func_657(38162571);
			break;
		case 1350391819:
			func_658(-1414537028);
			func_658(38162571);
			func_658(54073871);
			func_657(1350391819);
			break;
		case 54073871:
			func_658(-1414537028);
			func_658(38162571);
			func_658(1350391819);
			func_657(54073871);
			break;
		case 198200492:
			func_657(198200492);
			func_658(-1124061431);
			func_658(52706132);
			func_658(-259123672);
			break;
		case -1124061431:
			func_658(198200492);
			func_657(-1124061431);
			func_658(52706132);
			func_658(-259123672);
			break;
		case 52706132:
			func_658(198200492);
			func_658(-1124061431);
			func_657(52706132);
			func_658(-259123672);
			break;
		case -259123672:
			func_658(198200492);
			func_658(-1124061431);
			func_658(52706132);
			func_657(-259123672);
			break;
		case -919512195:
			func_657(-919512195);
			func_658(-1925798111);
			func_658(420709909);
			func_658(1703426636);
			break;
		case -1925798111:
			func_657(-1925798111);
			func_658(-919512195);
			func_658(420709909);
			func_658(1703426636);
			break;
		case 420709909:
			func_657(420709909);
			func_658(-919512195);
			func_658(-1925798111);
			func_658(1703426636);
			break;
		case 1703426636:
			func_657(1703426636);
			func_658(-919512195);
			func_658(-1925798111);
			func_658(420709909);
			break;
		case -1223121209:
			func_657(-1223121209);
			func_658(630808005);
			break;
		case 630808005:
			func_657(630808005);
			func_658(-1223121209);
			break;
		case 1453909576:
			func_657(1453909576);
			func_658(1643531967);
			break;
		case 1643531967:
			func_657(1643531967);
			func_658(1453909576);
			break;
		case 0:
			func_657(0);
			func_658(473295046);
			func_658(-1738165526);
			break;
		case 473295046:
			func_657(473295046);
			func_658(0);
			func_658(-1738165526);
			break;
		case -1738165526:
			func_657(-1738165526);
			func_658(0);
			func_658(473295046);
			break;
		case 932909855:
			func_657(932909855);
			func_658(2051822093);
			break;
		case 2051822093:
			func_657(2051822093);
			func_658(932909855);
			break;
		case 405586984:
			func_657(405586984);
			func_658(1509509592);
			func_658(-959357075);
			func_658(-1311865656);
			break;
		case 1509509592:
			func_657(1509509592);
			func_658(405586984);
			func_658(-959357075);
			func_658(-1311865656);
			break;
		case -959357075:
			func_657(-959357075);
			func_658(1509509592);
			func_658(405586984);
			func_658(-1311865656);
			break;
		case -1311865656:
			func_657(-1311865656);
			func_658(1509509592);
			func_658(-959357075);
			func_658(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_657(-524145696);
			}
			else
			{
				func_658(-524145696);
			}
			func_658(1626481264);
			func_658(282809459);
			break;
		case 282809459:
			func_657(282809459);
			func_658(1626481264);
			func_658(-524145696);
			break;
		case 1626481264:
			func_657(1626481264);
			func_658(-524145696);
			func_658(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_657(885203519);
			}
			else
			{
				func_658(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_657(-1080627546);
			}
			else
			{
				func_658(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_661(iParam0))
				{
					func_657(iParam0);
				}
			}
			else if (func_661(iParam0))
			{
				func_658(iParam0);
			}
			break;
	}
}

int func_322(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam1, iParam2) != *iParam0)
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, iParam2))
		{
			if (iParam3 && func_662(*iParam1))
			{
				iParam2 = func_663(*iParam1);
			}
			else
			{
				return 0;
			}
		}
		if (PED::IS_PED_ON_MOUNT(*iParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(*iParam0, true, false);
		}
		PED::SET_PED_INTO_VEHICLE(*iParam0, *iParam1, iParam2);
	}
	return 1;
}

int func_323(int iParam0, int iParam1, char* sParam2)
{
	char* sVar0;

	if (func_314(iParam0, iParam1, sParam2))
	{
		func_315(iParam0);
		(Local_1641[iParam0 /*5*/])->f_3 = 1;
	}
	if (MISC::IS_STRING_NULL(sParam2))
	{
		sVar0 = (Local_1641[iParam0 /*5*/])->f_2;
	}
	else
	{
		sVar0 = sParam2;
	}
	if ((Local_1641[iParam0 /*5*/])->f_3)
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(&(Local_1641[iParam0 /*5*/]), sVar0))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_1641[iParam0 /*5*/]), sVar0);
		}
		else
		{
			if (!ANIMSCENE::_0x1F0E401031E20146(&(Local_1641[iParam0 /*5*/]), sVar0))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(Local_1641[iParam0 /*5*/]), sVar0, true);
			}
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(&(Local_1641[iParam0 /*5*/]), 0))
			{
				ANIMSCENE::START_ANIM_SCENE(&(Local_1641[iParam0 /*5*/]));
				if (iParam0 != 14 && iParam0 != 4)
				{
					PED::_0x2208438012482A1A(Global_35, false, false);
					PED::_0x2208438012482A1A(iLocal_67, false, false);
				}
				if (iParam0 == 7)
				{
					PED::_0x2208438012482A1A(iLocal_70, false, false);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_324(int iParam0, int iParam1)
{
	return func_664(iParam0, iParam1, &(Global_1946804->f_1949), 1, 0, 0);
}

int func_325()
{
	int iVar0;

	iVar0 = func_519();
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

int func_326(int iParam0)
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

float func_327(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_328(var uParam0)
{
	if (!func_6(uParam0->f_172, 512))
	{
		if (!func_665(uParam0))
		{
			return 0;
		}
		func_220(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 128);
		if (func_248(uParam0))
		{
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_751);
			func_1(&(uParam0->f_172), 512);
		}
		return 0;
	}
	func_363(0, 1, 1, 1);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_751) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_751, 0))
	{
		func_1(&(uParam0->f_172), 1024);
		func_2(&(uParam0->f_172), 256);
		return 1;
	}
	return 0;
}

void func_329()
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

void func_330(var uParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
}

int func_331(var uParam0)
{
	func_666();
	if (iLocal_50 == 6)
	{
		func_291(uParam0, 6);
		if (iLocal_1619)
		{
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		}
		if (!func_301(&uLocal_180))
		{
			if ((CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()) || !CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
		}
		else if (!iLocal_1619)
		{
			AUDIO::_0x6339C1EA3979B5F7("Pass_Time", "Chapter_Screen_Scenes");
			if (!func_79(&uLocal_374))
			{
				func_80(&uLocal_374, 0);
			}
			iLocal_1619 = 1;
			func_363(0, 1, 1, 1);
		}
		else
		{
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				if (func_215(&uLocal_374) > 5f && func_6(uParam0->f_172, 1))
				{
					CAM::DO_SCREEN_FADE_IN(500);
					AUDIO::_0x9428447DED71FC7E("Chapter_Screen_Scenes");
					return 1;
				}
			}
			func_363(0, 1, 1, 1);
		}
		return 0;
	}
	return 1;
}

void func_332(var uParam0, var uParam1)
{
	struct<8> Var0;

	if (func_183(uParam1, 32768))
	{
		Var0 = { func_547(uParam0) };
		func_252(uParam0, &Var0);
		if (func_183(uParam1, 131072))
		{
			func_550(uParam0, 268435456);
			if (func_253(uParam0->f_409))
			{
				uParam0->f_409 = { func_667(uParam1, uParam1->f_1580) };
			}
			if (func_253(uParam0->f_406))
			{
				uParam0->f_406 = { func_667(uParam1, uParam1->f_1580) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_406, &(uParam0->f_406.f_2), 0);
				uParam0->f_406.f_2 = (uParam0->f_406.f_2 + 0.5f);
			}
		}
		if (func_183(uParam1, 268435456))
		{
			func_620(&(uParam0->f_404), 16384);
		}
	}
	else if (func_183(uParam1, 524288))
	{
		func_550(uParam0, 67108864);
		func_668(uParam1, 524288);
	}
	if (func_669(uParam1, 128))
	{
		func_550(uParam0, 32);
	}
	if (uParam1->f_1799 != 0)
	{
		uParam0->f_416 = uParam1->f_1799;
		if (uParam1->f_1580 >= 0 && func_670(uParam1->f_912[uParam1->f_1580 /*41*/], 256))
		{
			func_620(&(uParam0->f_404), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_0x927B810E43E99932(&(uParam1->f_1588)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_417), &(uParam1->f_1588), 16);
	}
}

void func_333(var uParam0, int iParam1)
{
	var uVar0;

	if (iParam1 || !func_6(uParam0->f_172, 