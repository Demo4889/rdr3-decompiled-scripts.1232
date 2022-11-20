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
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	int iLocal_22[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	struct<4> Local_64 = { 11, 0, 0, 0 } ;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 11;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 11;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 11;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
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
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255[3] = { 0, 0, 0 };
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	var uLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266[2] = { 0, 0 };
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	var uLocal_278 = 24;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
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
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = -1;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 2;
	var uLocal_385 = 1;
	var uLocal_386 = 1;
	var uLocal_387 = 1;
	var uLocal_388 = 0;
	var uLocal_389 = 1;
	var uLocal_390 = 2;
	var uLocal_391 = 2;
	var uLocal_392 = 3;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 3;
	var uLocal_396 = 1;
	var uLocal_397 = 3;
	var uLocal_398 = 3;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	struct<15> Local_406 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = -1;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 1097859072;
	var uLocal_439 = 1000;
	var uLocal_440 = 1067450368;
	var uLocal_441 = 5000;
	var uLocal_442 = 42;
	var uLocal_443 = 1103626240;
	var uLocal_444 = 1077936128;
	var uLocal_445 = 1106247680;
	var uLocal_446 = 1103101952;
	var uLocal_447 = 1097859072;
	var uLocal_448 = 1103626240;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = -1;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 1097859072;
	var uLocal_467 = 1000;
	var uLocal_468 = 1067450368;
	var uLocal_469 = 5000;
	var uLocal_470 = 42;
	var uLocal_471 = 1103626240;
	var uLocal_472 = 1077936128;
	var uLocal_473 = 1106247680;
	var uLocal_474 = 1103101952;
	var uLocal_475 = 1097859072;
	var uLocal_476 = 1103626240;
	var uLocal_477 = 0;
	int iLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = -1;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 1097859072;
	var uLocal_497 = 1000;
	var uLocal_498 = 1067450368;
	var uLocal_499 = 5000;
	var uLocal_500 = 42;
	var uLocal_501 = 1103626240;
	var uLocal_502 = 1077936128;
	var uLocal_503 = 1106247680;
	var uLocal_504 = 1103101952;
	var uLocal_505 = 1097859072;
	var uLocal_506 = 1103626240;
	var uLocal_507 = 0;
	int iLocal_508 = 0;
	int iLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	int iLocal_514 = 0;
	var uLocal_515 = 0;
	float fLocal_516 = 0f;
	float fLocal_517 = 0f;
	char* sLocal_518 = NULL;
	int iLocal_519 = 0;
	int iLocal_520 = 0;
	struct<21> Local_521[1];
	var uLocal_543 = 2;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 570;
	var uLocal_547 = 1065353216;
	var uLocal_548 = -1082130432;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 2;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 570;
	var uLocal_564 = 1065353216;
	var uLocal_565 = -1082130432;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 2;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	int iLocal_578 = 0;
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
	int iLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 1065353216;
	var uLocal_603 = 1065353216;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 1065353216;
	var uLocal_608 = 1065353216;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 1065353216;
	var uLocal_613 = 1065353216;
	var uLocal_614 = 0;
	var uLocal_615 = 1040187392;
	var uLocal_616 = 1040187392;
	var uLocal_617 = -1;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = -1082130432;
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
	char* sLocal_636 = NULL;
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
	vector3 vLocal_652 = { 0f, 0f, 0f };
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	vector3 vLocal_664[39] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_782 = 0;
	int iLocal_783 = 0;
	struct<9> Local_784 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	struct<9> Local_800 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<2606> Var0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_274 = joaat("stagecoach001x");
	iLocal_404 = 15;
	iLocal_405 = 15;
	fLocal_516 = 12f;
	fLocal_517 = 0.75f;
	iLocal_578 = func_1(0, 0, 0) | 64 | 8192 | 4194304;
	iLocal_597 = 1;
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
		func_24(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43));
	}
	if (func_7(uParam0->f_172, 8))
	{
		iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
		func_25(uParam0, iVar0);
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
		func_26(uParam0);
	}
	func_27(&(uParam0->f_753));
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
	else if (func_28(uParam0))
	{
		bVar0 = true;
		func_29(uParam0, 128);
	}
	if (bVar0)
	{
		func_29(uParam0, 64);
		if (func_30())
		{
			func_29(uParam0, 128);
		}
		func_31(0, 0);
	}
	if (func_32(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
	{
		uParam0->f_741 = 0f;
		uParam0->f_742 = 0f;
	}
	if (!func_33(uParam0, 64))
	{
		func_34(uParam0->f_174, 1);
		func_35(uParam0->f_174, 1);
	}
	func_36(uParam0->f_174);
	func_37(uParam0);
	func_38(uParam0);
	func_39(uParam0, 0, 0, 0, -1, -1, 0);
	func_40(uParam0, 0, 0, 0, -1, -1, 0);
	func_41(&(uParam0->f_178));
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_28 != 0)
	{
		func_42(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, 7);
	}
	func_43(uParam0);
	func_44(uParam0, 1);
	iVar1 = func_45(uParam0);
	if (!func_7(uParam0->f_172, 8388608) && func_46(uParam0))
	{
		iVar1 = 4;
	}
	if (!func_47(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 64))
	{
		if ((iVar1 != 0 && iVar1 != 1) && !func_46(uParam0))
		{
			func_48(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
		}
	}
	func_49();
	func_50(uParam0, iVar1);
}

void func_6(var uParam0)
{
	int iVar0;
	struct<4> Var1;

	if (func_7(uParam0->f_172, 50331648))
	{
		return;
	}
	if (func_51())
	{
		func_2(&(uParam0->f_172), 16777216);
		if (!func_7(uParam0->f_172, 8))
		{
			func_52(uParam0, 14);
		}
		return;
	}
	else if (func_53())
	{
		func_2(&(uParam0->f_172), 33554432);
		if (!func_7(uParam0->f_172, 8))
		{
			func_52(uParam0, 15);
		}
		return;
	}
	if (func_54(uParam0))
	{
		return;
	}
	func_3(&(uParam0->f_172), 64);
	func_3(&(uParam0->f_172), 128);
	if (func_7(uParam0->f_172, 67108864))
	{
		func_55(1);
		func_3(&(uParam0->f_172), 67108864);
	}
	func_56(uParam0);
	if (((uParam0->f_177 == 11 || uParam0->f_177 == 10) || uParam0->f_177 == 8) || uParam0->f_177 == 9)
	{
		return;
	}
	if (func_7(uParam0->f_172, 4096))
	{
		iVar0 = func_57(0);
		if (!func_58(iVar0) || ((*Global_1347702)[uParam0->f_174 /*49*/])->f_15 == iVar0)
		{
			func_3(&(uParam0->f_172), 4096);
		}
		else
		{
			return;
		}
	}
	if (!func_7(uParam0->f_172, 8) && func_59())
	{
		if (uParam0->f_174 != 59 || !func_60(97))
		{
			if (uParam0->f_174 != 155 || !func_60(8))
			{
				return;
			}
		}
	}
	if (uParam0->f_177 != 2)
	{
		if (func_7(uParam0->f_172, 8))
		{
			if (func_33(uParam0, 32))
			{
				if (!func_33(uParam0, 64))
				{
					if (!func_61(32768))
					{
						Var1 = { func_62(0) };
						if (func_63(&Var1))
						{
							func_64(uParam0, 32);
						}
					}
					else
					{
						func_64(uParam0, 32);
					}
				}
				else
				{
					func_64(uParam0, 32);
				}
			}
			if (func_65(uParam0))
			{
				if (uParam0->f_177 != 6 && uParam0->f_177 != 5)
				{
					func_50(uParam0, 9);
					return;
				}
			}
			else if (func_66(uParam0))
			{
				if (uParam0->f_177 != 6 && uParam0->f_177 != 5)
				{
					func_50(uParam0, 8);
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
				func_67();
			}
			if (!func_7(uParam0->f_172, 536870912))
			{
				POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
			}
			if (!func_7(uParam0->f_172, 1073741824))
			{
				func_68(1, 0);
			}
			func_69(uParam0);
		}
		else if (!func_33(uParam0, 64) && !func_28(uParam0))
		{
			uParam0->f_743 = BUILTIN::VDIST2(func_70(uParam0->f_174), Global_36);
			if (func_71(uParam0))
			{
				if (func_72(uParam0) == 2 || func_72(uParam0) == 12)
				{
					func_23(uParam0);
					return;
				}
				func_73(uParam0);
				func_50(uParam0, 10);
				return;
			}
			else
			{
				func_74(uParam0);
			}
			func_75(uParam0);
		}
	}
	func_76(uParam0);
	if (func_7(uParam0->f_172, 32))
	{
		func_78(uParam0, func_77(uParam0));
	}
	else if (func_7(uParam0->f_172, 8))
	{
		if (func_79(uParam0))
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
		if (!func_80(&(uParam0->f_2597)))
		{
			func_81(&(uParam0->f_2597), 0);
		}
		func_82(uParam0);
		if (func_83(&(uParam0->f_2597)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (uParam0->f_177 == 10)
			{
				func_26(uParam0);
			}
			else
			{
				func_73(uParam0);
			}
			func_23(uParam0);
		}
	}
}

void func_9(var uParam0)
{
	if (!func_84(64))
	{
		return;
	}
	if (func_85())
	{
		if (Global_1310720->f_6)
		{
		}
		else
		{
			return;
		}
	}
	if (Global_1879534 && func_28(uParam0))
	{
		return;
	}
	if (func_7(uParam0->f_172, 8192))
	{
		func_50(uParam0, 1);
	}
}

void func_10(var uParam0)
{
	if (func_86(uParam0))
	{
		if (func_33(uParam0, 64))
		{
			func_87(uParam0);
			func_50(uParam0, 2);
			func_79(uParam0);
		}
		else if (func_32(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
		{
			func_50(uParam0, 3);
		}
		else
		{
			func_88(uParam0);
			func_50(uParam0, 4);
		}
	}
}

void func_11(var uParam0)
{
	int iVar0;

	if (!func_80(&(uParam0->f_2585)) || IntToFloat(func_83(&(uParam0->f_2585))) > func_89(uParam0))
	{
		func_81(&(uParam0->f_2585), 1);
		iVar0 = func_90(uParam0);
		if (iVar0 != 3)
		{
			if ((iVar0 == 7 || iVar0 == 5) || iVar0 == 6)
			{
				func_87(uParam0);
				func_79(uParam0);
			}
			func_50(uParam0, iVar0);
		}
	}
}

void func_12(var uParam0)
{
	int iVar0;

	if (!func_84(64))
	{
		return;
	}
	if (func_85())
	{
		return;
	}
	else if (func_91(&Global_1935630, 131072))
	{
		return;
	}
	else if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	func_92(uParam0);
	if (func_93(uParam0))
	{
		func_87(uParam0);
		iVar0 = func_94(uParam0);
		if (iVar0 == 5)
		{
			func_95(uParam0, 4);
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
			func_95(uParam0, 4);
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
		if (func_28(uParam0))
		{
			if (iVar0 == 7 && !CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
		func_79(uParam0);
		func_50(uParam0, iVar0);
	}
}

void func_13(var uParam0)
{
	if (!func_7(uParam0->f_172, 8192))
	{
		return;
	}
	func_50(uParam0, func_97(uParam0, func_96(uParam0)));
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
		func_98(0);
	}
	else if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
}

void func_14(var uParam0)
{
	if (func_99(uParam0))
	{
		func_15(uParam0);
		func_50(uParam0, 6);
	}
}

void func_15(var uParam0)
{
	int iVar0;

	func_100(uParam0);
	if (func_101(&(uParam0->f_2575)))
	{
		if (func_102(uParam0))
		{
			func_103(uParam0, 1);
			iVar0 = func_104(uParam0);
			func_50(uParam0, iVar0);
		}
	}
	else
	{
		func_3(&(uParam0->f_172), 16);
		func_103(uParam0, 0);
		iVar0 = func_104(uParam0);
		func_50(uParam0, iVar0);
	}
}

void func_16(var uParam0)
{
	int iVar0;

	if (func_105(uParam0))
	{
		return;
	}
	if (func_7(uParam0->f_172, 262144))
	{
		func_107(uParam0, func_106(uParam0));
	}
	iVar0 = func_108(uParam0);
	if (iVar0 == 5)
	{
		func_95(uParam0, 7);
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
		func_95(uParam0, 7);
		func_15(uParam0);
	}
	func_50(uParam0, iVar0);
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
		func_50(uParam0, 8);
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
	if (func_72(uParam0) != 0)
	{
		func_52(uParam0, 0);
		if (func_109(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
		{
			if (!STATS::STATSTRACKER_IS_INITIALIZED(func_110(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15)))
			{
				STATS::_0xCA41E86545413B5B(func_111(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), func_112(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), func_113(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), func_110(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), Global_36);
			}
			if (!STATS::STATSTRACKER_IS_INITIALIZED(func_110(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15)))
			{
			}
			else
			{
				STATS::STATSTRACKER_DEED_STARTED(func_110(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), 0);
			}
		}
		if (func_32(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 262144))
		{
			func_114();
			func_115(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), 0);
		}
		func_116(uParam0->f_174, 1);
		func_117(uParam0);
		func_119(func_118(), 0);
		if (func_7(uParam0->f_172, 8))
		{
			func_120(uParam0, 0, 1);
			if (func_121(uParam0->f_174, 128))
			{
				func_122(uParam0->f_174, 128);
			}
		}
		func_123(uParam0);
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
				func_49();
				UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
				func_124(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15);
				func_125();
				func_126(Global_1935630, 8);
			}
			MemCopy(&vVar0, {((*Global_1347702)[uParam0->f_174 /*49*/])->f_1}, 3);
			StringConCat(&vVar0, "_obj", 24);
			if (!func_32(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4))
			{
				if (!func_32(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 64))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&vVar0))
					{
						func_127(uParam0, &vVar0, 1, 7500, 0, 0, -1082130432, 0, 0, -1, -1, 0);
					}
				}
			}
			bVar3 = func_128();
			func_129(uParam0->f_174, 1, 1, 0, 1, 1, bVar3);
			if (func_7(uParam0->f_172, 8))
			{
				iVar4 = func_96(uParam0);
				if (iVar4 < 0)
				{
					iVar4 = 0;
				}
				Var5 = func_110(func_130(uParam0->f_174));
				Var5.f_1 = 0;
				Var5.f_2 = iVar4;
				Var5.f_3 = func_72(uParam0);
				Var5.f_4 = (ENTITY::GET_ENTITY_HEALTH(Global_35) * 100 / ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0));
				Var5.f_5 = Global_40.f_7729;
				Var5.f_6 = func_131(0);
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
		if (func_28(uParam0))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			func_132();
			func_133(0);
		}
		else if (func_7(uParam0->f_172, 32768))
		{
			func_134(1, 1);
			func_2(&(uParam0->f_172), 65536);
			return;
		}
	}
	if (func_7(uParam0->f_172, 32768))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		func_135(1);
		func_136();
		func_137(6);
		func_138(4096);
	}
	func_73(uParam0);
	if (func_7(uParam0->f_172, 32768) || func_28(uParam0))
	{
		func_23(uParam0);
	}
	func_50(uParam0, 10);
}

void func_18(var uParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	func_50(uParam0, 9);
	if (func_72(uParam0) != 1)
	{
		func_52(uParam0, 1);
		if (func_121(uParam0->f_174, 128))
		{
			func_122(uParam0->f_174, 128);
		}
		func_139(uParam0);
	}
	if (func_7(uParam0->f_172, 134217728))
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::_0x16E9ABDD34DDD931();
			CAM::DO_SCREEN_FADE_OUT(0);
		}
	}
	func_116(uParam0->f_174, 0);
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
			if (!func_80(&(uParam0->f_2597)))
			{
				func_81(&(uParam0->f_2597), 0);
			}
			func_82(uParam0);
			bVar1 = CAM::_0x139EFB0A71DD9011();
			bVar2 = CAM::_0x7CE9DC58E3E4755F();
			if (!func_7(uParam0->f_172, 2097152) && !bVar2)
			{
				if (!bVar1)
				{
					func_140(1, 1);
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
			else if (func_83(&(uParam0->f_2597)) >= 2500)
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
		func_142(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, iVar3, &(uParam0->f_2578), func_141(uParam0), 0, bVar0);
	}
	if (func_7(uParam0->f_172, 8))
	{
		MISC::_0x1096603B519C905F("");
		HUD::SET_MISSION_NAME(false, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		func_49();
		func_126(Global_1935630, 8);
	}
	if (func_143(&(uParam0->f_2605)))
	{
		func_144(uParam0);
	}
	func_145(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15);
	bParam1 = true;
	if (func_7(uParam0->f_172, 50331648))
	{
		bParam1 = true;
	}
	else
	{
		func_73(uParam0);
	}
	if (bParam1)
	{
		func_23(uParam0);
	}
	else
	{
		func_50(uParam0, 10);
	}
}

void func_19(var uParam0)
{
	bool bVar0;
	int iVar1;

	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_13 & 4096 != 0)
	{
		bVar0 = MAP::DOES_BLIP_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_37);
		uParam0->f_743 = BUILTIN::VDIST2(func_70(uParam0->f_174), Global_36);
		func_146(uParam0->f_174, bVar0, uParam0->f_743);
	}
	if (func_147(64, 1, 1))
	{
		iVar1 = func_57(0);
		if (func_58(iVar1))
		{
			func_26(uParam0);
			func_23(uParam0);
			return;
		}
	}
	if (func_148(uParam0) && func_149())
	{
		func_26(uParam0);
		func_23(uParam0);
	}
	else if (!func_80(&(uParam0->f_2585)) || IntToFloat(func_83(&(uParam0->f_2585))) > func_150(uParam0))
	{
		func_81(&(uParam0->f_2585), 1);
		if (func_151(uParam0))
		{
			func_50(uParam0, 11);
		}
	}
}

int func_20()
{
	return func_153(func_152());
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
	func_154(0);
	func_155(0);
	func_156(0);
	func_157(0);
	func_158(0);
	func_159(1f);
}

void func_23(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	func_160(uParam0);
	func_161(uParam0->f_751);
	func_162(uParam0);
	func_163(uParam0);
	func_164(uParam0);
	func_165(uParam0->f_174);
	func_166(uParam0->f_174);
	func_167(2);
	iVar0 = 0;
	bVar2 = false;
	if (func_168(((*Global_1347702)[uParam0->f_174 /*49*/])->f_14, 1024))
	{
		bVar2 = true;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		func_169(iVar1, 1, -1082130432, 1, 1, bVar2, 0);
		iVar0++;
	}
	if (func_72(uParam0) == 2)
	{
		func_24(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43));
	}
	else
	{
		func_170(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43), 1, 0, 1);
	}
	((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = 0;
	func_171(uParam0);
	func_172(uParam0);
	if (func_72(uParam0) == 0)
	{
		func_173(uParam0->f_174);
	}
	if (func_72(uParam0) == 2 || func_72(uParam0) == 12)
	{
		func_174(uParam0->f_174);
	}
	if (func_175(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
	{
		func_176(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 0, 2);
	}
	func_103(uParam0, 0);
	if (func_7(uParam0->f_172, 8))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
		}
	}
	func_3(&(uParam0->f_172), 8);
	func_177(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
	func_177(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 4);
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_35 != -1)
	{
		func_178(uParam0->f_174, 0);
	}
	if (func_72(uParam0) == 12)
	{
		func_116(uParam0->f_174, 0);
		if (uParam0->f_174 == 65 && func_57(0) == Global_1888801[16 /*35*/])
		{
			func_179(uParam0->f_174, 8192);
		}
	}
	func_180(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 32768);
	func_181(uParam0);
	func_49();
	func_182(0);
	func_182(1);
	func_183(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_24(int* iParam0)
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

void func_25(var uParam0, int iParam1)
{
}

void func_26(var uParam0)
{
}

void func_27(var uParam0)
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
				if (func_184(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
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

int func_28(var uParam0)
{
	if (func_61(32768) && func_47(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 8192))
	{
		return 1;
	}
	return 0;
}

void func_29(var uParam0, int iParam1)
{
	uParam0->f_173 = (uParam0->f_173 || iParam1);
}

bool func_30()
{
	return Global_1572864->f_13;
}

void func_31(int iParam0, int iParam1)
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

bool func_32(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_33(var uParam0, int iParam1)
{
	return (uParam0->f_173 && iParam1) != 0;
}

int func_34(int iParam0, bool bParam1)
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

int func_35(int iParam0, bool bParam1)
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

int func_36(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 128 != 0)
	{
		return 1;
	}
	((*Global_1347702)[iParam0 /*49*/])->f_45 = func_185(((*Global_1347702)[iParam0 /*49*/])->f_24, 1);
	func_48(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 128);
	return 1;
}

void func_37(var uParam0)
{
	func_186(40);
	func_187(uParam0, 2);
	func_188(uParam0, 1.5f);
	func_189(uParam0, 1.5f);
	func_190(-857562377, 0, 0, 1103626240);
	func_194(iLocal_22[4], &uLocal_271, func_191(4), func_192(4), func_193(4), 1, 10208, 1, 2, "RHMRB_VOL_BARN");
	func_194(iLocal_22[5], &uLocal_272, func_191(5), func_192(5), func_193(5), 1, 10208, 1, 2, "RHMRB_VOL_BARN_RESTRICT");
	iLocal_22[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_191(0), func_192(0), func_193(0), "rcm_homerob00 - Restriction");
	iLocal_22[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_191(1), func_192(1), func_193(1), "rcm_homerob00 - Leadin Trigger");
	iLocal_22[12] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_191(12), func_192(12), func_193(12), "rcm_homerob00 - Leadin Restrict");
	func_195(1, 1);
	func_196(1, 1);
	if (VOLUME::DOES_VOLUME_EXIST(&(iLocal_22[0])))
	{
		func_197(uParam0, iLocal_22[0], 0, 0, 0, 0);
	}
	func_198(2);
}

void func_38(var uParam0)
{
	if (uParam0->f_748 == -1)
	{
		if (!func_32(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
		{
			uParam0->f_748 = 5;
		}
	}
	if (uParam0->f_748 > 0)
	{
		PED::_RESERVE_AMBIENT_PEDS(uParam0->f_748);
	}
}

void func_39(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
		uParam0->f_2603 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_70(uParam0->f_174), 0f, 0f, 0f, vVar8, &cVar0);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_2603))
	{
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_2603, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
	}
}

void func_40(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
		uParam0->f_2604 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_70(uParam0->f_174), 0f, 0f, 0f, vVar8, &cVar0);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_2604))
	{
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_2604, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
	}
}

void func_41(var uParam0)
{
	func_199(uParam0);
}

void func_42(var uParam0, int iParam1, int iParam2)
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
	if (func_7(uParam0->f_172, 8192))
	{
		func_3(&(uParam0->f_172), 8192);
	}
}

