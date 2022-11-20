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
	char* sLocal_14 = NULL;
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	struct<18> Local_18 = { 0, -1474589744, 391506844, -294392875, 0, 0, 0, 0, 0, 0, 1050253722, 1036831949, 1090519040, 1092616192, 1065353216, 1065353216, 1073741824, 0 } ;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = -1;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 1097859072;
	var uLocal_54 = 1000;
	var uLocal_55 = 1067450368;
	var uLocal_56 = 5000;
	var uLocal_57 = 42;
	var uLocal_58 = 1103626240;
	var uLocal_59 = 1077936128;
	var uLocal_60 = 1106247680;
	var uLocal_61 = 1103101952;
	var uLocal_62 = 1097859072;
	var uLocal_63 = 1103626240;
	var uLocal_64 = 0;
	struct<4> Local_65 = { 0, 0, 0, 0 } ;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	struct<4> Local_77 = { 0, 0, 0, 0 } ;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	struct<4> Local_89 = { 0, 0, 0, 0 } ;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	struct<4> Local_101 = { 0, 0, 0, 0 } ;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	struct<4> Local_113 = { 0, 0, 0, 0 } ;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	struct<4> Local_125 = { 0, 0, 0, 0 } ;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	int iLocal_137 = 0;
	bool bLocal_138 = false;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	bool bLocal_143 = false;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	bool bLocal_150 = false;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	bool bLocal_161 = false;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	bool bLocal_164 = false;
	bool bLocal_165 = false;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_179[2] = { 0, 0 };
	int iLocal_182 = 0;
	float fLocal_183 = 0f;
	float fLocal_184 = 0f;
	float fLocal_185 = 0f;
	float fLocal_186 = 0f;
	float fLocal_187 = 0f;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	struct<22> Local_198 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_220 = 3;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	struct<22> Local_223 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_245 = 3;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	struct<22> Local_248 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_270 = 3;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282[2] = { 0, 0 };
	int iLocal_285[5] = { 0, 0, 0, 0, 0 };
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	var uLocal_310[2] = { 0, 0 };
	int iLocal_313 = 0;
	var uLocal_314 = -1;
	var uLocal_315 = 0;
	var uLocal_316 = -1;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = -1;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 1073741824;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 1;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 1106247680;
	var uLocal_340 = 1067450368;
	var uLocal_341 = 0;
	var uLocal_342 = 1092616192;
	var uLocal_343 = 1112014848;
	var uLocal_344 = 1106247680;
	var uLocal_345 = 1101529088;
	var uLocal_346 = 1101004800;
	var uLocal_347 = 1084227584;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	struct<17> Local_374[1];
	int iLocal_392 = 0;
	var uLocal_393 = -1;
	var uLocal_394 = 0;
	var uLocal_395 = -1;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = -1;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 1073741824;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 1;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 1106247680;
	var uLocal_419 = 1067450368;
	var uLocal_420 = 0;
	var uLocal_421 = 1092616192;
	var uLocal_422 = 1112014848;
	var uLocal_423 = 1106247680;
	var uLocal_424 = 1101529088;
	var uLocal_425 = 1101004800;
	var uLocal_426 = 1084227584;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
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
	struct<17> Local_453[1];
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	char* sLocal_479 = NULL;
	char* sLocal_480 = NULL;
	char* sLocal_481 = NULL;
	char* sLocal_482 = NULL;
	char* sLocal_483 = NULL;
	char* sLocal_484 = NULL;
	char* sLocal_485 = NULL;
	char* sLocal_486 = NULL;
	char* sLocal_487 = NULL;
	char* sLocal_488 = NULL;
	char* sLocal_489 = NULL;
	char* sLocal_490 = NULL;
	char* sLocal_491 = NULL;
	char* sLocal_492 = NULL;
	char* sLocal_493 = NULL;
	char* sLocal_494 = NULL;
	char* sLocal_495 = NULL;
	char* sLocal_496 = NULL;
	char* sLocal_497 = NULL;
	char* sLocal_498 = NULL;
	char* sLocal_499 = NULL;
	char* sLocal_500 = NULL;
	char* sLocal_501 = NULL;
	char* sLocal_502 = NULL;
	char* sLocal_503 = NULL;
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
	var uLocal_534 = 0;
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
	var uLocal_561[2] = { 0, 0 };
	vector3 vLocal_564 = { 0f, 0f, 0f };
	float fLocal_567 = 0f;
	vector3 vLocal_568 = { 0f, 0f, 0f };
	float fLocal_571 = 0f;
	vector3 vLocal_572 = { 0f, 0f, 0f };
	vector3 vLocal_575 = { 0f, 0f, 0f };
	float fLocal_578 = 0f;
	vector3 vLocal_579 = { 0f, 0f, 0f };
	float fLocal_582 = 0f;
	vector3 vLocal_583 = { 0f, 0f, 0f };
	float fLocal_586 = 0f;
	vector3 vLocal_587 = { 0f, 0f, 0f };
	float fLocal_590 = 0f;
	vector3 vLocal_591 = { 0f, 0f, 0f };
	vector3 vLocal_594 = { 0f, 0f, 0f };
	float fLocal_597 = 0f;
	vector3 vLocal_598 = { 0f, 0f, 0f };
	float fLocal_601 = 0f;
	vector3 vLocal_602 = { 0f, 0f, 0f };
	vector3 vLocal_605 = { 0f, 0f, 0f };
	float fLocal_608 = 0f;
	vector3 vLocal_609 = { 0f, 0f, 0f };
	float fLocal_612 = 0f;
	vector3 vLocal_613[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_620[2] = { 0f, 0f };
	vector3 vLocal_623[6] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_642[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_649[6] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_668[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_675 = { 0f, 0f, 0f };
	vector3 vLocal_678 = { 0f, 0f, 0f };
	vector3 vLocal_681 = { 0f, 0f, 0f };
	vector3 vLocal_684 = { 0f, 0f, 0f };
	float fLocal_687 = 0f;
	vector3 vLocal_688 = { 0f, 0f, 0f };
	vector3 vLocal_691 = { 0f, 0f, 0f };
	float fLocal_694 = 0f;
	vector3 vLocal_695 = { 0f, 0f, 0f };
	float fLocal_698 = 0f;
	vector3 vLocal_699 = { 0f, 0f, 0f };
	float fLocal_702 = 0f;
	vector3 vLocal_703 = { 0f, 0f, 0f };
	vector3 vLocal_706 = { 0f, 0f, 0f };
	vector3 vLocal_709 = { 0f, 0f, 0f };
	vector3 vLocal_712 = { 0f, 0f, 0f };
	vector3 vLocal_715 = { 0f, 0f, 0f };
	vector3 vLocal_718 = { 0f, 0f, 0f };
	vector3 vLocal_721 = { 0f, 0f, 0f };
	vector3 vLocal_724 = { 0f, 0f, 0f };
	vector3 vLocal_727 = { 0f, 0f, 0f };
	vector3 vLocal_730 = { 0f, 0f, 0f };
	vector3 vLocal_733 = { 0f, 0f, 0f };
	vector3 vLocal_736 = { 0f, 0f, 0f };
	vector3 vLocal_739 = { 0f, 0f, 0f };
	vector3 vLocal_742 = { 0f, 0f, 0f };
	vector3 vLocal_745 = { 0f, 0f, 0f };
	vector3 vLocal_748 = { 0f, 0f, 0f };
	vector3 vLocal_751 = { 0f, 0f, 0f };
	vector3 vLocal_754 = { 0f, 0f, 0f };
	vector3 vLocal_757 = { 0f, 0f, 0f };
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
	int iLocal_776 = 0;
	int iLocal_777 = 0;
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
	int iLocal_794[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
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
	char* sLocal_815[3] = { NULL, NULL, NULL };
	int iLocal_819[3] = { 0, 0, 0 };
	int iLocal_823 = 0;
	int iLocal_824 = 0;
	struct<9> Local_825[11];
	float fLocal_925 = 0f;
	struct<6> Local_926[13];
	int iLocal_1005 = 0;
	int iLocal_1006 = 0;
	vector3 vLocal_1007 = { 0f, 0f, 0f };
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	int iLocal_1014 = 0;
	bool bLocal_1015 = false;
	int iLocal_1016 = 0;
	int iLocal_1017 = 0;
	int iLocal_1018 = 0;
	vector3 vLocal_1019 = { 0f, 0f, 0f };
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	int iLocal_1025 = 0;
	int iLocal_1026 = 0;
	int iLocal_1027 = 0;
	float fLocal_1028 = 0f;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	int iLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	int iLocal_1036 = 0;
	int iLocal_1037 = 0;
	vector3 vLocal_1038 = { 0f, 0f, 0f };
	int iLocal_1041 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<2606> Var0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	bLocal_161 = true;
	iLocal_167 = 1;
	fLocal_185 = 0f;
	fLocal_187 = 1000f;
	iLocal_273 = joaat("p_fishingpole01x");
	iLocal_274 = joaat("p_fishingpole02x");
	iLocal_275 = joaat("p_stick02x");
	iLocal_276 = joaat("p_cs_sock01x");
	iLocal_277 = joaat("p_cs_flowernecklace");
	iLocal_278 = -1018099626;
	iLocal_279 = 918835244;
	iLocal_280 = joaat("p_cs_book03x");
	iLocal_281 = -1250098797;
	sLocal_479 = "NULL";
	sLocal_480 = "NULL";
	sLocal_481 = "p_cs_flowernecklace";
	sLocal_482 = "P_CS_FLOWERS01X";
	sLocal_483 = "s_inv_yarrow01cx";
	sLocal_484 = "p_fishingpole01x";
	sLocal_485 = "P_STICK02X";
	sLocal_486 = "P_CS_SOCK01X";
	sLocal_490 = "mini_games@fishing@shore_child";
	sLocal_491 = "script_rc@abi1@ig@rabi1_bait_rod_jack_child";
	sLocal_492 = "base_2h_2_idle";
	sLocal_493 = "base_2h_idle_a";
	sLocal_494 = "bait_rod_jack_child_ig_jackmarston";
	sLocal_495 = "bait_rod_jack_child_p_fishingpole01x";
	sLocal_496 = "idle_2_base_2h";
	sLocal_497 = "cast_intro";
	sLocal_498 = "cast_action";
	sLocal_499 = "base_reel_idle_a";
	sLocal_500 = "base_reel_idle_c";
	sLocal_501 = "base_reel_idle_d";
	sLocal_502 = "base_reel_idle_e";
	sLocal_503 = "reel_in";
	vLocal_564 = { -147.8866f, -14.662f, 95.3018f };
	fLocal_567 = 96.3018f;
	vLocal_568 = { -121.3928f, -15.9465f, 95.1901f };
	fLocal_571 = 164.8433f;
	vLocal_572 = { -148.3965f, -14.4253f, 95.4101f };
	vLocal_575 = { -151.3511f, -17.5629f, 95.2518f };
	fLocal_578 = 311.6641f;
	vLocal_579 = { -166.702f, -34.8575f, 93.8508f };
	fLocal_582 = 267.9794f;
	vLocal_583 = { -131.2237f, -31.2469f, 95.1752f };
	fLocal_586 = 209.4253f;
	vLocal_587 = { -472.1521f, 200.4329f, 41.0107f };
	fLocal_590 = 227.3212f;
	vLocal_591 = { 2f, 0f, 0f };
	vLocal_594 = { -110.6658f, -24.1952f, 94.7146f };
	fLocal_597 = 298.6764f;
	vLocal_598 = { -116.7768f, -21.0371f, 94.9108f };
	fLocal_601 = 26.3152f;
	vLocal_602 = { -465.4346f, 187.5489f, 40.5736f };
	vLocal_605 = { -467.3456f, 202.6058f, 41.4f };
	fLocal_608 = 0f;
	vLocal_609 = { -468.628f, 190.187f, 41.2516f };
	fLocal_612 = 17.8276f;
	vLocal_675 = { -468.2877f, 188.7003f, 40.4181f };
	vLocal_678 = { -455.052f, 203.816f, 42.72f };
	vLocal_684 = { -114.63f, -18.7636f, 94.9146f };
	fLocal_687 = 75.3856f;
	vLocal_688 = { -468.128f, 202.924f, 41.43834f };
	vLocal_691 = { -115.1909f, -18.3412f, 94.9308f };
	fLocal_694 = 72.8093f;
	vLocal_695 = { -108.3717f, -34.1668f, 94.9754f };
	fLocal_698 = 338.3777f;
	vLocal_699 = { -106.8982f, -34.3779f, 94.9737f };
	fLocal_702 = 342.2831f;
	vLocal_703 = { 0f, 0f, 0f };
	vLocal_706 = { 0f, 0f, 0f };
	vLocal_709 = { 0f, 0f, 0f };
	vLocal_712 = { 0f, 0f, 0f };
	vLocal_715 = { 0f, -0.08f, -0.254f };
	vLocal_718 = { 0f, 0f, 0f };
	vLocal_721 = { 0.29f, -0.022f, -0.078f };
	vLocal_724 = { 75.996f, 0f, -2.8f };
	vLocal_727 = { -118.61f, -16.68f, 95.16f };
	vLocal_730 = { 6.42f, -23.01f, -158.2f };
	vLocal_733 = { -118.786f, -25.294f, 97.227f };
	vLocal_736 = { 0f, 0f, 150f };
	vLocal_739 = { 19f, 25f, 5f };
	vLocal_742 = { -458.917f, 183.647f, 40.418f };
	vLocal_745 = { 22f, 8f, 14f };
	vLocal_748 = { -455.204f, 182.101f, 40.418f };
	vLocal_751 = { 30f, 8f, 14f };
	vLocal_754 = { 0f, 0f, 157.4f };
	vLocal_757 = { -147.8866f, -14.662f, 95.3018f };
	fLocal_1028 = 8f;
	vLocal_1038 = { -168.8901f, -38.2667f, 92.8671f };
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
	int iVar0;

	func_185(uParam0, 3f);
	func_186(uParam0, 5f);
	func_187(uParam0, 4);
	func_188(uParam0, 12);
	func_189();
	func_190();
	iLocal_282[0] = 1593035738;
	iLocal_282[1] = -444610976;
	iLocal_172[0] = 0;
	iLocal_172[1] = 0;
	iLocal_172[2] = 0;
	iLocal_179[0] = 0;
	iLocal_179[1] = 0;
	func_191();
	iLocal_285[0] = joaat("a_c_fishbluegil_01_sm");
	iLocal_285[1] = joaat("a_c_fishchainpickerel_01_sm");
	iLocal_285[2] = joaat("a_c_fishperch_01_sm");
	iLocal_285[3] = joaat("a_c_fishrockbass_01_sm");
	iLocal_285[4] = joaat("a_c_fishsmallmouthbass_01_ms");
	if (func_192(0))
	{
		iLocal_781 = 0;
	}
	else
	{
		iLocal_781 = 1;
	}
	sLocal_815[0] = "RAB1_RESTART_2";
	sLocal_815[1] = "RAB1_RESTART_3";
	sLocal_815[2] = "RAB1_RESTART_4";
	*(vLocal_613[0 /*3*/]) = { -446.7768f, 196.5367f, 42.9604f };
	fLocal_620[0] = 62.4146f;
	*(vLocal_613[1 /*3*/]) = { -448.353f, 198.1722f, 43.4099f };
	fLocal_620[1] = 71.2796f;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_819[iVar0] = 0;
		iVar0++;
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
	func_193(uParam0);
}

void func_41(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_194(&(uParam0->f_41), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_195(&(uParam0->f_41));
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
	int iVar0;

	func_196(uParam0, 0);
	func_41(uParam0, iLocal_273, 7);
	func_41(uParam0, iLocal_274, 2);
	func_41(uParam0, iLocal_275, 7);
	func_41(uParam0, iLocal_276, 2);
	func_41(uParam0, &(iLocal_282[0]), 2);
	func_41(uParam0, &(iLocal_282[1]), 2);
	func_41(uParam0, iLocal_278, 2);
	func_41(uParam0, iLocal_279, 2);
	func_41(uParam0, iLocal_277, 2);
	func_41(uParam0, iLocal_280, 1);
	func_41(uParam0, iLocal_281, 7);
	func_197(uParam0, sLocal_490, 2);
	func_197(uParam0, sLocal_491, 2);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		AUDIO::PREPARE_MUSIC_EVENT(&(sLocal_815[iVar0]));
		iVar0++;
	}
}

void func_43(var uParam0, int iParam1)
{
	if (func_198(uParam0) == iParam1)
	{
		return;
	}
	func_199(uParam0, uParam0->f_168, iParam1);
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
	if ((func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_6(uParam0->f_172, 1024)) && !func_200(uParam0->f_174))
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

	switch (func_201(&iVar0))
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
	func_202(bParam0);
	func_203(bParam0);
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
	if (func_204(uParam0, uParam0->f_168))
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
	if (func_205() != -1)
	{
		return 0;
	}
	if (!func_206(iParam0))
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

	func_191();
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			Var1 = { *(vLocal_623[0 /*3*/]) };
			Var1.f_3 = &fLocal_642[0];
			break;
		case 1:
			Var1 = { *(vLocal_623[1 /*3*/]) };
			Var1.f_3 = &fLocal_642[1];
			break;
		case 2:
			Var1 = { *(vLocal_623[2 /*3*/]) };
			Var1.f_3 = &fLocal_642[2];
			break;
		case 3:
			Var1 = { *(vLocal_623[3 /*3*/]) };
			Var1.f_3 = &fLocal_642[3];
			break;
		case 4:
			Var1 = { *(vLocal_623[4 /*3*/]) };
			Var1.f_3 = &fLocal_642[4];
			break;
		case 5:
			Var1 = { *(vLocal_623[4 /*3*/]) };
			Var1.f_3 = &fLocal_642[4];
			break;
		case 6:
			Var1 = { *(vLocal_623[5 /*3*/]) };
			Var1.f_3 = &fLocal_642[5];
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_207(*uParam0, uParam0->f_3);
}

void func_63(var uParam0, int iParam1)
{
	uParam0->f_173 = (uParam0->f_173 - (uParam0->f_173 && iParam1));
}

int func_64(var uParam0)
{
	if (func_208(uParam0, iLocal_301))
	{
		StringCopy(&(uParam0->f_2578), "RABI1_JACKHARM", 24);
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_306))
	{
		if ((((!func_209(iLocal_306, 65) || ENTITY::IS_ENTITY_DEAD(iLocal_306)) || PED::IS_PED_SWIMMING(iLocal_306)) || (iLocal_152 && !PED::IS_PED_ON_MOUNT(iLocal_301))) || (func_210(25) && !func_211()))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_306))
			{
				func_212(iLocal_306, 1, 0);
			}
			func_213(uParam0);
			StringCopy(&(uParam0->f_2578), "RABI1_HRSDEAD", 24);
			return 1;
		}
		if (!func_79(&uLocal_1033))
		{
			if (PED::IS_PED_FALLING(iLocal_306) || PED::IS_PED_RAGDOLL(iLocal_306))
			{
				func_214(&uLocal_1033);
			}
		}
		else if (func_215(&uLocal_1033) > 2f)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_306))
			{
				func_212(iLocal_306, 1, 0);
			}
		}
	}
	if ((iLocal_785 < 12 && iLocal_785 > 4) && iLocal_785 != 7)
	{
		func_216(0, vLocal_675, "RABI1_FAILWARN", 120f);
		if (&iLocal_819[0] == 3)
		{
			StringCopy(&(uParam0->f_2578), "RABI1_ABANFISH", 24);
			return 1;
		}
	}
	if (iLocal_785 == 4 || iLocal_785 == 14)
	{
		func_216(2, ENTITY::GET_ENTITY_COORDS(iLocal_306, true, false), (Local_825[4 /*9*/])->f_2, 60f);
		if (&iLocal_819[2] == 3)
		{
			StringCopy(&(uParam0->f_2578), "RABI1_JACKABAN", 24);
			return 1;
		}
	}
	if (iLocal_785 == 15)
	{
		func_216(1, vLocal_684, "RABI1_RETCAMP", 100f);
		if (&iLocal_819[1] == 3)
		{
			StringCopy(&(uParam0->f_2578), "RABI1_ABANCAMP", 24);
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_300) && iLocal_158)
	{
		if (!func_209(iLocal_300, 65))
		{
			StringCopy(&(uParam0->f_2578), "RABI1_ABIDEAD", 24);
			return 1;
		}
		else if (iLocal_157)
		{
			StringCopy(&(uParam0->f_2578), "RABI1_ABIAGGRO", 24);
			return 1;
		}
	}
	if (func_217(PLAYER::PLAYER_ID(), 0, 1, 1))
	{
		StringCopy(&(uParam0->f_2578), "RABI1_WANTED", 24);
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_301))
	{
		if (func_210(4) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_301, true, false), 10f))
		{
			StringCopy(&(uParam0->f_2578), "RABI1_JKANNOY", 24);
			return 1;
		}
		if (func_218(Global_35, iLocal_301, 0, 1) > 100f)
		{
			StringCopy(&(uParam0->f_2578), "RABI1_JACKABAN", 24);
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
	int iVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (iVar0 != joaat("weapon_fishingrod"))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
		PAD::DISABLE_CONTROL_ACTION(0, 42190210, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1623727326, false);
		PAD::DISABLE_CONTROL_ACTION(0, -922478227, false);
		func_219();
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	POPULATION::_0xF45E46DEECF7DF6E(256, 0, 0, -1, -1);
	PED::SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0x28CB6391ACEDD9DB(0f);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_306) && !ENTITY::IS_ENTITY_DEAD(iLocal_306))
	{
		PED::SET_PED_RESET_FLAG(iLocal_306, 280, true);
		PED::SET_PED_RESET_FLAG(iLocal_306, 252, true);
	}
}

