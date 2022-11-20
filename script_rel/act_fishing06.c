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
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	char* sLocal_34 = NULL;
	int iLocal_35 = 0;
	var uLocal_36 = 24;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
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
	var uLocal_109 = 0;
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
	struct<145> Local_134 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_294 = 1;
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
	var uLocal_307 = 11;
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
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
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
	var uLocal_440 = 1097859072;
	var uLocal_441 = 1101004800;
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
	var uLocal_468 = 4;
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
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
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
	var uLocal_537 = 2;
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
	var uLocal_570 = 2;
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
	var uLocal_603 = 10;
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
	var uLocal_764 = 2;
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
	var uLocal_797 = 3;
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
	iLocal_14 = 1;
	iLocal_15 = 1;
	iLocal_16 = 1;
	fLocal_31 = 150f;
	iLocal_33 = -1;
	sLocal_34 = "CFSH";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
	{
		func_1(&uScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2(&uScriptParam_0, &uLocal_537);
	while (!func_3(&uScriptParam_0))
	{
		func_5(&uScriptParam_0, &uLocal_537, func_4());
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
				func_42(&uLocal_537);
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
	int iVar1;
	var uVar2;

	func_30(2);
	func_61(17, 0);
	func_62(&(Local_134.f_144));
	if (CAM::DOES_CAM_EXIST(Local_134.f_78))
	{
		CAM::DESTROY_CAM(Local_134.f_78, false);
	}
	if (PATHFIND::_0xDE0EA444735C1368(&(Local_134.f_112[4])))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_VOLUME(&(Local_134.f_112[4]));
	}
	PED::_0x935CF6E42BAF7F4D(&(Local_134.f_80[0]));
	func_64(1, func_63("FS06_HRSE_BLK"));
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(Local_134.f_80[0])))
	{
		PED::_0x411189E51B8020BA(&(Local_134.f_80[0]), "Stealth");
		PED::_0x7DE9692C6F64CFE8(&(Local_134.f_80[0]), false, 0, 0);
	}
	if (func_65(uParam0->f_2, 0))
	{
		func_66(uParam0->f_2);
	}
	if (func_10(uParam0->f_2))
	{
		func_67(uParam0->f_2, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	}
	func_68(0);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_69(&(Local_134.f_112[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_134.f_103[iVar0])))
		{
			OBJECT::DELETE_OBJECT(Local_134.f_103[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		iVar1 = MAP::GET_BLIP_FROM_ENTITY(&(Local_134.f_80[iVar0]));
		func_70(&iVar1);
		iVar0++;
	}
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_134.f_80[iVar0])))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(Local_134.f_80[iVar0]);
		}
		iVar0++;
	}
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	uVar2 = func_72(func_71(3, 1202375449));
	MISC::CLEAR_BIT(&uVar2, 0);
	MISC::CLEAR_BIT(&uVar2, 1);
	MISC::CLEAR_BIT(&uVar2, 2);
	if (uParam0->f_14 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_134.f_143))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_134.f_143));
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_134.f_143))
	{
		VEHICLE::DELETE_VEHICLE(&(Local_134.f_143));
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::_0x411189E51B8020BA(Global_35, "Stealth");
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
	PED::SET_PED_CONFIG_FLAG(&(Local_134.f_80[0]), 297, false);
	PED::SET_PED_CONFIG_FLAG(&(Local_134.f_80[0]), 315, false);
	PED::SET_PED_CONFIG_FLAG(&(Local_134.f_80[0]), 130, false);
	PED::SET_PED_CONFIG_FLAG(&(Local_134.f_80[0]), 331, false);
	PED::SET_PED_CONFIG_FLAG(&(Local_134.f_80[0]), 330, false);
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
	func_73(iParam0, 8, 0);
}

