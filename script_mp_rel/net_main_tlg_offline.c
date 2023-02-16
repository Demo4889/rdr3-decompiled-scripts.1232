#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	char* sLocal_30 = NULL;
	char* sLocal_31 = NULL;
	var uLocal_32 = 4;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	struct<8> Local_38[3];
	vector3 vLocal_63 = { 0f, 0f, 0f };
	var uLocal_66 = 21;
	var uLocal_67 = 0;
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
	var uLocal_88 = -1;
	var uLocal_89 = 20;
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
	var uLocal_109 = 0;
	var uLocal_110 = 20;
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
	var uLocal_134 = 43;
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
	var uLocal_154 = 0;
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
	var uLocal_178 = 43;
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
	var uLocal_199 = 0;
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
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
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
	var uLocal_308 = 43;
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
	var uLocal_352 = 43;
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
	var uLocal_395 = 0;
	var uLocal_396 = -1;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = -1;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = -1;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = -1;
	var uLocal_410 = 0;
	var uLocal_411 = 43;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
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
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = -1;
#endregion

void __EntryFunction__()
{
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	sLocal_30 = "props_misc@campfires@5_logs";
	sLocal_31 = "Script_PropCampfire";
	iLocal_37 = 675980447;
	BUILTIN::_SET_THREAD_PRIORITY(0);
	func_1("START THEAD");
	func_2(&uLocal_66);
	Global_1572887->f_11 = 1;
	Global_1099293->f_17 = LOCALIZATION::_LOCALIZATION_GET_SYSTEM_LANGUAGE();
	func_3(Global_1273882);
	while (!func_4(1, 1))
	{
		if (!Global_1572887->f_8)
		{
			Global_1572887->f_8 = func_5(-1);
		}
		func_6();
		func_7();
		func_8();
		func_9();
		func_10();
		func_11(Global_1273882);
		func_12(Global_1273882);
		func_13(&uLocal_66);
		func_14();
		func_15();
		func_16();
		func_17();
		func_18();
		func_19();
		func_20();
		func_21();
		func_22();
		func_23();
		func_24();
		func_25();
		func_26();
		func_27(Global_1273882);
		func_28(Global_1273882);
		func_29(Global_1273882);
		func_30(Global_1273882);
		func_31(&uLocal_88);
		func_32();
		switch (Global_1051165->f_34)
		{
			case 0:
				func_33();
				Global_1051165->f_34 = 1;
				break;
			case 1:
				func_34();
				Global_1051165->f_34 = 0;
				break;
		}
		switch (Global_1051165->f_35)
		{
			case 0:
				func_35();
				func_36();
				func_37();
				func_38();
				func_39();
				Global_1051165->f_35 = 1;
				break;
			case 1:
				func_40();
				func_41();
				func_42();
				func_43();
				Global_1051165->f_35 = 2;
				break;
			case 2:
				func_44();
				func_45();
				func_46(&(Global_17173.f_2954));
				func_47();
				func_48();
				func_49();
				func_50();
				Global_1051165->f_35 = 3;
				break;
			case 3:
				func_51();
				func_52();
				Global_1051165->f_35 = 0;
				break;
		}
		func_53();
		BUILTIN::WAIT(0);
	}
	func_54(&uLocal_88);
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(char* sParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::_GET_SYSTEM_TIME();
	iVar1 = MISC::GET_FRAME_COUNT();
	Global_1572887->f_2 = MISC::GET_FRAME_COUNT();
	Global_1572887->f_3 = MISC::_GET_SYSTEM_TIME();
}

void func_2(var uParam0)
{
	func_1("NET_MAIN_OFFLINE__PROCESS_PRE_GAME - START");
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::_0xB711EB4BC8D06013();
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_55(uParam0);
	func_1("MP_MAIN_OFFLINE__INITIALIZE_GAME");
	func_56();
	func_1("MP_MAIN_OFFLINE__INITIALIZE_FLOW");
	func_57();
	func_1("MP_MAIN_OFFLINE__INITIALIZE_PLAYER");
	func_58();
	func_1("MP_MAIN_OFFLINE__INITIALIZE_FREE_MODE_SYSTEMS");
	func_59(128);
	func_59(64);
	func_59(256);
	Global_40 = 1;
	if (Global_1572887->f_4 || func_60())
	{
		func_61(16384);
	}
	else
	{
		func_62(16384);
	}
	Global_1051165->f_35 = 0;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_1("NET_MAIN_OFFLINE__PROCESS_PRE_GAME - END");
}

void func_3(var uParam0)
{
	struct<188> Var0;

	Var0.f_22 = 32;
	Var0.f_55 = 32;
	Var0.f_88 = 32;
	Var0.f_121 = 32;
	Var0.f_154 = 32;
	*uParam0 = { Var0 };
}

int func_4(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887->f_12)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::NETWORK_SESSION_IS_TRANSITIONING())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && &Global_1572887 < 39)
		{
		}
		else
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::GET_THREAD_EXIT_REASON())
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 2:
				if (!bParam0)
				{
					return 1;
				}
				break;
			case 4:
				return 1;
			case 3:
				return 1;
			default:
				return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_5(int iParam0)
{
	bool bVar0;

	if (!func_63())
	{
		return 0;
	}
	bVar0 = false;
	if (iParam0 != -1 && &Global_1901929 == -1)
	{
		bVar0 = true;
		Global_1901929 = iParam0;
	}
	if (!func_64())
	{
		return 1;
	}
	switch (&Global_1901929)
	{
		case 1:
			func_65();
			func_66(188);
			break;
		case 0:
			func_67();
			func_68(188);
			func_69();
			func_70(188);
			break;
		case 2:
			func_71();
			func_72(188);
			break;
		case 3:
			func_73();
			func_74(188);
			break;
		case 4:
			func_75();
			func_76(188);
			break;
		case 5:
			func_77();
			func_78(188);
			break;
		case 6:
			func_79();
			func_80(188);
			break;
		case 7:
			func_81();
			func_82(188);
			break;
		case 8:
			func_83();
			func_84(188);
			break;
		case 9:
			func_85();
			func_86(188);
			break;
		case 10:
			func_87();
			func_88(188);
			func_89();
			func_90(188);
			func_91();
			func_92(188);
			func_93();
			func_94(188);
			func_95();
			func_96(188);
			break;
		case 11:
			func_97();
			func_98(26);
			func_98(188);
			break;
		case 12:
			func_99();
			func_100(188);
			break;
		case 13:
			func_101();
			break;
		case 14:
			func_102();
			func_103(188);
			break;
		case 15:
			func_104();
			break;
		case 16:
			func_105();
			func_106(188);
			break;
		case 17:
			func_107();
			func_108(225);
			break;
		case 18:
			func_109();
			return 1;
	}
	if (bVar0)
	{
		func_109();
		return 1;
	}
	Global_1901929 = &Global_1901929 + 1;
	return 0;
}

void func_6()
{
	if (!Global_1070355->f_3)
	{
		Global_1051202->f_36 = 0;
		return;
	}
	if (Global_1051202->f_12 != 0)
	{
		Global_1051202->f_36 = 0;
		return;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;

	func_110();
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case -1482146560:
				func_111(iVar0);
				break;
			case 1697477512:
				func_112(iVar0);
				break;
			case -2001102517:
				break;
			case -437497832:
				func_113(iVar0);
				break;
			case -507840394:
				func_114(iVar0);
				break;
			case 1793200955:
				func_115(iVar0);
				break;
			case 1342634267:
				func_116(iVar0);
				break;
			case 1626145032:
				func_117(iVar0);
				break;
			case 557673123:
				func_118(iVar0);
				break;
			case -1315570756:
				func_119(iVar0);
				break;
			case 676208328:
				func_120(iVar0);
				break;
			case -1171710795:
				func_121(iVar0);
				break;
			case 1832265142:
				func_122(iVar0);
				break;
			case -1500256914:
				func_123(iVar0);
				break;
			case -97516606:
				func_124(iVar0);
				break;
			case -2117667982:
				func_125(iVar0);
				break;
			case -1065733433:
				func_126(iVar0);
				break;
			case -919500771:
				func_127(iVar0);
				break;
			case -648745775:
				func_128(iVar0);
				break;
			case 678947301:
				func_129(iVar0);
				break;
			case 2013393302:
				func_130(iVar0);
				break;
			case 586277309:
				func_131();
				break;
			case -2119801478:
				func_132();
				break;
			case 1694142010:
				func_133(iVar0);
				break;
			case 2058130545:
				func_134(iVar0);
				break;
			case 453501714:
				func_135(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_8()
{
	switch (Global_1572887->f_106.f_79)
	{
		case 0:
			func_136();
			break;
		case 1:
			func_137();
			break;
		case 2:
			func_138();
			break;
		case 3:
			func_139();
			break;
		case 4:
			func_140();
			break;
	}
	switch (Global_1572887->f_106.f_75)
	{
		case 0:
			func_141();
			break;
		case 1:
			func_142();
			break;
		case 2:
			func_143();
			break;
		case 3:
			func_144();
			break;
		case 4:
			func_145();
			break;
		case 5:
			func_146();
			break;
		case 6:
			func_147();
			break;
		case 7:
			func_148();
			break;
		case 8:
			func_149();
			break;
		case 9:
			func_150();
			break;
		case 10:
			func_151();
			break;
		case 11:
			func_152();
			break;
		case 12:
			func_153();
			break;
		case 13:
			func_154();
			break;
		case 14:
			func_155();
			break;
		case 15:
			func_156();
			break;
		case 16:
			func_157();
			break;
		case 17:
			func_158();
			break;
		case 18:
			func_159();
			break;
		case 19:
			func_160();
			break;
		case 20:
			func_161();
			break;
		case 21:
			func_162();
			break;
	}
}

void func_9()
{
	if (func_163() != 0)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
	switch (func_163())
	{
		case 0:
			break;
		case 1:
			func_164(2);
			break;
		case 2:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				return;
			}
			func_165(0, 0, 0, 0);
			if (func_166())
			{
				if (func_168(func_167()))
				{
					func_169(func_167());
				}
			}
			else
			{
				func_170();
			}
			func_164(3);
			break;
		case 3:
			if (!func_171(&(Global_1572887->f_22.f_2)))
			{
				return;
			}
			func_164(0);
			break;
	}
}

int func_10()
{
	int iVar0;
	int iVar1;

	func_172();
	func_173();
	if (!func_174(255))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Global_1273882->f_8))
		{
			ENTITY::SET_ENTITY_VISIBLE(Global_1273882->f_8, false);
		}
	}
	Global_1099293->f_10 = Global_1893575->f_2;
	Global_1099293->f_11 = Global_1896610->f_41;
	iVar1 = func_175();
	if (iVar1 != 1)
	{
		NETWORK::_0x236905C700FDB54D();
	}
	else if (SCRIPTS::_IS_LOADING_SCREEN_ACTIVE())
	{
		NETWORK::_0x236905C700FDB54D();
	}
	else if (func_176(255))
	{
		NETWORK::_0x236905C700FDB54D();
	}
	else if (func_177())
	{
		NETWORK::_0x236905C700FDB54D();
	}
	else if (func_178())
	{
		NETWORK::_0x236905C700FDB54D();
	}
	else if (func_179())
	{
		NETWORK::_0x236905C700FDB54D();
	}
	else if (func_180())
	{
		NETWORK::_0x236905C700FDB54D();
	}
	else if (func_181())
	{
		NETWORK::_0x236905C700FDB54D();
	}
	func_182();
	switch (iVar1)
	{
		case 0:
			iVar0 = func_183();
			break;
		case 1:
			iVar0 = func_184();
			break;
		case 2:
			iVar0 = func_185();
			break;
		case 3:
			iVar0 = func_186();
			break;
		case 4:
			iVar0 = func_187();
			break;
		case 5:
			iVar0 = func_188();
			break;
	}
	func_189();
	Global_1273882->f_88[&Global_1273882] = PLAYER::IS_PLAYER_DEAD(Global_1273882->f_10);
	Global_1273882->f_121[&Global_1273882] = PLAYER::IS_PLAYER_PLAYING(Global_1273882->f_10);
	func_190();
	func_191();
	func_192();
	func_193();
	func_194();
	func_195();
	func_196();
	func_197();
	func_198();
	func_199();
	func_200();
	func_201();
	switch (iVar1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			if (iVar0 != iVar1)
			{
				func_202(iVar0);
			}
			break;
		default:
			return 0;
	}
	func_189();
	if (Global_1070355->f_4)
	{
		*((*Global_1097609)[&Global_1273882 /*51*/]) = { *Global_1099293 };
		((*Global_1097609)[&Global_1273882 /*51*/])->f_45 = Global_17173.f_2619;
		((*Global_1097609)[&Global_1273882 /*51*/])->f_46 = Global_1131373->f_6289.f_11;
		((*Global_1097609)[&Global_1273882 /*51*/])->f_47 = Global_17173.f_2622;
		((*Global_1097609)[&Global_1273882 /*51*/])->f_48 = Global_17173.f_2619.f_2;
		((*Global_1097609)[&Global_1273882 /*51*/])->f_50 = Global_1131373->f_6289.f_97;
	}
	return 1;
}

void func_11(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Global_1184370->f_289);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (DECORATOR::DECOR_EXIST_ON(iVar1, func_203()))
			{
				((*Global_1184370)[Global_1184370->f_289 /*9*/])->f_7 = DECORATOR::DECOR_GET_INT(iVar1, func_203());
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar1, func_204()))
			{
				((*Global_1184370)[Global_1184370->f_289 /*9*/])->f_8 = DECORATOR::_DECOR_GET_UINT8(iVar1, func_204());
			}
		}
	}
	if (uParam0->f_11 && !uParam0->f_12)
	{
		if (!DECORATOR::DECOR_SET_INT(uParam0->f_8, func_203(), Global_1184370->f_290.f_7))
		{
		}
	}
	Global_1184370->f_289++;
	Global_1184370->f_289 = (Global_1184370->f_289 % 32);
}

void func_12(var uParam0)
{
	if (func_205(255))
	{
		return;
	}
	if (!Global_1572887->f_9)
	{
		func_206();
	}
	if (!Global_1070355->f_3)
	{
		return;
	}
	((*Global_1137800)[*uParam0 /*34*/])->f_8 = { Global_1131373->f_4641.f_704 };
	((*Global_1137800)[*uParam0 /*34*/])->f_10 = { func_207() };
	((*Global_1137800)[*uParam0 /*34*/])->f_23 = { Global_1131373->f_5509 };
	((*Global_1137800)[*uParam0 /*34*/])->f_33 = Global_1131373->f_5508;
	func_208();
	func_209();
	func_210();
	func_211();
	func_212();
}

void func_13(var uParam0)
{
	func_213();
	func_214();
	func_215();
	func_216();
	func_217();
	func_218();
	func_219();
	func_220();
	func_221();
	func_222(uParam0);
}

void func_14()
{
	func_223();
	func_224();
	func_225();
	func_226();
	func_227();
}

void func_15()
{
	func_228();
	func_229();
}

void func_16()
{
	switch (&Global_1268935)
	{
		case 0:
			func_230();
			break;
		case 1:
			func_231();
			break;
		case 2:
			func_232();
			break;
		case 3:
			func_233();
			break;
		case 4:
			break;
	}
}

void func_17()
{
	int iVar0;
	struct<31> Var1;

	if (func_234(4))
	{
		func_235(0);
	}
	func_236();
	iVar0 = 0;
	switch (Global_1572887->f_342.f_3)
	{
		case 0:
			if (Global_1572887->f_342.f_4 == 0)
			{
				return;
			}
			if (func_237())
			{
				return;
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_1572887->f_342.f_26 = 2;
				func_238(5);
				return;
			}
			if (func_239())
			{
				return;
			}
			Global_1572887->f_342.f_24 = -1;
			Global_1572887->f_342.f_26 = 0;
			if (((((Global_1572887->f_342.f_25 && !NETWORK::NETWORK_SESSION_IS_TRANSITIONING()) && !NETWORK::_0x9E762A595CF88E4A(0)) && !NETWORK::_0x9E762A595CF88E4A(1)) && !NETWORK::_0x9E762A595CF88E4A(2)) && !NETWORK::_0x9E762A595CF88E4A(3))
			{
				NETWORK::_NETWORK_SESSION_LEAVE();
			}
			if (!NETWORK::_0x2F54B146D3EDCE4D(&(Global_1572887->f_342)))
			{
				if (Global_1572887->f_342.f_4 == 1)
				{
					NETWORK::_0x309BBEBEA8A3986C(Global_1572887->f_342.f_5, Global_1572887->f_342.f_12, Global_1572887->f_342.f_20, iVar0, &(Global_1572887->f_342));
				}
				else if (Global_1572887->f_342.f_4 == 2)
				{
					NETWORK::_0x04019AE4956D4393(Global_1572887->f_342.f_5, Global_1572887->f_342.f_6, &(Global_1572887->f_342));
				}
				else if (Global_1572887->f_342.f_4 == 4)
				{
					Global_1572887->f_342.f_23 = MISC::GET_GAME_TIMER();
					NETWORK::_0x39A8EF7AF29A192C(Global_1572887->f_342.f_5, Global_1572887->f_342.f_21, iVar0, &(Global_1572887->f_342));
				}
				else if (Global_1572887->f_342.f_4 == 3)
				{
					NETWORK::_0x2989E131FDE37E97(Global_1572887->f_342.f_5, Global_1572887->f_342.f_6, Global_1572887->f_342.f_20, &(Global_1572887->f_342));
				}
				else if (Global_1572887->f_342.f_4 == 5)
				{
					NETWORK::_0x23D9C1F2E4098EDC(Global_1572887->f_342.f_5, Global_1572887->f_342.f_9, &(Global_1572887->f_342.f_10), Global_1572887->f_342.f_20, &(Global_1572887->f_342));
				}
			}
			if (!NETWORK::_0x2F54B146D3EDCE4D(&(Global_1572887->f_342)))
			{
				if (Global_1572887->f_342.f_22 == -1)
				{
					Global_1572887->f_342.f_22 = MISC::GET_GAME_TIMER();
				}
				else if ((MISC::GET_GAME_TIMER() - Global_1572887->f_342.f_22) > Global_1901929->f_1.f_6)
				{
					func_240(24, -1);
					Global_1572887->f_342.f_26 = 2;
					func_238(5);
				}
				return;
			}
			if (func_241())
			{
				if ((MISC::GET_GAME_TIMER() - Global_1572887->f_342.f_22) > Global_1901929->f_1.f_5 || NETWORK::_0xECE6A0C1B59CD8BE(&(Global_1572887->f_342)))
				{
					Global_1572887->f_342.f_26 = 2;
					func_238(5);
				}
				return;
			}
			func_242();
			func_243();
			func_244();
			Global_1572887->f_342.f_22 = MISC::GET_GAME_TIMER();
			if (Global_1572887->f_342.f_23 != -1 && (MISC::GET_GAME_TIMER() - Global_1572887->f_342.f_23) < Global_1901929->f_1.f_9)
			{
				return;
			}
			Global_1572887->f_342.f_23 = -1;
			if (func_245(Global_1572887->f_342.f_5, 1))
			{
				func_238(3);
			}
			else
			{
				func_238(1);
			}
			break;
		case 1:
			func_244();
			if (NETWORK::_0xCCF878D50F8AB10D(&(Global_1572887->f_342)))
			{
				Global_1572887->f_342.f_22 = MISC::GET_GAME_TIMER();
				func_238(2);
			}
			else if (!NETWORK::_0x8FB7C254CFCBF78E(&(Global_1572887->f_342)))
			{
				Global_1572887->f_342.f_7 = NETWORK::_0x0DD051B1BF4B8BD6(&(Global_1572887->f_342));
				if (Global_1572887->f_342.f_7 == 8 && Global_1572887->f_342.f_4 == 2)
				{
					func_240(29, -1);
				}
				func_238(5);
			}
			else if (Global_1572887->f_342.f_4 != 5 && (MISC::GET_GAME_TIMER() - Global_1572887->f_342.f_22) > Global_1901929->f_1.f_5)
			{
				Global_1572887->f_342.f_26 = 2;
				func_238(5);
			}
			else if (NETWORK::_0xECE6A0C1B59CD8BE(&(Global_1572887->f_342)))
			{
				Global_1572887->f_342.f_26 = 2;
				func_238(5);
			}
			break;
		case 2:
			func_244();
			if (!func_246())
			{
				return;
			}
			if (NETWORK::_0xF20B18A330E6DB5C(&(Global_1572887->f_342)))
			{
				func_238(3);
				Global_1572887->f_342.f_22 = MISC::GET_GAME_TIMER();
			}
			else
			{
				Global_1572887->f_342.f_26 = 2;
				func_238(5);
			}
			break;
		case 3:
			func_244();
			if (NETWORK::_0x8FB7C254CFCBF78E(&(Global_1572887->f_342)) && (MISC::GET_GAME_TIMER() - Global_1572887->f_342.f_22) < Global_1901929->f_1.f_5)
			{
				return;
			}
			Global_1572887->f_342.f_7 = NETWORK::_0x0DD051B1BF4B8BD6(&(Global_1572887->f_342));
			if (Global_1572887->f_342.f_7 == 7)
			{
				Global_1572887->f_342.f_22 = MISC::GET_GAME_TIMER();
				func_238(4);
			}
			else
			{
				Global_1572887->f_342.f_26 = 2;
				func_238(5);
			}
			break;
		case 4:
			if ((MISC::GET_GAME_TIMER() - Global_1572887->f_342.f_22) > Global_1901929->f_1.f_5)
			{
				Global_1572887->f_342.f_26 = 2;
			}
			if (NETWORK::_0x0F44A5C78D114922(&(Global_1572887->f_342)))
			{
				Global_1572887->f_342.f_26 = 1;
			}
			if (Global_1572887->f_342.f_26 != 0)
			{
				func_238(5);
			}
			break;
		case 5:
			Var1.f_5 = 2;
			Var1.f_22 = -1;
			Var1.f_23 = -1;
			Var1.f_24 = -1;
			Var1.f_29 = -1;
			Var1.f_26 = Global_1572887->f_342.f_26;
			Global_1572887->f_342 = { Var1 };
			func_238(0);
			break;
	}
}

void func_18()
{
	if (!&Global_1051089)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(Global_1051089->f_1, -1, 1, 0))
	{
		return;
	}
	switch (Global_1051089->f_2)
	{
		case 0:
			func_247(Global_1051089->f_3, Global_1051089->f_6, Global_1051089->f_4);
			if ((func_245(Global_1051089->f_6, 128) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID())) && !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
			{
				func_248(1);
			}
			break;
		case 1:
			func_249(Global_1051089->f_3, Global_1051089->f_5, Global_1051089->f_6, Global_1051089->f_4);
			break;
		case 2:
			func_250(1);
			break;
		case 3:
			break;
	}
	func_251(32);
	func_252();
}

void func_19()
{
	switch (&Global_1180694)
	{
		case 0:
			if (Global_1572887->f_373.f_10)
			{
				func_253(1);
			}
			else if (POSSE::_0xC086FF658B2E51DB())
			{
				func_253(1);
			}
			break;
		case 1:
			if (func_254())
			{
				func_255();
				func_256();
				func_257();
				if (func_258(joaat("NEW_GAME")))
				{
					func_253(2);
				}
				else
				{
					func_253(3);
				}
			}
			break;
		case 2:
			if (func_259())
			{
				func_260();
				func_253(3);
			}
			break;
		case 3:
			func_261();
			break;
	}
}

void func_20()
{
	func_262();
	switch (&Global_1181794)
	{
		case 0:
			if (func_263())
			{
				func_264(2);
			}
			else
			{
				func_264(1);
			}
			break;
		case 1:
			if (func_265() && func_263())
			{
				func_266(2);
				func_264(2);
			}
			break;
		case 2:
			if (func_263())
			{
				if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
				{
					func_267(2);
				}
				func_268();
				func_264(3);
			}
			else
			{
				func_264(1);
			}
			break;
		case 3:
			if (func_263())
			{
				func_269();
			}
			else
			{
				func_264(1);
			}
			break;
	}
}

void func_21()
{
	switch (Global_1070355->f_27244)
	{
		case 0:
			if (Global_1070355->f_27244.f_2 & 1 == 0)
			{
				return;
			}
			func_270(&(Global_1070355->f_27244.f_2), 1);
			func_271(1);
			break;
		case 1:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				return;
			}
			NETWORK::NETWORK_START_SOLO_TUTORIAL_SESSION();
			func_271(2);
			break;
		case 2:
			if (!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return;
			}
			func_271(3);
			break;
		case 3:
			if (Global_1070355->f_27244.f_2 & 2 == 0)
			{
				return;
			}
			func_270(&(Global_1070355->f_27244.f_2), 2);
			func_271(4);
			break;
		case 4:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				return;
			}
			Global_1070355->f_27244.f_1 = 0;
			NETWORK::NETWORK_END_TUTORIAL_SESSION();
			func_271(5);
			break;
		case 5:
			if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return;
			}
			func_271(0);
			break;
	}
}

void func_22()
{
	func_272();
	func_273();
	switch (&Global_1275329)
	{
		case 0:
			HUD::TEXT_BLOCK_REQUEST("MSMN");
			func_274();
			func_275();
			Global_1275329 = 1;
			break;
		case 1:
			if (func_276(&(Global_1275329->f_55)))
			{
				func_277(1);
				HUD::_0xF1622CE88A1946FB();
			}
			func_278();
			func_279();
			func_282(func_281(func_280(), 1));
			func_283();
			func_284();
			func_285();
			func_286();
			func_287();
			func_288();
			break;
	}
}

void func_23()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (Global_1572887->f_9)
	{
		return;
	}
	iVar1 = (Global_1070355->f_19683 + Global_1901929->f_93.f_23);
	iVar2 = func_289();
	bVar3 = !func_290();
	if (Global_1099293->f_1 != 4)
	{
		DECORATOR::DECOR_SET_INT(Global_1273882->f_8, func_291(), (Global_1070355->f_19683.f_1[&Global_1273882 /*8*/])->f_7);
		DECORATOR::DECOR_SET_INT(Global_1273882->f_8, func_292(), Global_1070355->f_19946.f_257);
		DECORATOR::DECOR_SET_INT(Global_1273882->f_8, func_293(), Global_1070355->f_20209.f_581);
		DECORATOR::DECOR_SET_INT(Global_1273882->f_8, func_294(), Global_1070355->f_20209.f_582);
	}
	func_295(&(Global_1070355->f_26843), &(Global_17173.f_54.f_2480));
	func_296(bVar3);
	func_297(bVar3);
	func_298(&bVar4, &bVar5);
	func_299();
	func_300(bVar3);
	bVar6 = func_301(iVar2);
	func_302(bVar6);
	while (Global_1070355->f_19683 < iVar1)
	{
		if (Global_1070355->f_19683 >= 32)
		{
			Global_1070355->f_19683 = (Global_1070355->f_19683 - 32);
			iVar1 = (iVar1 - 32);
			func_303();
			SCRIPTS::_0xDE544B7EC0C187CC(&(Global_1070355->f_19683.f_259));
		}
		iVar0 = Global_1070355->f_19683;
		Global_1070355->f_19683++;
		func_304(iVar0, iVar2, bVar3, bVar4, bVar6);
	}
	if (bVar5 || SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(Global_1070355->f_19683.f_260)))
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (bVar5 || func_305(iVar0))
			{
				func_304(iVar0, iVar2, bVar3, bVar4, bVar6);
			}
			iVar0++;
		}
	}
}

void func_24()
{
	struct<68> Var0;
	int iVar68;

	if (Global_1070355->f_26840)
	{
		Global_1070355->f_26840 = 0;
		Var0.f_1 = 5;
		Var0.f_3.f_2 = -504335712;
		Var0.f_3.f_4 = 3;
		Var0.f_62.f_5 = -1;
		Global_265331->f_124603 = { Var0 };
	}
	if (Global_1070355->f_26839)
	{
		iVar68 = func_306(&(Global_265331->f_124603));
		if (iVar68 != 1)
		{
			Global_1070355->f_26839 = 0;
			if (iVar68 == 3)
			{
				func_308(func_307(38), 10000, 0, 0, 0, 1);
			}
		}
	}
}

void func_25()
{
	int iVar0;
	struct<2> Var1;

	if (Global_1198018->f_1.f_22 < 5)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
		{
			case -1730772208:
				if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &Var1, 10))
				{
					if (Var1.f_1 == ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Global_1198018->f_1.f_2))
					{
						func_309(16);
					}
				}
				break;
		}
		iVar0++;
	}
}

void func_26()
{
	func_310();
}

void func_27(var uParam0)
{
	Global_1273586->f_45++;
	if (Global_1273586->f_45 >= Global_1273586->f_43)
	{
		Global_1273586->f_45 = 0;
	}
	func_311(uParam0);
	switch (Global_1273586->f_47)
	{
		case 0:
			func_312(uParam0);
			break;
		case 1:
			func_313(uParam0);
			break;
	}
	Global_1273586->f_46++;
	Global_1273586->f_46 = (Global_1273586->f_46 % 32);
	Global_1273586->f_48 = (Global_1273586->f_48 - Global_1273586->f_48 & 9);
}

void func_28(var uParam0)
{
	float fVar0;

	if (!uParam0->f_11 || uParam0->f_12)
	{
		return;
	}
	Global_1273644->f_74++;
	if (Global_1273644->f_74 >= Global_1273644->f_73)
	{
		Global_1273644->f_74 = 0;
	}
	if (Global_1273644->f_74 >= Global_1273644->f_73)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1273644)[Global_1273644->f_74 /*9*/])->f_4))
	{
		func_314(Global_1273644->f_74);
		return;
	}
	if (!SCRIPTS::_DOES_THREAD_EXIST(((*Global_1273644)[Global_1273644->f_74 /*9*/])->f_8) || !SCRIPTS::IS_THREAD_ACTIVE(((*Global_1273644)[Global_1273644->f_74 /*9*/])->f_8, false))
	{
		func_314(Global_1273644->f_74);
		return;
	}
	if (func_315(*((*Global_1273644)[Global_1273644->f_74 /*9*/])))
	{
		fVar0 = BUILTIN::VDIST(uParam0->f_17, ENTITY::GET_ENTITY_COORDS(((*Global_1273644)[Global_1273644->f_74 /*9*/])->f_4, true, false));
	}
	else
	{
		fVar0 = BUILTIN::VDIST(uParam0->f_17, *((*Global_1273644)[Global_1273644->f_74 /*9*/]));
	}
	if (fVar0 < ((*Global_1273644)[Global_1273644->f_74 /*9*/])->f_3)
	{
		PED::_0xF9CBD46433E36713(uParam0->f_8, ((*Global_1273644)[Global_1273644->f_74 /*9*/])->f_4, 0f, 0f, 0f, 7.5f, ((*Global_1273644)[Global_1273644->f_74 /*9*/])->f_3, (((*Global_1273644)[Global_1273644->f_74 /*9*/])->f_3 * 1.5f), 20f, "HEAD_TRACKING_TARGET");
	}
}

void func_29(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = &Global_1273719;
	bVar1 = false;
	if (PED::IS_PED_IN_COMBAT(uParam0->f_8, 0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		if (!Global_1273719->f_1)
		{
			INVENTORY::_0xE3A46370F70F3607(2, 0);
			INVENTORY::_0xE3A46370F70F3607(3, 0);
			Global_1273719->f_1 = 1;
		}
		if (uParam0->f_11 && !uParam0->f_12)
		{
			PED::SET_PED_RESET_FLAG(uParam0->f_8, 268, true);
			PED::SET_PED_RESET_FLAG(uParam0->f_8, 179, true);
			PED::SET_PED_RESET_FLAG(uParam0->f_8, 241, true);
			PED::SET_PED_RESET_FLAG(uParam0->f_8, 260, true);
			PED::SET_PED_RESET_FLAG(uParam0->f_8, 27, true);
			PED::SET_PED_RESET_FLAG(uParam0->f_8, 198, true);
			if (WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_8, &iVar2, true, 0, false))
			{
				switch (iVar2)
				{
					case joaat("weapon_unarmed"):
					case 0:
						break;
					case joaat("weapon_kit_camera"):
						if (Global_1273719->f_2 & 1 != 0)
						{
							bVar1 = true;
						}
						break;
					case joaat("weapon_kit_binoculars"):
					case 1652431022: /* GXTEntry: "Refined Binoculars" */
						if (Global_1273719->f_2 & 2 != 0)
						{
							bVar1 = true;
						}
						break;
					case joaat("weapon_fishingrod"):
						if (Global_1273719->f_2 & 4 != 0)
						{
							bVar1 = true;
						}
						break;
					default:
						bVar1 = true;
						break;
				}
			}
			if (Global_1273719->f_2 & 8 != 0)
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				WEAPON::_HOLSTER_PED_WEAPONS(uParam0->f_8, 0, 0, 1, 0);
			}
		}
	}
	else if (Global_1273719->f_1)
	{
		INVENTORY::_0xD5D72F1624F3BA7C(2);
		INVENTORY::_0xD5D72F1624F3BA7C(3);
		Global_1273719->f_1 = 0;
	}
	PED::SET_PED_CONFIG_FLAG(uParam0->f_8, 249, bVar0);
	Global_1273719 = 0;
	Global_1273719->f_2 = 0;
}

void func_30(var uParam0)
{
	switch (Global_1070355->f_21187.f_2)
	{
		case 0:
			func_316();
			break;
		case 1:
			func_317();
			break;
		case 2:
			func_318(uParam0);
			break;
		case 3:
			func_319(uParam0);
			break;
		case 4:
			func_320();
			break;
		default:
			func_321(0);
			break;
	}
}

void func_31(var uParam0)
{
	switch (uParam0->f_43)
	{
		case 0:
			uParam0->f_45 = Global_265308->f_22;
			func_322(uParam0);
			func_323(&(uParam0->f_45));
			func_324(uParam0);
			func_325(uParam0, 1);
			break;
		case 1:
			if (!func_326(uParam0))
			{
				return;
			}
			func_325(uParam0, 2);
			break;
		case 2:
			if (func_327())
			{
				if ((func_328(uParam0, 2) && func_329()) && func_330() == 0)
				{
					func_331("Content Locked", 0, 0, 0);
				}
				if (!func_328(uParam0, 1))
				{
					if (func_332(uParam0))
					{
						func_333(uParam0, 1);
					}
				}
				if (func_334(uParam0->f_312))
				{
					func_335(&(uParam0->f_312), 1, 1);
				}
				func_336(uParam0, 2);
				func_336(uParam0, 4);
				return;
			}
			func_336(uParam0, 1);
			func_336(uParam0, 2);
			func_337(uParam0);
			func_338(uParam0);
			break;
	}
}

void func_32()
{
	if (Global_1893575 & 64 != 0)
	{
		func_339();
		func_340(0);
	}
	func_341();
	func_342();
	func_343();
}

void func_33()
{
	func_344(&(Global_1131373->f_4384.f_51), Global_1901929->f_628, Global_1901929->f_628.f_1);
	func_344(&(Global_1131373->f_4384.f_154), Global_1901929->f_628.f_2, Global_1901929->f_628.f_3);
}

void func_34()
{
	if (func_245(&Global_1900718, 2))
	{
		func_270(Global_1900718, 2);
		func_345(Global_1939168, 1791);
	}
	if (func_245(&Global_1900718, 1))
	{
		func_270(Global_1900718, 1);
		func_346(Global_1900718, 2);
	}
}

void func_35()
{
	if (func_347() != 0)
	{
		return;
	}
	if (!func_348())
	{
		return;
	}
	if (!func_349())
	{
		return;
	}
	func_350();
	if (func_351())
	{
		return;
	}
}

void func_36()
{
	switch (&Global_1183981)
	{
		case 0:
			func_352();
			break;
		case 1:
			func_353();
			break;
		case 2:
			func_354();
			break;
	}
}

void func_37()
{
	if (!func_355())
	{
		return;
	}
	func_356(MISC::GET_GAME_TIMER());
	func_357();
	if (!func_358())
	{
		return;
	}
	if (func_359(16))
	{
		func_360(748, 1);
		func_361(1023);
	}
	else if (func_359(32))
	{
		func_360(749, 1);
		func_361(32);
	}
	else if (func_359(64))
	{
		func_360(754, 1);
		func_361(64);
	}
	else if (func_359(8))
	{
		func_360(747, 1);
		func_361(1023);
	}
	else if (func_359(4))
	{
		func_360(745, 1);
		func_361(7);
		func_362(512);
	}
	else if (func_359(2))
	{
		func_360(744, 1);
		func_361(3);
		func_362(256);
	}
	else if (func_359(1))
	{
		func_360(743, 1);
		func_361(1);
		func_362(128);
	}
}

void func_38()
{
	func_363();
}

void func_39()
{
	func_364();
}

void func_40()
{
	if (func_365() != 1)
	{
		return;
	}
	if (func_290())
	{
		func_366(16);
		if (MAP::DOES_BLIP_EXIST(func_368(func_367())))
		{
			func_369(func_367(), 4);
			if (MAP::BLIP_ADD_MODIFIER(func_368(func_367()), -1186550032))
			{
			}
		}
		func_370();
		return;
	}
	func_371();
	func_372();
	func_373();
	func_374();
	func_375();
	func_376();
	func_377();
}

void func_41()
{
	int iVar0;

	iVar0 = -1;
	switch (func_365())
	{
		case -1:
			if (func_378(&iVar0))
			{
				func_379(iVar0);
			}
			break;
		case 0:
			if (func_380(&iVar0))
			{
				func_379(iVar0);
			}
			break;
		case 1:
			if (func_381(&iVar0))
			{
				func_379(iVar0);
			}
			break;
		case 2:
			if (func_382(&iVar0))
			{
				func_379(iVar0);
			}
			break;
		default:
			break;
	}
}