void func_43(var uParam0)
{
	func_202(uParam0, 0);
	func_42(uParam0, iLocal_274, 7);
	func_42(uParam0, joaat("p_binoculars01x"), 7);
	func_42(uParam0, joaat("p_cigarette01x"), 7);
	func_42(uParam0, joaat("p_cigarettebox01x"), 7);
	TASK::REQUEST_WAYPOINT_RECORDING(func_203());
	TASK::REQUEST_WAYPOINT_RECORDING(func_204());
	STREAMING::_0x19A6BE7D9C6884D3(935336933, 15, 0, 0);
	STREAMING::_0x19A6BE7D9C6884D3(201363338, 15, 0, 0);
}

void func_44(var uParam0, int iParam1)
{
	if (func_205(uParam0) == iParam1)
	{
		return;
	}
	func_206(uParam0, uParam0->f_168, iParam1);
	uParam0->f_168 = iParam1;
	func_3(&(uParam0->f_172), 8192);
}

int func_45(var uParam0)
{
	return 0;
}

int func_46(var uParam0)
{
	if (func_33(uParam0, 64))
	{
		return 0;
	}
	if ((func_32(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_7(uParam0->f_172, 1024)) && !func_207(uParam0->f_174))
	{
		return 1;
	}
	return 0;
}

bool func_47(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_48(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_49()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_50(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_177)
	{
		func_95(uParam0, uParam0->f_177);
		uParam0->f_177 = iParam1;
	}
}

int func_51()
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

void func_52(var uParam0, int iParam1)
{
	if (uParam0->f_175 != iParam1)
	{
		uParam0->f_175 = iParam1;
	}
}

int func_53()
{
	if ((CAM::IS_SCREEN_FADED_OUT() && !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), false))
	{
		return 1;
	}
	return 0;
}

int func_54(var uParam0)
{
	int iVar0;
	int iVar1;

	switch (func_208(&iVar0))
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
			if (((func_58(iVar0) && iVar0 == ((*Global_1347702)[uParam0->f_174 /*49*/])->f_15) && func_7(uParam0->f_172, 8)) && (!func_32(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 134217728) || func_61(32768)))
			{
				iVar1 = 1;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_3398, iVar1);
			break;
	}
	return 0;
}

void func_55(bool bParam0)
{
	func_209(bParam0);
	func_210(bParam0);
}

void func_56(var uParam0)
{
	if (func_7(uParam0->f_172, 8192))
	{
		return;
	}
	if (uParam0->f_168 == 0)
	{
		return;
	}
	if (func_211(uParam0, uParam0->f_168))
	{
		func_2(&(uParam0->f_172), 8192);
	}
}

int func_57(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

bool func_58(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_59()
{
	int iVar0;

	iVar0 = func_57(0);
	if ((func_58(iVar0) && func_111(iVar0) == 8) && func_32(((*Global_1347702)[func_112(iVar0) /*49*/])->f_12, 131072))
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0)
{
	if (func_212() != -1)
	{
		return 0;
	}
	if (!func_213(iParam0))
	{
		return 0;
	}
	return func_175(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

bool func_61(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

struct<4> func_62(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			Var1 = { *(Local_64[0 /*4*/]) };
			Var1.f_3 = (Local_64[0 /*4*/])->f_3;
			break;
		case 1:
			Var1 = { *(Local_64[1 /*4*/]) };
			Var1.f_3 = (Local_64[1 /*4*/])->f_3;
			break;
		case 2:
			Var1 = { *(Local_64[2 /*4*/]) };
			Var1.f_3 = (Local_64[2 /*4*/])->f_3;
			break;
		case 3:
			Var1 = { *(Local_64[3 /*4*/]) };
			Var1.f_3 = (Local_64[3 /*4*/])->f_3;
			break;
		case 4:
			Var1 = { *(Local_64[4 /*4*/]) };
			Var1.f_3 = (Local_64[4 /*4*/])->f_3;
			break;
		case 5:
			Var1 = { *(Local_64[5 /*4*/]) };
			Var1.f_3 = (Local_64[5 /*4*/])->f_3;
			break;
		case 6:
			Var1 = { *(Local_64[6 /*4*/]) };
			Var1.f_3 = (Local_64[6 /*4*/])->f_3;
			break;
		case 7:
			Var1 = { *(Local_64[7 /*4*/]) };
			Var1.f_3 = (Local_64[7 /*4*/])->f_3;
			break;
		case 8:
			Var1 = { *(Local_64[8 /*4*/]) };
			Var1.f_3 = (Local_64[8 /*4*/])->f_3;
			break;
		case 9:
			Var1 = { *(Local_64[9 /*4*/]) };
			Var1.f_3 = (Local_64[9 /*4*/])->f_3;
			break;
		case 10:
			Var1 = { *(Local_64[10 /*4*/]) };
			Var1.f_3 = (Local_64[10 /*4*/])->f_3;
			break;
	}
	return Var1;
}

bool func_63(var uParam0)
{
	return func_214(*uParam0, uParam0->f_3);
}

void func_64(var uParam0, int iParam1)
{
	uParam0->f_173 = (uParam0->f_173 - (uParam0->f_173 && iParam1));
}

int func_65(var uParam0)
{
	int iVar0;

	if (func_215(67108864))
	{
		return 0;
	}
	if (func_215(524288))
	{
		StringCopy(&(uParam0->f_2578), "RHMR0_FAIL2", 24);
		func_216(32768);
		return 1;
	}
	else if (func_215(1048576))
	{
		StringCopy(&(uParam0->f_2578), "RHMR0_FAIL7", 24);
		func_216(32768);
		return 1;
	}
	if ((ENTITY::IS_ENTITY_DEAD(iLocal_262) && func_217(5)) && func_218(uParam0) != 29)
	{
		StringCopy(&(uParam0->f_2578), "RHMR0_FAIL3", 24);
		func_216(32768);
		return 1;
	}
	else if (func_219(iLocal_262, Global_35))
	{
		StringCopy(&(uParam0->f_2578), "RHMR0_FAIL3", 24);
		func_216(32768);
		return 1;
	}
	else if (func_220(1, 65536))
	{
		StringCopy(&(uParam0->f_2578), "RHMR0_FAIL3", 24);
		func_216(32768);
		return 1;
	}
	else if (ENTITY::IS_ENTITY_DEAD(iLocal_263) && func_218(uParam0) != 29)
	{
		StringCopy(&(uParam0->f_2578), "RHMR0_FAIL4", 24);
		func_216(32768);
		return 1;
	}
	else if (ENTITY::IS_ENTITY_DEAD(iLocal_264) || PED::IS_PED_FATALLY_INJURED(iLocal_264))
	{
		StringCopy(&(uParam0->f_2578), "RHMR0_FAIL12", 24);
		func_216(32768);
		return 1;
	}
	else if (func_221(&iLocal_265, &uLocal_449, &iLocal_478))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_265))
		{
			StringCopy(&(uParam0->f_2578), "RHMR0_FAIL9", 24);
		}
		else if (iLocal_478 == 8)
		{
			StringCopy(&(uParam0->f_2578), "RHMR0_FAIL10", 24);
		}
		else
		{
			StringCopy(&(uParam0->f_2578), "RHMR0_FAIL6", 24);
		}
		func_216(32768);
		return 1;
	}
	else if ((func_222(PLAYER::PLAYER_ID(), 0, 0, 1) && !func_215(262144)) || iLocal_260)
	{
		StringCopy(&(uParam0->f_2578), "RHMR0_FAIL8", 24);
		func_216(32768);
		return 1;
	}
	iVar0 = func_218(uParam0);
	if (iVar0 > 16)
	{
		if (!func_223())
		{
			if (!func_222(PLAYER::PLAYER_ID(), 0, 0, 1))
			{
				if (func_224(vLocal_664[38 /*3*/]))
				{
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), 195938434, 0, 0, 0, 0, 0, 0, 0);
				}
			}
		}
	}
	if (!func_215(8192) && func_215(512))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_14) || FIRE::IS_ENTITY_ON_FIRE(iLocal_14))
		{
			StringCopy(&(uParam0->f_2578), "RHMR0_FAIL1", 24);
			func_216(32768);
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_14, 0, 0))
		{
			StringCopy(&(uParam0->f_2578), "RHMR0_FAIL11", 24);
			func_216(32768);
			return 1;
		}
	}
	if (func_215(131072))
	{
		StringCopy(&(uParam0->f_2578), "RHMR0_FAIL5", 24);
		func_216(32768);
		return 1;
	}
	return 0;
}

int func_66(var uParam0)
{
	return 0;
}

void func_67()
{
	LAW::_0x15ABD5004CAD2D99(0);
	LAW::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 1352191066, 3, 3, 1);
	LAW::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 1171995096, 4, 0, -1);
}

void func_68(bool bParam0, bool bParam1)
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

void func_69(var uParam0)
{
}