bool func_10(int iParam0)
{
	if (!func_58(iParam0))
	{
		return false;
	}
	if (!func_74(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_11(var uParam0, int iParam1)
{
	if (uParam0->f_8 > 0f && uParam0->f_14 == 1)
	{
		func_67(iParam1, 0, 0, 0, uParam0->f_8, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		AUDIO::STOP_PED_SPEAKING(func_75(iParam1), false);
		func_67(iParam1, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	}
}

void func_12()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_58(iVar0) && func_65(iVar0, 1))
		{
			func_66(iVar0);
		}
		iVar0++;
	}
}

bool func_13(int iParam0)
{
	int iVar0;

	iVar0 = func_76(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_14(int iParam0)
{
	int iVar0;

	if (!func_77(iParam0))
	{
		return;
	}
	if (iParam0 != func_78(0))
	{
		return;
	}
	if (func_79(iParam0) == 0)
	{
	}
	iVar0 = func_80(iParam0);
	if (func_81(iParam0) == 3)
	{
		if (func_79(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_79(iParam0)))
		{
			if (func_80(iParam0) != 1 && func_80(iParam0) != 8)
			{
				func_82(func_80(iParam0), func_79(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_83(iParam0);
	func_32(1);
	func_33(0);
	func_84(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_85(1);
			func_86(15, 0, 1);
			break;
		case 4:
			func_86(10, 0, 1);
			break;
		case 8:
			func_86(10, 0, 1);
			break;
		case 9:
			func_86(10, 0, 1);
			break;
		case 2:
			func_86(10, 0, 1);
			break;
		case 6:
			func_86(10, 0, 1);
			break;
		case 5:
			func_86(10, 0, 1);
			break;
	}
	func_87(1);
}

void func_15(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_88(Global_1347343->f_11, 536870912))
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
	if (func_89() >= 2)
	{
		if (!func_88(Global_1347343->f_11, 16384))
		{
			func_43(&(Global_1347343->f_11), 8);
		}
		func_90(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_91(Global_1935630, 2048);
	func_92(bParam5);
}

void func_16(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_77(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_13(iParam0) && !func_93(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_79(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_13(iParam0))
	{
		iParam2 = -1;
	}
	if (func_81(iParam0) == 3 || (func_81(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_79(iParam0))))
	{
		func_82(func_80(iParam0), func_79(iParam0), iParam2);
		if ((!func_77(Global_1572864->f_8) && !func_94(0, 1, 0)) && !func_95(&Global_1935630, 32768))
		{
			iVar0 = func_96(iParam0);
			if (iVar0 != -1)
			{
				func_97(0);
			}
			else if (func_80(iParam0) == 8)
			{
				iVar0 = func_98();
				if (iVar0 != -1)
				{
					func_97(0);
				}
			}
		}
	}
	func_84(iParam0, 0);
	if (func_78(0) == iParam0)
	{
		func_32(1);
		func_33(0);
		func_87(1);
	}
	func_99(iParam0, 1);
	func_83(iParam0);
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
	func_100(0);
	func_101(0);
	func_102(0);
	func_103(0);
	func_104(0);
	func_90(1f);
}

void func_19(var uParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	char cVar2[64];
	int iVar10;

	if (!func_105(uParam0->f_1))
	{
		return;
	}
	sVar0 = func_106(uParam0->f_1);
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar1))
	{
		StringCopy(&cVar2, MISC::_CREATE_VAR_STRING(2, func_107(*uParam0)), 64);
		StringConCat(&cVar2, " - ", 64);
		StringConCat(&cVar2, MISC::_CREATE_VAR_STRING(2, func_108(uParam0->f_2, 0)), 64);
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar1, Global_36, MISC::GET_HASH_KEY(func_107(*uParam0)), func_109(uParam0->f_1), iVar10);
		UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar1, &cVar2);
		UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar1, func_110(*uParam0), 676312963);
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar1, func_111(uParam0->f_1), func_112(uParam0->f_1));
	}
	else if (bParam2)
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar1);
		return;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar1, func_109(uParam0->f_1), "", bParam1, 0, 0);
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

	if (!func_77(iParam0))
	{
		return;
	}
	if (func_76(iParam0) == 4)
	{
		func_114(iParam0, func_113());
		if (!func_81(iParam0) == 5 && !func_81(iParam0) == 6)
		{
			if (bParam3)
			{
				func_84(iParam0, 6);
			}
			else
			{
				func_84(iParam0, 5);
			}
			func_83(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_32(1);
	}
	iVar0 = func_80(iParam0);
	bVar1 = func_115() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_116(0, 2);
		if (!bVar1 && bParam1)
		{
			func_117();
		}
	}
	else
	{
		func_33(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_118(iParam0);
	}
	else
	{
		Var2 = { func_119(-1876607090) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_20(32768))
		{
			Var4 = { func_119(773573510) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_81(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_120(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[76 /*74*/])->f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_120(iParam0) /*74*/])->f_8), true);
						}
					}
					else if ((func_120(iParam0) != 95 && func_120(iParam0) != 82) && !func_121(((*Global_1347702)[func_120(iParam0) /*49*/])->f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1347702)[func_120(iParam0) /*49*/])->f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_120(iParam0) /*74*/])->f_8), true);
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
		func_123(func_120(iParam0), iVar6, func_122());
	}
	else if (iVar0 == 8)
	{
		func_125(func_120(iParam0), iVar6, func_122(), func_124());
	}
	if (!func_81(iParam0) == 5 && !func_81(iParam0) == 6)
	{
		iVar9 = func_126(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_127(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_128(func_120(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_129((iVar10 - 20), 0, iVar10);
					iVar11 = func_129((iVar11 - 10), 0, iVar11);
				}
				func_85(1);
				func_86(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_86(45, 0, 1);
				break;
			case 8:
				iVar10 = func_130(func_120(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_129((iVar10 - 20), 0, iVar10);
					iVar11 = func_129((iVar11 - 10), 0, iVar11);
				}
				func_86(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				if (func_131(func_120(iParam0)))
				{
					func_132(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_86(120, 0, 1);
				break;
			case 2:
				func_86(120, 0, 1);
				break;
			case 6:
				func_86(func_134(func_133(iParam0)), 0, 1);
				break;
			case 5:
				func_86(120, 0, 1);
				break;
		}
	}
	func_99(iParam0, 1);
	func_114(iParam0, func_113());
	func_83(iParam0);
	if ((!func_81(iParam0) == 0 && bParam1) && func_115() == -1)
	{
		iVar12 = func_96(iParam0);
		if (iVar12 != -1)
		{
			func_97(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_98();
			if (iVar12 != -1)
			{
				func_97(0);
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
				switch (func_120(iParam0))
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
				if (func_135(func_120(iParam0)) && func_121(((*Global_1347702)[func_120(iParam0) /*49*/])->f_12, 4))
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
				if (func_120(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_136();
				}
				break;
			case 8:
				if (func_120(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_136();
				}
				break;
		}
	}
	if (!func_81(iParam0) == 5 && !func_81(iParam0) == 6)
	{
		if (bParam3)
		{
			func_84(iParam0, 6);
		}
		else
		{
			func_84(iParam0, 5);
		}
		func_83(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_120(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::MAP_DISCOVER_REGION(-1753910767);
						break;
					case 1:
						func_137();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_138(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-1267972061);
						func_138(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(1619534881);
						func_138(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-755457379);
						func_138(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(1015404643);
						func_138(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-1724192342);
						func_138(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(1310680212);
						func_138(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-566881549);
						func_138(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-1753730528);
						func_138(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(147796381);
						func_138(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-378547623);
						func_138(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(829545206);
						func_138(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(891318243);
						func_138(joaat("weapon_kit_camera"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140();
						func_141(967523420);
						func_142();
						func_143();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_108(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131);
						break;
					case 15:
						func_138(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1231074654))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1231074654, true);
							func_144(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1880205078))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1880205078, true);
							func_144(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_145(304805134, 1, 1);
						if (!func_146(((*Global_1347702)[21 /*49*/])->f_15, 1))
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
						func_147();
						break;
					case 26:
						func_148();
						break;
					case 17:
						func_149(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_150())
						{
							func_151(joaat("weapon_repeater_evans"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_152(-514575035, -1))
						{
							iVar15 = func_113();
							func_153(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_154(-514575035, iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_150())
						{
							func_151(joaat("weapon_revolver_lemat"));
						}
						break;
					case 34:
						if (func_150())
						{
							func_151(joaat("weapon_revolver_doubleaction_gambler"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_155();
						break;
					case 37:
						func_156();
						if (func_157())
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
						func_158();
						break;
					case 43:
						func_159();
						break;
					case 44:
						if (!func_146(((*Global_1347702)[82 /*49*/])->f_15, 1))
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
						if (!func_146(((*Global_1347702)[83 /*49*/])->f_15, 1))
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
						func_160();
						break;
					case 59:
						func_161();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_162();
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
						func_163();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1673898385))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1673898385, true);
							func_144(451, 0);
						}
						if (!func_164(-1992824800))
						{
							if (func_164(1520110311))
							{
								iVar16 = func_113();
								func_153(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_154(1937177603, iVar16, 1);
							}
						}
						if (func_165(4))
						{
							if (!func_166(684296857, 1, 0))
							{
								iVar17 = func_113();
								func_153(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_154(-1439688706, iVar17, 1);
							}
						}
						func_138(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_167(89200);
						func_167(2300);
						func_167(2300);
						break;
					case 68:
						func_168();
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
						func_169();
						func_167(-139100);
						break;
					case 69:
						if (func_146(((*Global_1347702)[9 /*49*/])->f_15, 1))
						{
							func_167(-6000);
						}
						break;
					case 70:
						func_167(23400);
						func_167(1900);
						func_167(-15000);
						break;
					case 71:
						func_167(-5500);
						break;
				}
				break;
			case 8:
				switch (func_120(iParam0))
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
						func_170();
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
						func_171();
						break;
					case 66:
						func_172();
						func_173();
						break;
					case 67:
						if (!func_174(6))
						{
							func_175(6);
						}
						if (!func_174(3))
						{
							func_175(3);
						}
						if (func_150())
						{
							func_151(joaat("weapon_pistol_m1899"));
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
						if (func_146(((*Global_1835011)[69 /*74*/])->f_1, 1))
						{
							func_176(0);
							func_167(40500);
						}
						else
						{
							func_176(0);
							func_167(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_120(iParam0))
				{
					case 0:
						switch (func_133(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_177(iParam0);
		func_178();
		switch (iVar0)
		{
			case 1:
				switch (func_120(iParam0))
				{
					case 4:
						func_179(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_179(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_179(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_179(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_179(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_179(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_179(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_180(iParam0);
						func_179(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_179(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_179(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_166(-2046502963, 1, 0))
						{
							func_138(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_179(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_179(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_179(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_180(iParam0) == 0)
						{
							func_179(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_179(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_121(((*Global_1347702)[func_120(iParam0) /*49*/])->f_12, 536870912))
				{
					func_181(11, 1);
				}
				switch (func_120(iParam0))
				{
					case 109:
						func_179(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_181(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_179(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_179(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_179(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_179(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_182(0, 10, 11, 2116153146))
				{
					func_179(iParam0, func_180(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_182(0, 7, 11, -379687487))
				{
					func_179(iParam0, func_183(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_182(0, 8, 11, -1386089015))
				{
					func_179(iParam0, func_183(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_182(0, 11, 11, -1952009645))
				{
					func_179(iParam0, func_183(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_182(0, 12, 11, 2065895756))
				{
					func_179(iParam0, func_183(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_81(iParam0) == 0)
			{
				if (func_79(iParam0) == 0)
				{
				}
				else if (STATS::STATSTRACKER_IS_INITIALIZED(func_79(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_82(func_80(iParam0), func_79(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_120(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_185(func_184(Global_1879514->f_1));
						if (iVar0 == 8 && func_120(iParam0) == 58)
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
						if (func_135(func_120(iParam0)) && func_121(((*Global_1347702)[func_120(iParam0) /*49*/])->f_12, 1))
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
			func_186(bParam2, iVar20);
		}
	}
	func_87(1);
	if ((bVar13 || func_136()) && (func_80(iParam0) == 1 || func_80(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_22(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (STATS::STATSTRACKER_IS_INITIALIZED(func_79(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_82(func_80(iParam0), func_79(iParam0), iVar0);
		if (func_20(32768))
		{
			iVar1 = func_80(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_182(0, 10, 11, 2116153146)))
			{
				Global_1898438 = MISC::GET_GAME_TIMER();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_24();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_93(iParam0))
	{
		func_16(iParam0, 0, 2);
	}
	else if (func_13(iParam0))
	{
		if (!func_81(iParam0) == 5 && !func_81(iParam0) == 6)
		{
			if (bParam1)
			{
				func_84(iParam0, 6);
			}
			else
			{
				func_84(iParam0, 5);
			}
			func_83(iParam0);
		}
	}
	switch (func_80(iParam0))
	{
		case 1:
			switch (func_120(iParam0))
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
			switch (func_120(iParam0))
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
		switch (func_187())
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

	iVar0 = func_188(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_189(iVar0))
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

	func_190(4112);
	func_191(6);
	vVar2 = { func_192(((*Global_2621440)[0 /*12065*/])->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_193(vVar2, uVar1, uVar0, 0);
	func_194(vVar2);
	Global_40.f_9.f_15 = func_195(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_26(int iParam0)
{
	if (func_115() != -1)
	{
		return;
	}
	func_190(32);
	if (iParam0 == 0)
	{
		func_190(16);
	}
	else if (iParam0 == 1)
	{
		func_190(8);
	}
	func_196();
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
	StringConCat(&cVar0, func_197(iParam0), 64);
	return cVar0;
}

struct<8> func_28(int iParam0)
{
	struct<8> Var0;

	if (!func_58(iParam0))
	{
		return Var0;
	}
	StringCopy(&Var0, func_197(iParam0), 64);
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
	if (func_198(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_198(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_198(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_198(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_198(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_198(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return 0;
		}
	}
	if (func_198(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_198(iVar0, 256))
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
	switch (func_115())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

int func_31(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_195(vParam0, 1);
	if (iVar0 == func_199())
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
		func_91(Global_1935630, 4194304);
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
	if (!bParam0 && func_200(373691918))
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
	if (func_201(uParam0->f_44))
	{
		func_202(&(uParam0->f_44), 1, 1);
	}
	if (func_203(&(uParam0->f_45)))
	{
		func_204(&(uParam0->f_45));
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
		if (!func_205(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_206(uParam0, 0))
			{
				if (func_207(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_208(uParam0, 1, &iVar0))
					{
					}
					if (func_209(uParam0, 3, &cVar2))
					{
					}
					if (func_208(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_208(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_208(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_208(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_208(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 2 && uParam0->f_273 < 2)
						{
							if (!func_210(uParam0, &cVar2, uParam0->f_273))
							{
								*((*uParam0)[uParam0->f_273 /*16*/]) = { cVar2 };
								func_211((*uParam0)[uParam0->f_273 /*16*/], 1048576);
								uParam0->f_273++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 2 && uParam0->f_274 < 2)
						{
							*(uParam0->f_33[uParam0->f_274 /*16*/]) = { cVar2 };
							func_211(uParam0->f_33[uParam0->f_274 /*16*/], 1048576);
							uParam0->f_274++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 10 && uParam0->f_275 < 10)
						{
							*(uParam0->f_66[uParam0->f_275 /*16*/]) = { cVar2 };
							func_211(uParam0->f_66[uParam0->f_275 /*16*/], 1048576);
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
						if (!func_210(&(uParam0->f_227), &cVar2, uParam0->f_276))
						{
							*(uParam0->f_227[uParam0->f_276 /*16*/]) = { cVar2 };
							func_211(uParam0->f_227[uParam0->f_276 /*16*/], 1048576);
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
			if (func_206(uParam0, 12))
			{
				if (func_208(uParam0, 13, &iVar0))
				{
				}
				if (func_208(uParam0, 14, &iVar1))
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
		func_212(uParam0);
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
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = false;
	bVar1 = false;
	iVar2 = func_75(uParam0->f_2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar2, Global_35, 1, 1) || WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iVar2, joaat("weapon_thrown_dynamite"), 0))
		{
			StringCopy(&(uParam0->f_15), "FS06_FL_ATTK", 24);
			Local_134.f_130 = 2000;
			bVar0 = true;
		}
	}
	if (func_198(Local_134.f_128, 2097152))
	{
		StringCopy(&(uParam0->f_15), "FS06_FL_ABAND", 24);
		Local_134.f_130 = 3500;
		bVar0 = true;
	}
	if (func_198(Local_134.f_128, 1073741824))
	{
		StringCopy(&(uParam0->f_15), "FS06_FL_EGGDS", 24);
		Local_134.f_130 = 1500;
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_134.f_143))
	{
		if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_134.f_143, joaat("weapon_thrown_dynamite"), 0))
		{
			StringCopy(&(uParam0->f_15), "FS06_FL_BDSTR", 24);
			bVar1 = true;
		}
	}
	if (func_198(Local_134.f_128, 4194304))
	{
		StringCopy(&(uParam0->f_15), "FS06_FL_BDSTR", 24);
		bVar1 = true;
	}
	if (bVar0)
	{
		if (!func_203(&(Local_134.f_137)))
		{
			func_213(&(Local_134.f_137));
		}
		else if (func_214(&(Local_134.f_137)) > Local_134.f_130)
		{
			uParam0->f_14 = 2;
			AUDIO::TRIGGER_MUSIC_EVENT("BOB_HUNT06_FAIL");
			return 1;
		}
	}
	if (bVar1)
	{
		uParam0->f_14 = 2;
		AUDIO::TRIGGER_MUSIC_EVENT("BOB_HUNT06_FAIL");
		return 1;
	}
	if (Local_134.f_13 == 2)
	{
		if (Local_134.f_4 < 4)
		{
			StringCopy(&(uParam0->f_15), "FS06_F_RWLN", 24);
		}
		else if (Local_134.f_4 < 6)
		{
			StringCopy(&(uParam0->f_15), "FS06_F_RWLN", 24);
		}
		else
		{
			StringCopy(&(uParam0->f_15), "FS06_F_RWSH", 24);
		}
		uParam0->f_14 = 2;
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
	if (!func_29(func_75(uParam0->f_2), 0))
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
	if (!func_29(func_75(uParam0->f_2), 0))
	{
		return;
	}
	if (!func_203(&(uParam0->f_48)))
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
						func_213(&(uParam0->f_48));
					}
					else if (func_218(&(uParam0->f_48)) > 5f)
					{
						func_219(&(uParam0->f_10), 1, 1);
						func_220(uParam0, "departLine", 0, 0, 0, -1);
						func_213(&(uParam0->f_48));
					}
				}
			}
			break;
		case 3:
			if (!func_217(&(uParam0->f_10), 1))
			{
				if (func_218(&(uParam0->f_48)) > 4f)
				{
					func_219(&(uParam0->f_10), 1, 1);
					func_220(uParam0, "departLine", 0, 0, 0, -1);
					func_213(&(uParam0->f_48));
				}
				return;
			}
			if (!func_217(&(uParam0->f_10), 2))
			{
				if (func_222(Global_35, func_221(), 1) > 150f)
				{
					func_219(&(uParam0->f_10), 2, 1);
					func_220(uParam0, "rideBanter", 0, 0, 0, -1);
				}
			}
			break;
		case 4:
			break;
	}
}

int func_45(var uParam0)
{
	func_223(uParam0, &Local_134);
	func_224(&Local_134);
	func_225(&Local_134);
	func_226(&Local_134);
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	switch (Local_134)
	{
		case 0:
			if (func_227(uParam0, &Local_134))
			{
				func_228(&Local_134, 1);
			}
			break;
		case 1:
			if (func_229(uParam0, &Local_134))
			{
				uParam0->f_14 = 1;
				uParam0->f_13 = 6;
				func_228(&Local_134, 2);
			}
			break;
		case 2:
			break;
	}
	return 1;
}

int func_46(var uParam0)
{
	if (func_8(&(uParam0->f_9), 4))
	{
		if (!func_230(uParam0))
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
	vector3 vVar1;
	var uVar4;
	int iVar5;
	struct<11> Var6;
	char* sVar17;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_232(&(uParam0->f_3), func_231(iVar0)))
		{
			if (func_233(iVar0))
			{
				if (!func_10(iVar0))
				{
					func_234(iVar0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					return 0;
				}
				if (((!func_65(iVar0, 0) && uParam0->f_1 != -103573613) && uParam0->f_1 != 194099983) && uParam0->f_1 != 2038046186)
				{
					func_235(iVar0, 0);
					AUDIO::STOP_PED_SPEAKING(func_75(iVar0), true);
				}
			}
			else if (!func_10(iVar0))
			{
				func_234(iVar0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				return 0;
			}
		}
		iVar0++;
	}
	if (!func_236(uParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		func_237(&vVar1, &uVar4);
		Var6.f_10 = 7;
		Var6 = 1;
		Var6.f_2 = 1;
		Var6.f_3 = 1;
		Var6.f_4 = 1;
		Var6.f_6 = { vVar1 };
		Var6.f_9 = uVar4;
		uParam0->f_4 = func_238(&iVar5, &Var6);
		if (iVar5 <= 0)
		{
			return 0;
		}
	}
	func_239(uParam0);
	if (func_8(&(uParam0->f_9), 128))
	{
		if (!func_240(uParam0))
		{
			return 0;
		}
	}
	sVar17 = func_106(uParam0->f_1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
	{
		MISC::_0x1096603B519C905F(sVar17);
	}
	if (func_241())
	{
		func_242(1);
	}
	func_243(64);
	func_32(1);
	func_91(Global_1935630, 256);
	if (func_29(Global_35, 0))
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	}
	if (!func_20(32768))
	{
		func_244(Global_36, ENTITY::GET_ENTITY_HEADING(Global_35));
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
	else if (func_245(uParam0))
	{
		if (func_246(uParam0))
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
	switch (func_247(uParam1))
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
		func_211(sParam0, 1);
		return 1;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_211(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_211(sParam0, 1);
			return 0;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_211(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_211(sParam0, 1);
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
		func_211(sParam0, 1);
		return 1;
	}
	func_211(sParam0, 1);
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
		if (!func_248(iParam0))
		{
			return;
		}
	}
	func_249(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_60(var uParam0, int iParam1)
{
	if (iParam1 || !func_203(uParam0))
	{
		func_213(uParam0);
	}
}

void func_61(int iParam0, bool bParam1)
{
	if (!func_248(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_75(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_75(iParam0), 204, false);
	}
}

void func_62(var uParam0)
{
	if (func_201(*uParam0))
	{
		func_202(uParam0, 1, 1);
	}
}

Vector3 func_63(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

void func_64(bool bParam0, vector3 vParam1)
{
	if (bParam0)
	{
		func_250(16);
	}
	else
	{
		func_251(16);
	}
	Global_1900383->f_378.f_12 = { vParam1 };
}

bool func_65(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_75(iParam0);
	if (bParam1)
	{
		if (!func_29(iVar0, 0))
		{
			return false;
		}
	}
	return PED::IS_PED_GROUP_MEMBER(iVar0, func_50(), 1);
}

void func_66(int iParam0)
{
	int iVar0;
	struct<15> Var1;

	if (!func_58(iParam0))
	{
		return;
	}
	if (!func_65(iParam0, 0))
	{
	}
	func_252(iParam0);
	Global_1359489->f_15 = func_253(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			(*Global_1359489)[iVar0] = -1;
		}
		iVar0++;
	}
	func_254();
	func_255(iParam0, 32, 1);
	if (func_29(Global_1360165[iParam0 /*1157*/], 0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, false);
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, false);
		Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		Var1.f_12 = 8;
		Var1.f_3 = Global_1360165[iParam0 /*1157*/];
		Var1.f_7 = func_256();
		Var1.f_8 = 0;
		Var1.f_11 = 10;
		Var1.f_14 = Global_1360165[iParam0 /*1157*/];
		MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	}
}

void func_67(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_58(iParam0))
	{
		return;
	}
	if (func_74(iParam0))
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
	func_257(iParam0, 0);
	func_73(iParam0, 4, 0);
	func_9(iParam0);
	func_258(iParam0);
	func_255(iParam0, 37, 1);
	bVar0 = func_29(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_259(iParam0, 0);
	bVar2 = _NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_260(iParam0, 64, 1))
	{
		func_255(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_255(iParam0, 33, 1);
		func_255(iParam0, 34, 1);
		func_261(iParam0, 1056964608, -1, 1061158912);
		func_262(iParam0, 1, 1, 0);
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
		func_255(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_59(iParam0, 33, 1);
		func_262(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_60(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_204(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
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
			func_263(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_260(iParam0, 45, 1))
	{
		func_255(iParam0, 45, 1);
	}
	func_264(iParam0, 16, 1);
	func_255(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_29(func_265(iParam0), 0))
		{
			func_266(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_68(int iParam0)
{
	Global_36579 = iParam0;
}

void func_69(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_70(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

int func_71(int iParam0, int iParam1)
{
	if (iParam1 == -1891229662)
	{
		return func_182(0, func_267(iParam1, 1), 11, 2116153146);
	}
	return func_182(0, func_267(iParam1, 1), 11, iParam1);
}

int func_72(int iParam0)
{
	if (!func_77(iParam0))
	{
		return -1;
	}
	return func_268(iParam0);
}

void func_73(int iParam0, int iParam1, bool bParam2)
{
	if (!func_248(iParam0))
	{
		return;
	}
	func_269(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

bool func_74(int iParam0)
{
	return func_270(iParam0, 16, 1);
}

int func_75(int iParam0)
{
	if (!func_248(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

int func_76(int iParam0)
{
	if (!func_77(iParam0))
	{
		return -1;
	}
	return func_81(iParam0);
}

bool func_77(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_78(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_79(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

int func_80(int iParam0)
{
	if (!func_77(iParam0))
	{
		return 0;
	}
	return func_272(func_271(iParam0));
}

int func_81(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_273(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

void func_82(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_115() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_83(int iParam0)
{
	return func_275(func_274(iParam0));
}

void func_84(int iParam0, int iParam1)
{
	if (!func_77(iParam0))
	{
		return;
	}
	func_276(iParam0, iParam1);
}

void func_85(bool bParam0)
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

void func_86(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_4)
	{
		func_277(iParam0, iParam1, bParam2);
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

void func_87(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

bool func_88(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_89()
{
	return Global_1572864->f_12;
}

void func_90(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_91(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_92(bool bParam0)
{
	int iVar0;
	struct<16> Var1;

	if (func_278(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_279();
	Var1.f_3.f_3 = iVar0;
	if ((!func_280(Global_1347343->f_2) && !func_88(Global_1347343->f_11, 64)) || func_20(32768))
	{
		Var1.f_7 = func_281();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_88(Global_1347343->f_11, 1024) && !func_20(32768))
	{
		Var1.f_11 = func_282();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_88(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_283();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_284(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_285(&Var1, "REPLAY_T_DEAD", 0, 1);
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

int func_93(int iParam0)
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
		iVar0 = func_81(iParam0);
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

int func_94(int iParam0, bool bParam1, int iParam2)
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
		if (func_286())
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
		iVar0 = func_120(&(Global_1898164->f_1[0 /*5*/]));
		if (func_135(iVar0) && func_121(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_77(&(Global_1898164->f_1[0 /*5*/])))
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

bool func_95(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_96(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_80(iParam0))
	{
		case 1:
			iVar0 = func_120(iParam0);
			return func_287(iVar0);
		case 8:
			iVar1 = func_120(iParam0);
			if (func_121(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				return func_288(iVar1);
			}
			break;
	}
	return -1;
}

void func_97(bool bParam0)
{
	int iVar0;

	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_115() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_289(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_290();
		Global_1898077->f_9 = func_291(Global_1894899->f_2);
		func_292(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_98()
{
	if (!func_146(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_146(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_146(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_146(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_146(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_146(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_146(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_99(int iParam0, bool bParam1)
{
	if (func_115() != -1)
	{
		return;
	}
	if (func_78(0) != iParam0)
	{
		return;
	}
	if (func_293(iParam0))
	{
		if (bParam1)
		{
			func_294(-525676072);
		}
		else
		{
			func_295(-525676072);
		}
	}
}

void func_100(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_101(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_102(bool bParam0)
{
	Global_1572864->f_14 = bParam0;
	if (bParam0)
	{
		func_104(1);
	}
}

void func_103(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_104(0);
	}
}

void func_104(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

int func_105(int iParam0)
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

char* func_106(int iParam0)
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

char* func_107(int iParam0)
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

char* func_108(int iParam0, bool bParam1)
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
			if ((func_146(((*Global_1835011)[59 /*74*/])->f_1, 1) || func_146(((*Global_1347702)[1 /*49*/])->f_15, 1)) || func_13(((*Global_1347702)[1 /*49*/])->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_296(403634348, 1))
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

int func_109(int iParam0)
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

int func_110(int iParam0)
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

int func_111(int iParam0)
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

int func_112(int iParam0)
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

int func_113()
{
	return &Global_1899515;
}

void func_114(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_6 = uParam1;
}

int func_115()
{
	return Global_1572887->f_12;
}

int func_116(bool bParam0, int iParam1)
{
	int iVar0;

	if (!bParam0 && func_200(373691918))
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

void func_117()
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
			iVar18 = func_75(iVar17);
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
	func_204(&(Global_1359489->f_55));
	if (func_296(1777191912, 1))
	{
		func_297(1777191912, 1, 0);
	}
}

void func_118(int iParam0)
{
	if (!func_77(iParam0))
	{
		return;
	}
	func_299(iParam0, (func_298(iParam0) + BUILTIN::SHIFT_LEFT(1, 16)));
}

struct<2> func_119(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_120(int iParam0)
{
	if (!func_77(iParam0))
	{
		return -1;
	}
	return func_300(func_271(iParam0));
}

bool func_121(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_122()
{
	return func_301() > 0;
}

void func_123(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 67:
			func_302(-1032423150, iParam1);
			break;
		case 18:
			func_302(294066959, iParam1);
			func_302(-1925639563, iParam1);
			func_302(-378582304, iParam1);
			func_302(-338306437, iParam1);
			break;
		case 20:
			func_302(437270255, iParam1);
			break;
		case 2:
			func_302(-304000413, iParam1);
			func_302(-533612796, iParam1);
			func_302(48036954, iParam1);
			break;
		case 23:
			func_302(193108691, iParam1);
			func_302(491732588, iParam1);
			func_302(671962088, iParam1);
			func_303(1);
			break;
		case 16:
			func_302(-1836056650, iParam1);
			func_302(-754657922, iParam1);
			func_302(-1752355838, iParam1);
			func_302(-1375324510, iParam1);
			break;
		case 59:
			func_302(-514392105, iParam1);
			func_302(-822060246, iParam1);
			if (func_304(146))
			{
				func_302(1372748575, iParam1);
			}
			func_303(1);
			break;
		case 76:
			func_302(1991352213, iParam1);
			if (func_305() == 0)
			{
				func_302(1852488616, iParam1);
			}
			else
			{
				func_302(-9866350, iParam1);
			}
			break;
		case 44:
			func_302(863852599, iParam1);
			func_302(1228374935, iParam1);
			func_302(1517889050, iParam1);
			func_302(830657578, iParam1);
			func_302(1901354958, iParam1);
			break;
		case 46:
			func_302(-582805654, iParam1);
			func_302(250378940, iParam1);
			func_302(-2143265426, iParam1);
			break;
		case 17:
			func_302(-941494139, iParam1);
			func_302(1641489521, iParam1);
			break;
		case 19:
			func_302(-1829423531, iParam1);
			func_302(-1590504752, iParam1);
			func_302(1357221321, iParam1);
			break;
		case 21:
			func_302(-1037992610, iParam1);
			func_302(-1286414399, iParam1);
			func_303(0);
			break;
		case 15:
			func_302(-1014460309, iParam1);
			func_302(-1030502825, iParam1);
			break;
		case 33:
			func_302(479388090, iParam1);
			func_302(-1396342239, iParam1);
			func_302(-619618632, iParam1);
			break;
		case 34:
			func_302(1193561641, iParam1);
			break;
		case 64:
			func_302(1363960851, iParam1);
			break;
		case 60:
			func_302(-1232453926, iParam1);
			func_302(-882833584, iParam1);
			break;
		case 73:
			func_302(2023205767, iParam1);
			break;
		case 74:
			func_302(-2135286513, iParam1);
			if (func_305() == 0)
			{
				func_302(33799444, iParam1);
			}
			else
			{
				func_302(-161343203, iParam1);
			}
			break;
		case 8:
			func_302(841639693, iParam1);
			func_302(358952323, iParam1);
			break;
		case 36:
			func_302(852538149, iParam1);
			func_302(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_302(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_302(1116039310, iParam1);
			}
			break;
		case 27:
			func_302(107633428, iParam1);
			func_302(335902282, iParam1);
			func_302(575673055, iParam1);
			func_302(-425944207, iParam1);
			break;
		case 28:
			func_302(-1941530250, iParam1);
			func_302(1399269304, iParam1);
			func_302(1839684664, iParam1);
			func_302(923168503, iParam1);
			func_302(-1485078322, iParam1);
			break;
		case 29:
			func_302(574995900, iParam1);
			func_302(-1691275407, iParam1);
			func_302(-1725307861, iParam1);
			break;
		case 31:
			func_302(-2108383238, iParam1);
			func_302(-1321828931, iParam1);
			func_302(-1632118592, iParam1);
			func_302(334938948, iParam1);
			break;
		case 4:
			func_302(115823701, iParam1);
			func_302(-1896939736, iParam1);
			func_302(-1830746356, iParam1);
			func_302(-1235169781, iParam1);
			func_303(0);
			break;
		case 6:
			func_302(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_302(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_302(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_302(-384176140, iParam1);
			}
			break;
		case 25:
			func_302(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_302(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_302(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_302(-1374849484, iParam1);
			}
			break;
		case 48:
			func_302(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_302(217772674, iParam1);
			}
			else
			{
				func_302(2071798160, iParam1);
			}
			if (func_306(51))
			{
				func_302(-792802286, iParam1);
			}
			break;
		case 49:
			func_302(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_302(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_302(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_302(1402120602, iParam1);
			}
			break;
		case 58:
			func_302(-1661934591, iParam1);
			break;
		case 50:
			func_302(-1713759426, iParam1);
			break;
		case 52:
			func_302(-314799932, iParam1);
			func_302(-462260432, iParam1);
			func_302(822929377, iParam1);
			if (iParam2 == 1)
			{
				func_302(345256028, iParam1);
				func_302(-1635084094, iParam1);
			}
			else
			{
				func_302(114267347, iParam1);
			}
			break;
		case 32:
			func_302(615304157, iParam1);
			break;
		case 47:
			func_302(415434835, iParam1);
			break;
		case 69:
			func_302(1373465877, iParam1);
			if (func_146(((*Global_1347702)[9 /*49*/])->f_15, 1))
			{
				func_302(-2058273527, iParam1);
			}
			break;
		case 70:
			func_302(451334985, iParam1);
			if (func_305() == 0)
			{
				func_302(-224150200, iParam1);
			}
			else
			{
				func_302(289012628, iParam1);
			}
			break;
		case 71:
			if (func_305() == 0)
			{
				func_302(-41692120, iParam1);
			}
			else
			{
				func_302(1537840678, iParam1);
			}
			break;
		case 37:
			func_302(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_302(1842132550, iParam1);
			}
			else
			{
				func_302(-785735240, iParam1);
			}
			func_302(-1605690566, iParam1);
			break;
		case 13:
			func_302(-731367459, iParam1);
			func_302(224176585, iParam1);
			func_302(-14545580, iParam1);
			break;
		case 53:
			func_302(1095274522, iParam1);
			break;
		case 54:
			func_302(-572027988, iParam1);
			break;
		case 56:
			func_302(1339307101, iParam1);
			func_302(2102267732, iParam1);
			break;
		case 57:
			func_302(710102686, iParam1);
			break;
		case 22:
			func_302(-1754368482, iParam1);
			func_302(-2071408557, iParam1);
			break;
		case 12:
			func_302(-181334543, iParam1);
			break;
		case 0:
			func_302(-2134669864, iParam1);
			func_302(-548289709, iParam1);
			func_302(-911271922, iParam1);
			func_302(-604455775, iParam1);
			break;
		case 1:
			func_303(1);
			break;
		case 3:
			if (func_157())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1478534115))
				{
					func_302(-1286192062, iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1286192062))
			{
				func_302(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_124()
{
	if (func_115() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_125(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			func_302(-145926707, iParam1);
			func_302(-604922090, iParam1);
			func_302(-848690769, iParam1);
			break;
		case 1:
			func_302(-1477631591, iParam1);
			break;
		case 2:
			func_302(76112544, iParam1);
			break;
		case 9:
			func_302(1396404308, iParam1);
			func_302(-1357381228, iParam1);
			if (func_146(((*Global_1835011)[69 /*74*/])->f_1, 1))
			{
				func_302(1902679064, iParam1);
			}
			else
			{
				func_302(-2146422425, iParam1);
			}
			break;
		case 22:
			func_302(-1534761730, iParam1);
			break;
		case 26:
			if (iParam3 == 1)
			{
				func_302(-1934184559, iParam1);
				func_302(1281755988, iParam1);
			}
			else
			{
				func_302(-1745220872, iParam1);
				func_302(-1044976796, iParam1);
			}
			break;
		case 29:
			if (iParam3 == 1)
			{
				func_302(-1641504538, iParam1);
				func_302(-988014485, iParam1);
			}
			else if (func_304(26))
			{
				func_302(-343043950, iParam1);
				func_302(-640062214, iParam1);
			}
			else
			{
				func_302(-1272028496, iParam1);
			}
			break;
		case 32:
			if (iParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_302(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_302(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_302(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_302(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_302(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_302(1301690984, iParam1);
				}
			}
			else
			{
				func_302(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_302(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_302(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_302(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_302(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_302(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_302(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (iParam3 == 1)
			{
				func_302(-754570528, iParam1);
			}
			else
			{
				func_302(1690083163, iParam1);
			}
			break;
		case 36:
			if (iParam3 == 1)
			{
				func_302(-2072125821, iParam1);
			}
			else
			{
				func_302(270040030, iParam1);
			}
			break;
		case 37:
			func_302(-870030001, iParam1);
			break;
		case 53:
			if (iParam3 == 1)
			{
				func_302(-505314737, iParam1);
				func_302(-1853052860, iParam1);
			}
			else
			{
				func_302(-1975624994, iParam1);
				func_302(1648135852, iParam1);
			}
			break;
		case 54:
			if (iParam3 == 1)
			{
				func_302(1690231002, iParam1);
			}
			else
			{
				func_302(517031924, iParam1);
			}
			break;
		case 55:
			if (iParam3 == 1)
			{
				func_302(1225386280, iParam1);
			}
			else if (func_304(54))
			{
				func_302(-283235773, iParam1);
			}
			else
			{
				func_302(701962369, iParam1);
			}
			break;
		case 38:
			if (iParam3 == 1)
			{
				func_302(1355398007, iParam1);
			}
			else
			{
				func_302(-1900349467, iParam1);
			}
			break;
		case 39:
			if (iParam3 == 1)
			{
				func_302(574636806, iParam1);
			}
			else
			{
				func_302(-196256251, iParam1);
			}
			break;
		case 40:
			if (iParam3 == 1)
			{
				func_302(821118338, iParam1);
			}
			else if (func_304(39))
			{
				func_302(846829260, iParam1);
			}
			else
			{
				func_302(-1212247553, iParam1);
			}
			break;
		case 43:
			if (iParam3 == 1)
			{
				if (func_180(((*Global_1835011)[33 /*74*/])->f_1) == 1)
				{
					func_302(1422779093, iParam1);
				}
				else
				{
					func_302(-1769536986, iParam1);
				}
			}
			else
			{
				func_302(-600786233, iParam1);
			}
			break;
		case 45:
			if (iParam3 == 1)
			{
				func_302(352134789, iParam1);
			}
			else if (func_304(43))
			{
				func_302(260723113, iParam1);
			}
			else
			{
				func_302(1080243038, iParam1);
			}
			break;
		case 41:
			if (iParam3 == 1)
			{
				func_302(-457958799, iParam1);
			}
			else
			{
				func_302(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_304(41))
			{
				func_302(-546824600, iParam1);
			}
			else
			{
				func_302(-308364587, iParam1);
			}
			break;
		case 49:
			if (iParam3 == 1)
			{
				func_302(1297261593, iParam1);
			}
			else
			{
				func_302(1940089142, iParam1);
			}
			break;
		case 50:
			if (iParam3 == 1)
			{
				func_302(2068484886, iParam1);
			}
			else if (func_304(49))
			{
				func_302(-1489080639, iParam1);
				func_302(-2102244050, iParam1);
			}
			else
			{
				func_302(-1863040467, iParam1);
			}
			break;
		case 51:
			func_302(-2055943209, iParam1);
			break;
		case 58:
			if (func_146(((*Global_1347702)[23 /*49*/])->f_15, 1))
			{
				func_302(1650066845, iParam1);
			}
			else
			{
				func_302(151370023, iParam1);
			}
			func_302(1426057961, iParam1);
			func_302(476379584, iParam1);
			break;
		case 59:
			func_302(-1638117866, iParam1);
			break;
		case 62:
			func_302(199541730, iParam1);
			break;
		case 63:
			func_302(1703485804, iParam1);
			func_302(-800449045, iParam1);
			break;
		case 65:
			func_302(-1678210868, iParam1);
			func_302(-1448238026, iParam1);
			func_302(-1200864845, iParam1);
			func_302(1473511536, iParam1);
			break;
		case 66:
			func_302(-1774490051, iParam1);
			func_302(-34645921, iParam1);
			func_302(174027075, iParam1);
			func_302(-1155999, iParam1);
			func_303(1);
			break;
		case 67:
			func_302(701612593, iParam1);
			func_302(-1069631343, iParam1);
			func_302(1673428882, iParam1);
			break;
		case 68:
			func_302(-739133286, iParam1);
			func_302(-2130089358, iParam1);
			func_302(2056190391, iParam1);
			func_302(1941753817, iParam1);
			func_303(0);
			break;
		case 70:
			func_302(-1217555753, iParam1);
			break;
		case 71:
			func_302(697048821, iParam1);
			break;
		case 73:
			func_302(-553148661, iParam1);
			break;
		case 75:
			func_302(1349250531, iParam1);
			break;
		case 77:
			if (iParam3 == 1)
			{
				func_302(1414263863, iParam1);
			}
			else
			{
				func_302(-1772294468, iParam1);
			}
			break;
		case 79:
			if (iParam3 == 1)
			{
				func_302(1835465936, iParam1);
				func_302(523715611, iParam1);
			}
			else if (func_304(78))
			{
				func_302(1420338873, iParam1);
			}
			else
			{
				func_302(-46362051, iParam1);
			}
			break;
		case 80:
			if (iParam3 == 1)
			{
				func_302(10180941, iParam1);
			}
			else if (func_304(79))
			{
				func_302(768420635, iParam1);
			}
			else
			{
				func_302(-1734012650, iParam1);
			}
			break;
		case 85:
			if (iParam3 == 1)
			{
				func_302(-383601523, iParam1);
			}
			else
			{
				func_302(1004812390, iParam1);
			}
			break;
		case 86:
			if (iParam3 == 1)
			{
				func_302(1606472408, iParam1);
			}
			else
			{
				func_302(1405690220, iParam1);
			}
			break;
		case 87:
			if (iParam3 == 1)
			{
				func_302(-203571927, iParam1);
			}
			else
			{
				func_302(640033630, iParam1);
			}
			break;
		case 88:
			if (iParam3 == 1)
			{
				func_302(729886222, iParam1);
			}
			else
			{
				func_302(-158717807, iParam1);
			}
			break;
		case 89:
			if (iParam3 == 1)
			{
				func_302(-714816362, iParam1);
			}
			else
			{
				func_302(1160146336, iParam1);
			}
			break;
		case 92:
			if (iParam3 == 1)
			{
				func_302(-932932179, iParam1);
				func_302(-1458537240, iParam1);
			}
			else
			{
				func_302(-1764383885, iParam1);
				func_302(894349517, iParam1);
			}
			break;
		case 93:
			if (iParam3 == 1)
			{
				func_302(1741466706, iParam1);
			}
			else
			{
				func_302(1405815775, iParam1);
			}
			break;
		case 94:
			func_302(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_302(1905280979, iParam1);
			}
			else
			{
				func_302(-1966245299, iParam1);
			}
			func_302(721468880, iParam1);
			break;
		case 99:
			func_302(800644248, iParam1);
			break;
		case 101:
			if (iParam3 == 1)
			{
				func_302(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_302(-1117781095, iParam1);
				}
				else
				{
					func_302(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_302(141494548, iParam1);
			}
			else
			{
				func_302(-633957459, iParam1);
			}
			break;
		case 102:
			if (iParam3 == 1)
			{
				func_302(-369525697, iParam1);
			}
			else if (func_304(101))
			{
				func_302(1595015219, iParam1);
			}
			else
			{
				func_302(-321486961, iParam1);
			}
			break;
		case 103:
			func_302(1422724221, iParam1);
			break;
		case 104:
			if (iParam3 == 1)
			{
				func_302(793460477, iParam1);
				func_302(-1610242176, iParam1);
			}
			else if (func_304(103))
			{
				func_302(1830897187, iParam1);
			}
			else
			{
				func_302(1419017828, iParam1);
			}
			break;
		case 105:
			if (iParam3 == 1)
			{
				func_302(1528309077, iParam1);
			}
			else if (func_304(104))
			{
				func_302(1864966105, iParam1);
			}
			else
			{
				func_302(-103336013, iParam1);
			}
			break;
		case 108:
			func_302(1175579551, iParam1);
			break;
		case 109:
			if (iParam3 == 1)
			{
				func_302(-1123227713, iParam1);
				func_302(-889574341, iParam1);
			}
			else
			{
				func_302(2065385917, iParam1);
				func_302(780305039, iParam1);
			}
			break;
		case 110:
			if (iParam3 == 1)
			{
				func_302(-887421691, iParam1);
			}
			else if (func_304(109))
			{
				func_302(-1318117949, iParam1);
			}
			else
			{
				func_302(1632244327, iParam1);
			}
			break;
		case 111:
			if (iParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_302(284822762, iParam1);
				}
				else
				{
					func_302(-1425017554, iParam1);
				}
			}
			else if (func_304(110))
			{
				if (&Global_1357515 == 0)
				{
					func_302(553087292, iParam1);
				}
				else
				{
					func_302(-1766870331, iParam1);
					func_302(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_302(-1980598735, iParam1);
			}
			else
			{
				func_302(-442732098, iParam1);
				func_302(1955756409, iParam1);
			}
			break;
		case 115:
			func_302(394303528, iParam1);
			func_302(-2040171028, iParam1);
			break;
		case 143:
			if (iParam3 == 1)
			{
				func_302(1182403394, iParam1);
			}
			else
			{
				func_302(-2116547899, iParam1);
			}
			break;
		case 144:
			if (iParam3 == 1)
			{
				func_302(924445424, iParam1);
			}
			else
			{
				func_302(1227062271, iParam1);
			}
			break;
		case 117:
			if (iParam3 == 1)
			{
				func_302(430755273, iParam1);
				func_302(-1473879802, iParam1);
			}
			else
			{
				func_302(1121266049, iParam1);
			}
			break;
		case 118:
			if (iParam3 == 1)
			{
				func_302(73885747, iParam1);
			}
			else if (func_304(117))
			{
				func_302(1559707913, iParam1);
			}
			else
			{
				func_302(926897873, iParam1);
			}
			break;
		case 119:
			if (iParam3 == 1)
			{
				func_302(-2103887972, iParam1);
			}
			else if (func_304(118))
			{
				func_302(-435828462, iParam1);
			}
			else
			{
				func_302(-516020583, iParam1);
			}
			break;
		case 121:
			if (iParam3 == 1)
			{
				func_302(2054486196, iParam1);
			}
			else
			{
				func_302(1809320262, iParam1);
			}
			break;
		case 122:
			if (iParam3 == 1)
			{
				func_302(-570086056, iParam1);
			}
			else if (func_304(121))
			{
				func_302(32337856, iParam1);
			}
			else
			{
				func_302(-206811842, iParam1);
			}
			break;
		case 124:
			if (iParam3 == 1)
			{
				func_302(813493663, iParam1);
			}
			else if (func_304(122))
			{
				func_302(-2132763590, iParam1);
			}
			else
			{
				func_302(477901035, iParam1);
			}
			break;
		case 125:
			if (iParam3 == 1)
			{
				func_302(-66240572, iParam1);
				func_302(1563075046, iParam1);
			}
			else
			{
				func_302(-787011772, iParam1);
				func_302(-1523377438, iParam1);
			}
			break;
		case 127:
			func_302(61020800, iParam1);
			break;
		case 129:
			func_302(428985222, iParam1);
			break;
		case 131:
			func_302(-1393851036, iParam1);
			break;
		case 133:
			func_302(1559531342, iParam1);
			break;
		case 134:
			func_302(-718846442, iParam1);
			break;
		case 135:
			if (iParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_302(-1374407408, iParam1);
				}
				else
				{
					func_302(471210931, iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(1732474719) && HUD::_JOURNAL_CAN_WRITE_ENTRY(801682048)) && HUD::_JOURNAL_CAN_WRITE_ENTRY(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_302(-472672138, iParam1);
				}
				else
				{
					func_302(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_302(-1678710489, iParam1);
			}
			else
			{
				func_302(1522210661, iParam1);
			}
			break;
		case 136:
			if (iParam3 == 1)
			{
				func_302(1717582460, iParam1);
			}
			else
			{
				func_302(343644664, iParam1);
			}
			break;
		case 137:
			if (iParam3 == 1)
			{
				func_302(1568112362, iParam1);
				func_302(1388317526, iParam1);
			}
			else if (func_304(136))
			{
				func_302(-1597534828, iParam1);
				func_302(-1207918353, iParam1);
			}
			else
			{
				func_302(-1940891082, iParam1);
				func_302(-598277294, iParam1);
			}
			break;
		case 142:
			if (iParam2 == 1)
			{
				func_302(448334530, iParam1);
				func_302(2145375502, iParam1);
			}
			else
			{
				func_302(-1891994685, iParam1);
			}
			break;
		case 146:
			if (iParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_302(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_302(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_302(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_302(848633571, iParam1);
			}
			break;
		case 147:
			if (iParam3 == 1)
			{
				func_302(-66616327, iParam1);
			}
			else
			{
				func_302(1978361607, iParam1);
			}
			break;
		case 148:
			if (iParam3 == 1)
			{
				func_302(1862916706, iParam1);
			}
			else if (func_304(147))
			{
				func_302(675105199, iParam1);
			}
			else
			{
				func_302(-1993800776, iParam1);
			}
			break;
		case 149:
			if (iParam3 == 1)
			{
				func_302(174409701, iParam1);
			}
			else if (func_304(148))
			{
				func_302(-1730895475, iParam1);
			}
			else
			{
				func_302(-342396910, iParam1);
			}
			break;
		case 150:
			if (iParam3 == 1)
			{
				func_302(1295237052, iParam1);
			}
			else if (func_304(149))
			{
				func_302(-788577684, iParam1);
			}
			else
			{
				func_302(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_126(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	*uParam1 = 1137976064;
	*uParam2 = -1;
	iVar0 = func_80(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_307(iParam0);
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
					if (func_180(((*Global_1835011)[9 /*74*/])->f_1) == 0)
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
			iVar2 = func_120(iParam0);
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
			iVar3 = func_120(iParam0);
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

int func_127(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_308(iParam0);
	uVar3 = func_309(iParam0);
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
				iVar1 = func_113();
				func_153(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_1 = iVar1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_4 = iVar2;
			func_310(iParam0, 1);
			if (func_311(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if ((Global_40.f_4283.f_6[iVar4 /*5*/])->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_312(Global_40.f_4283.f_6[iVar4 /*5*/], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_313(1, iParam0);
				}
				else
				{
					func_314(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_128(int iParam0, var uParam1)
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

int func_129(int iParam0, int iParam1, int iParam2)
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

int func_130(int iParam0, int iParam1)
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

int func_131(int iParam0)
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

void func_132(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_115() != -1)
	{
		return;
	}
	if ((Global_36615 && func_315(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_316(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_317(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
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
			func_318(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_317(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_133(int iParam0)
{
	if (!func_77(iParam0))
	{
		return -1;
	}
	return func_319(func_271(iParam0));
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

bool func_135(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_136()
{
	if (func_115() != -1)
	{
		return 0;
	}
	if (!func_320())
	{
		return 0;
	}
	if (!func_146(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_146(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_146(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_146(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_146(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_146(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_146(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_146(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_146(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_146(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_146(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_146(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_146(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_146(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_146(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_146(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_146(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_146(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_146(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_146(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_146(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_146(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_146(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_146(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_146(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_146(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

void func_137()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 1);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_321(13);
		(*Global_1898441)[iVar0 /*38*/] = 13;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_WIN2_COM", 24);
	}
}

int func_138(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_322(iParam0, 0))
	{
		return 0;
	}
	if (!func_323(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_324(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_325(iParam0, bParam2);
	iVar2 = 0;
	if (func_326(iParam0, 0, 0) == 0)
	{
		if (func_327(iParam0))
		{
			iVar5 = func_328(iParam0);
			iVar6 = func_329(iVar5);
			iVar7 = func_330(iVar6) + 1;
			func_331(iVar5);
			if (func_332(38))
			{
				func_144(483, 0);
			}
			else
			{
				func_144(482, 0);
			}
			if (iVar7 == func_333(iVar6))
			{
				func_138(func_334(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_320() && func_335(4))
				{
					if (func_320() && (func_336(38) || func_332(38)))
					{
						func_338(38, func_334(iVar6), 0, 0, func_337(), 0, -1, 0);
						func_339(2);
					}
					else
					{
						func_338(38, func_334(iVar6), 0, 0, func_337(), 0, -1, 0);
						func_339(1);
					}
				}
			}
			else if (func_320() && func_335(4))
			{
				if (func_320() && (func_336(38) || func_332(38)))
				{
					func_338(38, 0, 0, 0, func_337(), 0, -1, 0);
					func_339(2);
				}
				else
				{
					func_338(38, 0, 0, 0, func_337(), 0, -1, 0);
					func_339(1);
				}
			}
			if (func_320() && func_335(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_320() && (func_336(38) || func_332(38)))
					{
						func_340(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_340(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_341(iParam0) == -1037537535)
	{
		if ((!func_342(iParam0, 866047851) && !func_342(iParam0, -1979000645)) && !func_342(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_343(iParam0, 8388608) && !func_344(28))
	{
		func_345(28);
	}
	if (!bVar3)
	{
		if (func_342(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_346(iParam0) == -1447088266)
			{
				iVar1 = func_348(func_347(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_115() == -1)
					{
						func_349(iVar1);
					}
					if (func_350(0) && func_351(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_352(iParam0, iVar0, iParam5);
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
					if (func_115() == -1)
					{
						func_349(iParam0);
					}
					if (func_350(0) && func_351(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_352(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_341(iParam0) == -427144552)
		{
			if (!func_353(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_341(iParam0) == 307971639 && func_354(iParam0))
		{
			if (!func_355(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_342(iParam0, 866047851))
		{
			func_356(iParam0);
		}
		else if (func_342(iParam0, 2000026003))
		{
			func_357(iParam0);
		}
		else if (func_342(iParam0, -103750053))
		{
			func_359(func_358(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_359(func_360(-717883113, 2091222383), iVar0);
		}
		else if (func_342(iParam0, -121341956) && !func_342(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_146(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_144(498, 0);
				}
			}
			if (func_342(iParam0, -2017733358) || func_342(iParam0, -1369131378))
			{
				func_361(iParam0);
			}
		}
		else if (func_342(iParam0, -136654233))
		{
			if (func_342(iParam0, -1021472396))
			{
			}
		}
		else if (func_342(iParam0, -1466706512) && func_342(iParam0, 1147021565))
		{
			func_144(484, 0);
		}
		else if (func_342(iParam0, 1147021565) && func_342(iParam0, -524514947))
		{
		}
		else if (func_342(iParam0, 554195525))
		{
		}
		else if (func_342(iParam0, 589988438))
		{
			if (func_362())
			{
				func_363(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_342(iParam0, 787083290) && func_342(iParam0, 949916894))
		{
			func_364(iParam0);
		}
		else if (func_342(iParam0, -1718133314))
		{
			func_365(iParam0);
		}
		else if (func_342(iParam0, -1738650224))
		{
			func_366(iParam0);
		}
		else if (func_342(iParam0, -1112814642) && func_342(iParam0, 949916894))
		{
			func_367(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_342(iParam0, 1841149704))
		{
			func_368();
		}
		else if (func_342(iParam0, 606799272))
		{
			func_369(iParam0, iParam1);
			func_370(iParam0);
		}
		else if (func_342(iParam0, -1112814642) && func_342(iParam0, -1697809989))
		{
			func_371(iParam0, 0, 0, 0);
		}
		else if (func_342(iParam0, -2017733358) || func_342(iParam0, -1369131378))
		{
			func_361(iParam0);
		}
		else if (func_342(iParam0, -1921346699))
		{
			if (func_115() != -1)
			{
				return 0;
			}
			func_372(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_342(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_166(215778062, 1, 0))
					{
						func_138(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_166(670273567, 1, 0))
					{
						func_138(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_166(-967317137, 1, 0))
					{
						func_138(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_166(526074061, 1, 0))
					{
						func_138(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_166(-1045488665, 1, 0))
					{
						func_138(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_166(471514780, 1, 0))
					{
						func_138(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_342(iParam0, -839724752) && func_343(iParam0, 4))
		{
			if (!func_332(42))
			{
				func_373(iParam0);
			}
		}
		else if (func_342(iParam0, 1399091007))
		{
			func_374(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_342(iParam0, 1248798204))
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
				func_138(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_345(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_375(PLAYER::PLAYER_PED_ID(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_376(&iVar9, 0))
				{
					func_351(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_115() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_375(PLAYER::PLAYER_PED_ID(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("weapon_kit_binoculars"):
				break;
			case 2131771850:
				func_144(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_377();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_378();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_379();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_380();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_381();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_382(499813453, 854119837, 0);
				func_383(499813453, 0);
				func_384(1);
				break;
			case 2127812557:
				func_382(499813453, -1292544588, 0);
				func_383(499813453, 0);
				func_384(2);
				break;
			case 808991383:
				func_382(499813453, -1003325394, 0);
				func_383(499813453, 0);
				func_384(4);
				break;
			case 1134518629:
				func_382(666607663, -335460405, 0);
				func_383(666607663, 0);
				func_385(1);
				break;
			case 902940106:
				func_382(666607663, 903797617, 0);
				func_383(666607663, 0);
				func_385(2);
				break;
			case -418174898:
				func_382(666607663, 669728650, 0);
				func_383(666607663, 0);
				func_385(4);
				break;
			case -648114971:
				func_382(-220219788, 1214120047, 0);
				func_383(-220219788, 0);
				func_386(1);
				break;
			case 211153747:
				func_382(-220219788, 655769340, 0);
				func_383(-220219788, 0);
				func_386(2);
				break;
			case -32876996:
				func_382(-220219788, 885316185, 0);
				func_383(-220219788, 0);
				func_386(4);
				break;
			case 1191437462:
				func_382(218622660, -1491419385, 0);
				func_383(218622660, 0);
				func_387(1);
				break;
			case 1119149048:
				func_382(218622660, 1809565830, 0);
				func_383(218622660, 0);
				func_387(2);
				break;
			case 506073827:
				func_382(390004462, -628873767, 0);
				func_383(390004462, 0);
				func_388(1);
				break;
			case -1876986168:
				func_382(390004462, -405421956, 0);
				func_383(390004462, 0);
				func_388(2);
				break;
			case 2142623221:
				func_382(390004462, -1108972386, 0);
				func_383(390004462, 0);
				func_388(4);
				break;
			case 1508215381:
				func_382(6410548, 1053716392, 0);
				func_383(6410548, 0);
				func_389(1);
				break;
			case -888935280:
				func_382(6410548, 806507056, 0);
				func_383(6410548, 0);
				func_389(2);
				break;
			case -1252474566:
				func_382(6410548, 1571925350, 0);
				func_383(6410548, 0);
				func_389(4);
				break;
			case -1465702449:
				func_382(6410548, 1330352282, 0);
				func_383(6410548, 0);
				func_389(8);
				break;
			case -21093309:
				func_391(242, func_390(-21093309), 0);
				break;
			case 204375141:
				func_391(240, func_390(204375141), 0);
				break;
			case -417963070:
				func_391(241, func_390(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_392(594, 1934060482, 1, 1);
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
					func_392(594, 1110018439, 1, 1);
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
					func_392(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_392(594, -1228016946, 1, 1);
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
					func_392(595, -103579, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_392(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case 80178851:
				func_144(488, 0);
				break;
			case 1613651027:
				func_144(491, 0);
				break;
			case -885810591:
				func_144(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_138(func_393(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_138(func_394(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_344(1))
				{
					func_144(487, 0);
				}
				break;
			case -898386032:
				func_144(486, 0);
				break;
			case -2035110427:
				if (func_115() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case 1510719693:
				func_144(496, 0);
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
		func_395(&iVar10);
		if (!func_396(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_350(0))
		{
			return 1;
		}
		if (func_341(iParam0) == -1037537535)
		{
			func_397(iParam0);
		}
		if (func_342(iParam0, -1979000645))
		{
			func_398(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_350(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_138(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_399(iVar2, 0);
		}
	}
	Var35 = { func_400(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_401(iParam0);
	if (sParam6 > 0f)
	{
		if (func_342(iParam0, -839724752))
		{
			func_402(iParam0, sParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_403(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_139(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (func_342(iParam0, 1989861793))
	{
		iVar0 = func_404(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_405(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_406(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_407(iVar14, iVar1);
					if (iVar15 != iParam0 && func_322(iVar15, 0))
					{
						if (func_408(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_409(iVar1);
				if (bVar13)
				{
					func_410(iParam0);
				}
				else
				{
					func_144(306, 0);
				}
			}
		}
	}
}

void func_140()
{
	if (func_115() != -1)
	{
		return;
	}
	func_411();
	func_412();
	func_413();
	func_414();
	func_415();
	func_416();
	func_417();
}

void func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;

	func_418(iParam0, 1, 1, -142743235, 1);
	if (func_419(iParam0))
	{
		func_420(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_422(func_421(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_423(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1 /*11*/];
		*(Global_1946804->f_1616.f_1[iVar1 /*3*/]) = { vVar4 };
		(Global_1946804->f_1616.f_1[iVar1 /*3*/])->f_2 = ((Global_1946804->f_1497.f_1[iVar1 /*3*/])->f_2 || (Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_2);
		iVar1++;
	}
	if (func_424() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_425(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_425(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { func_426(8, 0) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { func_426(9, 0) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { func_426(0, 0) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { func_426(2, 0) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { func_426(3, 0) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { func_426(1, 0) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { func_426(5, 0) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { func_426(6, 0) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { func_426(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_427(iVar8, iVar0))
				{
					func_428(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_427(iVar8, iVar0))
		{
			func_428(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
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

void func_142()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_427(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5 /*11*/] || iVar1 == 0)
		{
			if (func_424() == -2125499975 || func_424() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_428(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_428(&vVar2, iVar5, iVar0);
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

void func_143()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 2);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_321(14);
		(*Global_1898441)[iVar0 /*38*/] = 14;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MUD1_COM", 24);
	}
}

void func_144(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_429(iParam0, &iVar0, &iVar1);
	if (!func_430(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_431(iVar0, iVar1);
}

void func_145(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_422(iParam0, 1);
	func_432(Global_1946804->f_1497.f_1[iVar0 /*3*/], 2, 6);
	func_432(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
		(Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1 = 0;
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		if (bParam2)
		{
			func_433(17, iParam0, 0, 0, 0);
		}
	}
	if (func_115() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_432((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
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
			func_432((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
}

int func_146(int iParam0, bool bParam1)
{
	switch (func_76(iParam0))
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

void func_147()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 5);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_321(17);
		(*Global_1898441)[iVar0 /*38*/] = 17;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA2_COM", 24);
	}
}

void func_148()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 6);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_321(18);
		(*Global_1898441)[iVar0 /*38*/] = 18;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA3_COM", 24);
	}
}

int func_149(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	struct<5> Var0;

	if (iParam3 == -358215195)
	{
		Var0 = { func_434(iParam1, 1, 0) };
		iParam3 = func_435(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_436(iParam3);
	return func_375(iParam0, iParam1, iParam2, iParam3, bParam4, iParam5, 1, 0, 1, 0);
}

bool func_150()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

void func_151(int iParam0)
{
	int iVar0;

	if (!func_437(iParam0))
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

int func_152(int iParam0, int iParam1)
{
	if (!func_438(iParam0))
	{
		return 0;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_439(iParam0);
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	return func_440(Global_40.f_9910[iParam1 /*6*/], 4);
}

void func_153(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_441(*iParam0);
	iVar1 = func_442(*iParam0);
	iVar2 = func_443(*iParam0);
	iVar3 = func_444(*iParam0);
	iVar4 = func_445(*iParam0);
	iVar5 = func_446(*iParam0);
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
	iVar6 = func_447(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_447(iVar1, iVar0);
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
	func_448(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_154(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_438(iParam0))
	{
		return;
	}
	if (!func_449(iParam1))
	{
		return;
	}
	if (func_450(iParam1, 1))
	{
		return;
	}
	iVar0 = func_439(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_152(iParam0, -1))
	{
		return;
	}
	else
	{
		func_451(Global_40.f_9910[iVar0 /*6*/], 2);
	}
	(Global_40.f_9910[iVar0 /*6*/])->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_94(0, 0, 1))
		{
			func_186(0, 17);
		}
	}
}

void func_155()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 7);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_321(19);
		(*Global_1898441)[iVar0 /*38*/] = 19;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MOB5_COM", 24);
	}
}

void func_156()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 8);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_321(20);
		(*Global_1898441)[iVar0 /*38*/] = 20;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_157()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

void func_158()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 9);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_321(21);
		(*Global_1898441)[iVar0 /*38*/] = 21;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA1_COM", 24);
	}
}

void func_159()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 10);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_321(22);
		(*Global_1898441)[iVar0 /*38*/] = 22;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA3_COM", 24);
	}
}

void func_160()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 12);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_321(24);
		(*Global_1898441)[iVar0 /*38*/] = 24;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ODR5_COM", 24);
	}
}

void func_161()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 13);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_321(25);
		(*Global_1898441)[iVar0 /*38*/] = 25;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN1_COM", 24);
	}
}

void func_162()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 14);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_321(27);
		(*Global_1898441)[iVar0 /*38*/] = 27;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MAR51_COM", 24);
	}
}

void func_163()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 15);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_321(28);
		(*Global_1898441)[iVar0 /*38*/] = 28;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_164(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_165(int iParam0)
{
	return (Global_40.f_12018.f_4 && iParam0) != 0;
}

bool func_166(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_322(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_341(iParam0);
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
		if (!func_452(iParam0, 1))
		{
			return false;
		}
	}
	return func_326(iParam0, 0, bParam2) >= iParam1;
}

void func_167(int iParam0)
{
	if (func_20(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_453(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_BANK_FEED", MISC::ABSI(iParam0)), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_453(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_168()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 16);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_321(29);
		(*Global_1898441)[iVar0 /*38*/] = 29;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BEE22_COM", 24);
	}
}

void func_169()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 17);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_321(26);
		(*Global_1898441)[iVar0 /*38*/] = 26;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN2_COM", 24);
	}
}

void func_170()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 11);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_321(23);
		(*Global_1898441)[iVar0 /*38*/] = 23;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOC_COM", 24);
	}
}

void func_171()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 3);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_321(15);
		(*Global_1898441)[iVar0 /*38*/] = 15;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOW3_COM", 24);
	}
}

void func_172()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 4);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_321(16);
		(*Global_1898441)[iVar0 /*38*/] = 16;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DUT1_COM", 24);
	}
}

void func_173()
{
	if (func_454() > 1)
	{
		func_455();
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-707360575))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-707360575, true);
			func_144(444, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-1201174711))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-1201174711, true);
			func_144(447, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(151582343))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(151582343, true);
			func_144(448, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-642492359))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-642492359, true);
			func_144(450, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(5171247))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(5171247, true);
			func_144(452, 1);
		}
	}
}

bool func_174(int iParam0)
{
	return func_270(iParam0, 4, 1);
}

void func_175(int iParam0)
{
	func_456(iParam0, 4, 1);
}

void func_176(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_119(-160912108) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_177(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_20(32768))
	{
		return;
	}
	if (!func_77(iParam0))
	{
		return;
	}
	func_91(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_80(iParam0))
	{
		case 1:
			func_359(func_360(909007663, -587839005), 1);
			iVar0 = func_120(iParam0);
			func_359(func_119(-634848880), 1);
			switch (func_287(iVar0))
			{
				case 0:
					func_359(func_360(909007663, 1325140787), 1);
					break;
				case 1:
					func_359(func_360(909007663, 2101241783), 1);
					break;
				case 2:
					func_359(func_360(909007663, -1296936294), 1);
					break;
				case 3:
					func_359(func_360(909007663, -798388728), 1);
					break;
				case 4:
					func_359(func_360(909007663, -1787586531), 1);
					break;
				case 5:
					func_359(func_360(909007663, -1002834519), 1);
					break;
				case 6:
					func_359(func_360(909007663, -50600144), 1);
					break;
				case 7:
					func_359(func_360(909007663, -348503123), 1);
					break;
				case 8:
					func_359(func_360(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_359(func_360(909007663, -406093146), 1);
			}
			if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_8))))
			{
				func_359(func_360(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_120(iParam0);
			if (func_121(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				func_359(func_119(-634848880), 1);
			}
			if (func_121(((*Global_1347702)[iVar1 /*49*/])->f_12, 4) || iVar1 == 59)
			{
				if (func_121(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
				{
					func_359(func_360(909007663, -587839005), 1);
				}
				else
				{
					func_359(func_360(909007663, -2049243343), 1);
				}
			}
			if (func_121(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				switch (func_288(iVar1))
				{
					case 0:
						func_359(func_360(909007663, 1325140787), 1);
						break;
					case 1:
						func_359(func_360(909007663, 2101241783), 1);
						break;
					case 2:
						func_359(func_360(909007663, -1296936294), 1);
						break;
					case 3:
						func_359(func_360(909007663, -798388728), 1);
						break;
					case 4:
						func_359(func_360(909007663, -1787586531), 1);
						break;
					case 5:
						func_359(func_360(909007663, -1002834519), 1);
						break;
					case 6:
						func_359(func_360(909007663, -50600144), 1);
						break;
					case 7:
						func_359(func_360(909007663, -348503123), 1);
						break;
					case 8:
						func_359(func_360(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1347702)[iVar1 /*49*/])->f_3))))
				{
					func_359(func_360(909007663, 532323983), 1);
				}
			}
			else if (func_121(((*Global_1347702)[iVar1 /*49*/])->f_12, 4))
			{
				if (func_121(((*Global_1347702)[iVar1 /*49*/])->f_12, 4194304))
				{
				}
				else if (!func_121(((*Global_1347702)[iVar1 /*49*/])->f_12, 512))
				{
					func_359(func_360(909007663, 551192206), 1);
				}
				else
				{
					func_359(func_360(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_178()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (func_115() != -1)
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
	if (!func_457(64))
	{
		return;
	}
	else if (func_95(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_94(0, 0, 1) || func_458()) || func_136())
	{
		return;
	}
	iVar0 = func_98();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_459(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_460(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_460(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_461(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_186(0, -1);
	}
	if (iVar2 > 0)
	{
		func_462("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_463(1, 0);
	Global_1956575->f_2 = 1;
}

void func_179(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_20(32768))
	{
		return;
	}
	func_464(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_465(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_180(int iParam0)
{
	if (!func_77(iParam0))
	{
		return -1;
	}
	return func_466(iParam0);
}

int func_181(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_467(iParam0))
	{
		return 0;
	}
	if (!func_320())
	{
		return 0;
	}
	if (!func_468(iParam0, &iVar0, &iVar1))
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

int func_182(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_469())
	{
		iVar2 = func_469();
	}
	iVar5 = func_470(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_271(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_271(iVar6) == 0)
			{
				return func_471(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_271(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_271(iVar6) == 0)
			{
				return func_471(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_471(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_183(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_472(1330954593, 0, -1);
		case 1:
			return func_472(1330954593, 0, -1);
		case 2:
			return func_472(1330954593, 0, -1) * 2;
		case 4:
			return func_472(1330954593, 0, -1);
		case 5:
			return func_472(1330954593, 0, -1);
		case 6:
			return func_472(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_472(1330954593, 0, -1) * 3;
		case 9:
			return func_472(1330954593, 0, -1) * 3;
		case 10:
			return func_472(1330954593, 0, -1) * 3;
		case 11:
			return func_472(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

var func_184(int iParam0)
{
	char[] cVar0[8];

	if (!func_77(iParam0))
	{
		return cVar0;
	}
	switch (func_80(iParam0))
	{
		case 1:
			cVar0 = ((*Global_1835011)[func_307(iParam0) /*74*/])->f_8;
			break;
		case 8:
			cVar0 = ((*Global_1347702)[func_120(iParam0) /*49*/])->f_3;
			break;
		case 11:
			if (iParam0 == func_182(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_185(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!Global_1879514->f_11)
	{
		iVar0 = func_24();
		iVar1 = MISC::GET_HASH_KEY(&uParam0);
		if (MISSIONDATA::_0x57E798B54C45EE1A(iVar1) != 5 && iVar0 == 5)
		{
			if (func_80(Global_1879514->f_1) == 1)
			{
				func_181(5, 1);
			}
			else if (func_80(Global_1879514->f_1) == 8 && (func_121(((*Global_1347702)[func_120(Global_1879514->f_1) /*49*/])->f_12, 1) || func_121(((*Global_1347702)[func_120(Global_1879514->f_1) /*49*/])->f_12, 33554432)))
			{
				func_181(5, 1);
			}
		}
		MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&uParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&uParam0), 3);
	}
}

void func_186(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_473(&Global_0, 8);
	}
	if (!func_320() || func_115() != -1)
	{
		return;
	}
	func_473(&Global_0, 1);
}

int func_187()
{
	return Global_40.f_4283;
}

int func_188(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_77(iParam0))
	{
		return 0;
	}
	uVar0 = func_184(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_189(var uParam0)
{
	return STATS::_0x4DAC398297981B87(uParam0);
}

void func_190(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_191(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = MISC::GET_GAME_TIMER();
}

Vector3 func_192(vector3 vParam0, var uParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, float fParam9, int iParam10)
{
	vector3 vVar0;

	vVar0 = { func_474(vParam0, uParam3, uParam4, bParam5, bParam6, 1, iParam7, bParam8, fParam9, iParam10, -1, 1103626240) };
	if (func_475(vVar0))
	{
		vVar0 = { func_474(vParam0, uParam3, uParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_193(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = uParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_194(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_195(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = func_256();
	if (func_476(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_477(vParam0, bParam3);
}

void func_196()
{
	func_478();
	func_479();
	func_480();
	SCRIPTS::_0x11B0A0B282FA9B10(0);
}

char* func_197(int iParam0)
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

bool func_198(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_199()
{
	return Global_40.f_4283.f_1;
}

bool func_200(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_481(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_201(int iParam0)
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

void func_202(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_201(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_482(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_483(iVar0);
	*uParam0 = 0;
}

bool func_203(var uParam0)
{
	return func_484(*uParam0, 1);
}

void func_204(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_205(var uParam0, char* sParam1, var uParam2, bool bParam3, bool bParam4)
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
	func_485(uParam0);
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

bool func_206(var uParam0, int iParam1)
{
	uParam0->f_264.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_264.f_1), &(uParam0->f_264));
}

bool func_207(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, var uParam5)
{
	bool bVar0;

	if (iParam2 == -1)
	{
		if (func_208(uParam0, 2, iParam4))
		{
			*uParam5 = *iParam4;
		}
		if (func_208(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_208(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_208(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_208(uParam0, 2, iParam4))
	{
		*uParam5 = *iParam4;
	}
	if (func_208(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_208(uParam0, 5, iParam4))
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
			if (func_208(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_208(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_208(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_264.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_INT(iParam2, &(uParam0->f_264));
}

bool func_209(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_264.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_STRING(cParam2, &(uParam0->f_264));
}

int func_210(var uParam0, char* sParam1, int iParam2)
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

void func_211(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_212(var uParam0)
{
	DATAFILE::_DATAFILE_UNLOAD(uParam0->f_264);
	uParam0->f_264 = 0;
	uParam0->f_270 = 0;
}

void func_213(var uParam0)
{
	func_486(uParam0, 0f);
}

int func_214(var uParam0)
{
	if (!func_203(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_487(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_488() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_215(int iParam0)
{
	if (func_489())
	{
		Global_1357509 = 1;
	}
	if (func_490(-92416669))
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

float func_218(var uParam0)
{
	if (!func_203(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_487(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_491() - uParam0->f_1);
}

void func_219(var uParam0, int iParam1, bool bParam2)
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

int func_220(var uParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, int iParam5)
{
	vector3 vVar0;
	struct<8> Var3;
	var uVar11;

	if (func_492(uParam0->f_1, sParam1, &Var3))
	{
		MemCopy(&vVar0, {Var3}, 3);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			StringConCat(&vVar0, sParam2, 24);
		}
		if (bParam3)
		{
			func_493(1, 1, 0);
		}
		uVar11 = 24;
		if (!func_494(&vVar0))
		{
			func_495(&uVar11, Global_35, "ARTHUR", 0);
			func_495(&uVar11, func_75(uParam0->f_2), func_496(uParam0->f_2), 0);
			func_497(&uVar11, vVar0, bParam4, iParam5, 0, 0);
			return 1;
		}
	}
	return 0;
}

Vector3 func_221()
{
	int iVar0;
	vector3 vVar1;
	var uVar4;

	iVar0 = func_187();
	if (!func_498(iVar0, &vVar1, &uVar4))
	{
	}
	return vVar1;
}

float func_222(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_223(var uParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_143) && ENTITY::IS_ENTITY_DEAD(uParam1->f_143))
	{
		func_499(&(uParam1->f_128), 4194304);
	}
}

void func_224(var uParam0)
{
	switch (uParam0->f_11)
	{
		case 0:
			break;
		case 1:
			BUILTIN::SETTIMERB(0);
			func_500(&uLocal_36, "HUNT06_IKNAP", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1);
			func_501(&(uParam0->f_11), 0);
			break;
		case 3:
			if (!func_502(1))
			{
				func_500(&uLocal_36, "HUNT06_SR_LOC1x", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1);
				func_501(&(uParam0->f_11), 0);
			}
			break;
		case 4:
			if (!func_502(1))
			{
				BUILTIN::SETTIMERB(0);
				func_500(&uLocal_36, "HUNT06_SR_LOC2", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1);
				func_501(&(uParam0->f_11), 5);
			}
			break;
		case 5:
			if ((BUILTIN::TIMERB() > 1000 && func_502(1)) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("HUNT06_SR_LOC2") >= 1)
			{
				func_503(uParam0, 2, 1);
				func_501(&(uParam0->f_11), 0);
			}
			if (BUILTIN::TIMERB() > 3000 && !func_502(1))
			{
				func_503(uParam0, 2, 1);
				func_501(&(uParam0->f_11), 0);
			}
			break;
		case 8:
			if (!func_502(0))
			{
				func_500(&uLocal_36, "HUNT06_COMEON", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1);
				func_501(&(uParam0->f_11), 0);
			}
			break;
		case 9:
			if (!func_502(1))
			{
				BUILTIN::SETTIMERB(0);
				func_500(&uLocal_36, "HUNT06_IG1_A", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1);
				func_503(uParam0, 8, 1);
				func_501(&(uParam0->f_11), 10);
			}
			break;
		case 10:
			if (BUILTIN::TIMERB() > 6000)
			{
				func_501(&(uParam0->f_11), 0);
			}
			break;
		case 11:
			if (!func_502(0))
			{
				func_500(&uLocal_36, "HUNT06_LOC_01S", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1);
				func_501(&(uParam0->f_11), 0);
			}
			break;
		case 12:
			if ((BUILTIN::TIMERB() > 3000 && !func_504("HUNT06_LOC_01C")) && !func_502(0))
			{
				func_500(&uLocal_36, "HUNT06_LOC_01E", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1);
				func_501(&(uParam0->f_11), 0);
			}
			break;
		case 13:
			func_500(&uLocal_36, "HUNT06_LOC_02SP", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1);
			func_501(&(uParam0->f_11), 0);
			break;
		case 15:
			func_500(&uLocal_36, "HUNT06_LOC_02E", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1);
			func_501(&(uParam0->f_11), 0);
			break;
		case 14:
			func_500(&uLocal_36, "HUNT06_LOC_02R", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1);
			func_503(uParam0, 1024, 1);
			func_501(&(uParam0->f_11), 0);
			break;
		case 16:
			func_500(&uLocal_36, "HUNT06_CONGRAT", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1);
			func_501(&(uParam0->f_11), 0);
			break;
		case 17:
			if (!func_502(1) && func_500(&uLocal_36, "HUNT06_HURRY", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
			{
				func_501(&(uParam0->f_11), 0);
			}
			break;
		case 18:
			if (!func_502(1) && func_500(&uLocal_36, "HUNT06_JUMPIN", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
			{
				func_501(&(uParam0->f_11), 0);
			}
			break;
		case 19:
			func_500(&uLocal_36, "HUNT06_GOHOME", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1);
			func_501(&(uParam0->f_11), 0);
			break;
		case 20:
			if (!func_502(1) && func_500(&uLocal_36, "HUNT06_DISTKILL", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
			{
				func_501(&(uParam0->f_11), 0);
			}
			break;
		case 21:
			if (!func_502(1) && func_500(&uLocal_36, "HUNT06_ALERTRUN", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
			{
				func_501(&(uParam0->f_11), 0);
			}
			break;
		case 22:
			if (!func_198(uParam0->f_129, 2))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_SELLING", Global_35, &(uParam0->f_80[0]), 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 2);
					}
				}
			}
			break;
		case 23:
			if (!func_198(uParam0->f_129, 4))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_DAWD1", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 4);
					}
				}
			}
			break;
		case 24:
			if (!func_198(uParam0->f_129, 8))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_DAWD2", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 8);
					}
				}
			}
			break;
		case 25:
			if (!func_198(uParam0->f_129, 16))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_DAWD3", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 16);
					}
				}
			}
			break;
		case 26:
			if (!func_198(uParam0->f_129, 32))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_DAWD4", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 32);
					}
				}
			}
			break;
		case 27:
			if (!func_198(uParam0->f_129, 64))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_GRAB1", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 64);
					}
				}
			}
			break;
		case 28:
			if (!func_198(uParam0->f_129, 128))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_GRAB2", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 128);
					}
				}
			}
			break;
		case 29:
			if (!func_198(uParam0->f_129, 256))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_GUMBO", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 256);
					}
				}
			}
			break;
		case 30:
			if (!func_198(uParam0->f_129, 512))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_JUMPINR", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 512);
					}
				}
			}
			break;
		case 31:
			if (!func_198(uParam0->f_129, 1024))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_ROWCHAT1", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 1024);
					}
				}
			}
			break;
		case 32:
			if (!func_198(uParam0->f_129, 2048))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_ROWCHAT2", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 2048);
					}
				}
			}
			break;
		case 34:
			if (!func_198(uParam0->f_129, 8192))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_ROWEXO_N", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 8192);
					}
				}
			}
			break;
		case 33:
			if (!func_198(uParam0->f_129, 4096))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_ROWEXO_Y", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 4096);
					}
				}
			}
			break;
		case 35:
			if (!func_198(uParam0->f_129, 16384))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_ROWDAWD", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 16384);
					}
				}
			}
			break;
	}
}

void func_225(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_402))
	{
		return;
	}
	if (!func_198(uParam0->f_128, 65536))
	{
		if (func_505(&(uParam0->f_160), uParam0->f_402, 1, 1))
		{
			func_499(&(uParam0->f_128), 65536);
		}
	}
}

void func_226(var uParam0)
{
	switch (uParam0->f_12)
	{
		case 1:
			break;
		case 2:
			break;
		case 4:
			if (!func_507(uParam0->f_57[1], &(uParam0->f_77), func_506(1), 0, 1, 0))
			{
				return;
			}
			func_499(&(uParam0->f_64), uParam0->f_12);
			func_508(uParam0, 1);
			break;
		case 8:
			if (!func_507(uParam0->f_57[2], &(uParam0->f_77), func_506(2), 0, 1, 0))
			{
				return;
			}
			STREAMING::REQUEST_MODEL(joaat("p_crayfish01x"), false);
			if (!STREAMING::HAS_MODEL_LOADED(joaat("p_crayfish01x")))
			{
				return;
			}
			func_499(&(uParam0->f_64), uParam0->f_12);
			func_508(uParam0, 1);
			break;
		case 16:
			break;
		case 32:
			if (!func_507(uParam0->f_57[5], &(uParam0->f_77), func_506(5), 0, 1, 0))
			{
				return;
			}
			func_499(&(uParam0->f_64), uParam0->f_12);
			func_508(uParam0, 1);
			break;
	}
}

int func_227(var uParam0, int iParam1)
{
	float fVar0;

	if (ENTITY::IS_ENTITY_DEAD(&(iParam1->f_80[0])))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1->f_143))
	{
		VEHICLE::_0x98A7598C579EE871(iParam1->f_143, -20f, -1);
	}
	fVar0 = func_222(Global_35, func_509(1), 1);
	if (fVar0 > 8f)
	{
		func_510(iParam1);
	}
	func_511();
	if (iParam1->f_4 < 4)
	{
		func_512(iParam1, "FS06_O_STRT", func_509(12), 100f, 75f, 150f);
	}
	else if (iParam1->f_4 < 6)
	{
		func_512(iParam1, "FS06_O_RD01", func_509(13), 100f, 75f, 150f);
	}
	else
	{
		func_512(iParam1, "FS06_O_LAND", func_509(13), 100f, 75f, 150f);
	}
	switch (iParam1->f_4)
	{
		case 0:
			if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_43));
			}
			if (VOLUME::DOES_VOLUME_EXIST(&(iParam1->f_112[4])) && ENTITY::DOES_ENTITY_EXIST(iParam1->f_143))
			{
				PED::_0x7C00CFC48A782DC0(&(iParam1->f_112[4]), iParam1->f_143, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			}
			func_513(uParam0->f_2, 0, 1, 1, 1, 0);
			if (func_8(&(uParam0->f_9), 128))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("BOB_HUNT06_RESTART_1");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("BOB_HUNT06_START");
			}
			func_515(uParam0, func_514(0), func_514(1), 0, 1);
			func_516(&(iParam1->f_4), 1);
			break;
		case 1:
			func_503(iParam1, 1, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iParam1->f_143))
			{
				VEHICLE::_0x6835AFEA10E186F4(iParam1->f_143, 2);
			}
			PED::_0xAAB050DA48B57978(&(iParam1->f_80[0]), "CTaskPoliceCrimeSceneSearch_HighIntensity", 0, -1, 4);
			func_501(&(iParam1->f_11), 1);
			func_516(&(iParam1->f_4), 2);
			break;
		case 2:
			func_517(iParam1->f_80[0], func_509(9), 500);
			if (func_222(Global_35, func_509(12), 1) < 12f && !func_502(1))
			{
				func_501(&(iParam1->f_11), 3);
				if (!ENTITY::IS_ENTITY_DEAD(iParam1->f_143))
				{
					VEHICLE::_0x6835AFEA10E186F4(iParam1->f_143, 1);
				}
				func_60(&(iParam1->f_153), 0);
				func_516(&(iParam1->f_4), 3);
			}
			break;
		case 3:
			func_517(iParam1->f_80[0], func_509(9), 500);
			if (func_218(&(iParam1->f_153)) >= 5f)
			{
				func_516(&(iParam1->f_4), 4);
			}
			break;
		case 4:
			func_501(&(iParam1->f_11), 4);
			func_516(&(iParam1->f_4), 5);
			break;
		case 5:
			func_517(iParam1->f_80[0], func_509(10), 500);
			if (func_222(Global_35, func_509(13), 1) < 6f)
			{
				func_516(&(iParam1->f_4), 6);
			}
			break;
		case 6:
			func_516(&(iParam1->f_4), 7);
			break;
		case 7:
			func_501(&(iParam1->f_11), 9);
			if (!ENTITY::IS_ENTITY_DEAD(iParam1->f_143))
			{
				VEHICLE::_0x6835AFEA10E186F4(iParam1->f_143, 2);
			}
			func_516(&(iParam1->f_4), 8);
			break;
		case 8:
			func_517(iParam1->f_80[0], func_509(11), 500);
			if (fVar0 < 15f)
			{
			}
			func_518(Global_35, func_509(1), 0, 1112014848, 1106247680, 1097859072, 1084227584, 1, 1, 1, 0);
			if (!func_198(iParam1->f_128, 134217728))
			{
				if (ENTITY::GET_ENTITY_SPEED(iParam1->f_143) < 0.1f)
				{
					if (func_222(Global_35, 2017.092f, -1883.428f, 39.4902f, 1) < 20f)
					{
						if (!func_502(0))
						{
							func_501(&(iParam1->f_11), 8);
							func_499(&(iParam1->f_128), 134217728);
						}
					}
				}
			}
			if (fVar0 < 5f)
			{
				if (func_519(&(iParam1->f_80[0]), iParam1->f_143, 0))
				{
					VEHICLE::_0x6835AFEA10E186F4(iParam1->f_143, 1);
					VEHICLE::BRING_VEHICLE_TO_HALT(iParam1->f_143, 2f, -1, false);
					if (ENTITY::GET_ENTITY_SPEED(iParam1->f_143) < 0.4f && func_500(&uLocal_36, "HUNT06_IG1_B", &(iParam1->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_143, true);
						TASK::TASK_LEAVE_VEHICLE(&(iParam1->f_80[0]), iParam1->f_143, 131072, 0);
						func_213(&(iParam1->f_131));
						func_516(&(iParam1->f_4), 9);
					}
				}
			}
			break;
		case 9:
			if (!func_519(&(iParam1->f_80[0]), iParam1->f_143, 1) && func_218(&(iParam1->f_131)) > 3f)
			{
				if (func_519(Global_35, iParam1->f_143, 0) && !func_520(Global_35, 451360105))
				{
					TASK::TASK_LEAVE_VEHICLE(Global_35, iParam1->f_143, 131072, 0);
				}
			}
			if (!func_519(Global_35, iParam1->f_143, 0))
			{
				func_204(&(iParam1->f_131));
				func_516(&(iParam1->f_4), 10);
			}
			break;
		case 10:
			if (!func_519(Global_35, iParam1->f_143, 1) && !func_519(&(iParam1->f_80[0]), iParam1->f_143, 1))
			{
				TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(&(iParam1->f_80[0]), 0, 1065353216);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(&(iParam1->f_80[0]), func_521(1), 0, 25600, -1, 0, 0, -1);
				PED::_0x2208438012482A1A(&(iParam1->f_80[0]), false, false);
				if (!ENTITY::IS_ENTITY_DEAD(iParam1->f_143))
				{
					VEHICLE::_0x6835AFEA10E186F4(iParam1->f_143, 3);
				}
				func_503(iParam1, 16, 1);
				func_508(iParam1, 4);
				func_516(&(iParam1->f_4), 11);
			}
			break;
		case 11:
			return 1;
	}
	return 0;
}

void func_228(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

int func_229(var uParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(&(iParam1->f_80[0])))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	switch (iParam1->f_9)
	{
		case 0:
			func_522(&(iParam1->f_9), 1);
			break;
		case 1:
			if (func_523(uParam0, iParam1))
			{
				func_522(&(iParam1->f_9), 2);
			}
			break;
		case 2:
			if (func_524(uParam0, iParam1))
			{
				func_522(&(iParam1->f_9), 3);
			}
			break;
		case 3:
			if (func_525(uParam0, iParam1))
			{
				func_522(&(iParam1->f_9), 4);
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

int func_230(var uParam0)
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
		func_526(&(uParam0->f_9), 4, 1);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(uParam0->f_18));
	}
	return 1;
}

int func_231(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

bool func_232(var uParam0, var uParam1)
{
	return (*uParam0 && uParam1) != 0;
}

int func_233(int iParam0)
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

int func_234(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
			if (func_260(iParam0, 2, 1))
			{
				func_255(iParam0, 2, 1);
			}
			if (func_270(iParam0, 16, 1))
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
						func_67(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
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
						func_527(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_59(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_528(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_59(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_528(iParam0, 1);
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
			if (!func_260(iParam0, 44, 0))
			{
				func_59(iParam0, 44, 0);
			}
			if (func_529(iParam0, vVar0, iParam13, 0, 1, bParam17, bParam20, -1, 1, 0))
			{
				func_528(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_255(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			_NAMESPACE48::_0x6759BEE6762E140B(((*Global_1360165)[iParam0 /*1157*/])->f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_262(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_530(iParam0, 0, 0, 1);
			}
			func_255(iParam0, 33, 1);
			func_255(iParam0, 34, 1);
			func_255(iParam0, 29, 1);
			if (!func_475(vVar0) && iParam7)
			{
				func_528(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_528(iParam0, 4);
			}
			else
			{
				func_528(iParam0, 5);
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
						func_527(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_531(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824);
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
				func_528(iParam0, 4);
			}
			else
			{
				func_528(iParam0, 5);
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
				if (func_532(iParam0, iParam13))
				{
					if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
					{
						func_533(iParam0, iParam13, 0);
						func_534(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_260(iParam0, 25, 0))
						{
							func_255(iParam0, 25, 0);
						}
						func_59(iParam0, 66, 0);
						func_528(iParam0, 5);
						((*Global_1360165)[iParam0 /*1157*/])->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_528(iParam0, 5);
				}
				func_59(iParam0, 28, 1);
			}
			else
			{
				func_528(iParam0, 5);
			}
			break;
		case 5:
			if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
			{
				func_528(iParam0, 6);
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
					func_535(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_536(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_528(iParam0, 7);
		case 7:
			func_262(iParam0, bParam9, bParam15, 0);
			func_73(iParam0, 4, bParam11);
			func_258(iParam0);
			if (bParam20)
			{
				if (func_537(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_538(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			(Global_40.f_4942[iParam0 /*60*/])->f_4 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
			func_528(iParam0, 0);
			func_456(iParam0, 16, 1);
			func_255(iParam0, 44, 1);
			((*Global_1360165)[iParam0 /*1157*/])->f_1156 = 0;
			((*Global_1360165)[iParam0 /*1157*/])->f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

int func_235(int iParam0, bool bParam1)
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
	if (func_65(iParam0, 0))
	{
		func_539(iParam0, 1);
		return 1;
	}
	if (!func_540())
	{
		return 0;
	}
	if (bParam1)
	{
		func_527(iParam0, 0, "Adding to Group");
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
	func_539(iParam0, 1);
	Global_1359489->f_15 = func_253(1);
	func_59(iParam0, 32, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], -1247684992);
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, true);
	PED::_0x9238A3D970BBB0A9(Global_1360165[iParam0 /*1157*/], -1972074710);
	PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, true);
	if (COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())) != 234527101)
	{
		COMPANION::_0x0DE02DA3C0F66955(func_75(iParam0), COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())));
		COMPANION::_0x61BDA07407754A5C(func_75(iParam0), Global_1391438->f_414.f_37);
	}
	PED::_0x89E59DBD15E21177(func_50(), 0);
	func_541(iParam0);
	Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	Var1.f_12 = 3;
	Var1.f_3 = Global_1360165[iParam0 /*1157*/];
	Var1.f_7 = func_256();
	Var1.f_8 = 0;
	Var1.f_11 = 10;
	Var1.f_14 = Global_1360165[iParam0 /*1157*/];
	MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	return 1;
}

int func_236(var uParam0)
{
	bool bVar0;
	int iVar1;

	func_511();
	bVar0 = true;
	if (Local_134.f_1 > 0)
	{
		func_510(&Local_134);
	}
	switch (Local_134.f_1)
	{
		case 0:
			STREAMING::REQUEST_MODEL(func_542(0), false);
			STREAMING::REQUEST_MODEL(func_542(1), false);
			STREAMING::REQUEST_MODEL(func_542(2), false);
			STREAMING::REQUEST_MODEL(func_542(3), false);
			TASK::REQUEST_WAYPOINT_RECORDING(func_521(0));
			TASK::REQUEST_WAYPOINT_RECORDING(func_521(1));
			Local_134.f_1 = 1;
			break;
		case 1:
			if (!func_543(&Local_134))
			{
				return 0;
			}
			if (HUD::_DOES_TEXT_BLOCK_EXIST("HNT6AUD"))
			{
				HUD::TEXT_BLOCK_REQUEST("HNT6AUD");
			}
			if (!STREAMING::HAS_MODEL_LOADED(func_542(0)))
			{
				bVar0 = false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(func_542(1)))
			{
				bVar0 = false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(func_542(2)))
			{
				bVar0 = false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(func_542(3)))
			{
				bVar0 = false;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_521(0)))
			{
				bVar0 = false;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_521(1)))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				PED::_0xF008E0BA1FE1D644(5);
				func_243(2);
				func_544(uParam0->f_37);
				Local_134.f_1 = 2;
			}
			break;
		case 2:
			if (PED::_0x5C16855277819BBF() != 5)
			{
				return 0;
			}
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (!func_545(Local_134.f_112[iVar1], iVar1))
				{
					return 0;
				}
				iVar1++;
			}
			func_68(1);
			Local_134.f_1 = 3;
			break;
		case 3:
			if (!func_546(uParam0))
			{
				return 0;
			}
			if (!func_10(uParam0->f_2))
			{
				Local_134.f_80[0] = func_234(uParam0->f_2, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				return 0;
			}
			if (!func_29(&(Local_134.f_80[0]), 0))
			{
				if (func_10(uParam0->f_2))
				{
					Local_134.f_80[0] = func_547(uParam0->f_2);
				}
				return 0;
			}
			if (!func_548(Local_134.f_80[1], 3, 15))
			{
				return 0;
			}
			if (!func_548(Local_134.f_80[2], 3, 16))
			{
				return 0;
			}
			if (!func_548(Local_134.f_80[3], 3, 17))
			{
				return 0;
			}
			MISC::CLEAR_AREA(func_509(1), 25f, 8);
			MISC::_0x59174F1AFE095B5A(1632247697, false, true, true, 60f, false);
			func_495(&uLocal_36, &(Local_134.f_80[0]), "PEARSON", 0);
			Local_134.f_1 = 4;
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(&(Local_134.f_80[0])))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_134.f_80[0]), true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(&(Local_134.f_80[1])) && VOLUME::DOES_VOLUME_EXIST(&(Local_134.f_112[0])))
			{
				TASK::TASK_STAND_STILL(&(Local_134.f_80[1]), -1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_134.f_80[1]), true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(&(Local_134.f_80[2])) && VOLUME::DOES_VOLUME_EXIST(&(Local_134.f_112[0])))
			{
				TASK::TASK_STAND_STILL(&(Local_134.f_80[2]), -1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_134.f_80[2]), true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(&(Local_134.f_80[3])) && VOLUME::DOES_VOLUME_EXIST(&(Local_134.f_112[0])))
			{
				TASK::TASK_STAND_STILL(&(Local_134.f_80[2]), -1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_134.f_80[3]), true);
			}
			func_549(uParam0);
			func_61(uParam0->f_2, 1);
			func_64(0, func_63("FS06_HRSE_BLK"));
			func_262(uParam0->f_2, 0, 1, 0);
			PED::SET_PED_CONFIG_FLAG(&(Local_134.f_80[0]), 297, true);
			PED::SET_PED_CONFIG_FLAG(&(Local_134.f_80[0]), 315, true);
			PED::SET_PED_CONFIG_FLAG(&(Local_134.f_80[0]), 130, true);
			PED::SET_PED_CONFIG_FLAG(&(Local_134.f_80[0]), 331, true);
			PED::SET_PED_CONFIG_FLAG(&(Local_134.f_80[0]), 330, true);
			return 1;
	}
	return 0;
}

int func_237(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_199();
	switch (iVar0)
	{
		case 43:
			*uParam0 = { -1340.417f, 2447.74f, 307.6064f };
			*uParam1 = 69.2479f;
			break;
		case 71:
			*uParam0 = { -112.9493f, -14.3514f, 94.8418f };
			*uParam1 = 78.7552f;
			break;
		case 98:
			*uParam0 = { 676.6314f, -1223.84f, 43.8567f };
			*uParam1 = 174.642f;
			break;
		case 9:
			*uParam0 = { 1853.359f, -1835.935f, 42.0656f };
			*uParam1 = 25.3398f;
			break;
		case 4:
			*uParam0 = { 2279.679f, -753.1292f, 40.9928f };
			*uParam1 = 65.2774f;
			break;
		case 79:
			*uParam0 = { 2370.169f, 1336.931f, 105.273f };
			*uParam1 = 302.1729f;
			break;
		case 22:
			*uParam0 = { -2590.198f, 465.025f, 145.1573f };
			*uParam1 = 77.3385f;
			break;
		case 37:
			*uParam0 = { -1644.85f, -1376.873f, 82.9681f };
			*uParam1 = 340.856f;
			break;
		case 58:
			*uParam0 = { func_550(4) };
			*uParam1 = 0f;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_238(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<6> Var10;
	int iVar16;
	int iVar17;

	uParam1->f_10 = func_551(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_475(uParam1->f_6))
		{
		}
	}
	bVar0 = func_320();
	if (*uParam1)
	{
		if (bVar0 && !func_146(((*Global_1835011)[4 /*74*/])->f_1, 1))
		{
			if (func_552(5))
			{
				func_553(5);
				func_554(5);
				func_555(0);
				func_556(0);
			}
		}
	}
	if (func_557(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_146(((*Global_1835011)[37 /*74*/])->f_1, 1)) && !func_146(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_146(((*Global_1835011)[43 /*74*/])->f_1, 1)) && !func_146(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_558(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_559(iVar1))
	{
		bVar3 = true;
		if (func_560(iVar1))
		{
			bVar4 = true;
		}
		if (func_561(iVar1))
		{
			iVar5 = 1;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (iVar5 && !uParam1->f_5)
			{
				func_562(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_552(0) && func_552(1))
			{
				func_563(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_564())
			{
				func_565();
			}
			func_555(0);
			func_556(0);
			func_566(uParam1->f_6);
		}
	}
	if (!func_559(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_567(uParam1->f_10) == 0 || func_568(uParam1->f_10) == 0) || func_569(uParam1->f_10) == 0)
			{
				func_570(uParam1->f_10);
			}
			func_571(uParam1->f_10);
			func_572(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_558(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_559(iVar1))
	{
		bVar3 = true;
		if (func_560(iVar1))
		{
			bVar4 = true;
		}
		if (func_561(iVar1))
		{
			iVar5 = 1;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_0x083D497D57B7400F(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!func_475(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (func_573(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (iVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::IS_PED_READY_TO_RENDER(iVar2))
			{
				*uParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_0xB48050D326E9A2F3(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_0xD2CB0FB0FDCB473D(iVar6, 0);
				}
			}
			Var8 = { func_574(uParam1->f_10) };
			Var10 = { func_575() };
			func_576(iVar2, &Var8, &Var10, 0);
			PLAYER::_0xD2CB0FB0FDCB473D(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_577(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_578(uParam1->f_10);
		if (uParam1->f_2 && !func_475(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_0x0348469DAA17576C(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::_0x9587913B9E772D29(iVar2, 0);
		}
		*uParam0 = 2;
		return iVar2;
	}
	func_579(uParam1->f_10);
	if (func_577(uParam1->f_10))
	{
		iVar16 = func_580(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	*uParam0 = 2;
	return iVar2;
}

void func_239(var uParam0)
{
	COMPANION::_0x0F1CD8CA9E65D5F6(func_50(), *uParam0);
	COMPANION::_0xD55A871E1CE3481B(func_50(), uParam0->f_37);
}

int func_240(var uParam0)
{
	if (func_95(&Global_1935630, 2048))
	{
		return 0;
	}
	if (func_581(uParam0))
	{
		CAM::DO_SCREEN_FADE_IN(500);
		func_582(0);
		HUD::DISPLAY_HUD(true);
		MAP::DISPLAY_RADAR(true);
		return 1;
	}
	return 0;
}

bool func_241()
{
	return (func_583() || func_584());
}

void func_242(bool bParam0)
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
	func_585(0f);
	Global_1935436->f_11 = 1;
	if (func_124())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_586();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_243(int iParam0)
{
	switch (func_115())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

int func_244(vector3 vParam0, float fParam3)
{
	int iVar0;

	if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) != 1)
	{
		func_587(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_588(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_589(0, 0);
		if (func_437(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_590(1, 0);
		}
	}
	else
	{
		func_590(1, 0);
	}
	func_101(0);
	func_591(0, vParam0, fParam3);
	return 1;
}

int func_245(var uParam0)
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
			func_592(*uParam0, &(uParam0->f_42), uParam0->f_37, uParam0->f_41);
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_42) && VOLUME::IS_POINT_IN_VOLUME(uParam0->f_42, Global_36))
	{
		return 1;
	}
	return 0;
}

int func_246(var uParam0)
{
	if (!VOLUME::IS_POINT_IN_VOLUME(uParam0->f_42, Global_36))
	{
		return 1;
	}
	return 0;
}

int func_247(var uParam0)
{
	return uParam0->f_9;
}

bool func_248(int iParam0)
{
	return iParam0 > -1;
}

int func_249(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

void func_250(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 - (Global_1900383->f_316 && iParam0));
}

void func_251(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_252(int iParam0)
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
	func_593(iParam0, 0, 0);
}

int func_253(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_594(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_50(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_50(), iVar3);
		if (func_595(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_254()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = func_596(iVar0);
		iVar2 = func_596(iVar0 + 1);
		if (!func_58(iVar1))
		{
			if (func_58(iVar2))
			{
				(*Global_1359489)[iVar0] = iVar2;
				(*Global_1359489)[iVar0 + 1] = -1;
			}
		}
		iVar0++;
	}
}

void func_255(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_248(iParam0))
		{
			return;
		}
	}
	func_249(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

var func_256()
{
	return Global_1894899->f_2;
}

void func_257(int iParam0, bool bParam1)
{
	if (!func_248(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_597(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_73(iParam0, 1, 0);
		}
	}
	func_73(iParam0, 16, bParam1);
}

void func_258(int iParam0)
{
	func_59(iParam0, 36, 1);
}

int func_259(int iParam0, bool bParam1)
{
	if (!func_58(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_598(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

bool func_260(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_248(iParam0))
		{
			return false;
		}
	}
	func_249(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

void func_261(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_58(iParam0))
	{
		iVar1 = func_75(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_599(iParam0);
		}
	}
	if (func_260(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_75(iParam0), 137, true);
	}
}

void func_262(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_248(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_255(iParam0, 50, 1);
		func_255(iParam0, 48, 1);
		func_255(iParam0, 49, 1);
		func_255(iParam0, 51, 1);
		func_255(iParam0, 52, 1);
		func_255(iParam0, 54, 1);
		func_255(iParam0, 55, 1);
	}
	else
	{
		func_59(iParam0, 50, 1);
		func_59(iParam0, 48, 1);
		func_59(iParam0, 49, 1);
		func_59(iParam0, 51, 1);
		if (bParam3)
		{
			func_59(iParam0, 54, 1);
		}
		else
		{
			func_255(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_59(iParam0, 52, 1);
			if (bParam3)
			{
				func_59(iParam0, 55, 1);
			}
		}
		else
		{
			func_255(iParam0, 52, 1);
			if (!bParam3)
			{
				func_255(iParam0, 55, 1);
			}
		}
	}
}

void func_263(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;

	if (!func_58(iParam0))
	{
		return;
	}
	if (func_74(iParam0))
	{
		if (!func_10(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_260(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_259(iParam0, 0);
	if (!MISC::_0x716F17F8A0419F95(uVar0))
	{
		return;
	}
	iVar1 = func_75(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_600(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::_0x0C3CB2E600C8977D(iVar1, 1)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::_0xF1C03A5352243A30(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, 1, 1);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		func_59(iParam0, 2, 1);
	}
	else
	{
		func_601(iParam0);
		func_59(iParam0, 1, 1);
	}
}

void func_264(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_58(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (&Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

int func_265(int iParam0)
{
	if (!func_58(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_70))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70 = 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
}

void func_266(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_248(iParam1))
	{
		return;
	}
	iVar0 = func_265(iParam1);
	if (func_602(iParam1))
	{
		if (!func_603(iParam1))
		{
			return;
		}
	}
	func_255(iParam1, 39, 1);
	func_604(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_604(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_604(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_59(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_605(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_267(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1894360593:
			return 1;
		case -1891229662:
			return 10;
		case -1348173149:
			return 17;
		case -1220302226:
			return 14;
		case -839878969:
			return 7;
		case -709866131:
			return 16;
		case -668333238:
			return 11;
		case -589165916:
			return 0;
		case -360730635:
			return 8;
		case -103573613:
			return 4;
		case 99378894:
			return 12;
		case 194099983:
			return 9;
		case 581819093:
			return 2;
		case 673012160:
			return 13;
		case 687859577:
			return 3;
		case 1202375449:
			return 5;
		case 2038046186:
			return 6;
		case 2061320468:
			return 15;
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

int func_268(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_4;
	}
	return 0;
}

void func_269(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || uParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && uParam1));
	}
}

bool func_270(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_248(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

int func_271(int iParam0)
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

int func_272(int iParam0)
{
	return iParam0 & 31;
}

int func_273(int iParam0)
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

int func_274(int iParam0)
{
	int iVar0;

	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_275(int iParam0)
{
	struct<5> Var0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*(Global_1898164->f_1[0 /*5*/]) = { Var0 };
		return 1;
	}
	*(Global_1898164->f_1[iParam0 /*5*/]) = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_606(iParam0, Global_1898164->f_162);
	return 1;
}

void func_276(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_607(iParam0);
	}
	else
	{
		func_608(iParam0, iParam1);
	}
	func_609();
}

void func_277(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = MISC::GET_GAME_TIMER();
	func_610(iParam0, iParam1, bParam2);
}

bool func_278(int iParam0)
{
	return iParam0 != 0;
}

int func_279()
{
	return -1904156936;
}

int func_280(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_77(iParam0))
	{
		return 0;
	}
	switch (func_80(iParam0))
	{
		case 1:
			iVar0 = func_120(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_120(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return 0;
}

int func_281()
{
	return 166188472;
}

int func_282()
{
	return 2015838421;
}

int func_283()
{
	return 207908017;
}

var func_284(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vector3 vVar0;
	var uVar3;

	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _NAMESPACE76::_0x9F2CC2439A04E7BA(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_285(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	var uVar3;

	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _NAMESPACE76::_0x815C4065AE6E6071(uParam0, &Var0, iParam3);
	return uVar3;
}

int func_286()
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

int func_287(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_288(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_289(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_290()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_291(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_292(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

int func_293(int iParam0)
{
	if (!func_77(iParam0))
	{
		return 0;
	}
	switch (func_80(iParam0))
	{
		case 1:
			switch (func_120(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return 1;
			}
			break;
		case 8:
			switch (func_120(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return 1;
			}
			break;
	}
	return 0;
}

void func_294(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;

	uVar2 = func_611(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_346(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(uVar2, iVar1);
		}
		iVar0++;
	}
	func_613(func_612(iParam0), 6);
}

void func_295(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;

	uVar2 = func_611(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_346(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(uVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_614(func_612(iParam0), 6);
}

int func_296(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_615(iParam0);
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

int func_297(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			func_312(Global_40.f_4283.f_6[iVar0 /*5*/], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_298(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_2;
	}
	return -1;
}

void func_299(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

int func_300(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_301()
{
	return Global_40.f_11095.f_35;
}

void func_302(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_616(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_303(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_303(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam0 == 0 && Global_43890 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_616(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_617(1);
	}
}

bool func_304(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_305()
{
	int iVar0;
	int iVar1;

	iVar0 = func_618(((*Global_1347702)[9 /*49*/])->f_15);
	iVar1 = func_618(((*Global_1835011)[69 /*74*/])->f_1);
	if (func_619(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

int func_306(int iParam0)
{
	if (!func_620(iParam0))
	{
		return 0;
	}
	return func_146(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_307(int iParam0)
{
	if (func_80(iParam0) == 1)
	{
		return func_120(iParam0);
	}
	return -1;
}

int func_308(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_621(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_622(iVar6);
	}
	return iVar5;
}

int func_309(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_623(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_310(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_624(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 0;
		case 7:
			return 0;
		case 9:
			return 1;
		case 10:
			return 0;
		case 11:
			return 1;
		case 8:
			return 1;
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
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_312(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_310(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_313(2, *uParam0);
		}
		else
		{
			func_314(2, *uParam0);
		}
	}
	func_625(uParam0);
}

void func_313(int iParam0, int iParam1)
{
	if (Global_1357549->f_1483 >= 25)
	{
		Global_1357549->f_1483 = 0;
	}
	Global_1357549->f_1407[Global_1357549->f_1483 /*3*/] = iParam0;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_2 = 0;
	Global_1357549->f_1483++;
}

void func_314(int iParam0, int iParam1)
{
	if (Global_1357549->f_1406 >= 50)
	{
		return;
	}
	if (&Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] != 0)
	{
		return;
	}
	Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] = iParam0;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_2 = 0;
	Global_1357549->f_1403++;
	Global_1357549->f_1406++;
}

int func_315(int iParam0)
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

int func_316(int iParam0)
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

void func_317(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
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

	iVar0 = func_626();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_627(iParam0);
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
	if (func_344(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_628())
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
	Global_40.f_11095.f_35 = func_129(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_626();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_629(iVar1);
		func_631(func_630(), 0, 4000);
		func_632(Global_40.f_11095.f_35);
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
		func_633(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_359(func_119(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iPar