void func_42()
{
	if (func_365() <= 0)
	{
		return;
	}
	if (func_383() <= 0)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_SESSION_ACTIVE() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (_NAMESPACE26::_0x4BE6C13A45CCA8EC(func_384()) == PLAYER::PLAYER_ID())
	{
		if (func_385() && func_386() != 25)
		{
			func_387(25);
		}
		switch (func_386())
		{
			case 0:
				func_388();
				break;
			case 1:
				func_389();
				break;
			case 2:
				func_390();
				break;
			case 3:
				func_391();
				break;
			case 4:
				func_392();
				break;
			case 5:
				func_393();
				break;
			case 6:
				func_394();
				break;
			case 7:
				func_395();
				break;
			case 8:
				func_396();
				break;
			case 9:
				func_397();
				break;
			case 10:
				func_398();
				break;
			case 11:
				func_399();
				break;
			case 12:
				func_400();
				break;
			case 13:
				func_401();
				break;
			case 14:
				func_402();
				break;
			case 15:
				func_403();
				break;
			case 16:
				func_404();
				break;
			case 17:
				func_405();
				break;
			case 18:
				func_406();
				break;
			case 19:
				func_407();
				break;
			case 20:
				func_408();
				break;
			case 21:
				func_409();
				break;
			case 22:
				func_410();
				break;
			case 23:
				func_411();
				break;
			case 24:
				func_412();
				break;
			case 25:
				func_413();
				break;
			default:
				break;
		}
	}
	else if (func_386() > 0)
	{
		func_413();
	}
	func_414();
	func_415();
	if ((!func_416(func_384()) && func_383() != 24) && func_383() != 25)
	{
		func_417();
		func_418(24);
	}
	if (func_385() && func_383() != 25)
	{
		func_418(25);
	}
	if (func_419())
	{
		func_420();
		func_421(65536);
	}
	if (func_422(2))
	{
		if (!func_422(128))
		{
			func_423();
		}
		if (func_422(768))
		{
			func_424();
		}
	}
	if (func_383() > 1 && func_383() < 25)
	{
		func_425(1024);
	}
	switch (func_383())
	{
		case 0:
			break;
		case 1:
			func_426();
			break;
		case 2:
			func_427();
			break;
		case 3:
			func_428();
			break;
		case 4:
			func_429();
			break;
		case 5:
			func_430();
			break;
		case 6:
			func_431();
			break;
		case 7:
			func_432();
			break;
		case 8:
			func_433();
			break;
		case 11:
			func_434();
			break;
		case 9:
			func_435();
			break;
		case 10:
			func_436();
			break;
		case 12:
			func_437();
			break;
		case 13:
			func_438();
			break;
		case 14:
			func_439();
			break;
		case 15:
			func_440();
			break;
		case 16:
			func_441();
			break;
		case 17:
			func_442();
			break;
		case 18:
			func_443();
			break;
		case 19:
			func_444();
			break;
		case 20:
			func_445();
			break;
		case 21:
			func_446();
			break;
		case 22:
			func_447();
			break;
		case 23:
			func_448();
			break;
		case 24:
			func_449();
			break;
		case 25:
			func_450();
			break;
		default:
			break;
	}
}

void func_43()
{
	func_451();
	func_452();
}

void func_44()
{
	switch (Global_1232796->f_8111)
	{
		case 0:
			func_453();
			break;
		case 1:
			func_454();
			break;
		case 2:
			func_455();
			break;
	}
}

void func_45()
{
	switch (&Global_1198018)
	{
		case 0:
			func_456();
			break;
		case 1:
			func_457();
			break;
		case 2:
			func_458();
			break;
	}
}

void func_46(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (uParam0->f_21)
			{
				func_459(uParam0);
				func_460(uParam0, 1);
				func_461(uParam0, 1);
			}
			else
			{
				func_462(uParam0);
			}
			break;
		case 1:
			func_463(uParam0);
			if (func_464(uParam0))
			{
				func_461(uParam0, 3);
			}
			if (func_465(0, 0, 1))
			{
				func_462(uParam0);
				func_461(uParam0, 2);
			}
			break;
		case 2:
			if (!func_465(0, 0, 1))
			{
				func_460(uParam0, 0);
				func_461(uParam0, 1);
			}
			break;
		case 3:
			uParam0->f_21 = 0;
			func_466(uParam0->f_17, 1, 0, -142743235);
			func_467(1);
			func_459(uParam0);
			func_461(uParam0, 0);
			break;
	}
}

void func_47()
{
	switch (&Global_1129497)
	{
		case 0:
			if (func_468(1) >= 2 && !func_469(913131737 /* GXTEntry: "Small Delivery Wagon" */, 1))
			{
				func_470(985619631, 0, 255, 0, 0);
			}
			Global_1129497 = 1;
			break;
		case 1:
			if (func_471())
			{
				return;
			}
			func_472();
			func_473();
			func_474();
			func_475();
			if (NETWORK::NETWORK_IS_SESSION_ACTIVE())
			{
				if (func_476() && &Global_1124870 == 2)
				{
					func_477();
					func_478();
				}
			}
			else if (Global_1129497->f_380 != 0)
			{
				Global_1129497->f_380 = 0;
				func_479();
			}
			break;
	}
}

void func_48()
{
	func_480(Global_1130292);
}

void func_49()
{
	if (func_365() != 1)
	{
		return;
	}
	if (!func_481())
	{
		return;
	}
	func_482();
	func_483();
	func_484();
}

void func_50()
{
	switch (func_485())
	{
		case 0:
			func_486();
			break;
		case 1:
			func_487();
			break;
		case 2:
			func_488();
			break;
		default:
			break;
	}
}

void func_51()
{
	int iVar0;

	if (Global_1051202->f_78.f_101 <= 0)
	{
		Global_1051202->f_78.f_101 = 0;
		return;
	}
	if ((MISC::GET_GAME_TIMER() - Global_1051202->f_78.f_103) < 1000)
	{
		return;
	}
	Global_1051202->f_78.f_102 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1051202->f_78.f_101 - 1))
	{
		if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH((Global_1051202->f_78[iVar0 /*10*/])->f_8, (Global_1051202->f_78[iVar0 /*10*/])->f_9, 1, 0))
		{
			func_489(iVar0);
		}
		else
		{
			Global_1051202->f_78.f_102++;
		}
		iVar0++;
	}
	Global_1051202->f_78.f_103 = MISC::GET_GAME_TIMER();
}

void func_52()
{
	if (!func_490(753))
	{
		if (STATS::_0x3AEABAE3F3C7600C())
		{
			func_360(753, 0);
		}
	}
}

void func_53()
{
	Global_1070355->f_7 = 0;
}

void func_54(var uParam0)
{
	func_491();
	func_492();
	func_493();
	func_494();
	func_495();
	func_496();
	func_497();
	func_498();
	func_499();
	func_500();
	func_501();
	func_502();
	func_503();
	func_504();
	func_505(&(Global_1070355->f_26843));
	func_506();
	func_507();
	func_508();
	func_509();
	func_510();
	func_511();
	func_512(uParam0);
	func_513();
	func_514();
	func_515();
	func_516(0);
	func_517(0);
	Global_1572887->f_11 = 0;
}

void func_55(var uParam0)
{
	func_518();
	func_519(Global_1129497);
	func_1("MP_MAIN_OFFLINE__INITIALIZE_GAME - NET_MAIN_OFFLINE__LOAD_MP_PARSED_DATA_FILES_AND_TEXT_BLOCKS - starting");
	func_520();
	func_1("MP_MAIN_OFFLINE__INITIALIZE_GAME - NET_MAIN_OFFLINE__LOAD_MP_PARSED_DATA_FILES_AND_TEXT_BLOCKS - done");
	func_521();
	func_522();
	func_1("MP_MAIN_OFFLINE__INITIALIZE_GAME - INITIALIZE_SUPPLEMENTARY_THREAD_MONITOR");
	func_523();
	func_1("MP_MAIN_OFFLINE__INITIALIZE_GAME - INITIALIZE_ALL_AMBIENT_RESTRICTIONS");
	func_524(1);
	func_525();
	func_526(1);
	func_527(1);
	func_1("MP_MAIN_OFFLINE__INITIALIZE_GAME - DEEDS");
	func_528(0);
	func_1("MP_MAIN_OFFLINE__INITIALIZE_GAME - REGIONS");
	func_529();
	func_530(uParam0);
	func_531();
	func_532();
	func_533();
	func_534();
	func_535();
	func_536();
	func_537();
	func_538(0);
	func_539();
	func_540();
	func_541();
	func_542();
	func_543();
	func_544(&(Global_1070355->f_21185));
	func_545(Global_1180694);
	func_546(Global_1181794);
	func_547(Global_1274951);
	func_548(Global_1275329);
	func_1("MP_MAIN_OFFLINE__INITIALIZE_GAME - Game systems");
	func_549();
	func_550();
	func_551();
	func_552();
	func_553();
	func_554();
	func_555();
	func_556(1);
	PED::_0xDC91F22F09BC6C2F(-767591988, 0);
	PED::_0xDC91F22F09BC6C2F(-989642646, 0);
	PED::_0xDC91F22F09BC6C2F(1222652248, 0);
	PED::_0xDC91F22F09BC6C2F(-350226955, 0);
	PED::_0xDC91F22F09BC6C2F(-1535431934, 0);
	PED::_0xDC91F22F09BC6C2F(-1448293989, 0);
	PED::_0xDC91F22F09BC6C2F(266218800, 0);
	PED::_0xDC91F22F09BC6C2F(555364152, 0);
	PED::_0xDC91F22F09BC6C2F(-1663301869, 0);
	PED::_0xDC91F22F09BC6C2F(-1996978098, 0);
	PED::_0xDC91F22F09BC6C2F(1078461828, 0);
	PED::_0xDC91F22F09BC6C2F(1986610512, 0);
	PED::_0xDC91F22F09BC6C2F(889541022, 0);
	PED::_0xDC91F22F09BC6C2F(-319516747, 0);
	PAD::_0xA0CEFCEA390AAB9B(0);
	POPULATION::_0xC6DCC2A3A8825C85(1);
	MAP::_0xD3F58E9316B7FC2A(1);
	_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(2, 1, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PED::_0x5CA20FBE49891BBD(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (!Global_1572887->f_8)
	{
		func_557();
	}
	func_558();
	func_559();
	func_560();
	func_516(1);
	func_517(1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(705691988, false);
	func_1("MP_MAIN_OFFLINE__INITIALIZE_GAME - DONE");
}

void func_56()
{
	if (func_347() != 0)
	{
		return;
	}
	func_561();
	func_562();
	func_563();
	func_564();
}

void func_57()
{
	bool bVar0;
	int iVar1;

	MAP::SET_BLIP_NAME_TO_PLAYER_NAME(MAP::GET_MAIN_PLAYER_BLIP_ID(), PLAYER::PLAYER_ID());
	bVar0 = true;
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		func_565(105);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::_0x5240864E847C691C(iVar1, bVar0);
		}
	}
	func_566(0);
}

void func_58()
{
	if (func_347() != 0)
	{
		return;
	}
	MISC::ENABLE_DISPATCH_SERVICE(8, false);
	func_567();
	func_568();
	Global_1938569->f_289 = 1;
	Global_1051165->f_34 = 0;
	func_32();
	func_34();
	func_569();
	func_570(1);
	MAP::_SET_MINIMAP_FOW_SHOULD_UPDATE(0, 0);
	Global_1051202->f_15 = 0;
	Global_1051202->f_14 = 0;
	func_346(&(Global_1051202->f_14), 32);
	func_346(&(Global_1051202->f_14), 64);
	func_346(&(Global_1051202->f_14), 512);
	func_346(&(Global_1051202->f_14), 2);
	func_346(&(Global_1051202->f_14), 1);
	func_346(&(Global_1051202->f_14), 1024);
	func_346(&(Global_1051202->f_14), 128);
	func_346(&(Global_1051202->f_14), 4096);
	func_346(&(Global_1051202->f_14), 16384);
}

void func_59(int iParam0)
{
	Global_18 = (Global_18 || iParam0);
}

bool func_60()
{
	return func_245(Global_1572887->f_7, 1);
}

void func_61(int iParam0)
{
	Global_1099293->f_3 = (Global_1099293->f_3 || iParam0);
}

void func_62(int iParam0)
{
	Global_1099293->f_3 = (Global_1099293->f_3 - (Global_1099293->f_3 && iParam0));
}

int func_63()
{
	if (NETWORK::NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING())
	{
		func_557();
		return 0;
	}
	return 1;
}

bool func_64()
{
	return &Global_1901929 != -1;
}

void func_65()
{
	Global_1901929->f_1.f_1 = func_571(joaat("transition"), -166221370, 120000, "T_TransitionPendingSaveTimeOut");
	if (Global_1901929->f_1.f_1 < 5000)
	{
		Global_1901929->f_1.f_1 = 120000;
	}
	else if (Global_1901929->f_1.f_1 > 300000)
	{
		Global_1901929->f_1.f_1 = 120000;
	}
	Global_1901929->f_1.f_2 = func_571(joaat("transition"), 163783464, 150000, "T_TransitionStateKillTime");
	if (Global_1901929->f_1.f_2 < 5000)
	{
		Global_1901929->f_1.f_2 = 150000;
	}
	else if (Global_1901929->f_1.f_2 > 375000)
	{
		Global_1901929->f_1.f_2 = 150000;
	}
	Global_1901929->f_1.f_3 = func_571(joaat("transition"), 1003348461, 180000, "T_TransitionStateFailsafeTime");
	if (Global_1901929->f_1.f_3 < 5000)
	{
		Global_1901929->f_1.f_3 = 180000;
	}
	else if (Global_1901929->f_1.f_3 > 450000)
	{
		Global_1901929->f_1.f_3 = 180000;
	}
	Global_1901929->f_1.f_4 = func_571(joaat("transition"), 1593007883, 30000, "T_TransitionStateInventoryTime");
	if (Global_1901929->f_1.f_4 < 5000)
	{
		Global_1901929->f_1.f_4 = 30000;
	}
	else if (Global_1901929->f_1.f_4 > 180000)
	{
		Global_1901929->f_1.f_4 = 30000;
	}
	Global_1901929->f_1.f_5 = func_571(joaat("transition"), -76396999, 60000, "T_TransitionSessionRequestTimeout");
	if (Global_1901929->f_1.f_5 < 1)
	{
		Global_1901929->f_1.f_5 = 60000;
	}
	else if (Global_1901929->f_1.f_5 > 300000)
	{
		Global_1901929->f_1.f_5 = 60000;
	}
	Global_1901929->f_1.f_6 = func_571(joaat("transition"), 558888444, 30000, "T_TransitionSessionRequestAttemptTimeout");
	if (Global_1901929->f_1.f_6 < 1)
	{
		Global_1901929->f_1.f_6 = 30000;
	}
	else if (Global_1901929->f_1.f_6 > 60000)
	{
		Global_1901929->f_1.f_6 = 30000;
	}
	Global_1901929->f_1.f_7 = func_571(joaat("transition"), 1295584385, 10000, "T_TransitionSessionRequestActionTimeout");
	if (Global_1901929->f_1.f_7 < 1)
	{
		Global_1901929->f_1.f_7 = 10000;
	}
	else if (Global_1901929->f_1.f_7 > 60000)
	{
		Global_1901929->f_1.f_7 = 10000;
	}
	Global_1901929->f_1.f_8 = func_571(joaat("transition"), -1664075411, 30000, "T_TransitionSessionFlagTimeout");
	if (Global_1901929->f_1.f_8 < 1)
	{
		Global_1901929->f_1.f_8 = 30000;
	}
	else if (Global_1901929->f_1.f_8 > 300000)
	{
		Global_1901929->f_1.f_8 = 30000;
	}
	Global_1901929->f_1.f_9 = func_571(joaat("transition"), -595342530, 3000, "T_TransitionSessionPrivateReqWaitTime");
	if (Global_1901929->f_1.f_9 < 1)
	{
		Global_1901929->f_1.f_9 = 3000;
	}
	else if (Global_1901929->f_1.f_9 > 10000)
	{
		Global_1901929->f_1.f_9 = 3000;
	}
	Global_1901929->f_1.f_10 = func_571(joaat("transition"), -1555176025, 200000, "T_TransitionMatchmakingSessionTimeout");
	if (Global_1901929->f_1.f_10 < 1)
	{
		Global_1901929->f_1.f_10 = 200000;
	}
	else if (Global_1901929->f_1.f_10 > 500000)
	{
		Global_1901929->f_1.f_10 = 200000;
	}
	Global_1901929->f_1.f_11 = func_571(joaat("transition"), 1229961375, 2000, "T_TransitionMatchmakingInputWaitTimeout");
	if (Global_1901929->f_1.f_11 < 1)
	{
		Global_1901929->f_1.f_11 = 2000;
	}
	else if (Global_1901929->f_1.f_11 > 30000)
	{
		Global_1901929->f_1.f_11 = 2000;
	}
	Global_1901929->f_1.f_12 = func_571(joaat("transition"), -73303167, 5000, "T_TransitionMatchmakingTransitionTimeout");
	if (Global_1901929->f_1.f_12 < 1)
	{
		Global_1901929->f_1.f_12 = 5000;
	}
	else if (Global_1901929->f_1.f_12 > 50000)
	{
		Global_1901929->f_1.f_12 = 5000;
	}
	Global_1901929->f_1.f_13 = func_571(joaat("transition"), -980804910, 500, "T_TransitionMatchmakingIDSendTime");
	if (Global_1901929->f_1.f_13 < 1)
	{
		Global_1901929->f_1.f_13 = 500;
	}
	else if (Global_1901929->f_1.f_13 > 10000)
	{
		Global_1901929->f_1.f_13 = 500;
	}
	Global_1901929->f_1.f_14 = func_571(joaat("transition"), 316029909, 300000, "T_TransitionMatchmakingMatchTimeout");
	if (Global_1901929->f_1.f_14 < 1)
	{
		Global_1901929->f_1.f_14 = 300000;
	}
	else if (Global_1901929->f_1.f_14 > 600000)
	{
		Global_1901929->f_1.f_14 = 300000;
	}
	Global_1901929->f_1.f_15 = func_571(joaat("transition"), -134158158, 120000, "T_TransitionMatchmakingEndFlowTimeout");
	if (Global_1901929->f_1.f_15 < 1)
	{
		Global_1901929->f_1.f_15 = 120000;
	}
	else if (Global_1901929->f_1.f_15 > 300000)
	{
		Global_1901929->f_1.f_15 = 120000;
	}
	Global_1901929->f_1.f_18 = func_571(joaat("transition"), -1841226664, 30000, "T_TransitionInviteErrorMsgDuration");
	if (Global_1901929->f_1.f_18 < 1)
	{
		Global_1901929->f_1.f_18 = 30000;
	}
	else if (Global_1901929->f_1.f_18 > 300000)
	{
		Global_1901929->f_1.f_18 = 30000;
	}
	Global_1901929->f_1.f_19 = func_571(joaat("transition"), 1716740887, 40000, "T_TransitionInviteFlowFailsafeTimeout");
	if (Global_1901929->f_1.f_19 < 10000)
	{
		Global_1901929->f_1.f_19 = 40000;
	}
	else if (Global_1901929->f_1.f_19 > 600000)
	{
		Global_1901929->f_1.f_19 = 40000;
	}
	Global_1901929->f_1.f_20 = func_571(joaat("transition"), 2011285928, 120000, "T_TransitionInviteFlowPreResultFailsafeTimeout");
	if (Global_1901929->f_1.f_20 < 10000)
	{
		Global_1901929->f_1.f_20 = 120000;
	}
	else if (Global_1901929->f_1.f_20 > 600000)
	{
		Global_1901929->f_1.f_20 = 120000;
	}
	Global_1901929->f_1.f_21 = func_571(joaat("transition"), 420661166, 180, "T_TransitionInviteCodeTimeout");
	if (Global_1901929->f_1.f_21 < 1)
	{
		Global_1901929->f_1.f_21 = 180;
	}
	else if (Global_1901929->f_1.f_21 > 600)
	{
		Global_1901929->f_1.f_21 = 180;
	}
	Global_1901929->f_1.f_22 = func_571(joaat("transition"), -663371562, 200, "T_TransitionInviteMsgCooldown");
	if (Global_1901929->f_1.f_22 < 1)
	{
		Global_1901929->f_1.f_22 = 200;
	}
	else if (Global_1901929->f_1.f_22 > 60000)
	{
		Global_1901929->f_1.f_22 = 200;
	}
	Global_1901929->f_1.f_23 = func_571(joaat("transition"), -1449248579, 30000, "T_TransitionInviteUINotification");
	if (Global_1901929->f_1.f_23 < 1)
	{
		Global_1901929->f_1.f_23 = 30000;
	}
	else if (Global_1901929->f_1.f_23 > 60000)
	{
		Global_1901929->f_1.f_23 = 30000;
	}
	Global_1901929->f_1.f_24 = func_571(joaat("transition"), -1638544955, 20000, "T_TransitionRegionUGCEarlyQuitTimeout");
	if (Global_1901929->f_1.f_24 < 0)
	{
		Global_1901929->f_1.f_24 = 20000;
	}
	else if (Global_1901929->f_1.f_24 > 60000)
	{
		Global_1901929->f_1.f_24 = 20000;
	}
	Global_1901929->f_1.f_25 = func_571(joaat("transition"), 1927283629, 1, "T_TransitionUGCCoopOutroCutsceneRealTimeMP");
	if (Global_1901929->f_1.f_25 < 0)
	{
		Global_1901929->f_1.f_25 = 1;
	}
	else if (Global_1901929->f_1.f_25 > 2)
	{
		Global_1901929->f_1.f_25 = 1;
	}
	Global_1901929->f_1.f_26 = func_572(joaat("transition"), 654424260, 0, "T_TransitionRequeueActive");
	Global_1901929->f_1.f_27 = func_572(joaat("transition"), -637661790, 1, "T_TransitionRequeueRestricted");
	Global_1901929->f_1.f_28 = func_571(joaat("transition"), 393570003, 90000, "T_TransitionTransitionRequeueTimeout");
	if (Global_1901929->f_1.f_28 < 30000)
	{
		Global_1901929->f_1.f_28 = 90000;
	}
	else if (Global_1901929->f_1.f_28 > 180000)
	{
		Global_1901929->f_1.f_28 = 90000;
	}
	Global_1901929->f_1.f_29 = func_573(joaat("transition"), -1401995324, 0.75f, "T_TransitionTransitionRequeueTooFewPercentageDefault");
	if (Global_1901929->f_1.f_29 < 0f)
	{
		Global_1901929->f_1.f_29 = 0.75f;
	}
	else if (Global_1901929->f_1.f_29 > 1f)
	{
		Global_1901929->f_1.f_29 = 0.75f;
	}
	Global_1901929->f_1.f_33 = func_573(joaat("transition"), 92992120, 0.75f, "T_TransitionTransitionRequeueTooFewPercentageCapture");
	if (Global_1901929->f_1.f_33 < 0f)
	{
		Global_1901929->f_1.f_33 = 0.75f;
	}
	else if (Global_1901929->f_1.f_33 > 1f)
	{
		Global_1901929->f_1.f_33 = 0.75f;
	}
	Global_1901929->f_1.f_32 = func_573(joaat("transition"), 1038098084, 0.75f, "T_TransitionTransitionRequeueTooFewPercentageShootout");
	if (Global_1901929->f_1.f_32 < 0f)
	{
		Global_1901929->f_1.f_32 = 0.75f;
	}
	else if (Global_1901929->f_1.f_32 > 1f)
	{
		Global_1901929->f_1.f_32 = 0.75f;
	}
	Global_1901929->f_1.f_30 = func_573(joaat("transition"), -1477976586, 0.75f, "T_TransitionTransitionRequeueTooFewPercentageRace");
	if (Global_1901929->f_1.f_30 < 0f)
	{
		Global_1901929->f_1.f_30 = 0.75f;
	}
	else if (Global_1901929->f_1.f_30 > 1f)
	{
		Global_1901929->f_1.f_30 = 0.75f;
	}
	Global_1901929->f_1.f_31 = func_573(joaat("transition"), -1024060563, 0.75f, "T_TransitionTransitionRequeueTooFewPercentageFeatured");
	if (Global_1901929->f_1.f_31 < 0f)
	{
		Global_1901929->f_1.f_31 = 0.75f;
	}
	else if (Global_1901929->f_1.f_31 > 1f)
	{
		Global_1901929->f_1.f_31 = 0.75f;
	}
	Global_1901929->f_1.f_34 = func_573(joaat("transition"), -469156625, 0.75f, "T_TransitionTransitionRequeueTooFewPercentageSpecial");
	if (Global_1901929->f_1.f_34 < 0f)
	{
		Global_1901929->f_1.f_34 = 0.75f;
	}
	else if (Global_1901929->f_1.f_34 > 1f)
	{
		Global_1901929->f_1.f_34 = 0.75f;
	}
	Global_1901929->f_1.f_35 = func_573(joaat("transition"), -1523082729, 0.75f, "T_TransitionTransitionRequeueTooFewPercentageElimination");
	if (Global_1901929->f_1.f_35 < 0f)
	{
		Global_1901929->f_1.f_35 = 0.75f;
	}
	else if (Global_1901929->f_1.f_35 > 1f)
	{
		Global_1901929->f_1.f_35 = 0.75f;
	}
	Global_1901929->f_1.f_36 = func_571(joaat("transition"), -87411388, 5000, "T_TransitionPostFXTimeout");
	if (Global_1901929->f_1.f_36 < 1000)
	{
		Global_1901929->f_1.f_36 = 5000;
	}
	else if (Global_1901929->f_1.f_36 > 10000)
	{
		Global_1901929->f_1.f_36 = 5000;
	}
	Global_1901929->f_1.f_16 = func_571(joaat("transition"), -1001477006, 100000, "T_TransitionMatchmakingQWMMemberIdle");
	if (Global_1901929->f_1.f_16 < 1000)
	{
		Global_1901929->f_1.f_16 = 100000;
	}
	else if (Global_1901929->f_1.f_16 > 120000)
	{
		Global_1901929->f_1.f_16 = 100000;
	}
	Global_1901929->f_1.f_17 = func_572(joaat("transition"), 1377847976, 0, "T_TransitionMatchmakingRandomizeSeriesRequeue");
}

void func_66(int iParam0)
{
	func_575("sTransitionTunables", "k_TransitionPendingSaveTimeOut", func_574(Global_1901929->f_1.f_1), iParam0);
	func_575("sTransitionTunables", "k_TransitionStateKillTime", func_574(Global_1901929->f_1.f_2), iParam0);
	func_575("sTransitionTunables", "k_TransitionStateFailsafeTime", func_574(Global_1901929->f_1.f_2), iParam0);
	func_575("sTransitionTunables", "k_TransitionStateInventoryTime", func_574(Global_1901929->f_1.f_4), iParam0);
	func_575("sTransitionTunables", "k_TransitionSessionRequestTimeout", func_574(Global_1901929->f_1.f_5), iParam0);
	func_575("sTransitionTunables", "k_TransitionSessionRequestAttemptTimeout", func_574(Global_1901929->f_1.f_6), iParam0);
	func_575("sTransitionTunables", "k_TransitionSessionRequestActionTimeout", func_574(Global_1901929->f_1.f_7), iParam0);
	func_575("sTransitionTunables", "k_TransitionSessionFlagTimeout", func_574(Global_1901929->f_1.f_8), iParam0);
	func_575("sTransitionTunables", "k_TransitionSessionPrivateReqWaitTime", func_574(Global_1901929->f_1.f_9), iParam0);
	func_575("sTransitionTunables", "k_TransitionMatchmakingSessionTimeout", func_574(Global_1901929->f_1.f_10), iParam0);
	func_575("sTransitionTunables", "k_TransitionMatchmakingInputWaitTimeout", func_574(Global_1901929->f_1.f_11), iParam0);
	func_575("sTransitionTunables", "k_TransitionMatchmakingTransitionTimeout", func_574(Global_1901929->f_1.f_12), iParam0);
	func_575("sTransitionTunables", "k_TransitionMatchmakingIDSendTime", func_574(Global_1901929->f_1.f_13), iParam0);
	func_575("sTransitionTunables", "k_TransitionMatchmakingMatchTimeout", func_574(Global_1901929->f_1.f_14), iParam0);
	func_575("sTransitionTunables", "k_TransitionMatchmakingEndFlowTimeout", func_574(Global_1901929->f_1.f_15), iParam0);
	func_575("sTransitionTunables", "k_TransitionMatchmakingQWMMemberIdle", func_574(Global_1901929->f_1.f_16), iParam0);
	func_575("sTransitionTunables", "k_TransitionMatchmakingRandomizeSeriesRequeue", MISC::_0xF216F74101968DB0(Global_1901929->f_1.f_17), iParam0);
	func_575("sTransitionTunables", "k_TransitionInviteErrorMsgDuration", func_574(Global_1901929->f_1.f_13), iParam0);
	func_575("sTransitionTunables", "k_TransitionInviteFlowFailsafeTimeout", func_574(Global_1901929->f_1.f_19), iParam0);
	func_575("sTransitionTunables", "k_TransitionInviteFlowPreResultFailsafeTimeout", func_574(Global_1901929->f_1.f_20), iParam0);
	func_575("sTransitionTunables", "k_TransitionInviteCodeTimeout", func_574(Global_1901929->f_1.f_21), iParam0);
	func_575("sTransitionTunables", "k_TransitionInviteMsgCooldown", func_574(Global_1901929->f_1.f_22), iParam0);
	func_575("sTransitionTunables", "k_TransitionUIInviteDuration", func_574(Global_1901929->f_1.f_23), iParam0);
	func_575("sTransitionTunables", "k_TransitionRegionUGCEarlyQuitTimeout", func_574(Global_1901929->f_1.f_24), iParam0);
	func_575("sTransitionTunables", "k_TransitionUGCCoopOutroCutsceneRealTimeMP", func_574(Global_1901929->f_1.f_25), iParam0);
	func_575("sTransitionTunables", "k_TransitionRequeueActive", MISC::_0xF216F74101968DB0(Global_1901929->f_1.f_26), iParam0);
	func_575("sTransitionTunables", "k_TransitionRequeueRestricted", MISC::_0xF216F74101968DB0(Global_1901929->f_1.f_27), iParam0);
	func_575("sTransitionTunables", "k_TransitionRequeueTimeout", func_574(Global_1901929->f_1.f_28), iParam0);
	func_575("sTransitionTunables", "k_TransitionRequeueTooFewPercentageDefault", MISC::_0x2B6846401D68E563(Global_1901929->f_1.f_29, 4), iParam0);
	func_575("sTransitionTunables", "k_TransitionRequeueTooFewPercentageCapture", MISC::_0x2B6846401D68E563(Global_1901929->f_1.f_33, 4), iParam0);
	func_575("sTransitionTunables", "k_TransitionRequeueTooFewPercentageElimination", MISC::_0x2B6846401D68E563(Global_1901929->f_1.f_35, 4), iParam0);
	func_575("sTransitionTunables", "k_TransitionRequeueTooFewPercentageFeatured", MISC::_0x2B6846401D68E563(Global_1901929->f_1.f_31, 4), iParam0);
	func_575("sTransitionTunables", "k_TransitionRequeueTooFewPercentageRace", MISC::_0x2B6846401D68E563(Global_1901929->f_1.f_30, 4), iParam0);
	func_575("sTransitionTunables", "k_TransitionRequeueTooFewPercentageShootout", MISC::_0x2B6846401D68E563(Global_1901929->f_1.f_32, 4), iParam0);
	func_575("sTransitionTunables", "k_TransitionRequeueTooFewPercentageSpecial", MISC::_0x2B6846401D68E563(Global_1901929->f_1.f_34, 4), iParam0);
	func_575("sTransitionTunables", "k_TransitionPostFXTimeout", func_574(Global_1901929->f_1.f_36), iParam0);
}

void func_67()
{
	Global_1901929->f_44 = func_573(-797337544, 786689300, 75f, "NPS_DesiredSpawnMinRange");
	Global_1901929->f_44.f_1 = func_573(-797337544, 1263044784, 125f, "NPS_DesiredSpawnMaxRange");
	if (Global_1901929->f_44 < 0f)
	{
		Global_1901929->f_44 = 75f;
	}
	if (Global_1901929->f_44.f_1 > 150f)
	{
		Global_1901929->f_44.f_1 = 125f;
	}
	if (Global_1901929->f_44 >= Global_1901929->f_44.f_1)
	{
		Global_1901929->f_44 = 75f;
		Global_1901929->f_44.f_1 = 125f;
	}
	if ((Global_1901929->f_44.f_1 - Global_1901929->f_44) <= 25f)
	{
		Global_1901929->f_44 = 75f;
		Global_1901929->f_44.f_1 = 125f;
	}
	Global_1901929->f_44.f_2 = func_573(-797337544, -967190325, 75f, "NPS_GenericSeedBaseRange");
	Global_1901929->f_44.f_3 = func_573(-797337544, 1406135090, 2f, "NPS_GenericSeedBaseScalar");
	if (Global_1901929->f_44.f_2 < 0f)
	{
		Global_1901929->f_44.f_2 = 0f;
	}
	if (Global_1901929->f_44.f_2 > 200f)
	{
		Global_1901929->f_44.f_2 = 200f;
	}
	if (Global_1901929->f_44.f_3 < 0f)
	{
		Global_1901929->f_44.f_3 = 0f;
	}
	if (Global_1901929->f_44.f_3 > 32f)
	{
		Global_1901929->f_44.f_3 = 32f;
	}
	Global_1901929->f_44.f_4 = func_571(-797337544, -2026295038, 3, "NPS_SpawnSearchAttempts");
	if (Global_1901929->f_44.f_4 < 0)
	{
		Global_1901929->f_44.f_4 = 3;
	}
	if (Global_1901929->f_44.f_4 > 10)
	{
		Global_1901929->f_44.f_4 = 3;
	}
	Global_1901929->f_44.f_5 = func_571(-797337544, 899152978, 3000, "NPS_DeathCamHoldTime_FreeRoam");
	if (Global_1901929->f_44.f_5 < 0)
	{
		Global_1901929->f_44.f_5 = 3000;
	}
	else if (Global_1901929->f_44.f_5 > 10000)
	{
		Global_1901929->f_44.f_5 = 3000;
	}
	Global_1901929->f_44.f_6 = func_571(-797337544, 482588143, 1000, "NPS_DeathCamHoldTime_Instanced");
	if (Global_1901929->f_44.f_6 < 0)
	{
		Global_1901929->f_44.f_6 = 1000;
	}
	else if (Global_1901929->f_44.f_6 > 10000)
	{
		Global_1901929->f_44.f_6 = 1000;
	}
	Global_1901929->f_44.f_9 = func_571(-797337544, 1341896011, 5000, "NPS_GhostVehicleTime");
	if (Global_1901929->f_44.f_9 < 0)
	{
		Global_1901929->f_44.f_9 = 5000;
	}
	else if (Global_1901929->f_44.f_9 > 30000)
	{
		Global_1901929->f_44.f_9 = 5000;
	}
	Global_1901929->f_44.f_10 = func_571(-797337544, 103073705, 5000, "NPS_AnimalInvulnerabilityTime");
	if (Global_1901929->f_44.f_10 < 0)
	{
		Global_1901929->f_44.f_10 = 5000;
	}
	else if (Global_1901929->f_44.f_10 > 30000)
	{
		Global_1901929->f_44.f_10 = 5000;
	}
	Global_1901929->f_44.f_11 = func_571(-797337544, 786899944, 5000, "NPS_SpawnInvulnerabilityTime");
	if (Global_1901929->f_44.f_11 < 0)
	{
		Global_1901929->f_44.f_11 = 5000;
	}
	else if (Global_1901929->f_44.f_11 > 30000)
	{
		Global_1901929->f_44.f_11 = 5000;
	}
	Global_1901929->f_44.f_12 = func_571(-797337544, -179549414, 5000, "NPS_ValidPositionTime");
	if (Global_1901929->f_44.f_12 < 10)
	{
		Global_1901929->f_44.f_12 = 5000;
	}
	else if (Global_1901929->f_44.f_12 > 60000)
	{
		Global_1901929->f_44.f_12 = 5000;
	}
	Global_1901929->f_44.f_13 = func_571(-797337544, -1924693859, 10000, "NPS_ScanRequestTimeOut");
	if (Global_1901929->f_44.f_13 < 1000)
	{
		Global_1901929->f_44.f_13 = 10000;
	}
	else if (Global_1901929->f_44.f_13 > 30000)
	{
		Global_1901929->f_44.f_13 = 10000;
	}
	Global_1901929->f_44.f_14 = func_571(-797337544, 1332430638, 300000, "NPS_TimeUntilNextRespawnSave");
	if (Global_1901929->f_44.f_14 < 60000)
	{
		Global_1901929->f_44.f_14 = 300000;
	}
	else if (Global_1901929->f_44.f_14 > 3600000)
	{
		Global_1901929->f_44.f_14 = 300000;
	}
	Global_1901929->f_44.f_7 = func_571(-797337544, 739082073, 500, "NPS_ArbitraryVehicleSyncTime");
	if (Global_1901929->f_44.f_7 < 0)
	{
		Global_1901929->f_44.f_7 = 500;
	}
	else if (Global_1901929->f_44.f_7 > 15000)
	{
		Global_1901929->f_44.f_7 = 500;
	}
	Global_1901929->f_44.f_8 = func_571(-797337544, -1950073331, 2000, "NPS_ArbitraryVehicleSpectatedTime");
	if (Global_1901929->f_44.f_8 < 0)
	{
		Global_1901929->f_44.f_8 = 2000;
	}
	else if (Global_1901929->f_44.f_8 > 15000)
	{
		Global_1901929->f_44.f_8 = 2000;
	}
	Global_1901929->f_44.f_15 = func_571(-797337544, 1880281512, 1, "NPS_AllowAmbientPedLootingWhenWanted");
	Global_1901929->f_44.f_26 = func_571(-797337544, -1036045213, 300, "NET_FLOW_STORY_COOLDOWN");
	Global_1901929->f_44.f_27 = func_571(-797337544, -621667332, 300, "NET_FLOW_STORY_COOLDOWN_REPLAY");
	Global_1901929->f_44.f_28 = func_571(-797337544, 1042967756, 10000, "NPS_Kick_Alert_Failsafe");
	func_576();
}

void func_68(int iParam0)
{
	func_575("sNetPlayerStatusTunables", "k_tuneDesiredSpawnMinRange", MISC::_0x2B6846401D68E563(Global_1901929->f_44, 4), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tuneDesiredSpawnMaxRange", MISC::_0x2B6846401D68E563(Global_1901929->f_44.f_1, 4), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tuneGenericSeedBaseRange", MISC::_0x2B6846401D68E563(Global_1901929->f_44.f_2, 4), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tuneGenericSeedBaseScalar", MISC::_0x2B6846401D68E563(Global_1901929->f_44.f_3, 4), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tuneSpawnSearchAttempts", func_574(Global_1901929->f_44.f_4), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tuneDeathCamHoldTime_FreeRoam", func_574(Global_1901929->f_44.f_5), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tuneDeathCamHoldTime_Instanced", func_574(Global_1901929->f_44.f_6), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tuneArbitraryVehicleSyncTime", func_574(Global_1901929->f_44.f_7), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tuneArbitraryVehicleSpectatedTime", func_574(Global_1901929->f_44.f_8), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tuneGhostVehicleTime", func_574(Global_1901929->f_44.f_9), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tuneAnimalInvulnerabilityTime", func_574(Global_1901929->f_44.f_10), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tuneSpawnInvulnerabilityTime", func_574(Global_1901929->f_44.f_11), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tuneValidPositionTime", func_574(Global_1901929->f_44.f_12), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tuneScanRequestTimeOut", func_574(Global_1901929->f_44.f_13), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tuneTimeUntilNextRespawnSave", func_574(Global_1901929->f_44.f_14), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tuneAllowAmbientPedLootingWhenWanted", func_574(Global_1901929->f_44.f_15), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tuneAFK_Start", func_574(Global_1901929->f_44.f_16), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tuneAFK_Warning_0", func_574(Global_1901929->f_44.f_17), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tuneAFK_Warning_1", func_574(Global_1901929->f_44.f_18), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tuneAFK_Warning_2", func_574(Global_1901929->f_44.f_19), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tuneAFK_Kick", func_574(Global_1901929->f_44.f_20), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tune_IC_AFK_Start", func_574(Global_1901929->f_44.f_21), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tune_IC_AFK_Warning_0", func_574(Global_1901929->f_44.f_22), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tune_IC_AFK_Warning_1", func_574(Global_1901929->f_44.f_23), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tune_IC_AFK_Warning_2", func_574(Global_1901929->f_44.f_24), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tune_IC_AFK_Kick", func_574(Global_1901929->f_44.f_25), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tune_FlowStoryCooldown", func_574(Global_1901929->f_44.f_26), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tune_FlowStoryCooldownReplay", func_574(Global_1901929->f_44.f_27), iParam0);
	func_575("sNetPlayerStatusTunables", "k_tune_Kick_Alert_Failsafe", func_574(Global_1901929->f_44.f_28), iParam0);
}

void func_69()
{
	Global_1901929->f_73 = func_571(-238807603, 1245095171, 240000, "TIME_FOR_FAIL_SAFE_STREAM_VOLUME");
	if (Global_1901929->f_73 < 0)
	{
		Global_1901929->f_73 = 240000;
	}
	else if (Global_1901929->f_73 > 480000)
	{
		Global_1901929->f_73 = 240000;
	}
	Global_1901929->f_73.f_1 = func_571(-238807603, -1452564813, 240000, "TIME_FOR_FAIL_SAFE_LOAD_SCENE");
	if (Global_1901929->f_73.f_1 < 0)
	{
		Global_1901929->f_73.f_1 = 240000;
	}
	else if (Global_1901929->f_73.f_1 > 480000)
	{
		Global_1901929->f_73.f_1 = 240000;
	}
	Global_1901929->f_73.f_2 = func_571(-238807603, 1487950948, 30000, "TIME_TO_WAIT_ARBITRARY_TIMER_FOR_STREAMING_SHORT");
	if (Global_1901929->f_73.f_2 < 0)
	{
		Global_1901929->f_73.f_2 = 30000;
	}
	else if (Global_1901929->f_73.f_2 > 60000)
	{
		Global_1901929->f_73.f_2 = 30000;
	}
	Global_1901929->f_73.f_3 = func_571(-238807603, -1616099228, 60000, "TIME_TO_WAIT_ARBITRARY_TIMER_FOR_STREAMING_MID");
	if (Global_1901929->f_73.f_3 < 0)
	{
		Global_1901929->f_73.f_3 = 60000;
	}
	else if (Global_1901929->f_73.f_3 > 120000)
	{
		Global_1901929->f_73.f_3 = 60000;
	}
	Global_1901929->f_73.f_4 = func_571(-238807603, -1527503058, 120000, "TIME_TO_WAIT_ARBITRARY_TIMER_FOR_STREAMING_LONG");
	if (Global_1901929->f_73.f_4 < 0)
	{
		Global_1901929->f_73.f_4 = 120000;
	}
	else if (Global_1901929->f_73.f_4 > 240000)
	{
		Global_1901929->f_73.f_4 = 120000;
	}
	Global_1901929->f_73.f_5 = func_571(-238807603, -970036100, 1000, "TIME_TO_WAIT_ARBITRARY_TIMER_FOR_SYNC_S");
	if (Global_1901929->f_73.f_5 < 0)
	{
		Global_1901929->f_73.f_5 = 1000;
	}
	else if (Global_1901929->f_73.f_5 > 2000)
	{
		Global_1901929->f_73.f_5 = 1000;
	}
	Global_1901929->f_73.f_6 = func_571(-238807603, -1618993396, 1500, "TIME_TO_WAIT_ARBITRARY_TIMER_FOR_SYNC_M");
	if (Global_1901929->f_73.f_6 < 0)
	{
		Global_1901929->f_73.f_6 = 1500;
	}
	else if (Global_1901929->f_73.f_6 > 3000)
	{
		Global_1901929->f_73.f_6 = 1500;
	}
	Global_1901929->f_73.f_7 = func_571(-238807603, -1329708664, 2000, "TIME_TO_WAIT_ARBITRARY_TIMER_FOR_SYNC_L");
	if (Global_1901929->f_73.f_7 < 0)
	{
		Global_1901929->f_73.f_7 = 2000;
	}
	else if (Global_1901929->f_73.f_7 > 4000)
	{
		Global_1901929->f_73.f_7 = 2000;
	}
	Global_1901929->f_73.f_8 = func_571(-238807603, 1414789715, 2500, "TIME_TO_WAIT_ARBITRARY_TIMER_FOR_SYNC_XL");
	if (Global_1901929->f_73.f_8 < 0)
	{
		Global_1901929->f_73.f_8 = 2500;
	}
	else if (Global_1901929->f_73.f_8 > 5000)
	{
		Global_1901929->f_73.f_8 = 2500;
	}
	Global_1901929->f_73.f_9 = func_571(-238807603, 1257546735, 3000, "TIME_TO_WAIT_ARBITRARY_TIMER_FOR_SYNC_XXL");
	if (Global_1901929->f_73.f_9 < 0)
	{
		Global_1901929->f_73.f_9 = 3000;
	}
	else if (Global_1901929->f_73.f_9 > 6000)
	{
		Global_1901929->f_73.f_9 = 3000;
	}
	Global_1901929->f_73.f_10 = func_571(-238807603, 342446520, 0, "TIME_TO_WAIT_SPECTATOR_LIFETIME");
	if (Global_1901929->f_73.f_10 < 0)
	{
		Global_1901929->f_73.f_10 = 0;
	}
	else if (Global_1901929->f_73.f_10 > 10000)
	{
		Global_1901929->f_73.f_10 = 0;
	}
	Global_1901929->f_73.f_11 = func_571(-238807603, -956896417, 15000, "TIME_TO_WAIT_SPECTATOR_TIMEOUT");
	if (Global_1901929->f_73.f_11 < 0)
	{
		Global_1901929->f_73.f_11 = 15000;
	}
	else if (Global_1901929->f_73.f_11 > 30000)
	{
		Global_1901929->f_73.f_11 = 15000;
	}
	Global_1901929->f_73.f_12 = func_571(-238807603, -634661685, 4000, "TIME_TO_WAIT_SPECTATOR_HOLD_ON_BODY");
	if (Global_1901929->f_73.f_12 < 0)
	{
		Global_1901929->f_73.f_12 = 4000;
	}
	else if (Global_1901929->f_73.f_12 > 8000)
	{
		Global_1901929->f_73.f_12 = 4000;
	}
	Global_1901929->f_73.f_13 = func_571(-238807603, -817278980, 8000, "TIME_TO_WAIT_SPECTATOR_KILLCAM_HOLD_ON_BODY");
	if (Global_1901929->f_73.f_13 < 0)
	{
		Global_1901929->f_73.f_13 = 8000;
	}
	else if (Global_1901929->f_73.f_13 > 16000)
	{
		Global_1901929->f_73.f_13 = 8000;
	}
	Global_1901929->f_73.f_14 = func_571(-238807603, -75640352, 0, "TIME_TO_WAIT_ARBITRARY_TIMER_FOR_CONTEXTS");
	if (Global_1901929->f_73.f_14 < 0)
	{
		Global_1901929->f_73.f_14 = 0;
	}
	else if (Global_1901929->f_73.f_14 > 10000)
	{
		Global_1901929->f_73.f_14 = 0;
	}
	Global_1901929->f_73.f_16 = func_571(-238807603, 1749978647, 570, "USE_CONTEXT_RESPAWN_IF_UCM_AUTO_FILL_THEN_HOLD_TIME");
	if (Global_1901929->f_73.f_16 < 100)
	{
		Global_1901929->f_73.f_16 = 570;
	}
	else if (Global_1901929->f_73.f_16 > 30000)
	{
		Global_1901929->f_73.f_16 = 570;
	}
	Global_1901929->f_73.f_17 = func_571(-238807603, -340460211, 15000, "USE_CONTEXT_RESPAWN_IF_UCM_AUTO_FILL_THEN_FILL_TIME");
	if (Global_1901929->f_73.f_17 < 100)
	{
		Global_1901929->f_73.f_17 = 15000;
	}
	else if (Global_1901929->f_73.f_17 > 30000)
	{
		Global_1901929->f_73.f_17 = 15000;
	}
	Global_1901929->f_73.f_18 = func_571(-238807603, 987588206, 570, "USE_CONTEXT_RESPAWN_IF_NOT_UCM_AUTO_FILL_THEN_HOLD_TIME");
	if (Global_1901929->f_73.f_18 < 100)
	{
		Global_1901929->f_73.f_18 = 570;
	}
	else if (Global_1901929->f_73.f_18 > 30000)
	{
		Global_1901929->f_73.f_18 = 570;
	}
	Global_1901929->f_73.f_19 = func_571(-238807603, 1807889463, 4000, "USE_CONTEXT_RESPAWN_IF_NOT_UCM_AUTO_FILL_THEN_FILL_TIME");
	if (Global_1901929->f_73.f_19 < 100)
	{
		Global_1901929->f_73.f_19 = 4000;
	}
	else if (Global_1901929->f_73.f_19 > 30000)
	{
		Global_1901929->f_73.f_19 = 4000;
	}
}

void func_70(int iParam0)
{
	func_575("sNetSpecCamTunables", "k_tuneTIME_FOR_FAIL_SAFE_STREAM_VOLUME", func_574(Global_1901929->f_73), iParam0);
	func_575("sNetSpecCamTunables", "k_tuneTIME_FOR_FAIL_SAFE_LOAD_SCENE", func_574(Global_1901929->f_73.f_1), iParam0);
	func_575("sNetSpecCamTunables", "k_tuneTIME_TO_WAIT_ARBITRARY_TIMER_FOR_STREAMING_SHORT", func_574(Global_1901929->f_73.f_2), iParam0);
	func_575("sNetSpecCamTunables", "k_tuneTIME_TO_WAIT_ARBITRARY_TIMER_FOR_STREAMING_MID", func_574(Global_1901929->f_73.f_3), iParam0);
	func_575("sNetSpecCamTunables", "k_tuneTIME_TO_WAIT_ARBITRARY_TIMER_FOR_STREAMING_LONG", func_574(Global_1901929->f_73.f_4), iParam0);
	func_575("sNetSpecCamTunables", "k_tuneTIME_TO_WAIT_ARBITRARY_TIMER_FOR_SYNC_S", func_574(Global_1901929->f_73.f_5), iParam0);
	func_575("sNetSpecCamTunables", "k_tuneTIME_TO_WAIT_ARBITRARY_TIMER_FOR_SYNC_M", func_574(Global_1901929->f_73.f_6), iParam0);
	func_575("sNetSpecCamTunables", "k_tuneTIME_TO_WAIT_ARBITRARY_TIMER_FOR_SYNC_L", func_574(Global_1901929->f_73.f_7), iParam0);
	func_575("sNetSpecCamTunables", "k_tuneTIME_TO_WAIT_ARBITRARY_TIMER_FOR_SYNC_XL", func_574(Global_1901929->f_73.f_8), iParam0);
	func_575("sNetSpecCamTunables", "k_tuneTIME_TO_WAIT_ARBITRARY_TIMER_FOR_SYNC_XXL", func_574(Global_1901929->f_73.f_9), iParam0);
	func_575("sNetSpecCamTunables", "k_tuneTIME_TO_WAIT_SPECTATOR_LIFETIME", func_574(Global_1901929->f_73.f_10), iParam0);
	func_575("sNetSpecCamTunables", "k_tuneTIME_TO_WAIT_SPECTATOR_TIMEOUT", func_574(Global_1901929->f_73.f_11), iParam0);
	func_575("sNetSpecCamTunables", "k_tuneTIME_TO_WAIT_SPECTATOR_HOLD_ON_BODY", func_574(Global_1901929->f_73.f_12), iParam0);
	func_575("sNetSpecCamTunables", "k_tuneTIME_TO_WAIT_SPECTATOR_KILLCAM_HOLD_ON_BODY", func_574(Global_1901929->f_73.f_13), iParam0);
	func_575("sNetSpecCamTunables", "k_tuneTIME_TO_WAIT_ARBITRARY_TIMER_FOR_CONTEXTS", func_574(Global_1901929->f_73.f_14), iParam0);
	func_575("sNetSpecCamTunables", "k_tuneUSE_CONTEXT_RESPAWN_IF_UCM_AUTO_FILL_THEN_HOLD_TIME", func_574(Global_1901929->f_73.f_16), iParam0);
	func_575("sNetSpecCamTunables", "k_tuneUSE_CONTEXT_RESPAWN_IF_UCM_AUTO_FILL_THEN_FILL_TIME", func_574(Global_1901929->f_73.f_17), iParam0);
	func_575("sNetSpecCamTunables", "k_tuneUSE_CONTEXT_RESPAWN_IF_NOT_UCM_AUTO_FILL_THEN_HOLD_TIME", func_574(Global_1901929->f_73.f_18), iParam0);
	func_575("sNetSpecCamTunables", "k_tuneUSE_CONTEXT_RESPAWN_IF_NOT_UCM_AUTO_FILL_THEN_FILL_TIME", func_574(Global_1901929->f_73.f_19), iParam0);
}

void func_71()
{
	Global_1901929->f_38 = func_571(1497760498, -1005424415, 0, "BGS_ExpectedVersion");
	Global_1901929->f_38.f_1 = func_571(1497760498, -2117171926, 0, "BGS_POSIX_TimeForNextKick");
	Global_1901929->f_38.f_2 = func_571(1497760498, -1628711375, 0, "BGS_SpecialEvent");
	Global_1901929->f_38.f_3 = func_571(1497760498, 1748514001, 0, "BGS_POSIX_SpecialEventStart");
	Global_1901929->f_38.f_4 = func_571(1497760498, -1940141039, 0, "BGS_POSIX_SpecialEventEnd");
	Global_1901929->f_38.f_5 = func_571(1497760498, -1888483188, 0, "BGS_SpecialEventBitset");
}

void func_72(int iParam0)
{
	func_575("sBackgroundScriptTunables", "k_iExpectedVersion", func_574(Global_1901929->f_38), iParam0);
	func_575("sBackgroundScriptTunables", "k_iPosix_TimeForNextKick", func_574(Global_1901929->f_38.f_1), iParam0);
	func_575("sBackgroundScriptTunables", "k_iSpecialEvent", func_574(Global_1901929->f_38.f_2), iParam0);
	func_575("sBackgroundScriptTunables", "k_iPosix_SpecialEventStart", func_574(Global_1901929->f_38.f_3), iParam0);
	func_575("sBackgroundScriptTunables", "k_iPosix_SpecialEventEnd", func_574(Global_1901929->f_38.f_4), iParam0);
}

void func_73()
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	while (iVar0 <= (Global_1901929->f_93 - 1))
	{
		Global_1901929->f_93[iVar0] = func_573(1847284070, func_577(iVar0), 500f, &uVar1);
		iVar0++;
	}
	Global_1901929->f_93.f_3 = func_573(1847284070, 1477989500, 0.65f, "NET_HUD_VOICE_CHAT_FADE_START_THRESHOLD");
	Global_1901929->f_93.f_4 = func_571(1847284070, 159908171, 5000, "NET_HUD_VOICE_CHAT_ALLOW_ON_BLACK_RESPAWN_SCREEN_MS");
	Global_1901929->f_93.f_5 = func_573(1847284070, -1310511072, 40f, "NET_HUD_GAMERTAG_VISIBILITY_DIST_DISTANT");
	Global_1901929->f_93.f_6 = func_573(1847284070, -1938155903, 20f, "NET_HUD_GAMERTAG_VISIBILITY_DIST_CLOSE");
	Global_1901929->f_93.f_7 = func_573(1847284070, 1423723210, 50f, "NET_HUD_GAMERTAG_VISIBILITY_DIST_ALLY_CLOSE");
	Global_1901929->f_93.f_8 = func_573(1847284070, 1200114910, 75f, "NET_HUD_GAMERTAG_VISIBILITY_DIST_ALLY_DISTANT");
	Global_1901929->f_93.f_9 = func_573(1847284070, -241229967, 30f, "NET_HUD_GAMERTAG_VISIBILITY_DIST_FREEROAM_ON_FOOT");
	Global_1901929->f_93.f_10 = func_573(1847284070, -649610895, 40f, "NET_HUD_GAMERTAG_VISIBILITY_DIST_FREEROAM_IN_VEHICLE");
	Global_1901929->f_93.f_11 = func_573(1847284070, -470928170, 300f, "NET_HUD_GAMERTAG_VISIBILITY_DIST_IN_SCOPE");
	Global_1901929->f_93.f_12 = func_573(1847284070, -88094229, 50f, "NET_HUD_GAMERTAG_VISIBILITY_PERCENTAGE");
	Global_1901929->f_93.f_13 = func_573(1847284070, -323509602, 85f, "NET_HUD_GAMERTAG_VISIBILITY_PERCENTAGE_IN_COVER");
	Global_1901929->f_93.f_14 = func_571(1847284070, 538583333, 3, "NET_HUD_HOSTILITY_ENEMY_EVENT_WARNING_SHOT_SECONDS");
	Global_1901929->f_93.f_15 = func_571(1847284070, -1316778079, 15, "NET_HUD_HOSTILITY_ENEMY_EVENT_AIMING_SECONDS");
	Global_1901929->f_93.f_16 = func_571(1847284070, 1708657727, 60, "NET_HUD_HOSTILITY_ENEMY_EVENT_DAMAGE_SECONDS");
	Global_1901929->f_93.f_17 = func_571(1847284070, -1739183470, 180, "NET_HUD_HOSTILITY_ENEMY_EVENT_KILLED_SECONDS");
	Global_1901929->f_93.f_18 = func_573(1847284070, 1765474279, 100f, "NET_HUD_HOSTILITY_ENEMY_EVENT_PERSIST_DISTANCE");
	Global_1901929->f_93.f_19 = func_573(1847284070, 981709315, 20f, "NET_HUD_HOSTILITY_WARNING_SHOT_DISTANCE");
	Global_1901929->f_93.f_20 = func_571(1847284070, 406587654, 1000, "NET_HUD_HOSTILITY_WARNING_SHOT_RUMBLE_MS");
	Global_1901929->f_93.f_21 = func_571(1847284070, 642598680, 100, "NET_HUD_HOSTILITY_WARNING_SHOT_RUMBLE_INTENSITY");
	Global_1901929->f_93.f_22 = func_571(1847284070, -1654226076, 15, "NET_HUD_BLIP_KEEP_VISIBLE_AFTER_BINOCULAR_SECONDS");
	Global_1901929->f_93.f_23 = func_571(1847284070, 1036557954, 2, "NET_HUD_NUM_PLAYERS_TO_UPDATE_PER_FRAME");
	Global_1901929->f_93.f_3 = func_578(Global_1901929->f_93.f_3, 0f, 1f);
	Global_1901929->f_93.f_4 = func_579(Global_1901929->f_93.f_4, 0, 999999999);
	Global_1901929->f_93.f_5 = func_578(Global_1901929->f_93.f_5, 0f, 100f);
	Global_1901929->f_93.f_6 = func_578(Global_1901929->f_93.f_6, 0f, 100f);
	Global_1901929->f_93.f_7 = func_578(Global_1901929->f_93.f_7, 0f, 100f);
	Global_1901929->f_93.f_8 = func_578(Global_1901929->f_93.f_8, 0f, 100f);
	Global_1901929->f_93.f_9 = func_578(Global_1901929->f_93.f_9, 0f, 100f);
	Global_1901929->f_93.f_10 = func_578(Global_1901929->f_93.f_10, 0f, 100f);
	Global_1901929->f_93.f_11 = func_578(Global_1901929->f_93.f_11, 0f, 300f);
	Global_1901929->f_93.f_12 = func_578(Global_1901929->f_93.f_12, 0f, 100f);
	Global_1901929->f_93.f_13 = func_578(Global_1901929->f_93.f_13, 0f, 100f);
	Global_1901929->f_93.f_14 = func_579(Global_1901929->f_93.f_14, 0, 600);
	Global_1901929->f_93.f_15 = func_579(Global_1901929->f_93.f_15, 0, 600);
	Global_1901929->f_93.f_16 = func_579(Global_1901929->f_93.f_16, 0, 600);
	Global_1901929->f_93.f_17 = func_579(Global_1901929->f_93.f_17, 0, 600);
	Global_1901929->f_93.f_18 = func_578(Global_1901929->f_93.f_18, 0f, 10000f);
	Global_1901929->f_93.f_19 = func_578(Global_1901929->f_93.f_19, 0f, 200f);
	Global_1901929->f_93.f_20 = func_579(Global_1901929->f_93.f_20, 0, 10000);
	Global_1901929->f_93.f_21 = func_579(Global_1901929->f_93.f_21, 0, 255);
	Global_1901929->f_93.f_22 = func_579(Global_1901929->f_93.f_22, 0, 30);
	Global_1901929->f_93.f_23 = func_579(Global_1901929->f_93.f_23, 0, 32);
}

void func_74(int iParam0)
{
}

void func_75()
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		StringCopy(&cVar1, func_580(iVar0), 64);
		Var9 = { func_581(cVar1) };
		(Global_1901929->f_117[iVar0 /*2*/])->f_1 = func_571(392702162, MISC::GET_HASH_KEY(&Var9), 0, &Var9);
		Var9 = { func_582(cVar1) };
		Global_1901929->f_117[iVar0 /*2*/] = func_571(392702162, MISC::GET_HASH_KEY(&Var9), 0, &Var9);
		iVar0++;
	}
	cVar1 = { func_583() };
	Var9 = { func_581(cVar1) };
	Global_1901929->f_117.f_41.f_1 = func_571(392702162, MISC::GET_HASH_KEY(&Var9), 0, &Var9);
	Var9 = { func_582(cVar1) };
	Global_1901929->f_117.f_41 = func_571(392702162, MISC::GET_HASH_KEY(&Var9), 0, &Var9);
}