Vector3 func_69(int iParam0)
{
	vector3 vVar0;

	if (!func_206(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_220(iParam0, &vVar0))
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
		if (func_57(iVar0) && func_221(uParam0, iVar0))
		{
		}
		else
		{
			func_51(uParam0, 12);
			return 1;
		}
	}
	if (func_222(uParam0->f_174))
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
	if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_200(uParam0->f_174))
	{
		func_223(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 16384);
		func_51(uParam0, 3);
		return 1;
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 8388608 != 0)
	{
		iVar1 = func_224(uParam0->f_174);
		if (iVar1 != -1)
		{
			if (func_225(iVar1))
			{
				if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
				{
					func_178(uParam0->f_174, 32768);
				}
				func_51(uParam0, 5);
				return 1;
			}
			else if (func_226(iVar1))
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
		if (func_225(((*Global_1347702)[uParam0->f_174 /*49*/])->f_45))
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
			iVar2 = func_227();
			if (!func_228(iVar2, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_46))
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
		if (func_229(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			func_178(uParam0->f_174, 16384);
			func_51(uParam0, 9);
			return 1;
		}
	}
	if (uParam0->f_172 & 256 != 0 && !func_230(uParam0->f_174, 1, 1, 0, 0))
	{
		func_51(uParam0, 10);
		return 1;
	}
	if (func_231(uParam0) || func_232(uParam0->f_174, uParam0->f_743))
	{
		func_178(uParam0->f_174, 1024);
		func_51(uParam0, 11);
		return 1;
	}
	if (!func_233(uParam0) && func_234(uParam0->f_743))
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

	func_235();
	func_236(uParam0);
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
				func_237(uParam0->f_174, 1);
			}
		}
		if (func_6(uParam0->f_172, 67108864))
		{
			func_54(1);
			func_2(&(uParam0->f_172), 67108864);
		}
		func_238(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_ENABLE_HUD_CONTEXT_THIS_FRAME(Global_35, 262143);
			func_239(Global_35);
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
		func_240(uParam0->f_174);
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
		func_241(uParam0);
	}
	func_161(uParam0);
	func_242(0);
	func_102(uParam0, 0);
	func_43(uParam0, 4);
	func_2(&(uParam0->f_172), 8);
	func_176(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 1024);
	func_176(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
	func_47(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 4);
	func_243(&(uParam0->f_2585));
	func_244(uParam0);
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
			fVar4 = func_245(uParam0->f_174);
			if ((((*Global_1347702)[uParam0->f_174 /*49*/])->f_36 != -1822497728 || func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 32)) || fVar3 < (fVar4 * fVar4))
			{
				func_246(uParam0->f_174, vVar0, 1, 0);
			}
		}
	}
	else
	{
		func_247(uParam0->f_174, fVar3);
		func_248(uParam0->f_174, vVar0, fVar3);
		func_249(uParam0->f_174);
		func_250(uParam0->f_174);
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
			func_251(uParam0);
		}
		else
		{
			func_252(uParam0);
		}
	}
	else if (uParam0->f_177 == 4)
	{
		if (func_45(uParam0))
		{
			if (func_6(uParam0->f_172, 16))
			{
				cVar0 = { func_253() };
				Var8 = { func_254(&(uParam0->f_206)) };
				if (!MISC::ARE_STRINGS_EQUAL(&Var8, &cVar0))
				{
					func_255(&(uParam0->f_206));
					func_256(&(uParam0->f_206), &cVar0);
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
	if (func_257(uParam0->f_206.f_5))
	{
		uParam0->f_206.f_5 = { func_69(uParam0->f_174) };
	}
	bVar0 = func_258(uParam0);
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
		if (func_259(&(uParam0->f_206), &(uParam0->f_2575), bVar0, bVar1))
		{
			if (!func_6(uParam0->f_172, 1))
			{
				func_260(uParam0);
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
			if (func_261(uParam0->f_2605[iVar0 /*16*/], 1048576))
			{
				if (func_262(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_263(uParam0->f_2605[iVar0 /*16*/]);
				}
				else if (func_264(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_265(uParam0->f_2605[iVar0 /*16*/]);
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
			if (func_261(uParam0->f_2605.f_241[iVar0 /*16*/], 1048576))
			{
				if (func_266(uParam0, uParam0->f_2605.f_241[iVar0 /*16*/], iParam1))
				{
					func_267(uParam0->f_2605.f_241[iVar0 /*16*/]);
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
			if (func_261(uParam0->f_2605.f_482[iVar0 /*16*/], 1048576))
			{
				if (func_266(uParam0, uParam0->f_2605.f_482[iVar0 /*16*/], iParam1))
				{
					if (func_268(uParam0->f_2605.f_482[iVar0 /*16*/], 0))
					{
						if (func_261(uParam0->f_2605.f_482[iVar0 /*16*/], 4))
						{
							func_269(&(uParam0->f_2605));
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
	if (func_270(&(uParam0->f_2605), &cVar0, 1, -1, 0, 1))
	{
		func_1(&(uParam0->f_172), 32);
		return 1;
	}
	return 0;
}

bool func_79(var uParam0)
{
	return func_271(*uParam0, 1);
}

void func_80(var uParam0, int iParam1)
{
	if (iParam1 || !func_79(uParam0))
	{
		func_214(uParam0);
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
	if (func_272(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_273() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
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
	if (func_274(uParam0) && func_275(uParam0))
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
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_276(uParam0->f_174), func_277(uParam0->f_174)))
		{
			func_278(uParam0->f_174, 128);
		}
		else
		{
			func_121(uParam0->f_174, 128);
		}
		if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
		{
			if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_276(uParam0->f_174), func_277(uParam0->f_174)))
			{
				func_279(uParam0->f_174);
				func_280(uParam0->f_174);
			}
		}
		else
		{
			func_281(Global_1347702[uParam0->f_174 /*49*/]);
			func_279(uParam0->f_174);
		}
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(func_276(uParam0->f_174), func_277(uParam0->f_174)))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_276(uParam0->f_174), func_277(uParam0->f_174), 0, "");
		}
	}
	if (!func_174(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
	{
		if (!func_282(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
		{
			func_283(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1);
		}
		func_284(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1, 1);
		func_285(Global_1935630, 8);
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
	func_286(uParam0);
	func_1(&(uParam0->f_172), 8);
	if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 8192))
	{
		func_54(0);
		LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
		LAW::_0x292AD61A33A7A485();
		func_287(1, 16384, 1);
		func_1(&(uParam0->f_172), 67108864);
	}
	func_119(uParam0, 1, 0);
	func_238(1);
	func_242(1);
	func_288();
	func_163(uParam0);
	func_164(uParam0->f_174);
	func_165(uParam0->f_174);
	func_289(uParam0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	func_290(1);
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
	func_291(uParam0);
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
	if (func_292(uParam0))
	{
		iVar5 = func_95(uParam0);
	}
	TELEMETRY::_TELEMETRY_MISSION_STARTED(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), 0, iVar5, func_32(uParam0, 64));
	if (uParam0->f_174 != func_19())
	{
		func_293(uParam0, func_61(0), func_61(1), 0, 1, 0);
	}
}

void func_87(var uParam0)
{
	func_294(uParam0, 0);
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
		if (uParam0->f_171 != 0 || func_295(uParam0))
		{
			if (func_296(uParam0))
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
		return func_297();
	}
	return -1;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	char[] cVar1[8];
	bool bVar2;

	iVar0 = iParam1;
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (!func_298())
	{
		return 2;
	}
	switch (iVar0)
	{
		case 0:
			switch (iLocal_814)
			{
				case 0:
					if (((((((func_299(*(vLocal_649[0 /*3*/]), &(fLocal_668[0]), 1) && func_300()) && func_301(Local_926[1 /*6*/])) && func_302()) && func_303()) && func_298()) && func_304()) && func_305())
					{
						func_293(uParam0, func_61(0), func_61(1), 0, 1, 0);
						if (func_306(uParam0))
						{
							func_2(&(uParam0->f_172), 16);
							iLocal_814 = 1;
						}
						else
						{
							iLocal_814 = 2;
						}
					}
					break;
				case 1:
					if (!func_6(uParam0->f_172, 16))
					{
						if (func_307(uParam0, vLocal_564, fLocal_567))
						{
							cVar1 = func_308();
							func_309(&(uParam0->f_206), cVar1);
							func_310(&(uParam0->f_206), 33554432);
							func_310(&(uParam0->f_206), 134217728);
							func_256(&(uParam0->f_206), cVar1);
							func_294(uParam0, 0);
						}
					}
					else if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348))
					{
						return 5;
					}
					break;
				case 2:
					func_311();
					func_312(9, 0);
					func_313(uParam0);
					func_314(1, 1);
					ENTITY::_0x203BEFFDBE12E96A(Global_35, vLocal_579, fLocal_582, 1, 0, 1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					if (!func_315(Local_453[0 /*17*/]))
					{
						func_316(Local_453[0 /*17*/], "RABI1_GREET", " ", -163964935, 0, 0, 0, 1, 0);
					}
					func_317(1);
					func_318(uParam0, (Local_825[0 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
					func_319(uParam0, 0, 2);
					func_320(13, 0, 1, 0, -1082130432, 1, 1, 0, 0, 0, 0);
					iLocal_172[0] = 0;
					if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					return 7;
			}
			break;
		case 1:
			switch (iLocal_814)
			{
				case 0:
					if (((((func_321(uParam0, *(vLocal_623[1 /*3*/]), &(fLocal_642[1])) && func_299(*(vLocal_649[1 /*3*/]), &(fLocal_668[1]), 1)) && func_322(1, 1)) && func_323(*(vLocal_623[1 /*3*/]), 0f, 0f, 0f, 0)) && func_302()) && func_298())
					{
						func_324(1);
						func_311();
						func_313(uParam0);
						ENTITY::_0x203BEFFDBE12E96A(iLocal_306, *(vLocal_623[1 /*3*/]), &(fLocal_642[1]), 1, 0, 1);
						func_325();
						func_312(9, 0);
						iLocal_814 = 1;
					}
					break;
				case 1:
					if (!PED::IS_PED_ON_MOUNT(Global_35))
					{
						PED::_SET_PED_ON_MOUNT(Global_35, iLocal_306, -1, true);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
					{
						PED::_SET_PED_ON_MOUNT(iLocal_301, iLocal_306, 1, true);
					}
					if (PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_ON_MOUNT(iLocal_301))
					{
						func_326(25);
						iLocal_152 = 1;
						func_327(vLocal_678, 1);
						iLocal_792 = 3;
						func_318(uParam0, (Local_825[1 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
						iLocal_814 = 2;
					}
					break;
				case 2:
					if (func_328(1))
					{
						AUDIO::TRIGGER_MUSIC_EVENT(&(sLocal_815[0]));
						func_293(uParam0, func_61(1), func_61(2), 1, 2, 0);
						func_319(uParam0, 0, 8);
						func_329(1);
						func_330();
						func_331();
						iLocal_814 = 0;
						return 7;
					}
					break;
			}
			break;
		case 2:
			switch (iLocal_814)
			{
				case 0:
					if (((((func_321(uParam0, *(vLocal_623[2 /*3*/]), &(fLocal_642[2])) && func_299(*(vLocal_649[2 /*3*/]), &(fLocal_668[2]), 1)) && func_322(1, 1)) && func_323(*(vLocal_623[2 /*3*/]), 0f, 0f, 0f, 0)) && func_302()) && func_298())
					{
						func_324(1);
						func_311();
						func_312(9, 0);
						func_313(uParam0);
						ENTITY::_0x203BEFFDBE12E96A(iLocal_306, *(vLocal_623[2 /*3*/]), &(fLocal_642[2]), 1, 0, 1);
						func_325();
						iLocal_814 = 1;
					}
					break;
				case 1:
					if (!MAP::DOES_BLIP_EXIST(iLocal_137))
					{
						func_327(vLocal_678, 1);
					}
					if (!PED::IS_PED_ON_MOUNT(Global_35))
					{
						PED::_SET_PED_ON_MOUNT(Global_35, iLocal_306, -1, true);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
					{
						PED::_SET_PED_ON_MOUNT(iLocal_301, iLocal_306, 1, true);
					}
					if ((PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_ON_MOUNT(iLocal_301)) && MAP::DOES_BLIP_EXIST(iLocal_137))
					{
						func_326(25);
						func_332(Global_36, 50f, 0);
						iLocal_152 = 1;
						iLocal_792 = 3;
						AUDIO::TRIGGER_MUSIC_EVENT(&(sLocal_815[1]));
						iLocal_814 = 2;
					}
					break;
				case 2:
					if (func_328(1))
					{
						func_318(uParam0, (Local_825[1 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
						func_293(uParam0, func_61(2), func_61(4), 2, 4, 0);
						func_319(uParam0, 0, 8);
						func_330();
						func_329(1);
						func_331();
						iLocal_814 = 0;
						return 7;
					}
					break;
			}
			break;
		case 3:
			switch (iLocal_814)
			{
				case 0:
					if (((((func_321(uParam0, vLocal_678, 0) && func_299(*(vLocal_649[3 /*3*/]), &(fLocal_668[3]), 1)) && func_302()) && func_322(1, 1)) && func_323(*(vLocal_623[3 /*3*/]), 0f, 0f, 0f, 1)) && func_298())
					{
						iLocal_814 = 1;
					}
					break;
				case 1:
					if (func_328(1))
					{
						func_311();
						func_324(1);
						func_333(17);
						func_313(uParam0);
						func_317(0);
						ENTITY::_0x203BEFFDBE12E96A(iLocal_306, vLocal_678, fLocal_590, 1, 0, 1);
						func_334(1, 1);
						func_319(uParam0, iLocal_785, 10);
						func_293(uParam0, func_61(3), func_61(4), 3, 4, 0);
						func_312(9, 0);
						iLocal_792 = 3;
						AUDIO::TRIGGER_MUSIC_EVENT(&(sLocal_815[1]));
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						func_330();
						func_329(1);
						func_331();
						return 7;
					}
					break;
			}
			break;
		case 4:
			switch (iLocal_814)
			{
				case 0:
					func_335(Global_35, 1);
					if (((func_321(uParam0, vLocal_587, fLocal_590) && func_299(*(vLocal_649[4 /*3*/]), &(fLocal_668[4]), 1)) && func_322(1, 1)) && func_298())
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
						{
							func_313(uParam0);
						}
						iLocal_814 = 1;
					}
					break;
				case 1:
					bVar2 = true;
					if (!bLocal_138)
					{
						func_294(uParam0, 1);
						bVar2 = false;
					}
					func_332(vLocal_587, 3f, 0);
					if (bLocal_138 && !func_6(uParam0->f_172, 1))
					{
						bVar2 = false;
					}
					if (bVar2)
					{
						iLocal_814 = 2;
					}
					break;
				case 2:
					if (func_328(1))
					{
						func_324(1);
						func_336();
						func_312(11, 0);
						func_311();
						ENTITY::_0x203BEFFDBE12E96A(iLocal_306, vLocal_587, fLocal_590, 1, 0, 1);
						func_293(uParam0, func_61(4), func_61(6), 4, 6, 0);
						AUDIO::TRIGGER_MUSIC_EVENT(&(sLocal_815[2]));
						func_337(1);
						func_338(1);
						func_339(0);
						func_340(0);
						func_341(0);
						func_342(0);
						func_343(0);
						func_344(1);
						func_345(0);
						func_329(1);
						func_319(uParam0, iLocal_785, 14);
						if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
						return 5;
					}
					break;
			}
			break;
		case 5:
			switch (iLocal_814)
			{
				case 0:
					if (((func_321(uParam0, vLocal_587, fLocal_590) && func_299(*(vLocal_649[4 /*3*/]), &(fLocal_668[4]), 1)) && func_322(1, 1)) && func_298())
					{
						func_312(12, 0);
						func_335(Global_35, 1);
						func_311();
						iLocal_814 = 1;
					}
					break;
				case 1:
					if (func_328(1))
					{
						func_324(1);
						func_346(uParam0);
						func_330();
						func_329(1);
						func_331();
						return 7;
					}
					break;
			}
			break;
		case 6:
			if ((((((func_299(*(vLocal_649[0 /*3*/]), &(fLocal_668[0]), 1) && func_347(1)) && func_303()) && func_348(uParam0, 1, iLocal_306)) && func_6(uParam0->f_172, 1)) && func_322(1, 1)) && func_349(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
			{
				func_350(iLocal_291, 0, 1);
				func_351(&iLocal_291);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_306))
				{
					POPULATION::_0xF74E134F40192884(iLocal_306, 2);
					ENTITY::_0x203BEFFDBE12E96A(iLocal_306, vLocal_691, fLocal_694, 1, 0, 1);
					if (!func_352(iLocal_306, -982327190))
					{
						TASK::TASK_STAND_STILL(iLocal_306, -1);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
				{
					func_313(uParam0);
					ENTITY::_0x203BEFFDBE12E96A(iLocal_301, *(vLocal_649[5 /*3*/]), &(fLocal_668[5]), 0, 0, 1);
				}
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				func_353(uParam0, iLocal_306, "HORSE_01", 0, 0, 0);
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
		iVar0 = func_354();
		iVar1 = func_355(iVar0);
		fVar2 = (1f - (MISC::ABSF(BUILTIN::TO_FLOAT(iVar1)) / BUILTIN::TO_FLOAT(8)));
		fVar3 = func_356(iVar0 < 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		fVar4 = func_356(iVar0 > 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
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
		if (!func_357(uParam0))
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
		func_358();
		func_359(uParam0);
		if (!func_360(uParam0))
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
		func_361(&(uParam0->f_206), &(uParam0->f_753));
		if (uParam0->f_176 == 4 && !func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 512))
		{
			func_362(uParam0, 0);
		}
	}
	if (func_6(uParam0->f_172, 1024) && uParam0->f_176 == 4)
	{
		func_293(uParam0, func_61(0), func_61(1), 0, 1, 1);
	}
	func_2(&(uParam0->f_172), 512);
	if (uParam0->f_176 == 4)
	{
		if (func_363(Global_35))
		{
			if (func_364())
			{
				func_365(42, 1);
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
	return func_366(Var0, &(uParam0->f_206), uParam0);
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
		func_367(&(uParam0->f_206));
	}
	func_368(&(uParam0->f_206));
	func_369(uParam0);
}

int func_103(var uParam0)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
	switch (iLocal_789)
	{
		case 0:
			if (bLocal_143)
			{
				func_312(6, 30);
				func_320(13, 0, 1, 0, -1082130432, 1, 1, 0, 0, 0, 0);
				iLocal_172[0] = 0;
				func_370(uParam0);
				func_319(uParam0, iLocal_785, 2);
				return 7;
			}
			else
			{
				func_370(uParam0);
				return 7;
			}
			break;
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
			PAD::DISABLE_CONTROL_ACTION(0, 2011525043, false);
			PAD::DISABLE_CONTROL_ACTION(0, -1046962283, false);
			PAD::DISABLE_CONTROL_ACTION(0, 1618006066, false);
			func_346(uParam0);
			return 7;
		case 2:
			ANIMSCENE::_DELETE_ANIM_SCENE(&(Local_926[5 /*6*/]));
			func_371(0, 1, 0);
			func_372(14);
			func_373(14);
			func_2(&(uParam0->f_172), 16);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
			return 8;
	}
	return 7;
}

int func_104(var uParam0)
{
	if (func_6(uParam0->f_172, 256) && !func_6(uParam0->f_172, 1024))
	{
		if (!func_357(uParam0))
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
				func_293(uParam0, func_61(0), func_61(1), 0, 1, 1);
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
		if (func_374(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			func_1(&(uParam0->f_172), 1048576);
		}
		if (!func_6(uParam0->f_172, 524288))
		{
			if (func_375(&(uParam0->f_753)))
			{
				func_1(&(uParam0->f_172), 524288);
			}
		}
	}
}

int func_107(var uParam0)
{
	vector3 vVar0;
	var uVar3;
	int iVar4;

	if (!func_210(26))
	{
		func_238(0);
		func_377(func_376(43, vLocal_688), 1);
		func_326(26);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_306))
	{
		PLAYER::MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), iLocal_306, 31, 2, 1);
	}
	func_378();
	func_379();
	func_380();
	if (iLocal_785 < 14)
	{
		func_381();
		func_382();
		if (iLocal_785 >= 9)
		{
			if (STREAMING::_0x8A3945405B31048F() > 0.85f)
			{
				func_383(0.85f);
			}
		}
	}
	if (func_384(17))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
	}
	if (func_210(25))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_306, 2.001f);
		PAD::DISABLE_CONTROL_ACTION(0, -874806616, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1453452184, false);
		PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 249, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 249, true);
		}
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 395, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 395, true);
		}
	}
	else
	{
		if (PED::GET_PED_CONFIG_FLAG(Global_35, 249, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
		}
		if (PED::GET_PED_CONFIG_FLAG(Global_35, 395, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 395, false);
		}
	}
	func_385();
	func_386(uParam0);
	func_387();
	if ((iLocal_785 == 9 || iLocal_785 == 10) || iLocal_785 == 11)
	{
		WEAPON::_0xB832F1A686B9B810(Global_35, 1, 1);
	}
	else
	{
		WEAPON::_0xB832F1A686B9B810(Global_35, 0, 0);
	}
	if (func_117() == 71)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -473983589, false);
		PAD::DISABLE_CONTROL_ACTION(0, -719620017, false);
	}
	switch (iLocal_785)
	{
		case 2:
			func_388(0);
			PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
			if (!bLocal_143)
			{
				func_389();
				func_390(uParam0);
			}
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			if (!func_391())
			{
			}
			if (!func_210(10))
			{
				func_347(1);
			}
			func_392(uParam0);
			break;
		case 3:
			func_393();
			if (!bLocal_143)
			{
				func_389();
				func_390(uParam0);
			}
			func_394(uParam0);
			if (!VOLUME::DOES_VOLUME_EXIST(iLocal_762))
			{
				func_395(&vVar0, &uVar3);
				iLocal_762 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 5f, 5f, 5f, "mJackHorseVol");
			}
			if (iLocal_793 != 2)
			{
				iLocal_793 = 2;
			}
			if (iLocal_812 == 3)
			{
				if (VOLUME::DOES_VOLUME_EXIST(iLocal_775))
				{
					func_396(&iLocal_477, iLocal_775, 0);
					VOLUME::DELETE_VOLUME(iLocal_775);
				}
				func_397();
				func_318(uParam0, (Local_825[4 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
				TASK::CLEAR_PED_TASKS(iLocal_301, 1, 0);
				TASK::TASK_STAND_STILL(iLocal_301, -1);
				func_371(0, 1, 0);
				iLocal_792 = 3;
				func_319(uParam0, iLocal_785, 4);
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
				func_388(0);
				if (ANIMSCENE::_0x3FBC3F51BF12DFBF(&(Local_926[iLocal_191 /*6*/])) < 0.83f)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
				}
			}
			break;
		case 4:
			func_394(uParam0);
			func_388(0);
			func_398(uParam0);
			func_399();
			if (func_211())
			{
				func_324(1);
				func_326(25);
				func_318(uParam0, (Local_825[5 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
				func_400();
				func_317(1);
				func_401(10);
				func_402();
				func_319(uParam0, iLocal_785, 5);
			}
			else
			{
				if (!bLocal_143)
				{
					func_389();
					func_390(uParam0);
				}
				func_403(Local_825[4 /*9*/], 0, 0);
			}
			break;
		case 5:
			func_394(uParam0);
			func_388(0);
			func_399();
			if (func_211())
			{
				func_402();
				if (iLocal_807 == 2)
				{
					func_404(5);
					func_319(uParam0, iLocal_785, 6);
				}
				else
				{
					func_403(Local_825[5 /*9*/], 0, 0);
				}
			}
			else
			{
				func_405(&iLocal_137);
				func_318(uParam0, (Local_825[4 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
				func_319(uParam0, iLocal_785, 4);
			}
			break;
		case 6:
			func_399();
			func_388(0);
			if (iLocal_152)
			{
				if (func_322(1, 0))
				{
					if (func_406(uParam0, "ABI1_ASETOFFC", 0))
					{
						func_330();
						func_293(uParam0, func_61(1), func_61(2), 1, 2, 0);
						func_317(0);
						func_327(vLocal_678, 1);
						func_318(uParam0, (Local_825[1 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
						func_319(uParam0, 2, 8);
					}
				}
			}
			else
			{
				func_402();
			}
			break;
		case 7:
			func_407();
			func_408(uParam0, 1);
			if (func_409())
			{
				func_410(2);
				func_317(0);
				func_327(vLocal_681, 0);
				func_411("RABI1_RETHORSE", 1);
				func_318(uParam0, (Local_825[iLocal_805 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
				func_319(uParam0, iLocal_785, iLocal_786);
			}
			else if (!func_210(2))
			{
				if (iLocal_786 != 15)
				{
					if (func_406(uParam0, "ABI1_LOST", 0))
					{
						func_326(2);
					}
				}
				else
				{
					func_326(2);
				}
			}
			else if (!func_412("ABI1_LOST") && !func_210(1))
			{
				func_413("RABI1_RETHORSE", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_326(1);
			}
			else if (!func_414("RABI1_RETHORSE", 1))
			{
				func_415(uParam0);
			}
			break;
		case 8:
			func_407();
			func_408(uParam0, 1);
			func_416();
			if (func_417())
			{
				PED::SET_PED_RESET_FLAG(iLocal_306, 53, true);
				func_319(uParam0, iLocal_785, 9);
			}
			break;
		case 9:
			func_418();
			func_416();
			func_402();
			if (!func_79(&uLocal_513))
			{
				if (!func_419())
				{
					if (PED::IS_PED_STOPPED(iLocal_306) || TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_306) <= (1f + 0.01f))
					{
						if (!iLocal_154)
						{
							func_420(14);
							func_421(8, 14, 1);
							func_422("RABI1_COMIC", 7000, 0, 0, 0, 1);
							iLocal_154 = 1;
						}
						if (func_406(uParam0, "ABI1_ARRIVE", 0))
						{
							func_326(3);
							func_80(&uLocal_513, 0);
							TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
							TASK::CLEAR_PED_TASKS(iLocal_306, 1, 0);
							TASK::TASK_STAND_STILL(iLocal_306, -1);
							PED::SET_PED_RESET_FLAG(iLocal_306, 53, true);
						}
					}
				}
				else
				{
					func_423(1, 0);
				}
			}
			else if ((iLocal_808 == 4 && func_302()) && func_322(1, 1))
			{
				func_317(0);
				func_410(25);
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					TASK::TASK_DISMOUNT_ANIMAL(Global_35, 262144, 0, 0, 0, 0);
				}
				func_333(17);
				TASK::CLEAR_PED_TASKS(iLocal_306, 1, 0);
				func_243(&uLocal_513);
				func_405(&iLocal_137);
				func_319(uParam0, iLocal_785, 10);
			}
			break;
		case 10:
			func_424();
			if (!func_412("ABI1_ARRIVE"))
			{
				if (func_406(uParam0, "ABI1_WHEREGO", 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_306))
					{
						TASK::CLEAR_PED_TASKS(iLocal_306, 1, 0);
						TASK::TASK_STAND_STILL(iLocal_306, -1);
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_306, 48, true);
					}
					func_327(vLocal_675, 1);
					func_425();
					iLocal_192 = func_426(0);
					iLocal_193 = iLocal_192;
					func_293(uParam0, func_61(3), func_61(4), 3, 4, 0);
					func_318(uParam0, (Local_825[8 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
					func_410(22);
					func_427();
					func_319(uParam0, iLocal_785, 11);
				}
			}
			break;
		case 11:
			func_424();
			func_428(uParam0);
			func_429();
			func_388(0);
			if (func_302())
			{
				func_430(uParam0);
			}
			if (func_431())
			{
				func_319(uParam0, iLocal_785, 12);
			}
			break;
		case 12:
			func_428(uParam0);
			func_432();
			func_429();
			if (!bLocal_138)
			{
				func_294(uParam0, 1);
			}
			func_388(0);
			if (func_302())
			{
				func_430(uParam0);
			}
			if (func_433())
			{
				func_344(1);
				func_345(1);
				func_434(0);
				func_339(0);
				func_340(0);
				func_341(0);
				func_342(0);
				func_343(0);
				func_338(1);
				func_435(&(uParam0->f_206));
				if (func_414("RABI1_GOJACK", 1))
				{
					func_411("RABI1_GOJACK", 1);
				}
				func_351(&iLocal_294);
				iLocal_803 = 9;
				func_319(uParam0, iLocal_785, 14);
				return 5;
			}
			break;
		case 14:
			func_408(uParam0, 1);
			func_399();
			func_436();
			func_388(1);
			func_389();
			func_393();
			if (func_211())
			{
				func_402();
			}
			switch (iLocal_778)
			{
				case 0:
					if (func_211())
					{
						func_423(1, 0);
						func_243(&uLocal_534);
						func_400();
						func_326(25);
						iLocal_159 = 1;
						func_318(uParam0, (Local_825[5 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
						iLocal_778 = 1;
					}
					else
					{
						if (func_352(iLocal_301, 1056466932))
						{
							if (ENTITY::IS_ENTITY_IN_WATER(Global_35) || func_437() > (fLocal_925 + 10f))
							{
								TASK::TASK_STAND_STILL(iLocal_301, -1);
							}
						}
						else if (!ENTITY::IS_ENTITY_IN_WATER(Global_35) && func_437() < (fLocal_925 + 10f))
						{
							if (!func_352(iLocal_301, 1056466932))
							{
								TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_301, Global_35, 1.5f, -0.5f, 0f, 1f, -1, 0.5f, 1, 1, 0, 1, 1);
							}
						}
						if (!func_210(14))
						{
							if (func_406(uParam0, "ABI1_GETHOME", 0))
							{
								func_326(14);
							}
						}
						else if (!func_79(&uLocal_534))
						{
							if (!func_419())
							{
								func_214(&uLocal_534);
							}
						}
						else if (func_438(&uLocal_534) > 6f)
						{
							if (func_406(uParam0, "ABI1_DAWDLEJ", 0))
							{
								func_243(&uLocal_534);
							}
						}
						func_403(Local_825[4 /*9*/], 0, 0);
					}
					break;
				case 1:
					if (func_211())
					{
						func_403(Local_825[5 /*9*/], 0, 0);
						if (iLocal_152)
						{
							vLocal_1019 = { Global_36 };
							func_327(vLocal_684, 0);
							func_371(0, 0, 0);
							func_318(uParam0, (Local_825[3 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
							func_319(uParam0, iLocal_785, 15);
						}
					}
					else if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(&(Local_926[3 /*6*/]), 0))
					{
						func_318(uParam0, (Local_825[5 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
						iLocal_778 = 0;
					}
					break;
			}
			break;
		case 15:
			func_407();
			func_389();
			func_408(uParam0, 0);
			if (func_409())
			{
				func_439(uParam0);
				func_403(Local_825[3 /*9*/], 0, 0);
				if (func_348(uParam0, 0, func_440(Global_35)))
				{
					if ((ANIMSCENE::_0x95531A4A20CCE7BC(&(Local_926[6 /*6*/]), 0) && ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_926[6 /*6*/]), "LEadin")) && ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(&(Local_926[6 /*6*/]), "Horse_01", &Local_65, true, "LEadin", 2))
					{
						vLocal_691 = { Local_65 };
						fLocal_694 = Local_65.f_3.f_2;
					}
					POPULATION::_0xF74E134F40192884(Global_35, 0);
					POPULATION::_0xF74E134F40192884(iLocal_306, 2);
					POPULATION::_0xF74E134F40192884(iLocal_301, 0);
					if (!VOLUME::DOES_VOLUME_EXIST(iLocal_763))
					{
						iLocal_763 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-112.8483f, -18.32166f, 96.7937f, 0f, 0f, -31.48123f, 4.428669f, 5.874272f, 2.208711f, "Leadin Trigger");
					}
					func_441(Global_35, vLocal_684, 0, 30f, 20f, 10f, 1084227584, 1, 1, 1, 0);
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_763, false, 0) || func_210(8))
					{
						func_326(8);
						if (PED::_0xA29FD00D45311EB7(Global_35, "cautious") > 0f)
						{
							PED::_0x437C08DB4FEBE2BD(Global_35, "cautious", 0f, -1);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
						if (!func_210(7))
						{
							if (func_442(Global_35, 1, 0, 0) != joaat("weapon_unarmed"))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 0, false, false);
							}
							TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
							TASK::OPEN_SEQUENCE_TASK(&iVar4);
							TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_691, 1f, 10000, 0.25f, false, fLocal_694);
							TASK::TASK_ACHIEVE_HEADING(0, fLocal_694, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar4);
							TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar4);
							TASK::CLEAR_SEQUENCE_TASK(&iVar4);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_300))
							{
								CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_300, 0f, 0f, 0f, true, 6000, 2000, 2000, 0);
							}
							func_353(uParam0, func_440(Global_35), "HORSE_01", 0, 0, 0);
							func_326(7);
						}
						else if (func_443())
						{
							if (func_444())
							{
								func_423(1, 0);
							}
							else
							{
								func_445();
								func_314(6, 7);
								func_319(uParam0, iLocal_785, 16);
							}
						}
					}
				}
			}
			else
			{
				if (func_210(8) || func_210(7))
				{
					TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					func_445();
					func_326(8);
					func_326(7);
				}
				if (func_414("RABI1_RETCAMP", 1))
				{
					func_411("RABI1_RETCAMP", 1);
				}
				func_446(uParam0, 3);
			}
			break;
		case 16:
			if (ANIMSCENE::_0xD8254CB2C586412B(&(Local_926[6 /*6*/]), 0) || ANIMSCENE::_0x3FBC3F51BF12DFBF(&(Local_926[6 /*6*/])) >= 0.95f)
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_291, true);
				iLocal_152 = 0;
				func_405(&iLocal_137);
				func_410(25);
				return 5;
			}
			break;
	}
	return 7;
}

bool func_108(int iParam0)
{
	return func_447(iParam0) == 0;
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
	return func_449(func_448(iParam0));
}

int func_111(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_450(func_448(iParam0));
}

int func_112(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_451(func_448(iParam0));
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
	if (!func_206(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		func_452(&(((*Global_1347702)[iParam0 /*49*/])->f_14));
		func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
		func_453(iParam0);
		if ((!func_229(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43890) || iParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(((*Global_1347702)[iParam0 /*49*/])->f_40, 0);
			func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
			func_405(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		else
		{
			func_178(iParam0, 16384);
			func_454(iParam0, 1, func_69(iParam0));
		}
	}
}

void func_116(var uParam0)
{
	func_455(1, &(uParam0->f_2605.f_482));
}

int func_117()
{
	return Global_1894899->f_2;
}

void func_118(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_456(iParam0))
	{
		return;
	}
	bVar0 = func_457(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_458(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_460(iParam0, func_459());
			func_461(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_462(iParam0, 67108864);
		func_460(iParam0, -15);
	}
	func_463(iParam0);
}

void func_119(var uParam0, int iParam1, int iParam2)
{
	if (func_464(0))
	{
		if (func_465(0))
		{
			func_466(0);
		}
	}
	if (func_464(1))
	{
		if (func_465(1))
		{
			func_466(1);
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
	func_467(553, 1, 0, 0, 1);
	func_401(10);
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
			if (func_206(iVar1))
			{
				if (func_120(iVar1, 4))
				{
					func_237(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_468(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_111(iParam0);
		if (iVar3 == 59)
		{
			func_468(1);
		}
		else if (iVar3 == 61)
		{
			func_468(0);
		}
		else if (iVar3 == 83)
		{
			func_468(0);
		}
	}
}

void func_124()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_206(iVar0))
		{
			if (func_120(iVar0, 4))
			{
				if (func_120(iVar0, 16))
				{
					func_469(iVar0, 1);
				}
				if (func_120(iVar0, 8))
				{
					func_470(iVar0, 1);
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

	func_471(uParam0->f_174, sParam1, bParam5, fParam6, 0, 0, -1, -1, 0);
	if (iParam2 || !func_472(sParam1))
	{
		func_413(sParam1, iParam3, bParam4, bParam5, sParam7, sParam8, sParam9, sParam10, iParam11);
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

	if (!func_206(iParam0))
	{
		return;
	}
	if (func_473())
	{
		func_278(iParam0, 1);
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
		if (!func_473())
		{
			((*Global_1347702)[iParam0 /*49*/])->f_35 = 104;
			((*Global_1347702)[104 /*49*/])->f_48 = ((*Global_1347702)[iParam0 /*49*/])->f_15;
		}
	}
	func_474(iParam0, 0, iParam3);
	if (func_206(((*Global_1347702)[iParam0 /*49*/])->f_35))
	{
		func_475(((*Global_1347702)[iParam0 /*49*/])->f_35);
		if (iParam1 == 1)
		{
			func_476(((*Global_1347702)[iParam0 /*49*/])->f_35, 0);
			if (func_477(iParam0))
			{
				((*Global_1347702)[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])->f_43 = ((*Global_1347702)[iParam0 /*49*/])->f_43;
			}
		}
	}
	else
	{
		func_478();
	}
	if (!func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 1) && !func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 33554432))
	{
		if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 262144))
		{
			if (bParam5)
			{
				func_479(iParam0);
			}
			bParam5 = false;
			uVar0 = func_480(((*Global_1347702)[iParam0 /*49*/])->f_15);
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
		func_481(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_482(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam6);
	}
	func_483(iParam0);
}

int func_129(int iParam0)
{
	if (!func_206(iParam0))
	{
		return 0;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_15;
}

int func_130(int iParam0)
{
	iParam0 = func_484(iParam0);
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
	vVar2 = { func_485(((*Global_2621440)[0 /*12065*/])->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_486(vVar2, uVar1, uVar0, 0);
	func_487(vVar2);
	Global_40.f_9.f_15 = func_184(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_132(int iParam0)
{
	if (func_205() != -1)
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
	func_488();
	Global_43888 = 1;
}

void func_133(int iParam0, bool bParam1)
{
	if (func_205() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_60(32768))
	{
		return;
	}
	if (!func_60(32768))
	{
		func_489(1, bParam1);
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
		((*Global_2621440)[iParam0 /*12065*/])->f_9.f_14 = func_459();
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
	func_490(Var10, 0);
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
	if (!func_210(21))
	{
		if (func_322(0, 1))
		{
			func_326(21);
		}
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
		func_491(0);
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
	if (func_492(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_493(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_493(&(Global_1347343->f_11), 16384);
	}
	if (func_494() >= 2)
	{
		if (!func_492(Global_1347343->f_11, 16384))
		{
			func_493(&(Global_1347343->f_11), 8);
		}
		func_158(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_285(Global_1935630, 2048);
	func_495(bParam5);
}

bool func_142(var uParam0)
{
	return uParam0->f_781;
}

void func_143(var uParam0)
{
	func_496(1, &(uParam0->f_2605.f_482));
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
	if (func_497(iParam0) == 3)
	{
		if (func_109(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_109(iParam0)))
		{
			if (func_110(iParam0) != 1 && func_110(iParam0) != 8)
			{
				func_498(func_110(iParam0), func_109(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_499(iParam0);
	func_203(1);
	func_500(0);
	func_501(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_502(1);
			func_503(15, 0, 1);
			break;
		case 4:
			func_503(10, 0, 1);
			break;
		case 8:
			func_503(10, 0, 1);
			break;
		case 9:
			func_503(10, 0, 1);
			break;
		case 2:
			func_503(10, 0, 1);
			break;
		case 6:
			func_503(10, 0, 1);
			break;
		case 5:
			func_503(10, 0, 1);
			break;
	}
	func_504(1);
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
		fParam2 = BUILTIN::VDIST2(Global_36, func_505(iParam0));
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
		if (func_506())
		{
			return;
		}
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "RCM_INVALID_TOD", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_422(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 1024 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_ANTAGONIZE", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_422(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 4096 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_MEMORY", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_422(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 2048 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_WANTED_REGION", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_422(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 16384 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_422(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 8192 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_COMBAT", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_422(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 32768 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED_2", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_422(sVar1, 10000, 0, 0, 0, 1);
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
		if (func_507())
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
		if (func_206(iVar0) && func_31(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
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
	if (func_71(uParam0) == 0)
	{
		if (!func_210(21))
		{
			if (func_322(1, 1))
			{
				func_326(21);
			}
		}
		else
		{
			return 1;
		}
	}
	if (func_71(uParam0) == 11)
	{
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

	PED::SET_PED_CONFIG_FLAG(iLocal_306, 300, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 300, false);
	func_508();
	func_434(1);
	func_509(&iLocal_776, 1);
	func_510(1);
	func_511(1);
	func_512();
	func_513(1);
	if (func_6(uParam0->f_172, 8))
	{
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	func_400();
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
	{
		func_371(0, 1, 0);
		func_372(14);
		func_373(14);
		func_514();
	}
	func_350(iLocal_291, 1, 1);
	func_169(&iLocal_1018, 1, 0, 1);
	func_169(&iLocal_1017, 1, 0, 1);
	func_405(&iLocal_137);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_278);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_279);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_277);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_280);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_273);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_274);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_275);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_276);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(&(iLocal_282[0]));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(&(iLocal_282[1]));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_281);
	func_23(&iLocal_304);
	func_23(&iLocal_305);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_23(uLocal_310[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	func_381();
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	if (func_515(1))
	{
		func_338(1);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_761))
	{
		func_396(&iLocal_471, iLocal_761, 0);
		VOLUME::DELETE_VOLUME(iLocal_761);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_767))
	{
		func_396(&iLocal_472, iLocal_767, 0);
		VOLUME::DELETE_VOLUME(iLocal_767);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_771))
	{
		func_396(&iLocal_474, iLocal_771, 0);
		VOLUME::DELETE_VOLUME(iLocal_771);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_773))
	{
		func_396(&iLocal_475, iLocal_773, 0);
		VOLUME::DELETE_VOLUME(iLocal_773);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_774))
	{
		func_396(&iLocal_476, iLocal_774, 0);
		VOLUME::DELETE_VOLUME(iLocal_774);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_775))
	{
		func_396(&iLocal_477, iLocal_775, 0);
		VOLUME::DELETE_VOLUME(iLocal_775);
	}
	func_516(iLocal_762);
	func_516(iLocal_766);
	func_516(iLocal_768);
	func_516(iLocal_764);
	func_516(iLocal_763);
	func_320(13, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	if (func_517(14))
	{
		func_518(14, 0);
		func_320(14, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	}
	func_320(0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_306))
	{
		if (PED::GET_PED_CONFIG_FLAG(iLocal_306, 300, true))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_306, 300, false);
		}
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 249, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 395, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 395, false);
	}
	func_169(&iLocal_306, 1, 0, 1);
	func_169(&iLocal_309, 1, 0, 1);
	func_351(&iLocal_293);
	func_351(&iLocal_292);
	func_351(&iLocal_291);
	func_401(10);
	STREAMING::REMOVE_ANIM_DICT(sLocal_490);
	STREAMING::REMOVE_ANIM_DICT(sLocal_491);
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
	func_243(&(uParam0->f_2588));
}

void func_162(var uParam0)
{
	struct<2> Var0;

	Var0 = { func_519(uParam0->f_174) };
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&Var0))
	{
		HUD::_TEXT_BLOCK_DELETE(&Var0);
	}
	Var0 = { func_520(uParam0->f_174) };
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
	switch (func_205())
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

	if (!func_521(iParam0))
	{
		return;
	}
	if (!func_522(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = func_523(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_KEEP_TASK(iVar0, false);
		}
	}
	func_320(iParam0, 0, 0, bParam1, fParam2, bParam3, bParam4, bParam5, bParam6, 0, 0);
	func_524(iParam0, 0);
	func_372(iParam0);
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
		func_525(((*Global_1347702)[iParam0 /*49*/])->f_41);
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

	if (func_526(iParam0, &iVar1, &iVar0))
	{
		if (func_527(iVar1, iVar0, 1))
		{
			func_528(iVar1, iVar0);
		}
	}
}

bool func_174(int iParam0)
{
	int iVar0;

	iVar0 = func_447(iParam0);
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
	if (!func_174(iParam0) && !func_282(iParam0))
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
	if (func_497(iParam0) == 3 || (func_497(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_109(iParam0))))
	{
		func_498(func_110(iParam0), func_109(iParam0), iParam2);
		if ((!func_57(Global_1572864->f_8) && !func_146(0, 1, 0)) && !func_90(&Global_1935630, 32768))
		{
			iVar0 = func_529(iParam0);
			if (iVar0 != -1)
			{
				func_530(0);
			}
			else if (func_110(iParam0) == 8)
			{
				iVar0 = func_531();
				if (iVar0 != -1)
				{
					func_530(0);
				}
			}
		}
	}
	func_501(iParam0, 0);
	if (func_56(0) == iParam0)
	{
		func_203(1);
		func_500(0);
		func_504(1);
	}
	func_532(iParam0, 1);
	func_499(iParam0);
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

	if (!func_206(iParam0))
	{
		return;
	}
	func_533(&(((*Global_1347702)[iParam0 /*49*/])->f_14), iParam1);
	func_533(&(((*Global_1347702)[iParam0 /*49*/])->f_14), 2);
	func_223(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 16384);
	func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_206(&(Global_40.f_450[iVar0])))
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
		func_534(uParam0->f_41[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_535(uParam0->f_117[iVar0 /*5*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_536((*uParam0)[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_537(uParam0->f_28[iVar0 /*3*/]);
		iVar0++;
	}
	func_162(uParam0);
}

void func_181(int iParam0)
{
	iParam0 = func_484(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_538(iParam0, 32);
	func_539();
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
	if (func_456(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_540(vParam0, bParam3);
}

void func_185(var uParam0, float fParam1)
{
	uParam0->f_741 = fParam1;
}

void func_186(var uParam0, float fParam1)
{
	uParam0->f_742 = fParam1;
}

void func_187(var uParam0, int iParam1)
{
	uParam0->f_748 = iParam1;
}

void func_188(var uParam0, int iParam1)
{
	uParam0->f_749 = iParam1;
}

void func_189()
{
	(Local_926[0 /*6*/])->f_3 = "script@rcm@ABI1@LEADIN@RSC1@base_callovers_leadin";
	(Local_926[1 /*6*/])->f_3 = "script@rcm@abi1@ig@rsc_ig_1_jackplaymud@rsc_ig_1_jackplaymud";
	(Local_926[2 /*6*/])->f_3 = "script@rcm@abi1@ig@rsc_ig_2_jackgetsfishgear@rsc_ig_2_jackgetsfishgear_jack_get_gear";
	(Local_926[3 /*6*/])->f_3 = "script@rcm@ABI1@IG@RSC_IG_7_JackDismountWithGear@RSC_IG_7_JackMountWithGear";
	(Local_926[4 /*6*/])->f_3 = "script@rcm@ABI1@IG@RSC_IG_7_JackDismountWithGear@RSC_IG_7_JackDismountWithGear";
	(Local_926[5 /*6*/])->f_3 = "script@rcm@ABI1@LEADIN@RSC4@Base";
	(Local_926[6 /*6*/])->f_3 = "script@rcm@ABI1@LEADIN@RSC4@Leadin";
	(Local_926[7 /*6*/])->f_3 = "script@rcm@ABI1@IG@RSC_IG_2_JackGetsFishGear@rsc_ig_2_jackgetsfishgear_Arthur";
	(Local_926[8 /*6*/])->f_3 = "script@rcm@ABI1@IG@RSC_IG_2_JackGetsFishGear@RSC_IG_2_JackGetsFishGear_Left";
	(Local_926[9 /*6*/])->f_3 = "script@rcm@ABI1@IG@RSC_IG_2_JackGetsFishGear@RSC_IG_2_JackGetsFishGear_Front";
	(Local_926[10 /*6*/])->f_3 = "script@rcm@ABI1@IG@RSC_IG_2_JackGetsFishGear@RSC_IG_2_JackGetsFishGear_Right";
	(Local_926[11 /*6*/])->f_3 = "script@rcm@ABI1@IG@RSC_IG_12_FishingSureIsBoring@RSC_IG_12_FishingSureIsBoring";
	(Local_926[12 /*6*/])->f_3 = "script@rcm@ABI1@IG@RSC_IG_13_JackPickYarrow@RSC_IG_13_JackPicksYarrow";
	(Local_926[0 /*6*/])->f_4 = "ABI LEAD_IN";
	(Local_926[1 /*6*/])->f_4 = "JACK IDLE";
	(Local_926[2 /*6*/])->f_4 = "JACK GET GEAR";
	(Local_926[3 /*6*/])->f_4 = "MOUNT WITH GEAR";
	(Local_926[4 /*6*/])->f_4 = "DISMOUNT WITH GEAR";
	(Local_926[5 /*6*/])->f_4 = "AGIGAIL BASE";
	(Local_926[6 /*6*/])->f_4 = "OUTRO LEADIN";
	(Local_926[7 /*6*/])->f_4 = "ARTHUR UPPER";
	(Local_926[8 /*6*/])->f_4 = "JACK GEAR LEFT";
	(Local_926[9 /*6*/])->f_4 = "JACK GEAR CENTRE";
	(Local_926[10 /*6*/])->f_4 = "JACK GEAR RIGHT";
	(Local_926[11 /*6*/])->f_4 = "FISHING_BORING";
	(Local_926[12 /*6*/])->f_4 = "PICK YARROW";
}

void func_190()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		Local_825[iVar0 /*9*/] = 0;
		(Local_825[iVar0 /*9*/])->f_1 = 0;
		iVar0++;
	}
	(Local_825[0 /*9*/])->f_2 = "RABI1_GOJACK";
	(Local_825[1 /*9*/])->f_2 = "RABI1_GOFISH";
	(Local_825[2 /*9*/])->f_2 = "RABI1_PICKFLOWER";
	(Local_825[3 /*9*/])->f_2 = "RABI1_RETCAMP";
	(Local_825[4 /*9*/])->f_2 = "RABI1_GOMOUNT";
	(Local_825[5 /*9*/])->f_2 = "RABI1_WAITJK";
	(Local_825[6 /*9*/])->f_2 = "RABI1_RETJACK";
	(Local_825[7 /*9*/])->f_2 = "RABI1_RETHORSE";
	(Local_825[8 /*9*/])->f_2 = "RABI1_GORIVER";
	(Local_825[9 /*9*/])->f_2 = "RABI1_RETFISH";
	(Local_825[10 /*9*/])->f_2 = "RABI1_FISHCLOSE";
}

void func_191()
{
	*(vLocal_623[0 /*3*/]) = { -115.2755f, -42.8305f, 94.5858f };
	fLocal_642[0] = 351.688f;
	*(vLocal_649[0 /*3*/]) = { -124.5507f, -32.4855f, 94.7828f };
	fLocal_668[0] = 203.77f;
	*(vLocal_623[1 /*3*/]) = { -108.0446f, -14.7239f, 94.7822f };
	fLocal_642[1] = 353.1612f;
	*(vLocal_649[1 /*3*/]) = { 109.0446f, -15.7239f, 94.7822f };
	fLocal_668[1] = 353.1612f;
	*(vLocal_623[2 /*3*/]) = { -318.5669f, 385.8517f, 53.2584f };
	fLocal_642[2] = 114.5595f;
	*(vLocal_649[2 /*3*/]) = { -317.5669f, 386.8517f, 53.7584f };
	fLocal_668[2] = 61.3485f;
	*(vLocal_623[3 /*3*/]) = { -453.2686f, 199.6056f, 42.1735f };
	fLocal_642[3] = 171.3511f;
	*(vLocal_649[3 /*3*/]) = { -454.1484f, 202.5942f, 42.5257f };
	fLocal_668[3] = 209.7911f;
	*(vLocal_623[4 /*3*/]) = { -468.2877f, 188.7003f, 40.4181f };
	fLocal_642[4] = 15.9698f;
	*(vLocal_649[4 /*3*/]) = { -468.9155f, 192.2223f, 40.6252f };
	fLocal_668[4] = 304.651f;
	*(vLocal_623[5 /*3*/]) = { -115.4912f, -20.3122f, 94.9003f };
	fLocal_642[5] = 54.1943f;
	*(vLocal_649[5 /*3*/]) = { -116.9991f, -19.9179f, 94.9597f };
	fLocal_668[5] = 112.5979f;
}

bool func_192(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return MISC::IS_BIT_SET(Global_40.f_6563.f_271, iVar0);
}

void func_193(var uParam0)
{
	func_541(uParam0);
	func_542(uParam0, 1);
	func_543(uParam0, 1);
	func_544(uParam0, 1);
	func_545(uParam0, 1);
	func_546(uParam0, 1);
	func_547(uParam0, 1);
	func_548(uParam0, 1);
	func_549(uParam0, 0);
}

int func_194(var uParam0, int iParam1)
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

int func_195(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!func_550((*uParam0)[iVar0 /*3*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_196(var uParam0, char* sParam1)
{
	struct<2> Var0;

	Var0 = { func_519(uParam0->f_174) };
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
			uParam0->f_2573 = { func_520(uParam0->f_174) };
		}
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_2573)))
	{
		HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_2573));
	}
}

void func_197(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_551(uParam0, sParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_552(uParam0);
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

int func_198(var uParam0)
{
	return uParam0->f_168;
}

void func_199(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (func_553((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1))
		{
			func_554((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_41[iVar0 /*3*/])->f_2 == 0 || !func_553((uParam0->f_41[iVar0 /*3*/])->f_2, iParam2))
			{
				func_534(uParam0->f_41[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_553((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1))
		{
			func_554((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1);
			if ((uParam0->f_117[iVar0 /*5*/])->f_4 == 0 || !func_553((uParam0->f_117[iVar0 /*5*/])->f_4, iParam2))
			{
				func_535(uParam0->f_117[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_553(((*uParam0)[iVar0 /*3*/])->f_2, iParam1))
		{
			func_554(((*uParam0)[iVar0 /*3*/])->f_2, iParam1);
			if (((*uParam0)[iVar0 /*3*/])->f_2 == 0 || !func_553(((*uParam0)[iVar0 /*3*/])->f_2, iParam2))
			{
				func_536((*uParam0)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_553((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1))
		{
			func_554((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_28[iVar0 /*3*/])->f_2 == 0 || !func_553((uParam0->f_28[iVar0 /*3*/])->f_2, iParam2))
			{
				func_537(uParam0->f_28[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

int func_200(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_44 != -1)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_44 != 0)
		{
			if (!func_555(((*Global_1347702)[iParam0 /*49*/])->f_44))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_201(var uParam0)
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
						*uParam0 = func_556(vVar0.z);
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

void func_202(bool bParam0)
{
	if (!bParam0)
	{
		LAW::_0x61B98367D93F012F(PLAYER::GET_PLAYER_INDEX());
	}
	LAW::_ENABLE_DISPATCH_LAW(bParam0);
	LAW::_ENABLE_DISPATCH_LAW_2(bParam0);
}

void func_203(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_125(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_285(Global_1935630, 4194304);
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

int func_204(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if (func_550(uParam0->f_41[iVar1 /*3*/]))
		{
			if (func_553((uParam0->f_41[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_557(uParam0->f_41[iVar1 /*3*/]))
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
		if (func_558(uParam0->f_117[iVar1 /*5*/]))
		{
			if (func_553((uParam0->f_117[iVar1 /*5*/])->f_4, iParam1))
			{
				if (!func_559(uParam0->f_117[iVar1 /*5*/]))
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
		if (func_560((*uParam0)[iVar1 /*3*/]))
		{
			if (func_553(((*uParam0)[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_561((*uParam0)[iVar1 /*3*/]))
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
		if (func_562(uParam0->f_28[iVar1 /*3*/]))
		{
			if (func_553((uParam0->f_28[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_563(uParam0->f_28[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (iParam1 != 0 && iParam1 != 4)
	{
		if (!func_564(uParam0->f_174))
		{
			iVar0 = 0;
		}
		if (!func_565(uParam0))
		{
			iVar0 = 0;
		}
	}
	if (!func_566(uParam0, iParam1))
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

int func_205()
{
	return Global_1572887->f_12;
}

bool func_206(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_207(vector3 vParam0, var uParam3)
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
	iVar0 = func_442(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_567(0, 0);
		if (func_568(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_569(1, 0);
		}
	}
	else
	{
		func_569(1, 0);
	}
	func_154(0);
	func_570(0, vParam0, uParam3);
	return 1;
}

int func_208(var uParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;

	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!func_209(iParam1, 207))
		{
			func_213(uParam0);
			return 1;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, Global_35, 1, 1))
		{
			func_213(uParam0);
			return 1;
		}
		else
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
			fVar3 = 10f;
			if (FIRE::IS_EXPLOSION_ACTIVE_IN_AREA(-1, vVar0 - Vector(fVar3, fVar3, fVar3), vVar0 + Vector(fVar3, fVar3, fVar3)))
			{
				func_213(uParam0);
				return 1;
			}
		}
	}
	return 0;
}

int func_209(int iParam0, int iParam1)
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
	if (func_571(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_571(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_571(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_571(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_571(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_571(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return 0;
		}
	}
	if (func_571(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_571(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_210(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_194, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_211()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (func_440(Global_35) == iLocal_306)
		{
			func_572("RABI1_GOMOUNT");
			return 1;
		}
	}
	return 0;
}

void func_212(int iParam0, bool bParam1, bool bParam2)
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

void func_213(var uParam0)
{
	if (!func_6(uParam0->f_172, 134217728))
	{
		func_1(&(uParam0->f_172), 134217728);
	}
}

void func_214(var uParam0)
{
	func_573(uParam0, 0f);
}

float func_215(var uParam0)
{
	if (!func_79(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_272(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_574() - uParam0->f_1);
}

void func_216(int iParam0, vector3 vParam1, char[4] cParam4, float fParam5)
{
	float fVar0;

	fVar0 = func_575(Global_35, vParam1, 0);
	switch (&iLocal_819[iParam0])
	{
		case 0:
			fLocal_187 = fVar0;
			fLocal_185 = (fVar0 + fParam5);
			func_214(&uLocal_522);
			iLocal_819[iParam0] = 1;
			break;
		case 1:
			if (func_438(&uLocal_522) > 10f)
			{
				if (fVar0 < fLocal_187)
				{
					func_243(&uLocal_522);
					iLocal_819[iParam0] = 0;
				}
				else if (fVar0 > fLocal_185)
				{
					func_413(cParam4, 7500, 1, 0, 0, 0, -1, -1, 0);
					fLocal_186 = fVar0;
					func_214(&uLocal_522);
					iLocal_819[iParam0] = 2;
				}
				else
				{
					func_214(&uLocal_522);
				}
			}
			break;
		case 2:
			if (func_438(&uLocal_522) > 7.5f)
			{
				if (fVar0 > fLocal_186)
				{
					iLocal_819[iParam0] = 3;
				}
				else
				{
					fLocal_185 = fVar0;
					func_214(&uLocal_522);
					iLocal_819[iParam0] = 1;
				}
			}
			break;
		case 3:
			break;
	}
}

int func_217(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_576(bParam1, iParam2, bParam3);
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

float func_218(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_219()
{
	if (!iLocal_141)
	{
		if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 130948705) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 42190210)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 1623727326)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, -922478227))
		{
			uLocal_561[0] = func_422("RABI1_NOGUNS", 7000, 0, 0, 0, 1);
			iLocal_141 = 1;
		}
	}
	else if (!iLocal_142)
	{
		if (!func_515(0))
		{
			if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 130948705) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 42190210)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 1623727326)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, -922478227))
			{
				uLocal_561[0] = func_422("RABI1_NOGUNS", 7000, 0, 0, 0, 1);
				iLocal_142 = 1;
			}
		}
	}
}

int func_220(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_577(((*Global_1347702)[iParam0 /*49*/])->f_15) != 0)
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

int func_221(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_578(0);
	if (iVar0 == 11)
	{
		iVar1 = func_579(func_112(iParam1), 1);
		if (iVar1 != -589165916)
		{
			if ((iVar1 == -103573613 || iVar1 == 194099983) || iVar1 == 2038046186)
			{
				iVar2 = func_580(Global_40.f_4283);
				if (func_456(iVar2) && iVar2 == ((*Global_1347702)[uParam0->f_174 /*49*/])->f_27)
				{
					return 1;
				}
			}
		}
	}
	else if (iVar0 == 4)
	{
		iVar3 = func_581(iParam1);
		if (iVar3 != -1)
		{
			if ((iVar3 == 1 || iVar3 == 3) || iVar3 == 2)
			{
				if (func_456(Global_1894899->f_2) && Global_1894899->f_2 == func_580(Global_40.f_4283))
				{
					return 1;
				}
			}
		}
	}
	if (func_582(uParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_222(int iParam0)
{
	int iVar0;
	int iVar1;

	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 8 != 0)
	{
		return 1;
	}
	if (func_583(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		if (!func_583(((*Global_1835011)[44 /*74*/])->f_1, 1))
		{
			if (iParam0 != 82 && iParam0 != 83)
			{
				return 1;
			}
		}
		if (func_583(((*Global_1835011)[67 /*74*/])->f_1, 1))
		{
			if ((!func_583(((*Global_1347702)[8 /*49*/])->f_15, 1) && !func_583(((*Global_1835011)[69 /*74*/])->f_1, 1)) && iParam0 != 8)
			{
				if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1835011)[67 /*74*/])->f_22)) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(((*Global_1835011)[67 /*74*/])->f_22))) > 0)
				{
					return 1;
				}
			}
		}
	}
	else if ((!func_584(2) && !func_583(((*Global_1347702)[61 /*49*/])->f_15, 1)) && func_583(((*Global_1347702)[59 /*49*/])->f_15, 1))
	{
		if (iParam0 != 60 && iParam0 != 61)
		{
			return 1;
		}
	}
	if (iParam0 == 15)
	{
		iVar1 = func_587(func_585(65536), 0, 3, func_586(65536));
		if (func_57(iVar1))
		{
			iVar0 = func_577(iVar1);
			if (!func_571(iVar0, 4))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 26 || iParam0 == 27)
	{
		if (((((!func_583(((*Global_1835011)[14 /*74*/])->f_1, 1) && func_583(((*Global_1347702)[62 /*49*/])->f_15, 1)) && func_583(((*Global_1347702)[0 /*49*/])->f_15, 1)) && func_583(((*Global_1347702)[94 /*49*/])->f_15, 1)) && func_583(((*Global_1835011)[25 /*74*/])->f_1, 1)) && (func_583(((*Global_1835011)[8 /*74*/])->f_1, 1) || (func_583(((*Global_1347702)[98 /*49*/])->f_15, 1) && func_577(((*Global_1347702)[98 /*49*/])->f_15) == 0)))
		{
			return 1;
		}
	}
	else if (iParam0 == 27)
	{
		if (!func_583(((*Global_1835011)[34 /*74*/])->f_1, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 42)
	{
		if (!func_583(((*Global_1347702)[41 /*49*/])->f_15, 1))
		{
			if (!func_588(8))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 51)
	{
		if (!func_589(2))
		{
			return 1;
		}
	}
	else if (iParam0 == 52)
	{
		if (!func_583(((*Global_1347702)[51 /*49*/])->f_15, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 57)
	{
		if (func_282(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 69 || iParam0 == 70)
	{
		if (func_590(((*Global_1347702)[iParam0 /*49*/])->f_15) == 0)
		{
			if (func_591() <= 160)
			{
				return 1;
			}
			else
			{
				func_592(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
			}
		}
		if (!func_593(68))
		{
			return 1;
		}
	}
	else if (iParam0 == 77)
	{
		if (func_282(((*Global_1835011)[47 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_282(((*Global_1835011)[45 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_594(16, 0))
		{
			return 1;
		}
	}
	else if (iParam0 == 87)
	{
		if (func_282(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 95)
	{
		if (func_282(((*Global_1835011)[20 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_282(((*Global_1835011)[21 /*74*/])->f_1))
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
		else if (!SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[113 /*49*/])->f_42, false) && func_595())
		{
			if (func_413("MUDTOWN32_altobj", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
			{
				func_179(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 262144);
				func_223(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 64);
				func_128(113, 1, 0, 1, 1, 1, 0);
				return 1;
			}
		}
	}
	else if (iParam0 == 99)
	{
		if (func_596(-404697685, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 117)
	{
		if (func_282(((*Global_1835011)[69 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 136)
	{
		if (func_282(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_223(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_224(int iParam0)
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

int func_225(int iParam0)
{
	if (!func_456(iParam0))
	{
		return 0;
	}
	return func_457(iParam0, 33554432);
}

int func_226(int iParam0)
{
	if (!func_456(iParam0))
	{
		return 0;
	}
	return func_457(iParam0, 67108864);
}

var func_227()
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

bool func_228(int iParam0, int iParam1)
{
	return func_597(iParam0, iParam1);
}

int func_229(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (func_217(iParam0, bParam1, iParam2, iParam3))
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

int func_230(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
			else if (func_598(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0]), 16, 1))
			{
				if (iParam1 == 0)
				{
					return 0;
				}
				else if (!func_522(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])))
				{
					return 0;
				}
			}
			if (iParam4 && func_90(&Global_1935630, 4096))
			{
			}
			else if (func_599(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0]), 44, 0) && iParam2 == 1)
			{
			}
			else if (!func_600(func_523(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])), -1f, 10f, 1, 1, 40f))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_231(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43))
	{
		if (!func_601(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43), &(uParam0->f_178), &iVar0, 1, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_232(int iParam0, float fParam1)
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

int func_233(var uParam0)
{
	return 0;
}

int func_234(float fParam0)
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

void func_235()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_521(iVar0) && func_522(iVar0))
		{
			func_602(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_80(&(Global_1359489->f_40), 1);
}

void func_236(var uParam0)
{
	if (func_71(uParam0) == 0)
	{
		func_603(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1);
	}
	else
	{
		func_603(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 0);
	}
}

void func_237(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_276(iParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_277(iParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(iVar0, func_277(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_277(iParam0)))
			{
				UILOG::_UILOG_REMOVE_ENTRY(2, func_277(iParam0));
			}
		}
	}
	func_121(iParam0, 4);
	func_121(iParam0, 8);
	func_121(iParam0, 16);
}

void func_238(int iParam0)
{
	Global_36579 = iParam0;
}

void func_239(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_240(int iParam0)
{
	func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			func_246(iParam0, func_69(iParam0), 1, 0);
		}
		else
		{
			func_604(iParam0);
		}
	}
	else
	{
		func_115(iParam0, 0);
	}
}

void func_241(var uParam0)
{
	if (func_605(uParam0->f_174))
	{
		func_606(262144, 5, 0, 1);
		func_607(720f, 1, 0);
	}
}

void func_242(int iParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_fishingrod"), 0, 0))
	{
		return;
	}
	Global_1900073->f_18 = iParam0;
}

void func_243(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_244(var uParam0)
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

float func_245(int iParam0)
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

void func_246(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;

	if (!func_206(iParam0))
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
	((*Global_1347702)[iParam0 /*49*/])->f_38 = func_608(iParam0);
	if (!bParam5 && func_609(iParam0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::BLIP_ADD_FOR_RADIUS(((*Global_1347702)[iParam0 /*49*/])->f_38, func_505(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_18);
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
		func_610(8);
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
	func_604(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(((*Global_1347702)[iParam0 /*49*/])->f_37, 64, iParam0);
	if (func_205() == -1)
	{
		func_611(iParam0);
		iVar0 = func_580(Global_40.f_4283);
		if (func_456(iVar0) && func_612(((*Global_1888801)[iVar0 /*35*/])->f_13))
		{
			iVar1 = 1;
			bVar2 = func_613(iVar0);
		}
		if (func_614(iParam0, iVar1, iVar0))
		{
			func_615(((*Global_1347702)[iParam0 /*49*/])->f_15, bVar2, iVar1, iVar0);
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
		if (((!func_609(iParam0) || func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 1)) || func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 512)) || func_46(((*Global_1347702)[iParam0 /*49*/])->f_13, 2048))
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
		if (func_616(iParam0))
		{
			if (iParam0 == 97)
			{
				func_365(185, 0);
			}
			else
			{
				func_365(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = ((*Global_1347702)[iParam0 /*49*/])->f_37;
			((*Global_1347702)[iParam0 /*49*/])->f_40 = func_422(MISC::_CREATE_VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_278(iParam0, 2);
	}
}

void func_247(int iParam0, float fParam1)
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

void func_248(int iParam0, vector3 vParam1, float fParam4)
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
	if (func_617(iParam0, fParam4))
	{
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2048);
		func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		func_115(iParam0, 0);
		func_246(iParam0, vParam1, 1, 0);
	}
}

void func_249(int iParam0)
{
	if (func_618(179))
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
	else if (func_609(iParam0))
	{
		return;
	}
	if (((MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37) && MAP::IS_BLIP_ON_MINIMAP(((*Global_1347702)[iParam0 /*49*/])->f_37)) && BUILTIN::VDIST2(func_69(iParam0), Global_36) < 10000f) && func_619())
	{
		func_620(179, ((*Global_1347702)[iParam0 /*49*/])->f_37, 0);
	}
}

void func_250(int iParam0)
{
	if (func_618(180))
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_36 != -1822497728)
	{
		return;
	}
	else if (!func_609(iParam0))
	{
		return;
	}
	if ((MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37) && MAP::IS_BLIP_ON_MINIMAP(((*Global_1347702)[iParam0 /*49*/])->f_37)) && func_619())
	{
		func_620(180, ((*Global_1347702)[iParam0 /*49*/])->f_37, 0);
	}
}

void func_251(var uParam0)
{
	if (func_6(uParam0->f_172, 16))
	{
		func_102(uParam0, 0);
		func_87(uParam0);
	}
}

int func_252(var uParam0)
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
		Var0 = { func_621(uParam0->f_174) };
		uParam0->f_751 = ANIMSCENE::_CREATE_ANIM_SCENE(&Var0, 0, 0, false, true);
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_751))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_751);
		}
	}
	return 0;
}

struct<8> func_253()
{
	char cVar0[64];

	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

struct<8> func_254(var uParam0)
{
	return uParam0->f_350;
}

void func_255(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_622(uParam0) };
	func_309(uParam0, &Var0);
}

void func_256(var uParam0, char* sParam1)
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
	func_309(uParam0, sParam1);
	func_623(uParam0, 2097152, 1);
	func_310(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_348, sParam1, true);
}

int func_257(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_258(var uParam0)
{
	if (uParam0->f_177 == 6)
	{
		return 1;
	}
	else if (uParam0->f_177 == 2)
	{
		return 1;
	}
	else if (func_624(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_259(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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
			return (func_625(uParam0, 256) && !func_625(uParam0, 4194304));
		}
		uParam0->f_415 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	func_626(uParam0, sParam1);
	if (!func_625(uParam0, 64))
	{
		if (!func_257(func_627(uParam0)))
		{
			func_310(uParam0, 64);
		}
		else
		{
			vVar0 = { func_628(uParam0) };
			if (!func_257(vVar0))
			{
				func_629(uParam0, vVar0);
			}
		}
		return 0;
	}
	fVar3 = func_575(Global_35, func_627(uParam0), 1);
	if (func_625(uParam0, 128) || func_625(uParam0, 256))
	{
		if ((fVar3 >= func_630(uParam0) && !bParam2) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
		{
			if (uParam0->f_433)
			{
				func_631();
				uParam0->f_433 = 0;
			}
			func_632(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
			}
			func_367(uParam0);
			func_623(uParam0, 128, 1);
			func_623(uParam0, 256, 1);
			func_623(uParam0, 4096, 1);
			func_623(uParam0, 32768, 1);
			func_623(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_633(uParam0) || bParam2)
	{
		if (!func_625(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
			{
				if (func_633(uParam0) >= func_630(uParam0))
				{
				}
				Var4 = { func_254(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_435(uParam0);
				}
				Var4 = { func_254(uParam0) };
				iVar12 = 256;
				if (!func_625(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_348 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_344), iVar12, &Var4, false, true);
				func_634(uParam0, 0, 0, 0, 0);
				func_310(uParam0, 128);
			}
		}
	}
	if (func_625(uParam0, 128))
	{
		if (func_625(uParam0, 256) && !func_625(uParam0, 4194304))
		{
			return 1;
		}
		func_635(uParam0);
		if (!uParam0->f_433)
		{
			if (func_636())
			{
				func_637(4096);
				uParam0->f_433 = 1;
			}
		}
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_348, 1, 0))
		{
			bVar13 = true;
			Var15 = { func_622(uParam0) };
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
			if (!func_625(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_348, &Var15))
				{
					if (!func_625(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_348, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_348, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_348, &Var15);
						}
						func_310(uParam0, 16777216);
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
			func_310(uParam0, 256);
			func_623(uParam0, 4194304, 1);
			return 1;
		}
	}
	return 0;
}

void func_260(var uParam0)
{
}

bool func_261(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

int func_262(var uParam0, char* sParam1, int iParam2)
{
	if (func_261(sParam1, 2))
	{
		return 0;
	}
	if (func_261(sParam1, 1))
	{
		return 0;
	}
	if (iParam2 < sParam1->f_11 || iParam2 > sParam1->f_13)
	{
		return 0;
	}
	if ((func_638(sParam1) == 9 || func_638(sParam1) == 12) || func_638(sParam1) == 13)
	{
		if (!func_261(sParam1, 8))
		{
			if (iParam2 == sParam1->f_11)
			{
				func_639(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return 1;
		}
	}
	if (iParam2 >= sParam1->f_11)
	{
		return func_640(uParam0, func_638(sParam1));
	}
	return 0;
}

void func_263(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::START_AUDIO_SCENE(sParam0);
	}
	func_639(sParam0, 1);
}

int func_264(var uParam0, char* sParam1, int iParam2)
{
	if (!func_261(sParam1, 1))
	{
		return 0;
	}
	if (func_261(sParam1, 2))
	{
		return 0;
	}
	if (iParam2 > sParam1->f_13)
	{
		return 1;
	}
	if ((func_641(sParam1) == 9 || func_641(sParam1) == 12) || func_641(sParam1) == 13)
	{
		if (!func_261(sParam1, 8))
		{
			if (iParam2 == sParam1->f_13)
			{
				func_639(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return 1;
		}
	}
	if (iParam2 >= sParam1->f_13)
	{
		return func_640(uParam0, func_641(sParam1));
	}
	return 0;
}

void func_265(char* sParam0)
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
	func_639(sParam0, 2);
}

int func_266(var uParam0, char* sParam1, int iParam2)
{
	if (func_261(sParam1, 1))
	{
		return 0;
	}
	if (func_638(sParam1) == 2)
	{
		return uParam0->f_177 == 2;
	}
	if (func_638(sParam1) == 0)
	{
		if (uParam0->f_177 == 6 && func_642(uParam0) == -1)
		{
			return 1;
		}
	}
	if (sParam1->f_11 != iParam2)
	{
		if (((func_638(sParam1) == 9 || func_638(sParam1) == 12) || func_638(sParam1) == 13) && func_261(sParam1, 8))
		{
			return 1;
		}
		return 0;
	}
	switch (func_638(sParam1))
	{
		case 0:
			return uParam0->f_177 == 6;
		case 4:
			return func_375(&(uParam0->f_753));
		case 1:
		case 10:
		case 11:
			return uParam0->f_177 == 7;
		case 9:
		case 12:
		case 13:
			if (!func_261(sParam1, 8))
			{
				func_639(sParam1, 8);
			}
			break;
	}
	return 0;
}

void func_267(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::_0x2B9C37C01BF25EDB(sParam0);
	}
	func_639(sParam0, 1);
}

int func_268(char* sParam0, bool bParam1)
{
	if (func_261(sParam0, 1))
	{
		return 0;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		AUDIO::PREPARE_MUSIC_EVENT(sParam0);
		func_639(sParam0, 1);
		return 1;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_639(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_639(sParam0, 1);
			return 0;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_639(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_639(sParam0, 1);
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
		func_639(sParam0, 1);
		return 1;
	}
	func_639(sParam0, 1);
	return 0;
}

void func_269(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_482)
	{
		if ((func_261(uParam0->f_482[iVar0 /*16*/], 1048576) && func_261(uParam0->f_482[iVar0 /*16*/], 4)) && !func_261(uParam0->f_482[iVar0 /*16*/], 1))
		{
			AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_482[iVar0 /*16*/]);
			return;
		}
		iVar0++;
	}
}

int func_270(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
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
		if (!func_643(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_644(uParam0, 0))
			{
				if (func_645(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_646(uParam0, 1, &iVar0))
					{
					}
					if (func_647(uParam0, 3, &cVar2))
					{
					}
					if (func_646(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_646(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_646(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_646(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_646(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 15 && uParam0->f_785 < 15)
						{
							if (!func_648(uParam0, &cVar2, uParam0->f_785))
							{
								*((*uParam0)[uParam0->f_785 /*16*/]) = { cVar2 };
								func_639((*uParam0)[uParam0->f_785 /*16*/], 1048576);
								uParam0->f_785++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 15 && uParam0->f_786 < 15)
						{
							*(uParam0->f_241[uParam0->f_786 /*16*/]) = { cVar2 };
							func_639(uParam0->f_241[uParam0->f_786 /*16*/], 1048576);
							uParam0->f_786++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 16 && uParam0->f_787 < 16)
						{
							*(uParam0->f_482[uParam0->f_787 /*16*/]) = { cVar2 };
							func_639(uParam0->f_482[uParam0->f_787 /*16*/], 1048576);
							if (!bVar19 && func_261(&cVar2, 4))
							{
								AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_482[uParam0->f_787 /*16*/]);
								bVar19 = true;
							}
							uParam0->f_787++;
						}
					}
					else if (iVar0 < 2 && uParam0->f_788 < 2)
					{
						if (!func_648(&(uParam0->f_739), &cVar2, uParam0->f_788))
						{
							*(uParam0->f_739[uParam0->f_788 /*16*/]) = { cVar2 };
							func_639(uParam0->f_739[uParam0->f_788 /*16*/], 1048576);
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
			if (func_644(uParam0, 12))
			{
				if (func_646(uParam0, 13, &iVar0))
				{
				}
				if (func_646(uParam0, 14, &iVar1))
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
		func_649(uParam0);
	}
	return 1;
}

bool func_271(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_272(var uParam0)
{
	return func_271(*uParam0, 2);
}

int func_273()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_274(var uParam0)
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
		func_650(vVar0, 2.5f, 1, 0, 0, 0, 0);
		_NAMESPACE49::_0x9D16896F0DBE78A2(vVar0, 2.5f);
		if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 524288))
		{
			((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = func_651(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, vVar0, 0, 1, 1, 0, 1, 1, 0, 1, 1);
		}
		else
		{
			((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = func_651(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, vVar0, 0, 1, 1, 0, 1, 1, 1, 1, 0);
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

int func_275(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!func_32(uParam0, 64))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_297))
		{
			iLocal_297 = OBJECT::CREATE_OBJECT(iLocal_280, vLocal_572, false, true, false, false, true);
			iVar0 = 0;
		}
		if (func_307(uParam0, vLocal_564, fLocal_567))
		{
			if (!func_306(uParam0))
			{
				func_652();
			}
		}
		else
		{
			iVar0 = 0;
		}
		if (!func_299(vLocal_594, fLocal_597, 0))
		{
			iVar0 = 0;
		}
		if (!func_305())
		{
			iVar0 = 0;
		}
	}
	else if (!func_653())
	{
		iVar0 = 0;
	}
	if (iVar0 && func_302())
	{
		if (func_32(uParam0, 64) || ANIMSCENE::IS_ANIM_SCENE_RUNNING(&(Local_926[0 /*6*/]), 0))
		{
			func_654(uParam0, Global_35, "ARTHUR", 1);
			func_655();
			return 1;
		}
	}
	return 0;
}

int func_276(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0 || ((*Global_1347702)[iParam0 /*49*/])->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_277(int iParam0)
{
	var uVar0;

	uVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_3;
	return MISC::GET_HASH_KEY(&uVar0);
}

void func_278(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

void func_279(int iParam0)
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
	uVar10 = func_656(iParam0, 0);
	iVar11 = uVar10;
	iVar12 = uVar10;
	if (iParam0 == 82 || iParam0 == 83)
	{
		iVar12 = MISC::GET_HASH_KEY("LAW_UI_DUTCH_GANG");
	}
	MemCopy(&cVar0, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 8);
	StringConCat(&cVar0, "_DESC", 64);
	iVar13 = func_276(iParam0);
	UILOG::_UILOG_ADD_ENTRY_HASH(iVar13, func_277(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_24, iVar12, MISC::GET_HASH_KEY(&cVar0), ((*Global_1347702)[iParam0 /*49*/])->f_37);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar13, func_277(iParam0), iVar11, MISC::GET_HASH_KEY("toast_log_blips"));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar8) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar9))
	{
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(iVar13, func_277(iParam0), MISC::GET_HASH_KEY(sVar8), MISC::GET_HASH_KEY(sVar9));
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar13, func_277(iParam0)))
	{
		func_278(iParam0, 4);
	}
}

void func_280(int iParam0)
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
		cVar3 = func_657(0, &Var1, 0, 0, -1, -1);
		func_658(iParam0, &Var1, cVar3, -1082130432);
	}
}

void func_281(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_206(iVar0) && Global_1347702[iVar0 /*49*/] == iParam0)
		{
			bVar1 = true;
			func_237(iVar0, 1);
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

int func_282(int iParam0)
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
		iVar0 = func_497(iParam0);
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

void func_283(int iParam0, bool bParam1)
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
	func_501(iParam0, 1);
	bParam1 = bParam1;
}

void func_284(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_57(iParam0))
	{
		return;
	}
	if (!func_282(iParam0))
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
				func_659(func_111(iParam0));
			}
			if (func_205() != 0)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_109(iParam0), 0);
			}
			else
			{
				STATS::STATSTRACKER_DEED_STARTED(func_109(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_660(iParam0);
	if (!func_57(func_56(0)))
	{
		func_501(iParam0, 3);
		func_203(bParam2);
		if (func_205() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
			}
			func_500(1);
		}
		func_661(iParam0, -1);
		if (bParam1 && !func_60(2))
		{
			func_662(&Global_0, 1024);
		}
		if (func_205() == -1)
		{
			func_663(&(Global_1347343->f_11), 536870912);
			func_664(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_665(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_666(0);
			}
		}
		if (func_205() == -1)
		{
			iVar1 = func_529(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_531();
				switch (iVar1)
				{
					case 0:
						func_667(0);
						break;
					case 1:
						func_667(1);
						break;
					case 2:
						func_667(2);
						break;
					case 3:
						func_667(3);
						break;
					case 4:
						func_667(4);
						break;
					case 5:
						func_667(5);
						break;
					case 6:
						func_667(5);
						break;
					case 7:
						func_667(7);
						break;
					case 8:
						func_667(8);
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
						func_667(11);
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
						func_667(11);
						break;
					default:
						iVar1 = func_531();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_668(0);
									break;
								case 1:
									func_668(1);
									break;
								case 2:
									func_668(2);
									break;
								case 3:
									func_668(3);
									break;
								case 4:
									func_668(4);
									break;
								case 5:
									func_668(5);
									break;
								case 6:
									func_668(5);
									break;
								case 7:
									func_668(7);
									break;
								case 8:
									func_668(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_504(1);
	}
	else
	{
		func_661(iParam0, -1);
		func_501(iParam0, 4);
	}
	func_532(iParam0, 0);
}

void func_285(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_286(var uParam0)
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

void func_287(bool bParam0, int iParam1, bool bParam2)
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

void func_288()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_521(iVar0))
		{
			func_602(iVar0, 30, 1);
		}
		iVar0++;
	}
}

void func_289(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_583(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return;
	}
	else if (func_583(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return;
	}
	if (((((((((((((((uParam0->f_174 == 29 || uParam0->f_174 == 56) || uParam0->f_174 == 57) || uParam0->f_174 == 72) || uParam0->f_174 == 84) || uParam0->f_174 == 85) || uParam0->f_174 == 86) || uParam0->f_174 == 87) || uParam0->f_174 == 88) || uParam0->f_174 == 92) || uParam0->f_174 == 111) || uParam0->f_174 == 102) || uParam0->f_174 == 117) || uParam0->f_174 == 122) || uParam0->f_174 == 149) || uParam0->f_174 == 150)
	{
		iVar0 = 100;
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_revolver_cattleman"), 0, 0))
		{
			if (!func_669(joaat("weapon_revolver_cattleman")))
			{
				func_670(joaat("weapon_revolver_cattleman"));
			}
			func_671(Global_35, joaat("weapon_revolver_cattleman"), 0, 0, 2, 1, 0, 1056964608, 1065353216, iVar0, 0, 0, 0, 0);
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

void func_290(bool bParam0)
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
	func_672(0f);
	Global_1935436->f_11 = 1;
	if (func_473())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_673();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_291(var uParam0)
{
	func_242(0);
}

int func_292(var uParam0)
{
	if (uParam0->f_174 == func_19())
	{
		return 1;
	}
	return 0;
}

void func_293(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10, bool bParam11)
{
	struct<4> Var0;
	struct<4> Var4;

	if (uParam0->f_752 != iParam9)
	{
		if (uParam0->f_752 > -1)
		{
			func_674(uParam0);
		}
		uParam0->f_752 = iParam9;
		func_675(uParam0);
	}
	if (func_32(uParam0, 128) && func_29())
	{
		func_156(0);
		bParam11 = true;
	}
	if (!bParam11)
	{
		if ((func_297() == iParam9 && func_676() == iParam10) && !func_677(*Global_1347394, 0f, 0f, 0f))
		{
			return;
		}
	}
	if (func_297() != iParam9 && !func_677(*Global_1347394, 0f, 0f, 0f))
	{
		func_153(0);
	}
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_678(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, Var0, Var4, iParam9, iParam10);
}

void func_294(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			iLocal_789 = 0;
			StringCopy(&(uParam0->f_2575), "RABI1_RSC_1", 24);
			func_679(uParam0, vLocal_757);
			func_353(uParam0, iLocal_300, "AbigailRoberts", 0, 0, 0);
			func_353(uParam0, Global_35, 0, 0, 0, 0);
			func_680(uParam0, iLocal_297, 0, 0, 0, 0);
			func_681(uParam0, func_69(uParam0->f_174), "LAUNCH_RESTRICT");
			if (VOLUME::DOES_VOLUME_EXIST(iLocal_760))
			{
				iLocal_473 = PED::_0x4C39C95AE5DB1329(iLocal_760, 0, 15);
			}
			func_683(uParam0, 102951/*func_682*/);
			func_685(uParam0, 103004/*func_684*/);
			func_1(&(uParam0->f_172), 16);
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_291))
			{
				iLocal_291 = OBJECT::CREATE_OBJECT(iLocal_273, vLocal_609, true, true, false, false, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_295))
			{
				iLocal_295 = OBJECT::CREATE_OBJECT(iLocal_279, vLocal_609, true, true, false, false, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_296))
			{
				iLocal_296 = OBJECT::CREATE_OBJECT(iLocal_277, vLocal_605, true, true, false, false, true);
			}
			if ((((func_686(uParam0, 0) && func_686(uParam0, 1)) && ENTITY::DOES_ENTITY_EXIST(iLocal_291)) && ENTITY::DOES_ENTITY_EXIST(iLocal_295)) && ENTITY::DOES_ENTITY_EXIST(iLocal_296))
			{
				iLocal_789 = 1;
				StringCopy(&(uParam0->f_2575), "RABI1_RSC2", 24);
				func_679(uParam0, vLocal_675);
				func_680(uParam0, iLocal_291, sLocal_484, 0, 0, 0);
				func_680(uParam0, iLocal_295, sLocal_483, 0, 0, 0);
				func_680(uParam0, iLocal_296, sLocal_481, 0, 0, 0);
				func_353(uParam0, Global_35, 0, 0, 0, 0);
				func_353(uParam0, iLocal_301, 0, 0, 0, 0);
				func_353(uParam0, iLocal_304, "EdgarRoss", 0, joaat("cs_edgarross"), 0);
				func_353(uParam0, iLocal_305, "MiltonAndrews", 0, joaat("cs_miltonandrews"), 0);
				func_353(uParam0, &(uLocal_310[0]), "Horse_01", 0, -1038436471, 0);
				func_353(uParam0, &(uLocal_310[1]), "Horse_01^1", 0, -1038436471, 0);
				func_685(uParam0, 103004/*func_684*/);
				func_255(&(uParam0->f_206));
				func_1(&(uParam0->f_172), 16);
				func_681(uParam0, vLocal_675, "FISHING_RESTRICT");
				bLocal_138 = true;
			}
			break;
		case 2:
			iLocal_789 = 2;
			StringCopy(&(uParam0->f_2575), "RABI1_RSC4", 24);
			func_679(uParam0, vLocal_568);
			func_255(&(uParam0->f_206));
			if (func_210(13))
			{
				func_410(13);
			}
			func_332(vLocal_684, 10f, 0);
			func_353(uParam0, Global_35, 0, 0, 0, 0);
			func_353(uParam0, iLocal_300, 0, 0, 0, 0);
			func_353(uParam0, iLocal_301, 0, 0, 0, 0);
			func_353(uParam0, iLocal_307, 0, 0, 0, 0);
			func_680(uParam0, iLocal_291, sLocal_484, 0, 0, 0);
			func_1(&(uParam0->f_172), 16);
			func_681(uParam0, vLocal_568, "OUTRO_RESTRICT");
			func_685(uParam0, 103004/*func_684*/);
			break;
	}
}

int func_295(var uParam0)
{
	char[] cVar0[8];

	if (!func_687(uParam0))
	{
		return 0;
	}
	cVar0 = func_308();
	if (!MISC::ARE_STRINGS_EQUAL(func_688(func_254(&(uParam0->f_206))), cVar0))
	{
		func_309(&(uParam0->f_206), cVar0);
		func_310(&(uParam0->f_206), 33554432);
		func_256(&(uParam0->f_206), cVar0);
	}
	if (BUILTIN::VDIST(Global_36, -150.6659f, -16.8569f, 95.28f) < 2f)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -719620017, false);
	}
	if (func_652())
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_301, vLocal_594, true, false, true, true);
		return 1;
	}
	else
	{
		func_689();
		func_690();
		if (bLocal_150)
		{
			func_691(&iLocal_300, &iLocal_313, &Local_374, 4f, -1082130432, 0);
		}
	}
	return 0;
}

int func_296(var uParam0)
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
				func_692(0, 1, 1, 1);
				uParam0->f_171 = 1;
			}
			else
			{
				return 1;
			}
			break;
		case 1:
			func_692(0, 1, 1, 1);
			if (func_693(Global_35, &(uParam0->f_747), 0, 0, 0, 1084227584, 100, 0, 0))
			{
				func_161(uParam0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_297()
{
	return Global_1572864->f_9;
}

int func_298()
{
	int iVar0;

	if (func_694(4))
	{
		return 1;
	}
	iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), -164.0416f, -34.3493f, 94.0192f) < 5f || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vLocal_609) < 5f)
		{
			ENTITY::SET_ENTITY_COORDS(iVar0, 771.0912f, 289.6954f, 114.2774f, true, false, true, true);
			func_695(4);
			return 1;
		}
		else
		{
			func_695(4);
			return 1;
		}
	}
	else
	{
		func_695(4);
		return 1;
	}
	return 0;
}

int func_299(vector3 vParam0, float fParam3, bool bParam4)
{
	if (&iLocal_172[1])
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_301))
	{
		iLocal_301 = func_696(14, 1, 1, 0f, 0f, 0f, 0f, bParam4, 1, 0, 0, 1, 1, 178615350, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
	}
	if (func_209(iLocal_301, 257))
	{
		PED::_0xF7EA250B9A919E03(27283314, iLocal_301);
		PED::_0xF7EA250B9A919E03(327177806, iLocal_301);
		if (PED::_0x854BC9B1A1CCD034(27283314, iLocal_301) && PED::_0x854BC9B1A1CCD034(327177806, iLocal_301))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_301, true))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_301, true, true);
			}
			if (bParam4)
			{
				ENTITY::_0x203BEFFDBE12E96A(iLocal_301, vParam0, fParam3, 1, 0, 1);
			}
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_301, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_301, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_301, 1030835986);
			PED::SET_PED_CONFIG_FLAG(iLocal_301, 259, true);
			func_511(0);
			func_697(14, 1, 1, 1);
			func_518(14, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_301, 307, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_301, 344, true);
			iLocal_172[1] = 1;
			return 1;
		}
	}
	return 0;
}

int func_300()
{
	if (iLocal_139)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_292))
	{
		iLocal_292 = OBJECT::CREATE_OBJECT(iLocal_275, vLocal_594, true, true, false, false, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_292))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_275);
		iLocal_139 = 1;
		return 1;
	}
	return 0;
}

int func_301(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_3, 1, "base", false, true);
		return 0;
	}
	else if (!uParam0->f_1)
	{
		if ((func_299(vLocal_594, fLocal_597, 1) && func_300()) && func_323(vLocal_727, vLocal_730, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "JackMarston", iLocal_301, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sLocal_485, iLocal_292, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sLocal_484, iLocal_291, 0);
			ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
			uParam0->f_1 = 1;
			return 0;
		}
	}
	else if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, 1, 0))
	{
		return 0;
	}
	return 1;
}

int func_302()
{
	if (iLocal_160)
	{
		return 1;
	}
	if (!func_698(&iLocal_776))
	{
		iLocal_776 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(-466.4861f, 202.383f, 41.3731f, 1.5f, 1, 4, 0);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_770))
	{
		iLocal_770 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_678, 0f, 0f, 61f, 15f, 15f, 10f, "DISMOUNT_VOL");
		return 0;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_764))
	{
		iLocal_764 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_742, vLocal_754, vLocal_745, "WATERS_EDGE_SMALL");
		return 0;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_765))
	{
		iLocal_765 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_748, vLocal_754, vLocal_751, "WATER_EDGE_LARGE");
		return 0;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_767))
	{
		iLocal_767 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-464.467f, 187.957f, 42.912f, 0f, 0f, 57f, 32f, 57f, 5f, "FISH_BLOCK_VOL");
		return 0;
	}
	if (iLocal_472 == 0)
	{
		func_699(iLocal_767, 0);
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_767, 73728, 512, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_767, 73728, 512, 0, -1, -1, 2);
		iLocal_472 = PED::_0x4C39C95AE5DB1329(iLocal_767, 0, 15);
		return 0;
	}
	iLocal_160 = 1;
	return 1;
}

int func_303()
{
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_761))
	{
		iLocal_761 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-113.7305f, -17.88992f, 96.04501f, 0f, 0f, -18.3f, 6.504865f, 5.977349f, 2.698479f, "RABI1_HitchBlockingVol");
		return 0;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_766))
	{
		iLocal_766 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_733, vLocal_736, vLocal_739, "CLEAR_VOL");
		return 0;
	}
	if ((VOLUME::DOES_VOLUME_EXIST(iLocal_761) && VOLUME::DOES_VOLUME_EXIST(iLocal_766)) && !func_210(13))
	{
		iLocal_471 = func_700(iLocal_761, 0, 0, 0);
		func_701(iLocal_766, 0, 0, 0, 0, 0);
		func_326(13);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_308))
	{
		iLocal_308 = func_702(0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_303))
	{
		iLocal_303 = func_702(1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_308))
	{
		ENTITY::_0x203BEFFDBE12E96A(iLocal_308, vLocal_695, fLocal_698, 0, 0, 1);
		if (!func_352(iLocal_308, -982327190))
		{
			TASK::TASK_STAND_STILL(iLocal_308, -1);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_308, 48, true);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_303))
	{
		ENTITY::_0x203BEFFDBE12E96A(iLocal_303, vLocal_699, fLocal_702, 0, 0, 1);
		if (!func_352(iLocal_303, -982327190))
		{
			TASK::TASK_STAND_STILL(iLocal_303, -1);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_303, 48, true);
		}
	}
	return 1;
}

int func_304()
{
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_775))
	{
		iLocal_775 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-113.791f, -27.893f, 95.064f, 0f, 0f, 0f, 6f, 6f, 3f, "JACK_PLAY");
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_775))
	{
		if (iLocal_477 == 0)
		{
			iLocal_477 = func_700(iLocal_775, 0, 0, 0);
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_305()
{
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_773))
	{
		iLocal_773 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-164.0416f, -34.3493f, 93.0192f, 0f, 0f, 0f, 5f, 4f, 5f, "ROCK_BLOCK");
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_773))
	{
		if (iLocal_475 == 0)
		{
			iLocal_475 = func_700(iLocal_773, 0, 0, 0);
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_306(var uParam0)
{
	if (func_32(uParam0, 64) && func_32(uParam0, 128))
	{
		return 1;
	}
	return 0;
}

int func_307(var uParam0, vector3 vParam1, float fParam4)
{
	if (&iLocal_172[0])
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_300))
	{
		iLocal_300 = func_696(13, 1, 1, vParam1.x, vParam1.y, vParam1.z, fParam4, 1, 1, 0, 0, 0, 1, -922193456, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_300) && !ENTITY::IS_ENTITY_DEAD(iLocal_300)) && func_209(iLocal_300, 257))
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_300, true))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_300, true, true);
		}
		if (!func_703(ENTITY::GET_ENTITY_COORDS(iLocal_300, false, false), vParam1, 1f, 1))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_300, 0, 1);
			ENTITY::_0x203BEFFDBE12E96A(iLocal_300, vParam1, fParam4, 1, 0, 1);
		}
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_300, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_300, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_300, 1030835986);
		PED::SET_PED_CONFIG_FLAG(iLocal_300, 153, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_300, 301, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_300, 130, true);
		func_704();
		func_654(uParam0, iLocal_300, "ABIGAIL", 1);
		iLocal_172[0] = 1;
		return 1;
	}
	return 0;
}

char* func_308()
{
	char* sVar0;

	if (func_705())
	{
		if (func_706(Global_35, -1725579161, 0))
		{
			sVar0 = "2-NightVersion-PlayerWearingHat";
		}
		else
		{
			sVar0 = "3-NightVersion-PlayerNotWearingHat";
		}
		bLocal_143 = true;
	}
	else
	{
		sVar0 = "1-DayVersion";
	}
	return sVar0;
}

void func_309(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_350), sParam1, 64);
}

void func_310(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

void func_311()
{
	if (!func_210(9))
	{
		MISC::_0x59174F1AFE095B5A(-173507739, false, true, true, 60f, false);
		func_326(9);
	}
}

void func_312(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_707();
	if (func_708(iVar0) != iParam0)
	{
		func_709(&iVar0, iParam0);
		func_710(&iVar0, iParam1);
		func_711(&iVar0, 0);
		CLOCK::SET_CLOCK_DATE(func_712(iVar0), func_713(iVar0), func_714(iVar0));
		CLOCK::SET_CLOCK_TIME(func_708(iVar0), func_715(iVar0), func_716(iVar0));
	}
}

void func_313(var uParam0)
{
	if (!func_210(18))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
		{
			func_654(uParam0, iLocal_301, "JACK", 1);
			func_326(18);
		}
	}
}

void func_314(int iParam0, int iParam1)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_926[iParam0 /*6*/])))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(&(Local_926[iParam0 /*6*/]), 1, 0))
		{
			return;
		}
		if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(&(Local_926[iParam0 /*6*/]), 0))
		{
			switch (iParam0)
			{
				case 1:
					ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_926[iParam0 /*6*/]), "base");
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
					{
						if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_301))
						{
							return;
						}
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_301, 1, 1);
					}
					break;
				case 5:
					ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_926[iParam0 /*6*/]), "pblBase");
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_300))
					{
						return;
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_300))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_926[iParam0 /*6*/]), "AbigailRoberts", iLocal_300, 0);
						TASK::CLEAR_PED_TASKS(iLocal_300, 1, 0);
					}
					break;
				case 6:
					break;
			}
			ANIMSCENE::START_ANIM_SCENE(&(Local_926[iParam0 /*6*/]));
		}
		if ((Local_926[iParam0 /*6*/])->f_5 == iParam1)
		{
			return;
		}
		(Local_926[iParam0 /*6*/])->f_5 = iParam1;
		switch ((Local_926[iParam0 /*6*/])->f_5)
		{
			case 1:
				if (ANIMSCENE::_0x23E33CB9F4A3F547(&(Local_926[iParam0 /*6*/]), "base"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(Local_926[iParam0 /*6*/]), "base", true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(&(Local_926[iParam0 /*6*/]), "Internal_Loop", false, false);
					ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_926[iParam0 /*6*/]), "Exit");
				}
				break;
			case 2:
				if (ANIMSCENE::_0x23E33CB9F4A3F547(&(Local_926[iParam0 /*6*/]), "Exit"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(Local_926[iParam0 /*6*/]), "Exit", true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(&(Local_926[iParam0 /*6*/]), "Internal_Loop", true, false);
				}
				break;
			case 6:
				if (ANIMSCENE::_0x23E33CB9F4A3F547(&(Local_926[iParam0 /*6*/]), "pblBase"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(Local_926[iParam0 /*6*/]), "pblBase", true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(&(Local_926[iParam0 /*6*/]), "InternalLoop", false, false);
					ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_926[iParam0 /*6*/]), "Leadin");
				}
				break;
			case 7:
				if (ANIMSCENE::_0x23E33CB9F4A3F547(&(Local_926[iParam0 /*6*/]), "Leadin"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(Local_926[iParam0 /*6*/]), "Leadin", true);
					AUDIO::START_PRELOADED_CONVERSATION("ABI1_RSC4_LEAD");
				}
				break;
			case 8:
				break;
		}
	}
}

int func_315(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_5))
	{
		return 1;
	}
	return 0;
}

void func_316(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_717(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_718(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_719(iParam0->f_6, iParam0->f_5, 0);
			}
			func_720(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_721(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_317(bool bParam0)
{
	func_518(14, 0);
	if (bParam0)
	{
		func_722(14);
	}
	else
	{
		func_372(14);
	}
}

void func_318(var uParam0, char* sParam1, int iParam2, float fParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	func_471(uParam0->f_174, sParam1, iParam2, fParam3, sParam4, sParam5, sParam6, sParam7, iParam8);
}

void func_319(var uParam0, int iParam1, int iParam2)
{
	func_723(uParam0, iParam2);
	iLocal_785 = iParam2;
}

void func_320(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_521(iParam0))
	{
		return;
	}
	if (func_517(iParam0))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_129 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_602(iParam0, 56, 1);
		func_80(&(Global_1359489->f_40), 1);
	}
	func_524(iParam0, 0);
	func_724(iParam0, 4, 0);
	func_372(iParam0);
	func_725(iParam0);
	func_726(iParam0, 37, 1);
	bVar0 = func_209(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_727(iParam0, 0);
	bVar2 = _NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_599(iParam0, 64, 1))
	{
		func_726(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_726(iParam0, 33, 1);
		func_726(iParam0, 34, 1);
		func_728(iParam0, 1056964608, -1, 1061158912);
		func_729(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_602(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_602(iParam0, 35, 1);
			if (bParam8)
			{
				func_602(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_730(iParam0, 0);
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
		func_726(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_602(iParam0, 33, 1);
		func_729(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_80(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_243(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
		}
		if (bParam9)
		{
			func_602(iParam0, 34, 1);
		}
	}
	if (iParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_731(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_599(iParam0, 45, 1))
	{
		func_726(iParam0, 45, 1);
	}
	func_732(iParam0, 16, 1);
	func_726(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_209(func_733(iParam0), 0))
		{
			func_734(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

int func_321(var uParam0, vector3 vParam1, float fParam4)
{
	if (func_735(uParam0, &iLocal_306, vParam1, fParam4, 1, 1, 1, 1, 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_306))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_306, 300, true);
			PED::SET_PED_CONFIG_FLAG(Global_35, 300, true);
			PED::_SET_PED_SCALE(iLocal_306, 1f);
			return 1;
		}
	}
	return 0;
}

int func_322(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		bParam1 = true;
	}
	if (bParam0)
	{
		func_736(bParam1);
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_fishingrod"), 0, 0))
		{
			func_242(0);
			return 1;
		}
	}
	else
	{
		func_737(1);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_fishingrod"), 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_323(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_291))
	{
		iLocal_291 = OBJECT::CREATE_OBJECT(iLocal_273, vParam0, true, true, false, false, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_291))
	{
		if (func_677(vParam3, vLocal_727))
		{
			ENTITY::SET_ENTITY_ROTATION(iLocal_291, vLocal_730, 2, true);
		}
		if (bParam6)
		{
			func_326(5);
		}
		return 1;
	}
	return 0;
}

void func_324(int iParam0)
{
	switch (func_205())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 || iParam0);
			break;
	}
}

void func_325()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_291))
	{
		if (func_384(18))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_291))
			{
				ENTITY::DETACH_ENTITY(iLocal_291, false, true);
				func_738(18);
			}
		}
		if (!func_384(19))
		{
			if (PED::_0x4912DFE492DB98CD(iLocal_301, "FishingRodInLeftHand"))
			{
				PED::_0xCB9401F918CB0F75(iLocal_301, "FishingRodInLeftHand", 0, -1);
			}
			if (PED::_0x4912DFE492DB98CD(iLocal_301, "FishingRodInRightHand"))
			{
				PED::_0xCB9401F918CB0F75(iLocal_301, "FishingRodInRightHand", 0, -1);
			}
			ENTITY::SET_ENTITY_VISIBLE(iLocal_291, false);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_291, iLocal_306, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_291, iLocal_306, PED::GET_PED_BONE_INDEX(iLocal_306, 29245), vLocal_721, vLocal_724, 0, 0, 0, 0, 2, 1, 0, 0);
			func_410(5);
			func_333(19);
		}
	}
}

void func_326(int iParam0)
{
	if (!func_210(iParam0))
	{
		MISC::SET_BIT(&iLocal_194, iParam0);
	}
}

void func_327(vector3 vParam0, bool bParam3)
{
	func_405(&iLocal_137);
	if (!bParam3)
	{
		iLocal_137 = func_739(408396114, vParam0, 1);
		if (MAP::DOES_BLIP_EXIST(iLocal_137))
		{
			if (func_740(vParam0, vLocal_684, 1056964608, 1))
			{
				if (bLocal_161)
				{
					if (VOLUME::DOES_VOLUME_EXIST(iLocal_768))
					{
						PATHFIND::_0xF2A2177AC848B3A8(iLocal_768, 0, 1);
					}
				}
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_137, "RABI1_CBLIP");
			}
		}
	}
	else if (func_740(vParam0, vLocal_675, 1056964608, 1))
	{
		if (iLocal_168)
		{
			iLocal_137 = func_741(1259054292, iLocal_764, 1);
		}
		else
		{
			iLocal_137 = func_741(1259054292, iLocal_765, 1);
		}
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_137, "RABI1_FBLIP");
	}
	else if (func_740(vParam0, vLocal_678, 1056964608, 1))
	{
		iLocal_137 = func_741(-308585968, iLocal_770, 1);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_137, "RABI1_FBLIP");
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_137))
	{
		if (BUILTIN::VDIST(Global_36, MAP::GET_BLIP_COORDS(iLocal_137)) > 40f)
		{
			MAP::_0x662D364ABF16DE2F(iLocal_137, -1878373110);
		}
		if (func_740(vParam0, vLocal_675, 1056964608, 1))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_137, "RABI1_FBLIP");
		}
	}
	vLocal_681 = { vParam0 };
}

int func_328(bool bParam0)
{
	int iVar0;

	iVar0 = STREAMING::GET_NUMBER_OF_STREAMING_REQUESTS();
	if (bParam0)
	{
		if (!func_742())
		{
			return 0;
		}
	}
	if (!func_79(&uLocal_516))
	{
		func_80(&uLocal_516, 0);
	}
	if (func_438(&uLocal_516) < 15f)
	{
		if (iVar0 > 0)
		{
			return 0;
		}
		else
		{
			func_243(&uLocal_516);
			return 1;
		}
	}
	else
	{
		func_243(&uLocal_516);
		return 1;
	}
	return 0;
}

void func_329(bool bParam0)
{
	PED::SET_PED_CONFIG_FLAG(iLocal_301, 297, bParam0);
	PED::SET_PED_CONFIG_FLAG(iLocal_301, 315, bParam0);
	PED::SET_PED_CONFIG_FLAG(iLocal_301, 130, bParam0);
	PED::SET_PED_CONFIG_FLAG(iLocal_301, 331, bParam0);
	PED::SET_PED_CONFIG_FLAG(iLocal_301, 330, bParam0);
}

void func_330()
{
	iLocal_189 = func_743(-1756227506, 2078959127);
	iLocal_190 = func_743(-1756227506, 234331408);
}

void func_331()
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
}

void func_332(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_333(int iParam0)
{
	if (!func_384(iParam0))
	{
		MISC::SET_BIT(&iLocal_195, iParam0);
	}
}

void func_334(bool bParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_291))
	{
		if (func_384(19))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_291))
			{
				ENTITY::DETACH_ENTITY(iLocal_291, false, true);
				func_738(19);
			}
		}
		if (ENTITY::_0x083D497D57B7400F(iLocal_291))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_291, false);
		}
		func_744(bParam0);
		if (bParam0)
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_291, iLocal_301, PED::GET_PED_BONE_INDEX(iLocal_301, 37709), vLocal_703, vLocal_706, 0, 0, 0, 0, 2, 1, 0, 0);
		}
		else
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_291, iLocal_301, PED::GET_PED_BONE_INDEX(iLocal_301, 7966), vLocal_709, vLocal_712, 0, 0, 0, 0, 2, 1, 0, 0);
		}
		if (!bParam1)
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_291, false);
		}
		else
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_291, true);
			func_326(5);
		}
		func_333(18);
	}
}

void func_335(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), true, 1, false, false);
		if (PED::IS_PED_A_PLAYER(iParam0) && iParam1 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("weapon_unarmed"), 0);
			}
		}
	}
}

void func_336()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_310[iVar0])))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(&(uLocal_310[iVar0])))
			{
				ENTITY::SET_ENTITY_VISIBLE(&(uLocal_310[iVar0]), true);
				PED::_0xC9151483CC06A414(&(uLocal_310[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_337(int iParam0)
{
	if (Global_1900073->f_11 != iParam0)
	{
		Global_1900073->f_11 = iParam0;
	}
}

void func_338(int iParam0)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

void func_339(int iParam0)
{
	if (Global_1900073->f_19 != iParam0)
	{
		Global_1900073->f_19 = iParam0;
	}
}

void func_340(int iParam0)
{
	if (Global_1900073->f_20 != iParam0)
	{
		Global_1900073->f_20 = iParam0;
	}
}

void func_341(int iParam0)
{
	if (Global_1900073->f_22 != iParam0)
	{
		Global_1900073->f_22 = iParam0;
	}
}

void func_342(int iParam0)
{
	if (Global_1900073->f_23 != iParam0)
	{
		Global_1900073->f_23 = iParam0;
	}
}

void func_343(int iParam0)
{
	if (Global_1900073->f_24 != iParam0)
	{
		Global_1900073->f_24 = iParam0;
	}
}

void func_344(int iParam0)
{
	if (iParam0 == 1)
	{
		func_745(2);
	}
	else
	{
		func_746(2);
	}
}

void func_345(int iParam0)
{
	if (iParam0 == 1)
	{
		func_745(64);
	}
	else
	{
		func_746(64);
	}
}

void func_346(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
	PAD::DISABLE_CONTROL_ACTION(0, 2011525043, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1046962283, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1618006066, false);
	if (PED::_0xA29FD00D45311EB7(Global_35, "cautious") <= 0f)
	{
		PED::_0x437C08DB4FEBE2BD(Global_35, "cautious", 1f, -1);
	}
	func_313(uParam0);
	func_738(17);
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_773))
	{
		func_396(&iLocal_475, iLocal_773, 0);
		VOLUME::DELETE_VOLUME(iLocal_773);
	}
	func_323(ENTITY::GET_ENTITY_COORDS(iLocal_301, true, false), 0f, 0f, 0f, 1);
	func_334(1, 1);
	func_326(5);
	func_371(1, 1, 0);
	if (!func_352(iLocal_301, 1056466932))
	{
		TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_301, Global_35, 1.5f, -0.5f, 0f, 1f, -1, 0.5f, 1, 1, 0, 1, 1);
	}
	func_317(0);
	func_344(1);
	func_339(0);
	func_340(0);
	TASK::CLEAR_PED_TASKS(iLocal_306, 1, 0);
	TASK::TASK_STAND_STILL(iLocal_306, -1);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_306, 48, true);
	fLocal_925 = func_437();
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_310[0])))
	{
		func_23(uLocal_310[0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_310[1])))
	{
		func_23(uLocal_310[1]);
	}
	func_351(&iLocal_296);
	func_351(&iLocal_294);
	func_351(&iLocal_295);
	HUD::_0x160825DADF1B04B3();
	func_397();
	func_293(uParam0, func_61(5), func_61(6), 5, 6, 0);
	func_318(uParam0, (Local_825[4 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
	func_319(uParam0, iLocal_785, 14);
}

int func_347(bool bParam0)
{
	if (func_210(10))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_306))
	{
		if (func_747(&iLocal_306, vLocal_684, fLocal_687, 1, 1, 1, 1))
		{
			POPULATION::_0xF74E134F40192884(iLocal_306, 2);
			if (bParam0)
			{
				PHYSICS::_0x06AADE17334F7A40(iLocal_306, -116.5877f, -17.9793f, 95.3f);
			}
			func_326(10);
			return 1;
		}
	}
	return 0;
}