Vector3 func_70(int iParam0)
{
	vector3 vVar0;

	if (!func_213(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_225(iParam0, &vVar0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_24 = { vVar0 };
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

int func_71(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_84(64))
	{
		return 0;
	}
	else if (func_91(&Global_1935630, 131072))
	{
		return 0;
	}
	else if (func_85())
	{
		return 0;
	}
	else if (Global_1310720->f_6)
	{
		return 0;
	}
	else if (func_47(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024))
	{
		return 0;
	}
	if (func_147(0, 1, 0))
	{
		iVar0 = func_57(0);
		if (func_58(iVar0) && func_226(uParam0, iVar0))
		{
		}
		else
		{
			func_52(uParam0, 12);
			return 1;
		}
	}
	if (func_227(uParam0->f_174))
	{
		func_52(uParam0, 13);
		return 1;
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 32 == 0)
	{
		if (uParam0->f_743 > (((*Global_1347702)[uParam0->f_174 /*49*/])->f_17 * ((*Global_1347702)[uParam0->f_174 /*49*/])->f_17))
		{
			func_52(uParam0, 2);
			return 1;
		}
	}
	if (!func_32(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_207(uParam0->f_174))
	{
		func_228(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 16384);
		func_52(uParam0, 3);
		return 1;
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 8388608 != 0)
	{
		iVar1 = func_229(uParam0->f_174);
		if (iVar1 != -1)
		{
			if (func_230(iVar1))
			{
				if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
				{
					func_179(uParam0->f_174, 32768);
				}
				func_52(uParam0, 5);
				return 1;
			}
			else if (func_231(iVar1))
			{
				if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
				{
					func_179(uParam0->f_174, 32768);
				}
				func_52(uParam0, 5);
				return 1;
			}
		}
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_45 != -1)
	{
		if (func_230(((*Global_1347702)[uParam0->f_174 /*49*/])->f_45))
		{
			func_179(uParam0->f_174, 2048);
			func_52(uParam0, 6);
			return 1;
		}
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_46 != 0)
	{
		if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 268435456 == 0)
		{
			iVar2 = func_232();
			if (!func_233(iVar2, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_46))
			{
				func_52(uParam0, 7);
				return 1;
			}
		}
	}
	if (Global_1357549->f_1614 == 1)
	{
		func_52(uParam0, 8);
		return 1;
	}
	if (!func_32(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 8192))
	{
		if (func_234(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			func_179(uParam0->f_174, 16384);
			func_52(uParam0, 9);
			return 1;
		}
	}
	if (uParam0->f_172 & 256 != 0 && !func_235(uParam0->f_174, 1, 1, 0, 0))
	{
		func_52(uParam0, 10);
		return 1;
	}
	if (func_236(uParam0) || func_237(uParam0->f_174, uParam0->f_743))
	{
		func_179(uParam0->f_174, 1024);
		func_52(uParam0, 11);
		return 1;
	}
	if (!func_238(uParam0) && func_239(uParam0->f_743))
	{
		func_179(uParam0->f_174, 8192);
		func_52(uParam0, 11);
		return 1;
	}
	return 0;
}

int func_72(var uParam0)
{
	return uParam0->f_175;
}

void func_73(var uParam0)
{
	bool bVar0;

	func_240();
	func_241(uParam0);
	if (func_7(uParam0->f_172, 8))
	{
		bVar0 = true;
		if (func_72(uParam0) == 1)
		{
			bVar0 = false;
		}
		else if (func_33(uParam0, 128) && func_30())
		{
			func_157(0);
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
		if (func_72(uParam0) != 0)
		{
			UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
			func_125();
			if (func_72(uParam0) == 1)
			{
				func_242(uParam0->f_174, 1);
			}
		}
		if (func_7(uParam0->f_172, 67108864))
		{
			func_55(1);
			func_3(&(uParam0->f_172), 67108864);
		}
		func_243(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_ENABLE_HUD_CONTEXT_THIS_FRAME(Global_35, 262143);
			func_244(Global_35);
			PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(-2012097661, true);
		}
	}
	if (func_72(uParam0) == 3)
	{
		func_245(uParam0->f_174);
	}
	else if (func_72(uParam0) == 2)
	{
	}
	else if (!func_168(((*Global_1347702)[uParam0->f_174 /*49*/])->f_14, 2))
	{
		func_116(uParam0->f_174, 0);
	}
	func_174(uParam0->f_174);
	if (func_72(uParam0) == 0)
	{
		func_173(uParam0->f_174);
		func_246(uParam0);
	}
	func_162(uParam0);
	func_247(0);
	func_103(uParam0, 0);
	func_44(uParam0, 4);
	func_3(&(uParam0->f_172), 8);
	func_177(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 1024);
	func_177(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
	func_48(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 4);
	func_248(&(uParam0->f_2585));
	func_249(uParam0);
}

void func_74(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	vVar0 = { func_70(uParam0->f_174) };
	fVar3 = BUILTIN::VDIST2(Global_36, vVar0);
	if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_37))
	{
		if (uParam0->f_177 == 4 || uParam0->f_177 == 3)
		{
			fVar4 = func_250(uParam0->f_174);
			if ((((*Global_1347702)[uParam0->f_174 /*49*/])->f_36 != -1822497728 || func_32(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 32)) || fVar3 < (fVar4 * fVar4))
			{
				func_251(uParam0->f_174, vVar0, 1, 0);
			}
		}
	}
	else
	{
		func_252(uParam0->f_174, fVar3);
		func_253(uParam0->f_174, vVar0, fVar3);
		func_254(uParam0->f_174);
		func_255(uParam0->f_174);
	}
}

void func_75(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;

	if (func_33(uParam0, 64))
	{
		return;
	}
	if (func_7(uParam0->f_172, 256))
	{
		if ((func_7(uParam0->f_172, 4194304) && uParam0->f_177 == 4) && !func_46(uParam0))
		{
			func_3(&(uParam0->f_172), 256);
			func_161(uParam0->f_751);
			func_256(uParam0);
		}
		else
		{
			func_257(uParam0);
		}
	}
	else if (uParam0->f_177 == 4)
	{
		if (func_46(uParam0))
		{
			if (func_7(uParam0->f_172, 16))
			{
				cVar0 = { func_258() };
				Var8 = { func_259(&(uParam0->f_206)) };
				if (!MISC::ARE_STRINGS_EQUAL(&Var8, &cVar0))
				{
					func_260(&(uParam0->f_206));
					func_261(&(uParam0->f_206), &cVar0);
				}
			}
			func_2(&(uParam0->f_172), 256);
		}
	}
}

void func_76(var uParam0)
{
	bool bVar0;
	bool bVar1;

	if (!func_7(uParam0->f_172, 16))
	{
		return;
	}
	if (func_262(uParam0->f_206.f_5))
	{
		uParam0->f_206.f_5 = { func_70(uParam0->f_174) };
	}
	bVar0 = func_263(uParam0);
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
	if (func_101(&(uParam0->f_2575)))
	{
		bVar1 = true;
		if (uParam0->f_177 == 4 || uParam0->f_176 == 4)
		{
			if (func_28(uParam0))
			{
				bVar1 = false;
			}
			else if (func_47(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024))
			{
				bVar1 = false;
			}
		}
		if (func_264(&(uParam0->f_206), &(uParam0->f_2575), bVar0, bVar1))
		{
			if (!func_7(uParam0->f_172, 1))
			{
				func_265(uParam0);
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

int func_77(var uParam0)
{
	return uParam0->f_169;
}

void func_78(var uParam0, int iParam1)
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
			if (func_266(uParam0->f_2605[iVar0 /*16*/], 1048576))
			{
				if (func_267(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_268(uParam0->f_2605[iVar0 /*16*/]);
				}
				else if (func_269(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_270(uParam0->f_2605[iVar0 /*16*/]);
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
			if (func_266(uParam0->f_2605.f_241[iVar0 /*16*/], 1048576))
			{
				if (func_271(uParam0, uParam0->f_2605.f_241[iVar0 /*16*/], iParam1))
				{
					func_272(uParam0->f_2605.f_241[iVar0 /*16*/]);
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
			if (func_266(uParam0->f_2605.f_482[iVar0 /*16*/], 1048576))
			{
				if (func_271(uParam0, uParam0->f_2605.f_482[iVar0 /*16*/], iParam1))
				{
					if (func_273(uParam0->f_2605.f_482[iVar0 /*16*/], 0))
					{
						if (func_266(uParam0->f_2605.f_482[iVar0 /*16*/], 4))
						{
							func_274(&(uParam0->f_2605));
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_79(var uParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "RCM_", 64);
	StringConCat(&cVar0, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_1), 64);
	if (func_275(&(uParam0->f_2605), &cVar0, 1, -1, 0, 1))
	{
		func_2(&(uParam0->f_172), 32);
		return 1;
	}
	return 0;
}

bool func_80(var uParam0)
{
	return func_276(*uParam0, 1);
}

void func_81(var uParam0, int iParam1)
{
	if (iParam1 || !func_80(uParam0))
	{
		func_277(uParam0);
	}
}

void func_82(var uParam0)
{
}

int func_83(var uParam0)
{
	if (!func_80(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_278(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_279() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_84(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_85()
{
	return func_91(&Global_1935630, 4096);
}

int func_86(var uParam0)
{
	if (func_47(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 64))
	{
		return 1;
	}
	if (func_280(uParam0) && func_281(uParam0))
	{
		func_48(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
		return 1;
	}
	return 0;
}

void func_87(var uParam0)
{
	bool bVar0;
	struct<4> Var1;
	int iVar5;

	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 67108864 == 0)
	{
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_282(uParam0->f_174), func_283(uParam0->f_174)))
		{
			func_284(uParam0->f_174, 128);
		}
		else
		{
			func_122(uParam0->f_174, 128);
		}
		if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
		{
			if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_282(uParam0->f_174), func_283(uParam0->f_174)))
			{
				func_285(uParam0->f_174);
				func_286(uParam0->f_174);
			}
		}
		else
		{
			func_287(Global_1347702[uParam0->f_174 /*49*/]);
			func_285(uParam0->f_174);
		}
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(func_282(uParam0->f_174), func_283(uParam0->f_174)))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_282(uParam0->f_174), func_283(uParam0->f_174), 0, "");
		}
	}
	if (!func_175(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
	{
		if (!func_288(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
		{
			func_289(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1);
		}
		func_290(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1, 1);
		func_291(Global_1935630, 8);
	}
	bVar0 = true;
	if (func_33(uParam0, 64))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_116(uParam0->f_174, 0);
	}
	func_292(uParam0);
	func_2(&(uParam0->f_172), 8);
	if (!func_32(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 8192))
	{
		func_55(0);
		LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
		LAW::_0x292AD61A33A7A485();
		func_293(1, 16384, 1);
		func_2(&(uParam0->f_172), 67108864);
	}
	func_120(uParam0, 1, 0);
	func_243(1);
	func_247(1);
	func_294();
	func_164(uParam0);
	func_165(uParam0->f_174);
	func_166(uParam0->f_174);
	func_295(uParam0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	func_296(1);
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(-2012097661, false);
	}
	if (func_46(uParam0))
	{
		func_2(&(uParam0->f_172), 256);
	}
	if (func_7(uParam0->f_172, 8388608) || !func_7(uParam0->f_172, 256))
	{
		func_44(uParam0, 2);
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
	if (uParam0->f_174 != func_20())
	{
		if (!func_61(32768))
		{
			Var1 = { func_62(0) };
			if (!func_63(&Var1))
			{
				func_29(uParam0, 32);
			}
		}
	}
	iVar5 = 0;
	if (func_298(uParam0))
	{
		iVar5 = func_96(uParam0);
	}
	TELEMETRY::_TELEMETRY_MISSION_STARTED(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), 0, iVar5, func_33(uParam0, 64));
	if (uParam0->f_174 != func_20())
	{
		func_299(uParam0, func_62(0), func_62(1), 0, 1, 0);
	}
}

void func_88(var uParam0)
{
	func_300(uParam0, 0);
}

float func_89(var uParam0)
{
	return 1000f;
}

int func_90(var uParam0)
{
	return 3;
}

bool func_91(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_92(var uParam0)
{
}

int func_93(var uParam0)
{
	bool bVar0;

	if (func_28(uParam0))
	{
		return 1;
	}
	bVar0 = false;
	if (func_7(uParam0->f_172, 4096) || func_59())
	{
		bVar0 = true;
	}
	if (func_47(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024))
	{
		if (!bVar0)
		{
			return 1;
		}
	}
	if (func_7(uParam0->f_172, 262144) && !func_7(uParam0->f_172, 256))
	{
		func_107(uParam0, bVar0);
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

int func_94(var uParam0)
{
	func_303();
	func_304();
	func_305();
	func_306(-308659358, 0, 0, 0, 0, 0, 1, 0);
	func_306(-66987983, 0, 0, 0, 0, 0, 1, 0);
	return 6;
}

void func_95(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_176)
	{
		uParam0->f_176 = iParam1;
	}
}

int func_96(var uParam0)
{
	if (uParam0->f_174 == func_20())
	{
		return func_307();
	}
	return -1;
}

int func_97(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	switch (iVar0)
	{
		case 0:
			if (func_308(0, 1, uParam0))
			{
				func_309(1, 1);
				return 5;
			}
			break;
		case 2:
			if (func_308(2, 4, uParam0))
			{
				func_309(1, 1);
				return 7;
			}
			break;
		case 3:
			if (func_308(3, 8, uParam0))
			{
				func_309(1, 1);
				return 7;
			}
			break;
		case 4:
			if (func_308(4, 16, uParam0))
			{
				func_309(1, 1);
				return 7;
			}
			break;
		case 5:
			if (func_308(5, 32, uParam0) && func_220(1, 16777216))
			{
				func_310();
				func_311();
				func_312(&iLocal_14, iLocal_274, 12);
				return 7;
			}
			break;
		case 6:
			if (func_308(6, 64, uParam0) && func_220(1, 67108864))
			{
				func_313();
				func_311();
				func_312(&iLocal_14, iLocal_274, 12);
				return 7;
			}
			break;
		case 7:
			if (func_308(7, 128, uParam0) && func_220(1, 268435456))
			{
				func_311();
				return 7;
			}
			break;
		case 8:
			if (func_308(8, 256, uParam0))
			{
				func_309(1, 1);
				return 7;
			}
			break;
		case 9:
			if (func_308(9, 512, uParam0))
			{
				func_49();
				func_216(8192);
				func_309(1, 1);
				return 5;
			}
			break;
		case 10:
			if (func_308(10, 1024, uParam0))
			{
				func_216(8192);
				func_309(1, 1);
				return 7;
			}
			break;
		default:
			if (func_308(1, 2, uParam0))
			{
				func_312(&iLocal_14, iLocal_274, 12);
				return 7;
			}
			break;
	}
	return 2;
}

void func_98(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (!func_147(0, 0, 1) || iParam0)
	{
		iVar0 = func_314();
		iVar1 = func_315(iVar0);
		fVar2 = (1f - (MISC::ABSF(BUILTIN::TO_FLOAT(iVar1)) / BUILTIN::TO_FLOAT(8)));
		fVar3 = func_316(iVar0 < 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		fVar4 = func_316(iVar0 > 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
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

int func_99(var uParam0)
{
	if (func_47(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024) && uParam0->f_176 == 4)
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
		if (!func_317(uParam0))
		{
			if ((func_7(uParam0->f_172, 8192) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_751)) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_751, 0))
			{
				if (func_7(uParam0->f_172, 8388608) || func_86(uParam0))
				{
					func_44(uParam0, 2);
					if (!func_7(uParam0->f_172, 16))
					{
						func_88(uParam0);
					}
				}
			}
			return 0;
		}
	}
	else if (func_7(uParam0->f_172, 262144) && !func_7(uParam0->f_172, 256))
	{
		func_107(uParam0, 0);
		if (!func_7(uParam0->f_172, 1048576))
		{
			return 0;
		}
	}
	else
	{
		func_318();
		func_319(uParam0);
		if (!func_320(uParam0))
		{
			return 0;
		}
	}
	if (!func_7(uParam0->f_172, 1))
	{
	}
	return 1;
}

void func_100(var uParam0)
{
	if (func_7(uParam0->f_172, 2048))
	{
		return;
	}
	if (func_101(&(uParam0->f_2575)))
	{
		func_321(&(uParam0->f_206), &(uParam0->f_753));
		if (uParam0->f_176 == 4 && !func_32(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 512))
		{
			func_322(uParam0, 0);
		}
	}
	if (func_7(uParam0->f_172, 1024) && uParam0->f_176 == 4)
	{
		func_299(uParam0, func_62(0), func_62(1), 0, 1, 1);
	}
	func_3(&(uParam0->f_172), 512);
	if (uParam0->f_176 == 4)
	{
		if (func_323(Global_35))
		{
			if (func_324())
			{
				func_325(42, 1);
			}
		}
	}
	MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
	SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	func_2(&(uParam0->f_172), 2048);
}

int func_101(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return 1;
}

int func_102(var uParam0)
{
	struct<4> Var0;

	MemCopy(&Var0, {uParam0->f_2575}, 4);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return 1;
	}
	return func_326(Var0, &(uParam0->f_206), uParam0);
}

void func_103(var uParam0, bool bParam1)
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
	if (func_101(&(uParam0->f_2575)))
	{
		func_327(&(uParam0->f_206));
	}
	func_328(&(uParam0->f_206));
	func_329(uParam0);
}

int func_104(var uParam0)
{
	switch (func_330(uParam0))
	{
		case 0:
			func_331(uParam0, 1);
			break;
		case 1:
			func_331(uParam0, 2);
			break;
		case 2:
			func_332(-308659358, 1, 1);
			func_332(-66987983, 1, 1);
			func_331(uParam0, -1);
			break;
	}
	return 7;
}

int func_105(var uParam0)
{
	if (func_7(uParam0->f_172, 256) && !func_7(uParam0->f_172, 1024))
	{
		if (!func_317(uParam0))
		{
			if (func_7(uParam0->f_172, 512) && func_7(uParam0->f_172, 8192))
			{
				if (func_86(uParam0))
				{
					if (!func_7(uParam0->f_172, 16))
					{
						func_88(uParam0);
					}
				}
			}
			return 1;
		}
		else
		{
			if (func_7(uParam0->f_172, 1024) && uParam0->f_176 == 4)
			{
				func_299(uParam0, func_62(0), func_62(1), 0, 1, 1);
			}
			return 0;
		}
	}
	return 0;
}

int func_106(var uParam0)
{
	return 0;
}

void func_107(var uParam0, bool bParam1)
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
		if (func_333(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			func_2(&(uParam0->f_172), 1048576);
		}
		if (!func_7(uParam0->f_172, 524288))
		{
			if (func_334(&(uParam0->f_753)))
			{
				func_2(&(uParam0->f_172), 524288);
			}
		}
	}
}

int func_108(var uParam0)
{
	func_335(uParam0);
	func_336(uParam0);
	func_337(uParam0);
	if (!func_215(8192) && func_215(512))
	{
		func_338(&iLocal_14, 100);
	}
	switch (func_218(uParam0))
	{
		case 0:
			func_304();
			func_339(uParam0, 0, 1, 1);
			func_340(5, 4, 1);
			func_341(1);
			func_196(1, 1);
			func_342(iLocal_22[11]);
			func_300(uParam0, 1);
			func_343(uParam0, 2);
			break;
		case 1:
			if (func_344(uParam0))
			{
				func_345(18, 0);
				func_340(5, 4, 1);
				if (func_346(2))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RHMR0_RESTART_1");
					func_339(uParam0, 1, 2, 0);
					func_342(iLocal_22[11]);
					func_311();
					func_347(2);
					func_348(2);
					func_300(uParam0, 1);
					func_343(uParam0, 2);
				}
				else if (func_346(4))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RHMR0_RESTART_2");
					if (func_349())
					{
						func_339(uParam0, 2, 3, 0);
					}
					else
					{
						func_339(uParam0, 2, 4, 0);
					}
					func_342(iLocal_22[11]);
					func_311();
					func_347(4);
					func_300(uParam0, 1);
					if (func_349())
					{
						func_351(&(uParam0->f_206), func_350(4), 0);
					}
					else
					{
						func_351(&(uParam0->f_206), func_350(0), 0);
					}
					iLocal_48 = 5;
					func_352(uParam0, 16, &iLocal_401, vLocal_664[4 /*3*/]);
					func_353(&iLocal_262, &iLocal_275);
					func_343(uParam0, 3);
				}
				else if (func_346(8))
				{
					func_354(&uLocal_261);
					func_339(uParam0, 3, 5, 0);
					func_351(&(uParam0->f_206), func_350(4), 0);
					func_355(512);
					func_311();
					func_347(8);
					func_343(uParam0, 4);
				}
				else if (func_346(16))
				{
					func_354(&uLocal_261);
					func_339(uParam0, 4, 6, 0);
					func_351(&(uParam0->f_206), func_350(0), 0);
					func_355(512);
					func_311();
					func_347(16);
					func_343(uParam0, 4);
				}
				else if (func_346(32))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RHMR0_RESTART_NIGHT");
					func_356(&iLocal_270, &iLocal_266, &iLocal_269);
					func_357(func_203());
					func_358(((*Global_1347702)[94 /*49*/])->f_15, 1);
					func_342(iLocal_22[11]);
					func_339(uParam0, 5, 7, 0);
					func_359(8);
					func_311();
					func_347(32);
					func_360(iLocal_22[18], iLocal_22[14], iLocal_22[19]);
					func_343(uParam0, 5);
				}
				else if (func_346(64))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RHMR0_RESTART_DAY");
					func_356(&iLocal_270, &iLocal_266, &iLocal_269);
					func_357(func_203());
					func_358(((*Global_1347702)[94 /*49*/])->f_15, 0);
					func_342(iLocal_22[11]);
					func_339(uParam0, 6, 7, 0);
					func_359(4);
					func_311();
					func_347(64);
					func_360(iLocal_22[18], iLocal_22[14], iLocal_22[19]);
					func_343(uParam0, 5);
				}
				else if (func_346(128))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RHMR0_RESTART_3");
					func_356(&iLocal_270, &iLocal_266, &iLocal_269);
					func_357(func_203());
					func_339(uParam0, 7, 8, 0);
					func_342(iLocal_22[11]);
					func_311();
					func_347(128);
					func_360(iLocal_22[18], iLocal_22[14], iLocal_22[19]);
					func_343(uParam0, 13);
				}
				else if (func_346(256))
				{
					func_356(&iLocal_270, &iLocal_266, &iLocal_269);
					func_357(func_203());
					func_347(256);
					func_216(-2147483648);
					func_339(uParam0, 8, 9, 0);
					func_300(uParam0, 2);
					func_340(5, 4, 1);
					func_361(&uLocal_278, iLocal_262, "HOSEA", 1);
					func_362(1);
					func_311();
					func_343(uParam0, 17);
				}
				else if (func_346(512))
				{
					func_356(&iLocal_270, &iLocal_266, &iLocal_269);
					func_357(func_203());
					func_347(512);
					func_339(uParam0, 9, 10, 0);
					func_343(uParam0, 18);
				}
				else if (func_346(1024))
				{
					func_363(iLocal_262, iLocal_263, 1, -1f, 1, 1);
					func_347(1024);
					func_343(uParam0, 29);
				}
			}
			break;
		case 2:
			func_364();
			func_365(uParam0);
			if (iLocal_48 == 5)
			{
				func_343(uParam0, 3);
			}
			break;
		case 3:
			func_366(&uLocal_515, 0);
			func_364();
			func_365(uParam0);
			if ((iLocal_48 == 6 || func_367()) || func_368())
			{
				func_343(uParam0, 4);
			}
			break;
		case 4:
			func_366(&uLocal_515, 0);
			func_364();
			if (func_365(uParam0))
			{
				func_354(&uLocal_261);
				func_312(&iLocal_14, iLocal_274, 12);
				func_369(uLocal_244[4]);
				func_369(uLocal_244[5]);
				func_369(uLocal_244[6]);
				func_370(&iLocal_262, 0);
				func_371(&iLocal_264, 136, 0);
				func_372(iLocal_22[6], iLocal_22[7], iLocal_22[8], 1, 0);
				if (func_349())
				{
					func_373(&(uParam0->f_206), 4);
				}
				else
				{
					func_373(&(uParam0->f_206), 0);
				}
				func_343(uParam0, 5);
				return 5;
			}
			else if (func_367() || func_368())
			{
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0, 0, -1, 0);
				AUDIO::_0x36559148B78853B3(1, 0, 0);
				func_374();
				func_369(uLocal_244[4]);
				func_369(uLocal_244[5]);
				func_369(uLocal_244[6]);
				func_182(7);
				iLocal_401 = 0;
				func_375();
				func_371(&iLocal_262, 375, 0);
				func_376(&sLocal_636);
				func_377(&(iLocal_22[10]));
				func_370(&iLocal_262, 0);
				func_378(0);
				func_371(&iLocal_264, 136, 0);
				func_372(iLocal_22[6], iLocal_22[7], iLocal_22[8], 1, 0);
				if (func_349())
				{
					func_310();
					if (func_379(iLocal_262, 1, 1) < 15f)
					{
						func_380(&uLocal_278, "RH0_DAY_APRCH0b", iLocal_262, Global_35, 0, 0, 1, 1);
					}
				}
				else
				{
					func_313();
					if (func_379(iLocal_262, 1, 1) < 15f)
					{
						func_380(&uLocal_278, "RH0_DAY_APRCH0a", iLocal_262, Global_35, 0, 0, 1, 1);
					}
				}
				func_381(iLocal_262);
				func_312(&iLocal_14, iLocal_274, 12);
				func_343(uParam0, 5);
			}
			break;
		case 5:
			func_382(uParam0);
			if (func_383(iLocal_262) || !func_217(5))
			{
				func_384(uParam0);
				func_385();
				func_343(uParam0, 6);
			}
			break;
		case 6:
			func_382(uParam0);
			func_386(uParam0);
			if (func_220(1, 4096) && func_220(1, 16))
			{
				func_343(uParam0, 14);
			}
			else if (func_387())
			{
				func_343(uParam0, 12);
			}
			else if (func_388() || func_389())
			{
				func_359(128);
				func_343(uParam0, 10);
			}
			else if (func_390())
			{
				func_343(uParam0, 8);
			}
			else if (func_391())
			{
				func_343(uParam0, 7);
			}
			break;
		case 7:
			func_382(uParam0);
			func_386(uParam0);
			if (func_220(1, 4096) && func_220(1, 16))
			{
				func_343(uParam0, 14);
			}
			else if (func_387())
			{
				func_343(uParam0, 12);
			}
			else if (func_388() || func_389())
			{
				func_359(128);
				func_343(uParam0, 10);
			}
			else if (func_390())
			{
				func_343(uParam0, 8);
			}
			break;
		case 8:
			func_382(uParam0);
			func_386(uParam0);
			if (func_220(1, 4096) && func_220(1, 16))
			{
				func_343(uParam0, 14);
			}
			else if (func_387())
			{
				func_343(uParam0, 12);
			}
			else if (func_388() || func_389())
			{
				func_359(128);
				func_343(uParam0, 10);
			}
			else if (!func_392(Global_35, 0))
			{
				if (func_80(vLocal_664[22 /*3*/]))
				{
					if (func_393(vLocal_664[22 /*3*/], 2f))
					{
						func_343(uParam0, 9);
					}
				}
				else
				{
					func_277(vLocal_664[22 /*3*/]);
				}
			}
			else if (func_80(vLocal_664[22 /*3*/]))
			{
				func_248(vLocal_664[22 /*3*/]);
			}
			break;
		case 9:
			func_382(uParam0);
			func_386(uParam0);
			if (func_220(1, 4096) && func_220(1, 16))
			{
				func_343(uParam0, 14);
			}
			else if (func_387())
			{
				func_343(uParam0, 12);
			}
			else if (func_388() || func_389())
			{
				func_359(128);
				func_343(uParam0, 10);
			}
			break;
		case 10:
			func_382(uParam0);
			func_386(uParam0);
			func_394(uParam0);
			if (func_220(1, 4096) && func_220(1, 16))
			{
				func_343(uParam0, 14);
			}
			else if (func_395())
			{
				func_343(uParam0, 11);
			}
			break;
		case 11:
			func_382(uParam0);
			func_386(uParam0);
			if (func_220(1, 4096) && func_220(1, 16))
			{
				func_343(uParam0, 14);
			}
			else if (func_387())
			{
				func_343(uParam0, 12);
			}
			break;
		case 12:
			func_382(uParam0);
			func_386(uParam0);
			func_396();
			if (func_220(1, 4096) && func_220(1, 16))
			{
				func_343(uParam0, 14);
			}
			else if (func_397(Global_35, iLocal_14, 0))
			{
				func_343(uParam0, 14);
			}
			break;
		case 13:
			func_382(uParam0);
			func_386(uParam0);
			func_385();
			func_394(uParam0);
			PAD::DISABLE_CONTROL_ACTION(0, 1891137604, false);
			func_396();
			if (func_220(1, 4096) && func_220(1, 16))
			{
				func_343(uParam0, 14);
			}
			break;
		case 14:
			func_382(uParam0);
			PAD::DISABLE_CONTROL_ACTION(0, 1891137604, false);
			if (!func_220(1, 4096) || !func_220(1, 16))
			{
				return 7;
			}
			if (func_398(&iLocal_262, 0f, 0f, 0f, 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_14))
			{
				func_340(5, 4, 1);
				func_399(5);
				func_361(&uLocal_278, iLocal_262, "HOSEA", 1);
				if (!func_397(iLocal_262, iLocal_14, 1))
				{
					func_402(&iLocal_262, iLocal_14, func_401(func_400()), -1);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_262, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_262, 3, false);
				func_277(vLocal_664[16 /*3*/]);
				func_343(uParam0, 15);
			}
			break;
		case 15:
			func_403(iLocal_22[18], uLocal_255[0], 1);
			func_403(iLocal_22[14], uLocal_255[1], 1);
			func_403(iLocal_22[19], uLocal_255[2], 1);
			PAD::DISABLE_CONTROL_ACTION(0, 1891137604, false);
			if (!func_404(32768) || iLocal_62 > 11)
			{
				func_405(uParam0, 1);
			}
			if (func_406(uParam0))
			{
				func_394(uParam0);
				func_309(1, 1);
				func_343(uParam0, 16);
			}
			if (iLocal_62 < 9 && !func_407(1024))
			{
				func_396();
			}
			break;
		case 16:
			CLOCK::PAUSE_CLOCK(true, 0);
			func_408(&iLocal_262, &iLocal_14, 0);
			func_409(uParam0);
			func_410();
			PAD::DISABLE_CONTROL_ACTION(0, 1891137604, false);
			func_403(iLocal_22[18], uLocal_255[0], 1);
			func_403(iLocal_22[14], uLocal_255[1], 1);
			func_403(iLocal_22[19], uLocal_255[2], 1);
			func_405(uParam0, 0);
			if (iLocal_50 > 5)
			{
				func_343(uParam0, 17);
			}
			break;
		case 17:
			CLOCK::PAUSE_CLOCK(true, 0);
			func_408(&iLocal_262, &iLocal_14, 0);
			func_409(uParam0);
			func_410();
			func_411();
			func_412();
			if (func_405(uParam0, 0) && func_215(4096))
			{
				CLOCK::PAUSE_CLOCK(false, 0);
				func_216(8192);
				func_343(uParam0, 18);
				func_413(iLocal_262, 0);
				func_49();
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
				TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
				_NAMESPACE48::_0x187D65F3AEC5D679(1443812975, "EmeraldRanch/Emr_Son1");
				func_339(uParam0, 9, 10, 0);
				return 5;
			}
			break;
		case 18:
			func_414(uParam0);
			break;
		case 19:
			if (func_415())
			{
				if (func_393(vLocal_664[21 /*3*/], 10f))
				{
					func_343(uParam0, 29);
				}
			}
			break;
		case 29:
			func_394(uParam0);
			func_386(uParam0);
			func_216(8388608);
			Global_1415412->f_5 = 1;
			func_416(1);
			return 8;
	}
	return 7;
}

bool func_109(int iParam0)
{
	return func_417(iParam0) == 0;
}

int func_110(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

int func_111(int iParam0)
{
	if (!func_58(iParam0))
	{
		return 0;
	}
	return func_419(func_418(iParam0));
}

int func_112(int iParam0)
{
	if (!func_58(iParam0))
	{
		return -1;
	}
	return func_420(func_418(iParam0));
}

int func_113(int iParam0)
{
	if (!func_58(iParam0))
	{
		return -1;
	}
	return func_421(func_418(iParam0));
}

void func_114()
{
	struct<2> Var0;

	Var0.f_1 = -1;
	MISC::_COPY_MEMORY(Global_1879514, &Var0, 20);
}

void func_115(char* sParam0, int iParam1)
{
	StringCopy(&(Global_1879514->f_2), sParam0, 32);
	Global_1879514->f_8 = iParam1;
}

void func_116(int iParam0, int iParam1)
{
	if (!func_213(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		func_422(&(((*Global_1347702)[iParam0 /*49*/])->f_14));
		func_177(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
		func_423(iParam0);
		if ((!func_234(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43890) || iParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(((*Global_1347702)[iParam0 /*49*/])->f_40, 0);
			func_177(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
			func_369(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		else
		{
			func_179(iParam0, 16384);
			func_424(iParam0, 1, func_70(iParam0));
		}
	}
}

void func_117(var uParam0)
{
	func_425(1, &(uParam0->f_2605.f_482));
}

int func_118()
{
	return Global_1894899->f_2;
}

void func_119(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_426(iParam0))
	{
		return;
	}
	bVar0 = func_427(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_428(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_430(iParam0, func_429());
			func_431(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_432(iParam0, 67108864);
		func_430(iParam0, -15);
	}
	func_433(iParam0);
}

void func_120(var uParam0, int iParam1, int iParam2)
{
	if (func_434(0))
	{
		if (func_435(0))
		{
			func_436(0);
		}
	}
	if (func_434(1))
	{
		if (func_435(1))
		{
			func_436(1);
		}
	}
}

bool func_121(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_122(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_123(var uParam0)
{
	if (func_437())
	{
		Global_1357515 = 0;
	}
	else
	{
		Global_1357515 = -1;
	}
}

void func_124(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_111(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_112(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_213(iVar1))
			{
				if (func_121(iVar1, 4))
				{
					func_242(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_438(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_112(iParam0);
		if (iVar3 == 59)
		{
			func_438(1);
		}
		else if (iVar3 == 61)
		{
			func_438(0);
		}
		else if (iVar3 == 83)
		{
			func_438(0);
		}
	}
}

void func_125()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_213(iVar0))
		{
			if (func_121(iVar0, 4))
			{
				if (func_121(iVar0, 16))
				{
					func_439(iVar0, 1);
				}
				if (func_121(iVar0, 8))
				{
					func_440(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_126(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_127(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, int iParam11)
{
	char* sVar0;

	func_441(uParam0->f_174, sParam1, bParam5, fParam6, 0, 0, -1, -1, 0);
	if (iParam2 || !func_442(sParam1))
	{
		func_443(sParam1, iParam3, bParam4, bParam5, sParam7, sParam8, sParam9, sParam10, iParam11);
		sVar0 = UILOG::_UILOG_GET_CACHED_OBJECTIVE();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && MISC::ARE_STRINGS_EQUAL(sVar0, sParam1))
		{
			UILOG::_UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE();
		}
	}
}

var func_128()
{
	return Global_1572864->f_15;
}

void func_129(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	var uVar0;

	if (!func_213(iParam0))
	{
		return;
	}
	if (func_444())
	{
		func_284(iParam0, 1);
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
		if (!func_61(32768))
		{
			if (STATS::CHAL_IS_GOAL_ACTIVE(-816321659, -1044347982))
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(-1718529554, 1);
			}
		}
	}
	else if (iParam0 == 102)
	{
		if (!func_444())
		{
			((*Global_1347702)[iParam0 /*49*/])->f_35 = 104;
			((*Global_1347702)[104 /*49*/])->f_48 = ((*Global_1347702)[iParam0 /*49*/])->f_15;
		}
	}
	func_445(iParam0, 0, iParam3);
	if (func_213(((*Global_1347702)[iParam0 /*49*/])->f_35))
	{
		func_446(((*Global_1347702)[iParam0 /*49*/])->f_35);
		if (iParam1 == 1)
		{
			func_447(((*Global_1347702)[iParam0 /*49*/])->f_35, 0);
			if (func_448(iParam0))
			{
				((*Global_1347702)[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])->f_43 = ((*Global_1347702)[iParam0 /*49*/])->f_43;
			}
		}
	}
	else
	{
		func_449();
	}
	if (!func_32(((*Global_1347702)[iParam0 /*49*/])->f_12, 1) && !func_32(((*Global_1347702)[iParam0 /*49*/])->f_12, 33554432))
	{
		if (func_32(((*Global_1347702)[iParam0 /*49*/])->f_12, 262144))
		{
			if (bParam5)
			{
				func_450(iParam0);
			}
			bParam5 = false;
			uVar0 = func_451(((*Global_1347702)[iParam0 /*49*/])->f_15);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
			{
				MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&uVar0), 2);
			}
			func_180(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 262144);
		}
	}
	if (bParam2 == 1)
	{
		bParam2 = func_32(((*Global_1347702)[iParam0 /*49*/])->f_12, 4);
	}
	if (!func_61(32768))
	{
		func_452(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_453(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam6);
	}
	func_454(iParam0);
}

int func_130(int iParam0)
{
	if (!func_213(iParam0))
	{
		return 0;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_15;
}

int func_131(int iParam0)
{
	iParam0 = func_455(iParam0);
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

void func_132()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;

	func_138(4112);
	func_137(6);
	vVar2 = { func_456(((*Global_2621440)[0 /*12065*/])->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_457(vVar2, uVar1, uVar0, 0);
	func_458(vVar2);
	Global_40.f_9.f_15 = func_185(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_133(int iParam0)
{
	if (func_212() != -1)
	{
		return;
	}
	func_138(32);
	if (iParam0 == 0)
	{
		func_138(16);
	}
	else if (iParam0 == 1)
	{
		func_138(8);
	}
	func_459();
	Global_43888 = 1;
}

void func_134(int iParam0, bool bParam1)
{
	if (func_212() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_61(32768))
	{
		return;
	}
	if (!func_61(32768))
	{
		func_460(1, bParam1);
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
	if (func_61(32768))
	{
		((*Global_2621440)[iParam0 /*12065*/])->f_9.f_14 = func_429();
	}
}

void func_135(int iParam0)
{
	Global_1310720->f_9 = iParam0;
}

void func_136()
{
	struct<10> Var0;
	struct<16> Var10;

	Global_1310720->f_8 = 0;
	Global_1935630->f_4 = 1;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "respawn_persistence", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_461(Var10, 0);
}

void func_137(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = MISC::GET_GAME_TIMER();
}

void func_138(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_139(var uParam0)
{
}

void func_140(bool bParam0, bool bParam1)
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
		func_462(0);
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

int func_141(var uParam0)
{
	if (func_61(32768))
	{
		return 0;
	}
	if (func_32(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 134217728))
	{
		return 1;
	}
	return 0;
}

void func_142(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_463(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_464(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_464(&(Global_1347343->f_11), 16384);
	}
	if (func_465() >= 2)
	{
		if (!func_463(Global_1347343->f_11, 16384))
		{
			func_464(&(Global_1347343->f_11), 8);
		}
		func_159(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_291(Global_1935630, 2048);
	func_466(bParam5);
}

bool func_143(var uParam0)
{
	return uParam0->f_781;
}

void func_144(var uParam0)
{
	func_467(1, &(uParam0->f_2605.f_482));
}

void func_145(int iParam0)
{
	int iVar0;

	if (!func_58(iParam0))
	{
		return;
	}
	if (iParam0 != func_57(0))
	{
		return;
	}
	if (func_110(iParam0) == 0)
	{
	}
	iVar0 = func_111(iParam0);
	if (func_468(iParam0) == 3)
	{
		if (func_110(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_110(iParam0)))
		{
			if (func_111(iParam0) != 1 && func_111(iParam0) != 8)
			{
				func_469(func_111(iParam0), func_110(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_470(iParam0);
	func_210(1);
	func_471(0);
	func_472(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_473(1);
			func_474(15, 0, 1);
			break;
		case 4:
			func_474(10, 0, 1);
			break;
		case 8:
			func_474(10, 0, 1);
			break;
		case 9:
			func_474(10, 0, 1);
			break;
		case 2:
			func_474(10, 0, 1);
			break;
		case 6:
			func_474(10, 0, 1);
			break;
		case 5:
			func_474(10, 0, 1);
			break;
	}
	func_475(1);
}

void func_146(int iParam0, bool bParam1, float fParam2)
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
		fParam2 = BUILTIN::VDIST2(Global_36, func_476(iParam0));
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
			func_177(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 512);
		}
	}
	else if (fParam2 <= 100f)
	{
		if (func_477())
		{
			return;
		}
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "RCM_INVALID_TOD", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_478(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 1024 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_ANTAGONIZE", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_478(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 4096 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_MEMORY", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_478(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 2048 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_WANTED_REGION", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_478(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 16384 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_478(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 8192 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_COMBAT", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_478(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 32768 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED_2", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_478(sVar1, 10000, 0, 0, 0, 1);
		}
		func_48(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 512);
	}
}

int func_147(int iParam0, bool bParam1, int iParam2)
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
		if (func_479())
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
		iVar0 = func_112(&(Global_1898164->f_1[0 /*5*/]));
		if (func_213(iVar0) && func_32(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_58(&(Global_1898164->f_1[0 /*5*/])))
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

int func_148(var uParam0)
{
	return 1;
}

int func_149()
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

float func_150(var uParam0)
{
	return 1000f;
}

int func_151(var uParam0)
{
	if (func_480(uParam0->f_174))
	{
		return 1;
	}
	if (func_72(uParam0) == 11)
	{
		func_216(2);
		return func_481();
	}
	return 1;
}

int func_152()
{
	return Global_1572864->f_8;
}

int func_153(int iParam0)
{
	if (func_111(iParam0) == 8)
	{
		return func_112(iParam0);
	}
	return -1;
}

void func_154(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_155(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_156(bool bParam0)
{
	Global_1572864->f_14 = bParam0;
	if (bParam0)
	{
		func_158(1);
	}
}

void func_157(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_158(0);
	}
}

void func_158(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_159(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_160(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_7(uParam0->f_172, 8))
	{
		func_482();
	}
	if (func_215(2097152))
	{
		func_483(1, 2, 0);
		func_196(1, 256);
	}
	else if (func_175((Global_1392240->f_1[1 /*18*/])->f_13))
	{
		func_484(1);
	}
	if (func_72(uParam0) == 1)
	{
		func_216(32768);
	}
	func_485(iLocal_262, 0);
	func_413(iLocal_262, 0);
	func_486(5);
	func_487(5, 0);
	func_488(&uLocal_244);
	if (func_215(8192))
	{
		func_489(&iLocal_14, 0);
	}
	else if (func_215(32768))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_14))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_14);
		}
	}
	else
	{
		func_490(&iLocal_14);
	}
	func_491(&iLocal_262);
	func_492(&uLocal_543, 0, 0, 1, 0);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_277))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_277);
	}
	if (!func_215(1))
	{
		func_332(-1304772442, 0, 1);
		func_332(-1924401463, 0, 1);
		func_332(-308659358, 0, 1);
		func_332(-66987983, 0, 1);
	}
	func_493(-308659358);
	func_493(-66987983);
	func_493(-1304772442);
	func_493(-1924401463);
	func_493(883522755);
	func_493(1038094132);
	func_494(&iLocal_264);
	func_494(&iLocal_263);
	func_495(&iLocal_264, 1);
	func_496(&iLocal_262, 0, 1065353216);
	func_371(&iLocal_262, 375, 0);
	func_363(iLocal_262, iLocal_263, 1, 1f, 1, 0);
	func_497(&iLocal_265);
	if (func_215(8388608) || func_215(2097152))
	{
		func_345(18, 1);
		iVar1 = 6;
		iVar0 = func_429();
		func_498(&iVar0, 0, 0, iVar1, 0, 0, 0, 0);
		func_499(4, 18, iVar0);
	}
	func_500();
	func_501();
	func_502();
	func_503(2);
	func_49();
	if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_508))
	{
		TASK::DELETE_SCENARIO_POINT(iLocal_508);
	}
	if (func_72(uParam0) == 0)
	{
		iVar2 = 18;
		func_504(iVar2, -15);
		if (func_505())
		{
			func_506(1, 2);
		}
	}
	func_372(iLocal_22[6], iLocal_22[7], iLocal_22[8], 0, 0);
	func_403(iLocal_22[18], uLocal_255[0], 0);
	func_403(iLocal_22[14], uLocal_255[1], 0);
	func_403(iLocal_22[19], uLocal_255[2], 0);
	func_507(iLocal_22[13], iLocal_22[14], iLocal_22[15], &uLocal_273, 0);
	func_508();
	func_509(869, 32);
	func_510(869);
	func_509(740, 32);
	func_509(737, 32);
	func_510(737);
	func_511(1, 8);
	func_512(1, 0, 0);
	func_513(0, 0, 1103626240);
}

void func_161(int iParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0, 0))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
		}
	}
}

void func_162(var uParam0)
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
	func_248(&(uParam0->f_2588));
}

void func_163(var uParam0)
{
	struct<2> Var0;

	Var0 = { func_514(uParam0->f_174) };
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&Var0))
	{
		HUD::_TEXT_BLOCK_DELETE(&Var0);
	}
	Var0 = { func_515(uParam0->f_174) };
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&Var0))
	{
		HUD::_TEXT_BLOCK_DELETE(&Var0);
	}
}

int func_164(var uParam0)
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

void func_165(int iParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_22))
	{
		ITEMSET::DESTROY_ITEMSET(((*Global_1347702)[iParam0 /*49*/])->f_22);
		((*Global_1347702)[iParam0 /*49*/])->f_23 = 0;
	}
}

void func_166(int iParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_21))
	{
		ITEMSET::DESTROY_ITEMSET(((*Global_1347702)[iParam0 /*49*/])->f_21);
	}
}

void func_167(int iParam0)
{
	switch (func_212())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

bool func_168(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_169(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	if (!func_516(iParam0))
	{
		return;
	}
	if (!func_217(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = func_517(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_KEEP_TASK(iVar0, false);
		}
	}
	func_518(iParam0, 0, 0, bParam1, fParam2, bParam3, bParam4, bParam5, bParam6, 0, 0);
	func_487(iParam0, 0);
	func_486(iParam0);
}

void func_170(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_171(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_2603))
	{
		POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_2603);
		VOLUME::DELETE_VOLUME(uParam0->f_2603);
	}
}

void func_172(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_2604))
	{
		POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_2604);
		VOLUME::DELETE_VOLUME(uParam0->f_2604);
	}
}

void func_173(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_41))
	{
		func_519(((*Global_1347702)[iParam0 /*49*/])->f_41);
		if (iParam0 == 91 || iParam0 == 129)
		{
			PATHFIND::RESET_ROADS_IN_VOLUME(((*Global_1347702)[iParam0 /*49*/])->f_41, 0);
		}
		VOLUME::DELETE_VOLUME(((*Global_1347702)[iParam0 /*49*/])->f_41);
	}
}

void func_174(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_520(iParam0, &iVar1, &iVar0))
	{
		if (func_521(iVar1, iVar0, 1))
		{
			func_522(iVar1, iVar0);
		}
	}
}

bool func_175(int iParam0)
{
	int iVar0;

	iVar0 = func_417(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_176(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_58(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_175(iParam0) && !func_288(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_110(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_175(iParam0))
	{
		iParam2 = -1;
	}
	if (func_468(iParam0) == 3 || (func_468(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_110(iParam0))))
	{
		func_469(func_111(iParam0), func_110(iParam0), iParam2);
		if ((!func_58(Global_1572864->f_8) && !func_147(0, 1, 0)) && !func_91(&Global_1935630, 32768))
		{
			iVar0 = func_523(iParam0);
			if (iVar0 != -1)
			{
				func_524(0);
			}
			else if (func_111(iParam0) == 8)
			{
				iVar0 = func_525();
				if (iVar0 != -1)
				{
					func_524(0);
				}
			}
		}
	}
	func_472(iParam0, 0);
	if (func_57(0) == iParam0)
	{
		func_210(1);
		func_471(0);
		func_475(1);
	}
	func_526(iParam0, 1);
	func_470(iParam0);
}

void func_177(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_178(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_35;
	if (iVar0 == -1)
	{
		return;
	}
	if (iParam1 == 1)
	{
		func_48(&(((*Global_1347702)[iVar0 /*49*/])->f_13), 8);
	}
	else
	{
		func_177(&(((*Global_1347702)[iVar0 /*49*/])->f_13), 8);
	}
}

void func_179(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_213(iParam0))
	{
		return;
	}
	func_527(&(((*Global_1347702)[iParam0 /*49*/])->f_14), iParam1);
	func_527(&(((*Global_1347702)[iParam0 /*49*/])->f_14), 2);
	func_228(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 16384);
	func_177(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_213(&(Global_40.f_450[iVar0])))
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

void func_180(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_181(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 25)
	{
		func_528(uParam0->f_41[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_529(uParam0->f_117[iVar0 /*5*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_530((*uParam0)[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_531(uParam0->f_28[iVar0 /*3*/]);
		iVar0++;
	}
	func_163(uParam0);
}

void func_182(int iParam0)
{
	iParam0 = func_455(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_532(iParam0, 32);
	func_533();
}

void func_183(bool bParam0)
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

bool func_184(var uParam0, int iParam1)
{
	return (uParam0->f_1560 && iParam1) != 0;
}

int func_185(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = func_118();
	if (func_426(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_534(vParam0, bParam3);
}

void func_186(int iParam0)
{
	int iVar0;

	if (iParam0 > 150)
	{
		iParam0 = 150;
	}
	if (iParam0 > (Global_1934765->f_286 - 150))
	{
	}
	if (func_535(&iVar0))
	{
		if ((Global_1934765->f_275[iVar0 /*2*/])->f_1 != iParam0)
		{
			Global_1934765->f_286 = (Global_1934765->f_286 + (Global_1934765->f_275[iVar0 /*2*/])->f_1);
			(Global_1934765->f_275[iVar0 /*2*/])->f_1 = iParam0;
			Global_1934765->f_286 = (Global_1934765->f_286 - iParam0);
			STREAMING::_0x2F9AC754FE179D58(func_536());
		}
		return;
	}
	iVar0 = func_537();
	if (iVar0 == -1)
	{
		return;
	}
	(Global_1934765->f_275[iVar0 /*2*/])->f_1 = iParam0;
	Global_1934765->f_275[iVar0 /*2*/] = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1934765->f_286 = (Global_1934765->f_286 - iParam0);
	STREAMING::_0x2F9AC754FE179D58(func_536());
}

void func_187(var uParam0, int iParam1)
{
	uParam0->f_748 = iParam1;
}

void func_188(var uParam0, float fParam1)
{
	uParam0->f_741 = fParam1;
}

void func_189(var uParam0, float fParam1)
{
	uParam0->f_742 = fParam1;
}

void func_190(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	func_538(iParam0, iParam1, bParam2, fParam3);
}

Vector3 func_191(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 1f, 1f;
		case 1:
			return 1412.735f, 260.764f, 92.926f;
		case 2:
			return 1395.942f, 262.466f, 88.45f;
		case 3:
			return 1417.614f, 269.601f, 89.461f;
		case 4:
			return 1409.805f, 274.065f, 91f;
		case 5:
			return 1411.138f, 268.828f, 90.5f;
		case 6:
			return 875.4528f, 825.1133f, 115.622f;
		case 7:
			return 872.5161f, 805.3047f, 114.6297f;
		case 8:
			return 859.2996f, 826.3416f, 115.4958f;
		case 9:
			return 776.575f, 848.384f, 120.971f;
		case 10:
			return 834.6887f, 829.6642f, 114.6014f;
		case 11:
			return 841.342f, 786.0715f, 113.8146f;
		case 12:
			return 1408.009f, 267.8312f, 94.54225f;
		case 13:
			return 1290.523f, 292.8436f, 86.33051f;
		case 14:
			return 1242.357f, 255.9864f, 88.80604f;
		case 15:
			return 1257.497f, 267.1242f, 93.78019f;
		case 16:
			return 1407.152f, 267.4984f, 88.81922f;
		case 17:
			return 1411.893f, 256.913f, 90.5f;
		case 18:
			return 1257.075f, 243.7178f, 88.19684f;
		case 19:
			return 1436.209f, 388.2957f, 88.91453f;
		case 20:
			return 1392.652f, 225.1255f, 92.926f;
		case 21:
			return 1409.805f, 274.065f, 91f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_192(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 0f;
		case 1:
			return 0f, 0f, 15.75f;
		case 2:
			return 0f, 0f, 13.25f;
		case 3:
			return 0f, 0f, 17f;
		case 4:
			return 0f, 0f, 16f;
		case 5:
			return 0f, 0f, 16f;
		case 6:
			return 0f, 0f, 0f;
		case 7:
			return 0f, 0f, 0f;
		case 8:
			return 0f, 0f, 0f;
		case 9:
			return 0f, 0f, 107f;
		case 10:
			return 0f, 0f, -27f;
		case 11:
			return 0f, 0f, 0f;
		case 12:
			return 0f, 0f, 15.75f;
		case 13:
			return 0f, 0f, 0f;
		case 14:
			return 0f, 0f, 0f;
		case 15:
			return 0f, 0f, 12f;
		case 16:
			return 0f, 0f, 15.75f;
		case 17:
			return 0f, 0f, 16f;
		case 18:
			return 0f, 0f, 0f;
		case 19:
			return 0f, 0f, 0f;
		case 20:
			return 0f, 0f, 15.75f;
		case 21:
			return 0f, 0f, 16f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_193(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2.5f, 2.5f, 2.5f;
		case 1:
			return 90f, 60f, 10f;
		case 2:
			return 5.5f, 3f, 2f;
		case 3:
			return 1.5f, 1.5f, 2f;
		case 4:
			return 9f, 11f, 5f;
		case 5:
			return 25f, 23f, 5f;
		case 6:
			return 5f, 5f, 5f;
		case 7:
			return 5f, 5f, 5f;
		case 8:
			return 5f, 5f, 5f;
		case 9:
			return 11f, 5.5f, 6f;
		case 10:
			return 1.6f, 2f, 1.6f;
		case 11:
			return 35f, 35f, 10f;
		case 12:
			return 15f, 15f, 5f;
		case 13:
			return 5f, 5f, 5f;
		case 14:
			return 5f, 5f, 5f;
		case 15:
			return 175f, 60f, 20f;
		case 16:
			return 1.5f, 1.5f, 1.5f;
		case 17:
			return 25f, 23f, 5f;
		case 18:
			return 5f, 5f, 5f;
		case 19:
			return 5f, 5f, 5f;
		case 20:
			return 150f, 100f, 10f;
		case 21:
			return 9f, 11f, 5f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_194(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		if (bParam11)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
			{
				func_539(uParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				func_540(uParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
		{
			func_541(uParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			func_542(uParam0, vParam2, vParam5, vParam8, sParam15);
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(*uParam0, iParam12, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(*uParam0, iParam12, 0, 0, -1, -1, iParam14);
		if (bParam13)
		{
			*uParam1 = PED::_0x4C39C95AE5DB1329(*uParam0, 0, 15);
		}
	}
}

void func_195(int iParam0, bool bParam1)
{
	if (func_212() != -1)
	{
		return;
	}
	if (!bParam1)
	{
		func_543(iParam0);
	}
	func_544(iParam0);
	Global_1392240->f_146 = 0;
	func_196(iParam0, 512);
}

void func_196(int iParam0, int iParam1)
{
	if (func_220(iParam0, iParam1))
	{
		return;
	}
	(Global_1392240->f_1[iParam0 /*18*/])->f_14 = ((Global_1392240->f_1[iParam0 /*18*/])->f_14 || iParam1);
}

void func_197(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_545(&(uParam0->f_206), 16))
	{
		return;
	}
	if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
	{
		func_546(&(uParam0->f_206), *uParam1, iParam2, iParam3, iParam4, iParam5);
	}
}

void func_198(int iParam0)
{
	Global_1415412 = (Global_1415412 || iParam0);
}

void func_199(var uParam0)
{
	func_547(uParam0);
	func_548(uParam0, 1);
	func_549(uParam0, 1);
	func_550(uParam0, 1);
	func_551(uParam0, 1);
	func_552(uParam0, 1);
	func_553(uParam0, 1);
	func_554(uParam0, 1);
	func_555(uParam0, 0);
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
		if (!func_556((*uParam0)[iVar0 /*3*/]))
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

	Var0 = { func_514(uParam0->f_174) };
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
			uParam0->f_2573 = { func_515(uParam0->f_174) };
		}
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_2573)))
	{
		HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_2573));
	}
}

char* func_203()
{
	return "rcm_hmrb0_emr_to_crd";
}

char* func_204()
{
	return "rcm_hmrb0_crd_to_emr";
}

int func_205(var uParam0)
{
	return uParam0->f_168;
}

void func_206(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (func_557((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1))
		{
			func_558((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_41[iVar0 /*3*/])->f_2 == 0 || !func_557((uParam0->f_41[iVar0 /*3*/])->f_2, iParam2))
			{
				func_528(uParam0->f_41[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_557((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1))
		{
			func_558((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1);
			if ((uParam0->f_117[iVar0 /*5*/])->f_4 == 0 || !func_557((uParam0->f_117[iVar0 /*5*/])->f_4, iParam2))
			{
				func_529(uParam0->f_117[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_557(((*uParam0)[iVar0 /*3*/])->f_2, iParam1))
		{
			func_558(((*uParam0)[iVar0 /*3*/])->f_2, iParam1);
			if (((*uParam0)[iVar0 /*3*/])->f_2 == 0 || !func_557(((*uParam0)[iVar0 /*3*/])->f_2, iParam2))
			{
				func_530((*uParam0)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_557((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1))
		{
			func_558((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_28[iVar0 /*3*/])->f_2 == 0 || !func_557((uParam0->f_28[iVar0 /*3*/])->f_2, iParam2))
			{
				func_531(uParam0->f_28[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

int func_207(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_44 != -1)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_44 != 0)
		{
			if (!func_559(((*Global_1347702)[iParam0 /*49*/])->f_44))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_208(var uParam0)
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
						*uParam0 = func_560(vVar0.z);
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

void func_209(bool bParam0)
{
	if (!bParam0)
	{
		LAW::_0x61B98367D93F012F(PLAYER::GET_PLAYER_INDEX());
	}
	LAW::_ENABLE_DISPATCH_LAW(bParam0);
	LAW::_ENABLE_DISPATCH_LAW_2(bParam0);
}

void func_210(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_126(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_291(Global_1935630, 4194304);
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

int func_211(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if (func_556(uParam0->f_41[iVar1 /*3*/]))
		{
			if (func_557((uParam0->f_41[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_561(uParam0->f_41[iVar1 /*3*/]))
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
		if (func_562(uParam0->f_117[iVar1 /*5*/]))
		{
			if (func_557((uParam0->f_117[iVar1 /*5*/])->f_4, iParam1))
			{
				if (!func_563(uParam0->f_117[iVar1 /*5*/]))
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
		if (func_564((*uParam0)[iVar1 /*3*/]))
		{
			if (func_557(((*uParam0)[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_565((*uParam0)[iVar1 /*3*/]))
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
		if (func_566(uParam0->f_28[iVar1 /*3*/]))
		{
			if (func_557((uParam0->f_28[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_567(uParam0->f_28[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (iParam1 != 0 && iParam1 != 4)
	{
		if (!func_568(uParam0->f_174))
		{
			iVar0 = 0;
		}
		if (!func_569(uParam0))
		{
			iVar0 = 0;
		}
	}
	if (!func_570(uParam0, iParam1))
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

int func_212()
{
	return Global_1572887->f_12;
}

bool func_213(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_214(vector3 vParam0, var uParam3)
{
	int iVar0;

	if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) != 1)
	{
		func_134(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_571(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_572(0, 0);
		if (func_573(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_574(1, 0);
		}
	}
	else
	{
		func_574(1, 0);
	}
	func_155(0);
	func_575(0, vParam0, uParam3);
	return 1;
}

bool func_215(int iParam0)
{
	return (iLocal_15 && iParam0) != 0;
}

void func_216(int iParam0)
{
	if (func_215(iParam0))
	{
		return;
	}
	iLocal_15 = (iLocal_15 || iParam0);
}

bool func_217(int iParam0)
{
	if (!func_516(iParam0))
	{
		return false;
	}
	if (!func_576(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_218(var uParam0)
{
	return uParam0->f_169;
}

int func_219(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			return ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1);
		}
	}
	return 0;
}

bool func_220(int iParam0, int iParam1)
{
	return ((Global_1392240->f_1[iParam0 /*18*/])->f_14 && iParam1) != 0;
}

int func_221(var uParam0, var uParam1, var uParam2)
{
	if (!func_215(4096) || !ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (func_577(*uParam0, 0, uParam1, uParam2, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_222(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_578(bParam1, iParam2, bParam3);
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

bool func_223()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43799) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43799, 0));
}

int func_224(var uParam0)
{
	int iVar0;

	if (func_579(uParam0, 2f) || !func_80(uParam0))
	{
		iVar0 = ITEMSET::CREATE_ITEMSET(true);
		PED::_0x7BE607DAFF382FD2(Global_35, iVar0, 0);
		if (ITEMSET::GET_ITEMSET_SIZE(iVar0) > 0)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			func_277(uParam0);
			return 1;
		}
		ITEMSET::DESTROY_ITEMSET(iVar0);
		func_277(uParam0);
	}
	return 0;
}

int func_225(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_580(((*Global_1347702)[iParam0 /*49*/])->f_15) != 0)
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

int func_226(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_581(0);
	if (iVar0 == 11)
	{
		iVar1 = func_582(func_113(iParam1), 1);
		if (iVar1 != -589165916)
		{
			if ((iVar1 == -103573613 || iVar1 == 194099983) || iVar1 == 2038046186)
			{
				iVar2 = func_583(Global_40.f_4283);
				if (func_426(iVar2) && iVar2 == ((*Global_1347702)[uParam0->f_174 /*49*/])->f_27)
				{
					return 1;
				}
			}
		}
	}
	else if (iVar0 == 4)
	{
		iVar3 = func_584(iParam1);
		if (iVar3 != -1)
		{
			if ((iVar3 == 1 || iVar3 == 3) || iVar3 == 2)
			{
				if (func_426(Global_1894899->f_2) && Global_1894899->f_2 == func_583(Global_40.f_4283))
				{
					return 1;
				}
			}
		}
	}
	if (func_585(uParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_227(int iParam0)
{
	int iVar0;
	int iVar1;

	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 8 != 0)
	{
		return 1;
	}
	if (func_586(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		if (!func_586(((*Global_1835011)[44 /*74*/])->f_1, 1))
		{
			if (iParam0 != 82 && iParam0 != 83)
			{
				return 1;
			}
		}
		if (func_586(((*Global_1835011)[67 /*74*/])->f_1, 1))
		{
			if ((!func_586(((*Global_1347702)[8 /*49*/])->f_15, 1) && !func_586(((*Global_1835011)[69 /*74*/])->f_1, 1)) && iParam0 != 8)
			{
				if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1835011)[67 /*74*/])->f_22)) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(((*Global_1835011)[67 /*74*/])->f_22))) > 0)
				{
					return 1;
				}
			}
		}
	}
	else if ((!func_587(2) && !func_586(((*Global_1347702)[61 /*49*/])->f_15, 1)) && func_586(((*Global_1347702)[59 /*49*/])->f_15, 1))
	{
		if (iParam0 != 60 && iParam0 != 61)
		{
			return 1;
		}
	}
	if (iParam0 == 15)
	{
		iVar1 = func_590(func_588(65536), 0, 3, func_589(65536));
		if (func_58(iVar1))
		{
			iVar0 = func_580(iVar1);
			if (!func_591(iVar0, 4))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 26 || iParam0 == 27)
	{
		if (((((!func_586(((*Global_1835011)[14 /*74*/])->f_1, 1) && func_586(((*Global_1347702)[62 /*49*/])->f_15, 1)) && func_586(((*Global_1347702)[0 /*49*/])->f_15, 1)) && func_586(((*Global_1347702)[94 /*49*/])->f_15, 1)) && func_586(((*Global_1835011)[25 /*74*/])->f_1, 1)) && (func_586(((*Global_1835011)[8 /*74*/])->f_1, 1) || (func_586(((*Global_1347702)[98 /*49*/])->f_15, 1) && func_580(((*Global_1347702)[98 /*49*/])->f_15) == 0)))
		{
			return 1;
		}
	}
	else if (iParam0 == 27)
	{
		if (!func_586(((*Global_1835011)[34 /*74*/])->f_1, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 42)
	{
		if (!func_586(((*Global_1347702)[41 /*49*/])->f_15, 1))
		{
			if (!func_592(8))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 51)
	{
		if (!func_593(2))
		{
			return 1;
		}
	}
	else if (iParam0 == 52)
	{
		if (!func_586(((*Global_1347702)[51 /*49*/])->f_15, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 57)
	{
		if (func_288(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 69 || iParam0 == 70)
	{
		if (func_594(((*Global_1347702)[iParam0 /*49*/])->f_15) == 0)
		{
			if (func_595() <= 160)
			{
				return 1;
			}
			else
			{
				func_358(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
			}
		}
		if (!func_480(68))
		{
			return 1;
		}
	}
	else if (iParam0 == 77)
	{
		if (func_288(((*Global_1835011)[47 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_288(((*Global_1835011)[45 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_596(16, 0))
		{
			return 1;
		}
	}
	else if (iParam0 == 87)
	{
		if (func_288(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 95)
	{
		if (func_288(((*Global_1835011)[20 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_288(((*Global_1835011)[21 /*74*/])->f_1))
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
		else if (!SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[113 /*49*/])->f_42, false) && func_597())
		{
			if (func_443("MUDTOWN32_altobj", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
			{
				func_180(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 262144);
				func_228(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 64);
				func_129(113, 1, 0, 1, 1, 1, 0);
				return 1;
			}
		}
	}
	else if (iParam0 == 99)
	{
		if (func_598(-404697685, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 117)
	{
		if (func_288(((*Global_1835011)[69 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 136)
	{
		if (func_288(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_228(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_229(int iParam0)
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

int func_230(int iParam0)
{
	if (!func_426(iParam0))
	{
		return 0;
	}
	return func_427(iParam0, 33554432);
}

int func_231(int iParam0)
{
	if (!func_426(iParam0))
	{
		return 0;
	}
	return func_427(iParam0, 67108864);
}

var func_232()
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

bool func_233(int iParam0, int iParam1)
{
	return func_599(iParam0, iParam1);
}

int func_234(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (func_222(iParam0, bParam1, iParam2, iParam3))
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

int func_235(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
			else if (func_600(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0]), 16, 1))
			{
				if (iParam1 == 0)
				{
					return 0;
				}
				else if (!func_217(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])))
				{
					return 0;
				}
			}
			if (iParam4 && func_91(&Global_1935630, 4096))
			{
			}
			else if (func_601(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0]), 44, 0) && iParam2 == 1)
			{
			}
			else if (!func_602(func_517(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])), -1f, 10f, 1, 1, 40f))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_236(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43))
	{
		if (!func_603(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43), &(uParam0->f_178), &iVar0, 1, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_237(int iParam0, float fParam1)
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

int func_238(var uParam0)
{
	return 0;
}

int func_239(float fParam0)
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

void func_240()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_516(iVar0) && func_217(iVar0))
		{
			func_604(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_81(&(Global_1359489->f_40), 1);
}

void func_241(var uParam0)
{
	if (func_7(uParam0->f_172, 8))
	{
		func_482();
	}
}

void func_242(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_282(iParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_283(iParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(iVar0, func_283(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_283(iParam0)))
			{
				UILOG::_UILOG_REMOVE_ENTRY(2, func_283(iParam0));
			}
		}
	}
	func_122(iParam0, 4);
	func_122(iParam0, 8);
	func_122(iParam0, 16);
}

void func_243(int iParam0)
{
	Global_36579 = iParam0;
}

void func_244(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_245(int iParam0)
{
	func_48(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			func_251(iParam0, func_70(iParam0), 1, 0);
		}
		else
		{
			func_605(iParam0);
		}
	}
	else
	{
		func_116(iParam0, 0);
	}
}

void func_246(var uParam0)
{
	if (func_606(uParam0->f_174))
	{
		func_607(262144, 5, 0, 1);
		func_608(720f, 1, 0);
	}
}

void func_247(int iParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_fishingrod"), 0, 0))
	{
		return;
	}
	Global_1900073->f_18 = iParam0;
}

void func_248(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_249(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_72(uParam0);
	if (uParam0->f_750 == -1)
	{
		if (iVar0 == 1 || iVar0 == 0)
		{
			uParam0->f_750 = uParam0->f_749;
		}
		else if (!func_32(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
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

float func_250(int iParam0)
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

void func_251(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;

	if (!func_213(iParam0))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 256 != 0 && func_147(0, 0, 1))
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
	if (func_61(32768))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	((*Global_1347702)[iParam0 /*49*/])->f_38 = func_609(iParam0);
	if (!bParam5 && func_610(iParam0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::BLIP_ADD_FOR_RADIUS(((*Global_1347702)[iParam0 /*49*/])->f_38, func_476(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_18);
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
		func_611(8);
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
	func_605(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(((*Global_1347702)[iParam0 /*49*/])->f_37, 64, iParam0);
	if (func_212() == -1)
	{
		func_612(iParam0);
		iVar0 = func_583(Global_40.f_4283);
		if (func_426(iVar0) && func_613(((*Global_1888801)[iVar0 /*35*/])->f_13))
		{
			iVar1 = 1;
			bVar2 = func_614(iVar0);
		}
		if (func_615(iParam0, iVar1, iVar0))
		{
			func_616(((*Global_1347702)[iParam0 /*49*/])->f_15, bVar2, iVar1, iVar0);
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
		func_48(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		if (((!func_610(iParam0) || func_32(((*Global_1347702)[iParam0 /*49*/])->f_12, 1)) || func_32(((*Global_1347702)[iParam0 /*49*/])->f_12, 512)) || func_47(((*Global_1347702)[iParam0 /*49*/])->f_13, 2048))
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
			func_48(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_617(iParam0))
		{
			if (iParam0 == 97)
			{
				func_325(185, 0);
			}
			else
			{
				func_325(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = ((*Global_1347702)[iParam0 /*49*/])->f_37;
			((*Global_1347702)[iParam0 /*49*/])->f_40 = func_478(MISC::_CREATE_VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_284(iParam0, 2);
	}
}

void func_252(int iParam0, float fParam1)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32768 != 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_36 != -1822497728)
	{
		func_48(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 2 == 0)
	{
		func_48(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	if (fParam1 < (((*Global_1347702)[iParam0 /*49*/])->f_18 * ((*Global_1347702)[iParam0 /*49*/])->f_18))
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1347702)[iParam0 /*49*/])->f_37, -211388321);
		func_48(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
	}
}

void func_253(int iParam0, vector3 vParam1, float fParam4)
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
		func_180(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 1048576);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	if (func_618(iParam0, fParam4))
	{
		func_48(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2048);
		func_177(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		func_116(iParam0, 0);
		func_251(iParam0, vParam1, 1, 0);
	}
}

void func_254(int iParam0)
{
	if (func_619(179))
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
	else if (func_610(iParam0))
	{
		return;
	}
	if (((MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37) && MAP::IS_BLIP_ON_MINIMAP(((*Global_1347702)[iParam0 /*49*/])->f_37)) && BUILTIN::VDIST2(func_70(iParam0), Global_36) < 10000f) && func_620())
	{
		func_621(179, ((*Global_1347702)[iParam0 /*49*/])->f_37, 0);
	}
}

void func_255(int iParam0)
{
	if (func_619(180))
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_36 != -1822497728)
	{
		return;
	}
	else if (!func_610(iParam0))
	{
		return;
	}
	if ((MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37) && MAP::IS_BLIP_ON_MINIMAP(((*Global_1347702)[iParam0 /*49*/])->f_37)) && func_620())
	{
		func_621(180, ((*Global_1347702)[iParam0 /*49*/])->f_37, 0);
	}
}

void func_256(var uParam0)
{
	if (func_7(uParam0->f_172, 16))
	{
		func_103(uParam0, 0);
		func_88(uParam0);
	}
}

int func_257(var uParam0)
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
		Var0 = { func_622(uParam0->f_174) };
		uParam0->f_751 = ANIMSCENE::_CREATE_ANIM_SCENE(&Var0, 0, 0, false, true);
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_751))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_751);
		}
	}
	return 0;
}

struct<8> func_258()
{
	char cVar0[64];

	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

struct<8> func_259(var uParam0)
{
	return uParam0->f_350;
}

void func_260(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_623(uParam0) };
	func_624(uParam0, &Var0);
}

void func_261(var uParam0, char* sParam1)
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
	func_624(uParam0, sParam1);
	func_625(uParam0, 2097152, 1);
	func_626(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_348, sParam1, true);
}

int func_262(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_263(var uParam0)
{
	if (uParam0->f_177 == 6)
	{
		return 1;
	}
	else if (uParam0->f_177 == 2)
	{
		return 1;
	}
	else if (func_627(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_264(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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
			return (func_545(uParam0, 256) && !func_545(uParam0, 4194304));
		}
		uParam0->f_415 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	func_628(uParam0, sParam1);
	if (!func_545(uParam0, 64))
	{
		if (!func_262(func_629(uParam0)))
		{
			func_626(uParam0, 64);
		}
		else
		{
			vVar0 = { func_630(uParam0) };
			if (!func_262(vVar0))
			{
				func_631(uParam0, vVar0);
			}
		}
		return 0;
	}
	fVar3 = func_632(Global_35, func_629(uParam0), 1);
	if (func_545(uParam0, 128) || func_545(uParam0, 256))
	{
		if ((fVar3 >= func_633(uParam0) && !bParam2) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
		{
			if (uParam0->f_433)
			{
				func_634();
				uParam0->f_433 = 0;
			}
			func_635(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
			}
			func_327(uParam0);
			func_625(uParam0, 128, 1);
			func_625(uParam0, 256, 1);
			func_625(uParam0, 4096, 1);
			func_625(uParam0, 32768, 1);
			func_625(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_636(uParam0) || bParam2)
	{
		if (!func_545(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
			{
				if (func_636(uParam0) >= func_633(uParam0))
				{
				}
				Var4 = { func_259(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_637(uParam0);
				}
				Var4 = { func_259(uParam0) };
				iVar12 = 256;
				if (!func_545(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_348 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_344), iVar12, &Var4, false, true);
				func_638(uParam0, 0, 0, 0, 0);
				func_626(uParam0, 128);
			}
		}
	}
	if (func_545(uParam0, 128))
	{
		if (func_545(uParam0, 256) && !func_545(uParam0, 4194304))
		{
			return 1;
		}
		func_639(uParam0);
		if (!uParam0->f_433)
		{
			if (func_640())
			{
				func_641(4096);
				uParam0->f_433 = 1;
			}
		}
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_348, 1, 0))
		{
			bVar13 = true;
			Var15 = { func_623(uParam0) };
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
			if (!func_545(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_348, &Var15))
				{
					if (!func_545(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_348, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_348, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_348, &Var15);
						}
						func_626(uParam0, 16777216);
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
			func_626(uParam0, 256);
			func_625(uParam0, 4194304, 1);
			return 1;
		}
	}
	return 0;
}

void func_265(var uParam0)
{
}

bool func_266(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

int func_267(var uParam0, char* sParam1, int iParam2)
{
	if (func_266(sParam1, 2))
	{
		return 0;
	}
	if (func_266(sParam1, 1))
	{
		return 0;
	}
	if (iParam2 < sParam1->f_11 || iParam2 > sParam1->f_13)
	{
		return 0;
	}
	if ((func_642(sParam1) == 9 || func_642(sParam1) == 12) || func_642(sParam1) == 13)
	{
		if (!func_266(sParam1, 8))
		{
			if (iParam2 == sParam1->f_11)
			{
				func_643(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return 1;
		}
	}
	if (iParam2 >= sParam1->f_11)
	{
		return func_644(uParam0, func_642(sParam1));
	}
	return 0;
}

void func_268(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::START_AUDIO_SCENE(sParam0);
	}
	func_643(sParam0, 1);
}

int func_269(var uParam0, char* sParam1, int iParam2)
{
	if (!func_266(sParam1, 1))
	{
		return 0;
	}
	if (func_266(sParam1, 2))
	{
		return 0;
	}
	if (iParam2 > sParam1->f_13)
	{
		return 1;
	}
	if ((func_645(sParam1) == 9 || func_645(sParam1) == 12) || func_645(sParam1) == 13)
	{
		if (!func_266(sParam1, 8))
		{
			if (iParam2 == sParam1->f_13)
			{
				func_643(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return 1;
		}
	}
	if (iParam2 >= sParam1->f_13)
	{
		return func_644(uParam0, func_645(sParam1));
	}
	return 0;
}

void func_270(char* sParam0)
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
	func_643(sParam0, 2);
}

int func_271(var uParam0, char* sParam1, int iParam2)
{
	if (func_266(sParam1, 1))
	{
		return 0;
	}
	if (func_642(sParam1) == 2)
	{
		return uParam0->f_177 == 2;
	}
	if (func_642(sParam1) == 0)
	{
		if (uParam0->f_177 == 6 && func_218(uParam0) == -1)
		{
			return 1;
		}
	}
	if (sParam1->f_11 != iParam2)
	{
		if (((func_642(sParam1) == 9 || func_642(sParam1) == 12) || func_642(sParam1) == 13) && func_266(sParam1, 8))
		{
			return 1;
		}
		return 0;
	}
	switch (func_642(sParam1))
	{
		case 0:
			return uParam0->f_177 == 6;
		case 4:
			return func_334(&(uParam0->f_753));
		case 1:
		case 10:
		case 11:
			return uParam0->f_177 == 7;
		case 9:
		case 12:
		case 13:
			if (!func_266(sParam1, 8))
			{
				func_643(sParam1, 8);
			}
			break;
	}
	return 0;
}

void func_272(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::_0x2B9C37C01BF25EDB(sParam0);
	}
	func_643(sParam0, 1);
}

int func_273(char* sParam0, bool bParam1)
{
	if (func_266(sParam0, 1))
	{
		return 0;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		AUDIO::PREPARE_MUSIC_EVENT(sParam0);
		func_643(sParam0, 1);
		return 1;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_643(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_643(sParam0, 1);
			return 0;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_643(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_643(sParam0, 1);
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
		func_643(sParam0, 1);
		return 1;
	}
	func_643(sParam0, 1);
	return 0;
}

void func_274(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_482)
	{
		if ((func_266(uParam0->f_482[iVar0 /*16*/], 1048576) && func_266(uParam0->f_482[iVar0 /*16*/], 4)) && !func_266(uParam0->f_482[iVar0 /*16*/], 1))
		{
			AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_482[iVar0 /*16*/]);
			return;
		}
		iVar0++;
	}
}

int func_275(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
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
		if (!func_646(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_647(uParam0, 0))
			{
				if (func_648(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_649(uParam0, 1, &iVar0))
					{
					}
					if (func_650(uParam0, 3, &cVar2))
					{
					}
					if (func_649(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_649(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_649(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_649(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_649(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 15 && uParam0->f_785 < 15)
						{
							if (!func_651(uParam0, &cVar2, uParam0->f_785))
							{
								*((*uParam0)[uParam0->f_785 /*16*/]) = { cVar2 };
								func_643((*uParam0)[uParam0->f_785 /*16*/], 1048576);
								uParam0->f_785++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 15 && uParam0->f_786 < 15)
						{
							*(uParam0->f_241[uParam0->f_786 /*16*/]) = { cVar2 };
							func_643(uParam0->f_241[uParam0->f_786 /*16*/], 1048576);
							uParam0->f_786++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 16 && uParam0->f_787 < 16)
						{
							*(uParam0->f_482[uParam0->f_787 /*16*/]) = { cVar2 };
							func_643(uParam0->f_482[uParam0->f_787 /*16*/], 1048576);
							if (!bVar19 && func_266(&cVar2, 4))
							{
								AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_482[uParam0->f_787 /*16*/]);
								bVar19 = true;
							}
							uParam0->f_787++;
						}
					}
					else if (iVar0 < 2 && uParam0->f_788 < 2)
					{
						if (!func_651(&(uParam0->f_739), &cVar2, uParam0->f_788))
						{
							*(uParam0->f_739[uParam0->f_788 /*16*/]) = { cVar2 };
							func_643(uParam0->f_739[uParam0->f_788 /*16*/], 1048576);
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
	if (!func_143(uParam0) && uParam0->f_791 > 0)
	{
		iVar20 = uParam0->f_792;
		while (iVar20 <= (uParam0->f_791 - 1))
		{
			uParam0->f_776.f_1 = 0;
			uParam0->f_776.f_3 = iVar20;
			iVar22 = 0;
			if (func_647(uParam0, 12))
			{
				if (func_649(uParam0, 13, &iVar0))
				{
				}
				if (func_649(uParam0, 14, &iVar1))
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
		func_652(uParam0);
	}
	return 1;
}

bool func_276(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_277(var uParam0)
{
	func_653(uParam0, 0f);
}

bool func_278(var uParam0)
{
	return func_276(*uParam0, 2);
}

int func_279()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_280(var uParam0)
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
		vVar0 = { func_70(uParam0->f_174) };
		func_654(vVar0, 2.5f, 1, 0, 0, 0, 0);
		_NAMESPACE49::_0x9D16896F0DBE78A2(vVar0, 2.5f);
		if (func_32(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 524288))
		{
			((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = func_655(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, vVar0, 0, 1, 1, 0, 1, 1, 0, 1, 1);
		}
		else
		{
			((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = func_655(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, vVar0, 0, 1, 1, 0, 1, 1, 1, 1, 0);
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

int func_281(var uParam0)
{
	switch (iLocal_47)
	{
		case 0:
			func_361(&uLocal_278, Global_35, "ARTHUR", 1);
			func_345(18, 0);
			func_341(1);
			func_309(1, 4096);
			func_309(1, 8192);
			func_656(1, 1048576);
			func_657();
			func_658(uParam0, &iLocal_262);
			func_659(2);
			break;
		case 2:
			func_660(&iLocal_265);
			if (func_661(iLocal_262))
			{
				func_662(&iLocal_262);
				func_663(&iLocal_263);
				func_659(4);
			}
			else
			{
				func_658(uParam0, &iLocal_262);
			}
			break;
		case 4:
			func_663(&iLocal_263);
			if (func_33(uParam0, 64))
			{
				func_659(3);
			}
			else if (func_660(&iLocal_265))
			{
				func_664(&iLocal_265, &uLocal_278, &uLocal_449, 0);
				func_665(&iLocal_265);
				func_659(3);
			}
			break;
		case 3:
			if (func_33(uParam0, 64))
			{
				if (func_663(&iLocal_263))
				{
					func_659(5);
				}
			}
			else
			{
				func_659(5);
			}
			break;
		case 5:
			func_663(&iLocal_263);
			if (!func_666())
			{
				return 0;
			}
			func_667();
			func_668(1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_262))
			{
				func_669(uParam0, iLocal_262);
				func_196(1, 1024);
				func_361(&uLocal_278, iLocal_262, "HOSEA", 1);
			}
			func_670(&uLocal_376, 4, 4);
			func_332(-308659358, 1, 1);
			func_332(-66987983, 1, 1);
			func_332(-1304772442, 1, 1);
			func_332(-1924401463, 1, 1);
			func_671(&uLocal_479, iLocal_262);
			func_548(&uLocal_479, 1);
			func_554(&uLocal_479, 1);
			func_555(&uLocal_479, 0);
			func_550(&uLocal_479, 0);
			func_672(&uLocal_479, 0);
			func_673(&uLocal_479, 0);
			func_552(&uLocal_479, 0);
			func_674(&uLocal_479, 1500);
			func_675(&uLocal_479, 30f, 1);
			func_659(6);
			break;
		case 6:
			func_663(&iLocal_263);
			return 1;
	}
	return 0;
}

int func_282(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0 || ((*Global_1347702)[iParam0 /*49*/])->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_283(int iParam0)
{
	var uVar0;

	uVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_3;
	return MISC::GET_HASH_KEY(&uVar0);
}

void func_284(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

void func_285(int iParam0)
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
	uVar10 = func_676(iParam0, 0);
	iVar11 = uVar10;
	iVar12 = uVar10;
	if (iParam0 == 82 || iParam0 == 83)
	{
		iVar12 = MISC::GET_HASH_KEY("LAW_UI_DUTCH_GANG");
	}
	MemCopy(&cVar0, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 8);
	StringConCat(&cVar0, "_DESC", 64);
	iVar13 = func_282(iParam0);
	UILOG::_UILOG_ADD_ENTRY_HASH(iVar13, func_283(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_24, iVar12, MISC::GET_HASH_KEY(&cVar0), ((*Global_1347702)[iParam0 /*49*/])->f_37);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar13, func_283(iParam0), iVar11, MISC::GET_HASH_KEY("toast_log_blips"));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar8) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar9))
	{
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(iVar13, func_283(iParam0), MISC::GET_HASH_KEY(sVar8), MISC::GET_HASH_KEY(sVar9));
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar13, func_283(iParam0)))
	{
		func_284(iParam0, 4);
	}
}

void func_286(int iParam0)
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
		cVar3 = func_677(0, &Var1, 0, 0, -1, -1);
		func_678(iParam0, &Var1, cVar3, -1082130432);
	}
}

void func_287(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_213(iVar0) && Global_1347702[iVar0 /*49*/] == iParam0)
		{
			bVar1 = true;
			func_242(iVar0, 1);
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

int func_288(int iParam0)
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
		iVar0 = func_468(iParam0);
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

void func_289(int iParam0, bool bParam1)
{
	if (!func_58(iParam0))
	{
		return;
	}
	if (!func_109(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_110(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_110(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_111(iParam0), func_112(iParam0), func_113(iParam0), func_110(iParam0), Global_36);
		}
	}
	func_472(iParam0, 1);
	bParam1 = bParam1;
}

void func_290(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_58(iParam0))
	{
		return;
	}
	if (!func_288(iParam0))
	{
		return;
	}
	iVar0 = func_111(iParam0);
	if (bParam1)
	{
		if (func_110(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_110(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != ((*Global_1835011)[77 /*74*/])->f_1)
			{
				func_679(func_112(iParam0));
			}
			if (func_212() != 0)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_110(iParam0), 0);
			}
			else
			{
				STATS::STATSTRACKER_DEED_STARTED(func_110(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_680(iParam0);
	if (!func_58(func_57(0)))
	{
		func_472(iParam0, 3);
		func_210(bParam2);
		if (func_212() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
			}
			func_471(1);
		}
		func_681(iParam0, -1);
		if (bParam1 && !func_61(2))
		{
			func_682(&Global_0, 1024);
		}
		if (func_212() == -1)
		{
			func_683(&(Global_1347343->f_11), 536870912);
			func_684(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_685(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_686(0);
			}
		}
		if (func_212() == -1)
		{
			iVar1 = func_523(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_525();
				switch (iVar1)
				{
					case 0:
						func_687(0);
						break;
					case 1:
						func_687(1);
						break;
					case 2:
						func_687(2);
						break;
					case 3:
						func_687(3);
						break;
					case 4:
						func_687(4);
						break;
					case 5:
						func_687(5);
						break;
					case 6:
						func_687(5);
						break;
					case 7:
						func_687(7);
						break;
					case 8:
						func_687(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_112(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_687(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_112(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_687(11);
						break;
					default:
						iVar1 = func_525();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_688(0);
									break;
								case 1:
									func_688(1);
									break;
								case 2:
									func_688(2);
									break;
								case 3:
									func_688(3);
									break;
								case 4:
									func_688(4);
									break;
								case 5:
									func_688(5);
									break;
								case 6:
									func_688(5);
									break;
								case 7:
									func_688(7);
									break;
								case 8:
									func_688(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_475(1);
	}
	else
	{
		func_681(iParam0, -1);
		func_472(iParam0, 4);
	}
	func_526(iParam0, 0);
}

void func_291(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_292(var uParam0)
{
	int iVar0;

	if (uParam0->f_749 == -1)
	{
		if (!func_32(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
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

void func_293(bool bParam0, int iParam1, bool bParam2)
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

void func_294()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_516(iVar0))
		{
			func_604(iVar0, 30, 1);
		}
		iVar0++;
	}
}

void func_295(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_586(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return;
	}
	else if (func_586(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return;
	}
	if (((((((((((((((uParam0->f_174 == 29 || uParam0->f_174 == 56) || uParam0->f_174 == 57) || uParam0->f_174 == 72) || uParam0->f_174 == 84) || uParam0->f_174 == 85) || uParam0->f_174 == 86) || uParam0->f_174 == 87) || uParam0->f_174 == 88) || uParam0->f_174 == 92) || uParam0->f_174 == 111) || uParam0->f_174 == 102) || uParam0->f_174 == 117) || uParam0->f_174 == 122) || uParam0->f_174 == 149) || uParam0->f_174 == 150)
	{
		iVar0 = 100;
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_revolver_cattleman"), 0, 0))
		{
			if (!func_689(joaat("weapon_revolver_cattleman")))
			{
				func_690(joaat("weapon_revolver_cattleman"));
			}
			func_691(Global_35, joaat("weapon_revolver_cattleman"), 0, 0, 2, 1, 0, 1056964608, 1065353216, iVar0, 0, 0, 0, 0);
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

void func_296(bool bParam0)
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
	func_692(0f);
	Global_1935436->f_11 = 1;
	if (func_444())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_693();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_297(var uParam0)
{
}

int func_298(var uParam0)
{
	if (uParam0->f_174 == func_20())
	{
		return 1;
	}
	return 0;
}

void func_299(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10, bool bParam11)
{
	struct<4> Var0;
	struct<4> Var4;

	if (uParam0->f_752 != iParam9)
	{
		if (uParam0->f_752 > -1)
		{
			func_694(uParam0);
		}
		uParam0->f_752 = iParam9;
		func_695(uParam0);
	}
	if (func_33(uParam0, 128) && func_30())
	{
		func_157(0);
		bParam11 = true;
	}
	if (!bParam11)
	{
		if ((func_307() == iParam9 && func_696() == iParam10) && !func_697(*Global_1347394, 0f, 0f, 0f))
		{
			return;
		}
	}
	if (func_307() != iParam9 && !func_697(*Global_1347394, 0f, 0f, 0f))
	{
		func_154(0);
	}
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_698(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, Var0, Var4, iParam9, iParam10);
}

void func_300(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			StringCopy(&(uParam0->f_2575), func_699(0), 24);
			func_701(uParam0, 106576/*func_700*/);
			func_703(uParam0, 107086/*func_702*/);
			func_705(uParam0, 107236/*func_704*/);
			func_706(uParam0, func_70(uParam0->f_174));
			func_707(uParam0, Global_35, 0, 0, 0, 0);
			func_707(uParam0, iLocal_262, 0, 0, 0, 0);
			func_707(uParam0, iLocal_265, func_708(), 0, 0, 0);
			func_707(uParam0, iLocal_263, "Horse_01", 0, 0, 0);
			func_707(uParam0, &(iLocal_266[0]), "p_cigarette01x", 0, 0, 0);
			func_707(uParam0, &(iLocal_266[1]), "p_cigarette01x^1", 0, 0, 0);
			func_709(&(uParam0->f_206), 1417.193f, 249.572f, 89.28895f, 0, 0);
			func_331(uParam0, 0);
			func_197(uParam0, iLocal_22[0], 0, 0, 0, 0);
			func_2(&(uParam0->f_172), 16);
			break;
		case 1:
			StringCopy(&(uParam0->f_2575), func_699(1), 24);
			func_701(uParam0, 107445/*func_710*/);
			func_706(uParam0, 803.163f, 856.885f, 117.346f);
			func_707(uParam0, Global_35, 0, 0, 0, 0);
			func_707(uParam0, iLocal_262, 0, 0, 0, 0);
			func_707(uParam0, &(iLocal_266[0]), "p_cigarette01x", 0, 0, 0);
			func_707(uParam0, &(iLocal_266[1]), "p_cigarette01x^1", 0, 0, 0);
			func_707(uParam0, iLocal_269, "p_cigarettebox01x", 0, 0, 0);
			func_709(&(uParam0->f_206), 860.7442f, 804.5162f, 114.6219f, 0, 0);
			func_331(uParam0, 1);
			func_637(&(uParam0->f_206));
			func_2(&(uParam0->f_172), 16);
			break;
		case 2:
			func_103(uParam0, 0);
			StringCopy(&(uParam0->f_2575), func_699(2), 24);
			func_701(uParam0, 109149/*func_711*/);
			func_706(uParam0, func_70(uParam0->f_174));
			func_707(uParam0, Global_35, 0, 0, 0, 0);
			func_707(uParam0, iLocal_262, 0, 0, 0, 0);
			func_707(uParam0, iLocal_265, func_708(), 0, 0, 0);
			func_707(uParam0, iLocal_14, "stagecoach002x", 0, 0, 0);
			func_709(&(uParam0->f_206), 1417.193f, 249.572f, 89.28895f, 0, 0);
			func_331(uParam0, 2);
			func_637(&(uParam0->f_206));
			func_2(&(uParam0->f_172), 16);
			break;
		case 3:
			StringCopy(&(uParam0->f_2575), "", 24);
			func_3(&(uParam0->f_172), 16);
			break;
	}
}

int func_301(var uParam0)
{
	func_663(&iLocal_263);
	if (func_712(32))
	{
		return func_713(uParam0);
	}
	if ((func_481() || func_215(2)) || func_222(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_262))
	{
		PED::SET_PED_RESET_FLAG(iLocal_262, 184, true);
	}
	if (func_714(Global_35, &(iLocal_22[4]), 0, 1))
	{
		return 0;
	}
	if (func_715(&iLocal_509))
	{
		if (!func_712(16))
		{
			if (func_716(&iLocal_509, 0.7531f))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_509, "Loop_Idle", false, false);
				func_717(8);
				func_355(16);
			}
			else if (!func_712(8))
			{
				if (func_714(Global_35, &(iLocal_22[1]), 0, 1))
				{
					func_718(1024);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_509, "Loop_Idle", true, false);
					func_355(8);
				}
			}
		}
	}
	else
	{
		func_719();
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 300, true))
	{
		if (func_721(func_720(22), 1) > 10f)
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 300, false);
		}
	}
	else if (func_721(func_720(22), 1) < 10f)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 300, true);
	}
	if (func_722(Global_35))
	{
		if (func_721(func_720(22), 1) < 10f && !func_723(Global_35, 501393341))
		{
			TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
		}
		func_724(Global_35, func_720(22), vLocal_664[10 /*3*/], 20f, 15f, 10f, 0f, 100f, 0, 0, 1, 1, 1);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		if (func_721(func_720(22), 1) < 15f && !func_723(Global_35, -828834893))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
		}
		func_724(Global_35, func_720(22), vLocal_664[10 /*3*/], 20f, 15f, 10f, 0f, 100f, 0, 0, 1, 1, 1);
	}
	if (((!func_725(Global_35, &(iLocal_22[12]), 1, 0) && func_721(func_720(22), 1) < 6f) && !PED::IS_PED_ON_MOUNT(Global_35)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		func_355(32);
		return 0;
	}
	return 0;
}

int func_302(var uParam0)
{
	if (func_32(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 128))
	{
		func_162(uParam0);
		return 1;
	}
	switch (uParam0->f_171)
	{
		case 0:
			if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
			{
				func_726(0, 1, 1, 1);
				uParam0->f_171 = 1;
			}
			else
			{
				return 1;
			}
			break;
		case 1:
			func_726(0, 1, 1, 1);
			if (func_727(Global_35, &(uParam0->f_747), 0, 0, 0, 1084227584, 100, 0, 0))
			{
				func_162(uParam0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_303()
{
	func_728();
	func_729();
	func_730(1, 16);
	func_730(1, 32);
	func_730(1, 64);
	func_730(1, 128);
	func_730(1, 256);
	func_730(1, 512);
	func_730(1, 1024);
	func_730(1, 2048);
	func_730(1, 4096);
	func_730(1, 8192);
	func_730(1, 16384);
	func_730(1, 32768);
	func_730(1, 65536);
	func_730(1, 131072);
	func_730(1, 262144);
	func_730(1, 524288);
	func_730(1, 1048576);
	func_730(1, 2097152);
	func_730(1, 4194304);
	func_730(1, 8388608);
	func_730(1, 16777216);
	func_730(1, 33554432);
	func_730(1, 67108864);
	func_730(1, 134217728);
	func_730(1, 268435456);
	func_730(1, 536870912);
	func_730(1, 1073741824);
	func_730(1, -2147483648);
	func_731(1, 1);
	func_731(1, 2);
	func_731(1, 4);
	func_731(1, 8);
	func_731(1, 16);
	func_731(1, 32);
	func_731(1, 64);
	func_731(1, 128);
	func_731(1, 256);
	func_731(1, 512);
	func_731(1, 1024);
	func_731(1, 2048);
	func_731(1, 4096);
	func_731(1, 8192);
	func_731(1, 16384);
	func_731(1, 32768);
	func_731(1, 65536);
	func_731(1, 131072);
	func_731(1, 262144);
	func_731(1, 524288);
	func_731(1, 1048576);
	func_731(1, 2097152);
	func_731(1, 4194304);
	func_731(1, 8388608);
	func_731(1, 16777216);
	func_731(1, 33554432);
	func_731(1, 134217728);
	func_731(1, 268435456);
	func_731(1, 536870912);
	func_731(1, 1073741824);
	func_731(1, -2147483648);
}

void func_304()
{
	func_730(1, 2048);
	func_730(1, 4096);
	func_731(1, 64);
	func_731(1, 128);
	func_730(1, 512);
	func_730(1, 8192);
	func_731(1, 8);
	func_731(1, 32768);
	func_731(1, 65536);
	func_731(1, 131072);
	func_731(1, 262144);
	func_731(1, 1048576);
	func_731(1, 2097152);
	func_731(1, 4194304);
	func_731(1, 8388608);
	func_731(1, 16777216);
	func_731(1, 33554432);
	func_731(1, 536870912);
	func_731(1, 1073741824);
	func_731(1, 512);
	func_731(1, 1024);
	func_731(1, 2);
	func_731(1, 268435456);
	func_732(1, 1024);
	func_732(1, 2048);
	func_732(1, 4096);
	func_732(1, 8192);
}

void func_305()
{
	func_731(1, -2147483648);
}

void func_306(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_733(iParam0, 0, 0);
	if (func_734(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_735(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_736(iParam0, 1);
			}
			else
			{
				func_737(iParam0, 1);
			}
		}
		else
		{
			func_738(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::DOOR_SYSTEM_FORCE_SHUT(iParam0, 1);
		}
	}
	else if (func_739())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

int func_307()
{
	return Global_1572864->f_9;
}

int func_308(int iParam0, int iParam1, var uParam2)
{
	switch (iLocal_46)
	{
		case 0:
			if (func_28(uParam2))
			{
				func_740(1, 8);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
			if (iParam0 < 8)
			{
				func_196(1, 1);
			}
			if (iParam0 < 7)
			{
				func_304();
			}
			switch (iParam0)
			{
				case 0:
					func_300(uParam2, 0);
					func_216(268435456);
					break;
				case 1:
					func_216(268435456);
					break;
				case 2:
					func_300(uParam2, 1);
					func_372(iLocal_22[6], iLocal_22[7], iLocal_22[8], 1, 0);
					break;
				case 3:
					func_741();
					func_300(uParam2, 1);
					func_742();
					func_372(iLocal_22[6], iLocal_22[7], iLocal_22[8], 1, 0);
					break;
				case 4:
					func_743();
					func_300(uParam2, 1);
					func_742();
					func_372(iLocal_22[6], iLocal_22[7], iLocal_22[8], 1, 0);
					break;
				case 5:
					func_741();
					func_372(iLocal_22[6], iLocal_22[7], iLocal_22[8], 1, 1);
					func_196(1, 8388608);
					break;
				case 6:
					func_743();
					func_372(iLocal_22[6], iLocal_22[7], iLocal_22[8], 1, 1);
					func_196(1, 33554432);
					break;
				case 7:
					if (func_437())
					{
						func_741();
					}
					else
					{
						func_743();
					}
					func_372(iLocal_22[6], iLocal_22[7], iLocal_22[8], 1, 1);
					func_196(1, 134217728);
					break;
				case 8:
					func_744(func_191(4), 20f, 0, 0, 1, 1, 0);
					break;
				case 9:
					func_744(func_191(4), 20f, 0, 0, 1, 1, 0);
					func_332(-308659358, 0, 1);
					func_332(-66987983, 0, 1);
					func_216(268435456);
					break;
				case 10:
					func_744(func_191(4), 20f, 0, 0, 1, 1, 0);
					func_332(-308659358, 1, 1);
					func_332(-66987983, 1, 1);
					func_216(268435456);
					break;
			}
			func_341(1);
			func_196(1, 512);
			func_745(iParam0);
			iLocal_46 = 1;
			return 0;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_264))
			{
				func_746(&iLocal_264, *(Local_64.f_45[iParam0 /*4*/]), (Local_64.f_45[iParam0 /*4*/])->f_3, 1, 1, 1, 1);
				return 0;
			}
			switch (iParam0)
			{
				case 0:
					if (!func_660(&iLocal_265))
					{
						return 0;
					}
					func_664(&iLocal_265, &uLocal_278, &uLocal_449, 1);
					break;
				case 1:
					if (func_660(&iLocal_265))
					{
						func_747(&iLocal_265, &iLocal_508);
					}
					func_664(&iLocal_265, &uLocal_278, &uLocal_449, 1);
					func_748(iLocal_262, iLocal_263, 0, -1, 1);
					func_748(Global_35, iLocal_264, 0, -1, 1);
					break;
				case 2:
					func_748(iLocal_262, iLocal_263, 0, -1, 1);
					func_748(Global_35, iLocal_264, 0, -1, 1);
					func_749(0);
					break;
				case 3:
				case 4:
					func_374();
					func_49();
					func_377(&(iLocal_22[10]));
					func_750(7);
					break;
				case 5:
					func_749(0);
					func_312(&iLocal_14, iLocal_274, 12);
					break;
				case 6:
					func_749(0);
					func_312(&iLocal_14, iLocal_274, 12);
					break;
				case 7:
					func_312(&iLocal_14, iLocal_274, 11);
					break;
				case 8:
					func_312(&iLocal_14, iLocal_274, 4);
					break;
				case 9:
					if (!func_660(&iLocal_265))
					{
						return 0;
					}
					func_664(&iLocal_265, &uLocal_278, &uLocal_449, 1);
					func_312(&iLocal_14, iLocal_274, 4);
					func_300(uParam2, 2);
					break;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_265) && !ENTITY::IS_ENTITY_DEAD(iLocal_265))
			{
				PED::SET_PED_LASSO_HOGTIE_FLAG(iLocal_265, 0, 1);
			}
			iLocal_46 = 2;
			return 0;
		case 2:
			switch (iParam0)
			{
				case 0:
					if (func_751(&(uParam2->f_206.f_348)))
					{
						iLocal_46 = 3;
					}
					else
					{
						return 0;
					}
					break;
				case 3:
				case 4:
					if (func_751(&(uParam2->f_206.f_348)) && func_742())
					{
						ANIMSCENE::START_ANIM_SCENE(iLocal_510);
						iLocal_46 = 3;
					}
					else
					{
						return 0;
					}
					break;
				case 2:
				case 5:
				case 6:
					if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1895447864) > 0)
					{
						iLocal_46 = 3;
					}
					break;
				case 9:
					if (func_751(&(uParam2->f_206.f_348)))
					{
						iLocal_46 = 3;
					}
					else
					{
						return 0;
					}
					break;
				default:
					iLocal_46 = 3;
					break;
			}
			return 0;
		case 3:
			func_752(iParam1);
			switch (iParam0)
			{
				case 0:
					func_707(uParam2, iLocal_265, func_708(), 0, 0, 0);
					iLocal_46 = 5;
					break;
				case 3:
				case 4:
					func_753(8f, 7f);
					if (func_754(Global_35, 0) != joaat("weapon_kit_binoculars"))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_binoculars"), false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
					}
					func_354(&uLocal_261);
					func_277(vLocal_664[19 /*3*/]);
					fLocal_517 = 2f;
					iLocal_46 = 5;
					break;
				case 5:
				case 6:
					if (func_383(iLocal_262))
					{
						iLocal_46 = 5;
					}
					break;
				case 7:
				case 8:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_14) && !ENTITY::IS_ENTITY_DEAD(iLocal_14))
					{
						if (func_397(iLocal_262, iLocal_14, 0) && func_397(Global_35, iLocal_14, 0))
						{
							if (iParam0 == 7)
							{
								if (func_383(iLocal_262))
								{
									func_753(0f, 0);
									iLocal_46 = 5;
								}
							}
							else if (iParam0 == 8)
							{
								func_753(6f, 0);
								iLocal_46 = 5;
							}
						}
						else
						{
							func_755(&iLocal_262, iLocal_14, 0);
							func_755(&Global_35, iLocal_14, -1);
						}
					}
					break;
				default:
					iLocal_46 = 5;
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 3:
				case 4:
					if (func_754(Global_35, 0) != joaat("weapon_kit_binoculars"))
					{
						if (!func_723(Global_35, 716706914))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_binoculars"), true, 0, false, false);
							TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
						}
						return 0;
					}
					else
					{
						func_354(&uLocal_261);
					}
					break;
			}
			return 1;
	}
	return 0;
}

void func_309(int iParam0, int iParam1)
{
	if (!func_220(iParam0, iParam1))
	{
		return;
	}
	(Global_1392240->f_1[iParam0 /*18*/])->f_14 = ((Global_1392240->f_1[iParam0 /*18*/])->f_14 - ((Global_1392240->f_1[iParam0 /*18*/])->f_14 && iParam1));
}

void func_310()
{
	func_756();
}

void func_311()
{
	CAM::DO_SCREEN_FADE_IN(500);
}

void func_312(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		func_757(iParam0);
		func_758(iParam0);
		func_216(512);
		return;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iParam1))
	{
		return;
	}
	*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, func_720(iParam2), func_759(iParam2), true, true, false, false);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 0f);
	}
	func_757(iParam0);
	func_758(iParam0);
	VEHICLE::_0xE1A83D4A3B5D7938(*iParam0);
	func_216(512);
}

void func_313()
{
	func_760();
}

int func_314()
{
	int iVar0;

	iVar0 = func_595();
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

int func_315(int iParam0)
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

float func_316(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_317(var uParam0)
{
	if (!func_7(uParam0->f_172, 512))
	{
		if (!func_761(uParam0))
		{
			return 0;
		}
		func_228(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 128);
		if (func_257(uParam0))
		{
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_751);
			func_2(&(uParam0->f_172), 512);
		}
		return 0;
	}
	func_726(0, 1, 1, 1);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_751) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_751, 0))
	{
		func_2(&(uParam0->f_172), 1024);
		func_3(&(uParam0->f_172), 256);
		return 1;
	}
	return 0;
}

void func_318()
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

void func_319(var uParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
}

int func_320(var uParam0)
{
	if (uParam0->f_176 == 4)
	{
		if (!func_762(uParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_321(var uParam0, var uParam1)
{
	struct<8> Var0;

	if (func_184(uParam1, 32768))
	{
		Var0 = { func_623(uParam0) };
		func_261(uParam0, &Var0);
		if (func_184(uParam1, 131072))
		{
			func_626(uParam0, 268435456);
			if (func_262(uParam0->f_409))
			{
				uParam0->f_409 = { func_763(uParam1, uParam1->f_1580) };
			}
			if (func_262(uParam0->f_406))
			{
				uParam0->f_406 = { func_763(uParam1, uParam1->f_1580) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_406, &(uParam0->f_406.f_2), 0);
				uParam0->f_406.f_2 = (uParam0->f_406.f_2 + 0.5f);
			}
		}
		if (func_184(uParam1, 268435456))
		{
			func_764(&(uParam0->f_404), 16384);
		}
	}
	else if (func_184(uParam1, 524288))
	{
		func_626(uParam0, 67108864);
		func_765(uParam1, 524288);
	}
	if (func_766(uParam1, 128))
	{
		func_626(uParam0, 32);
	}
	if (uParam1->f_1799 != 0)
	{
		uParam0->f_416 = uParam1->f_1799;
		if (uParam1->f_1580 >= 0 && func_767(uParam1->f_912[uParam1->f_1580 /*41*/], 256))
		{
			func_764(&(uParam0->f_404), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_0x927B810E43E99932(&(uParam1->f_1588)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_417), &(uParam1->f_1588), 16);
	}
}

void func_322(var uParam0, int iParam1)
{
	var uVar0;

	if (iParam1 || !func_7(uParam0->f_172, 16384))
	{
		MemCopy(&uVar0, {func_768(uParam0->f_174)}, 8);
		func_769(&uVar0, 15000, 0, 0, 0, 1);
		func_2(&(uParam0->f_172), 16384);
	}
}

int func_323(int iParam0)
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
	iVar0 = func_770();
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

int func_324()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383->f_393))
	{
		func_771();
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::_0xD2CB0FB0FDCB473D(iVar0, 0);
	func_772(-1);
	func_773(3);
	return 1;
}

void func_325(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_774(iParam0, &iVar0, &iVar1);
	if (!func_775(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_776(iVar0, iVar1);
}

int func_326(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;

	func_628(uParam4, &sParam0);
	if (func_545(uParam4, 2) && !func_545(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -842734359, false);
	}
	if (func_777(uParam4) != 1)
	{
		func_778(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_777(uParam4))
	{
		case 1:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_348, 1, 0))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_348, 0))
				{
					func_779(uParam4, &sParam0, uParam5);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
				{
					func_780(uParam4, 4);
					return 0;
				}
				else
				{
					if (func_781(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_341);
					}
					func_782(uParam5);
				}
				func_780(uParam4, 3);
			}
			else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_350)) && func_545(uParam4, 134217728))
				{
				}
				else
				{
					func_260(uParam4);
				}
				func_277(&(uParam4->f_1));
				func_780(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_639(uParam4);
				if (!func_80(&(uParam4->f_1)))
				{
					func_81(&(uParam4->f_1), 0);
				}
				else if (func_783(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					func_780(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_348, 1, 0))
			{
				if (func_264(uParam4, &sParam0, 1, 1))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_348, 1, 0))
					{
						func_780(uParam4, 4);
					}
					else if (!func_262(func_629(uParam4)) && !func_784(Global_35, func_629(uParam4), 100f, 1, 1))
					{
						func_785(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_629(uParam4), 0f, 1, 1, 1, 0);
					}
				}
				else if (func_783(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					func_780(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
					func_786(1, 0);
					func_779(uParam4, &sParam0, uParam5);
					func_780(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_783(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
				}
				func_780(uParam4, 4);
			}
			break;
		case 3:
			func_787(uParam4);
			if (func_781(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_341);
			}
			func_782(uParam5);
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_348, 0)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348) || func_545(uParam4, 512)))
			{
				if (!func_545(uParam4, 1024) && func_788(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_545(uParam4, 512))
				{
					func_277(&(uParam4->f_1));
					func_626(uParam4, 512);
					func_780(uParam4, 4);
				}
				else if (func_545(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_778(uParam4);
			}
			if (func_545(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_789(uParam4) - func_790(uParam4)))) <= 2f)
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
				if (func_791(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_790(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (func_792(uParam4))
			{
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
				}
				func_793(uParam4);
				func_794(uParam4);
				return 1;
			}
			else
			{
				if (func_545(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_348);
						}
						func_277(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						func_626(uParam4, 512);
						func_625(uParam4, 67108864, 1);
						func_780(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_545(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348)) && CAM::IS_SCREEN_FADED_OUT()) && func_790(uParam4) <= 5000) && func_790(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!func_545(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_795(&(uParam4->f_405), 0);
					func_626(uParam4, 536870912);
				}
				if (func_790(uParam4) >= 5000 && func_790(uParam4) <= (func_789(uParam4) - 5000))
				{
					func_796();
				}
			}
			break;
		case 6:
			if (func_792(uParam4))
			{
				func_793(uParam4);
				func_794(uParam4);
				return 1;
			}
			break;
		case 4:
			if (func_545(uParam4, 524288))
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
						func_626(uParam4, 1073741824);
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
					if (func_797(uParam5))
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, 0);
						}
						func_780(uParam4, 3);
					}
					else if (func_783(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, 0);
						}
						func_780(uParam4, 3);
					}
				}
				if (func_777(uParam4) == 3)
				{
					if (func_545(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			func_780(uParam4, 4);
			break;
	}
	return 0;
}

void func_327(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_545(uParam0, 16))
		{
			POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_4);
			POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_4);
			func_798(uParam0);
			PATHFIND::RESET_ROADS_IN_VOLUME(uParam0->f_4, 0);
		}
	}
	if (func_545(uParam0, 8))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_4);
		func_625(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_625(uParam0, 16, 1);
}

void func_328(int* iParam0)
{
	struct<367> Var0;

	Var0 = 1;
	Var0.f_13 = 27;
	Var0.f_338 = 1097859072;
	Var0.f_339 = 1101004800;
	Var0.f_366 = 4;
	MISC::_COPY_MEMORY(iParam0, &Var0, 434);
}

void func_329(var uParam0)
{
	func_799(&(uParam0->f_753));
	StringCopy(&(uParam0->f_2581), "", 32);
	uParam0->f_2571 = 0;
	func_3(&(uParam0->f_172), 262144);
	func_3(&(uParam0->f_172), 524288);
	func_3(&(uParam0->f_172), 1048576);
}

int func_330(var uParam0)
{
	return uParam0->f_170;
}

void func_331(var uParam0, int iParam1)
{
	uParam0->f_170 = iParam1;
}

void func_332(int iParam0, int iParam1, int iParam2)
{
	func_733(iParam0, 0, 0);
	if (func_734(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != iParam1 || iParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, iParam1);
		}
	}
}

int func_333(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	if (func_184(uParam0, 32768))
	{
		return 1;
	}
	if (func_800(uParam0) >= 3)
	{
		uParam0->f_1792 = func_222(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
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
		func_801(uParam0);
	}
	if (func_800(uParam0) < 10)
	{
		if (func_800(uParam0) == 3)
		{
			func_802(uParam0, iParam5, bParam6);
		}
		else if (func_800(uParam0) > 3)
		{
			if (func_803(uParam0) == 0)
			{
				if (!func_184(uParam0, 524288))
				{
					func_804(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_805(uParam0, 4);
					func_806(uParam0, 10);
					func_807(uParam0, iParam5);
					return 1;
				}
			}
			if (!func_184(uParam0, 67108864) && !Global_1935630->f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!func_767(uParam0->f_912[uParam0->f_1580 /*41*/], 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
				PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
			}
			CAM::_0x8910C24B7E0046EC();
			func_808(0);
			func_809();
			PAD::DISABLE_CONTROL_ACTION(0, -1722177808, false);
			PAD::DISABLE_CONTROL_ACTION(0, 1644850270, false);
			PAD::DISABLE_CONTROL_ACTION(0, 2139949496, false);
			if (uParam0->f_1580 >= 0)
			{
				if (!func_767(uParam0->f_912[uParam0->f_1584 /*41*/], 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (func_810(uParam0, uParam0->f_1580))
				{
					if (func_811(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						func_812(uParam0, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1584 /*22*/])->f_1, 1065353216);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					func_812(uParam0, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1584 /*22*/])->f_1, 1065353216);
				}
				func_813(uParam0);
			}
		}
	}
	bVar0 = func_814(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_184(uParam0, 268435456) && bVar1) && !func_184(uParam0, 262144))
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
				func_815(uParam0, 131072);
				func_815(uParam0, 268435456);
			}
		}
		if (func_766(uParam0, 64) || (uParam0->f_1580 >= 0 && !func_767(uParam0->f_912[uParam0->f_1580 /*41*/], 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || func_803(uParam0) == 0)
			{
				HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_800(uParam0) == 3 || func_184(uParam0, 131072))
	{
		func_816(uParam0);
		if (!func_184(uParam0, 262144))
		{
			if ((bVar0 && func_184(uParam0, 65536)) || func_184(uParam0, 131072))
			{
				func_815(uParam0, 32768);
				func_805(uParam0, 4);
				func_806(uParam0, 10);
				uParam0->f_1665 = 1;
				func_807(uParam0, iParam5);
				return 1;
			}
		}
	}
	if (func_800(uParam0) >= 3)
	{
		func_817(uParam0, iParam5);
		func_818(uParam0);
		if (!func_819(uParam0, 1))
		{
			func_820(uParam0);
		}
		func_821(uParam0);
	}
	switch (func_800(uParam0))
	{
		case 0:
			func_822(uParam0, Param1, iParam5);
			break;
		case 1:
			func_823(uParam0);
			break;
		case 2:
			func_824(uParam0);
			break;
		case 3:
			if (func_334(uParam0))
			{
				func_825(2);
				func_812(uParam0, (uParam0->f_912[uParam0->f_1580 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1580 /*22*/])->f_1, 1065353216);
				func_277(&(uParam0->f_1768));
				func_805(uParam0, 1);
				func_826();
				func_806(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!func_184(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (func_800(uParam0) == 5)
			{
				if (func_827(uParam0))
				{
					func_805(uParam0, 2);
					func_806(uParam0, 6);
				}
			}
			if (func_800(uParam0) == 6)
			{
				if (func_828(uParam0))
				{
					func_805(uParam0, 3);
					func_806(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || func_829(&(uParam0->f_1768)) >= 15f)
			{
				if (func_830(uParam0, iParam5))
				{
					if (func_831(uParam0))
					{
						uParam0->f_1581 = func_832(uParam0);
						func_277(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
						HUD::_0x8BC7C1F929D07BF3(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
						func_805(uParam0, 6);
						func_806(uParam0, 9);
					}
					else
					{
						func_805(uParam0, 4);
						func_806(uParam0, 10);
						func_807(uParam0, iParam5);
						return 1;
					}
				}
			}
			break;
		case 9:
			if (func_830(uParam0, iParam5))
			{
				func_807(uParam0, iParam5);
				func_806(uParam0, 10);
				return 1;
			}
			break;
		case 10:
			return 1;
	}
	return 0;
}

int func_334(var uParam0)
{
	if (uParam0->f_1666)
	{
		return 0;
	}
	return uParam0->f_1665;
}

void func_335(var uParam0)
{
	if (func_346(2))
	{
		if (func_218(uParam0) != 1)
		{
			func_343(uParam0, 1);
		}
	}
	else if (func_346(4))
	{
		if (func_218(uParam0) != 1)
		{
			func_343(uParam0, 1);
		}
	}
	else if (func_346(8))
	{
		if (func_218(uParam0) != 1)
		{
			func_343(uParam0, 1);
		}
	}
	else if (func_346(16))
	{
		if (func_218(uParam0) != 1)
		{
			func_343(uParam0, 1);
		}
	}
	else if (func_346(32))
	{
		if (func_218(uParam0) != 1)
		{
			func_343(uParam0, 1);
		}
	}
	else if (func_346(64))
	{
		if (func_218(uParam0) != 1)
		{
			func_343(uParam0, 1);
		}
	}
	else if (func_346(128))
	{
		if (func_218(uParam0) != 1)
		{
			func_343(uParam0, 1);
		}
	}
	else if (func_346(256))
	{
		if (func_218(uParam0) != 1)
		{
			func_343(uParam0, 1);
		}
	}
	else if (func_346(512))
	{
		if (func_218(uParam0) != 1)
		{
			func_343(uParam0, 1);
		}
	}
	else if (func_346(1024))
	{
		if (func_218(uParam0) != 1)
		{
			func_343(uParam0, 1);
		}
	}
}

void func_336(var uParam0)
{
	int iVar0;
	float fVar1;

	if (ENTITY::IS_ENTITY_DEAD(iLocal_262))
	{
		return;
	}
	iVar0 = func_218(uParam0);
	switch (iVar0)
	{
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
			if (func_118() == 64)
			{
				if (func_404(4))
				{
					iLocal_401 = 0;
					func_375();
					func_248(vLocal_664[3 /*3*/]);
				}
				return;
			}
			break;
		case 19:
		case 29:
			return;
	}
	if (iVar0 < 5)
	{
		if (func_404(2048))
		{
			if (!func_833())
			{
				if (!func_80(vLocal_664[3 /*3*/]))
				{
					func_277(vLocal_664[3 /*3*/]);
				}
				else if (func_83(vLocal_664[3 /*3*/]) > 10000)
				{
					if (!func_833())
					{
						func_248(vLocal_664[3 /*3*/]);
						func_216(1048576);
					}
				}
				return;
			}
			else
			{
				func_834(2048);
				func_248(vLocal_664[3 /*3*/]);
				func_836(uParam0, func_835(iLocal_401), 1, -1082130432, 0, 0, -1, -1, 0);
			}
		}
		else if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_203()))
		{
			if (!func_833())
			{
				func_837(2048);
				func_836(uParam0, func_835(2048), 1, -1082130432, 0, 0, -1, -1, 0);
				func_838(func_835(2048), 7500, 0, 0, -1, -1, 0);
				func_248(vLocal_664[4 /*3*/]);
				return;
			}
		}
	}
	if (iVar0 == 16 || iVar0 == 17)
	{
		if (func_404(2048))
		{
			if (!func_839())
			{
				if (!func_80(vLocal_664[3 /*3*/]))
				{
					func_277(vLocal_664[3 /*3*/]);
				}
				else if (func_83(vLocal_664[3 /*3*/]) > 12000)
				{
					func_248(vLocal_664[3 /*3*/]);
					func_216(1048576);
				}
				return;
			}
			else
			{
				func_834(2048);
				func_248(vLocal_664[3 /*3*/]);
				func_836(uParam0, func_835(iLocal_401), 1, -1082130432, 0, 0, -1, -1, 0);
			}
		}
		else if (!func_839())
		{
			func_837(2048);
			func_836(uParam0, func_835(2048), 1, -1082130432, 0, 0, -1, -1, 0);
			func_838(func_835(2048), 7500, 0, 0, -1, -1, 0);
			func_248(vLocal_664[4 /*3*/]);
			return;
		}
	}
	fVar1 = func_840(iVar0);
	if (fVar1 < 60f)
	{
		if (func_404(4))
		{
			func_248(vLocal_664[3 /*3*/]);
			func_352(uParam0, iLocal_401, &iLocal_401, vLocal_664[4 /*3*/]);
		}
		return;
	}
	if (func_404(4))
	{
		if (fVar1 > 90f)
		{
			if (!func_80(vLocal_664[3 /*3*/]))
			{
				func_277(vLocal_664[3 /*3*/]);
			}
			else if (func_83(vLocal_664[3 /*3*/]) > 5000)
			{
				func_248(vLocal_664[3 /*3*/]);
				func_216(524288);
			}
		}
	}
	else
	{
		func_352(uParam0, 4, &iLocal_401, vLocal_664[4 /*3*/]);
		func_838(func_835(4), 7500, 0, 0, -1, -1, 0);
	}
}

void func_337(var uParam0)
{
	switch (iLocal_401)
	{
		case 1:
			if (!MAP::DOES_BLIP_EXIST(&(uLocal_244[2])))
			{
				func_369(uLocal_244[0]);
				func_841(uLocal_244[2], &(iLocal_22[4]), 1247852480);
				MAP::_0xBD62D98799A3DAF0(&(uLocal_244[2]), 408396114);
			}
			func_842(1, "RH0_RTRN_BRN");
			if (func_843(1))
			{
				if (iLocal_259)
				{
					if (func_844(1, vLocal_664[4 /*3*/], 8f, 0.5f))
					{
						iLocal_259 = 0;
					}
				}
			}
			break;
		case 2:
			break;
		case 4:
			break;
		case 8:
			if (func_843(1))
			{
				if (!iLocal_259)
				{
					iLocal_259 = 1;
				}
			}
			if (!func_845("RH0_RTRN_WGN1") && !func_845("RH0_RTRN_QUICK2"))
			{
				func_842(8, 0);
			}
			break;
		case 16:
			func_842(16, "RH0_RIDE_MOUNT3");
			break;
		case 32:
			if (func_393(vLocal_664[4 /*3*/], 1f))
			{
				func_838(func_835(32), 7500, 0, 0, -1, -1, 0);
			}
			break;
		case 64:
			func_842(64, "RH0_RTRN_QUICK1");
			break;
		case 128:
			func_842(128, "RH0_CRD_SCPE0");
			break;
		case 256:
			if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.1f)
			{
				func_844(256, vLocal_664[4 /*3*/], 7f, 1f);
			}
			break;
		case 512:
			break;
		case 2048:
			break;
		case 4096:
			break;
		case 16384:
			func_846(uParam0, func_835(16384), iLocal_262, 10, 1092616192);
			break;
		case 8192:
			if (!func_404(8192))
			{
				if (func_847(13))
				{
					if (!func_845("RH0_ARRIVE"))
					{
						func_838(func_835(8192), 7500, 0, 0, -1, -1, 0);
						func_837(8192);
					}
				}
			}
			break;
		default:
			break;
	}
}

int func_338(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_215(16777216))
	{
		return 1;
	}
	if (!func_848(iParam0))
	{
		return 0;
	}
	iVar0 = func_849(*iParam0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ATTRIBUTE::_0xC6258F41D86676E0(iVar0, 1, iParam1);
	}
	iVar1 = func_849(*iParam0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		ATTRIBUTE::_0xC6258F41D86676E0(iVar1, 1, iParam1);
	}
	func_216(16777216);
	return 1;
}

void func_339(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	func_299(uParam0, *(Local_64[iParam1 /*4*/]), *(Local_64[iParam2 /*4*/]), iParam1, iParam2, bParam3);
}

void func_340(int iParam0, int iParam1, bool bParam2)
{
	if (!func_850(iParam0))
	{
		return;
	}
	func_851(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

void func_341(int iParam0)
{
	int iVar0;

	if (func_212() == -1)
	{
		iVar0 = func_429();
		func_852(&iVar0, 0, 0, 0, 1, 0, 0);
		Global_40.f_9422[iParam0 /*7*/] = iVar0;
	}
}

void func_342(var uParam0)
{
	func_853(uParam0, func_191(11), func_192(11), func_193(11), "RHMRB_VOL_CRD_WILDLIFE_STAY_OUT");
	if (VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(*uParam0, 192, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(*uParam0, 192, 0, 0, -1, -1, 2);
	}
}

void func_343(var uParam0, int iParam1)
{
	uParam0->f_169 = iParam1;
}

int func_344(var uParam0)
{
	if (func_220(1, 8388608))
	{
		if ((func_220(1, 16777216) || !func_576(5)) || func_217(5))
		{
			func_854(0);
			return 1;
		}
	}
	else if (func_220(1, 33554432))
	{
		if ((func_220(1, 67108864) || !func_576(5)) || func_217(5))
		{
			func_854(0);
			return 1;
		}
	}
	else
	{
		func_854(1);
		return 1;
	}
	return 0;
}

void func_345(int iParam0, bool bParam1)
{
	if (!func_855(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_856(iParam0, 1);
	}
	else
	{
		func_857(iParam0, 1);
	}
	func_859(func_858(iParam0), bParam1);
}

bool func_346(int iParam0)
{
	return (iLocal_18 && iParam0) != 0;
}

void func_347(int iParam0)
{
	if (!func_346(iParam0))
	{
		return;
	}
	iLocal_18 = (iLocal_18 - (iLocal_18 && iParam0));
}

void func_348(int iParam0)
{
	iLocal_57 = iParam0;
}

int func_349()
{
	int iVar0;

	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 < 6 || iVar0 >= 21)
	{
		return 1;
	}
	return 0;
}

char* func_350(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "1-DayStart";
		case 1:
			return "MultiStart";
		case 2:
			return "1A-Day_Go_Now";
		case 3:
			return "1B-Day_Wait";
		case 4:
			return "2-NightStart";
		case 5:
			return "NormalStart";
		case 6:
			return "2A-Night_Go_Now";
		case 7:
			return "2B-Night_Wait";
		default:
			break;
	}
	return "INVALID_MCS2_PLAYLIST";
}

void func_351(var uParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (func_860(uParam0, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_366[iVar0 /*9*/]))
		{
			if (!func_861(uParam0, sParam1) || func_545(uParam0, 8388608))
			{
				StringCopy(uParam0->f_366[iVar0 /*9*/], sParam1, 64);
				if (!bParam2)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_348, 1, 0))
					{
						if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_348, sParam1))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_348, sParam1);
						}
					}
					else
					{
						func_626(uParam0, 4194304);
					}
				}
				else
				{
					func_626(uParam0, 4194304);
				}
				return;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
}

void func_352(var uParam0, int iParam1, int iParam2, var uParam3)
{
	if (iParam1 == *iParam2 && !func_404(4))
	{
		return;
	}
	func_834(4);
	if (iParam1 != 4)
	{
		*iParam2 = iParam1;
	}
	func_248(uParam3);
	func_836(uParam0, func_835(iParam1), 1, -1082130432, 0, 0, -1, -1, 0);
	switch (iParam1)
	{
		case 0:
			break;
		case 1:
			func_369(uLocal_244[1]);
			func_369(uLocal_244[0]);
			func_486(5);
			if (!MAP::DOES_BLIP_EXIST(&(uLocal_244[2])))
			{
				if (VOLUME::DOES_VOLUME_EXIST(&(iLocal_22[4])))
				{
					func_841(uLocal_244[2], &(iLocal_22[4]), 1247852480);
					MAP::_0xBD62D98799A3DAF0(&(uLocal_244[2]), 408396114);
				}
			}
			break;
		case 2:
			break;
		case 4:
			func_369(uLocal_244[4]);
			func_369(uLocal_244[5]);
			func_369(uLocal_244[6]);
			func_369(uLocal_244[1]);
			func_369(uLocal_244[0]);
			func_369(uLocal_244[2]);
			func_182(7);
			func_837(4);
			func_399(5);
			func_838(func_835(4), 7500, 0, 0, -1, -1, 0);
			break;
		case 8:
			func_369(uLocal_244[0]);
			func_369(uLocal_244[2]);
			func_486(5);
			if (!MAP::DOES_BLIP_EXIST(&(uLocal_244[1])))
			{
				func_862(iLocal_14, uLocal_244[1], 408396114, 580546400, 0, "RHMR0_BLIP_WAGON");
			}
			break;
		case 16:
			func_182(7);
			func_486(5);
			if (!MAP::DOES_BLIP_EXIST(&(uLocal_244[4])))
			{
				uLocal_244[4] = func_863(408396114, func_720(6), 11f, 1);
				if (MAP::DOES_BLIP_EXIST(&(uLocal_244[4])))
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(uLocal_244[4]), "RHMR0_BLIP_HOMESTEAD");
					MAP::_0x662D364ABF16DE2F(&(uLocal_244[4]), -1878373110);
				}
			}
			break;
		case 32:
			func_486(5);
			func_369(uLocal_244[4]);
			func_864(7);
			break;
		case 64:
			func_369(uLocal_244[1]);
			func_486(5);
			func_865(func_720(2), uLocal_244[0], 408396114, 0, "RHMR0_BLIP_EMERALD_RANCH", -1878373110);
			break;
		case 128:
			func_369(uLocal_244[4]);
			func_399(5);
			break;
		case 256:
			func_369(uLocal_244[1]);
			func_369(uLocal_244[0]);
			func_369(uLocal_244[2]);
			func_182(7);
			func_399(5);
			break;
		case 512:
			func_369(uLocal_244[4]);
			func_369(uLocal_244[1]);
			func_369(uLocal_244[5]);
			func_369(uLocal_244[6]);
			break;
		case 2048:
			break;
		case 4096:
			func_369(uLocal_244[4]);
			func_369(uLocal_244[6]);
			func_486(5);
			if (!MAP::DOES_BLIP_EXIST(&(uLocal_244[5])))
			{
				func_867(func_866(), 4f, uLocal_244[5], -1282792512);
			}
			break;
		case 8192:
			func_369(uLocal_244[5]);
			break;
		case 16384:
			func_399(5);
			break;
		case 32768:
			func_369(uLocal_244[0]);
			func_369(uLocal_244[1]);
			func_486(5);
			func_837(32768);
			break;
	}
}

void func_353(int iParam0, var uParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
	*uParam1 = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
	if (PED::DOES_GROUP_EXIST(*uParam1))
	{
		PED::SET_GROUP_FORMATION(*uParam1, 3);
		PED::_0x40C3524D4ED83554(*uParam1, 1);
		PED::_0x154B7E841AC7412F(*uParam1, 0);
		PED::_0xA8A95CECB1906EA2(*uParam1, 0);
		if (!PED::_0x878B68960C1C2A35(Global_35, *uParam1))
		{
			PED::SET_PED_AS_GROUP_LEADER(Global_35, *uParam1, 0);
		}
		if (!PED::IS_PED_GROUP_MEMBER(*iParam0, *uParam1, 0))
		{
			TASK::CLEAR_PED_TASKS(*iParam0, 1, 0);
			func_496(iParam0, 1, 50f);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 279, true);
			PED::SET_PED_AS_GROUP_MEMBER(*iParam0, *uParam1);
		}
	}
}

void func_354(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, 992265328, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1275885380, false);
	PAD::DISABLE_CONTROL_ACTION(0, 255439828, false);
	PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2131587435, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1046962283, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1912118204, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1301263553, false);
	PAD::DISABLE_CONTROL_ACTION(0, -39308912, false);
	PAD::DISABLE_CONTROL_ACTION(0, 2003789289, false);
	PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
	PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
	PAD::DISABLE_CONTROL_ACTION(0, 42190210, false);
	PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
	PAD::DISABLE_CONTROL_ACTION(0, -824104112, false);
	PAD::DISABLE_CONTROL_ACTION(0, 516589524, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1390807691, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1663574939, false);
	PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
	if (!*uParam0)
	{
		*uParam0 = 1;
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1, 0, -1, 0);
	}
}

void func_355(int iParam0)
{
	if (func_712(iParam0))
	{
		return;
	}
	iLocal_17 = (iLocal_17 || iParam0);
}

void func_356(int* iParam0, int iParam1, int* iParam2)
{
	func_868(iParam0);
	func_868((*iParam1)[0]);
	func_868((*iParam1)[1]);
	func_868(iParam2);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_binoculars01x"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cigarette01x"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cigarettebox01x"));
}

void func_357(char* sParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam0))
		{
			TASK::REMOVE_WAYPOINT_RECORDING(sParam0);
		}
	}
}

void func_358(int iParam0, int iParam1)
{
	if (!func_58(iParam0))
	{
		return;
	}
	func_869(iParam0, iParam1);
}

void func_359(int iParam0)
{
	if (func_870(iParam0))
	{
		return;
	}
	func_871(iParam0);
	switch (iParam0)
	{
		case 1:
			AUDIO::_0x2B9C37C01BF25EDB("ride_to_house");
			break;
		case 2:
			AUDIO::_0x2B9C37C01BF25EDB("approach_house");
			break;
		case 4:
			AUDIO::_0x2B9C37C01BF25EDB("infiltrate_house_day");
			break;
		case 8:
			AUDIO::_0x2B9C37C01BF25EDB("infiltrate_house_night");
			break;
		case 16:
			AUDIO::_0x2B9C37C01BF25EDB("get_stagecoach_day");
			break;
		case 32:
			AUDIO::_0x2B9C37C01BF25EDB("get_stagecoach_night");
			break;
		case 64:
			AUDIO::_0x2B9C37C01BF25EDB("ride_back");
			break;
		case 128:
			AUDIO::_0x2B9C37C01BF25EDB("enemies_alerted");
			break;
		case 256:
			AUDIO::_0x2B9C37C01BF25EDB("get_stagecoach_day");
			break;
		case 512:
			AUDIO::_0x2B9C37C01BF25EDB("get_stagecoach_night");
			break;
		case 1024:
			AUDIO::_0x2B9C37C01BF25EDB("ride_back");
			break;
	}
}

void func_360(var uParam0, var uParam1, var uParam2)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		func_542(uParam0, func_191(18), func_192(18), func_193(18), "RHMR0_GPS_ROAD_RESTRICTION_1");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
	{
		func_542(uParam1, func_191(14), func_192(14), func_193(14), "RHMR0_GPS_ROAD_RESTRICTION_2");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam2))
	{
		func_542(uParam2, func_191(19), func_192(19), func_193(19), "RHMR0_GPS_ROAD_RESTRICTION_3");
	}
}

void func_361(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_872(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

void func_362(int iParam0)
{
	iLocal_50 = iParam0;
}

void func_363(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4, bool bParam5)
{
	if ((bParam4 && !ENTITY::IS_ENTITY_DEAD(iParam1)) && func_873(5))
	{
		func_874(iParam1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 167, false);
		func_875(iParam1, 5, 1, 0, 0);
	}
	if (func_876(iParam0, 0, 1) && func_217(5))
	{
		if (func_877(5, 0))
		{
			func_878(5);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, !bParam2);
		func_518(5, 0, bParam5, 1, fParam3, bParam4, 1, 0, 0, 0, 0);
	}
}

void func_364()
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_262) || iLocal_48 > 6)
	{
		return;
	}
	switch (iLocal_57)
	{
		case 0:
			func_348(1);
			break;
		case 1:
			if ((func_721(*(Local_64[2 /*4*/]), 1) < 25f || func_721(*(Local_64[3 /*4*/]), 1) < 25f) || func_721(*(Local_64[4 /*4*/]), 1) < 25f)
			{
				func_348(3);
			}
			else if (func_80(vLocal_664[31 /*3*/]))
			{
				if (func_393(vLocal_664[31 /*3*/], 3f))
				{
					func_380(&uLocal_278, "RH0_RIDE_MOUNT1", iLocal_262, Global_35, 0, 0, 1, 1);
					func_348(2);
				}
			}
			else
			{
				func_277(vLocal_664[31 /*3*/]);
			}
			break;
		case 2:
			if (func_879(-3f, 1, 0, 0))
			{
				func_348(3);
			}
			break;
		case 3:
			break;
	}
}

int func_365(var uParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_262))
	{
		return 0;
	}
	if ((iLocal_48 >= 6 || CLOCK::GET_CLOCK_HOURS() == 5) || CLOCK::GET_CLOCK_HOURS() == 19)
	{
		CLOCK::PAUSE_CLOCK(true, 0);
	}
	if (iLocal_48 > 9)
	{
		func_880(&sLocal_636, iLocal_262);
		func_881(iLocal_262, 10f, 16, 1065353216);
	}
	if (func_712(512))
	{
		return func_882(uParam0);
	}
	else if (func_883(uParam0))
	{
		func_355(512);
	}
	return 0;
}

int func_366(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_215(1024))
	{
		return 1;
	}
	if (func_118() != 64)
	{
		return 0;
	}
	if (func_884(func_720(12), uParam0, 80f, 1))
	{
		iVar0 = 0f;
		iVar1 = 0f;
		if (bParam1)
		{
			iVar0 = 1f;
			iVar1 = -1f;
		}
		func_306(883522755, 0, iVar1, 0, 1, 0, 1, 0);
		func_306(1038094132, 0, iVar0, 0, 1, 0, 1, 0);
		func_216(1024);
		return 1;
	}
	return 0;
}

int func_367()
{
	if (func_712(131072))
	{
		return 1;
	}
	if ((ENTITY::IS_ENTITY_DEAD(iLocal_262) || func_400()) || func_885())
	{
		return 0;
	}
	if (func_215(268435456))
	{
		if (func_118() != 64)
		{
			func_886(268435456);
		}
		return 0;
	}
	if (func_118() == 64 && func_721(func_720(9), 1) < 30f)
	{
		func_355(131072);
		func_371(&iLocal_262, 167, 0);
		return 1;
	}
	return 0;
}

bool func_368()
{
	return func_220(1, 128);
}

void func_369(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_370(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		PED::_0x89F5E7ADECCCB49C(*iParam0, "Stealth");
	}
	else
	{
		PED::_0x58F7DB5BD8FA2288(*iParam0);
	}
}

void func_371(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(*iParam0, iParam1, bParam2);
	}
}

void func_372(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
		{
			func_542(uParam0, func_191(6), func_192(6), func_193(6), "RHMR0_ROAD_RESTRICTION");
		}
		if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			func_542(uParam1, func_191(7), func_192(7), func_193(7), "RHMR0_ROAD_RESTRICTION_B");
		}
		if (!VOLUME::DOES_VOLUME_EXIST(*uParam2))
		{
			func_542(uParam2, func_191(8), func_192(8), func_193(8), "RHMR0_ROAD_RESTRICTION_C");
		}
		if ((VOLUME::DOES_VOLUME_EXIST(*uParam0) && VOLUME::DOES_VOLUME_EXIST(*uParam1)) && VOLUME::DOES_VOLUME_EXIST(*uParam2))
		{
			PATHFIND::_0xC1799FAFD2FDF52B(*uParam0, 0, 0, 0);
			PATHFIND::_0xC1799FAFD2FDF52B(*uParam1, 0, 0, 0);
			PATHFIND::_0xC1799FAFD2FDF52B(*uParam2, 0, 0, 0);
			func_216(16);
			if (bParam4)
			{
				func_744(func_191(6), 100f, 0, 0, 0, 0, 0);
				func_887(func_191(6), 100f, 0);
				func_744(func_191(7), 100f, 0, 0, 0, 0, 0);
				func_887(func_191(7), 100f, 0);
				func_744(func_191(8), 100f, 0, 0, 0, 0, 0);
				func_887(func_191(8), 100f, 0);
			}
		}
	}
	else
	{
		if (VOLUME::DOES_VOLUME_EXIST(*uParam0))
		{
			PATHFIND::RESET_ROADS_IN_VOLUME(*uParam0, 0);
		}
		if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			PATHFIND::RESET_ROADS_IN_VOLUME(*uParam1, 0);
		}
		if (VOLUME::DOES_VOLUME_EXIST(*uParam2))
		{
			PATHFIND::RESET_ROADS_IN_VOLUME(*uParam2, 0);
		}
		func_886(16);
	}
}

void func_373(var uParam0, int iParam1)
{
	func_261(uParam0, func_350(iParam1));
	iLocal_520 = iParam1;
}

void func_374()
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	HUD::_0x160825DADF1B04B3();
	func_888();
}

void func_375()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32769)
	{
		func_834(iVar0);
		iVar0++;
	}
}

void func_376(char* sParam0)
{
	if (CAM::_0x927B810E43E99932(sParam0))
	{
		CAM::_0x0A5A4F1979ABB40E(sParam0);
	}
	CAM::_0x798BE43C9393632B(sParam0);
}

void func_377(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_378(bool bParam0)
{
	if (bParam0)
	{
		PED::_0x437C08DB4FEBE2BD(Global_35, "Cautious", 1f, -1);
	}
	else
	{
		PED::_0x411189E51B8020BA(Global_35, "Cautious");
	}
}

float func_379(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_889(Global_35, iParam0, bParam1, iParam2);
}

int func_380(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	vector3 vVar0[24];
	bool bVar3;

	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam2) && (func_889(iParam2, iParam3, 1, 1) < 70f || iParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			TASK::TASK_LOOK_AT_ENTITY(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_889(iParam2, iParam3, 1, 1) < 25f)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			bVar3 = true;
		}
		func_277(&uLocal_0);
		if (AUDIO::_0xD89504D9D7D5057D(sParam1))
		{
			if (func_890(sParam1))
			{
				return 1;
			}
		}
		else if (func_891(uParam0, cVar0, bVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_381(int iParam0)
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0)) && PED::IS_PED_IN_GROUP(iParam0))
	{
		PED::REMOVE_PED_FROM_GROUP(iParam0);
	}
}

void func_382(var uParam0)
{
	if (func_387())
	{
		if (func_885())
		{
			if (func_892())
			{
				func_359(256);
			}
			else
			{
				func_359(16);
			}
		}
		else if (func_892())
		{
			func_359(512);
		}
		else
		{
			func_359(32);
		}
	}
	if (func_893())
	{
		func_359(64);
	}
	else
	{
		func_894(uParam0);
	}
	func_403(iLocal_22[18], uLocal_255[0], 1);
	func_403(iLocal_22[14], uLocal_255[1], 1);
	func_403(iLocal_22[19], uLocal_255[2], 1);
	func_895(uParam0, uLocal_244[0], &iLocal_401, vLocal_664[4 /*3*/]);
	if (!func_896(8))
	{
		if (func_893())
		{
			if (iLocal_401 == 64)
			{
				if (func_393(vLocal_664[16 /*3*/], 1f))
				{
					func_897();
					func_898(8);
				}
				else if (!func_80(vLocal_664[16 /*3*/]))
				{
					func_277(vLocal_664[16 /*3*/]);
				}
			}
		}
	}
	CLOCK::PAUSE_CLOCK(true, 0);
	func_366(&uLocal_515, 0);
	if ((!func_215(1073741824) && !func_215(-2147483648)) && func_893())
	{
		func_216(1073741824);
		func_339(uParam0, 7, 8, 0);
	}
}

int func_383(int iParam0)
{
	if (func_220(1, 8) && func_217(5))
	{
		func_196(1, 4);
		PED::SET_PED_KEEP_TASK(iParam0, true);
		func_363(iParam0, 0, 0, 1092616192, 0, 0);
		return 1;
	}
	return 0;
}

void func_384(var uParam0)
{
	func_382(uParam0);
	if (func_400())
	{
		func_359(8);
		func_358(((*Global_1347702)[94 /*49*/])->f_15, 1);
		func_339(uParam0, 5, 7, 0);
	}
	else
	{
		func_359(4);
		func_358(((*Global_1347702)[94 /*49*/])->f_15, 0);
		func_339(uParam0, 6, 7, 0);
	}
	func_360(iLocal_22[18], iLocal_22[14], iLocal_22[19]);
	func_356(&iLocal_270, &iLocal_266, &iLocal_269);
	func_357(func_203());
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0, 0, -1, 0);
	func_495(&iLocal_264, 1);
	func_496(&iLocal_262, 0, 1065353216);
	func_486(5);
}

void func_385()
{
	if (SCRIPTS::_0x7409669C5ED50144(-1685745852))
	{
	}
	else
	{
		SCRIPTS::ACTIVATE_GOAL_CONTEXT(-1685745852);
	}
}

void func_386(var uParam0)
{
	if (func_896(4))
	{
		return;
	}
	if (func_899())
	{
		func_900(uParam0, -842173631);
		func_898(4);
	}
}

bool func_387()
{
	return func_901(1, 4096);
}

bool func_388()
{
	return func_220(1, 4194304);
}

bool func_389()
{
	return func_220(1, 2097152);
}

bool func_390()
{
	return func_901(1, 1024);
}

bool func_391()
{
	return func_901(1, 8192);
}

int func_392(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_902(iVar0) || func_903(iVar0))
				{
					return 0;
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_393(var uParam0, float fParam1)
{
	if (func_579(uParam0, fParam1))
	{
		func_248(uParam0);
		return 1;
	}
	return 0;
}

void func_394(var uParam0)
{
	if (func_896(2))
	{
		return;
	}
	if (func_904())
	{
		func_905(uParam0, 949578439);
		func_898(2);
		return;
	}
	if (func_388())
	{
		func_905(uParam0, 949578439);
		func_898(2);
		return;
	}
	if (func_389())
	{
		func_905(uParam0, 949578439);
		func_898(2);
	}
}

int func_395()
{
	if ((func_505() || func_906()) && (func_907() || func_908()))
	{
		return 1;
	}
	return 0;
}

void func_396()
{
	if (!func_395())
	{
		return;
	}
	if (func_80(vLocal_664[32 /*3*/]))
	{
		if (func_783(vLocal_664[32 /*3*/]) < 5f)
		{
			return;
		}
	}
	else
	{
		func_277(vLocal_664[32 /*3*/]);
		return;
	}
	if (PED::_0xB7DBB2986B87E230(iLocal_262, 0.25f))
	{
		if (!func_407(64))
		{
			func_668(0);
			func_380(&uLocal_278, "RH0_NGT_NOISE1", iLocal_262, Global_35, 0, 0, 1, 1);
			func_277(vLocal_664[32 /*3*/]);
			func_909(64);
		}
		else if (!func_407(128))
		{
			func_668(0);
			func_380(&uLocal_278, "RH0_NGT_NOISE2", iLocal_262, Global_35, 0, 0, 1, 1);
			func_277(vLocal_664[32 /*3*/]);
			func_909(128);
		}
		else if (!func_407(256))
		{
			func_668(0);
			func_380(&uLocal_278, "RH0_NGT_NOISE3", iLocal_262, Global_35, 0, 0, 1, 1);
			func_277(vLocal_664[32 /*3*/]);
			func_909(256);
		}
	}
}

int func_397(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				return PED::IS_PED_IN_VEHICLE(iParam0, iParam1, bParam2);
			}
		}
	}
	return 0;
}

int func_398(int iParam0, vector3 vParam1, int iParam4)
{
	if (func_220(1, 16))
	{
		if (!func_576(