void func_76(int iParam0)
{
}

void func_77()
{
	Global_1901929->f_160 = func_571(-1712745138, 1173105255, 19, "NET_MISSION_REWARDS_MOONSHINE_LIGHT_DAMAGE_BOTTLE_THRESHOLD");
	Global_1901929->f_160.f_1 = func_571(-1712745138, 1731725288, 10, "NET_MISSION_REWARDS_MOONSHINE_HEAVY_DAMAGE_BOTTLE_THRESHOLD");
	Global_1901929->f_160.f_2 = func_571(-1712745138, -360056896, 10001, "NET_FETCH_MANAGER_BOUNTY_CASH_THRESHOLD_LOW");
	Global_1901929->f_160.f_3 = func_571(-1712745138, -70752350, 20001, "NET_FETCH_MANAGER_BOUNTY_CASH_THRESHOLD_MEDIUM");
	Global_1901929->f_160.f_4 = func_571(-1712745138, -82113093, 30001, "NET_FETCH_MANAGER_BOUNTY_CASH_THRESHOLD_HIGH");
	Global_1901929->f_160.f_5 = func_571(-1712745138, 1277088028, 50001, "NET_FETCH_MANAGER_BOUNTY_CASH_THRESHOLD_VERY_HIGH");
	Global_1901929->f_160.f_6 = func_571(-1712745138, -478369504, 300000, "NET_FETCH_MANAGER_BOUNTY_CHECK_TIMER_MS_LOW");
	Global_1901929->f_160.f_7 = func_571(-1712745138, -2033123416, 300000, "NET_FETCH_MANAGER_BOUNTY_CHECK_TIMER_MS_MEDIUM");
	Global_1901929->f_160.f_8 = func_571(-1712745138, -668547960, 300000, "NET_FETCH_MANAGER_BOUNTY_CHECK_TIMER_MS_HIGH");
	Global_1901929->f_160.f_9 = func_571(-1712745138, -733052081, 300000, "NET_FETCH_MANAGER_BOUNTY_CHECK_TIMER_MS_VERY_HIGH");
	Global_1901929->f_160.f_10 = func_571(-1712745138, 967076097, 900000, "NET_FETCH_MANAGER_BOUNTY_COOLDOWN_TIMER_MS_LOW");
	Global_1901929->f_160.f_11 = func_571(-1712745138, 519113985, 900000, "NET_FETCH_MANAGER_BOUNTY_COOLDOWN_TIMER_MS_MEDIUM");
	Global_1901929->f_160.f_12 = func_571(-1712745138, 2100611554, 60000, "NET_FETCH_MANAGER_BOUNTY_COOLDOWN_TIMER_MS_HIGH");
	Global_1901929->f_160.f_13 = func_571(-1712745138, 1608349883, 60000, "NET_FETCH_MANAGER_BOUNTY_COOLDOWN_TIMER_MS_VERY_HIGH");
	Global_1901929->f_160.f_14 = func_571(-1712745138, -742512389, 60000, "NET_FETCH_MANAGER_BOUNTY_POSSE_COOLDOWN_TIMER_MS_LOW");
	Global_1901929->f_160.f_15 = func_571(-1712745138, -1239189547, 60000, "NET_FETCH_MANAGER_BOUNTY_POSSE_COOLDOWN_TIMER_MS_MEDIUM");
	Global_1901929->f_160.f_16 = func_571(-1712745138, -1252992983, 60000, "NET_FETCH_MANAGER_BOUNTY_POSSE_COOLDOWN_TIMER_MS_HIGH");
	Global_1901929->f_160.f_17 = func_571(-1712745138, 473725564, 60000, "NET_FETCH_MANAGER_BOUNTY_POSSE_COOLDOWN_TIMER_MS_VERY_HIGH");
	Global_1901929->f_160.f_18 = func_571(-1712745138, 469029470, 60000, "NET_FETCH_MANAGER_BOUNTY_UGC_COOLDOWN_TIMER_MS");
	Global_1901929->f_160.f_19 = func_573(-1712745138, -2125555674, 0.1f, "NET_FETCH_MANAGER_BOUNTY_PERCENT_CHANCE_LOW");
	Global_1901929->f_160.f_20 = func_573(-1712745138, -2088634839, 0.2f, "NET_FETCH_MANAGER_BOUNTY_PERCENT_CHANCE_MEDIUM");
	Global_1901929->f_160.f_21 = func_573(-1712745138, 794285810, 0.3f, "NET_FETCH_MANAGER_BOUNTY_PERCENT_CHANCE_HIGH");
	Global_1901929->f_160.f_22 = func_573(-1712745138, 1981722894, 0.4f, "NET_FETCH_MANAGER_BOUNTY_PERCENT_CHANCE_VERY_HIGH");
	Global_1901929->f_160.f_23 = func_573(-1712745138, -749297617, 200f, "NET_FETCH_MANAGER_BOUNTY_LAUNCH_VERY_HIGH_DISTANCE");
	Global_1901929->f_160.f_24 = func_573(-1712745138, -371788984, 2500f, "NET_FETCH_MANAGER_BOUNTY_LAUNCH_VERY_HIGH_MAX_JAIL_DISTANCE");
	Global_1901929->f_160.f_25 = func_573(-1712745138, 89451157, 600f, "NET_FETCH_MANAGER_BOUNTY_PVP_TARGET_SELECTION_DISTANCE");
	Global_1901929->f_160.f_26 = func_573(-1712745138, -1255238924, 300f, "NET_NET_FETCH_MANAGER_BOUNTY_PVP_TARGET_ESCAPE_DISTANCE");
	Global_1901929->f_160.f_27 = func_572(-1712745138, -22157813, 1, "NET_FETCH_MANAGER_BOUNTY_CHECK_STATE_BOUNDARIES_LOW");
	Global_1901929->f_160.f_28 = func_572(-1712745138, 1724109719, 1, "NET_FETCH_MANAGER_BOUNTY_CHECK_STATE_BOUNDARIES_MEDIUM");
	Global_1901929->f_160.f_29 = func_572(-1712745138, 1066387590, 1, "NET_FETCH_MANAGER_BOUNTY_CHECK_STATE_BOUNDARIES_HIGH");
	Global_1901929->f_160.f_30 = func_572(-1712745138, -81920209, 1, "NET_FETCH_MANAGER_BOUNTY_CHECK_STATE_BOUNDARIES_VERY_HIGH");
	Global_1901929->f_160.f_31 = func_572(-1712745138, -1768801463, 1, "NET_FETCH_MANAGER_DISABLE_CRIMES_AGAINST_LAW");
	Global_1901929->f_160.f_32 = func_573(-1712745138, -2046069958, 250f, "NET_FETCH_MANAGER_BLIP_DISTANCE_HIDEOUT");
	Global_1901929->f_160.f_33 = func_573(-1712745138, -1202114306, 250f, "NET_FETCH_MANAGER_BLIP_DISTANCE_RUSTLING");
	Global_1901929->f_160.f_34 = func_573(-1712745138, -709791559, 70f, "NET_FETCH_MANAGER_VOLUME_LOCK_RADIUS");
	Global_1901929->f_160.f_35 = func_573(-1712745138, -482526544, 25f, "NET_FETCH_MANAGER_VOLUME_LOCK_EXTRA_RADIUS");
	Global_1901929->f_160.f_36 = func_571(-1712745138, 2023243726, 50, "NET_FETCH_MANAGER_BUSINESS_RAID_WEIGHT_BASE_DEFAULT");
	Global_1901929->f_160.f_38 = func_571(-1712745138, 1325872703, 50, "NET_FETCH_MANAGER_BUSINESS_RAID_CAMP_RAID_WEIGHT");
	Global_1901929->f_160.f_39 = func_571(-1712745138, 155851841, 50, "NET_FETCH_MANAGER_BUSINESS_RAID_KIDNAPPING_WEIGHT");
	Global_1901929->f_160.f_37 = func_571(-1712745138, -1204380937, 30, "NET_FETCH_MANAGER_BUSINESS_RAID_WEIGHT_REDUCTION_BASE");
	Global_1901929->f_160.f_40 = func_571(-1712745138, -846024416, 6, "NET_FETCH_MANAGER_MOONSHINE__GOODS_THRESHOLD_LOW");
	Global_1901929->f_160.f_41 = func_571(-1712745138, -1921553996, 14, "NET_FETCH_MANAGER_MOONSHINE__GOODS_THRESHOLD_HIGH");
	Global_1901929->f_160.f_42 = func_573(-1712745138, 916139451, 3000f, "NET_FETCH_MANAGER_MOONSHINE__MINIMUM_LAUNCH_DISTANCE");
	Global_1901929->f_160.f_43 = func_573(-1712745138, 708367096, 30f, "NET_FETCH_MANAGER_MOONSHINE__PERCENT_CHANCE_LOW");
	Global_1901929->f_160.f_44 = func_573(-1712745138, 389572114, 50f, "NET_FETCH_MANAGER_MOONSHINE__PERCENT_CHANCE_HIGH");
	Global_1901929->f_160.f_45 = func_571(-1712745138, 606846658, 15, "NET_FETCH_MANAGER_CAMP_RAID_HIGH_SUPPLY_WEIGHT_MODIFIER");
	Global_1901929->f_160.f_46 = func_571(-1712745138, -1810243811, 30, "NET_FETCH_MANAGER_CAMP_RAID_SUPPLY_THRESHOLD_LOW");
	Global_1901929->f_160.f_47 = func_571(-1712745138, 276386500, 70, "NET_FETCH_MANAGER_CAMP_RAID_SUPPLY_THRESHOLD_HIGH");
	Global_1901929->f_160.f_48 = func_571(-1712745138, 645233081, 30, "NET_FETCH_MANAGER_CAMP_RAID_GOODS_THRESHOLD_LOW");
	Global_1901929->f_160.f_49 = func_571(-1712745138, -737520467, 70, "NET_FETCH_MANAGER_CAMP_RAID_GOODS_THRESHOLD_HIGH");
	Global_1901929->f_160.f_52 = func_571(-1712745138, 531626225, 3600000, "NET_FETCH_MANAGER_CAMP_RAID_CHECK_TIMER_MS");
	Global_1901929->f_160.f_53 = func_571(-1712745138, 1973850463, 3600000, "NET_FETCH_MANAGER_CAMP_RAID__COOLDOWN_TIMER_MS");
	Global_1901929->f_160.f_54 = func_571(-1712745138, 696410192, 3600000, "NET_FETCH_MANAGER_CAMP_RAID__POSSE_COOLDOWN_TIMER_MS");
	Global_1901929->f_160.f_55 = func_571(-1712745138, -2076192241, 600000, "NET_FETCH_MANAGER_CAMP_RAID__LAUNCH_TIMER_MS_LOW");
	Global_1901929->f_160.f_56 = func_571(-1712745138, -990842351, 750000, "NET_FETCH_MANAGER_CAMP_RAID__LAUNCH_TIMER_MS_MEDIUM");
	Global_1901929->f_160.f_57 = func_571(-1712745138, -827154608, 900000, "NET_FETCH_MANAGER_CAMP_RAID__LAUNCH_TIMER_MS_HIGH");
	Global_1901929->f_160.f_58 = func_573(-1712745138, -582668145, 3000f, "NET_FETCH_MANAGER_CAMP_RAID__LAUNCH_MINIMUM_LAUNCH_DISTANCE");
	Global_1901929->f_160.f_50 = func_573(-1712745138, 1209127393, 0.3f, "NET_FETCH_MANAGER_CAMP_RAID_PERCENT_CHANCE_LOW");
	Global_1901929->f_160.f_51 = func_573(-1712745138, -499842241, 0.5f, "NET_FETCH_MANAGER_CAMP_RAID_PERCENT_CHANCE_HIGH");
	Global_1901929->f_160.f_59 = func_571(-1712745138, -1687724047, 1800000, "NET_FETCH_MANAGER_CAMP_SELL_PVP_COOLDOWN_MS");
	Global_1901929->f_160.f_60 = func_573(-1712745138, 388102920, 0.25f, "NET_FETCH_MANAGER_STEER_BIAS_SLIGHT_DRUNK");
	Global_1901929->f_160.f_61 = func_573(-1712745138, -781324239, 0.35f, "NET_FETCH_MANAGER_STEER_BIAS_MODERATE_DRUNK");
	Global_1901929->f_160.f_62 = func_573(-1712745138, 1559368217, 0.45f, "NET_FETCH_MANAGER_STEER_BIAS_VERY_DRUNK");
	Global_1901929->f_160.f_63 = func_573(-1712745138, 1236995590, 0.1f, "NET_FETCH_MANAGER_MIN_STEER_BIAS_SLIGHT_DRUNK");
	Global_1901929->f_160.f_64 = func_573(-1712745138, -1155433061, 0.2f, "NET_FETCH_MANAGER_MIN_STEER_BIAS_MODERATE_DRUNK");
	Global_1901929->f_160.f_63 = func_573(-1712745138, 2081150345, 0.3f, "NET_FETCH_MANAGER_MIN_STEER_BIAS_VERY_DRUNK");
	Global_1901929->f_160.f_66 = func_571(-1712745138, -208337282, 90000, "NET_FETCH_MANAGER_DRUNK_STAGE_DURATION_MS");
	Global_1901929->f_160.f_67 = func_571(-1712745138, -1079479044, 3000, "NET_FETCH_MANAGER_PROP_SET_CLEAR_TIMEOUT_MS");
	Global_1901929->f_160.f_68 = func_571(-1712745138, 1983707227, 5000, "NET_FETCH_MANAGER_CUTSCENE_STREAM_TIMEOUT_MS");
	Global_1901929->f_160.f_69 = func_571(-1712745138, 868803588, 20000, "NET_FETCH_MANAGER_CUTSCENE_PLAYING_SHOT_TIMEOUT_MS");
	func_579(Global_1901929->f_160, 0, 20);
	func_579(Global_1901929->f_160.f_1, 0, 20);
	func_578(Global_1901929->f_160.f_19, 0f, 1f);
	func_578(Global_1901929->f_160.f_20, 0f, 1f);
	func_578(Global_1901929->f_160.f_21, 0f, 1f);
	func_578(Global_1901929->f_160.f_22, 0f, 1f);
	func_578(Global_1901929->f_160.f_23, 0f, 1000f);
	func_578(Global_1901929->f_160.f_24, 1000f, 10000f);
	func_578(Global_1901929->f_160.f_25, 600f, 2000f);
	func_578(Global_1901929->f_160.f_26, 300f, 1000f);
	func_578(Global_1901929->f_160.f_32, 0f, 400f);
	func_578(Global_1901929->f_160.f_33, 0f, 400f);
	func_578(Global_1901929->f_160.f_34, 0f, 200f);
	func_578(Global_1901929->f_160.f_35, 0f, 200f);
	func_578(Global_1901929->f_160.f_60, 0.1f, 1f);
	func_578(Global_1901929->f_160.f_61, 0.1f, 1f);
	func_578(Global_1901929->f_160.f_62, 0.1f, 1f);
	func_578(Global_1901929->f_160.f_63, 0.1f, 1f);
	func_578(Global_1901929->f_160.f_64, 0.1f, 1f);
	func_578(Global_1901929->f_160.f_63, 0.1f, 1f);
	func_579(Global_1901929->f_160.f_66, 30000, 120000);
	func_579(Global_1901929->f_160.f_67, 0, 60000);
	func_579(Global_1901929->f_160.f_68, 0, 60000);
	func_579(Global_1901929->f_160.f_69, 0, 60000);
}