int func_348(var uParam0, int iParam1, int iParam2)
{
	if (func_210(0))
	{
		return 1;
	}
	if (!func_748())
	{
		return 0;
	}
	if (func_575(Global_35, vLocal_568, 0) < 150f || iParam1)
	{
		if (func_303())
		{
			if (!func_749())
			{
				return 0;
			}
			if (!func_307(uParam0, vLocal_568, fLocal_571))
			{
				return 0;
			}
			if (!func_750())
			{
				return 0;
			}
			if (!func_751(Local_926[5 /*6*/]))
			{
				return 0;
			}
			if (!func_752(Local_926[6 /*6*/], iParam2))
			{
				return 0;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_300) && !ENTITY::IS_ENTITY_DEAD(iLocal_307))
			{
				func_314(5, 6);
				ENTITY::_0x203BEFFDBE12E96A(iLocal_307, vLocal_583, fLocal_586, 1, 0, 1);
				func_753(iLocal_307, 1253642035, -1, 0, 0, -1082130432);
				if (!func_352(iLocal_307, -982327190))
				{
					TASK::TASK_STAND_STILL(iLocal_307, -1);
				}
				func_326(0);
				func_294(uParam0, 2);
				return 1;
			}
		}
	}
	return 0;
}

int func_349(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_57(iParam0))
	{
		return 1;
	}
	iVar0 = func_110(iParam0);
	iVar1 = -1;
	iVar2 = 0;
	bVar3 = false;
	iVar4 = 1;
	if (iVar0 == 1)
	{
		iVar5 = func_111(iParam0);
		if (iVar5 == 23)
		{
			iVar4 = 1;
			iVar1 = 134;
			bVar3 = false;
			iVar2 = 0;
			if (func_754(iVar1, iVar2, bVar3, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 37;
			bVar3 = false;
			if (func_594(134, 0) && func_755(1) <= 1)
			{
				iVar2 = 1;
			}
			else
			{
				iVar2 = 0;
			}
			if (func_754(iVar1, iVar2, bVar3, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 16)
		{
			iVar4 = 1;
			if (func_754(134, 1, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			if (func_754(138, 1, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 46)
		{
			if (func_593(58))
			{
				iVar4 = 1;
				iVar1 = 140;
				if (func_754(iVar1, 0, 0, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
				return iVar4;
			}
			else
			{
				return 1;
			}
		}
		else if (iVar5 == 17)
		{
			iVar4 = 1;
			iVar1 = 134;
			if (func_754(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 138;
			if (func_754(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			if (func_593(5) && func_756(12))
			{
				iVar1 = 21;
				if (func_754(iVar1, 1, 0, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			return iVar4;
		}
		else if (iVar5 == 15)
		{
			iVar4 = 1;
			iVar1 = 63;
			if (func_754(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 59;
			if (func_754(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 33)
		{
			iVar1 = 99;
		}
		else if (iVar5 == 73)
		{
			iVar1 = 10;
			iVar2 = 1;
		}
		else if (iVar5 == 24)
		{
			iVar1 = 21;
			iVar2 = 0;
		}
		else if (iVar5 == 10)
		{
			iVar4 = 1;
			iVar1 = 63;
			if (func_754(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			if ((func_583(((*Global_1835011)[11 /*74*/])->f_1, 1) && func_583(((*Global_1835011)[14 /*74*/])->f_1, 1)) && func_583(((*Global_1347702)[61 /*49*/])->f_15, 1))
			{
				iVar1 = 66;
				iVar2 = 1;
				if (func_754(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			iVar1 = 59;
			iVar2 = 0;
			if (func_754(iVar1, iVar2, bVar3, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 55)
		{
			iVar1 = 64;
		}
	}
	else if (iVar0 == 8)
	{
		iVar6 = func_111(iParam0);
		if (iVar6 == 0)
		{
			iVar4 = 1;
			if (func_757(15))
			{
				if (func_758(15, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			iVar1 = 97;
			if (func_754(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 2)
		{
			iVar1 = 96;
		}
		else if (iVar6 == 61)
		{
			iVar4 = 1;
			if (func_757(15))
			{
				if (func_758(15, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			if (func_757(9))
			{
				if (func_758(9, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			if (!func_583(((*Global_1347702)[63 /*49*/])->f_15, 1))
			{
				iVar1 = 63;
				iVar2 = 0;
			}
			else
			{
				iVar1 = 97;
				iVar2 = 1;
			}
			if (func_754(iVar1, iVar2, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 62)
		{
			iVar4 = 1;
			if (func_757(15))
			{
				if (func_758(15, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			if (func_757(9))
			{
				if (func_758(9, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			iVar1 = 112;
			if (func_754(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 63;
			if (func_754(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 64)
		{
			iVar1 = 65;
			iVar2 = 1;
		}
		else if (iVar6 == 76)
		{
			iVar1 = 134;
			if (func_754(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 37;
			if (func_754(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 82)
		{
			iVar1 = 83;
			iVar2 = 1;
		}
		else if (iVar6 == 96)
		{
			iVar1 = 2;
		}
		else if (iVar6 == 1)
		{
			iVar1 = 96;
			iVar2 = 1;
		}
		else if (iVar6 == 97)
		{
			iVar4 = 1;
			if (func_583(((*Global_1835011)[6 /*74*/])->f_1, 1) && func_583(((*Global_1835011)[13 /*74*/])->f_1, 1))
			{
				iVar1 = 112;
				iVar2 = 1;
				bVar3 = false;
				if (func_754(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			return iVar4;
		}
		else if (iVar6 == 114)
		{
			if (func_583(((*Global_1835011)[9 /*74*/])->f_1, 1))
			{
				iVar1 = 0;
				iVar2 = 1;
			}
		}
		else if (iVar6 == 134)
		{
			iVar4 = 1;
			iVar1 = 95;
			if (func_754(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 138;
			if (func_754(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
	}
	if (iVar1 == -1)
	{
		return 1;
	}
	if (func_754(iVar1, iVar2, bVar3, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_350(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, bParam1, bParam2);
		}
	}
}

void func_351(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
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
	if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
	{
		ENTITY::DETACH_ENTITY(*iParam0, true, true);
	}
	OBJECT::DELETE_OBJECT(iParam0);
}

int func_352(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_353(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_759(&(uParam0->f_206), iParam1, sParam2, iParam3, iParam4, bParam5);
}

int func_354()
{
	int iVar0;

	iVar0 = func_591();
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

int func_355(int iParam0)
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

float func_356(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_357(var uParam0)
{
	if (!func_6(uParam0->f_172, 512))
	{
		if (!func_760(uParam0))
		{
			return 0;
		}
		func_223(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 128);
		if (func_252(uParam0))
		{
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_751);
			func_1(&(uParam0->f_172), 512);
		}
		return 0;
	}
	func_692(0, 1, 1, 1);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_751) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_751, 0))
	{
		func_1(&(uParam0->f_172), 1024);
		func_2(&(uParam0->f_172), 256);
		return 1;
	}
	return 0;
}

void func_358()
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

void func_359(var uParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
}

int func_360(var uParam0)
{
	return 1;
}

void func_361(var uParam0, var uParam1)
{
	struct<8> Var0;

	if (func_183(uParam1, 32768))
	{
		Var0 = { func_622(uParam0) };
		func_256(uParam0, &Var0);
		if (func_183(uParam1, 131072))
		{
			func_310(uParam0, 268435456);
			if (func_257(uParam0->f_409))
			{
				uParam0->f_409 = { func_761(uParam1, uParam1->f_1580) };
			}
			if (func_257(uParam0->f_406))
			{
				uParam0->f_406 = { func_761(uParam1, uParam1->f_1580) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_406, &(uParam0->f_406.f_2), 0);
				uParam0->f_406.f_2 = (uParam0->f_406.f_2 + 0.5f);
			}
		}
		if (func_183(uParam1, 268435456))
		{
			func_762(&(uParam0->f_404), 16384);
		}
	}
	else if (func_183(uParam1, 524288))
	{
		func_310(uParam0, 67108864);
		func_763(uParam1, 524288);
	}
	if (func_764(uParam1, 128))
	{
		func_310(uParam0, 32);
	}
	if (uParam1->f_1799 != 0)
	{
		uParam0->f_416 = uParam1->f_1799;
		if (uParam1->f_1580 >= 0 && func_765(uParam1->f_912[uParam1->f_1580 /*41*/], 256))
		{
			func_762(&(uParam0->f_404), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_0x927B810E43E99932(&(uParam1->f_1588)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_417), &(uParam1->f_1588), 16);
	}
}

void func_362(var uParam0, int iParam1)
{
	var uVar0;

	if (iParam1 || !func_6(uParam0->f_172, 16384))
	{
		MemCopy(&uVar0, {func_766(uParam0->f_174)}, 8);
		func_767(&uVar0, 15000, 0, 0, 0, 1);
		func_1(&(uParam0->f_172), 16384);
	}
}

int func_363(int iParam0)
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
	iVar0 = func_768();
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

int func_364()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383->f_393))
	{
		func_769();
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::_0xD2CB0FB0FDCB473D(iVar0, 0);
	func_770(-1);
	func_771(3);
	return 1;
}

void func_365(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_772(iParam0, &iVar0, &iVar1);
	if (!func_773(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_774(iVar0, iVar1);
}

int func_366(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;

	func_626(uParam4, &sParam0);
	if (func_625(uParam4, 2) && !func_625(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -842734359, false);
	}
	if (func_775(uParam4) != 1)
	{
		func_776(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_775(uParam4))
	{
		case 1:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_348, 1, 0))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_348, 0))
				{
					func_777(uParam4, &sParam0, uParam5);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
				{
					func_778(uParam4, 4);
					return 0;
				}
				else
				{
					if (func_779(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_341);
					}
					func_780(uParam5);
				}
				func_778(uParam4, 3);
			}
			else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_350)) && func_625(uParam4, 134217728))
				{
				}
				else
				{
					func_255(uParam4);
				}
				func_214(&(uParam4->f_1));
				func_778(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_635(uParam4);
				if (!func_79(&(uParam4->f_1)))
				{
					func_80(&(uParam4->f_1), 0);
				}
				else if (func_215(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					func_778(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_348, 1, 0))
			{
				if (func_259(uParam4, &sParam0, 1, 1))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_348, 1, 0))
					{
						func_778(uParam4, 4);
					}
					else if (!func_257(func_627(uParam4)) && !func_781(Global_35, func_627(uParam4), 100f, 1, 1))
					{
						func_782(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_627(uParam4), 0f, 1, 1, 1, 0);
					}
				}
				else if (func_215(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					func_778(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
					func_783(1, 0);
					func_777(uParam4, &sParam0, uParam5);
					func_778(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_215(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
				}
				func_778(uParam4, 4);
			}
			break;
		case 3:
			func_784(uParam4);
			if (func_779(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_341);
			}
			func_780(uParam5);
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_348, 0)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348) || func_625(uParam4, 512)))
			{
				if (!func_625(uParam4, 1024) && func_785(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_625(uParam4, 512))
				{
					func_214(&(uParam4->f_1));
					func_310(uParam4, 512);
					func_778(uParam4, 4);
				}
				else if (func_625(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_776(uParam4);
			}
			if (func_625(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_786(uParam4) - func_787(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
		