void func_78(int iParam0)
{
}

void func_79()
{
	Global_1901929->f_230 = func_571(-988916868, -274644496, 20000, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_TOO_CLOSE");
	Global_1901929->f_230.f_1 = func_571(-988916868, 548133692, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_TOO_FAR");
	Global_1901929->f_230.f_2 = func_571(-988916868, 334222813, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_ACTIVE_UID");
	Global_1901929->f_230.f_3 = func_571(-988916868, 1814466578, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_RECENT_PLAY_UNLOCK_LOCAL");
	Global_1901929->f_230.f_4 = func_571(-988916868, 169638331, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_RECENT_PLAY_TYPE_LOCAL");
	Global_1901929->f_230.f_5 = func_571(-988916868, -1670566082, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_PERCENT_CHANCE");
	Global_1901929->f_230.f_6 = func_571(-988916868, -1487308380, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_NO_MISSION_CAN_LAUNCH");
	Global_1901929->f_230.f_7 = func_571(-988916868, -1950852496, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_CURRENT_INTERACTION");
	Global_1901929->f_230.f_8 = func_571(-988916868, 857169378, 60000, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_VOLUME_LOCK");
	Global_1901929->f_230.f_9 = func_571(-988916868, 2145666509, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_CANT_SPAWN_TRAIN");
	Global_1901929->f_230.f_10 = func_571(-988916868, -779257315, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_NO_FREE_SLOT");
	Global_1901929->f_230.f_11 = func_571(-988916868, -794133600, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_NOT_VISIBLE");
	Global_1901929->f_230.f_12 = func_571(-988916868, -912779340, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_NOT_UNLOCKED");
	Global_1901929->f_230.f_13 = func_571(-988916868, -1015964926, 60000, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_NEARBY_DYNAMIC");
	Global_1901929->f_230.f_14 = func_571(-988916868, 751268520, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_OUTSIDE_TOD");
	Global_1901929->f_230.f_15 = func_571(-988916868, 1041779075, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_NO_CAMP");
	Global_1901929->f_230.f_16 = func_571(-988916868, 1519442040, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_NO_TRAIN");
	Global_1901929->f_230.f_17 = func_571(-988916868, 392321224, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_COOLDOWN");
	Global_1901929->f_230.f_18 = func_571(-988916868, -1563223213, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_TRAIN_COOLDOWN");
	Global_1901929->f_230.f_19 = func_571(-988916868, 1762552684, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_MAX_PLAYERS");
	Global_1901929->f_230.f_20 = func_571(-988916868, -1937190324, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_DELAYED");
	Global_1901929->f_230.f_21 = func_571(-988916868, -902166246, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_INVALID_MISSION_TYPE");
	Global_1901929->f_230.f_22 = func_571(-988916868, -952847522, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_HONOR");
	Global_1901929->f_230.f_23 = func_571(-988916868, 1042442902, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_WANTED");
	Global_1901929->f_230.f_24 = func_571(-988916868, -363529840, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_RECENT_COMBAT");
	Global_1901929->f_230.f_25 = func_571(-988916868, 995786782, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_SCREEN_FADED");
	Global_1901929->f_230.f_26 = func_571(-988916868, -551518712, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_CAMP_RUNNING_CONTENT");
	Global_1901929->f_230.f_27 = func_571(-988916868, 1920978316, 0, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_NOT_GANG_LEADER");
	Global_1901929->f_230.f_28 = func_571(-988916868, 100659439, 60000, "NET_BEAT_MANAGER_DISABLED_REASON_DELAY_CONTENT_COOLDOWN");
	Global_1901929->f_230.f_29 = func_571(-988916868, -959670846, 60000, "NET_BEAT_MANAGER_AMBUSH_COMBAT_COOLDOWN_MS");
	Global_1901929->f_230.f_30 = func_573(-988916868, -976864232, 0.75f, "NET_BEAT_MANAGER_PHOTOGRAPHY_RECENT_INTERACT_COOLDOWN_MOD");
	Global_1901929->f_230.f_31 = func_573(-988916868, 442807916, 3.33f, "NET_BEAT_MANAGER_SUSPENSION_TRAP_RECENT_INTERACT_COOLDOWN_MOD");
	Global_1901929->f_230.f_32 = func_571(-988916868, -2064039577, 0, "NET_BEAT_MANAGER_MISSION_SEEN_COOLDOWN_SECONDS");
	Global_1901929->f_230.f_33 = func_571(-988916868, -865246863, 0, "NET_BEAT_MANAGER_MISSION_SEEN_COOLDOWN_MINUTES");
	Global_1901929->f_230.f_34 = func_571(-988916868, -189534501, 0, "NET_BEAT_MANAGER_MISSION_SEEN_COOLDOWN_HOURS");
	Global_1901929->f_230.f_35 = func_571(-988916868, 691083152, 3, "NET_BEAT_MANAGER_MISSION_SEEN_COOLDOWN_DAYS");
	Global_1901929->f_230.f_36 = func_571(-988916868, 278419376, 0, "NET_BEAT_MANAGER_MISSION_COMPLETED_COOLDOWN_SECONDS");
	Global_1901929->f_230.f_37 = func_571(-988916868, 116170938, 0, "NET_BEAT_MANAGER_MISSION_COMPLETED_COOLDOWN_MINUTES");
	Global_1901929->f_230.f_38 = func_571(-988916868, 1115471523, 0, "NET_BEAT_MANAGER_MISSION_COMPLETED_COOLDOWN_HOURS");
	Global_1901929->f_230.f_39 = func_571(-988916868, 950962214, 6, "NET_BEAT_MANAGER_MISSION_COMPLETED_COOLDOWN_DAYS");
	Global_1901929->f_230.f_40 = func_571(-988916868, -1682289989, 0, "NET_BEAT_MANAGER_AMBIENT_TRAIN_COOLDOWN_SECONDS");
	Global_1901929->f_230.f_41 = func_571(-988916868, -1243297637, 0, "NET_BEAT_MANAGER_AMBIENT_TRAIN_COOLDOWN_MINUTES");
	Global_1901929->f_230.f_42 = func_571(-988916868, -613483896, 4, "NET_BEAT_MANAGER_AMBIENT_TRAIN_COOLDOWN_HOURS");
	Global_1901929->f_230.f_43 = func_571(-988916868, -1192831470, 0, "NET_BEAT_MANAGER_AMBIENT_TRAIN_COOLDOWN_DAYS");
	Global_1901929->f_230.f_44 = func_571(-988916868, -866191530, 0, "NET_BEAT_MANAGER_NEARBY_BEATS_COOLDOWN_SECONDS");
	Global_1901929->f_230.f_45 = func_571(-988916868, -237250642, 0, "NET_BEAT_MANAGER_NEARBY_BEATS_COOLDOWN_MINUTES");
	Global_1901929->f_230.f_46 = func_571(-988916868, 1650449268, 4, "NET_BEAT_MANAGER_NEARBY_BEATS_COOLDOWN_HOURS");
	Global_1901929->f_230.f_47 = func_571(-988916868, 1567523392, 0, "NET_BEAT_MANAGER_NEARBY_BEATS_COOLDOWN_DAYS");
	Global_1901929->f_230.f_48 = func_571(-988916868, -1522892620, 900000, "NET_BEAT_MANAGER_LAST_ATTEMPTED_FETCH_UNLOCK_COOLDOWN_MS");
	Global_1901929->f_230.f_49 = func_571(-988916868, -968044174, 432000000, "NET_BEAT_MANAGER_LAST_ATTEMPTED_RE_UNLOCK_COOLDOWN_MS");
	Global_1901929->f_230.f_50 = func_571(-988916868, -601075763, 259200000, "NET_BEAT_MANAGER_LAST_ATTEMPTED_TYPE_COOLDOWN_MS");
	Global_1901929->f_230.f_51 = func_571(-988916868, -1216955759, 3600000, "NET_BEAT_MANAGER_PLAYER_MOONSHINER_BUSINESS_CONTENT_COOLDOWN_MS");
	Global_1901929->f_230.f_52 = func_571(-988916868, 1208962571, 3600000, "NET_BEAT_MANAGER_NATURALIST_CONTENT_COOLDOWN_MS");
	Global_1901929->f_230.f_53 = func_571(-988916868, 1842629966, 1080000, "NET_BEAT_MANAGER_RECENT_INTERACTION_LOCAL_COOLDOWN_MS");
	Global_1901929->f_230.f_54 = func_571(-988916868, -2135172942, 30000, "NET_BEAT_MANAGER_PERCENT_CHANCE_COOLDOWN_MS");
	Global_1901929->f_230.f_55 = func_573(-988916868, 1969647878, 0.6f, "NET_BEAT_MANAGER_DEFAULT_LAUNCH_PERCENT_CHANCE");
	Global_1901929->f_230.f_56 = func_573(-988916868, -612328643, 110f, "NET_BEAT_MANAGER_LAUNCH_DISTANCE_MIN");
	Global_1901929->f_230.f_57 = func_573(-988916868, -391861147, 250f, "NET_BEAT_MANAGER_LAUNCH_DISTANCE_MAX");
	Global_1901929->f_230.f_58 = func_573(-988916868, 1638479399, 300f, "NET_BEAT_MANAGER_AUTO_SHUTDOWN_DISTANCE");
	Global_1901929->f_230.f_59 = func_573(-988916868, -385270636, 550f, "NET_BEAT_MANAGER_MIN_DISTANCE_BETWEEN_BEATS");
	Global_1901929->f_230.f_60 = func_573(-988916868, 862885922, 400f, "NET_BEAT_MANAGER_NEARBY_BEATS_COOLDOWN_RADIUS");
	Global_1901929->f_230.f_61 = func_571(-988916868, 1358206486, 30000, "NET_BEAT_MANAGER_POST_LAUNCH_COOLDOWN_MS");
	Global_1901929->f_230.f_62 = func_571(-988916868, 31506233, 30000, "NET_BEAT_MANAGER_SCRIPT_INACTIVE_SHUTDOWN_MS");
	Global_1901929->f_230.f_63 = func_571(-988916868, 2073960843, 15000, "NET_BEAT_MANAGER_CONTENT_STREAM_FAILSAFE_DURATION_MS");
	Global_1901929->f_230.f_64 = func_571(-988916868, 1164566363, 1000, "NET_BEAT_MANAGER_CONTENT_CENTER_POSITION_UPDATE_INTERVAL_MS");
	func_579(Global_1901929->f_230, 0, 900000);
	func_579(Global_1901929->f_230.f_1, 0, 900000);
	func_579(Global_1901929->f_230.f_2, 0, 900000);
	func_579(Global_1901929->f_230.f_3, 0, 900000);
	func_579(Global_1901929->f_230.f_4, 0, 900000);
	func_579(Global_1901929->f_230.f_5, 0, 900000);
	func_579(Global_1901929->f_230.f_6, 0, 900000);
	func_579(Global_1901929->f_230.f_7, 0, 900000);
	func_579(Global_1901929->f_230.f_8, 0, 900000);
	func_579(Global_1901929->f_230.f_9, 0, 900000);
	func_579(Global_1901929->f_230.f_10, 0, 900000);
	func_579(Global_1901929->f_230.f_11, 0, 900000);
	func_579(Global_1901929->f_230.f_12, 0, 900000);
	func_579(Global_1901929->f_230.f_13, 0, 900000);
	func_579(Global_1901929->f_230.f_14, 0, 900000);
	func_579(Global_1901929->f_230.f_15, 0, 900000);
	func_579(Global_1901929->f_230.f_16, 0, 900000);
	func_579(Global_1901929->f_230.f_17, 0, 900000);
	func_579(Global_1901929->f_230.f_18, 0, 900000);
	func_579(Global_1901929->f_230.f_19, 0, 900000);
	func_579(Global_1901929->f_230.f_20, 0, 900000);
	func_579(Global_1901929->f_230.f_21, 0, 900000);
	func_579(Global_1901929->f_230.f_22, 0, 900000);
	func_579(Global_1901929->f_230.f_23, 0, 900000);
	func_579(Global_1901929->f_230.f_24, 0, 900000);
	func_579(Global_1901929->f_230.f_25, 0, 900000);
	func_579(Global_1901929->f_230.f_26, 0, 900000);
	func_579(Global_1901929->f_230.f_27, 0, 900000);
	func_579(Global_1901929->f_230.f_28, 0, 900000);
	func_579(Global_1901929->f_230.f_29, 0, 900000);
	func_578(Global_1901929->f_230.f_30, 0f, 5f);
	func_578(Global_1901929->f_230.f_31, 0f, 5f);
	func_579(Global_1901929->f_230.f_32, 0, 60);
	func_579(Global_1901929->f_230.f_33, 0, 60);
	func_579(Global_1901929->f_230.f_34, 0, 24);
	func_579(Global_1901929->f_230.f_35, 0, 10);
	func_579(Global_1901929->f_230.f_36, 0, 60);
	func_579(Global_1901929->f_230.f_37, 0, 60);
	func_579(Global_1901929->f_230.f_38, 0, 24);
	func_579(Global_1901929->f_230.f_39, 0, 10);
	func_579(Global_1901929->f_230.f_40, 0, 60);
	func_579(Global_1901929->f_230.f_41, 0, 60);
	func_579(Global_1901929->f_230.f_42, 0, 24);
	func_579(Global_1901929->f_230.f_43, 0, 10);
	func_579(Global_1901929->f_230.f_44, 0, 60);
	func_579(Global_1901929->f_230.f_45, 0, 60);
	func_579(Global_1901929->f_230.f_46, 0, 24);
	func_579(Global_1901929->f_230.f_47, 0, 10);
	func_579(Global_1901929->f_230.f_51, 0, 2000000000);
	func_579(Global_1901929->f_230.f_52, 0, 2000000000);
	func_579(Global_1901929->f_230.f_48, 0, 2000000000);
	func_579(Global_1901929->f_230.f_49, 0, 2000000000);
	func_579(Global_1901929->f_230.f_50, 0, 2000000000);
	func_579(Global_1901929->f_230.f_53, 0, 36000000);
	func_579(Global_1901929->f_230.f_54, 0, 900000);
	func_578(Global_1901929->f_230.f_55, 0f, 1f);
	func_578(Global_1901929->f_230.f_56, 0f, 400f);
	func_578(Global_1901929->f_230.f_57, 0f, 400f);
	func_578(Global_1901929->f_230.f_58, 0f, 2000f);
	func_578(Global_1901929->f_230.f_59, 0f, 2000f);
	func_578(Global_1901929->f_230.f_60, 0f, 2000f);
	func_579(Global_1901929->f_230.f_61, 0, 900000);
	func_579(Global_1901929->f_230.f_62, 0, 900000);
	func_579(Global_1901929->f_230.f_63, 0, 900000);
	func_579(Global_1901929->f_230.f_64, 0, 15000);
}

void func_80(int iParam0)
{
}

void func_81()
{
	Global_1901929->f_295 = func_571(-379711458, 1323597203, 181000, "k_VSMS_LAUNCH_TIMEOUT");
	Global_1901929->f_295.f_1 = func_571(-379711458, -151838833, 45000, "k_VSMS_LAUNCH_TIMEOUT_SHORT");
	Global_1901929->f_295.f_4 = func_571(-379711458, 995316537, 30000, "k_VSMS_PLAYERS_TO_PARTICIPANTS");
	Global_1901929->f_295.f_5 = func_571(-379711458, -1237974787, 100, "k_VSMS_SPLASH_DURATION");
	Global_1901929->f_295.f_6 = func_571(-379711458, 615485541, 10, "k_VSMS_MAX_RACES_TO_RUN");
	Global_1901929->f_295.f_8 = func_571(-379711458, -455791158, 30000, "k_VSMS_MIN_PLAYER_DECAY_INITIAL_TIME");
	Global_1901929->f_295.f_9 = func_571(-379711458, -1434537174, 60000, "k_VSMS_MIN_PLAYER_DECAY_SECOND_TIME");
	Global_1901929->f_295.f_10 = func_571(-379711458, 1323198254, 90000, "k_VSMS_MIN_PLAYER_DECAY_FINAL_TIME");
	Global_1901929->f_295.f_11 = func_573(-379711458, 962185042, 0.75f, "k_VSMS_MIN_PLAYER_DECAY_INITIAL_PERCENTAGE");
	Global_1901929->f_295.f_12 = func_573(-379711458, 710108580, 0.5f, "k_VSMS_MIN_PLAYER_DECAY_SECOND_PERCENTAGE");
	Global_1901929->f_295.f_13 = func_573(-379711458, -1001614244, 0.25f, "k_VSMS_MIN_PLAYER_DECAY_FINAL_PERCENTAGE");
	Global_1901929->f_295.f_2 = func_571(-379711458, 1435066813, 5000, "k_VSMS_SORTING_BUSY_TIME");
	if (Global_1901929->f_295.f_2 < 1000)
	{
		Global_1901929->f_295.f_2 = 5000;
	}
	else if (Global_1901929->f_295.f_2 > 50000)
	{
		Global_1901929->f_295.f_2 = 5000;
	}
	Global_1901929->f_295.f_7 = func_571(-379711458, 904509931, 2000, "k_VSMS_BACKFILL_BUFFER_DURATION");
	if (Global_1901929->f_295.f_7 < 0)
	{
		Global_1901929->f_295.f_7 = 2000;
	}
	else if (Global_1901929->f_295.f_7 > 10000)
	{
		Global_1901929->f_295.f_7 = 2000;
	}
	Global_1901929->f_295.f_3 = func_571(-379711458, -1190810246, 30000, "k_VSMS_SORTING_BACKFILL_TIMEOUT");
	if (Global_1901929->f_295.f_3 < 1000)
	{
		Global_1901929->f_295.f_3 = 30000;
	}
	else if (Global_1901929->f_295.f_3 > 60000)
	{
		Global_1901929->f_295.f_3 = 30000;
	}
	Global_1901929->f_295.f_15 = func_571(-379711458, 765926405, 60000, "T_LauncherUGCStallTimeout");
	if (Global_1901929->f_295.f_15 < 1)
	{
		Global_1901929->f_295.f_15 = 60000;
	}
	else if (Global_1901929->f_295.f_15 > 600000)
	{
		Global_1901929->f_295.f_15 = 60000;
	}
	Global_1901929->f_295.f_16 = func_571(-379711458, -1322637691, 15000, "T_LauncherUGCPhotoStallTimeout");
	if (Global_1901929->f_295.f_16 < 1)
	{
		Global_1901929->f_295.f_16 = 15000;
	}
	else if (Global_1901929->f_295.f_16 > 30000)
	{
		Global_1901929->f_295.f_16 = 15000;
	}
	Global_1901929->f_295.f_14 = func_571(-379711458, -440622448, 100, "k_NET_PLAYLIST_CORONA_ALPHA");
	Global_1901929->f_295.f_17 = func_571(-379711458, 246164842, 1440, "iEasyTargetRefreshRateS");
	Global_1901929->f_295.f_18 = func_571(-379711458, -1800961845, 2160, "iMediumTargetRefreshRateS");
	Global_1901929->f_295.f_19 = func_571(-379711458, 1317466199, 2880, "iHardTargetRefreshRateS");
	Global_1901929->f_295.f_20 = func_571(-379711458, -180077825, 600000, "iLegendaryBountyToastDelay");
	Global_1901929->f_295.f_21 = func_571(-379711458, 119251901, 3, "iMaxBountyServerRequests");
	Global_1901929->f_295.f_22 = func_571(-379711458, 784634987, 5000, "iBountyServerRequestTimeoutMS");
	Global_1901929->f_295.f_23 = func_572(-379711458, 265142393, 1, "bAllowRelaunch");
	Global_1901929->f_295.f_24 = func_572(-379711458, 572389285, 1, "bWaitForHorseInSplit");
	Global_1901929->f_295.f_25 = func_571(-379711458, 1044590092, 5000, "iGangLeaderWaitForGangLockMS");
	Global_1901929->f_295.f_26 = func_571(-379711458, -349047706, 5000, "iGangLeaderSplitterLoadTimeMS");
	Global_1901929->f_295.f_27 = func_571(-379711458, -31703306, 10000, "iGangLeaderWaitForSplitMS");
	Global_1901929->f_295.f_28 = func_571(-379711458, 897656029, 5000, "iGangLeaderWaitForFlagsMS");
	Global_1901929->f_295.f_29 = func_571(-379711458, 308711505, 5000, "iGangLeaderWaitForScreenFadeMS");
	Global_1901929->f_295.f_30 = func_571(-379711458, -52365253, 10000, "iGangLeaderWaitForGangMembersToReceiveInstancedRequestMS");
	Global_1901929->f_295.f_31 = func_571(-379711458, -416725773, 5000, "iGangLeaderWaitForGangMembersToLockHorsesMS");
	Global_1901929->f_295.f_32 = func_571(-379711458, 1719931408, 60000, "iGangLeaderWaitForAmbientMissionsToShutdownMS");
	Global_1901929->f_295.f_33 = func_571(-379711458, 29148034, 75000, "iGangLeaderWaitForVolumeLocksToResolve");
	Global_1901929->f_295.f_34 = func_571(-379711458, -602930666, 7000, "iGangMemberWaitForRespawnMS");
	Global_1901929->f_295.f_35 = func_571(-379711458, 1761106634, 5000, "iGangMemberWaitForHorseCreateMS");
	Global_1901929->f_295.f_36 = func_571(-379711458, -1033038473, 1000, "iGangMemberInstanceDataRequestEventCooldownMS");
	Global_1901929->f_295.f_37 = func_571(-379711458, -566008827, 10000, "iRebroadcastDeinstanceData");
	Global_1901929->f_295.f_38 = func_571(-379711458, -850447160, 45000, "iRebrodcastDeinstanceSession");
	Global_1901929->f_295.f_39 = func_571(-379711458, 1778330977, 60000, "GFH_MANAGER_ONLINE__k_TIMEOUT_MS");
	Global_1901929->f_295.f_40 = func_572(-379711458, 1513453366, 0, "GFH_MANAGER_ONLINE__SHERIFFS_RESPECT_BOUNTY");
	Global_1901929->f_295.f_53 = func_571(-379711458, 1795901467, 25, "iNetGunForHireMediumTargetSelectionRate");
	Global_1901929->f_295.f_54 = func_573(-379711458, -99954362, 1000f, "fNetGunForHireNearMissionDistance");
	Global_1901929->f_295.f_55 = func_573(-379711458, 172432556, 1600f, "fNetGunForHireMediumMissionDistance");
	Global_1901929->f_295.f_56 = func_573(-379711458, -311014393, 2500f, "fNetGunForHireFarMissionDistance");
	Global_1901929->f_295.f_41 = func_571(-379711458, -1874456806, 1, "GFH_MANAGER_OFFLINE__k_GIVER_COOLDOWN__DAYS");
	Global_1901929->f_295.f_42 = func_571(-379711458, -929758813, 0, "iNetGunForHireMoonshinerGiverCooldownInGameDays");
	Global_1901929->f_295.f_43 = func_571(-379711458, -1700960300, 8, "iNetGunForHireMoonshinerGiverCooldownInGameHours");
	Global_1901929->f_295.f_44 = func_571(-379711458, 174295155, 0, "iNetGunForHireMoonshinerGiverCooldownInGameMinutes");
	Global_1901929->f_295.f_45 = func_571(-379711458, -929275223, 1, "iNetGunForHireGiverIgnoreBlockingMissionCooldownInGameDays");
	Global_1901929->f_295.f_46 = func_571(-379711458, -1067922877, 0, "iNetGunForHireGiverIgnoreBlockingMissionCooldownInGameHours");
	Global_1901929->f_295.f_49 = func_571(-379711458, -2054999908, 1, "GFH_MANAGER_OFFLINE__k_MISSION_COOLDOWN__DAYS");
	Global_1901929->f_295.f_47 = func_571(-379711458, 453972100, 30, "GFH_MANAGER_OFFLINE__k_GIVER_COOLDOWN_SHOT_NEAR__MINUTES");
	Global_1901929->f_295.f_48 = func_571(-379711458, -1631630598, 0, "GFH_MANAGER_OFFLINE__k_GIVER_COOLDOWN_SHOT_NEAR__HOURS");
	Global_1901929->f_295.f_162 = func_573(-379711458, -1295046052, 100f, "GFH_SHARED__k_PVP_DISPLAY_DISTANCE");
	Global_1901929->f_295.f_163 = func_571(-379711458, 1279525321, 120000, "GFH_SHARED__k_PVP_GLOBAL_SIGNAL_DELAY_MS");
	Global_1901929->f_295.f_50 = func_571(-379711458, -2047559837, 0, "NetGunForHireMissionWeightAdjustment");
	Global_1901929->f_295.f_51 = func_571(-379711458, 712359276, 0, "NetGunForHireMissionWeightAdjustmentCount");
	Global_1901929->f_295.f_52 = func_571(-379711458, -2117366234, 0, "NetGunForHireMissionPassiveWeightAdjustment");
	Global_1901929->f_295.f_57 = func_571(-379711458, 624299226, 25, "MissionWeight_Assassination");
	Global_1901929->f_295.f_101 = func_572(-379711458, -1552297973, 0, "UseWeightAdjustment_Assassination");
	Global_1901929->f_295.f_58 = func_571(-379711458, -1679958491, 25, "MissionWeight_AssassinationTracking");
	Global_1901929->f_295.f_102 = func_572(-379711458, 143697097, 0, "UseWeightAdjustment_AssassinationTracking");
	Global_1901929->f_295.f_59 = func_571(-379711458, -678365254, 25, "MissionWeight_AssassinationPvpPosse");
	Global_1901929->f_295.f_103 = func_572(-379711458, 2020757488, 0, "UseWeightAdjustment_AssassinationPvpPosse");
	Global_1901929->f_295.f_60 = func_571(-379711458, 433697539, 25, "MissionWeight_AssassinationPvpPlayer");
	Global_1901929->f_295.f_104 = func_572(-379711458, -64438695, 0, "UseWeightAdjustment_AssassinationPvpPlayer");
	Global_1901929->f_295.f_61 = func_571(-379711458, -216147327, 25, "MissionWeight_CoachHoldupKidnap");
	Global_1901929->f_295.f_105 = func_572(-379711458, -538944420, 0, "UseWeightAdjustment_CoachHoldupKidnap");
	Global_1901929->f_295.f_62 = func_571(-379711458, 463763750, 25, "MissionWeight_CoachHoldupRobbery");
	Global_1901929->f_295.f_106 = func_572(-379711458, -759625757, 0, "UseWeightAdjustment_CoachHoldupRobbery");
	Global_1901929->f_295.f_63 = func_571(-379711458, -1362443507, 25, "MissionWeight_ConvoyEscort");
	Global_1901929->f_295.f_107 = func_572(-379711458, -1636485150, 0, "UseWeightAdjustment_ConvoyEscort");
	Global_1901929->f_295.f_64 = func_571(-379711458, 1664703677, 25, "MissionWeight_DeliveryPackage");
	Global_1901929->f_295.f_108 = func_572(-379711458, -516847226, 0, "UseWeightAdjustment_DeliveryPackage");
	Global_1901929->f_295.f_65 = func_571(-379711458, -2022379907, 25, "MissionWeight_Intercept");
	Global_1901929->f_295.f_109 = func_572(-379711458, 2001845118, 0, "UseWeightAdjustment_Intercept");
	Global_1901929->f_295.f_66 = func_571(-379711458, 1386309355, 25, "MissionWeight_OnTheHunt");
	Global_1901929->f_295.f_110 = func_572(-379711458, 1697868573, 0, "UseWeightAdjustment_OnTheHunt");
	Global_1901929->f_295.f_67 = func_571(-379711458, 1607489957, 25, "MissionWeight_PrisonerAssassination");
	Global_1901929->f_295.f_111 = func_572(-379711458, -1828246137, 0, "UseWeightAdjustment_PrisonerAssassination");
	Global_1901929->f_295.f_68 = func_571(-379711458, -1107432574, 25, "MissionWeight_Recover");
	Global_1901929->f_295.f_112 = func_572(-379711458, 271283681, 0, "UseWeightAdjustment_Recover");
	Global_1901929->f_295.f_69 = func_571(-379711458, 1055115472, 25, "MissionWeight_Repo");
	Global_1901929->f_295.f_113 = func_572(-379711458, -1637610688, 0, "UseWeightAdjustment_Repo");
	Global_1901929->f_295.f_70 = func_571(-379711458, -1544854031, 25, "MissionWeight_RescuePed");
	Global_1901929->f_295.f_114 = func_572(-379711458, 399997753, 0, "UseWeightAdjustment_RescuePed");
	Global_1901929->f_295.f_71 = func_571(-379711458, -555167041, 25, "MissionWeight_Resupply");
	Global_1901929->f_295.f_115 = func_572(-379711458, 1756837800, 0, "UseWeightAdjustment_Resupply");
	Global_1901929->f_295.f_72 = func_571(-379711458, 1375155297, 25, "MissionWeight_StealBoat");
	Global_1901929->f_295.f_116 = func_572(-379711458, -1742556770, 0, "UseWeightAdjustment_StealBoat");
	Global_1901929->f_295.f_73 = func_571(-379711458, -2113087628, 25, "MissionWeight_StealHorse");
	Global_1901929->f_295.f_117 = func_572(-379711458, -1057064803, 0, "UseWeightAdjustment_StealHorse");
	Global_1901929->f_295.f_74 = func_571(-379711458, 2136887556, 25, "MissionWeight_StealWagon");
	Global_1901929->f_295.f_118 = func_572(-379711458, 1844823371, 0, "UseWeightAdjustment_StealWagon");
	Global_1901929->f_295.f_75 = func_571(-379711458, 1781690078, 25, "MissionWeight_WagonBreakout");
	Global_1901929->f_295.f_119 = func_572(-379711458, -260742051, 0, "UseWeightAdjustment_WagonBreakout");
	Global_1901929->f_295.f_76 = func_571(-379711458, -1653312521, 25, "MissionWeight_Destroy");
	Global_1901929->f_295.f_120 = func_572(-379711458, -949168348, 0, "UseWeightAdjustment_Destroy");
	Global_1901929->f_295.f_77 = func_571(-379711458, 1841383436, 25, "MissionWeight_Jailbreak");
	Global_1901929->f_295.f_121 = func_572(-379711458, -194426833, 0, "UseWeightAdjustment_Jailbreak");
	Global_1901929->f_295.f_78 = func_571(-379711458, -880809973, 25, "MissionWeight_WagonThieves");
	Global_1901929->f_295.f_122 = func_572(-379711458, -471529134, 0, "UseWeightAdjustment_WagonThieves");
	Global_1901929->f_295.f_84 = func_571(-379711458, 180529611, 25, "MissionWeight_BrokenDown");
	Global_1901929->f_295.f_128 = func_572(-379711458, -2082998642, 0, "UseWeightAdjustment_BrokenDown");
	Global_1901929->f_295.f_85 = func_571(-379711458, 894631040, 25, "MissionWeight_ChemicalWagon");
	Global_1901929->f_295.f_129 = func_572(-379711458, -926503690, 0, "UseWeightAdjustment_ChemicalWagon");
	Global_1901929->f_295.f_91 = func_571(-379711458, 926008184, 25, "MissionWeight_Contested");
	Global_1901929->f_295.f_135 = func_572(-379711458, 468586258, 0, "UseWeightAdjustment_Contested");
	Global_1901929->f_295.f_88 = func_571(-379711458, -1586213077, 25, "MissionWeight_Defend");
	Global_1901929->f_295.f_132 = func_572(-379711458, 304229752, 0, "UseWeightAdjustment_Defend");
	Global_1901929->f_295.f_81 = func_571(-379711458, -881098893, 25, "MissionWeight_DefendAgainstWolves");
	Global_1901929->f_295.f_125 = func_572(-379711458, 1552053495, 0, "UseWeightAdjustment_DefendAgainstWolves");
	Global_1901929->f_295.f_80 = func_571(-379711458, -1717494351, 25, "MissionWeight_MovingTarget");
	Global_1901929->f_295.f_124 = func_572(-379711458, 2026140068, 0, "UseWeightAdjustment_MovingTarget");
	Global_1901929->f_295.f_92 = func_571(-379711458, 1703409742, 25, "MissionWeight_MultiDropDistribute");
	Global_1901929->f_295.f_136 = func_572(-379711458, 1600472904, 0, "UseWeightAdjustment_MultiDropDistribute");
	Global_1901929->f_295.f_90 = func_571(-379711458, -653556470, 25, "MissionWeight_SellGoods");
	Global_1901929->f_295.f_134 = func_572(-379711458, -308604412, 0, "UseWeightAdjustment_SellGoods");
	Global_1901929->f_295.f_86 = func_571(-379711458, -892072222, 25, "MissionWeight_SheriffsSupplies");
	Global_1901929->f_295.f_130 = func_572(-379711458, 1528421731, 0, "UseWeightAdjustment_SheriffsSupplies");
	Global_1901929->f_295.f_79 = func_571(-379711458, -490923072, 25, "MissionWeight_StationarySupplies");
	Global_1901929->f_295.f_123 = func_572(-379711458, 1516413446, 0, "UseWeightAdjustment_StationarySupplies");
	Global_1901929->f_295.f_82 = func_571(-379711458, -1538456874, 25, "MissionWeight_SupplyTrainMoving");
	Global_1901929->f_295.f_126 = func_572(-379711458, 1442076607, 0, "UseWeightAdjustment_SupplyTrainMoving");
	Global_1901929->f_295.f_83 = func_571(-379711458, -1284382296, 25, "MissionWeight_SupplyTrainStationary");
	Global_1901929->f_295.f_127 = func_572(-379711458, 1149149959, 0, "UseWeightAdjustment_SupplyTrainStationary");
	Global_1901929->f_295.f_89 = func_571(-379711458, -372315861, 25, "MissionWeight_Trade");
	Global_1901929->f_295.f_133 = func_572(-379711458, -795144836, 0, "UseWeightAdjustment_Trade");
	Global_1901929->f_295.f_87 = func_571(-379711458, 1478431505, 25, "MissionWeight_UnloadingSupplies");
	Global_1901929->f_295.f_131 = func_572(-379711458, -1525745119, 0, "UseWeightAdjustment_UnloadingSupplies");
	Global_1901929->f_295.f_97 = func_571(-379711458, 449716414, 25, "MissionWeight_LureTarget");
	Global_1901929->f_295.f_141 = func_572(-379711458, 2130456870, 0, "UseWeightAdjustment_LureTarget");
	Global_1901929->f_295.f_100 = func_571(-379711458, 1192857198, 25, "MissionWeight_HideoutTarget");
	Global_1901929->f_295.f_144 = func_572(-379711458, 1588479951, 0, "UseWeightAdjustment_HideoutTarget");
	Global_1901929->f_295.f_93 = func_571(-379711458, 105044641, 25, "MissionWeight_KnownTarget");
	Global_1901929->f_295.f_137 = func_572(-379711458, -1590697778, 0, "UseWeightAdjustment_KnownTarget");
	Global_1901929->f_295.f_94 = func_571(-379711458, 633252607, 25, "MissionWeight_MovingKnownTarget");
	Global_1901929->f_295.f_138 = func_572(-379711458, -1691211979, 0, "UseWeightAdjustment_MovingKnownTarget");
	Global_1901929->f_295.f_98 = func_571(-379711458, 822051132, 25, "MissionWeight_MultiTrackTarget");
	Global_1901929->f_295.f_142 = func_572(-379711458, -105347458, 0, "UseWeightAdjustment_MultiTrackTarget");
	Global_1901929->f_295.f_95 = func_571(-379711458, -731339085, 25, "MissionWeight_StakeoutTarget");
	Global_1901929->f_295.f_139 = func_572(-379711458, 1739770292, 0, "UseWeightAdjustment_StakeoutTarget");
	Global_1901929->f_295.f_99 = func_571(-379711458, -782846047, 25, "MissionWeight_TimeTarget");
	Global_1901929->f_295.f_143 = func_572(-379711458, 750930581, 0, "UseWeightAdjustment_TimeTarget");
	Global_1901929->f_295.f_96 = func_571(-379711458, -213037758, 25, "MissionWeight_TrackTarget");
	Global_1901929->f_295.f_140 = func_572(-379711458, -1890153233, 0, "UseWeightAdjustment_TrackTarget");
	Global_1901929->f_295.f_145 = func_571(-379711458, 262752003, 5760, "iMoonshineBuyerRefreshRate");
	Global_1901929->f_295.f_146 = func_571(-379711458, 1212826320, 80, "iMoonshineBuyerRegularNovice");
	Global_1901929->f_295.f_147 = func_571(-379711458, -597296510, 60, "iMoonshineBuyerRegularPromising");
	Global_1901929->f_295.f_148 = func_571(-379711458, -1893003417, 40, "iMoonshineBuyerRegularEstablished");
	Global_1901929->f_295.f_149 = func_571(-379711458, 1301677982, 20, "iMoonshineBuyerRegularDistinguished");
	Global_1901929->f_295.f_150 = func_571(-379711458, 1229163872, 20, "iMoonshineBuyerImprovedNovice");
	Global_1901929->f_295.f_151 = func_571(-379711458, 1670407028, 30, "iMoonshineBuyerImprovedPromising");
	Global_1901929->f_295.f_152 = func_571(-379711458, -946336876, 40, "iMoonshineBuyerImprovedEstablished");
	Global_1901929->f_295.f_153 = func_571(-379711458, -1845895920, 40, "iMoonshineBuyerImprovedDistinguished");
	Global_1901929->f_295.f_154 = func_571(-379711458, 1047668377, 0, "iMoonshineBuyerSpecialNovice");
	Global_1901929->f_295.f_155 = func_571(-379711458, -1568413259, 10, "iMoonshineBuyerSpecialPromising");
	Global_1901929->f_295.f_156 = func_571(-379711458, -558647848, 20, "iMoonshineBuyerSpecialEstablished");
	Global_1901929->f_295.f_157 = func_571(-379711458, 817646672, 40, "iMoonshineBuyerSpecialDistinguished");
	Global_1901929->f_295.f_158 = func_571(-379711458, -84899475, 0, "iMoonshineBuyerSeasonalNovice");
	Global_1901929->f_295.f_159 = func_571(-379711458, -931043913, 0, "iMoonshineBuyerSeasonalPromising");
	Global_1901929->f_295.f_160 = func_571(-379711458, -1187648683, 0, "iMoonshineBuyerSeasonalEstablished");
	Global_1901929->f_295.f_161 = func_571(-379711458, -212912867, 0, "iMoonshineBuyerSeasonalDistinguished");
	Global_1901929->f_295.f_164 = func_571(-379711458, -764721390, 4, "k_iNET_PARLEY_DEATH_COUNT");
	if (Global_1901929->f_295.f_164 < 1)
	{
		Global_1901929->f_295.f_164 = 4;
	}
	else if (Global_1901929->f_295.f_164 > 6)
	{
		Global_1901929->f_295.f_164 = 4;
	}
	Global_1901929->f_295.f_170 = func_571(-379711458, 2104050433, 300, "k_GANGFEUDS_DEFAULT_LENGTH");
	Global_1901929->f_295.f_169 = func_571(-379711458, -879364817, 300, "k_GANGFEUDS_VOTE_COOLDOWN_TIME_IN_SECOND");
	Global_1901929->f_295.f_165 = func_571(-379711458, 631709904, 8000, "k_GANGFEUDS_DISPLAY_GANG_FEUD_TOAST_TIME_IN_MS");
	Global_1901929->f_295.f_166 = func_571(-379711458, -2028164609, 8000, "k_GANGFEUDS_DISPLAY_HELP_TIME_IN_MS");
	Global_1901929->f_295.f_167 = func_571(-379711458, -2121559614, 60000, "k_GANGFEUDS_RESPONSE_TIME_IN_MS");
	Global_1901929->f_295.f_171 = func_571(-379711458, -813051668, 3, "k_GANGFEUDS_KILL_MIN");
	if (Global_1901929->f_295.f_171 < 1)
	{
		Global_1901929->f_295.f_171 = 3;
	}
	else if (Global_1901929->f_295.f_171 > 6)
	{
		Global_1901929->f_295.f_171 = 3;
	}
	Global_1901929->f_295.f_172 = func_571(-379711458, 553797911, 2, "k_GANGFEUDS_TENSION_HIGH");
	if (Global_1901929->f_295.f_172 < -1)
	{
		Global_1901929->f_295.f_172 = 2;
	}
	else if (Global_1901929->f_295.f_172 > 5)
	{
		Global_1901929->f_295.f_172 = 2;
	}
	Global_1901929->f_295.f_168 = (Global_1901929->f_295.f_167 / 2);
	Global_1901929->f_295.f_173 = func_571(-379711458, 1475200544, 45, "FME_MANAGER__LAUNCH_EVERY_MINUTES");
	Global_1901929->f_295.f_174 = func_571(-379711458, -1819921633, 90, "FME_MANAGER__LAUNCH_THEMED_EVERY_MINUTES");
	Global_1901929->f_295.f_175 = func_571(-379711458, -1111898986, 22, "FME_MANAGER__LAUNCH_THEMED_MINUTE");
	Global_1901929->f_295.f_176 = func_571(-379711458, 272974050, 25000, "FME__STREAMING_FAILSAFE_TIMEOUT");
	Global_1901929->f_295.f_177 = func_571(-379711458, -1576290689, 25000, "FME_OFFLINE__STREAMING_FAILSAFE_TIMEOUT");
	Global_1901929->f_295.f_178 = func_571(-379711458, -1315592328, 25000, "FME__TRAIN_SPAWN_FAILSAFE_TIMEOUT");
	if (!func_584(Global_1901929->f_295.f_176, 0, 120000, 0, 0))
	{
		Global_1901929->f_295.f_176 = 120000;
	}
	if (!func_584(Global_1901929->f_295.f_177, 0, 120000, 0, 0))
	{
		Global_1901929->f_295.f_177 = 120000;
	}
	if (!func_584(Global_1901929->f_295.f_178, 0, 120000, 0, 0))
	{
		Global_1901929->f_295.f_178 = 120000;
	}
	Global_1901929->f_295.f_179 = func_571(-379711458, 1635180211, 0, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_0");
	Global_1901929->f_295.f_180 = func_571(-379711458, 254261782, 1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_1");
	Global_1901929->f_295.f_181 = func_571(-379711458, 1176414211 /* Float: 10154f */, 2, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_2");
	Global_1901929->f_295.f_182 = func_571(-379711458, 887391631, 3, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_3");
	Global_1901929->f_295.f_183 = func_571(-379711458, 1725819289, 4, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_4");
	Global_1901929->f_295.f_184 = func_571(-379711458, 1411105813, 5, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_5");
	Global_1901929->f_295.f_185 = func_571(-379711458, 1262695012, 6, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_6");
	Global_1901929->f_295.f_186 = func_571(-379711458, 965086954, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_7");
	Global_1901929->f_295.f_187 = func_571(-379711458, -1345750161, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_8");
	Global_1901929->f_295.f_188 = func_571(-379711458, -1643948061, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_9");
	Global_1901929->f_295.f_189 = func_571(-379711458, 1238863273, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_10");
	Global_1901929->f_295.f_190 = func_571(-379711458, -1617053388, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_11");
	Global_1901929->f_295.f_191 = func_571(-379711458, -1369188672, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_12");
	Global_1901929->f_295.f_192 = func_571(-379711458, 762860783, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_13");
	Global_1901929->f_295.f_193 = func_571(-379711458, 993652850, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_14");
	Global_1901929->f_295.f_194 = func_571(-379711458, 301637108, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_15");
	Global_1901929->f_295.f_195 = func_571(-379711458, 530921801, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_16");
	Global_1901929->f_295.f_196 = func_571(-379711458, -443497183, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_17");
	Global_1901929->f_295.f_197 = func_571(-379711458, -196713844, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_18");
	Global_1901929->f_295.f_198 = func_571(-379711458, -905114086, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_19");
	Global_1901929->f_295.f_199 = func_571(-379711458, 1154908171, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_20");
	if (!func_584(Global_1901929->f_295.f_179, 0, 6, -1, 1))
	{
		Global_1901929->f_295.f_179 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_180, 0, 6, -1, 1))
	{
		Global_1901929->f_295.f_180 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_181, 0, 6, -1, 1))
	{
		Global_1901929->f_295.f_181 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_182, 0, 6, -1, 1))
	{
		Global_1901929->f_295.f_182 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_183, 0, 6, -1, 1))
	{
		Global_1901929->f_295.f_183 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_184, 0, 6, -1, 1))
	{
		Global_1901929->f_295.f_184 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_185, 0, 6, -1, 1))
	{
		Global_1901929->f_295.f_185 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_186, 0, 6, -1, 1))
	{
		Global_1901929->f_295.f_186 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_187, 0, 6, -1, 1))
	{
		Global_1901929->f_295.f_187 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_188, 0, 6, -1, 1))
	{
		Global_1901929->f_295.f_188 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_189, 0, 6, -1, 1))
	{
		Global_1901929->f_295.f_189 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_190, 0, 6, -1, 1))
	{
		Global_1901929->f_295.f_190 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_191, 0, 6, -1, 1))
	{
		Global_1901929->f_295.f_191 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_192, 0, 6, -1, 1))
	{
		Global_1901929->f_295.f_192 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_193, 0, 6, -1, 1))
	{
		Global_1901929->f_295.f_193 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_194, 0, 6, -1, 1))
	{
		Global_1901929->f_295.f_194 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_195, 0, 6, -1, 1))
	{
		Global_1901929->f_295.f_195 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_196, 0, 6, -1, 1))
	{
		Global_1901929->f_295.f_196 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_197, 0, 6, -1, 1))
	{
		Global_1901929->f_295.f_197 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_198, 0, 6, -1, 1))
	{
		Global_1901929->f_295.f_198 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_199, 0, 6, -1, 1))
	{
		Global_1901929->f_295.f_199 = -1;
	}
	Global_1901929->f_295.f_201 = func_571(-379711458, 943593102, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_VARIATION_0");
	Global_1901929->f_295.f_202 = func_571(-379711458, -1585846008, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_VARIATION_1");
	Global_1901929->f_295.f_203 = func_571(-379711458, 792069250, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_VARIATION_2");
	Global_1901929->f_295.f_204 = func_571(-379711458, 1041015343, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_VARIATION_3");
	Global_1901929->f_295.f_205 = func_571(-379711458, 1810169311, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_VARIATION_4");
	Global_1901929->f_295.f_206 = func_571(-379711458, -61235510, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_VARIATION_5");
	Global_1901929->f_295.f_207 = func_571(-379711458, 169687633, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_VARIATION_6");
	Global_1901929->f_295.f_208 = func_571(-379711458, 353325109, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_VARIATION_7");
	Global_1901929->f_295.f_209 = func_571(-379711458, 649720714, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_VARIATION_8");
	Global_1901929->f_295.f_210 = func_571(-379711458, 232604197, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_VARIATION_9");
	Global_1901929->f_295.f_211 = func_571(-379711458, -436517900, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_VARIATION_10");
	Global_1901929->f_295.f_212 = func_571(-379711458, -752083370, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_VARIATION_11");
	Global_1901929->f_295.f_213 = func_571(-379711458, 887153086, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_VARIATION_12");
	Global_1901929->f_295.f_214 = func_571(-379711458, 570932236, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_VARIATION_13");
	Global_1901929->f_295.f_215 = func_571(-379711458, 272832643, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_VARIATION_14");
	Global_1901929->f_295.f_216 = func_571(-379711458, 2140403495, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_VARIATION_15");
	Global_1901929->f_295.f_217 = func_571(-379711458, 1844859884, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_VARIATION_16");
	Global_1901929->f_295.f_218 = func_571(-379711458, 1531784858, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_VARIATION_17");
	Global_1901929->f_295.f_219 = func_571(-379711458, 1250594069, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_VARIATION_18");
	Global_1901929->f_295.f_220 = func_571(-379711458, -1194792560, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_VARIATION_19");
	Global_1901929->f_295.f_221 = func_571(-379711458, -1128010794, -1, "FME_MANAGER__LAUNCH_PRIORITY_SLOT_VARIATION_20");
	if (!func_584(Global_1901929->f_295.f_201, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_201 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_202, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_202 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_203, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_203 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_204, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_204 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_205, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_205 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_206, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_206 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_207, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_207 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_208, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_208 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_209, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_209 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_210, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_210 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_211, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_211 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_212, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_212 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_213, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_213 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_214, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_214 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_215, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_215 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_216, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_216 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_217, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_217 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_218, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_218 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_219, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_219 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_220, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_220 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_221, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_221 = -1;
	}
	Global_1901929->f_295.f_222 = func_571(-379711458, -344033901, 0, "FME_MANAGER__LAUNCH_THEMED_PRIORITY_SLOT_0");
	Global_1901929->f_295.f_223 = func_571(-379711458, 483711039, 3, "FME_MANAGER__LAUNCH_THEMED_PRIORITY_SLOT_1");
	Global_1901929->f_295.f_224 = func_571(-379711458, 252787896, 2, "FME_MANAGER__LAUNCH_THEMED_PRIORITY_SLOT_2");
	Global_1901929->f_295.f_225 = func_571(-379711458, 706441928, 1, "FME_MANAGER__LAUNCH_THEMED_PRIORITY_SLOT_3");
	Global_1901929->f_295.f_226 = func_571(-379711458, 456971531, 4, "FME_MANAGER__LAUNCH_THEMED_PRIORITY_SLOT_4");
	Global_1901929->f_295.f_227 = func_571(-379711458, 1295464703, -1, "FME_MANAGER__LAUNCH_THEMED_PRIORITY_SLOT_5");
	Global_1901929->f_295.f_228 = func_571(-379711458, 1052220416, -1, "FME_MANAGER__LAUNCH_THEMED_PRIORITY_SLOT_6");
	Global_1901929->f_295.f_229 = func_571(-379711458, 1651172198, -1, "FME_MANAGER__LAUNCH_THEMED_PRIORITY_SLOT_7");
	Global_1901929->f_295.f_230 = func_571(-379711458, 1414940477, -1, "FME_MANAGER__LAUNCH_THEMED_PRIORITY_SLOT_8");
	Global_1901929->f_295.f_231 = func_571(-379711458, -2044155159, -1, "FME_MANAGER__LAUNCH_THEMED_PRIORITY_SLOT_9");
	if (!func_584(Global_1901929->f_295.f_222, 0, 4, -1, 1))
	{
		Global_1901929->f_295.f_222 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_223, 0, 4, -1, 1))
	{
		Global_1901929->f_295.f_223 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_224, 0, 4, -1, 1))
	{
		Global_1901929->f_295.f_224 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_225, 0, 4, -1, 1))
	{
		Global_1901929->f_295.f_225 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_226, 0, 4, -1, 1))
	{
		Global_1901929->f_295.f_226 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_227, 0, 4, -1, 1))
	{
		Global_1901929->f_295.f_227 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_228, 0, 4, -1, 1))
	{
		Global_1901929->f_295.f_228 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_229, 0, 4, -1, 1))
	{
		Global_1901929->f_295.f_229 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_230, 0, 4, -1, 1))
	{
		Global_1901929->f_295.f_230 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_231, 0, 4, -1, 1))
	{
		Global_1901929->f_295.f_231 = -1;
	}
	Global_1901929->f_295.f_232 = func_571(-379711458, -972975675, -1, "FME_MANAGER__LAUNCH_THEMED_PRIORITY_SLOT_VARIATION_0");
	Global_1901929->f_295.f_233 = func_571(-379711458, -138906318, -1, "FME_MANAGER__LAUNCH_THEMED_PRIORITY_SLOT_VARIATION_1");
	Global_1901929->f_295.f_234 = func_571(-379711458, 578144940, -1, "FME_MANAGER__LAUNCH_THEMED_PRIORITY_SLOT_VARIATION_2");
	Global_1901929->f_295.f_235 = func_571(-379711458, -734613969, -1, "FME_MANAGER__LAUNCH_THEMED_PRIORITY_SLOT_VARIATION_3");
	Global_1901929->f_295.f_236 = func_571(-379711458, -1935237360, -1, "FME_MANAGER__LAUNCH_THEMED_PRIORITY_SLOT_VARIATION_4");
	Global_1901929->f_295.f_237 = func_571(-379711458, -1150124889, -1, "FME_MANAGER__LAUNCH_THEMED_PRIORITY_SLOT_VARIATION_5");
	Global_1901929->f_295.f_238 = func_571(-379711458, -450047973, -1, "FME_MANAGER__LAUNCH_THEMED_PRIORITY_SLOT_VARIATION_6");
	Global_1901929->f_295.f_239 = func_571(-379711458, -1716340440, -1, "FME_MANAGER__LAUNCH_THEMED_PRIORITY_SLOT_VARIATION_7");
	Global_1901929->f_295.f_240 = func_571(-379711458, 1907616043, -1, "FME_MANAGER__LAUNCH_THEMED_PRIORITY_SLOT_VARIATION_8");
	Global_1901929->f_295.f_241 = func_571(-379711458, 1676692900, -1, "FME_MANAGER__LAUNCH_THEMED_PRIORITY_SLOT_VARIATION_9");
	if (!func_584(Global_1901929->f_295.f_232, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_232 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_233, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_233 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_234, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_234 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_235, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_235 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_236, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_236 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_237, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_237 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_238, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_238 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_239, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_239 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_240, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_240 = -1;
	}
	if (!func_584(Global_1901929->f_295.f_241, 0, 20, -1, 1))
	{
		Global_1901929->f_295.f_241 = -1;
	}
	Global_1901929->f_295.f_242 = func_571(-379711458, -895292389, 60000, "NET_TRAIN_MANAGER__SPAWN_FREQUENCY_PRIMARY");
	Global_1901929->f_295.f_243 = func_571(-379711458, -1202648944, 60000, "NET_TRAIN_MANAGER__SPAWN_FREQUENCY_SECONDARY");
	Global_1901929->f_295.f_244 = func_571(-379711458, 1579982551, 30000, "NET_TRAIN_MANAGER__SPAWN_FREQUENCY_TROLLEY");
	Global_1901929->f_295.f_245 = func_571(-379711458, 1518069169, 0, "NET_TRAIN_MANAGER__DISABLE_ALL_TRAINS");
}

void func_82(int iParam0)
{
	func_575("sLauncherTunables", "iVSMSLaunchTimeout", func_574(Global_1901929->f_295), iParam0);
	func_575("sLauncherTunables", "iVSMSLaunchTimeoutShort", func_574(Global_1901929->f_295.f_1), iParam0);
	func_575("sLauncherTunables", "iVSMSPlayersToParticipants", func_574(Global_1901929->f_295.f_4), iParam0);
	func_575("sLauncherTunables", "iVSMSSlashDuration", func_574(Global_1901929->f_295.f_5), iParam0);
	func_575("sLauncherTunables", "iVSMSRacesToRun", func_574(Global_1901929->f_295.f_6), iParam0);
	func_575("sLauncherTunables", "iVSMSSortingBusyTime", func_574(Global_1901929->f_295.f_2), iParam0);
	func_575("sLauncherTunables", "iVSMSBackfillBufferDuration", func_574(Global_1901929->f_295.f_7), iParam0);
	func_575("sLauncherTunables", "iVSMSMinPlayerDecayInitialTime", func_574(Global_1901929->f_295.f_8), iParam0);
	func_575("sLauncherTunables", "iVSMSMinPlayerDecaySecondTime", func_574(Global_1901929->f_295.f_9), iParam0);
	func_575("sLauncherTunables", "iVSMSMinPlayerDecayFinalTime", func_574(Global_1901929->f_295.f_10), iParam0);
	func_575("sLauncherTunables", "fVSMSMinPlayerDecayInitialPercentage", MISC::_0x2B6846401D68E563(Global_1901929->f_295.f_11, 4), iParam0);
	func_575("sLauncherTunables", "fVSMSMinPlayerDecaySecondPercentage", MISC::_0x2B6846401D68E563(Global_1901929->f_295.f_12, 4), iParam0);
	func_575("sLauncherTunables", "fVSMSMinPlayerDecayFinalPercentage", MISC::_0x2B6846401D68E563(Global_1901929->f_295.f_13, 4), iParam0);
	func_575("sLauncherTunables", "k_LauncherUGCStallTimeout", func_574(Global_1901929->f_295.f_15), iParam0);
	func_575("sLauncherTunables", "k_LauncherUGCPhotoStallTimeout", func_574(Global_1901929->f_295.f_16), iParam0);
	func_575("sLauncherTunables", "iNetPlaylistCoronaAlpha", func_574(Global_1901929->f_295.f_14), iParam0);
	func_575("sLauncherTunables", "iEasyTargetRefreshRateS", func_574(Global_1901929->f_295.f_17), iParam0);
	func_575("sLauncherTunables", "iMediumTargetRefreshRateS", func_574(Global_1901929->f_295.f_18), iParam0);
	func_575("sLauncherTunables", "iHardTargetRefreshRateS", func_574(Global_1901929->f_295.f_19), iParam0);
	func_575("sLauncherTunables", "iLegendaryBountyToastDelay", func_574(Global_1901929->f_295.f_20), iParam0);
	func_575("sLauncherTunables", "iMaxBountyServerRequests", func_574(Global_1901929->f_295.f_21), iParam0);
	func_575("sLauncherTunables", "iBountyServerRequestTimeoutMS", func_574(Global_1901929->f_295.f_22), iParam0);
	func_575("sLauncherTunables", "bAllowRelaunch", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_23), iParam0);
	func_575("sLauncherTunables", "bWaitForHorseInSplit", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_24), iParam0);
	func_575("sLauncherTunables", "iGangLeaderWaitForGangLockMS", func_574(Global_1901929->f_295.f_25), iParam0);
	func_575("sLauncherTunables", "iGangLeaderSplitterLoadTimeMS", func_574(Global_1901929->f_295.f_26), iParam0);
	func_575("sLauncherTunables", "iGangLeaderWaitForSplitMS", func_574(Global_1901929->f_295.f_27), iParam0);
	func_575("sLauncherTunables", "iGangLeaderWaitForFlagsMS", func_574(Global_1901929->f_295.f_28), iParam0);
	func_575("sLauncherTunables", "iGangLeaderWaitForScreenFadeMS", func_574(Global_1901929->f_295.f_29), iParam0);
	func_575("sLauncherTunables", "iGangLeaderWaitForGangMembersToReceiveInstancedRequestMS", func_574(Global_1901929->f_295.f_30), iParam0);
	func_575("sLauncherTunables", "iGangLeaderWaitForGangMembersToLockHorsesMS", func_574(Global_1901929->f_295.f_31), iParam0);
	func_575("sLauncherTunables", "iGangLeaderWaitForAmbientMissionsToShutdownMS", func_574(Global_1901929->f_295.f_32), iParam0);
	func_575("sLauncherTunables", "iGangLeaderWaitForVolumeLocksToResolve", func_574(Global_1901929->f_295.f_33), iParam0);
	func_575("sLauncherTunables", "iGangMemberWaitForRespawnMS", func_574(Global_1901929->f_295.f_34), iParam0);
	func_575("sLauncherTunables", "iGangMemberWaitForHorseCreateMS", func_574(Global_1901929->f_295.f_35), iParam0);
	func_575("sLauncherTunables", "iGangMemberInstanceDataRequestEventCooldownMS", func_574(Global_1901929->f_295.f_36), iParam0);
	func_575("sLauncherTunables", "iRebroadcastDeinstanceData", func_574(Global_1901929->f_295.f_37), iParam0);
	func_575("sLauncherTunables", "iRebrodcastDeinstanceSession", func_574(Global_1901929->f_295.f_38), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMSTimeout", func_574(Global_1901929->f_295.f_39), iParam0);
	func_575("sLauncherTunables", "bNetGunForHireSheriffsRespectBounty", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_40), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMediumTargetSelectionRate", func_574(Global_1901929->f_295.f_53), iParam0);
	func_575("sLauncherTunables", "fNetGunForHireNearMissionDistance", MISC::_0x2B6846401D68E563(Global_1901929->f_295.f_54, 4), iParam0);
	func_575("sLauncherTunables", "fNetGunForHireMediumMissionDistance", MISC::_0x2B6846401D68E563(Global_1901929->f_295.f_55, 4), iParam0);
	func_575("sLauncherTunables", "fNetGunForHireFarMissionDistance", MISC::_0x2B6846401D68E563(Global_1901929->f_295.f_56, 4), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireGiverCooldownInGameDays", func_574(Global_1901929->f_295.f_41), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMoonshinerGiverCooldownInGameDays", func_574(Global_1901929->f_295.f_42), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMoonshinerGiverCooldownInGameHours", func_574(Global_1901929->f_295.f_43), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMoonshinerGiverCooldownInGameMinutes", func_574(Global_1901929->f_295.f_44), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireGiverIgnoreBlockingMissionCooldownInGameDays", func_574(Global_1901929->f_295.f_45), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireGiverIgnoreBlockingMissionCooldownInGameHours", func_574(Global_1901929->f_295.f_46), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireGiverCooldownShotNearInGameMinutes", func_574(Global_1901929->f_295.f_47), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireGiverCooldownShotNearInGameHours", func_574(Global_1901929->f_295.f_48), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionCooldownInGameDays", func_574(Global_1901929->f_295.f_49), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeightAdjustment", func_574(Global_1901929->f_295.f_50), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeightAdjustmentCount", func_574(Global_1901929->f_295.f_51), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionPassiveWeightAdjustment", func_574(Global_1901929->f_295.f_52), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeight_Assassination", func_574(Global_1901929->f_295.f_57), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeight_Assassination", func_574(Global_1901929->f_295.f_57), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeight_Assassination", func_574(Global_1901929->f_295.f_57), iParam0);
	func_575("sLauncherTunables", "bNetGunForHireMissionUseWeightAdjustment_Assassination", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_101), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeight_AssassinationTracking", func_574(Global_1901929->f_295.f_58), iParam0);
	func_575("sLauncherTunables", "bNetGunForHireMissionUseWeightAdjustment_AssassinationTracking", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_102), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeight_AssassinationPvpPosse", func_574(Global_1901929->f_295.f_59), iParam0);
	func_575("sLauncherTunables", "bNetGunForHireMissionUseWeightAdjustment_AssassinationPvpPosse", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_103), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeight_AssassinationPvpPlayer", func_574(Global_1901929->f_295.f_60), iParam0);
	func_575("sLauncherTunables", "bNetGunForHireMissionUseWeightAdjustment_AssassinationPvpPlayer", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_104), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeight_CoachHoldupKidnap", func_574(Global_1901929->f_295.f_61), iParam0);
	func_575("sLauncherTunables", "bNetGunForHireMissionUseWeightAdjustment_CoachHoldupKidnap", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_105), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeight_CoachHoldupRobbery", func_574(Global_1901929->f_295.f_62), iParam0);
	func_575("sLauncherTunables", "bNetGunForHireMissionUseWeightAdjustment_CoachHoldupRobbery", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_106), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeight_ConvoyEscort", func_574(Global_1901929->f_295.f_63), iParam0);
	func_575("sLauncherTunables", "bNetGunForHireMissionUseWeightAdjustment_ConvoyEscort", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_107), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeight_DeliveryPackage", func_574(Global_1901929->f_295.f_64), iParam0);
	func_575("sLauncherTunables", "bNetGunForHireMissionUseWeightAdjustment_DeliveryPackage", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_108), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeight_Intercept", func_574(Global_1901929->f_295.f_65), iParam0);
	func_575("sLauncherTunables", "bNetGunForHireMissionUseWeightAdjustment_Intercept", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_109), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeight_OnTheHunt", func_574(Global_1901929->f_295.f_66), iParam0);
	func_575("sLauncherTunables", "bNetGunForHireMissionUseWeightAdjustment_OnTheHunt", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_110), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeight_PrisonerAssassination", func_574(Global_1901929->f_295.f_67), iParam0);
	func_575("sLauncherTunables", "bNetGunForHireMissionUseWeightAdjustment_PrisonerAssassination", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_111), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeight_Recover", func_574(Global_1901929->f_295.f_68), iParam0);
	func_575("sLauncherTunables", "bNetGunForHireMissionUseWeightAdjustment_Recover", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_112), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeight_Repo", func_574(Global_1901929->f_295.f_69), iParam0);
	func_575("sLauncherTunables", "bNetGunForHireMissionUseWeightAdjustment_Repo", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_113), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeight_RescuePed", func_574(Global_1901929->f_295.f_70), iParam0);
	func_575("sLauncherTunables", "bNetGunForHireMissionUseWeightAdjustment_RescuePed", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_114), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeight_Resupply", func_574(Global_1901929->f_295.f_71), iParam0);
	func_575("sLauncherTunables", "bNetGunForHireMissionUseWeightAdjustment_Resupply", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_114), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeight_StealBoat", func_574(Global_1901929->f_295.f_72), iParam0);
	func_575("sLauncherTunables", "bNetGunForHireMissionUseWeightAdjustment_StealBoat", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_116), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeight_StealHorse", func_574(Global_1901929->f_295.f_73), iParam0);
	func_575("sLauncherTunables", "bNetGunForHireMissionUseWeightAdjustment_StealHorse", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_117), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeight_StealWagon", func_574(Global_1901929->f_295.f_74), iParam0);
	func_575("sLauncherTunables", "bNetGunForHireMissionUseWeightAdjustment_StealWagon", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_118), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeight_WagonBreakout", func_574(Global_1901929->f_295.f_75), iParam0);
	func_575("sLauncherTunables", "bNetGunForHireMissionUseWeightAdjustment_WagonBreakout", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_119), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeight_Destroy", func_574(Global_1901929->f_295.f_76), iParam0);
	func_575("sLauncherTunables", "bNetGunForHireMissionUseWeightAdjustment_Destory", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_120), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeight_Jailbreak", func_574(Global_1901929->f_295.f_77), iParam0);
	func_575("sLauncherTunables", "bNetGunForHireMissionUseWeightAdjustment_Jailbreak", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_121), iParam0);
	func_575("sLauncherTunables", "iNetGunForHireMissionWeight_WagonThieves", func_574(Global_1901929->f_295.f_78), iParam0);
	func_575("sLauncherTunables", "bNetGunForHireMissionUseWeightAdjustment_WagonThieves", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_122), iParam0);
	func_575("sLauncherTunables", "iTraderMissionWeight_BrokenDown", func_574(Global_1901929->f_295.f_84), iParam0);
	func_575("sLauncherTunables", "bTraderMissionUseWeightAdjustment_BrokenDown", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_128), iParam0);
	func_575("sLauncherTunables", "iTraderMissionWeight_ChemicalWagon", func_574(Global_1901929->f_295.f_85), iParam0);
	func_575("sLauncherTunables", "bTraderMissionUseWeightAdjustment_ChemicalWagon", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_129), iParam0);
	func_575("sLauncherTunables", "iTraderMissionWeight_Contested", func_574(Global_1901929->f_295.f_91), iParam0);
	func_575("sLauncherTunables", "bTraderMissionUseWeightAdjustment_Contested", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_135), iParam0);
	func_575("sLauncherTunables", "iTraderMissionWeight_Defend", func_574(Global_1901929->f_295.f_88), iParam0);
	func_575("sLauncherTunables", "bTraderMissionUseWeightAdjustment_Defend", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_132), iParam0);
	func_575("sLauncherTunables", "iTraderMissionWeight_DefendAgainstWolves", func_574(Global_1901929->f_295.f_81), iParam0);
	func_575("sLauncherTunables", "bTraderMissionUseWeightAdjustment_DefendAgainstWolves", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_125), iParam0);
	func_575("sLauncherTunables", "iTraderMissionWeight_MovingTarget", func_574(Global_1901929->f_295.f_80), iParam0);
	func_575("sLauncherTunables", "bTraderMissionUseWeightAdjustment_MovingTarget", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_124), iParam0);
	func_575("sLauncherTunables", "iTraderMissionWeight_MultiDropDistribute", func_574(Global_1901929->f_295.f_92), iParam0);
	func_575("sLauncherTunables", "bTraderMissionUseWeightAdjustment_MultiDropDistribute", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_136), iParam0);
	func_575("sLauncherTunables", "iTraderMissionWeight_SellGoods", func_574(Global_1901929->f_295.f_90), iParam0);
	func_575("sLauncherTunables", "bTraderMissionUseWeightAdjustment_SellGoods", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_134), iParam0);
	func_575("sLauncherTunables", "iTraderMissionWeight_SheriffsSupplies", func_574(Global_1901929->f_295.f_86), iParam0);
	func_575("sLauncherTunables", "bTraderMissionUseWeightAdjustment_SheriffsSupplies", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_130), iParam0);
	func_575("sLauncherTunables", "iTraderMissionWeight_StationarySupplies", func_574(Global_1901929->f_295.f_79), iParam0);
	func_575("sLauncherTunables", "bTraderMissionUseWeightAdjustment_StationarySupplies", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_123), iParam0);
	func_575("sLauncherTunables", "iTraderMissionWeight_SupplyTrainMoving", func_574(Global_1901929->f_295.f_82), iParam0);
	func_575("sLauncherTunables", "bTraderMissionUseWeightAdjustment_SupplyTrainMoving", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_126), iParam0);
	func_575("sLauncherTunables", "iTraderMissionWeight_SupplyTrainStationary", func_574(Global_1901929->f_295.f_83), iParam0);
	func_575("sLauncherTunables", "bTraderMissionUseWeightAdjustment_SupplyTrainStationary", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_127), iParam0);
	func_575("sLauncherTunables", "iTraderMissionWeight_Trade", func_574(Global_1901929->f_295.f_89), iParam0);
	func_575("sLauncherTunables", "bTraderMissionUseWeightAdjustment_Trade", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_133), iParam0);
	func_575("sLauncherTunables", "iTraderMissionWeight_UnloadingSupplies", func_574(Global_1901929->f_295.f_87), iParam0);
	func_575("sLauncherTunables", "bTraderMissionUseWeightAdjustment_UnloadingSupplies", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_131), iParam0);
	func_575("sLauncherTunables", "iBountyHunterMissionWeight_LureTarget", func_574(Global_1901929->f_295.f_97), iParam0);
	func_575("sLauncherTunables", "bBountyHunterMissionUseWeightAdjustment_LureTarget", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_141), iParam0);
	func_575("sLauncherTunables", "iBountyHunterMissionWeight_HideoutTarget", func_574(Global_1901929->f_295.f_100), iParam0);
	func_575("sLauncherTunables", "bBountyHunterMissionUseWeightAdjustment_HideoutTarget", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_144), iParam0);
	func_575("sLauncherTunables", "iBountyHunterMissionWeight_KnownTarget", func_574(Global_1901929->f_295.f_93), iParam0);
	func_575("sLauncherTunables", "bBountyHunterMissionUseWeightAdjustment_KnownTarget", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_137), iParam0);
	func_575("sLauncherTunables", "iBountyHunterMissionWeight_MovingKnownTarget", func_574(Global_1901929->f_295.f_94), iParam0);
	func_575("sLauncherTunables", "bBountyHunterMissionUseWeightAdjustment_MovingKnownTarget", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_138), iParam0);
	func_575("sLauncherTunables", "iBountyHunterMissionWeight_MultiTrackTarget", func_574(Global_1901929->f_295.f_98), iParam0);
	func_575("sLauncherTunables", "bBountyHunterMissionUseWeightAdjustment_MultiTrackTarget", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_142), iParam0);
	func_575("sLauncherTunables", "iBountyHunterMissionWeight_StakeoutTarget", func_574(Global_1901929->f_295.f_95), iParam0);
	func_575("sLauncherTunables", "bBountyHunterMissionUseWeightAdjustment_StakeoutTarget", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_139), iParam0);
	func_575("sLauncherTunables", "iBountyHunterMissionWeight_TimeTarget", func_574(Global_1901929->f_295.f_99), iParam0);
	func_575("sLauncherTunables", "bBountyHunterMissionUseWeightAdjustment_TimeTarget", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_143), iParam0);
	func_575("sLauncherTunables", "iBountyHunterMissionWeight_TrackTarget", func_574(Global_1901929->f_295.f_96), iParam0);
	func_575("sLauncherTunables", "bBountyHunterMissionUseWeightAdjustment_TrackTarget", MISC::_0xF216F74101968DB0(Global_1901929->f_295.f_140), iParam0);
	func_575("sLauncherTunables", "iMoonshineBuyerRefreshRate", func_574(Global_1901929->f_295.f_145), iParam0);
	func_575("sLauncherTunables", "iMoonshineBuyerRegularNovice", func_574(Global_1901929->f_295.f_146), iParam0);
	func_575("sLauncherTunables", "iMoonshineBuyerRegularPromising", func_574(Global_1901929->f_295.f_147), iParam0);
	func_575("sLauncherTunables", "iMoonshineBuyerRegularEstablished", func_574(Global_1901929->f_295.f_148), iParam0);
	func_575("sLauncherTunables", "iMoonshineBuyerRegularDistinguished", func_574(Global_1901929->f_295.f_149), iParam0);
	func_575("sLauncherTunables", "iMoonshineBuyerImprovedNovice", func_574(Global_1901929->f_295.f_150), iParam0);
	func_575("sLauncherTunables", "iMoonshineBuyerImprovedPromising", func_574(Global_1901929->f_295.f_151), iParam0);
	func_575("sLauncherTunables", "iMoonshineBuyerImprovedEstablished", func_574(Global_1901929->f_295.f_152), iParam0);
	func_575("sLauncherTunables", "iMoonshineBuyerImprovedDistinguished", func_574(Global_1901929->f_295.f_153), iParam0);
	func_575("sLauncherTunables", "iMoonshineBuyerSpecialNovice", func_574(Global_1901929->f_295.f_154), iParam0);
	func_575("sLauncherTunables", "iMoonshineBuyerSpecialPromising", func_574(Global_1901929->f_295.f_155), iParam0);
	func_575("sLauncherTunables", "iMoonshineBuyerSpecialEstablished", func_574(Global_1901929->f_295.f_156), iParam0);
	func_575("sLauncherTunables", "iMoonshineBuyerSpecialDistinguished", func_574(Global_1901929->f_295.f_157), iParam0);
	func_575("sLauncherTunables", "iMoonshineBuyerSeasonalNovice", func_574(Global_1901929->f_295.f_158), iParam0);
	func_575("sLauncherTunables", "iMoonshineBuyerSeasonalPromising", func_574(Global_1901929->f_295.f_159), iParam0);
	func_575("sLauncherTunables", "iMoonshineBuyerSeasonalEstablished", func_574(Global_1901929->f_295.f_160), iParam0);
	func_575("sLauncherTunables", "iMoonshineBuyerSeasonalDistinguished", func_574(Global_1901929->f_295.f_161), iParam0);
	func_575("sLauncherTunables", "iParleyKillMin", func_574(Global_1901929->f_295.f_164), iParam0);
	func_575("sLauncherTunables", "iGangFeudsLength", func_574(Global_1901929->f_295.f_170), iParam0);
	func_575("sLauncherTunables", "iGangFeudsVoteCooldownTime", func_574(Global_1901929->f_295.f_169), iParam0);
	func_575("sLauncherTunables", "iDisplayGangfeudToastTime", func_574(Global_1901929->f_295.f_165), iParam0);
	func_575("sLauncherTunables", "iDisplayGangfeudHelpTime", func_574(Global_1901929->f_295.f_166), iParam0);
	func_575("sLauncherTunables", "iGangFeudsResponseTime", func_574(Global_1901929->f_295.f_167), iParam0);
	func_575("sLauncherTunables", "iGangFeudsReminderTime", func_574(Global_1901929->f_295.f_168), iParam0);
	func_575("sLauncherTunables", "iGangFeudKillMin", func_574(Global_1901929->f_295.f_171), iParam0);
	func_575("sLauncherTunables", "iGangFeudTensionHigh", func_574(Global_1901929->f_295.f_172), iParam0);
	func_575("sLauncherTunables", "iFmeManagerLaunchEveryMinutes", func_574(Global_1901929->f_295.f_173), iParam0);
	func_575("sLauncherTunables", "iFmeManagerLaunchThemedEveryMinutes", func_574(Global_1901929->f_295.f_174), iParam0);
	func_575("sLauncherTunables", "iFmeManagerLaunchThemedMinute", func_574(Global_1901929->f_295.f_175), iParam0);
	func_575("sLauncherTunables", "iFmeStreamingFailsafeTimeout", func_574(Global_1901929->f_295.f_176), iParam0);
	func_575("sLauncherTunables", "iFmeOfflineStreamingFailsafeTimeout", func_574(Global_1901929->f_295.f_177), iParam0);
	func_575("sLauncherTunables", "iFmeTrainSpawnFailsafeTimeout", func_574(Global_1901929->f_295.f_178), iParam0);
	func_575("sLauncherTunables", "iNetTrainManagerSpawnFrequencyPrimary", func_574(Global_1901929->f_295.f_242), iParam0);
	func_575("sLauncherTunables", "iNetTrainManagerSpawnFrequencySecondary", func_574(Global_1901929->f_295.f_243), iParam0);
	func_575("sLauncherTunables", "iNetTrainManagerSpawnFrequencyTrolley", func_574(Global_1901929->f_295.f_244), iParam0);
	func_575("sLauncherTunables", "iNetTrainManagerDisableAllTrains", func_574(Global_1901929->f_295.f_245), iParam0);
}

void func_83()
{
	Global_1901929->f_541 = func_571(1387154797, 334752451, 120000, "TM_MPSessionTimeToWaitToReboot");
	if (Global_1901929->f_541 < 30000)
	{
		Global_1901929->f_541 = 120000;
	}
	else if (Global_1901929->f_541 > 300000)
	{
		Global_1901929->f_541 = 120000;
	}
}

void func_84(int iParam0)
{
}

void func_85()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	Global_1901929->f_542.f_3 = func_573(-856439824, 185921992, 390f, "NET_CAMP_MIN_DISTANCE_BETWEEN_CAMPS");
	Global_1901929->f_542 = func_573(-856439824, -905606541, 190f, "NET_CAMP_LAUNCH_RADIUS");
	Global_1901929->f_542.f_1 = func_573(-856439824, 929247867, 200f, "NET_CAMP_SHUTDOWN_RADIUS");
	Global_1901929->f_542.f_2 = func_571(-856439824, -1285099241, 7000, "NET_CAMP_SAVE_LOAD_TIME_FAILSAFE_DURATION_MS");
	Global_1901929->f_542.f_5 = func_573(-856439824, 719654415, 20f, "NET_CAMP_VOLUME_LOCK_ALL_RADIUS");
	Global_1901929->f_542.f_4 = func_573(-856439824, 1924389419, 195f, "NET_CAMP_VOLUME_LOCK_CAMP_RADIUS");
	Global_1901929->f_542.f_6 = func_573(-856439824, 1432537948, 60f, "NET_CAMP_PED_BLOCKING_RADIUS");
	Global_1901929->f_542.f_7 = func_573(-856439824, 1879086384, 11f, "NET_CAMP_SHOP_PREVIEW_RADIUS");
	Global_1901929->f_542.f_8 = func_571(-856439824, -2126039747, 15000, "NET_CAMP_SHOP_STREAMING_FAILSAFE_DURATION_MS");
	Global_1901929->f_542.f_9 = func_571(-856439824, 1741896349, 10000, "NET_CAMP_TRADER_MAX_MATERIALS");
	Global_1901929->f_542.f_10 = func_571(-856439824, 1985544159, 100, "NET_CAMP_TRADER_MAX_GOODS");
	Global_1901929->f_542.f_11 = func_571(-856439824, -1318236918, 2, "NET_CAMP_TRADER_MINS_PER_GOODS");
	Global_1901929->f_542.f_13 = func_571(-856439824, 1906939637, 10, "NET_CAMP_TRADER_MINS_FOR_RESUPPLY");
	fVar0 = 102f;
	fVar1 = 2100f;
	if (Global_1901929->f_542.f_3 < fVar0 || Global_1901929->f_542.f_3 > fVar1)
	{
		func_578(Global_1901929->f_542.f_3, fVar0, fVar1);
	}
	fVar2 = 50f;
	fVar3 = 1000f;
	if (Global_1901929->f_542 < fVar2 || Global_1901929->f_542 > fVar3)
	{
		func_578(Global_1901929->f_542, fVar2, fVar3);
	}
	fVar4 = 52f;
	fVar5 = 1100f;
	if (Global_1901929->f_542.f_1 < fVar4 || Global_1901929->f_542.f_1 > fVar5)
	{
		func_578(Global_1901929->f_542.f_1, fVar4, fVar5);
	}
	fVar6 = 0f;
	fVar7 = 200f;
	if (Global_1901929->f_542.f_5 < fVar6 || Global_1901929->f_542.f_5 > fVar7)
	{
		func_578(Global_1901929->f_542.f_5, fVar6, fVar7);
	}
	fVar8 = 0f;
	fVar9 = 1000f;
	if (Global_1901929->f_542.f_4 < fVar8 || Global_1901929->f_542.f_4 > fVar9)
	{
		func_578(Global_1901929->f_542.f_4, fVar8, fVar9);
	}
	fVar10 = 0f;
	fVar11 = 1000f;
	if (Global_1901929->f_542.f_6 < fVar10 || Global_1901929->f_542.f_6 > fVar11)
	{
		func_578(Global_1901929->f_542.f_6, fVar10, fVar11);
	}
	fVar12 = 0f;
	fVar13 = 500f;
	if (Global_1901929->f_542.f_7 < fVar12 || Global_1901929->f_542.f_7 > fVar13)
	{
		func_578(Global_1901929->f_542.f_7, fVar12, fVar13);
	}
	iVar14 = 100;
	iVar15 = 1000000;
	if (Global_1901929->f_542.f_9 < iVar14 || Global_1901929->f_542.f_9 > iVar15)
	{
		func_579(Global_1901929->f_542.f_9, iVar14, iVar15);
	}
	iVar16 = 1;
	iVar17 = 100000;
	if (Global_1901929->f_542.f_10 < iVar16 || Global_1901929->f_542.f_10 > iVar17)
	{
		func_579(Global_1901929->f_542.f_10, iVar16, iVar17);
	}
	iVar18 = 1;
	iVar19 = 1000;
	if (Global_1901929->f_542.f_11 < iVar18 || Global_1901929->f_542.f_11 > iVar19)
	{
		func_579(Global_1901929->f_542.f_11, iVar18, iVar19);
	}
	iVar20 = 0;
	iVar21 = 1000;
	if (Global_1901929->f_542.f_13 < iVar20 || Global_1901929->f_542.f_13 > iVar21)
	{
		func_579(Global_1901929->f_542.f_13, iVar20, iVar21);
	}
}

void func_86(int iParam0)
{
}

void func_87()
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == 0)
		{
		}
		else
		{
			Global_1901929->f_556[iVar0] = func_573(-1171146284, func_585(iVar0), func_586(iVar0), &uVar1);
			func_587(iVar0, Global_1901929->f_556[iVar0]);
		}
		iVar0++;
	}
}

void func_88(int iParam0)
{
}

void func_89()
{
	Global_1901929->f_628 = func_571(-1962032551, 917864368, 20, "NPS_DeathCamHoldTime_FreeRoam");
	if (Global_1901929->f_628 < 5)
	{
		Global_1901929->f_628 = 20;
	}
	else if (Global_1901929->f_628 > 100)
	{
		Global_1901929->f_628 = 20;
	}
	Global_1901929->f_628.f_1 = func_571(-1962032551, 1556440356, 60000, "NPS_DeathCamHoldTime_Instanced");
	if (Global_1901929->f_628.f_1 < 5000)
	{
		Global_1901929->f_628.f_1 = 60000;
	}
	else if (Global_1901929->f_628.f_1 > 1200000)
	{
		Global_1901929->f_628.f_1 = 60000;
	}
	Global_1901929->f_628.f_2 = func_571(-1962032551, 779394926, 20, "NPS_DeathCamHoldTime_FreeRoam");
	if (Global_1901929->f_628.f_2 < 5)
	{
		Global_1901929->f_628.f_2 = 20;
	}
	else if (Global_1901929->f_628.f_2 > 100)
	{
		Global_1901929->f_628.f_2 = 20;
	}
	Global_1901929->f_628.f_3 = func_571(-1962032551, 1234528537, 60000, "NPS_DeathCamHoldTime_Instanced");
	if (Global_1901929->f_628.f_3 < 5000)
	{
		Global_1901929->f_628.f_3 = 60000;
	}
	else if (Global_1901929->f_628.f_3 > 1200000)
	{
		Global_1901929->f_628.f_3 = 60000;
	}
}

void func_90(int iParam0)
{
	func_575("sDamageAwardXPTunables", "k_tunePvPMaxTimeInDamageAwardQueue", func_574(Global_1901929->f_628.f_1), iParam0);
	func_575("sDamageAwardXPTunables", "k_tunePvPMaxDamageAwardXPStored", func_574(Global_1901929->f_628), iParam0);
	func_575("sDamageAwardXPTunables", "k_tunePvEMaxTimeInDamageAwardQueue", func_574(Global_1901929->f_628.f_3), iParam0);
	func_575("sDamageAwardXPTunables", "k_tunePvEMaxDamageAwardXPStored", func_574(Global_1901929->f_628.f_2), iParam0);
}

void func_91()
{
	Global_1901929->f_633 = func_571(1123266412, -664637427, 3, "CRITICAL_REQUEST_MAX");
	if (Global_1901929->f_633 < 1)
	{
		Global_1901929->f_633 = 1;
	}
	if (Global_1901929->f_633 > 10)
	{
		Global_1901929->f_633 = 10;
	}
	Global_1901929->f_633.f_1 = func_571(1123266412, -658072867, -658072867, "CRITICAL_REQUEST_TIMEOUT");
	if (Global_1901929->f_633.f_1 < 30)
	{
		Global_1901929->f_633.f_1 = 30;
	}
	if (Global_1901929->f_633.f_1 > 300)
	{
		Global_1901929->f_633.f_1 = 300;
	}
}

void func_92(int iParam0)
{
	func_575("sPersonaAwardTunables", "iCriticalRequest_MaxAttempts", func_574(Global_1901929->f_633), iParam0);
	func_575("sPersonaAwardTunables", "iCriticalRequest_TimeoutSeconds", func_574(Global_1901929->f_633.f_1), iParam0);
}

void func_93()
{
	Global_1901929->f_635 = func_571(568573289, -621046008, 3, "MUGSHOT_UPLOAD_ATTEMPTS");
	Global_1901929->f_635 = func_579(Global_1901929->f_635, 1, 10);
	Global_1901929->f_635.f_1 = func_573(568573289, 1477903572, 15f, "MUGSHOT_UPLOAD_TIMEOUT");
	Global_1901929->f_635.f_1 = func_578(Global_1901929->f_635.f_1, 5f, 60f);
}

void func_94(int iParam0)
{
	func_575("sPersonaUploadTunables", "ituneMugshotUploadAttempts  ", func_588(Global_1901929->f_635), iParam0);
	func_575("sPersonaUploadTunables", "ftuneMugshotUploadTimeout  ", MISC::_0x2B6846401D68E563(Global_1901929->f_635.f_1, 4), iParam0);
}

void func_95()
{
	Global_1901929->f_672 = func_571(671991169, -1905296039, 5, "NOTORIETY__FREQUENCY_BONUS__SECONDS_TIER_1");
	Global_1901929->f_672.f_1 = func_573(671991169, -436221551, 4f, "NOTORIETY__FREQUENCY_BONUS__MULTIPLIER_TIER_1");
	Global_1901929->f_672.f_2 = func_571(671991169, -1674831662, 10, "NOTORIETY__FREQUENCY_BONUS__SECONDS_TIER_2");
	Global_1901929->f_672.f_3 = func_573(671991169, 1068432622, 3f, "NOTORIETY__FREQUENCY_BONUS__MULTIPLIER_TIER_2");
	Global_1901929->f_672.f_4 = func_571(671991169, 592455452, 30, "NOTORIETY__FREQUENCY_BONUS__SECONDS_TIER_3");
	Global_1901929->f_672.f_5 = func_573(671991169, 160534708, 2.5f, "NOTORIETY__FREQUENCY_BONUS__MULTIPLIER_TIER_3");
	Global_1901929->f_672.f_6 = func_571(671991169, 832029611, 60, "NOTORIETY__FREQUENCY_BONUS__SECONDS_TIER_4");
	Global_1901929->f_672.f_7 = func_573(671991169, 1194822623, 2f, "NOTORIETY__FREQUENCY_BONUS__MULTIPLIER_TIER_4");
	Global_1901929->f_672.f_8 = func_571(671991169, 1189473863, 120, "NOTORIETY__FREQUENCY_BONUS__SECONDS_TIER_5");
	Global_1901929->f_672.f_9 = func_573(671991169, 1433413712, 1.5f, "NOTORIETY__FREQUENCY_BONUS__MULTIPLIER_TIER_5");
	Global_1901929->f_672.f_10 = func_571(671991169, 1504231957, 180, "NOTORIETY__PACIFIST_DEC__SECONDS_TIER_1");
	Global_1901929->f_672.f_11 = func_573(671991169, 1656466956, 0.028f, "NOTORIETY__PACIFIST_DEC__VALUE_TIER_1");
	Global_1901929->f_672.f_12 = func_571(671991169, 1813145320, 225, "NOTORIETY__PACIFIST_DEC__SECONDS_TIER_2");
	Global_1901929->f_672.f_13 = func_573(671991169, -536532827, 0.028f, "NOTORIETY__PACIFIST_DEC__VALUE_TIER_2");
	Global_1901929->f_672.f_14 = func_571(671991169, 1152260128, 450, "NOTORIETY__PACIFIST_DEC__SECONDS_TIER_3");
	Global_1901929->f_672.f_15 = func_573(671991169, 1185412581, 0.028f, "NOTORIETY__PACIFIST_DEC__VALUE_TIER_3");
	Global_1901929->f_672.f_16 = func_571(671991169, 1464122701, 900, "NOTORIETY__PACIFIST_DEC__SECONDS_TIER_4");
	Global_1901929->f_672.f_17 = func_573(671991169, 927553320, 0.028f, "NOTORIETY__PACIFIST_DEC__VALUE_TIER_4");
	Global_1901929->f_672.f_18 = func_571(671991169, 1183128530, 1800, "NOTORIETY__PACIFIST_DEC__SECONDS_TIER_5");
	Global_1901929->f_672.f_19 = func_573(671991169, 631157715, 0.028f, "NOTORIETY__PACIFIST_DEC__VALUE_TIER_5");
	Global_1901929->f_672.f_20 = func_571(671991169, 1482407807, 3600, "NOTORIETY__PACIFIST_DEC__SECONDS_TIER_6");
	Global_1901929->f_672.f_21 = func_573(671991169, -1425555797, 0.028f, "NOTORIETY__PACIFIST_DEC__VALUE_TIER_6");
	Global_1901929->f_672.f_22 = func_573(671991169, 1570278313, 5f, "NOTORIETY__RESPAWN_MOD__TIER_1");
	Global_1901929->f_672.f_23 = func_573(671991169, 1908913159, 10f, "NOTORIETY__RESPAWN_MOD__TIER_2");
	Global_1901929->f_672.f_24 = func_573(671991169, -2143399692, 15f, "NOTORIETY__RESPAWN_MOD__TIER_3");
	Global_1901929->f_672.f_25 = func_573(671991169, -1771012776, 20f, "NOTORIETY__RESPAWN_MOD__TIER_4");
	Global_1901929->f_672.f_26 = func_573(671991169, -1531700769, 25f, "NOTORIETY__RESPAWN_MOD__TIER_5");
	Global_1901929->f_672.f_27 = func_571(671991169, 479574383, 20000, "NOTORIETY__EXCEPTION__VICTIM_IS_MUCH_MORE_NOTORIOUS");
	Global_1901929->f_672.f_28 = func_571(671991169, 746827868, 50000, "NOTORIETY__MAX_NOTORIETY");
	Global_1901929->f_672.f_29 = func_571(671991169, -1420951769, 20000, "NOTORIETY__EXCEPTION__TOO_NOTORIOUS_FOR_PASSIVE");
	Global_1901929->f_672.f_30 = func_571(671991169, -945965351, 180000, "NOTORIETY__DECREMENT_UPDATE_TIME");
	Global_1901929->f_672.f_31 = func_571(671991169, 1454501033, 5000, "PSNA_NOTO_TIER_1");
	Global_1901929->f_672.f_32 = func_571(671991169, 1631912399, 10000, "PSNA_NOTO_TIER_2");
	Global_1901929->f_672.f_33 = func_571(671991169, 1948166018, 15000, "PSNA_NOTO_TIER_3");
	Global_1901929->f_672.f_34 = func_571(671991169, -1938630614, 20000, "PSNA_NOTO_TIER_4");
	Global_1901929->f_672.f_35 = func_571(671991169, -1614184745, 25000, "PSNA_NOTO_TIER_5");
	Global_1901929->f_672.f_36 = func_571(671991169, -1360609441, 30000, "PSNA_NOTO_TIER_MAX");
	Global_1901929->f_672.f_37 = func_571(671991169, 563832432, 30, "NOTORIETY__TIME_TO_WAIT_FOR_PASSIVE");
	Global_1901929->f_672.f_38 = func_571(671991169, -1571810305, 30, "NOTORIETY__TIME_TO_WAIT_FOR_NOT_PASSIVE");
	Global_1901929->f_672.f_39 = func_571(671991169, -892470127, 180, "NOTORIETY__TIME_TO_WAIT_AFTER_INFRACTION");
	Global_1901929->f_672.f_40 = func_571(671991169, 452687085, 4, "NOTORIETY__KILLING_HOSTILE_PLAYER_LIMIT");
	Global_1901929->f_672.f_41 = func_571(671991169, -1248365197, 0, "NOTORIETY__ENEMIES_PRODUCE_NOTORIETY");
	Global_1901929->f_672.f_42 = func_571(671991169, -1342374017, 1, "NOTORIETY__HORSE_COLLISION_ALLOWANCE");
	Global_1901929->f_672.f_43 = func_571(671991169, 221173223, 60, "NOTORIETY__HORSE_COLLISION_COOLDOWN");
	Global_1901929->f_672.f_44 = func_571(671991169, 730869021, 3, "NOTORIETY__HORSE_COLLISION_DELAY");
	Global_1901929->f_672.f_45 = func_571(671991169, 2071424351, 30, "NOTORIETY__REDUNDANT_PASSIVE_SYNC_RATE");
}

void func_96(int iParam0)
{
}

void func_97()
{
	Global_1901929->f_637 = func_571(-1846762425, -498281179, 300, "NetStableBondingQueueTime");
	Global_1901929->f_637.f_1 = func_573(-1846762425, 528769592, 200f, "NetStableMaxXPBeforePush");
	Global_1901929->f_637.f_2 = func_573(-1846762425, 379069684, 4f, "NetStableHorseBondingXPLeading");
	Global_1901929->f_637.f_3 = func_573(-1846762425, -1697100287, 2f, "NetStableHorseBondingXPWalkTrot");
	Global_1901929->f_637.f_4 = func_573(-1846762425, 1590612859, 1f, "NetStableHorseBondingXPGallop");
	Global_1901929->f_637.f_5 = func_573(-1846762425, -1171519456, 1f, "NetStableHorseBondingXPSprint");
	Global_1901929->f_637.f_6 = func_573(-1846762425, -749009781, 0f, "NetStableHorseBondingXPEquipSaddle");
	Global_1901929->f_637.f_7 = func_573(-1846762425, 1009790605, 50f, "NetStableHorseBondingXPEquipSaddleFirstTime");
	Global_1901929->f_637.f_8 = func_573(-1846762425, -958133120, 0f, "NetStableHorseBondingXPBreakHorse");
	Global_1901929->f_637.f_9 = func_573(-1846762425, -1184798048, 25f, "NetStableHorseBondingXPBreakHorseFirstTime");
	Global_1901929->f_637.f_10 = func_573(-1846762425, 734555943, 1f, "NetStableHorseBondingXPPatHorseMin");
	Global_1901929->f_637.f_11 = func_573(-1846762425, -512634577, 5f, "NetStableHorseBondingXPPatHorseMax");
	Global_1901929->f_637.f_12 = func_573(-1846762425, -1771707982, 1f, "NetStableHorseBondingXPCalmedHorseMin");
	Global_1901929->f_637.f_13 = func_573(-1846762425, -1635686155, 15f, "NetStableHorseBondingXPCalmedHorseMax");
	Global_1901929->f_637.f_14 = func_573(-1846762425, -1535076953, 1f, "NetStableHorseBondingXPHitchMin");
	Global_1901929->f_637.f_15 = func_573(-1846762425, -441189267, 15f, "NetStableHorseBondingXPHitchMax");
	Global_1901929->f_637.f_16 = func_573(-1846762425, 211393452, 1f, "NetStableHorseBondingXPFeedFoodFed");
	Global_1901929->f_637.f_17 = func_573(-1846762425, -497291461, 5f, "NetStableHorseBondingXPFeedFoodGettingHungry");
	Global_1901929->f_637.f_18 = func_573(-1846762425, 853989750, 15f, "NetStableHorseBondingXPFeedFoodHungry");
	Global_1901929->f_637.f_19 = func_573(-1846762425, 1802172049, 5f, "NetStableHorseBondingXPFeedSnack");
	Global_1901929->f_637.f_20 = func_573(-1846762425, 1889860693, 1f, "NetStableHorseBondingXPGroomedClean");
	Global_1901929->f_637.f_21 = func_573(-1846762425, 548690689, 5f, "NetStableHorseBondingXPGroomedGettingDirty");
	Global_1901929->f_637.f_22 = func_573(-1846762425, 1773042438, 15f, "NetStableHorseBondingXPGroomedDirty");
	Global_1901929->f_637.f_23 = func_573(-1846762425, 993534511, 5f, "NetStableHorseBondingXPOintmentGiven");
	Global_1901929->f_637.f_24 = func_573(-1846762425, -1501179504, 10f, "NetStableHorseBondingXPCarePackage");
	Global_1901929->f_637.f_25 = func_573(-1846762425, 1951819216, 1f, "NetStableHorseBondingXPLightenedLoadMin");
	Global_1901929->f_637.f_26 = func_573(-1846762425, 1833363154, 15f, "NetStableHorseBondingXPLightenedLoadMax");
	Global_1901929->f_637.f_27 = func_573(-1846762425, 1615912764, -50f, "NetStableHorseBondingXPKilledOwnHorse");
	Global_1901929->f_637.f_29 = func_571(-1846762425, 777899034, 50, "iMaxHorseCargoPelts");
	Global_1901929->f_637.f_30 = func_571(-1846762425, 630198085, 50, "iMaxWagonCargoPelts");
	Global_1901929->f_637.f_28 = func_571(-1846762425, -1281438789, 20, "iHuntingWagonInventory");
	Global_1901929->f_637.f_31 = func_572(-1846762425, 1225922826, 0, "bDisableHorseCargoSales");
	Global_1901929->f_637.f_32 = func_572(-1846762425, 764582212, 0, "bDisableWagonCargoSales");
	Global_1901929->f_637.f_33 = func_572(-1846762425, -1497244873, 0, "bDisableHorseCargoFastTravel");
	Global_1901929->f_637.f_34 = func_572(-1846762425, -854836691, 0, "bDisableHorseCargoStableEntry");
}

void func_98(int iParam0)
{
	func_575("sNetStableRPGTunables", "iTuneBondingQueueDefaultPushTime  ", func_588(Global_1901929->f_637), iParam0);
	func_575("sNetStableRPGTunables", "iTuneMaxBondingXPBeforeForcePush  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_1, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPLeading  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_2, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPWalkTrot  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_3, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPGallop  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_4, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPSprint  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_5, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPEquipSaddle  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_6, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPEquipSaddleFirstTime  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_7, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPBreakHorse  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_8, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPBreakHorseFirstTime  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_9, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPPatHorseMin  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_10, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPPatHorseMax  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_11, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPCalmedHorseMin  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_12, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPCalmedHorseMax  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_13, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPHitchMin  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_14, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPHitchMax  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_15, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPFeedFoodFed  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_16, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPFeedFoodGettingHungry  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_17, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPFeedFoodHungry  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_18, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPFeedSnack  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_19, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPGroomedClean  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_20, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPGroomedGettingDirty  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_21, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPGroomedDirty  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_22, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPOintmentGiven  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_23, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPCarePackage  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_24, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPLightenedLoadMin  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_25, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPLightenedLoadMax  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_26, 4), iParam0);
	func_575("sNetStableRPGTunables", "fTuneHorseBondingXPKilledOwnHorse  ", MISC::_0x2B6846401D68E563(Global_1901929->f_637.f_27, 4), iParam0);
	func_575("sNetStableRPGTunables", "iMaxHorseCargoPelts  ", func_588(Global_1901929->f_637.f_29), iParam0);
	func_575("sNetStableRPGTunables", "iMaxWagonCargoPelts  ", func_588(Global_1901929->f_637.f_30), iParam0);
	func_575("sNetStableRPGTunables", "iHuntingWagonInventory  ", func_588(Global_1901929->f_637.f_28), iParam0);
	func_575("sNetStableRPGTunables", "bDisableHorseCargoSales  ", MISC::_0xF216F74101968DB0(Global_1901929->f_637.f_31), iParam0);
	func_575("sNetStableRPGTunables", "bDisableWagonCargoSales  ", MISC::_0xF216F74101968DB0(Global_1901929->f_637.f_32), iParam0);
	func_575("sNetStableRPGTunables", "bDisableHorseCargoFastTravel  ", MISC::_0xF216F74101968DB0(Global_1901929->f_637.f_33), iParam0);
	func_575("sNetStableRPGTunables", "bDisableHorseCargoStableEntry  ", MISC::_0xF216F74101968DB0(Global_1901929->f_637.f_34), iParam0);
}

void func_99()
{
	Global_1901929->f_628.f_4 = func_571(-1962032551, 984890790, 50, "PvEMaxKillXP");
	if (Global_1901929->f_628.f_4 < 1)
	{
		Global_1901929->f_628.f_4 = 50;
	}
	else if (Global_1901929->f_628.f_4 > 500)
	{
		Global_1901929->f_628.f_4 = 50;
	}
}

void func_100(int iParam0)
{
	func_575("sDamageAwardXPTunables", "k_tunePvEMaxKillXP", func_574(Global_1901929->f_628.f_4), iParam0);
}

void func_101()
{
	int iVar0;
	int iVar1;

	Global_1901929->f_718 = func_571(1568026245, 813665031, 10, "PLAYER_MENU_PLAYER_OPTIONS_GSS_DELAY");
	iVar0 = 0;
	iVar1 = 10000;
	if (Global_1901929->f_718 < iVar0 || Global_1901929->f_718 > iVar1)
	{
		func_579(Global_1901929->f_718, iVar0, iVar1);
	}
}

void func_102()
{
	Global_1901929->f_754 = func_572(-1985006005, -1472407298, 0, "NET_MINIGAME_RESTRICTOR_BLOCK_LOCKOUT");
	Global_1901929->f_754.f_1 = func_571(-1985006005, 386257879, 144000, "NET_MINIGAME_RESTRICTOR_GAMBLING_LIMIT_IN_SECONDS");
	Global_1901929->f_754.f_2 = func_571(-1985006005, 1491213745, 50, "NET_MINIGAME_RESTRICTOR_GAMBLING_PERCENTAGE");
	Global_1901929->f_754.f_3 = func_571(-1985006005, 1448958256, 604800, "NET_MINIGAME_RESTRICTOR_LOCKOUT_IN_SECONDS");
	Global_1901929->f_754.f_4 = func_571(-1985006005, -1634010356, 28, "NET_MINIGAME_RESTRICTOR_ROLLING_DAYS");
	if (Global_1901929->f_754.f_1 < 0)
	{
		Global_1901929->f_754.f_1 = 0;
	}
	Global_1901929->f_754.f_2 = func_579(Global_1901929->f_754.f_2, 0, 100);
	if (Global_1901929->f_754.f_3 < 0)
	{
		Global_1901929->f_754.f_3 = 0;
	}
}

void func_103(int iParam0)
{
}

void func_104()
{
	Global_1901929->f_720 = func_573(-106675214, -1770341755, 100f, "TRAVELLING_SALESMAN__BLIP_DISTANCE");
	Global_1901929->f_720.f_1 = func_573(-106675214, 829944720, 150f, "TRAVELLING_SALESMAN__MUSIC_DISTANCE");
}

void func_105()
{
	Global_1901929->f_722 = func_572(-553646626, 1688416073, 1, "SC_FEED_ENABLE_BOUNTYHUNTER_RANK_005");
	Global_1901929->f_722.f_1 = func_572(-553646626, 1257504015, 1, "SC_FEED_ENABLE_BOUNTYHUNTER_RANK_010");
	Global_1901929->f_722.f_2 = func_572(-553646626, 1725969635, 1, "SC_FEED_ENABLE_BOUNTYHUNTER_RANK_015");
	Global_1901929->f_722.f_3 = func_572(-553646626, -663513274, 1, "SC_FEED_ENABLE_COLLECTOR_RANK_005");
	Global_1901929->f_722.f_4 = func_572(-553646626, -327860755, 1, "SC_FEED_ENABLE_COLLECTOR_RANK_010");
	Global_1901929->f_722.f_5 = func_572(-553646626, -134392579, 1, "SC_FEED_ENABLE_COLLECTOR_RANK_015");
	Global_1901929->f_722.f_6 = func_572(-553646626, -1410077126, 1, "SC_FEED_ENABLE_TRADER_RANK_005");
	Global_1901929->f_722.f_7 = func_572(-553646626, 666199795, 1, "SC_FEED_ENABLE_TRADER_RANK_010");
	Global_1901929->f_722.f_8 = func_572(-553646626, -98366517, 1, "SC_FEED_ENABLE_TRADER_RANK_015");
	Global_1901929->f_722.f_9 = func_572(-553646626, 448433853, 1, "SC_FEED_ENABLE_MOONSHINER_RANK_005");
	Global_1901929->f_722.f_10 = func_572(-553646626, -1373063505, 1, "SC_FEED_ENABLE_MOONSHINER_RANK_010");
	Global_1901929->f_722.f_11 = func_572(-553646626, -1073194386, 1, "SC_FEED_ENABLE_MOONSHINER_RANK_015");
}

void func_106(int iParam0)
{
	func_575("sSCFeedTunables", "bEnableBountyHunterFeedRank005", MISC::_0xF216F74101968DB0(Global_1901929->f_722), iParam0);
	func_575("sSCFeedTunables", "bEnableBountyHunterFeedRank010", MISC::_0xF216F74101968DB0(Global_1901929->f_722.f_1), iParam0);
	func_575("sSCFeedTunables", "bEnableBountyHunterFeedRank015", MISC::_0xF216F74101968DB0(Global_1901929->f_722.f_2), iParam0);
	func_575("sSCFeedTunables", "bEnableCollectorFeedRank005", MISC::_0xF216F74101968DB0(Global_1901929->f_722.f_3), iParam0);
	func_575("sSCFeedTunables", "bEnableCollectorFeedRank010", MISC::_0xF216F74101968DB0(Global_1901929->f_722.f_4), iParam0);
	func_575("sSCFeedTunables", "bEnableCollectorFeedRank015", MISC::_0xF216F74101968DB0(Global_1901929->f_722.f_5), iParam0);
	func_575("sSCFeedTunables", "bEnableTraderFeedRank005", MISC::_0xF216F74101968DB0(Global_1901929->f_722.f_6), iParam0);
	func_575("sSCFeedTunables", "bEnableTraderFeedRank010", MISC::_0xF216F74101968DB0(Global_1901929->f_722.f_7), iParam0);
	func_575("sSCFeedTunables", "bEnableTraderFeedRank015", MISC::_0xF216F74101968DB0(Global_1901929->f_722.f_8), iParam0);
	func_575("sSCFeedTunables", "bEnableMoonshinerFeedRank005", MISC::_0xF216F74101968DB0(Global_1901929->f_722.f_9), iParam0);
	func_575("sSCFeedTunables", "bEnableMoonshinerFeedRank010", MISC::_0xF216F74101968DB0(Global_1901929->f_722.f_10), iParam0);
	func_575("sSCFeedTunables", "bEnableMoonshinerFeedRank015", MISC::_0xF216F74101968DB0(Global_1901929->f_722.f_11), iParam0);
}

void func_107()
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	int iVar21;

	Global_1901929->f_742 = func_573(-2037497938, 178944019, 30f, "MOONSHINE_BUSINESS_MINS_TO_CREATE_MOONSHINE_WEAK");
	Global_1901929->f_742.f_1 = func_573(-2037497938, -41122219, 45f, "MOONSHINE_BUSINESS_MINS_TO_CREATE_MOONSHINE_DEFAULT");
	Global_1901929->f_742.f_2 = func_573(-2037497938, -925810086, 60f, "MOONSHINE_BUSINESS_MINS_TO_CREATE_MOONSHINE_STRONG");
	Global_1901929->f_742.f_3 = func_573(-2037497938, 1534685627, 40f, "MOONSHINE_PROPERTY_DIST_TO_SUPPRESS_DOOR_CHARGE");
	Global_1901929->f_742.f_4 = func_573(-2037497938, -1183883239, 15f, "MOONSHINE_PROPERTY_DIST_TO_BLOCK_CARRIABLE_DROPS");
	Global_1901929->f_742.f_5 = func_571(-2037497938, 1147869078, 20, "MOONSHINE_BUSINESS_DEFAULT_UNITS_OF_MASH_PURCHASED");
	Global_1901929->f_742.f_6 = func_571(-2037497938, 1346636723, 20, "MOONSHINE_BUSINESS_DEFAULT_BOTTLES_REQUIRED_FOR_DELIVERY");
	Global_1901929->f_742.f_7 = func_571(-2037497938, 181855951, 10000, "MOONSHINE_SHACK_MILLISECONDS_BEFORE_SHACK_EXIT");
	Global_1901929->f_742.f_8 = func_573(-2037497938, -1357099865, 250f, "MOONSHINE_FORCED_EXIT_OUTER_RADIUS");
	Global_1901929->f_742.f_9 = func_573(-2037497938, 980936602, 25f, "MOONSHINE_FORCED_EXIT_INNER_RADIUS");
	Global_1901929->f_742.f_10 = func_573(-2037497938, -89781617, 40f, "MOONSHINE_SAFETY_DIST_RADIUS");
	Global_1901929->f_742.f_11 = func_571(-2037497938, 1790013431, 20000, "MOONSHINE_LOAD_SCENE_FAILSAFE_TIMER");
	fVar0 = 0f;
	fVar1 = 600f;
	if (Global_1901929->f_742 < fVar0 || Global_1901929->f_742 > fVar1)
	{
		func_578(Global_1901929->f_742, fVar0, fVar1);
	}
	fVar2 = 0f;
	fVar3 = 600f;
	if (Global_1901929->f_742.f_1 < fVar2 || Global_1901929->f_742.f_1 > fVar3)
	{
		func_578(Global_1901929->f_742.f_1, fVar2, fVar3);
	}
	fVar4 = 0f;
	fVar5 = 600f;
	if (Global_1901929->f_742.f_2 < fVar4 || Global_1901929->f_742.f_2 > fVar5)
	{
		func_578(Global_1901929->f_742.f_2, fVar4, fVar5);
	}
	fVar6 = 0f;
	fVar7 = 1000f;
	if (Global_1901929->f_742.f_3 < fVar6 || Global_1901929->f_742.f_3 > fVar7)
	{
		func_578(Global_1901929->f_742.f_3, fVar6, fVar7);
	}
	iVar8 = 0;
	iVar9 = 1000;
	if (Global_1901929->f_742.f_5 < iVar8 || Global_1901929->f_742.f_5 > iVar9)
	{
		func_579(Global_1901929->f_742.f_5, iVar8, iVar9);
	}
	iVar10 = 0;
	iVar11 = 1000;
	if (Global_1901929->f_742.f_6 < iVar10 || Global_1901929->f_742.f_6 > iVar11)
	{
		func_579(Global_1901929->f_742.f_6, iVar10, iVar11);
	}
	iVar12 = 1;
	iVar13 = 300000;
	if (Global_1901929->f_742.f_7 < iVar12 || Global_1901929->f_742.f_7 > iVar13)
	{
		func_579(Global_1901929->f_742.f_7, iVar12, iVar13);
	}
	fVar14 = 50f;
	fVar15 = 1000f;
	if (Global_1901929->f_742.f_8 < fVar14 || Global_1901929->f_742.f_8 > fVar15)
	{
		func_578(Global_1901929->f_742.f_8, fVar14, fVar15);
	}
	fVar16 = 0f;
	fVar17 = 500f;
	if (Global_1901929->f_742.f_9 < fVar16 || Global_1901929->f_742.f_9 > fVar17)
	{
		func_578(Global_1901929->f_742.f_9, fVar16, fVar17);
	}
	fVar18 = 0f;
	fVar19 = 500f;
	if (Global_1901929->f_742.f_10 < fVar18 || Global_1901929->f_742.f_10 > fVar19)
	{
		func_578(Global_1901929->f_742.f_10, fVar18, fVar19);
	}
	iVar20 = 0;
	iVar21 = 300000;
	if (Global_1901929->f_742.f_11 < iVar20 || Global_1901929->f_742.f_11 > iVar21)
	{
		func_579(Global_1901929->f_742.f_11, iVar20, iVar21);
	}
}

void func_108(int iParam0)
{
}

void func_109()
{
	if (&Global_1901929 == -1)
	{
		return;
	}
	Global_1901929 = -1;
}

void func_110()
{
	Global_1099293->f_331 = 0;
}

void func_111(int iParam0)
{
	struct<9> Var0;
	int iVar10;
	var uVar11;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 10))
	{
		return;
	}
	iVar10 = Var0.f_8;
	if (iVar10 < 0 || iVar10 >= 32)
	{
		return;
	}
	if (iVar10 != PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		func_589(Global_1131373->f_4641.f_445[iVar10 /*7*/]);
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Var0.f_8))
	{
		return;
	}
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(Var0.f_8, &uVar11);
	func_590(&uVar11, iVar10);
}

void func_112(int iParam0)
{
	struct<9> Var0;
	int iVar10;

	func_172();
	func_173();
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 10))
	{
		return;
	}
	iVar10 = Var0.f_8;
	if (iVar10 < 0 || iVar10 >= 32)
	{
		return;
	}
	if (iVar10 != PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		func_589(Global_1131373->f_4641.f_445[iVar10 /*7*/]);
	}
	func_591(iVar10);
}

void func_113(int iParam0)
{
}

void func_114(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 4);
	switch (iVar0)
	{
		case 0:
			func_592(iParam0);
			break;
		case 2:
			func_593(iParam0);
			break;
		case 1:
			func_594(iParam0);
			break;
		case 3:
			func_595(iParam0);
			break;
		case 19:
			break;
		case 20:
			func_596(iParam0);
			break;
		case 6:
			func_597(iParam0);
			break;
		case 7:
			func_598(iParam0);
			break;
		case 26:
			func_599(iParam0);
			break;
		case 44:
			func_600(iParam0);
			break;
		case 172:
			func_601(iParam0);
			break;
		case 176:
			func_602(iParam0);
			break;
		case 177:
			func_603(iParam0);
			break;
		case 179:
			func_604(iParam0);
			break;
		case 33:
			func_605(iParam0);
			break;
		case 10:
			func_606(iParam0);
			break;
		case 11:
			func_607(iParam0);
			break;
		case 4:
			func_608(iParam0);
			break;
		case 5:
			func_609(iParam0);
			break;
		case 9:
			func_610(iParam0);
			break;
		case 13:
			func_611(iParam0);
			break;
		case 22:
			func_612(iParam0);
			break;
		case 23:
			break;
		case 46:
			func_613(iParam0);
			break;
		case 50:
			func_614(iParam0);
			break;
		case 28:
			func_615(iParam0);
			break;
		case 39:
			func_616(iParam0);
			break;
		case 40:
			func_617(iParam0);
			break;
		case 42:
			func_618(iParam0);
			break;
		case 43:
			func_619(iParam0);
			break;
		case 35:
			func_620(iParam0);
			break;
		case 36:
			func_621(iParam0);
			break;
		case 37:
			func_622(iParam0);
			break;
		case 38:
			func_623(iParam0);
			break;
		case 29:
			func_624(iParam0);
			break;
		case 34:
			break;
		case 181:
			func_625(iParam0);
			break;
		case 182:
			func_626(iParam0);
			break;
		case 31:
			func_627(iParam0);
			break;
		case 45:
			func_628(&(Global_1070355->f_26843.f_11), &(Global_17173.f_54.f_2480));
			break;
		case 188:
			func_629(iParam0);
			break;
		case 191:
			func_630(iParam0);
			break;
		case 185:
			func_631(iParam0);
			break;
	}
}

void func_115(int iParam0)
{
	vector3 vVar0;
	struct<25> Var3;
	struct<6> Var66;

	if (SCRIPTS::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		Var3.f_3 = 255;
		Var3.f_4 = -1;
		Var3.f_5 = 623901053;
		Var3.f_6.f_3 = 255;
		Var3.f_6.f_4 = -1;
		Var3.f_6.f_5 = 623901053;
		Var3.f_12.f_3 = 255;
		Var3.f_12.f_4 = -1;
		Var3.f_12.f_5 = 623901053;
		Var3.f_18.f_3 = 255;
		Var3.f_18.f_4 = -1;
		Var3.f_18.f_5 = 623901053;
		Var3.f_24.f_3 = 255;
		Var3.f_24.f_4 = -1;
		Var3.f_24.f_5 = 623901053;
		Var66 = vVar0.y;
		Var66.f_1 = vVar0.x;
		Var66.f_5 = vVar0.z;
		func_632(&Var66, &Var3);
		func_633(&Var3, 32, 6);
		func_634(&Var3);
	}
}

void func_116(int iParam0)
{
	vector3 vVar0;
	struct<25> Var3;
	struct<6> Var66;

	if (SCRIPTS::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		Var3.f_3 = 255;
		Var3.f_4 = -1;
		Var3.f_5 = 623901053;
		Var3.f_6.f_3 = 255;
		Var3.f_6.f_4 = -1;
		Var3.f_6.f_5 = 623901053;
		Var3.f_12.f_3 = 255;
		Var3.f_12.f_4 = -1;
		Var3.f_12.f_5 = 623901053;
		Var3.f_18.f_3 = 255;
		Var3.f_18.f_4 = -1;
		Var3.f_18.f_5 = 623901053;
		Var3.f_24.f_3 = 255;
		Var3.f_24.f_4 = -1;
		Var3.f_24.f_5 = 623901053;
		Var66 = vVar0.y;
		Var66.f_1 = vVar0.x;
		Var66.f_5 = vVar0.z;
		func_632(&Var66, &Var3);
		func_633(&Var3, 32, 6);
		func_635(&Var3);
	}
}

void func_117(int iParam0)
{
	struct<2> Var0;
	struct<6> Var9;
	struct<25> Var40;

	if (SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 9))
	{
		Var9 = 0;
		Var9.f_1 = Var0;
		Var9.f_5 = Var0.f_1;
		Var40.f_3 = 255;
		Var40.f_4 = -1;
		Var40.f_5 = 623901053;
		Var40.f_6.f_3 = 255;
		Var40.f_6.f_4 = -1;
		Var40.f_6.f_5 = 623901053;
		Var40.f_12.f_3 = 255;
		Var40.f_12.f_4 = -1;
		Var40.f_12.f_5 = 623901053;
		Var40.f_18.f_3 = 255;
		Var40.f_18.f_4 = -1;
		Var40.f_18.f_5 = 623901053;
		Var40.f_24.f_3 = 255;
		Var40.f_24.f_4 = -1;
		Var40.f_24.f_5 = 623901053;
		func_632(&Var9, &Var40);
		func_636(&Var40);
	}
}

void func_118(int iParam0)
{
}

void func_119(int iParam0)
{
	var uVar0;
	struct<31> Var31;

	if (SCRIPTS::GET_EVENT_DATA(1, iParam0, &uVar0, 31))
	{
		func_637(&uVar0);
		Var31.f_3 = 255;
		Var31.f_4 = -1;
		Var31.f_5 = 623901053;
		Var31.f_6.f_3 = 255;
		Var31.f_6.f_4 = -1;
		Var31.f_6.f_5 = 623901053;
		Var31.f_12.f_3 = 255;
		Var31.f_12.f_4 = -1;
		Var31.f_12.f_5 = 623901053;
		Var31.f_18.f_3 = 255;
		Var31.f_18.f_4 = -1;
		Var31.f_18.f_5 = 623901053;
		Var31.f_24.f_3 = 255;
		Var31.f_24.f_4 = -1;
		Var31.f_24.f_5 = 623901053;
		func_632(&uVar0, &Var31);
		func_633(&Var31, 32, 6);
		func_638(&Var31);
		func_639(&Var31);
		func_640(&Var31);
		func_641(&Var31);
		func_642(&Var31);
		if (Var31.f_30.f_3)
		{
			func_643(&Var31);
			if (Var31.f_30.f_14)
			{
				func_644(&Var31, 0);
				func_645(&Var31);
			}
			else if (Var31.f_30.f_13 || Var31.f_30.f_23)
			{
				func_646(&Var31, 0);
				func_647(&Var31);
			}
			else
			{
				func_648(&Var31, 0);
				func_649(&Var31);
			}
		}
		else if (Var31.f_30.f_4)
		{
			func_650(&Var31, 0);
		}
		else
		{
			func_651(&Var31, 0);
		}
	}
}

void func_120(int iParam0)
{
	struct<2> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Var0))
		{
			if (ENTITY::IS_ENTITY_A_PED(Var0))
			{
				iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4);
					if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar5))
					{
						if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1) && ENTITY::IS_ENTITY_A_PED(Var0.f_1))
							{
								iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1));
								if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar6) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar6))
								{
									if (iVar5 == PLAYER::PLAYER_ID())
									{
										func_652(iVar6);
									}
									else if (iVar6 == PLAYER::PLAYER_ID())
									{
										func_653(iVar5);
										func_654(iVar5, 0);
									}
								}
							}
							if (func_655(iVar5))
							{
								Global_1904612->f_8192 = iVar5;
								iVar7 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
								if (func_656(iVar7) || PED::IS_PED_CARRYING_SOMETHING(iVar7))
								{
									func_360(582, 0);
								}
								else
								{
									func_360(581, 0);
								}
							}
						}
					}
				}
			}
		}
		func_657(&Var0);
	}
}

void func_121(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;

	iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	if (SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1) && &Global_1273882->f_154[&Global_1273882] == NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)))
		{
			iVar3 = 255;
			if (PED::IS_PED_A_PLAYER(iVar2))
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
			}
			if (iVar3 != &Global_1273882->f_154[&Global_1273882])
			{
				func_658(7, 1, iVar3);
			}
		}
		func_659(&(Var0.f_1), &Var0);
	}
}

void func_122(int iParam0)
{
	func_660(iParam0);
}

void func_123(int iParam0)
{
	struct<2> Var0;

	if (SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 2))
	{
		if (Var0 != Global_265331->f_124445.f_68)
		{
			return;
		}
		if (Var0.f_1)
		{
			Global_265331->f_124445.f_68.f_1 = 2;
		}
		else
		{
			Global_265331->f_124445.f_68.f_1 = 3;
		}
	}
}

void func_124(int iParam0)
{
	vector3 vVar0;
	struct<63> Var3;
	struct<6> Var66;

	if (SCRIPTS::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		Var3.f_3 = 255;
		Var3.f_4 = -1;
		Var3.f_5 = 623901053;
		Var3.f_6.f_3 = 255;
		Var3.f_6.f_4 = -1;
		Var3.f_6.f_5 = 623901053;
		Var3.f_12.f_3 = 255;
		Var3.f_12.f_4 = -1;
		Var3.f_12.f_5 = 623901053;
		Var3.f_18.f_3 = 255;
		Var3.f_18.f_4 = -1;
		Var3.f_18.f_5 = 623901053;
		Var3.f_24.f_3 = 255;
		Var3.f_24.f_4 = -1;
		Var3.f_24.f_5 = 623901053;
		if (vVar0.z == 1151374672)
		{
			Var66 = vVar0.x;
			Var66.f_1 = vVar0.y;
			Var66.f_5 = vVar0.z;
			func_632(&Var66, &Var3);
			func_633(&Var3, 32, 6);
			if (func_661(&Var3, &(Global_1273882->f_154[&Global_1273882])))
			{
				if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Var3.f_18.f_3))
				{
					func_662(4, Var3.f_18.f_3, &(Global_1273882->f_154[&Global_1273882]));
				}
			}
			else if (&Global_1273882->f_154[&Global_1273882] == Var3.f_18.f_3)
			{
				func_663(Var3.f_6.f_3, 3, 1, 1, 0, 0);
			}
			return;
		}
		Var66 = vVar0.x;
		Var66.f_1 = vVar0.y;
		Var66.f_5 = joaat("weapon_lasso");
		func_632(&Var66, &Var3);
		func_633(&Var3, 32, 6);
		switch (Var3.f_62)
		{
			case 3:
			case 4:
			case 6:
			case 7:
			case 8:
			case 9:
				if (func_661(&Var3, &(Global_1273882->f_154[&Global_1273882])))
				{
					func_662(4, Var3.f_18.f_3, &(Global_1273882->f_154[&Global_1273882]));
				}
				break;
		}
	}
}

void func_125(int iParam0)
{
	var uVar0;

	if (SCRIPTS::GET_EVENT_DATA(1, iParam0, &uVar0, 2))
	{
	}
}

void func_126(int iParam0)
{
	var uVar0;

	if (SCRIPTS::GET_EVENT_DATA(1, iParam0, &uVar0, 2))
	{
	}
}

void func_127(int iParam0)
{
	var uVar0;

	if (SCRIPTS::GET_EVENT_DATA(1, iParam0, &uVar0, 2))
	{
	}
}

void func_128(int iParam0)
{
	struct<18> Var0;
	int iVar18;
	int iVar25;
	int iVar26;
	char* sVar27;
	bool bVar28;
	struct<19> Var29;

	iVar26 = PLAYER::PLAYER_ID();
	bVar28 = func_664();
	if (SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 18))
	{
		switch (Var0.f_1)
		{
			case 3:
				Global_1273882->f_15 = _NAMESPACE26::NETWORK_GET_GANG_ID(Global_1273882->f_10);
				if (_NAMESPACE26::_0xD6F6ACF4392187FB(Var0) && _NAMESPACE26::NETWORK_GET_NUM_GANG_MEMBERS(Var0) == _NAMESPACE26::_0x853B0FA4D8732C57(Var0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(_NAMESPACE26::_0x4BE6C13A45CCA8EC(Var0)))
					{
						func_667("NG_FULL", func_665(Var0, 1, 0), func_666(_NAMESPACE26::_0x4BE6C13A45CCA8EC(Var0), 1, -1, 0));
					}
					else
					{
						func_667("NG_FULL", func_665(Var0, 1, 0), 636925055);
					}
				}
				else if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(_NAMESPACE26::_0x4BE6C13A45CCA8EC(Var0)))
				{
					func_667("NM_GC_POSSE_JOIN_FAIL", func_665(Var0, 1, 0), func_666(_NAMESPACE26::_0x4BE6C13A45CCA8EC(Var0), 1, -1, 0));
				}
				else
				{
					func_667("NM_GC_POSSE_JOIN_FAIL", func_665(Var0, 1, 0), 636925055);
				}
				if (Global_1180694->f_1 == 7)
				{
					if (func_668(Global_1180694->f_14.f_7))
					{
						func_669(Global_1180694->f_14.f_7, 1);
					}
					func_670(0);
				}
				else if (Global_1180694->f_1 == 5 || Global_1180694->f_1 == 4)
				{
					if (Global_1180694->f_490 != -1 && &Global_1180694->f_501[Global_1180694->f_490 /*118*/] == Global_1180694->f_14.f_7)
					{
						POSSE::_0xC08BFF658B2E51DA(0);
					}
					func_671(4, 0);
					func_670(0);
				}
				func_672();
				func_673(0);
				func_671(2, 0);
				func_671(4, 0);
				break;
			case 4:
				Global_1273882->f_15 = _NAMESPACE26::NETWORK_GET_GANG_ID(Global_1273882->f_10);
				if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var0.f_3), &(Global_1273882->f_1)))
				{
					func_674();
					func_675();
					func_676();
					if (bVar28 == 0)
					{
						if (func_678(func_677(0)) && func_679(func_677(0)) == 123297666)
						{
							sVar27 = MISC::_CREATE_VAR_STRING(10, "NG_PP_YOU_KICKED", func_680(&(Global_1070355->f_21187.f_7.f_1), 1891514641));
						}
						else
						{
							sVar27 = MISC::_CREATE_VAR_STRING(10, "NG_PP_YOU_KICKED", func_680(&(Global_1070355->f_21187.f_7.f_1), 636925055));
						}
						func_681(sVar27, -2, 0, 0, 0, 1);
					}
				}
				else
				{
					func_676();
					if (bVar28 == 0)
					{
						if (func_678(func_677(0)) && func_682(func_677(0)) == -893185173)
						{
							sVar27 = MISC::_CREATE_VAR_STRING(42, "NG_PP_R_KICKED", func_683(&(Var0.f_10), 1891514641), func_680(&(Global_1070355->f_21187.f_7.f_1), 1891514641));
						}
						else
						{
							sVar27 = MISC::_CREATE_VAR_STRING(42, "NG_PP_R_KICKED", func_683(&(Var0.f_10), 636925055), func_680(&(Global_1070355->f_21187.f_7.f_1), 636925055));
						}
						func_681(sVar27, -2, 0, 0, 0, 1);
					}
				}
				break;
			case 1:
				if (!func_684())
				{
					_NAMESPACE26::_0xEE4F20004D0288B7();
					return;
				}
				Var29.f_18 = 10;
				if (func_685(Var0, &Var29))
				{
					if (!func_686(Var29))
					{
						_NAMESPACE26::_0xAD22AB64FA428DF3(_NAMESPACE26::_0x0E5C9FB9ED5DFF1C(Var0));
						return;
					}
				}
				if (!NETWORK::_0xF23D6475640D29EB(&(Var0.f_3)))
				{
					_NAMESPACE26::_0xAD22AB64FA428DF3(_NAMESPACE26::_0x0E5C9FB9ED5DFF1C(Var0));
					return;
				}
				Global_1273882->f_15 = _NAMESPACE26::NETWORK_GET_GANG_ID(Global_1273882->f_10);
				iVar25 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0.f_3));
				func_687(Var0, iVar25);
				break;
			case 12:
				func_688(&Var0);
				break;
			case 7:
				func_689(&Var0, bVar28, iVar26);
				break;
			case 10:
				if (bVar28 == 0)
				{
					if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0.f_3)) == iVar26)
					{
						sVar27 = MISC::_CREATE_VAR_STRING(10, "NG_LEFT_01", func_680(&(Global_1070355->f_21187.f_7.f_1), 636925055));
						func_681(sVar27, -2, 0, 0, 0, 1);
					}
					else
					{
						_NAMESPACE26::_0x0A04A07BC3074EDB(1);
					}
					func_690(32);
					func_671(3, 1);
				}
				else
				{
					func_691(32);
					func_692(1, 0);
				}
				break;
			case 8:
				Global_1273882->f_15 = _NAMESPACE26::NETWORK_GET_GANG_ID(Global_1273882->f_10);
				func_693();
				func_694();
				if (_NAMESPACE26::_0xCE88A261DCBBA0D9(Var0, &iVar18))
				{
					func_695(&iVar18);
				}
				break;
			case 9:
				func_676();
				func_674();
				Global_1273882->f_15 = _NAMESPACE26::NETWORK_GET_GANG_ID(Global_1273882->f_10);
				func_690(32);
				func_696();
				func_694();
				func_675();
				func_697();
				func_698(PLAYER::PLAYER_ID());
				if (bVar28 == 0)
				{
					func_671(1, 1);
					func_671(3, 1);
					sVar27 = MISC::_CREATE_VAR_STRING(10, "NG_DISBAND", func_680(&(Global_1070355->f_21187.f_7.f_1), 636925055));
					func_681(sVar27, -2, 0, 0, 0, 1);
				}
				else
				{
					func_692(0, 0);
				}
				break;
			case 6:
				func_699(&Var0, bVar28);
				break;
			case 13:
				if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0.f_3)) == iVar26)
				{
					if (bVar28)
					{
						func_692(1, 1);
					}
					func_676();
					func_674();
					func_690(32);
				}
				break;
		}
		func_700(Var0);
	}
}

void func_129(int iParam0)
{
	int iVar0;
	char* sVar3;
	int iVar4;

	if (SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 3))
	{
		iVar4 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1273882->f_15);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
		{
			return;
		}
		switch (iVar0)
		{
			case 0:
				sVar3 = MISC::_CREATE_VAR_STRING(10, "NG_LEADER_ADDED_WAYPOINT", func_683(PLAYER::GET_PLAYER_NAME(iVar4), joaat("COLOR_PURE_WHITE")));
				func_681(sVar3, -2, 0, 0, 0, 1);
				break;
			case 1:
				sVar3 = MISC::_CREATE_VAR_STRING(10, "NG_LEADER_MOVED_WAYPOINT", func_683(PLAYER::GET_PLAYER_NAME(iVar4), joaat("COLOR_PURE_WHITE")));
				func_681(sVar3, -2, 0, 0, 0, 1);
				break;
			case 2:
				sVar3 = MISC::_CREATE_VAR_STRING(10, "NG_LEADER_REMOVED_WAYPOINT", func_683(PLAYER::GET_PLAYER_NAME(iVar4), joaat("COLOR_PURE_WHITE")));
				func_681(sVar3, -2, 0, 0, 0, 1);
				break;
		}
	}
}

void func_130(int iParam0)
{
	struct<4> Var0;
	struct<2> Var4;
	struct<25> Var35;

	if (SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		Var4 = 0;
		Var4.f_1 = Var0;
		Var35.f_3 = 255;
		Var35.f_4 = -1;
		Var35.f_5 = 623901053;
		Var35.f_6.f_3 = 255;
		Var35.f_6.f_4 = -1;
		Var35.f_6.f_5 = 623901053;
		Var35.f_12.f_3 = 255;
		Var35.f_12.f_4 = -1;
		Var35.f_12.f_5 = 623901053;
		Var35.f_18.f_3 = 255;
		Var35.f_18.f_4 = -1;
		Var35.f_18.f_5 = 623901053;
		Var35.f_24.f_3 = 255;
		Var35.f_24.f_4 = -1;
		Var35.f_24.f_5 = 623901053;
		func_632(&Var4, &Var35);
		func_701(&Var35, Var0.f_1, Var0.f_2, Var0.f_3);
	}
}

void func_131()
{
	bool bVar0;

	if (NETWORK::NETWORK_IS_SESSION_ACTIVE() && func_702())
	{
		bVar0 = true;
	}
	if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
	{
		func_267(2);
		if (bVar0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		{
			((*Global_1182189)[PLAYER::PLAYER_ID() /*17*/])->f_15 = 1;
		}
	}
	else
	{
		func_266(2);
		if (bVar0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		{
			((*Global_1182189)[PLAYER::PLAYER_ID() /*17*/])->f_15 = 0;
		}
	}
}

void func_132()
{
	if (func_703(512))
	{
		if (func_704(255))
		{
			func_705(512);
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
		else
		{
			func_706(0);
		}
	}
}

void func_133(int iParam0)
{
	struct<5> Var0;
	var uVar7;
	int iVar10;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		return;
	}
	if (func_707(&(Global_1274070->f_374.f_6)) && func_708(&Var0, &(Global_1274070->f_374.f_6)))
	{
		func_709(Var0.f_4);
	}
	else
	{
		iVar10 = func_710(Var0);
		if (iVar10 == -1)
		{
			return;
		}
		if (Var0.f_4 == 0)
		{
			switch (&Global_1223462->f_8943.f_16[iVar10 /*8*/])
			{
				case 509970874:
					func_711(8);
					func_712(iVar10, 32);
					break;
				case -1141463485:
					func_711(16);
					func_712(iVar10, 32);
					break;
				case -649633548:
					func_711(32);
					func_712(iVar10, 32);
					break;
				case 504244707:
					func_711(64);
					func_712(iVar10, 32);
					break;
				case -1228177771:
					func_712(iVar10, 32);
					break;
				case -506555739:
					func_712(iVar10, 32);
					break;
				case 355060119:
					func_712(iVar10, 32);
					break;
				case 1244342493:
					MISC::_COPY_MEMORY(&(Global_1223462->f_8943.f_101), &uVar7, 3);
					break;
				case -1555147881:
					func_713(607258092, 0, 0);
					break;
			}
			func_712(iVar10, 2);
			return;
		}
		switch (&Global_1223462->f_8943.f_16[iVar10 /*8*/])
		{
			case -1228177771:
				func_712(iVar10, 32);
				break;
			case -506555739:
				func_712(iVar10, 32);
				break;
			case 355060119:
				func_712(iVar10, 32);
				break;
			case -1555147881:
				func_713(607258092, 0, 0);
				break;
		}
		func_712(iVar10, 4);
	}
}

void func_134(int iParam0)
{
	var uVar0;

	if (SCRIPTS::GET_EVENT_DATA(1, iParam0, &uVar0, 2))
	{
		func_714(&uVar0);
	}
}

void func_135(int iParam0)
{
	var uVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	int iVar7;
	int iVar8;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &uVar0, 1))
	{
	}
	sVar1 = "HB_TOAST_BENEFITS_HEADER";
	sVar2 = "HB_TOAST_BENEFITS_UPDATED";
	iVar3 = MISC::GET_HASH_KEY("toasts_mp_generic");
	iVar4 = MISC::GET_HASH_KEY("TOAST_MP_BENEFITS");
	iVar5 = 1890312850;
	sVar6 = "HB_TOAST_BENEFITS_HOLD";
	iVar7 = MISC::GET_HASH_KEY("default");
	iVar8 = func_715(sVar1, sVar2, iVar3, iVar4, iVar5, sVar6, iVar7, 8000, 0, 0, 0, 0, 1, 1);
	if (iVar8 == 0)
	{
	}
}

void func_136()
{
	if (Global_1572887->f_106.f_16 == 0)
	{
		return;
	}
	func_716(1);
}

void func_137()
{
	struct<8> Var0;
	vector3 vVar19;

	Global_1572887->f_106.f_82 = MISC::GET_GAME_TIMER();
	Var0 = "";
	Var0.f_1 = "";
	Var0.f_2 = 0;
	if (func_717(1))
	{
		Var0.f_3 = MISC::GET_HASH_KEY("IB_YES");
		Var0.f_3.f_1 = 0;
		Var0.f_3.f_2 = 0;
		Var0.f_3.f_3 = 0;
		Var0.f_7 = MISC::GET_HASH_KEY("IB_NO");
		Var0.f_7.f_1 = 0;
		Var0.f_7.f_2 = 0;
		Var0.f_7.f_3 = 0;
	}
	else
	{
		Var0.f_3 = MISC::GET_HASH_KEY("IB_ACCEPT");
		Var0.f_3.f_1 = 0;
		Var0.f_3.f_2 = 0;
		Var0.f_3.f_3 = 0;
	}
	func_718(&Var0);
	vVar19.x = 0;
	vVar19.f_1 = "SG_HDNG";
	if (func_717(1))
	{
		if (Global_1273882->f_16 == &Global_1273882 && Global_1273882->f_14)
		{
			vVar19.f_2 = "NM_MATCHMAKING_DISBAND_POSSE_WARNING";
		}
		else if (Global_1273882->f_16 != &Global_1273882 && Global_1273882->f_14)
		{
			vVar19.f_2 = "NM_MATCHMAKING_LEAVE_POSSE_WARNING";
		}
		else
		{
			vVar19.f_2 = "NM_MATCHMAKING_LEAVE_MATCH_WARNING";
		}
	}
	else if (func_717(2))
	{
		vVar19.f_2 = "NM_MATCHMAKING_JIP_FAILED";
	}
	else if (func_717(32))
	{
		vVar19.f_2 = "NM_MATCHMAKING_PQRR_NOT_FOUND";
	}
	else if (func_717(256))
	{
		vVar19.f_2 = MISC::_CREATE_VAR_STRING(2, "NM_MATCHMAKING_PQRR_OTHER", 54553100);
	}
	else if (func_717(512))
	{
		vVar19.f_2 = MISC::_CREATE_VAR_STRING(2, "NM_MATCHMAKING_PQRR_OTHER", 54554100);
	}
	else if (func_717(4))
	{
		vVar19.f_2 = "NM_MATCHMAKING_PQRR_PLAYER_CANCELLED";
	}
	else if (func_717(8))
	{
		vVar19.f_2 = "NM_MATCHMAKING_PQRR_PLAYER_OFFLINE";
	}
	else if (func_717(64))
	{
		if (Global_524288->f_4 != -1)
		{
			vVar19.f_2 = "NM_MATCHMAKING_LARGE_POSSE_WARNING_BOUNTY";
		}
		else
		{
			vVar19.f_2 = "NM_MATCHMAKING_LARGE_POSSE_WARNING";
		}
	}
	else if (func_717(16))
	{
		vVar19.f_2 = "NM_MATCHMAKING_PQRR_TIMEOUT";
	}
	else if (func_717(128))
	{
		vVar19.f_2 = "NM_MATCHMAKING_PLAYLIST_LOCKED";
	}
	else if (func_717(1024))
	{
		vVar19.f_2 = MISC::_CREATE_VAR_STRING(2, "NM_MATCHMAKING_FME_ERROR", 44010000);
	}
	else if (func_717(2048))
	{
		vVar19.f_2 = MISC::_CREATE_VAR_STRING(2, "MOONSHINE_POST_EXT_ALERT_NOT_SAVING");
	}
	Global_1572887->f_106.f_80 = _NAMESPACE76::_0x9F2CC2439A04E7BA(&Var0, &vVar19, 1);
	func_716(2);
}

void func_138()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	int iVar7;

	if (func_347() == 0)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1572887->f_17, false))
		{
			if (func_719() > 5)
			{
				if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_716(4);
				return;
			}
		}
	}
	if (_NAMESPACE76::_0xF8806EC3FF840FDC())
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
	}
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(-1933804684))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(-1933804684, &vVar3))
		{
			switch (vVar3.x)
			{
				case -1203660660:
					if (vVar3.y == Global_1572887->f_106.f_80)
					{
						if (vVar3.z == 2074623703)
						{
							UIEVENTS::_EVENT_MANAGER_POP_EVENT(-1933804684);
							bVar0 = true;
						}
						if (vVar3.z == 1400745903)
						{
							UIEVENTS::_EVENT_MANAGER_POP_EVENT(-1933804684);
							bVar1 = true;
						}
					}
					break;
				case -445432096:
					if (vVar3.y == Global_1572887->f_106.f_80)
					{
						Global_1572887->f_106.f_80 = 0;
						bVar2 = true;
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(-1933804684);
					}
					break;
			}
		}
		UIEVENTS::_EVENT_MANAGER_POP_EVENT(-1933804684);
	}
	iVar7 = (MISC::GET_GAME_TIMER() - Global_1572887->f_106.f_82);
	if (((iVar7 > Global_1901929->f_1.f_18 && Global_1572887->f_106.f_82 != -1) || bVar1) || bVar2)
	{
		func_716(4);
	}
	else if (bVar0)
	{
		if (func_717(1))
		{
			func_720(1073741824 /* Float: 2f */);
			func_248(0);
			func_716(3);
		}
		else
		{
			func_716(4);
		}
	}
}

void func_139()
{
	func_721(5);
	func_716(4);
}

void func_140()
{
	if (Global_1572887->f_106.f_80 != 0)
	{
		_NAMESPACE76::_0x00A15B94CBA4F76F(Global_1572887->f_106.f_80);
	}
	Global_1572887->f_106.f_16 = 0;
	Global_1572887->f_106.f_80 = 0;
	Global_1572887->f_106.f_82 = -1;
	func_716(0);
}

void func_141()
{
	func_721(1);
}

void func_142()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_719() != 0)
	{
		return;
	}
	if (func_722(32768))
	{
		NETWORK::_0x236905C700FDB54D();
		if (Global_1572887->f_106.f_78 != -1 && (MISC::GET_GAME_TIMER() - Global_1572887->f_106.f_78) > Global_1901929->f_1.f_16)
		{
			func_247(0, 128, 0);
			func_723(1, 1);
			func_162();
			if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
			{
				_NAMESPACE26::_0x0A04A07BC3074EDB(0);
			}
		}
	}
	if (!func_724())
	{
		func_725(8388608);
		if (func_722(8192) && !func_722(32768))
		{
			func_725(8192);
			func_726();
		}
		if (func_722(2097152))
		{
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(250);
			}
			func_727();
			func_728(0, 0, 0, 0, 0);
			func_725(2097152);
		}
		return;
	}
	if (!func_729())
	{
		return;
	}
	if (func_730() != 2)
	{
		return;
	}
	if (!func_722(8388608))
	{
		func_720(8388608);
		sVar0 = "";
		if (Global_1572887->f_248.f_50 == 2)
		{
			iVar1 = func_731(Global_1572887->f_248.f_50.f_1);
			if (iVar1 != -1)
			{
				sVar0 = func_680(&((Global_265331->f_4[iVar1 /*51*/])->f_7), joaat("COLOR_PURE_WHITE"));
			}
		}
		else if (Global_1572887->f_248.f_50 == 1)
		{
			sVar0 = func_733(func_732(Global_1572887->f_248.f_50.f_1));
		}
		else if (Global_1572887->f_248.f_50 == 3)
		{
			sVar0 = func_735(func_734(Global_1572887->f_248.f_50.f_3));
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			iVar2 = 255;
			if (NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_1572887->f_342.f_13)))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1572887->f_342.f_13));
			}
			func_308(MISC::_CREATE_VAR_STRING(42, "JOIN_AS_POSSE_MEMBER", func_683(PLAYER::GET_PLAYER_NAME(iVar2), joaat("COLOR_PURE_WHITE")), sVar0), 10000, 0, 0, 0, 1);
		}
	}
	if (!NETWORK::_0x2F54B146D3EDCE4D(&(Global_1572887->f_342)))
	{
		return;
	}
	iVar3 = NETWORK::_0x0DD051B1BF4B8BD6(&(Global_1572887->f_342));
	if (iVar3 == 0)
	{
		return;
	}
	if (!NETWORK::_0xCCF878D50F8AB10D(&(Global_1572887->f_342)))
	{
		return;
	}
	if (Global_1572887->f_248.f_50 == 2)
	{
		if (func_722(2048))
		{
			func_736(1, 1, 0, 1, 0, 0, 0, 0, 0);
			func_720(2097152);
		}
		else
		{
			if (!func_722(2097152))
			{
				if (func_737(Global_1572887->f_106.f_11) == 9)
				{
					if (!(func_738(16) && func_739(Global_1572887->f_106.f_11, joaat("accept"))))
					{
						func_736(1, 1, 0, 0, 0, 0, 1, 1, 0);
					}
				}
				else
				{
					func_728(1, 1, 0, 0, 0);
				}
			}
			func_720(2097152);
		}
	}
	else if (func_740())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, 0);
		func_736(1, 1, 0, 1, 0, 0, 0, 0, 0);
		func_720(2097152);
	}
	else if (!func_722(32768))
	{
		func_736(1, 1, 0, 1, 0, 0, 1, 1, 0);
		func_720(2097152);
	}
	if (func_741(255))
	{
		if ((Global_1572887->f_106 == 1 || Global_1572887->f_106 == 2) || (Global_1572887->f_106 == 0 && !func_740()))
		{
			func_742(1);
			func_706(1);
			func_720(524288);
		}
	}
	if (!&Global_1048581)
	{
		func_743();
	}
	if (func_744(Global_1572887->f_106.f_11) != -1)
	{
		func_745("MP_CO_OP_MATCHMAKING_START", 2, 0);
	}
	func_746(8);
	func_721(2);
	func_725(1073741824 /* Float: 2f */);
	func_747();
	Global_1572887->f_106.f_76 = MISC::GET_GAME_TIMER();
	Global_1572887->f_106.f_78 = -1;
}

void func_143()
{
	if (func_722(32768))
	{
		NETWORK::_0x236905C700FDB54D();
	}
	if (func_177())
	{
	}
	else if ((!func_748() && !func_749()) && !func_722(32768))
	{
		return;
	}
	func_750();
	if (!func_751())
	{
		return;
	}
	func_752();
	func_753();
	if (func_245(Global_1572887->f_248.f_50.f_10, 2))
	{
		func_754(1);
	}
	func_755(1);
	func_743();
	func_756();
	func_721(3);
}

void func_144()
{
	int iVar0;
	int iVar1;

	if (func_722(32768))
	{
		NETWORK::_0x236905C700FDB54D();
	}
	if ((MISC::GET_GAME_TIMER() - Global_1572887->f_106.f_76) > Global_1901929->f_1.f_14)
	{
		NETWORK::_0xC505036A35AFD01B(false);
		if (func_331("Timeout - JIP", 0, 0, 0))
		{
			func_308("NM_MATCHMAKING_TIMED_OUT", 10000, 0, 0, 0, 1);
		}
		return;
	}
	iVar0 = NETWORK::_0x0DD051B1BF4B8BD6(&(Global_1572887->f_342));
	if (iVar0 == 5)
	{
		if (func_331("Posse Leader Cancelled", 0, 0, 0))
		{
			func_308("NM_MATCHMAKING_CANCELLED", 10000, 0, 0, 0, 1);
			return;
		}
	}
	else if (Global_1572887->f_342.f_26 == 2)
	{
		if (func_331("PQRR Not Found", 0, 1, 0))
		{
			func_308("NM_MATCHMAKING_TIMED_OUT", 10000, 0, 0, 0, 1);
			return;
		}
	}
	if ((Global_1572887->f_106.f_13 == 0 && NETWORK::_0xF0C0C94B404206FA() != 4) || (Global_1572887->f_106.f_13 == 2 && NETWORK::_0xF0C0C94B404206FA() != 3))
	{
		return;
	}
	if (Global_1572887->f_342.f_26 == 0)
	{
		return;
	}
	else if (Global_1572887->f_342.f_26 == 2)
	{
		func_721(20);
		return;
	}
	if (func_330() == 0)
	{
		iVar1 = func_732(Global_1572887->f_248.f_50.f_1);
		if (iVar1 >= 10 && iVar1 <= 13)
		{
			func_758(func_757(iVar1));
		}
	}
	func_759(Global_1572887->f_248.f_50, Global_1572887->f_248.f_50.f_1, Global_1572887->f_248.f_50.f_3, Global_1572887->f_248.f_50.f_2, Global_1572887->f_248.f_50.f_8, Global_1572887->f_248.f_50.f_9);
}

void func_145()
{
	func_760();
	NETWORK::_0x236905C700FDB54D();
	if (Global_1572887->f_106.f_77 != -1 && (MISC::GET_GAME_TIMER() - Global_1572887->f_106.f_77) > 1000)
	{
		func_721(5);
		return;
	}
	if (SCRIPTS::_DOES_THREAD_EXIST(Global_1572887->f_106.f_127))
	{
		return;
	}
	func_721(5);
}

void func_146()
{
	func_760();
	NETWORK::_0x236905C700FDB54D();
	SCRIPTS::_0x7DE4643157AD646C(Global_1572887->f_106.f_127);
	SCRIPTS::_0x7DE4643157AD646C(Global_265331->f_124602);
	SCRIPTS::_0x7DE4643157AD646C(Global_265331->f_124672);
	func_721(6);
}

void func_147()
{
	func_760();
	NETWORK::_0x236905C700FDB54D();
	if (SCRIPTS::_DOES_THREAD_EXIST(Global_1572887->f_106.f_127))
	{
		return;
	}
	if (SCRIPTS::_DOES_THREAD_EXIST(Global_265331->f_124602))
	{
		return;
	}
	func_721(7);
}

void func_148()
{
	func_760();
	NETWORK::_0x236905C700FDB54D();
	if (func_741(255))
	{
		return;
	}
	func_705(512);
	func_761(Global_1051085);
	Global_1572887->f_106.f_83 = 1;
	func_762();
	func_721(8);
}

void func_149()
{
	func_760();
	NETWORK::_0x236905C700FDB54D();
	func_746(7);
	if (Global_1273882->f_16 != &Global_1273882)
	{
		Global_1572887->f_106.f_78 = MISC::GET_GAME_TIMER();
		func_721(1);
	}
	else
	{
		func_763(Global_1572887->f_106.f_17, Global_1572887->f_106.f_17.f_1, Global_1572887->f_106, Global_1572887->f_106.f_9, Global_1572887->f_106.f_11, Global_1572887->f_106.f_15, Global_1572887->f_106.f_10, 0, Global_1572887->f_106.f_13, 0);
	}
}

void func_150()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (func_722(32768))
	{
		NETWORK::_0x236905C700FDB54D();
	}
	iVar0 = 0;
	if (func_722(1))
	{
		iVar0 |= 16;
	}
	if (func_722(2) || func_722(1073741824 /* Float: 2f */))
	{
		iVar0 |= 8;
	}
	if (func_722(4))
	{
		iVar0 |= 4;
	}
	iVar1 = Global_1572887->f_106.f_9;
	iVar2 = -1;
	switch (func_330())
	{
		case 0:
		case 3:
			iVar2 = Global_1572887->f_106.f_9;
			break;
	}
	if (iVar2 != -1)
	{
		iVar1 = iVar2;
	}
	if (Global_1572887->f_106.f_13 == 1)
	{
		switch (func_744(Global_1572887->f_106.f_11))
		{
			case 9:
				iVar1 = 100;
				break;
			case 10:
				iVar1 = 101;
				break;
			case 11:
				iVar1 = 102;
				break;
			case 12:
				iVar1 = 103;
				break;
			default:
				break;
		}
		if (!func_249(0, iVar1, iVar0, 0))
		{
			return;
		}
		INVENTORY::_0x597F571DDEE3FFAC(1);
	}
	else if (Global_1572887->f_106.f_13 == 0)
	{
		bVar3 = (!func_722(32768) && func_722(1073741824 /* Float: 2f */));
		if (!func_764(func_330(), iVar1, iVar0, bVar3))
		{
			return;
		}
	}
	else if (Global_1572887->f_106.f_13 == 2)
	{
		if (!func_250(Global_1572887->f_106.f_17.f_1))
		{
			return;
		}
	}
	else if (Global_1572887->f_106.f_13 == 3)
	{
		if (!func_765(2, 0, 8, 0))
		{
			return;
		}
	}
	if (func_744(Global_1572887->f_106.f_11) != -1)
	{
		func_745("MP_CO_OP_MATCHMAKING_START", 2, 0);
	}
	Global_1572887->f_106.f_76 = MISC::GET_GAME_TIMER();
	func_721(10);
}

void func_151()
{
	vector3 vVar0;
	var uVar3;
	int iVar4;
	var uVar5;
	var uVar6;

	func_766();
	if (func_722(32768))
	{
		NETWORK::_0x236905C700FDB54D();
	}
	vVar0 = { Global_1572887->f_342 };
	if (!NETWORK::_0x2F54B146D3EDCE4D(&vVar0) && Global_1572887->f_342.f_26 == 2)
	{
		uVar3 = func_767(_NAMESPACE26::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
		SCRIPTS::_0xD426E2E3288469D6(&uVar3, &Global_1273882);
		func_768(uVar3);
		func_331("Match Error", 0, 1, 0);
		return;
	}
	else if (Global_1572887->f_342.f_3 == 2)
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		func_769();
		func_725(1073741824 /* Float: 2f */);
		func_770();
		func_771();
		return;
	}
	else if (Global_1572887->f_342.f_3 > 2)
	{
		iVar4 = func_772();
		if (iVar4 == 4 && _NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			func_721(9);
			return;
		}
		else
		{
			func_773(iVar4);
			uVar5 = func_767(_NAMESPACE26::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
			SCRIPTS::_0xD426E2E3288469D6(&uVar5, &Global_1273882);
			func_768(uVar5);
			func_331("Match Failed", 0, 0, 0);
			return;
		}
	}
	else if (Global_1572887->f_106.f_13 != 3 && (MISC::GET_GAME_TIMER() - Global_1572887->f_106.f_76) > Global_1901929->f_1.f_14)
	{
		NETWORK::_0xC505036A35AFD01B(false);
		if (func_331("Timeout", 0, 0, 0))
		{
			uVar6 = func_767(_NAMESPACE26::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
			SCRIPTS::_0xD426E2E3288469D6(&uVar6, &Global_1273882);
			func_768(uVar6);
			func_308("NM_MATCHMAKING_TIMED_OUT", 10000, 0, 0, 0, 1);
		}
		return;
	}
}

void func_152()
{
	struct<2> Var0;

	NETWORK::_0x236905C700FDB54D();
	if (func_330() == 3)
	{
	}
	else if (func_722(65536))
	{
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	else if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
	{
		func_720(65536);
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_HORSE_ACTION(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), 3, 0, 0);
	}
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	if (!&Global_1197951 == -1 || func_740())
	{
		Var0 = { func_774() };
		if (func_168(Var0))
		{
			func_169(Var0);
		}
	}
	if (func_330() == 3)
	{
		func_720(4194304);
		if (!func_748() && !func_749())
		{
			return;
		}
	}
	else
	{
		if (func_177())
		{
		}
		else if (!func_748() && !func_749())
		{
			return;
		}
		func_720(4194304);
	}
	func_725(65536);
	func_775();
	func_776(1);
	if (func_777(0))
	{
		func_779(func_778(), 0);
	}
	if (func_722(1024))
	{
		func_754(1);
	}
	func_780();
	func_721(12);
}

void func_153()
{
	if (func_722(32768))
	{
		NETWORK::_0x236905C700FDB54D();
	}
	func_750();
	if (!func_751())
	{
		return;
	}
	func_755(1);
	func_752();
	func_753();
	func_756();
	func_721(13);
}

void func_154()
{
	int iVar0;
	int iVar1;
	char cVar2[32];
	struct<7> Var6;
	int iVar14;
	int iVar15;

	NETWORK::_0x236905C700FDB54D();
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	func_780();
	if (func_781())
	{
		return;
	}
	if (!func_702())
	{
		return;
	}
	if (func_722(32768))
	{
		if (Global_1572887->f_342.f_26 == 0)
		{
			return;
		}
		else if (Global_1572887->f_342.f_26 == 2)
		{
			func_736(0, 0, 0, 0, 0, 0, 0, 0, 0);
			func_331("QWM SessionReq Failed", 0, 0, 1);
			func_721(15);
			func_773(func_772());
			return;
		}
	}
	iVar0 = func_732(Global_1572887->f_106.f_9);
	iVar1 = func_330();
	if (((iVar1 != 3 && iVar1 != 2) && !func_740()) && !func_782(iVar0))
	{
		func_736(0, 0, 0, 0, 0, 0, 0, 0, 0);
		func_331("Unlock is locked", 0, 0, 1);
		func_721(15);
		func_783(128);
		return;
	}
	func_784();
	func_785();
	switch (func_330())
	{
		case 3:
			func_786();
			if (Global_1572887->f_106.f_14 == 8)
			{
				if (!func_787(Global_1572887->f_106.f_11))
				{
					func_706(1);
					func_742(1);
					func_788(1);
					func_720(524288);
					return;
				}
			}
			func_784();
			break;
		case 0:
		case 1:
		case 2:
			if (func_740())
			{
				NETWORK::_0xE546BDA1B3E288EE(152);
				func_784();
			}
			else
			{
				func_786();
				StringCopy(&cVar2, func_789(), 32);
				if (!SCRIPTS::DOES_SCRIPT_EXIST(&cVar2))
				{
					func_721(14);
					return;
				}
				if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_790()) != 0)
				{
					func_721(14);
					return;
				}
				SCRIPTS::REQUEST_SCRIPT(&cVar2);
				if (!SCRIPTS::HAS_SCRIPT_LOADED(&cVar2))
				{
					return;
				}
				if (func_722(262144))
				{
					Var6.f_7 = 2;
					if (NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_1572887->f_106.f_120)))
					{
						Var6 = { Global_1572887->f_106.f_120 };
					}
					else
					{
						NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var6);
					}
				}
				else if (Global_1572887->f_106 == 2 && Global_1572887->f_106.f_11 == 2)
				{
					Var6.f_7 = 1;
					Var6 = { func_791(PLAYER::PLAYER_ID()) };
					((*Global_1055965)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*436*/])->f_153.f_230 = Global_1572887->f_106.f_9;
				}
				Global_1572887->f_106.f_127 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&cVar2, &Var6, 8, 1301);
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cVar2);
			}
			break;
	}
	iVar14 = func_732(Global_1572887->f_106.f_9);
	if (iVar14 != -1)
	{
		NETWORK::_0x9ADAC065D9F6706F(iVar14);
	}
	if (!func_722(16384))
	{
		if (func_722(131072))
		{
			func_792();
		}
		func_736(0, 1, 1, 0, 0, 0, 0, 0, 0);
		iVar15 = func_744(Global_1572887->f_106.f_11);
		if (iVar1 == 2)
		{
			if (iVar15 == -1)
			{
			}
			func_793(1, iVar15, 0);
		}
	}
	func_794();
	func_770();
	func_795(1);
	func_796(&(Global_1903928->f_131));
	func_725(2097152);
	func_721(14);
	func_797();
}

void func_155()
{
	bool bVar0;

	if (!func_722(67108864))
	{
		NETWORK::_0x236905C700FDB54D();
	}
	if (func_722(4194304))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		func_798(&(Global_1572887->f_22.f_59));
		func_725(4194304);
	}
	bVar0 = true;
	switch (Global_1572887->f_106)
	{
		case 3:
			if (!func_799(Global_1130954->f_142))
			{
				if (!func_800(1) || func_800(4))
				{
					bVar0 = false;
				}
				if (func_801(Global_1572887->f_106.f_11) || func_678(Global_1572887->f_106.f_11))
				{
					bVar0 = false;
				}
			}
			break;
		case 0:
		case 1:
		case 2:
			if (func_740())
			{
				if (func_801(Global_1572887->f_106.f_11) || func_678(Global_1572887->f_106.f_11))
				{
					bVar0 = false;
				}
			}
			else
			{
				func_780();
				if (!func_722(16777216))
				{
					PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				}
				if (!func_179() && !func_177())
				{
					func_725(2097152);
				}
				if (SCRIPTS::_DOES_THREAD_EXIST(Global_1572887->f_106.f_127))
				{
					bVar0 = false;
				}
			}
			break;
	}
	if ((!bVar0 && !func_802()) && Global_1572887->f_342.f_4 != 2)
	{
		return;
	}
	AUDIO::_0x2E399EAFBEEA74D5();
	func_728(1, 0, 0, 0, 1);
	func_794();
	func_803();
	func_756();
	func_170();
	func_804();
	func_721(15);
}

void func_156()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		NETWORK::_0x236905C700FDB54D();
	}
	if (Global_1572887->f_106.f_13 != 1)
	{
		if (!func_805())
		{
			return;
		}
	}
	if ((func_740() || !func_806()) || Global_1572887->f_106 == 3)
	{
		func_721(16);
	}
	else
	{
		func_721(17);
	}
}

void func_157()
{
	NETWORK::_0x236905C700FDB54D();
	if (func_807())
	{
		func_721(17);
		return;
	}
	if (Global_3407872->f_225 == 1)
	{
		func_721(17);
		return;
	}
	if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) || func_177())
	{
		func_808(1, 1);
		func_809(1, 10, 0);
		if (!func_177())
		{
			func_706(0);
		}
		if (Global_1572887->f_106 == 3)
		{
			if (func_800(32))
			{
				func_810(32);
			}
			func_566(1);
		}
		func_723(1, 1);
	}
	func_721(17);
}

void func_158()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		NETWORK::_0x236905C700FDB54D();
	}
	if (func_781())
	{
		func_811(1);
	}
	if (func_812())
	{
		func_813();
	}
	func_726();
	if (NETWORK::HAS_NETWORK_TIME_STARTED())
	{
		Global_1572887->f_106.f_128 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	func_784();
	if (Global_1572887->f_106.f_13 != 1)
	{
		func_721(18);
	}
	else
	{
		func_721(21);
	}
}

void func_159()
{
	int iVar0;
	int iVar1;

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		NETWORK::_0x236905C700FDB54D();
	}
	if (NETWORK::HAS_NETWORK_TIME_STARTED())
	{
		iVar1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	iVar0 = NETWORK::GET_TIME_DIFFERENCE(Global_1572887->f_106.f_128, iVar1);
	if (func_702() && iVar0 < Global_1901929->f_1.f_12)
	{
		return;
	}
	Global_1572887->f_106.f_128 = iVar1;
	func_721(19);
}

void func_160()
{
	int iVar0;
	int iVar1;

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		NETWORK::_0x236905C700FDB54D();
	}
	if (NETWORK::HAS_NETWORK_TIME_STARTED())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	iVar1 = NETWORK::GET_TIME_DIFFERENCE(Global_1572887->f_106.f_128, iVar0);
	if (!func_702() && iVar1 < Global_1901929->f_1.f_12)
	{
		return;
	}
	Global_1572887->f_106.f_128 = iVar0;
	func_814(1, 0);
	func_815();
	func_721(21);
}

void func_161()
{
	var uVar0;

	NETWORK::_0xA6F1BAABFF6AD7B9(&uVar0);
	if (Global_1572887->f_342.f_3 == 0 && Global_1572887->f_106.f_79 == 0)
	{
		if (func_722(134217728))
		{
			func_725(134217728);
			func_247(0, 129, 0);
		}
		GRAPHICS::RESET_PAUSED_RENDERPHASES();
		if (func_781())
		{
			func_811(1);
		}
		func_784();
		if (func_722(1073741824 /* Float: 2f */))
		{
			func_725(1073741824 /* Float: 2f */);
			func_240(48, -1);
		}
		func_721(21);
	}
}

void func_162()
{
	struct<7> Var0;

	if (!func_741(255) && func_722(2097152))
	{
		func_725(2097152);
		func_727();
		if (func_234(4) && func_816() == 1)
		{
		}
		else if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && Global_3407872->f_225 != 1)
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
	}
	if (func_722(524288))
	{
		func_725(524288);
		func_723(1, 1);
	}
	func_817(0);
	func_818(1);
	Global_1572887->f_106.f_77 = -1;
	Global_1572887->f_106.f_76 = -1;
	Global_1572887->f_106.f_78 = -1;
	Global_1572887->f_106.f_127 = 0;
	Global_1572887->f_106.f_83 = 0;
	Global_1572887->f_106.f_120 = { Var0 };
	Global_1572887->f_22.f_1 = 0;
	Global_1572887->f_22 = 0;
	Global_1572887->f_22.f_2 = 0;
	Global_1572887->f_22.f_2.f_5 = 1;
	Global_1572887->f_22.f_2.f_2 = 0;
	func_819(&(Global_1572887->f_22.f_2.f_3));
	func_746(0);
	func_726();
	func_820();
	func_170();
	func_784();
	func_821(1);
	Global_1572887->f_106.f_81 = 0;
	func_822();
	func_795(0);
	func_745("MP_CO_OP_MATCHMAKING_BACKOUT", 4, 1);
	func_823();
	NETWORK::_0x3FE141FDB990E3D1();
	func_721(1);
}

int func_163()
{
	return Global_1572887->f_22;
}

void func_164(int iParam0)
{
	Global_1572887->f_22 = iParam0;
}

int func_165(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar3 = false;
	if (bVar3)
	{
		bVar2 = bParam1;
	}
	else
	{
		bVar2 = func_824(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1);
	}
	if (!func_825(&Global_1900854, 1024))
	{
		func_826(Global_1900854, 1024);
		if (bParam3)
		{
			return 0;
		}
	}
	iVar1 = (&Global_1900788 - 1);
	while (iVar1 >= 0)
	{
		if (func_168(*((*Global_1900789)[iVar1 /*2*/])) && func_801(*((*Global_1900789)[iVar1 /*2*/])))
		{
			if (!func_827(iVar1, 1024))
			{
				switch (Global_1900789[iVar1 /*2*/])
				{
					case 2:
						if (!((*Global_1835011)[iVar0 /*72*/])->f_67)
						{
							iVar0 = func_682(*((*Global_1900789)[iVar1 /*2*/]));
							if (func_828(iVar0))
							{
								if (!bParam1)
								{
									func_829(iVar0, 0);
								}
								func_830(iVar0, -1, bVar2, 1, 1, 0, 0);
								func_831(iVar0);
								if (bParam3)
								{
									return 0;
								}
							}
						}
						break;
					case 3:
						if (MAP::DOES_BLIP_EXIST(Global_1900820[iVar1 /*2*/]))
						{
							MAP::REMOVE_BLIP((*Global_1900820)[iVar1 /*2*/]);
						}
						break;
					default:
						if (MAP::DOES_BLIP_EXIST(Global_1900820[iVar1 /*2*/]))
						{
							MAP::REMOVE_BLIP((*Global_1900820)[iVar1 /*2*/]);
						}
						break;
				}
			}
		}
		iVar1 = (iVar1 + -1);
	}
	if (bParam2)
	{
		func_832();
	}
	func_833();
	return 1;
}

bool func_166()
{
	return Global_1572887->f_22.f_2.f_2;
}

struct<2> func_167()
{
	return Global_1572887->f_22.f_2.f_3;
}

int func_168(struct<2> Param0)
{
	if (!func_834(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_835(Param0))
	{
		return 0;
	}
	return 1;
}

int func_169(struct<2> Param0)
{
	if (func_812())
	{
		return 0;
	}
	if (!func_168(Param0))
	{
		return 0;
	}
	*Global_1051163 = { Param0 };
	return 1;
}

void func_170()
{
	func_270(&(Global_1572887->f_7), 1);
	func_346(&(Global_1572887->f_7), 1073741824 /* Float: 2f */);
	func_242();
}

int func_171(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if ((MISC::GET_GAME_TIMER() - uParam0->f_56) > 10000)
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (!func_836(*(uParam0->f_6[iVar1 /*7*/])))
		{
		}
		else
		{
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam0->f_6[iVar1 /*7*/]))
			{
				return 0;
			}
			iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam0->f_6[iVar1 /*7*/]);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

void func_172()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1273882->f_154[iVar0] = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1273882->f_154[iVar0])))
		{
			Global_1273882->f_22[iVar0] = 1;
			iVar1 = PLAYER::GET_PLAYER_PED(&(Global_1273882->f_154[iVar0]));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				Global_1273882->f_88[iVar0] = ENTITY::IS_ENTITY_DEAD(iVar1);
				Global_1273882->f_55[iVar0] = PED::IS_PED_INCAPACITATED(iVar1);
			}
			else
			{
				Global_1273882->f_88[iVar0] = 1;
				Global_1273882->f_55[iVar0] = 0;
			}
			Global_1273882->f_121[iVar0] = PLAYER::IS_PLAYER_PLAYING(&(Global_1273882->f_154[iVar0]));
		}
		else
		{
			Global_1273882->f_22[iVar0] = 0;
			Global_1273882->f_88[iVar0] = 1;
			Global_1273882->f_55[iVar0] = 0;
			Global_1273882->f_121[iVar0] = 0;
		}
		iVar0++;
	}
	Global_1273882 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1273882->f_10 = PLAYER::PLAYER_ID();
	Global_1273882->f_20 = MISC::_GET_SYSTEM_TIME();
	Global_1273882->f_21 = NETWORK::GET_CLOUD_TIME_AS_INT();
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(Global_1273882->f_10, &(Global_1273882->f_1));
	if (Global_1273882->f_22[&Global_1273882] && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_1273882->f_15 = _NAMESPACE26::NETWORK_GET_GANG_ID(Global_1273882->f_10);
		Global_1273882->f_16 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1273882->f_15);
	}
	else
	{
		Global_1273882->f_15 = 0;
		Global_1273882->f_16 = 255;
	}
}

void func_173()
{
	Global_1273882 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1273882->f_10 = PLAYER::PLAYER_ID();
	Global_1273882->f_154[&Global_1273882] = PLAYER::PLAYER_ID();
	Global_1273882->f_8 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	Global_1273882->f_11 = ENTITY::DOES_ENTITY_EXIST(Global_1273882->f_8);
	if (Global_1273882->f_11)
	{
		Global_1273882->f_17 = { ENTITY::GET_ENTITY_COORDS(Global_1273882->f_8, false, false) };
		Global_1273882->f_12 = ENTITY::IS_ENTITY_DEAD(Global_1273882->f_8);
	}
	else
	{
		Global_1273882->f_17 = { 0f, 0f, 0f };
		Global_1273882->f_12 = 1;
	}
}

int func_174(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099293->f_16;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return ((*Global_1097609)[iParam0 /*51*/])->f_16;
}

int func_175()
{
	if (&Global_1099293 <= 5)
	{
		return &Global_1099293;
	}
	if (&Global_1099293 <= 22)
	{
		return 4;
	}
	if (&Global_1099293 <= 25)
	{
		return 3;
	}
	return 26;
}

bool func_176(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099293->f_3 & 128 != 0;
	}
	return func_837(128, iParam0);
}

bool func_177()
{
	return Global_1070355->f_27136.f_19.f_3 != 0;
}

bool func_178()
{
	return Global_1070355->f_27136.f_8.f_10 != 0;
}

bool func_179()
{
	return Global_1070355->f_27136.f_62.f_42 != 0;
}

bool func_180()
{
	return Global_1885644->f_1682;
}

int func_181()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_838();
	if (iVar0 == -1)
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	iVar1 = func_383();
	iVar2 = func_839(iVar0);
	if (func_840(iVar2))
	{
		return iVar1 <= 18;
	}
	else if (func_841(iVar2))
	{
		return (iVar1 <= 19 && func_842(2, 255));
	}
	return 0;
}

void func_182()
{
	switch (Global_1099293->f_2)
	{
		case 0:
			if (Global_1099293->f_603)
			{
				if (NETWORK::_0x67CCDF74C4DF7169() || (MISC::_GET_SYSTEM_TIME() - Global_1099293->f_604) > Global_1901929->f_44.f_13 + 1000)
				{
					if ((MISC::_GET_SYSTEM_TIME() - Global_1099293->f_604) > Global_1901929->f_44.f_13 + 1000)
					{
					}
					NETWORK::_0x19B52C20B5C4757C();
					NETWORK::_0xA63E4F050F20021F();
					NETWORK::_0x0BF90CBB6B72977B();
					func_843();
					Global_1099293->f_578 = 0;
					Global_1099293->f_603 = 0;
					Global_1099293->f_602 = 0;
					Global_1099293->f_605 = 0;
					Global_1099293->f_600 = MISC::_GET_SYSTEM_TIME();
					Global_1099293->f_606 = 1;
					if (!(Global_1099293->f_4[Global_1100046[3 /*2*/]] && ((*Global_1100046)[3 /*2*/])->f_1) == ((*Global_1100046)[3 /*2*/])->f_1 && !(Global_1099293->f_4[Global_1100046[4 /*2*/]] && ((*Global_1100046)[4 /*2*/])->f_1) == ((*Global_1100046)[4 /*2*/])->f_1)
					{
						if ((Global_1099293->f_4[Global_1100046[11 /*2*/]] && ((*Global_1100046)[11 /*2*/])->f_1) == ((*Global_1100046)[11 /*2*/])->f_1)
						{
							func_565(25);
						}
						if ((Global_1099293->f_4[Global_1100046[48 /*2*/]] && ((*Global_1100046)[48 /*2*/])->f_1) == ((*Global_1100046)[48 /*2*/])->f_1)
						{
							func_565(47);
						}
					}
					func_844(1);
				}
				else if ((MISC::_GET_SYSTEM_TIME() - Global_1099293->f_604) > Global_1901929->f_44.f_13)
				{
					if (NETWORK::_0x89EC2FC89ECB1005())
					{
						NETWORK::_0x765E60A1DCB8B1CE();
					}
				}
			}
			break;
		case 1:
			if (Global_1099293->f_602)
			{
				func_844(5);
			}
			else if (func_845())
			{
				if (func_315(Global_1099293->f_516.f_17.f_6))
				{
					Global_1099293->f_516.f_17.f_6 = { Global_1273882->f_17 };
				}
				Global_1099293->f_578 = 0;
				if (NETWORK::_0x89EC2FC89ECB1005())
				{
					NETWORK::_0x765E60A1DCB8B1CE();
				}
				func_844(2);
			}
			break;
		case 2:
			if (Global_1099293->f_602)
			{
				func_844(5);
			}
			else if (func_846())
			{
				func_844(3);
			}
			break;
		case 3:
			if (Global_1099293->f_602)
			{
				func_844(5);
			}
			else
			{
				switch (func_847())
				{
					case 4:
						if (((Global_1099293->f_4[Global_1100046[48 /*2*/]] && ((*Global_1100046)[48 /*2*/])->f_1) == ((*Global_1100046)[48 /*2*/])->f_1 && !(Global_1099293->f_4[Global_1100046[3 /*2*/]] && ((*Global_1100046)[3 /*2*/])->f_1) == ((*Global_1100046)[3 /*2*/])->f_1) && !(Global_1099293->f_4[Global_1100046[4 /*2*/]] && ((*Global_1100046)[4 /*2*/])->f_1) == ((*Global_1100046)[4 /*2*/])->f_1)
						{
							NETWORK::_0x19B52C20B5C4757C();
							NETWORK::_0xA63E4F050F20021F();
							NETWORK::_0x0BF90CBB6B72977B();
							func_565(47);
						}
						func_844(2);
						break;
					case 3:
						if (func_848())
						{
							func_844(4);
						}
						else
						{
							func_844(6);
						}
						break;
					case 2:
						NETWORK::_0x61BFBAA795E712AD();
						break;
				}
			}
			break;
		case 4:
			if (Global_1099293->f_602)
			{
				func_844(5);
			}
			else
			{
				Global_1099293->f_591 = VOLUME::_0xB33A604345F58202(Global_1099293->f_589);
				switch (Global_1099293->f_591)
				{
					case 0:
						break;
					case 1:
						break;
					case 2:
						break;
					case 3:
						func_849();
						func_851(func_850(Global_1273882->f_10));
						func_844(6);
						break;
					case 4:
						func_852(func_850(Global_1273882->f_10));
						if (((Global_1099293->f_4[Global_1100046[48 /*2*/]] && ((*Global_1100046)[48 /*2*/])->f_1) == ((*Global_1100046)[48 /*2*/])->f_1 && !(Global_1099293->f_4[Global_1100046[3 /*2*/]] && ((*Global_1100046)[3 /*2*/])->f_1) == ((*Global_1100046)[3 /*2*/])->f_1) && !(Global_1099293->f_4[Global_1100046[4 /*2*/]] && ((*Global_1100046)[4 /*2*/])->f_1) == ((*Global_1100046)[4 /*2*/])->f_1)
						{
							NETWORK::_0x19B52C20B5C4757C();
							NETWORK::_0xA63E4F050F20021F();
							NETWORK::_0x0BF90CBB6B72977B();
							func_565(47);
						}
						VOLUME::_0xFA15C9A320E707B0();
						Global_1099293->f_578++;
						func_844(2);
						break;
				}
			}
			break;
		case 5:
			if (NETWORK::_0x89EC2FC89ECB1005())
			{
				NETWORK::_0x765E60A1DCB8B1CE();
			}
			NETWORK::_0xC8B6D18E22484643();
			func_853();
			if (Global_1099293->f_603)
			{
			}
			Global_1099293->f_605 = 0;
			Global_1099293->f_606 = 0;
			func_844(0);
			break;
		case 6:
			if (NETWORK::_0x89EC2FC89ECB1005())
			{
				NETWORK::_0x765E60A1DCB8B1CE();
			}
			NETWORK::_0xC8B6D18E22484643();
			func_853();
			func_843();
			Global_1099293->f_603 = 0;
			Global_1099293->f_605 = 1;
			Global_1099293->f_606 = 0;
			Global_1099293->f_601 = MISC::_GET_SYSTEM_TIME();
			func_844(0);
			break;
	}
}

int func_183()
{
	func_854();
	return 1;
}

int func_184()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if ((Global_1099293->f_4[Global_1100046[34 /*2*/]] && ((*Global_1100046)[34 /*2*/])->f_1) == ((*Global_1100046)[34 /*2*/])->f_1)
	{
		PLAYER::DISABLE_PLAYER_FIRING(Global_1273882->f_10, true);
	}
	bVar0 = &Global_1273882->f_22[&Global_1273882];
	bVar1 = false;
	bVar2 = false;
	if (bVar0)
	{
		if (Global_1273882->f_88[&Global_1273882] || Global_1273882->f_12)
		{
			bVar1 = false;
		}
		else
		{
			bVar1 = true;
		}
		if (Global_1273882->f_55[&Global_1273882] || Global_1273882->f_13)
		{
			bVar2 = true;
		}
		else
		{
			bVar2 = false;
		}
	}
	else
	{
		bVar1 = false;
		bVar2 = false;
	}
	if (Global_1896610->f_41 == 8)
	{
		func_855(5, 0);
	}
	if (!bVar1)
	{
		if ((Global_1099293->f_4[Global_1100046[0 /*2*/]] && ((*Global_1100046)[0 /*2*/])->f_1) == ((*Global_1100046)[0 /*2*/])->f_1)
		{
			func_856(0);
		}
	}
	if ((Global_1099293->f_4[Global_1100046[0 /*2*/]] && ((*Global_1100046)[0 /*2*/])->f_1) == ((*Global_1100046)[0 /*2*/])->f_1)
	{
		func_565(1);
		Global_1099293->f_462 = 200;
		Global_1099293->f_463 = 1;
		func_857(PLAYER::_0xDF66A37936D5F3D9(Global_1273882->f_10));
		func_755(0);
		func_858(1);
		func_173();
		func_859(0);
		func_860();
		if (func_861())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
		if (!func_862(7))
		{
			AUDIO::_0x9428447DED71FC7E("RDRO_Death_Fail_Respawn_Scenes");
		}
		if (!func_862(136))
		{
			func_863(1);
		}
		PAD::_SET_CONTROL_CONTEXT(4, -1692506095);
		PLAYER::_0xAE637BB8EF017875(Global_1273882->f_10, 1);
		func_797();
		return 2;
	}
	if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_1273882->f_8) == -415798358)
	{
		if (!func_168(func_677(0)))
		{
			func_864(0, 1);
		}
	}
	if (!bVar1)
	{
		func_565(1);
		Global_1099293->f_461 = Global_1273882->f_20;
		Global_1099293->f_462 = 0;
		if (!(Global_1099293->f_4[Global_1100046[20 /*2*/]] && ((*Global_1100046)[20 /*2*/])->f_1) == ((*Global_1100046)[20 /*2*/])->f_1 && !(Global_1099293->f_4[Global_1100046[21 /*2*/]] && ((*Global_1100046)[21 /*2*/])->f_1) == ((*Global_1100046)[21 /*2*/])->f_1)
		{
			GRAPHICS::ANIMPOSTFX_STOP_ALL();
			GRAPHICS::ANIMPOSTFX_PLAY("DeathFailMP01");
		}
		AUDIO::_0x9428447DED71FC7E("RDRO_Death_Fail_Respawn_Scenes");
		Global_1099293->f_463 = 0;
		func_857(PLAYER::_0xDF66A37936D5F3D9(PLAYER::PLAYER_ID()));
		func_858(0);
		func_173();
		func_859(0);
		func_860();
		func_863(1);
		func_865(0, -1, 0);
		Global_1099293->f_642 = func_824(Global_1273882->f_10, 1, 0, 1);
		Global_1099293->f_643 = (LAW::_0x69E181772886F48B(Global_1273882->f_10) || LAW::_0xF0FBFB9AB15F7734(Global_1273882->f_10, 0, 0));
		PAD::_SET_CONTROL_CONTEXT(4, -1692506095);
		PLAYER::_0xAE637BB8EF017875(Global_1273882->f_10, 1);
		func_797();
		if (func_866(255) || !&Global_1048577)
		{
		}
		return 2;
	}
	else if (!(Global_1099293->f_4[Global_1100046[20 /*2*/]] && ((*Global_1100046)[20 /*2*/])->f_1) == ((*Global_1100046)[20 /*2*/])->f_1 && !(Global_1099293->f_4[Global_1100046[21 /*2*/]] && ((*Global_1100046)[21 /*2*/])->f_1) == ((*Global_1100046)[21 /*2*/])->f_1)
	{
		if (Global_1099293->f_641)
		{
			if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeathFailMP01"))
			{
				GRAPHICS::ANIMPOSTFX_STOP("DeathFailMP01");
			}
			Global_1099293->f_641 = 0;
		}
		else
		{
			if (PED::IS_PED_INCAPACITATED(Global_1273882->f_8))
			{
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_Downed"))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("MP_Downed");
					AUDIO::_0x6339C1EA3979B5F7("bleed_out", "RDRO_Death_Fail_Respawn_Scenes");
				}
			}
			else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_Downed"))
			{
				GRAPHICS::ANIMPOSTFX_STOP("MP_Downed");
				AUDIO::_0x9428447DED71FC7E("RDRO_Death_Fail_Respawn_Scenes");
			}
			Global_1099293->f_641 = 1;
		}
	}
	if (bVar2)
	{
		PAD::_SET_CONTROL_CONTEXT(4, 3678691);
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1749823618))
	{
		PED::SET_PED_CONFIG_FLAG(Global_1273882->f_8, 176, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(Global_1273882->f_8, 176, false);
	}
	if (Global_1099293->f_460 <= 0)
	{
		iVar3 = func_867(Global_1099293->f_10, 0, 1);
		if (iVar3 != 0)
		{
			func_868(iVar3, -1);
		}
		else
		{
			func_868(func_869(Global_1896610->f_41, 1), -1);
		}
		Global_1099293->f_460 = 5;
	}
	Global_1099293->f_460 = (Global_1099293->f_460 - 1);
	func_870();
	if ((Global_1099293->f_4[Global_1100046[116 /*2*/]] && ((*Global_1100046)[116 /*2*/])->f_1) == ((*Global_1100046)[116 /*2*/])->f_1)
	{
		func_871();
		func_856(116);
	}
	if ((Global_1099293->f_4[Global_1100046[115 /*2*/]] && ((*Global_1100046)[115 /*2*/])->f_1) == ((*Global_1100046)[115 /*2*/])->f_1)
	{
		func_871();
		func_856(115);
	}
	if ((Global_1099293->f_4[Global_1100046[114 /*2*/]] && ((*Global_1100046)[114 /*2*/])->f_1) == ((*Global_1100046)[114 /*2*/])->f_1)
	{
		func_872();
		func_856(114);
	}
	if ((Global_1099293->f_4[Global_1100046[117 /*2*/]] && ((*Global_1100046)[117 /*2*/])->f_1) == ((*Global_1100046)[117 /*2*/])->f_1)
	{
		func_873();
		func_856(117);
	}
	if ((Global_1099293->f_4[Global_1100046[118 /*2*/]] && ((*Global_1100046)[118 /*2*/])->f_1) == ((*Global_1100046)[118 /*2*/])->f_1)
	{
		func_874();
		func_856(118);
	}
	func_859(1);
	if (&Global_1099293->f_372[0 /*3*/] == joaat("weapon_melee_torch"))
	{
		iVar4 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_1273882->f_8, 0));
		OBJECT::_0xF49574E2332A8F06(iVar4, OBJECT::_0x3397CD4E0353DFBA(iVar4));
	}
	if (&Global_1099293->f_372[1 /*3*/] == joaat("weapon_melee_torch"))
	{
		iVar5 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_1273882->f_8, 1));
		OBJECT::_0xF49574E2332A8F06(iVar5, OBJECT::_0x3397CD4E0353DFBA(iVar5));
	}
	if (Global_1099293->f_333)
	{
		if ((Global_1273882->f_20 - Global_1099293->f_334) > 30000)
		{
			Global_1099293->f_333 = 0;
		}
	}
	if (PED::_0x9682F850056C9ADE(Global_1273882->f_8))
	{
		if (!Global_1099293->f_594)
		{
			if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				Global_1099293->f_594 = 1;
			}
		}
	}
	else if (Global_1099293->f_594)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::_0x88544C0E3291DCAE(1);
			CAM::STOP_GAMEPLAY_HINT(false);
		}
		Global_1099293->f_594 = 0;
	}
	func_875(Global_1099293->f_644);
	if (Global_1099293->f_644)
	{
		Global_1099293->f_644 = 0;
	}
	func_876();
	func_877();
	return 1;
}

int func_185()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;

	Global_1099293->f_645 = 0;
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (PED::_0x854BC9B1A1CCD034(-741904555, iVar0))
	{
		PED::_0xDE7B2B4144906CDF(-741904555, iVar0);
	}
	if (PED::_0x854BC9B1A1CCD034(613294621, iVar0))
	{
		PED::_0xDE7B2B4144906CDF(613294621, iVar0);
	}
	if (PED::_0x854BC9B1A1CCD034(-1429099402, iVar0))
	{
		PED::_0xDE7B2B4144906CDF(-1429099402, iVar0);
	}
	PAD::_SET_CONTROL_CONTEXT(4, -1692506095);
	func_878();
	func_879(0);
	func_880();
	bVar1 = (func_881() && !(Global_1099293->f_4[Global_1100046[0 /*2*/]] && ((*Global_1100046)[0 /*2*/])->f_1) == ((*Global_1100046)[0 /*2*/])->f_1);
	if (bVar1)
	{
		if (!Global_1099293->f_463)
		{
			func_882();
			func_61(32);
			Global_1099293->f_463 = 1;
		}
	}
	if (func_738(16))
	{
		func_565(129);
	}
	if (!func_883())
	{
		return 2;
	}
	Global_1099293->f_462++;
	if (!(Global_1099293->f_4[Global_1100046[31 /*2*/]] && ((*Global_1100046)[31 /*2*/])->f_1) == ((*Global_1100046)[31 /*2*/])->f_1)
	{
		if ((Global_1099293->f_4[Global_1100046[14 /*2*/]] && ((*Global_1100046)[14 /*2*/])->f_1) == ((*Global_1100046)[14 /*2*/])->f_1 || (Global_1099293->f_4[Global_1100046[13 /*2*/]] && ((*Global_1100046)[13 /*2*/])->f_1) == ((*Global_1100046)[13 /*2*/])->f_1)
		{
			if (MISC::ABSI((Global_1273882->f_20 - Global_1099293->f_461)) < Global_1901929->f_44.f_6 && Global_1099293->f_462 < 200)
			{
				return 2;
			}
		}
		else if ((MISC::ABSI((Global_1273882->f_20 - Global_1099293->f_461)) < Global_1901929->f_44.f_5 && Global_1099293->f_462 < 200) && !func_884())