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
	int iLocal_27 = 0;
	int iLocal_28 = 0;
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
	var uLocal_134 = 0;
	char* sLocal_135 = NULL;
	char* sLocal_136 = NULL;
	char* sLocal_137 = NULL;
	char* sLocal_138 = NULL;
	char* sLocal_139 = NULL;
	char* sLocal_140 = NULL;
	char* sLocal_141 = NULL;
	vector3 vLocal_142 = { 0f, 0f, 0f };
	int iLocal_145 = 0;
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
	int iLocal_161[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	struct<1334> Local_195 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1077936128, 1065353216, 4, 8, 50, 10, 200, 0, 0, 0, 0, 0, 0, 0, 3, 10, 20, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1053609165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = -1;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 2;
	var uLocal_1537 = 1;
	var uLocal_1538 = 1;
	var uLocal_1539 = 1;
	var uLocal_1540 = 0;
	var uLocal_1541 = 1;
	var uLocal_1542 = 2;
	var uLocal_1543 = 2;
	var uLocal_1544 = 3;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 3;
	var uLocal_1548 = 1;
	var uLocal_1549 = 3;
	var uLocal_1550 = 3;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	int iLocal_1553 = 0;
	int iLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	float fLocal_1561 = 0f;
	int iLocal_1562 = 0;
	int iLocal_1563 = 0;
	int iLocal_1564 = 0;
	var uLocal_1565[3] = { 0, 0, 0 };
	var uLocal_1569[3] = { 0, 0, 0 };
	int iLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = -1;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 2;
	var uLocal_1583 = 1;
	var uLocal_1584 = 1;
	var uLocal_1585 = 1;
	var uLocal_1586 = 0;
	var uLocal_1587 = 1;
	var uLocal_1588 = 2;
	var uLocal_1589 = 2;
	var uLocal_1590 = 3;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 3;
	var uLocal_1594 = 1;
	var uLocal_1595 = 3;
	var uLocal_1596 = 3;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = -1;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 2;
	var uLocal_1608 = 1;
	var uLocal_1609 = 1;
	var uLocal_1610 = 1;
	var uLocal_1611 = 0;
	var uLocal_1612 = 1;
	var uLocal_1613 = 2;
	var uLocal_1614 = 2;
	var uLocal_1615 = 3;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 3;
	var uLocal_1619 = 1;
	var uLocal_1620 = 3;
	var uLocal_1621 = 3;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	bool bLocal_1624 = false;
	char* sLocal_1625 = NULL;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	int iLocal_1630 = 0;
	struct<9> Local_1631 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	int iLocal_1647 = 0;
	var uLocal_1648 = 2;
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
	var uLocal_1681 = 2;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
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
	var uLocal_1714 = 10;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
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
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
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
	var uLocal_1832 = 0;
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
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 2;
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
	var uLocal_1908 = 3;
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
	sLocal_135 = "fishing01_cme_shot1";
	sLocal_136 = "fishing01_cme_shot2";
	sLocal_137 = "fishing02_goto_a";
	sLocal_138 = "fishing02_return_a";
	sLocal_139 = "fishing02_down_to_lake";
	sLocal_140 = "fishing01_Jav_goto_fishing_rock";
	vLocal_142 = { 1182.287f, -580.2337f, 67.1474f };
	fLocal_1561 = 50f;
	iLocal_1562 = 16;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
	{
		func_1(&uScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2(&uScriptParam_0, &uLocal_1648);
	while (!func_3(&uScriptParam_0))
	{
		func_5(&uScriptParam_0, &uLocal_1648, func_4());
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
				func_42(&uLocal_1648);
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
	if (MAP::DOES_BLIP_EXIST(iLocal_145))
	{
		MAP::REMOVE_BLIP(&iLocal_145);
		MAP::CLEAR_GPS_CUSTOM_ROUTE();
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 364, false);
	func_61(1);
	PLAYER::_0x0C6B89876262A99D(PLAYER::GET_PLAYER_INDEX(), func_62(uParam0->f_2));
	func_63(0, 0);
	func_64(uParam0->f_2, 0);
	AUDIO::STOP_PED_SPEAKING(func_62(uParam0->f_2), false);
	func_65();
	STREAMING::END_SRL();
	func_66(1, 0);
	if (func_67(&uLocal_146))
	{
		func_68(&uLocal_146);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_27))
	{
		func_69(iLocal_27, 0);
	}
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_137);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_138);
	func_70(1);
	if (func_71(2))
	{
		func_73(func_72(2), 2, 1, 0, 0);
	}
	if (func_10(2))
	{
		func_74(2, 0, 0, 0, 40f, 1, 1, 0, 0, 0, 0);
	}
	func_76(uParam0, func_75(Local_195.f_95, 512));
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
	func_77(iParam0, 8, 0);
}

bool func_10(int iParam0)
{
	if (!func_58(iParam0))
	{
		return false;
	}
	if (!func_78(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_11(var uParam0, int iParam1)
{
	if (uParam0->f_8 > 0f && uParam0->f_14 == 1)
	{
		func_74(iParam1, 0, 0, 0, uParam0->f_8, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		AUDIO::STOP_PED_SPEAKING(func_62(iParam1), false);
		func_74(iParam1, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	}
}

void func_12()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_58(iVar0) && func_79(iVar0, 1))
		{
			func_80(iVar0);
		}
		iVar0++;
	}
}

bool func_13(int iParam0)
{
	int iVar0;

	iVar0 = func_81(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_14(int iParam0)
{
	int iVar0;

	if (!func_82(iParam0))
	{
		return;
	}
	if (iParam0 != func_83(0))
	{
		return;
	}
	if (func_84(iParam0) == 0)
	{
	}
	iVar0 = func_85(iParam0);
	if (func_86(iParam0) == 3)
	{
		if (func_84(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_84(iParam0)))
		{
			if (func_85(iParam0) != 1 && func_85(iParam0) != 8)
			{
				func_87(func_85(iParam0), func_84(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_88(iParam0);
	func_32(1);
	func_33(0);
	func_89(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_90(1);
			func_91(15, 0, 1);
			break;
		case 4:
			func_91(10, 0, 1);
			break;
		case 8:
			func_91(10, 0, 1);
			break;
		case 9:
			func_91(10, 0, 1);
			break;
		case 2:
			func_91(10, 0, 1);
			break;
		case 6:
			func_91(10, 0, 1);
			break;
		case 5:
			func_91(10, 0, 1);
			break;
	}
	func_92(1);
}

void func_15(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_93(Global_1347343->f_11, 536870912))
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
	if (func_94() >= 2)
	{
		if (!func_93(Global_1347343->f_11, 16384))
		{
			func_43(&(Global_1347343->f_11), 8);
		}
		func_95(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_96(Global_1935630, 2048);
	func_97(bParam5);
}

void func_16(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_82(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_13(iParam0) && !func_98(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_84(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_13(iParam0))
	{
		iParam2 = -1;
	}
	if (func_86(iParam0) == 3 || (func_86(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_84(iParam0))))
	{
		func_87(func_85(iParam0), func_84(iParam0), iParam2);
		if ((!func_82(Global_1572864->f_8) && !func_99(0, 1, 0)) && !func_100(&Global_1935630, 32768))
		{
			iVar0 = func_101(iParam0);
			if (iVar0 != -1)
			{
				func_102(0);
			}
			else if (func_85(iParam0) == 8)
			{
				iVar0 = func_103();
				if (iVar0 != -1)
				{
					func_102(0);
				}
			}
		}
	}
	func_89(iParam0, 0);
	if (func_83(0) == iParam0)
	{
		func_32(1);
		func_33(0);
		func_92(1);
	}
	func_104(iParam0, 1);
	func_88(iParam0);
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
	func_105(0);
	func_106(0);
	func_107(0);
	func_108(0);
	func_109(0);
	func_95(1f);
}

void func_19(var uParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	char cVar2[64];
	int iVar10;

	if (!func_110(uParam0->f_1))
	{
		return;
	}
	sVar0 = func_111(uParam0->f_1);
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar1))
	{
		StringCopy(&cVar2, MISC::_CREATE_VAR_STRING(2, func_112(*uParam0)), 64);
		StringConCat(&cVar2, " - ", 64);
		StringConCat(&cVar2, MISC::_CREATE_VAR_STRING(2, func_113(uParam0->f_2, 0)), 64);
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar1, Global_36, MISC::GET_HASH_KEY(func_112(*uParam0)), func_114(uParam0->f_1), iVar10);
		UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar1, &cVar2);
		UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar1, func_115(*uParam0), 676312963);
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar1, func_116(uParam0->f_1), func_117(uParam0->f_1));
	}
	else if (bParam2)
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar1);
		return;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar1, func_114(uParam0->f_1), "", bParam1, 0, 0);
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

	if (!func_82(iParam0))
	{
		return;
	}
	if (func_81(iParam0) == 4)
	{
		func_119(iParam0, func_118());
		if (!func_86(iParam0) == 5 && !func_86(iParam0) == 6)
		{
			if (bParam3)
			{
				func_89(iParam0, 6);
			}
			else
			{
				func_89(iParam0, 5);
			}
			func_88(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_32(1);
	}
	iVar0 = func_85(iParam0);
	bVar1 = func_120() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_121(0, 2);
		if (!bVar1 && bParam1)
		{
			func_122();
		}
	}
	else
	{
		func_33(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_123(iParam0);
	}
	else
	{
		Var2 = { func_124(-1876607090) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_20(32768))
		{
			Var4 = { func_124(773573510) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_86(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_125(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[76 /*74*/])->f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_125(iParam0) /*74*/])->f_8), true);
						}
					}
					else if ((func_125(iParam0) != 95 && func_125(iParam0) != 82) && !func_126(((*Global_1347702)[func_125(iParam0) /*49*/])->f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1347702)[func_125(iParam0) /*49*/])->f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_125(iParam0) /*74*/])->f_8), true);
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
		func_128(func_125(iParam0), iVar6, func_127());
	}
	else if (iVar0 == 8)
	{
		func_130(func_125(iParam0), iVar6, func_127(), func_129());
	}
	if (!func_86(iParam0) == 5 && !func_86(iParam0) == 6)
	{
		iVar9 = func_131(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_132(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_133(func_125(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_134((iVar10 - 20), 0, iVar10);
					iVar11 = func_134((iVar11 - 10), 0, iVar11);
				}
				func_90(1);
				func_91(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_91(45, 0, 1);
				break;
			case 8:
				iVar10 = func_135(func_125(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_134((iVar10 - 20), 0, iVar10);
					iVar11 = func_134((iVar11 - 10), 0, iVar11);
				}
				func_91(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				if (func_136(func_125(iParam0)))
				{
					func_137(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_91(120, 0, 1);
				break;
			case 2:
				func_91(120, 0, 1);
				break;
			case 6:
				func_91(func_139(func_138(iParam0)), 0, 1);
				break;
			case 5:
				func_91(120, 0, 1);
				break;
		}
	}
	func_104(iParam0, 1);
	func_119(iParam0, func_118());
	func_88(iParam0);
	if ((!func_86(iParam0) == 0 && bParam1) && func_120() == -1)
	{
		iVar12 = func_101(iParam0);
		if (iVar12 != -1)
		{
			func_102(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_103();
			if (iVar12 != -1)
			{
				func_102(0);
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
				switch (func_125(iParam0))
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
				if (func_140(func_125(iParam0)) && func_126(((*Global_1347702)[func_125(iParam0) /*49*/])->f_12, 4))
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
				if (func_125(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_141();
				}
				break;
			case 8:
				if (func_125(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_141();
				}
				break;
		}
	}
	if (!func_86(iParam0) == 5 && !func_86(iParam0) == 6)
	{
		if (bParam3)
		{
			func_89(iParam0, 6);
		}
		else
		{
			func_89(iParam0, 5);
		}
		func_88(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_125(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::MAP_DISCOVER_REGION(-1753910767);
						break;
					case 1:
						func_142();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_143(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_144(-1267972061);
						func_143(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_144(1619534881);
						func_143(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_144(-755457379);
						func_143(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_144(1015404643);
						func_143(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_144(-1724192342);
						func_143(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_144(1310680212);
						func_143(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_144(-566881549);
						func_143(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_144(-1753730528);
						func_143(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_144(147796381);
						func_143(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_144(-378547623);
						func_143(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_144(829545206);
						func_143(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_144(891318243);
						func_143(joaat("weapon_kit_camera"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_145();
						func_146(967523420);
						func_147();
						func_148();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_113(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131);
						break;
					case 15:
						func_143(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1231074654))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1231074654, true);
							func_149(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1880205078))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1880205078, true);
							func_149(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_150(304805134, 1, 1);
						if (!func_151(((*Global_1347702)[21 /*49*/])->f_15, 1))
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
						func_152();
						break;
					case 26:
						func_153();
						break;
					case 17:
						func_154(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_155())
						{
							func_156(joaat("weapon_repeater_evans"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_157(-514575035, -1))
						{
							iVar15 = func_118();
							func_158(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_159(-514575035, iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_155())
						{
							func_156(joaat("weapon_revolver_lemat"));
						}
						break;
					case 34:
						if (func_155())
						{
							func_156(joaat("weapon_revolver_doubleaction_gambler"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_160();
						break;
					case 37:
						func_161();
						if (func_162())
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
						func_163();
						break;
					case 43:
						func_164();
						break;
					case 44:
						if (!func_151(((*Global_1347702)[82 /*49*/])->f_15, 1))
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
						if (!func_151(((*Global_1347702)[83 /*49*/])->f_15, 1))
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
						func_165();
						break;
					case 59:
						func_166();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_167();
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
						func_168();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1673898385))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1673898385, true);
							func_149(451, 0);
						}
						if (!func_169(-1992824800))
						{
							if (func_169(1520110311))
							{
								iVar16 = func_118();
								func_158(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_159(1937177603, iVar16, 1);
							}
						}
						if (func_170(4))
						{
							if (!func_171(684296857, 1, 0))
							{
								iVar17 = func_118();
								func_158(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_159(-1439688706, iVar17, 1);
							}
						}
						func_143(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_143(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_172(89200);
						func_172(2300);
						func_172(2300);
						break;
					case 68:
						func_173();
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
						func_174();
						func_172(-139100);
						break;
					case 69:
						if (func_151(((*Global_1347702)[9 /*49*/])->f_15, 1))
						{
							func_172(-6000);
						}
						break;
					case 70:
						func_172(23400);
						func_172(1900);
						func_172(-15000);
						break;
					case 71:
						func_172(-5500);
						break;
				}
				break;
			case 8:
				switch (func_125(iParam0))
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
						func_175();
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
						func_176();
						break;
					case 66:
						func_177();
						func_178();
						break;
					case 67:
						if (!func_179(6))
						{
							func_180(6);
						}
						if (!func_179(3))
						{
							func_180(3);
						}
						if (func_155())
						{
							func_156(joaat("weapon_pistol_m1899"));
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
						if (func_151(((*Global_1835011)[69 /*74*/])->f_1, 1))
						{
							func_181(0);
							func_172(40500);
						}
						else
						{
							func_181(0);
							func_172(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_125(iParam0))
				{
					case 0:
						switch (func_138(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_182(iParam0);
		func_183();
		switch (iVar0)
		{
			case 1:
				switch (func_125(iParam0))
				{
					case 4:
						func_184(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_184(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_184(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_184(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_184(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_184(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_184(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_185(iParam0);
						func_184(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_184(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_184(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_171(-2046502963, 1, 0))
						{
							func_143(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_184(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_184(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_184(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_185(iParam0) == 0)
						{
							func_184(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_184(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_126(((*Global_1347702)[func_125(iParam0) /*49*/])->f_12, 536870912))
				{
					func_186(11, 1);
				}
				switch (func_125(iParam0))
				{
					case 109:
						func_184(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_186(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_184(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_184(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_184(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_184(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_187(0, 10, 11, 2116153146))
				{
					func_184(iParam0, func_185(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_187(0, 7, 11, -379687487))
				{
					func_184(iParam0, func_188(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_187(0, 8, 11, -1386089015))
				{
					func_184(iParam0, func_188(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_187(0, 11, 11, -1952009645))
				{
					func_184(iParam0, func_188(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_187(0, 12, 11, 2065895756))
				{
					func_184(iParam0, func_188(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_86(iParam0) == 0)
			{
				if (func_84(iParam0) == 0)
				{
				}
				else if (STATS::STATSTRACKER_IS_INITIALIZED(func_84(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_87(func_85(iParam0), func_84(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_125(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_190(func_189(Global_1879514->f_1));
						if (iVar0 == 8 && func_125(iParam0) == 58)
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
						if (func_140(func_125(iParam0)) && func_126(((*Global_1347702)[func_125(iParam0) /*49*/])->f_12, 1))
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
			func_191(bParam2, iVar20);
		}
	}
	func_92(1);
	if ((bVar13 || func_141()) && (func_85(iParam0) == 1 || func_85(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_22(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (STATS::STATSTRACKER_IS_INITIALIZED(func_84(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_87(func_85(iParam0), func_84(iParam0), iVar0);
		if (func_20(32768))
		{
			iVar1 = func_85(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_187(0, 10, 11, 2116153146)))
			{
				Global_1898438 = MISC::GET_GAME_TIMER();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_24();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_98(iParam0))
	{
		func_16(iParam0, 0, 2);
	}
	else if (func_13(iParam0))
	{
		if (!func_86(iParam0) == 5 && !func_86(iParam0) == 6)
		{
			if (bParam1)
			{
				func_89(iParam0, 6);
			}
			else
			{
				func_89(iParam0, 5);
			}
			func_88(iParam0);
		}
	}
	switch (func_85(iParam0))
	{
		case 1:
			switch (func_125(iParam0))
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
			switch (func_125(iParam0))
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
		switch (func_192())
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

	iVar0 = func_193(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_194(iVar0))
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

	func_195(4112);
	func_196(6);
	vVar2 = { func_197(((*Global_2621440)[0 /*12065*/])->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_198(vVar2, uVar1, uVar0, 0);
	func_199(vVar2);
	Global_40.f_9.f_15 = func_200(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_26(int iParam0)
{
	if (func_120() != -1)
	{
		return;
	}
	func_195(32);
	if (iParam0 == 0)
	{
		func_195(16);
	}
	else if (iParam0 == 1)
	{
		func_195(8);
	}
	func_201();
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
	StringConCat(&cVar0, func_202(iParam0), 64);
	return cVar0;
}

struct<8> func_28(int iParam0)
{
	struct<8> Var0;

	if (!func_58(iParam0))
	{
		return Var0;
	}
	StringCopy(&Var0, func_202(iParam0), 64);
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
	if (func_75(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_75(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_75(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_75(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_75(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_75(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return 0;
		}
	}
	if (func_75(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_75(iVar0, 256))
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
	switch (func_120())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

int func_31(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_200(vParam0, 1);
	if (iVar0 == func_203())
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
		func_96(Global_1935630, 4194304);
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
	if (!bParam0 && func_204(373691918))
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
	if (func_205(uParam0->f_44))
	{
		func_206(&(uParam0->f_44), 1, 1);
	}
	if (func_67(&(uParam0->f_45)))
	{
		func_68(&(uParam0->f_45));
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
		if (!func_207(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_208(uParam0, 0))
			{
				if (func_209(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_210(uParam0, 1, &iVar0))
					{
					}
					if (func_211(uParam0, 3, &cVar2))
					{
					}
					if (func_210(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_210(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_210(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_210(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_210(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 2 && uParam0->f_273 < 2)
						{
							if (!func_212(uParam0, &cVar2, uParam0->f_273))
							{
								*((*uParam0)[uParam0->f_273 /*16*/]) = { cVar2 };
								func_213((*uParam0)[uParam0->f_273 /*16*/], 1048576);
								uParam0->f_273++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 2 && uParam0->f_274 < 2)
						{
							*(uParam0->f_33[uParam0->f_274 /*16*/]) = { cVar2 };
							func_213(uParam0->f_33[uParam0->f_274 /*16*/], 1048576);
							uParam0->f_274++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 10 && uParam0->f_275 < 10)
						{
							*(uParam0->f_66[uParam0->f_275 /*16*/]) = { cVar2 };
							func_213(uParam0->f_66[uParam0->f_275 /*16*/], 1048576);
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
						if (!func_212(&(uParam0->f_227), &cVar2, uParam0->f_276))
						{
							*(uParam0->f_227[uParam0->f_276 /*16*/]) = { cVar2 };
							func_213(uParam0->f_227[uParam0->f_276 /*16*/], 1048576);
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
			if (func_208(uParam0, 12))
			{
				if (func_210(uParam0, 13, &iVar0))
				{
				}
				if (func_210(uParam0, 14, &iVar1))
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
		func_214(uParam0);
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
	if (!func_29(func_62(uParam0->f_2), 0))
	{
		func_60(&uLocal_152, 0);
		if (func_215(&uLocal_152, 1.6f))
		{
			StringCopy(&(uParam0->f_15), "FISH01_J_DEAD", 24);
			uParam0->f_14 = 2;
			AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_FAIL");
			return 1;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_62(uParam0->f_2), Global_35, 1, 1))
	{
		func_60(&uLocal_152, 0);
		if (func_215(&uLocal_152, 1.6f))
		{
			StringCopy(&(uParam0->f_15), "FISH01_J_ATK", 24);
			uParam0->f_14 = 2;
			AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_FAIL");
			return 1;
		}
	}
	if (((!func_29(iLocal_28, 0) || PED::IS_PED_INJURED(iLocal_28)) || TASK::IS_PED_IN_WRITHE(iLocal_28)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_28))
	{
		func_60(&uLocal_152, 0);
		if (func_215(&uLocal_152, 1.6f))
		{
			StringCopy(&(uParam0->f_15), "FISH01_JH_DEAD", 24);
			uParam0->f_14 = 2;
			AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_FAIL");
			return 1;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_28, Global_35, 1, 1))
	{
		func_60(&uLocal_152, 0);
		if (func_215(&uLocal_152, 1.6f))
		{
			StringCopy(&(uParam0->f_15), "FISH01_JH_ATK", 24);
			uParam0->f_14 = 2;
			AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_FAIL");
			return 1;
		}
	}
	if (((!func_29(iLocal_27, 0) || PED::IS_PED_INJURED(iLocal_27)) || TASK::IS_PED_IN_WRITHE(iLocal_27)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_27))
	{
		func_60(&uLocal_152, 0);
		if (func_215(&uLocal_152, 1.6f))
		{
			StringCopy(&(uParam0->f_15), "FISH01_PH_DEAD", 24);
			uParam0->f_14 = 2;
			AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_FAIL");
			return 1;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_27, Global_35, 1, 1))
	{
		func_60(&uLocal_152, 0);
		if (func_215(&uLocal_152, 1.6f))
		{
			StringCopy(&(uParam0->f_15), "FISH01_PH_ATK", 24);
			uParam0->f_14 = 2;
			AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_FAIL");
			return 1;
		}
	}
	if (Local_195.f_3 >= 3 && Local_195.f_3 <= 8)
	{
		if (!func_75(Local_195.f_83, 2))
		{
			if (func_216(Global_35, vLocal_142, 1) < 20f && func_217("FISH01_O_RET"))
			{
				func_218("FISH01_O_FFSL");
				func_219("FISH01_O_FFSL", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_220("FISH01_O_RET", 0);
			}
			else if (func_216(Global_35, vLocal_142, 1) > 40f && !func_217("FISH01_O_RET"))
			{
				func_218("FISH01_O_RET");
				func_219("FISH01_O_RET", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_220("FISH01_O_RET", 1);
			}
			else if (func_216(Global_35, vLocal_142, 1) > 55f)
			{
				func_221(&(Local_195.f_83), 2);
			}
		}
	}
	if (func_75(Local_195.f_83, 1))
	{
		func_60(&uLocal_152, 0);
		if (func_215(&uLocal_152, 1.6f))
		{
			StringCopy(&(uParam0->f_15), "FISHCOMP_FAIL2", 24);
			uParam0->f_14 = 2;
			AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_FAIL");
			return 1;
		}
	}
	if (func_75(Local_195.f_83, 2))
	{
		func_60(&uLocal_152, 0);
		if (func_215(&uLocal_152, 1.6f))
		{
			StringCopy(&(uParam0->f_15), "FISHCOMP_FAIL2", 24);
			uParam0->f_14 = 2;
			AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_FAIL");
			return 1;
		}
	}
	if (Local_195.f_3 >= 4 && Local_195.f_3 <= 8)
	{
		if (((PED::IS_PED_SHOOTING(Global_35) && !WEAPON::_0x30E7C16B12DA8211(func_222(Global_35, 0, 1, 0))) && !WEAPON::IS_WEAPON_BOW(func_222(Global_35, 0, 1, 0))) || (func_67(&uLocal_152) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_15), "FSH_SCARE")))
		{
			if (!func_67(&uLocal_152))
			{
				func_60(&uLocal_152, 0);
				StringCopy(&(uParam0->f_15), "FSH_SCARE", 24);
			}
			if (func_215(&uLocal_152, (1.6f * 1.75f)))
			{
				StringCopy(&(uParam0->f_15), "FSH_SCARE", 24);
				uParam0->f_14 = 2;
				AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_FAIL");
				return 1;
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_15), "FSH_SCARE"))
		{
			StringCopy(&(uParam0->f_15), "", 24);
		}
	}
	if ((func_223(PLAYER::PLAYER_ID(), 1, 0, 1) || func_224(512)) && !func_75(Local_195.f_83, 4))
	{
		func_221(&(Local_195.f_83), 4);
	}
	if (func_75(Local_195.f_83, 4))
	{
		func_60(&uLocal_152, 0);
		if (func_215(&uLocal_152, (1.6f * 2f)))
		{
			StringCopy(&(uParam0->f_15), "FISH01_FAIL_LAW", 24);
			uParam0->f_14 = 2;
			AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_FAIL");
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
	if (!func_29(func_62(uParam0->f_2), 0))
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
		func_225(0);
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
	func_226(3, &(uParam0->f_66));
}

void func_43(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_44(var uParam0)
{
	if (!func_29(func_62(uParam0->f_2), 0))
	{
		return;
	}
	if (!func_67(&(uParam0->f_48)))
	{
		func_60(&(uParam0->f_48), 0);
	}
	switch (uParam0->f_13)
	{
		case 2:
			if (!func_227(&(uParam0->f_10), 1))
			{
				if (!PED::IS_PED_ON_FOOT(Global_35))
				{
					if (!uParam0->f_51)
					{
						uParam0->f_51 = 1;
						func_228(&(uParam0->f_48));
					}
					else if (func_229(&(uParam0->f_48)) > 5f)
					{
						func_230(&(uParam0->f_10), 1, 1);
						func_231(uParam0, "departLine", 0, 0, 0, -1);
						func_228(&(uParam0->f_48));
					}
				}
			}
			break;
		case 3:
			if (!func_227(&(uParam0->f_10), 1))
			{
				if (func_229(&(uParam0->f_48)) > 4f)
				{
					func_230(&(uParam0->f_10), 1, 1);
					func_231(uParam0, "departLine", 0, 0, 0, -1);
					func_228(&(uParam0->f_48));
				}
				return;
			}
			if (!func_227(&(uParam0->f_10), 2))
			{
				if (func_216(Global_35, func_232(), 1) > 150f)
				{
					func_230(&(uParam0->f_10), 2, 1);
					func_231(uParam0, "rideBanter", 0, 0, 0, -1);
				}
			}
			break;
		case 4:
			break;
	}
}

int func_45(var uParam0)
{
	func_233(uParam0, &Local_195);
	switch (Local_195.f_3)
	{
		case 0:
			func_235(uParam0, func_234(0), func_234(1), 0, 1);
			func_236(&(Local_195.f_3), 1);
			break;
		case 1:
			if (func_237(uParam0))
			{
				func_236(&(Local_195.f_3), 2);
			}
			break;
		case 2:
			if (func_238(uParam0))
			{
				func_236(&(Local_195.f_3), 3);
			}
			break;
		case 3:
			if (func_239(uParam0))
			{
				func_236(&(Local_195.f_3), 4);
			}
			break;
		case 4:
			if (func_240(uParam0))
			{
				func_236(&(Local_195.f_3), 5);
			}
			break;
		case 5:
			if (func_241(uParam0))
			{
				func_236(&(Local_195.f_3), 6);
			}
			break;
		case 6:
			if (func_242(uParam0))
			{
				func_236(&(Local_195.f_3), 7);
			}
			break;
		case 7:
			if (func_243(uParam0))
			{
				func_236(&(Local_195.f_3), 8);
			}
			break;
		case 8:
			if (func_244(uParam0))
			{
				Local_195.f_7 = 0;
				Local_195.f_339 = { Global_36 };
				func_236(&(Local_195.f_3), 9);
			}
			break;
		case 9:
			if (func_245(uParam0))
			{
				PLAYER::_0x0C6B89876262A99D(PLAYER::GET_PLAYER_INDEX(), func_62(uParam0->f_2));
				func_236(&(Local_195.f_3), 10);
			}
			break;
		case 10:
			uParam0->f_14 = 1;
			uParam0->f_13 = 6;
			break;
	}
	return 1;
}

int func_46(var uParam0)
{
	if (func_8(&(uParam0->f_9), 4))
	{
		if (!func_246(uParam0))
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
		if (func_248(&(uParam0->f_3), func_247(iVar0)))
		{
			if (func_249(iVar0))
			{
				if (!func_10(iVar0))
				{
					func_250(iVar0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					return 0;
				}
				if (((!func_79(iVar0, 0) && uParam0->f_1 != -103573613) && uParam0->f_1 != 194099983) && uParam0->f_1 != 2038046186)
				{
					func_251(iVar0, 0);
					AUDIO::STOP_PED_SPEAKING(func_62(iVar0), true);
				}
			}
			else if (!func_10(iVar0))
			{
				func_250(iVar0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				return 0;
			}
		}
		iVar0++;
	}
	if (!func_252(uParam0))
	{
		return 0;
	}
	func_253(uParam0);
	if (func_8(&(uParam0->f_9), 128))
	{
		if (!func_254(uParam0))
		{
			return 0;
		}
	}
	sVar1 = func_111(uParam0->f_1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		MISC::_0x1096603B519C905F(sVar1);
	}
	if (func_255())
	{
		func_256(1);
	}
	func_257(64);
	func_32(1);
	func_96(Global_1935630, 256);
	if (func_29(Global_35, 0))
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	}
	if (!func_20(32768))
	{
		func_258(Global_36, ENTITY::GET_ENTITY_HEADING(Global_35));
	}
	return 1;
}

int func_50()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_51(var uParam0)
{
	if ((func_75(Local_195.f_95, 1024) || func_75(Local_195.f_95, 512)) && func_75(Local_195.f_95, 16384))
	{
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
	switch (func_259(uParam1))
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
		func_213(sParam0, 1);
		return 1;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_213(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_213(sParam0, 1);
			return 0;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_213(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_213(sParam0, 1);
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
		func_213(sParam0, 1);
		return 1;
	}
	func_213(sParam0, 1);
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
		if (!func_260(iParam0))
		{
			return;
		}
	}
	func_261(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_60(var uParam0, int iParam1)
{
	if (iParam1 || !func_67(uParam0))
	{
		func_228(uParam0);
	}
}

void func_61(int iParam0)
{
	switch (func_120())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 - (Global_1357549->f_1495 && iParam0));
			break;
	}
}

int func_62(int iParam0)
{
	if (!func_260(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_63(int iParam0, bool bParam1)
{
	if (&Global_1900073->f_179[iParam0] != bParam1)
	{
		Global_1900073->f_179[iParam0] = bParam1;
	}
}

void func_64(int iParam0, bool bParam1)
{
	if (!func_260(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_62(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_62(iParam0), 204, false);
	}
}

void func_65()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_262(uLocal_1569[iVar0], 1);
		iVar0++;
	}
	iLocal_1573 = 0;
}

void func_66(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_263(iVar0, iParam0))
		{
			func_264(iVar0, bParam1);
		}
		iVar0++;
	}
}

bool func_67(var uParam0)
{
	return func_265(*uParam0, 1);
}

void func_68(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_69(int iParam0, bool bParam1)
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
	if (!func_266(iParam0))
	{
		return;
	}
	iVar0 = func_267(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_268(iVar0);
	func_269(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_270(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_271(iVar0))
		{
			return;
		}
	}
	func_272(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && func_120() == -1)
	{
		if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

void func_70(bool bParam0)
{
	if (bParam0)
	{
		if (func_273(Global_1393447, 1024))
		{
			func_274(Global_1393447, 1024);
		}
	}
	else
	{
		func_275(Global_1393447, 1024);
	}
}

bool func_71(int iParam0)
{
	if (!func_260(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_72(int iParam0)
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

void func_73(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_260(iParam1))
	{
		return;
	}
	iVar0 = func_72(iParam1);
	if (func_276(iParam1))
	{
		if (!func_71(iParam1))
		{
			return;
		}
	}
	func_277(iParam1, 39, 1);
	func_278(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_278(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_278(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_59(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_279(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_74(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_58(iParam0))
	{
		return;
	}
	if (func_78(iParam0))
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
	func_280(iParam0, 0);
	func_77(iParam0, 4, 0);
	func_9(iParam0);
	func_281(iParam0);
	func_277(iParam0, 37, 1);
	bVar0 = func_29(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_282(iParam0, 0);
	bVar2 = _NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_283(iParam0, 64, 1))
	{
		func_277(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_277(iParam0, 33, 1);
		func_277(iParam0, 34, 1);
		func_284(iParam0, 1056964608, -1, 1061158912);
		func_285(iParam0, 1, 1, 0);
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
			func_64(iParam0, 0);
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
		func_277(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_59(iParam0, 33, 1);
		func_285(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_60(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_68(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
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
			func_286(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_283(iParam0, 45, 1))
	{
		func_277(iParam0, 45, 1);
	}
	func_287(iParam0, 16, 1);
	func_277(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_29(func_72(iParam0), 0))
		{
			func_73(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_75(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_76(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_288(1);
	}
	else if (func_289())
	{
		func_290(8);
	}
	else
	{
		func_291();
	}
	if (func_79(uParam0->f_2, 0))
	{
		func_80(uParam0->f_2);
	}
	if (HUD::TEXT_BLOCK_IS_LOADED(sLocal_34))
	{
		HUD::_TEXT_BLOCK_DELETE(sLocal_34);
	}
	if (func_29(func_62(uParam0->f_2), 0))
	{
		PED::SET_PED_LASSO_HOGTIE_FLAG(func_62(uParam0->f_2), 0, 1);
	}
	func_292(1);
}

void func_77(int iParam0, int iParam1, bool bParam2)
{
	if (!func_260(iParam0))
	{
		return;
	}
	func_293(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

bool func_78(int iParam0)
{
	return func_294(iParam0, 16, 1);
}

bool func_79(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_62(iParam0);
	if (bParam1)
	{
		if (!func_29(iVar0, 0))
		{
			return false;
		}
	}
	return PED::IS_PED_GROUP_MEMBER(iVar0, func_50(), 1);
}

void func_80(int iParam0)
{
	int iVar0;
	struct<15> Var1;

	if (!func_58(iParam0))
	{
		return;
	}
	if (!func_79(iParam0, 0))
	{
	}
	func_295(iParam0);
	Global_1359489->f_15 = func_296(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			(*Global_1359489)[iVar0] = -1;
		}
		iVar0++;
	}
	func_297();
	func_277(iParam0, 32, 1);
	if (func_29(Global_1360165[iParam0 /*1157*/], 0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, false);
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, false);
		Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		Var1.f_12 = 8;
		Var1.f_3 = Global_1360165[iParam0 /*1157*/];
		Var1.f_7 = func_298();
		Var1.f_8 = 0;
		Var1.f_11 = 10;
		Var1.f_14 = Global_1360165[iParam0 /*1157*/];
		MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	}
}

int func_81(int iParam0)
{
	if (!func_82(iParam0))
	{
		return -1;
	}
	return func_86(iParam0);
}

bool func_82(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_83(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_84(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

int func_85(int iParam0)
{
	if (!func_82(iParam0))
	{
		return 0;
	}
	return func_300(func_299(iParam0));
}

int func_86(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_301(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

void func_87(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_120() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_88(int iParam0)
{
	return func_303(func_302(iParam0));
}

void func_89(int iParam0, int iParam1)
{
	if (!func_82(iParam0))
	{
		return;
	}
	func_304(iParam0, iParam1);
}

void func_90(bool bParam0)
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

void func_91(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_4)
	{
		func_305(iParam0, iParam1, bParam2);
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

void func_92(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

bool func_93(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_94()
{
	return Global_1572864->f_12;
}

void func_95(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_96(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_97(bool bParam0)
{
	int iVar0;
	struct<16> Var1;

	if (func_306(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_307();
	Var1.f_3.f_3 = iVar0;
	if ((!func_308(Global_1347343->f_2) && !func_93(Global_1347343->f_11, 64)) || func_20(32768))
	{
		Var1.f_7 = func_309();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_93(Global_1347343->f_11, 1024) && !func_20(32768))
	{
		Var1.f_11 = func_310();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_93(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_311();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_312(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_313(&Var1, "REPLAY_T_DEAD", 0, 1);
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

int func_98(int iParam0)
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
		iVar0 = func_86(iParam0);
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

int func_99(int iParam0, bool bParam1, int iParam2)
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
		if (func_314())
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
		iVar0 = func_125(&(Global_1898164->f_1[0 /*5*/]));
		if (func_140(iVar0) && func_126(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_82(&(Global_1898164->f_1[0 /*5*/])))
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

bool func_100(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_101(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_85(iParam0))
	{
		case 1:
			iVar0 = func_125(iParam0);
			return func_315(iVar0);
		case 8:
			iVar1 = func_125(iParam0);
			if (func_126(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				return func_316(iVar1);
			}
			break;
	}
	return -1;
}

void func_102(bool bParam0)
{
	int iVar0;

	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_120() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_317(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_318();
		Global_1898077->f_9 = func_319(Global_1894899->f_2);
		func_320(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_103()
{
	if (!func_151(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_151(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_151(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_151(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_151(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_151(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_151(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_104(int iParam0, bool bParam1)
{
	if (func_120() != -1)
	{
		return;
	}
	if (func_83(0) != iParam0)
	{
		return;
	}
	if (func_321(iParam0))
	{
		if (bParam1)
		{
			func_322(-525676072);
		}
		else
		{
			func_323(-525676072);
		}
	}
}

void func_105(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_106(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_107(bool bParam0)
{
	Global_1572864->f_14 = bParam0;
	if (bParam0)
	{
		func_109(1);
	}
}

void func_108(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_109(0);
	}
}

void func_109(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

int func_110(int iParam0)
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

char* func_111(int iParam0)
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

char* func_112(int iParam0)
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

char* func_113(int iParam0, bool bParam1)
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
			if ((func_151(((*Global_1835011)[59 /*74*/])->f_1, 1) || func_151(((*Global_1347702)[1 /*49*/])->f_15, 1)) || func_13(((*Global_1347702)[1 /*49*/])->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_324(403634348, 1))
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

int func_114(int iParam0)
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

int func_115(int iParam0)
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

int func_116(int iParam0)
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

int func_117(int iParam0)
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

int func_118()
{
	return &Global_1899515;
}

void func_119(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_6 = uParam1;
}

int func_120()
{
	return Global_1572887->f_12;
}

int func_121(bool bParam0, int iParam1)
{
	int iVar0;

	if (!bParam0 && func_204(373691918))
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

void func_122()
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
			iVar18 = func_62(iVar17);
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
	func_68(&(Global_1359489->f_55));
	if (func_324(1777191912, 1))
	{
		func_325(1777191912, 1, 0);
	}
}

void func_123(int iParam0)
{
	if (!func_82(iParam0))
	{
		return;
	}
	func_327(iParam0, (func_326(iParam0) + BUILTIN::SHIFT_LEFT(1, 16)));
}

struct<2> func_124(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_125(int iParam0)
{
	if (!func_82(iParam0))
	{
		return -1;
	}
	return func_328(func_299(iParam0));
}

bool func_126(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_127()
{
	return func_329() > 0;
}

void func_128(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 67:
			func_330(-1032423150, iParam1);
			break;
		case 18:
			func_330(294066959, iParam1);
			func_330(-1925639563, iParam1);
			func_330(-378582304, iParam1);
			func_330(-338306437, iParam1);
			break;
		case 20:
			func_330(437270255, iParam1);
			break;
		case 2:
			func_330(-304000413, iParam1);
			func_330(-533612796, iParam1);
			func_330(48036954, iParam1);
			break;
		case 23:
			func_330(193108691, iParam1);
			func_330(491732588, iParam1);
			func_330(671962088, iParam1);
			func_331(1);
			break;
		case 16:
			func_330(-1836056650, iParam1);
			func_330(-754657922, iParam1);
			func_330(-1752355838, iParam1);
			func_330(-1375324510, iParam1);
			break;
		case 59:
			func_330(-514392105, iParam1);
			func_330(-822060246, iParam1);
			if (func_332(146))
			{
				func_330(1372748575, iParam1);
			}
			func_331(1);
			break;
		case 76:
			func_330(1991352213, iParam1);
			if (func_333() == 0)
			{
				func_330(1852488616, iParam1);
			}
			else
			{
				func_330(-9866350, iParam1);
			}
			break;
		case 44:
			func_330(863852599, iParam1);
			func_330(1228374935, iParam1);
			func_330(1517889050, iParam1);
			func_330(830657578, iParam1);
			func_330(1901354958, iParam1);
			break;
		case 46:
			func_330(-582805654, iParam1);
			func_330(250378940, iParam1);
			func_330(-2143265426, iParam1);
			break;
		case 17:
			func_330(-941494139, iParam1);
			func_330(1641489521, iParam1);
			break;
		case 19:
			func_330(-1829423531, iParam1);
			func_330(-1590504752, iParam1);
			func_330(1357221321, iParam1);
			break;
		case 21:
			func_330(-1037992610, iParam1);
			func_330(-1286414399, iParam1);
			func_331(0);
			break;
		case 15:
			func_330(-1014460309, iParam1);
			func_330(-1030502825, iParam1);
			break;
		case 33:
			func_330(479388090, iParam1);
			func_330(-1396342239, iParam1);
			func_330(-619618632, iParam1);
			break;
		case 34:
			func_330(1193561641, iParam1);
			break;
		case 64:
			func_330(1363960851, iParam1);
			break;
		case 60:
			func_330(-1232453926, iParam1);
			func_330(-882833584, iParam1);
			break;
		case 73:
			func_330(2023205767, iParam1);
			break;
		case 74:
			func_330(-2135286513, iParam1);
			if (func_333() == 0)
			{
				func_330(33799444, iParam1);
			}
			else
			{
				func_330(-161343203, iParam1);
			}
			break;
		case 8:
			func_330(841639693, iParam1);
			func_330(358952323, iParam1);
			break;
		case 36:
			func_330(852538149, iParam1);
			func_330(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_330(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_330(1116039310, iParam1);
			}
			break;
		case 27:
			func_330(107633428, iParam1);
			func_330(335902282, iParam1);
			func_330(575673055, iParam1);
			func_330(-425944207, iParam1);
			break;
		case 28:
			func_330(-1941530250, iParam1);
			func_330(1399269304, iParam1);
			func_330(1839684664, iParam1);
			func_330(923168503, iParam1);
			func_330(-1485078322, iParam1);
			break;
		case 29:
			func_330(574995900, iParam1);
			func_330(-1691275407, iParam1);
			func_330(-1725307861, iParam1);
			break;
		case 31:
			func_330(-2108383238, iParam1);
			func_330(-1321828931, iParam1);
			func_330(-1632118592, iParam1);
			func_330(334938948, iParam1);
			break;
		case 4:
			func_330(115823701, iParam1);
			func_330(-1896939736, iParam1);
			func_330(-1830746356, iParam1);
			func_330(-1235169781, iParam1);
			func_331(0);
			break;
		case 6:
			func_330(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_330(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_330(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_330(-384176140, iParam1);
			}
			break;
		case 25:
			func_330(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_330(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_330(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_330(-1374849484, iParam1);
			}
			break;
		case 48:
			func_330(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_330(217772674, iParam1);
			}
			else
			{
				func_330(2071798160, iParam1);
			}
			if (func_334(51))
			{
				func_330(-792802286, iParam1);
			}
			break;
		case 49:
			func_330(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_330(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_330(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_330(1402120602, iParam1);
			}
			break;
		case 58:
			func_330(-1661934591, iParam1);
			break;
		case 50:
			func_330(-1713759426, iParam1);
			break;
		case 52:
			func_330(-314799932, iParam1);
			func_330(-462260432, iParam1);
			func_330(822929377, iParam1);
			if (iParam2 == 1)
			{
				func_330(345256028, iParam1);
				func_330(-1635084094, iParam1);
			}
			else
			{
				func_330(114267347, iParam1);
			}
			break;
		case 32:
			func_330(615304157, iParam1);
			break;
		case 47:
			func_330(415434835, iParam1);
			break;
		case 69:
			func_330(1373465877, iParam1);
			if (func_151(((*Global_1347702)[9 /*49*/])->f_15, 1))
			{
				func_330(-2058273527, iParam1);
			}
			break;
		case 70:
			func_330(451334985, iParam1);
			if (func_333() == 0)
			{
				func_330(-224150200, iParam1);
			}
			else
			{
				func_330(289012628, iParam1);
			}
			break;
		case 71:
			if (func_333() == 0)
			{
				func_330(-41692120, iParam1);
			}
			else
			{
				func_330(1537840678, iParam1);
			}
			break;
		case 37:
			func_330(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_330(1842132550, iParam1);
			}
			else
			{
				func_330(-785735240, iParam1);
			}
			func_330(-1605690566, iParam1);
			break;
		case 13:
			func_330(-731367459, iParam1);
			func_330(224176585, iParam1);
			func_330(-14545580, iParam1);
			break;
		case 53:
			func_330(1095274522, iParam1);
			break;
		case 54:
			func_330(-572027988, iParam1);
			break;
		case 56:
			func_330(1339307101, iParam1);
			func_330(2102267732, iParam1);
			break;
		case 57:
			func_330(710102686, iParam1);
			break;
		case 22:
			func_330(-1754368482, iParam1);
			func_330(-2071408557, iParam1);
			break;
		case 12:
			func_330(-181334543, iParam1);
			break;
		case 0:
			func_330(-2134669864, iParam1);
			func_330(-548289709, iParam1);
			func_330(-911271922, iParam1);
			func_330(-604455775, iParam1);
			break;
		case 1:
			func_331(1);
			break;
		case 3:
			if (func_162())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1478534115))
				{
					func_330(-1286192062, iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1286192062))
			{
				func_330(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_129()
{
	if (func_120() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_130(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_330(-145926707, iParam1);
			func_330(-604922090, iParam1);
			func_330(-848690769, iParam1);
			break;
		case 1:
			func_330(-1477631591, iParam1);
			break;
		case 2:
			func_330(76112544, iParam1);
			break;
		case 9:
			func_330(1396404308, iParam1);
			func_330(-1357381228, iParam1);
			if (func_151(((*Global_1835011)[69 /*74*/])->f_1, 1))
			{
				func_330(1902679064, iParam1);
			}
			else
			{
				func_330(-2146422425, iParam1);
			}
			break;
		case 22:
			func_330(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_330(-1934184559, iParam1);
				func_330(1281755988, iParam1);
			}
			else
			{
				func_330(-1745220872, iParam1);
				func_330(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_330(-1641504538, iParam1);
				func_330(-988014485, iParam1);
			}
			else if (func_332(26))
			{
				func_330(-343043950, iParam1);
				func_330(-640062214, iParam1);
			}
			else
			{
				func_330(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_330(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_330(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_330(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_330(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_330(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_330(1301690984, iParam1);
				}
			}
			else
			{
				func_330(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_330(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_330(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_330(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_330(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_330(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_330(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_330(-754570528, iParam1);
			}
			else
			{
				func_330(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_330(-2072125821, iParam1);
			}
			else
			{
				func_330(270040030, iParam1);
			}
			break;
		case 37:
			func_330(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_330(-505314737, iParam1);
				func_330(-1853052860, iParam1);
			}
			else
			{
				func_330(-1975624994, iParam1);
				func_330(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_330(1690231002, iParam1);
			}
			else
			{
				func_330(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_330(1225386280, iParam1);
			}
			else if (func_332(54))
			{
				func_330(-283235773, iParam1);
			}
			else
			{
				func_330(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_330(1355398007, iParam1);
			}
			else
			{
				func_330(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_330(574636806, iParam1);
			}
			else
			{
				func_330(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_330(821118338, iParam1);
			}
			else if (func_332(39))
			{
				func_330(846829260, iParam1);
			}
			else
			{
				func_330(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_185(((*Global_1835011)[33 /*74*/])->f_1) == 1)
				{
					func_330(1422779093, iParam1);
				}
				else
				{
					func_330(-1769536986, iParam1);
				}
			}
			else
			{
				func_330(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_330(352134789, iParam1);
			}
			else if (func_332(43))
			{
				func_330(260723113, iParam1);
			}
			else
			{
				func_330(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_330(-457958799, iParam1);
			}
			else
			{
				func_330(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_332(41))
			{
				func_330(-546824600, iParam1);
			}
			else
			{
				func_330(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_330(1297261593, iParam1);
			}
			else
			{
				func_330(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_330(2068484886, iParam1);
			}
			else if (func_332(49))
			{
				func_330(-1489080639, iParam1);
				func_330(-2102244050, iParam1);
			}
			else
			{
				func_330(-1863040467, iParam1);
			}
			break;
		case 51:
			func_330(-2055943209, iParam1);
			break;
		case 58:
			if (func_151(((*Global_1347702)[23 /*49*/])->f_15, 1))
			{
				func_330(1650066845, iParam1);
			}
			else
			{
				func_330(151370023, iParam1);
			}
			func_330(1426057961, iParam1);
			func_330(476379584, iParam1);
			break;
		case 59:
			func_330(-1638117866, iParam1);
			break;
		case 62:
			func_330(199541730, iParam1);
			break;
		case 63:
			func_330(1703485804, iParam1);
			func_330(-800449045, iParam1);
			break;
		case 65:
			func_330(-1678210868, iParam1);
			func_330(-1448238026, iParam1);
			func_330(-1200864845, iParam1);
			func_330(1473511536, iParam1);
			break;
		case 66:
			func_330(-1774490051, iParam1);
			func_330(-34645921, iParam1);
			func_330(174027075, iParam1);
			func_330(-1155999, iParam1);
			func_331(1);
			break;
		case 67:
			func_330(701612593, iParam1);
			func_330(-1069631343, iParam1);
			func_330(1673428882, iParam1);
			break;
		case 68:
			func_330(-739133286, iParam1);
			func_330(-2130089358, iParam1);
			func_330(2056190391, iParam1);
			func_330(1941753817, iParam1);
			func_331(0);
			break;
		case 70:
			func_330(-1217555753, iParam1);
			break;
		case 71:
			func_330(697048821, iParam1);
			break;
		case 73:
			func_330(-553148661, iParam1);
			break;
		case 75:
			func_330(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_330(1414263863, iParam1);
			}
			else
			{
				func_330(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_330(1835465936, iParam1);
				func_330(523715611, iParam1);
			}
			else if (func_332(78))
			{
				func_330(1420338873, iParam1);
			}
			else
			{
				func_330(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_330(10180941, iParam1);
			}
			else if (func_332(79))
			{
				func_330(768420635, iParam1);
			}
			else
			{
				func_330(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_330(-383601523, iParam1);
			}
			else
			{
				func_330(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_330(1606472408, iParam1);
			}
			else
			{
				func_330(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_330(-203571927, iParam1);
			}
			else
			{
				func_330(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_330(729886222, iParam1);
			}
			else
			{
				func_330(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_330(-714816362, iParam1);
			}
			else
			{
				func_330(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_330(-932932179, iParam1);
				func_330(-1458537240, iParam1);
			}
			else
			{
				func_330(-1764383885, iParam1);
				func_330(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_330(1741466706, iParam1);
			}
			else
			{
				func_330(1405815775, iParam1);
			}
			break;
		case 94:
			func_330(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_330(1905280979, iParam1);
			}
			else
			{
				func_330(-1966245299, iParam1);
			}
			func_330(721468880, iParam1);
			break;
		case 99:
			func_330(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_330(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_330(-1117781095, iParam1);
				}
				else
				{
					func_330(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_330(141494548, iParam1);
			}
			else
			{
				func_330(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_330(-369525697, iParam1);
			}
			else if (func_332(101))
			{
				func_330(1595015219, iParam1);
			}
			else
			{
				func_330(-321486961, iParam1);
			}
			break;
		case 103:
			func_330(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_330(793460477, iParam1);
				func_330(-1610242176, iParam1);
			}
			else if (func_332(103))
			{
				func_330(1830897187, iParam1);
			}
			else
			{
				func_330(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_330(1528309077, iParam1);
			}
			else if (func_332(104))
			{
				func_330(1864966105, iParam1);
			}
			else
			{
				func_330(-103336013, iParam1);
			}
			break;
		case 108:
			func_330(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_330(-1123227713, iParam1);
				func_330(-889574341, iParam1);
			}
			else
			{
				func_330(2065385917, iParam1);
				func_330(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_330(-887421691, iParam1);
			}
			else if (func_332(109))
			{
				func_330(-1318117949, iParam1);
			}
			else
			{
				func_330(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_330(284822762, iParam1);
				}
				else
				{
					func_330(-1425017554, iParam1);
				}
			}
			else if (func_332(110))
			{
				if (&Global_1357515 == 0)
				{
					func_330(553087292, iParam1);
				}
				else
				{
					func_330(-1766870331, iParam1);
					func_330(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_330(-1980598735, iParam1);
			}
			else
			{
				func_330(-442732098, iParam1);
				func_330(1955756409, iParam1);
			}
			break;
		case 115:
			func_330(394303528, iParam1);
			func_330(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_330(1182403394, iParam1);
			}
			else
			{
				func_330(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_330(924445424, iParam1);
			}
			else
			{
				func_330(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_330(430755273, iParam1);
				func_330(-1473879802, iParam1);
			}
			else
			{
				func_330(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_330(73885747, iParam1);
			}
			else if (func_332(117))
			{
				func_330(1559707913, iParam1);
			}
			else
			{
				func_330(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_330(-2103887972, iParam1);
			}
			else if (func_332(118))
			{
				func_330(-435828462, iParam1);
			}
			else
			{
				func_330(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_330(2054486196, iParam1);
			}
			else
			{
				func_330(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_330(-570086056, iParam1);
			}
			else if (func_332(121))
			{
				func_330(32337856, iParam1);
			}
			else
			{
				func_330(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_330(813493663, iParam1);
			}
			else if (func_332(122))
			{
				func_330(-2132763590, iParam1);
			}
			else
			{
				func_330(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_330(-66240572, iParam1);
				func_330(1563075046, iParam1);
			}
			else
			{
				func_330(-787011772, iParam1);
				func_330(-1523377438, iParam1);
			}
			break;
		case 127:
			func_330(61020800, iParam1);
			break;
		case 129:
			func_330(428985222, iParam1);
			break;
		case 131:
			func_330(-1393851036, iParam1);
			break;
		case 133:
			func_330(1559531342, iParam1);
			break;
		case 134:
			func_330(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_330(-1374407408, iParam1);
				}
				else
				{
					func_330(471210931, iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(1732474719) && HUD::_JOURNAL_CAN_WRITE_ENTRY(801682048)) && HUD::_JOURNAL_CAN_WRITE_ENTRY(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_330(-472672138, iParam1);
				}
				else
				{
					func_330(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_330(-1678710489, iParam1);
			}
			else
			{
				func_330(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_330(1717582460, iParam1);
			}
			else
			{
				func_330(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_330(1568112362, iParam1);
				func_330(1388317526, iParam1);
			}
			else if (func_332(136))
			{
				func_330(-1597534828, iParam1);
				func_330(-1207918353, iParam1);
			}
			else
			{
				func_330(-1940891082, iParam1);
				func_330(-598277294, iParam1);
			}
			break;
		case 142:
			if (iParam2 == 1)
			{
				func_330(448334530, iParam1);
				func_330(2145375502, iParam1);
			}
			else
			{
				func_330(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_330(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_330(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_330(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_330(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_330(-66616327, iParam1);
			}
			else
			{
				func_330(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_330(1862916706, iParam1);
			}
			else if (func_332(147))
			{
				func_330(675105199, iParam1);
			}
			else
			{
				func_330(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_330(174409701, iParam1);
			}
			else if (func_332(148))
			{
				func_330(-1730895475, iParam1);
			}
			else
			{
				func_330(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_330(1295237052, iParam1);
			}
			else if (func_332(149))
			{
				func_330(-788577684, iParam1);
			}
			else
			{
				func_330(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_131(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	*uParam1 = 1137976064;
	*uParam2 = -1;
	iVar0 = func_85(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_335(iParam0);
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
					if (func_185(((*Global_1835011)[9 /*74*/])->f_1) == 0)
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
			iVar2 = func_125(iParam0);
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
			iVar3 = func_125(iParam0);
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

int func_132(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_336(iParam0);
	uVar3 = func_337(iParam0);
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
				iVar1 = func_118();
				func_158(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_1 = iVar1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_4 = iVar2;
			func_338(iParam0, 1);
			if (func_339(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if ((Global_40.f_4283.f_6[iVar4 /*5*/])->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_340(Global_40.f_4283.f_6[iVar4 /*5*/], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_341(1, iParam0);
				}
				else
				{
					func_342(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_133(int iParam0, var uParam1)
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

int func_134(int iParam0, int iParam1, int iParam2)
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

int func_135(int iParam0, int iParam1)
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

int func_136(int iParam0)
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

void func_137(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_120() != -1)
	{
		return;
	}
	if ((Global_36615 && func_343(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_344(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_345(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
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
			func_346(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_345(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_138(int iParam0)
{
	if (!func_82(iParam0))
	{
		return -1;
	}
	return func_347(func_299(iParam0));
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

bool func_140(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_141()
{
	if (func_120() != -1)
	{
		return 0;
	}
	if (!func_348())
	{
		return 0;
	}
	if (!func_151(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_151(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_151(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_151(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_151(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_151(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_151(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_151(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_151(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_151(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_151(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_151(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_151(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_151(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_151(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_151(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_151(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_151(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_151(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_151(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_151(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_151(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_151(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_151(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_151(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_151(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

void func_142()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 1);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_349(13);
		(*Global_1898441)[iVar0 /*38*/] = 13;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_WIN2_COM", 24);
	}
}

int func_143(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_350(iParam0, 0))
	{
		return 0;
	}
	if (!func_351(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_352(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_353(iParam0, bParam2);
	iVar2 = 0;
	if (func_354(iParam0, 0, 0) == 0)
	{
		if (func_355(iParam0))
		{
			iVar5 = func_356(iParam0);
			iVar6 = func_357(iVar5);
			iVar7 = func_358(iVar6) + 1;
			func_359(iVar5);
			if (func_360(38))
			{
				func_149(483, 0);
			}
			else
			{
				func_149(482, 0);
			}
			if (iVar7 == func_361(iVar6))
			{
				func_143(func_362(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_348() && func_363(4))
				{
					if (func_348() && (func_364(38) || func_360(38)))
					{
						func_366(38, func_362(iVar6), 0, 0, func_365(), 0, -1, 0);
						func_367(2);
					}
					else
					{
						func_366(38, func_362(iVar6), 0, 0, func_365(), 0, -1, 0);
						func_367(1);
					}
				}
			}
			else if (func_348() && func_363(4))
			{
				if (func_348() && (func_364(38) || func_360(38)))
				{
					func_366(38, 0, 0, 0, func_365(), 0, -1, 0);
					func_367(2);
				}
				else
				{
					func_366(38, 0, 0, 0, func_365(), 0, -1, 0);
					func_367(1);
				}
			}
			if (func_348() && func_363(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_348() && (func_364(38) || func_360(38)))
					{
						func_368(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_368(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_369(iParam0) == -1037537535)
	{
		if ((!func_370(iParam0, 866047851) && !func_370(iParam0, -1979000645)) && !func_370(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_371(iParam0, 8388608) && !func_372(28))
	{
		func_373(28);
	}
	if (!bVar3)
	{
		if (func_370(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_374(iParam0) == -1447088266)
			{
				iVar1 = func_376(func_375(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_120() == -1)
					{
						func_377(iVar1);
					}
					if (func_378(0) && func_379(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_380(iParam0, iVar0, iParam5);
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
					if (func_120() == -1)
					{
						func_377(iParam0);
					}
					if (func_378(0) && func_379(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_380(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_369(iParam0) == -427144552)
		{
			if (!func_381(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_369(iParam0) == 307971639 && func_382(iParam0))
		{
			if (!func_383(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_370(iParam0, 866047851))
		{
			func_384(iParam0);
		}
		else if (func_370(iParam0, 2000026003))
		{
			func_385(iParam0);
		}
		else if (func_370(iParam0, -103750053))
		{
			func_387(func_386(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_387(func_388(-717883113, 2091222383), iVar0);
		}
		else if (func_370(iParam0, -121341956) && !func_370(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_151(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_149(498, 0);
				}
			}
			if (func_370(iParam0, -2017733358) || func_370(iParam0, -1369131378))
			{
				func_389(iParam0);
			}
		}
		else if (func_370(iParam0, -136654233))
		{
			if (func_370(iParam0, -1021472396))
			{
			}
		}
		else if (func_370(iParam0, -1466706512) && func_370(iParam0, 1147021565))
		{
			func_149(484, 0);
		}
		else if (func_370(iParam0, 1147021565) && func_370(iParam0, -524514947))
		{
		}
		else if (func_370(iParam0, 554195525))
		{
		}
		else if (func_370(iParam0, 589988438))
		{
			if (func_390())
			{
				func_391(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_370(iParam0, 787083290) && func_370(iParam0, 949916894))
		{
			func_392(iParam0);
		}
		else if (func_370(iParam0, -1718133314))
		{
			func_393(iParam0);
		}
		else if (func_370(iParam0, -1738650224))
		{
			func_394(iParam0);
		}
		else if (func_370(iParam0, -1112814642) && func_370(iParam0, 949916894))
		{
			func_395(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_370(iParam0, 1841149704))
		{
			func_396();
		}
		else if (func_370(iParam0, 606799272))
		{
			func_397(iParam0, iParam1);
			func_398(iParam0);
		}
		else if (func_370(iParam0, -1112814642) && func_370(iParam0, -1697809989))
		{
			func_399(iParam0, 0, 0, 0);
		}
		else if (func_370(iParam0, -2017733358) || func_370(iParam0, -1369131378))
		{
			func_389(iParam0);
		}
		else if (func_370(iParam0, -1921346699))
		{
			if (func_120() != -1)
			{
				return 0;
			}
			func_400(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_370(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_171(215778062, 1, 0))
					{
						func_143(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_171(670273567, 1, 0))
					{
						func_143(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_171(-967317137, 1, 0))
					{
						func_143(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_171(526074061, 1, 0))
					{
						func_143(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_171(-1045488665, 1, 0))
					{
						func_143(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_171(471514780, 1, 0))
					{
						func_143(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_370(iParam0, -839724752) && func_371(iParam0, 4))
		{
			if (!func_360(42))
			{
				func_401(iParam0);
			}
		}
		else if (func_370(iParam0, 1399091007))
		{
			func_402(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_370(iParam0, 1248798204))
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
				func_143(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_373(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_403(PLAYER::PLAYER_PED_ID(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_404(&iVar9, 0))
				{
					func_379(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_120() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_403(PLAYER::PLAYER_PED_ID(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("weapon_kit_binoculars"):
				break;
			case 2131771850:
				func_149(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_405();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_406();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_407();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_408();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_409();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_410(499813453, 854119837, 0);
				func_411(499813453, 0);
				func_412(1);
				break;
			case 2127812557:
				func_410(499813453, -1292544588, 0);
				func_411(499813453, 0);
				func_412(2);
				break;
			case 808991383:
				func_410(499813453, -1003325394, 0);
				func_411(499813453, 0);
				func_412(4);
				break;
			case 1134518629:
				func_410(666607663, -335460405, 0);
				func_411(666607663, 0);
				func_413(1);
				break;
			case 902940106:
				func_410(666607663, 903797617, 0);
				func_411(666607663, 0);
				func_413(2);
				break;
			case -418174898:
				func_410(666607663, 669728650, 0);
				func_411(666607663, 0);
				func_413(4);
				break;
			case -648114971:
				func_410(-220219788, 1214120047, 0);
				func_411(-220219788, 0);
				func_414(1);
				break;
			case 211153747:
				func_410(-220219788, 655769340, 0);
				func_411(-220219788, 0);
				func_414(2);
				break;
			case -32876996:
				func_410(-220219788, 885316185, 0);
				func_411(-220219788, 0);
				func_414(4);
				break;
			case 1191437462:
				func_410(218622660, -1491419385, 0);
				func_411(218622660, 0);
				func_415(1);
				break;
			case 1119149048:
				func_410(218622660, 1809565830, 0);
				func_411(218622660, 0);
				func_415(2);
				break;
			case 506073827:
				func_410(390004462, -628873767, 0);
				func_411(390004462, 0);
				func_416(1);
				break;
			case -1876986168:
				func_410(390004462, -405421956, 0);
				func_411(390004462, 0);
				func_416(2);
				break;
			case 2142623221:
				func_410(390004462, -1108972386, 0);
				func_411(390004462, 0);
				func_416(4);
				break;
			case 1508215381:
				func_410(6410548, 1053716392, 0);
				func_411(6410548, 0);
				func_417(1);
				break;
			case -888935280:
				func_410(6410548, 806507056, 0);
				func_411(6410548, 0);
				func_417(2);
				break;
			case -1252474566:
				func_410(6410548, 1571925350, 0);
				func_411(6410548, 0);
				func_417(4);
				break;
			case -1465702449:
				func_410(6410548, 1330352282, 0);
				func_411(6410548, 0);
				func_417(8);
				break;
			case -21093309:
				func_419(242, func_418(-21093309), 0);
				break;
			case 204375141:
				func_419(240, func_418(204375141), 0);
				break;
			case -417963070:
				func_419(241, func_418(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_420(594, 1934060482, 1, 1);
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
					func_420(594, 1110018439, 1, 1);
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
					func_420(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_420(594, -1228016946, 1, 1);
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
					func_420(595, -103579, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_420(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case 80178851:
				func_149(488, 0);
				break;
			case 1613651027:
				func_149(491, 0);
				break;
			case -885810591:
				func_149(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_143(func_421(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_143(func_422(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_372(1))
				{
					func_149(487, 0);
				}
				break;
			case -898386032:
				func_149(486, 0);
				break;
			case -2035110427:
				if (func_120() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case 1510719693:
				func_149(496, 0);
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
		func_423(&iVar10);
		if (!func_424(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_378(0))
		{
			return 1;
		}
		if (func_369(iParam0) == -1037537535)
		{
			func_425(iParam0);
		}
		if (func_370(iParam0, -1979000645))
		{
			func_426(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_378(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_143(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_427(iVar2, 0);
		}
	}
	Var35 = { func_428(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_429(iParam0);
	if (sParam6 > 0f)
	{
		if (func_370(iParam0, -839724752))
		{
			func_430(iParam0, sParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_431(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_144(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (func_370(iParam0, 1989861793))
	{
		iVar0 = func_432(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_433(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_434(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_435(iVar14, iVar1);
					if (iVar15 != iParam0 && func_350(iVar15, 0))
					{
						if (func_436(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_437(iVar1);
				if (bVar13)
				{
					func_438(iParam0);
				}
				else
				{
					func_149(306, 0);
				}
			}
		}
	}
}

void func_145()
{
	if (func_120() != -1)
	{
		return;
	}
	func_439();
	func_440();
	func_441();
	func_442();
	func_443();
	func_444();
	func_445();
}

void func_146(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;

	func_446(iParam0, 1, 1, -142743235, 1);
	if (func_447(iParam0))
	{
		func_448(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_450(func_449(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_451(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1 /*11*/];
		*(Global_1946804->f_1616.f_1[iVar1 /*3*/]) = { vVar4 };
		(Global_1946804->f_1616.f_1[iVar1 /*3*/])->f_2 = ((Global_1946804->f_1497.f_1[iVar1 /*3*/])->f_2 || (Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_2);
		iVar1++;
	}
	if (func_452() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_453(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_453(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { func_454(8, 0) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { func_454(9, 0) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { func_454(0, 0) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { func_454(2, 0) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { func_454(3, 0) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { func_454(1, 0) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { func_454(5, 0) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { func_454(6, 0) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { func_454(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_455(iVar8, iVar0))
				{
					func_456(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_455(iVar8, iVar0))
		{
			func_456(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
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

void func_147()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_455(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5 /*11*/] || iVar1 == 0)
		{
			if (func_452() == -2125499975 || func_452() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_456(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_456(&vVar2, iVar5, iVar0);
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

void func_148()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 2);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_349(14);
		(*Global_1898441)[iVar0 /*38*/] = 14;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MUD1_COM", 24);
	}
}

void func_149(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_457(iParam0, &iVar0, &iVar1);
	if (!func_458(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_459(iVar0, iVar1);
}

void func_150(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_450(iParam0, 1);
	func_460(Global_1946804->f_1497.f_1[iVar0 /*3*/], 2, 6);
	func_460(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
		(Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1 = 0;
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		if (bParam2)
		{
			func_461(17, iParam0, 0, 0, 0);
		}
	}
	if (func_120() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_460((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
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
			func_460((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
}

int func_151(int iParam0, bool bParam1)
{
	switch (func_81(iParam0))
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

void func_152()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 5);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_349(17);
		(*Global_1898441)[iVar0 /*38*/] = 17;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA2_COM", 24);
	}
}

void func_153()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 6);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_349(18);
		(*Global_1898441)[iVar0 /*38*/] = 18;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA3_COM", 24);
	}
}

int func_154(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	struct<5> Var0;

	if (iParam3 == -358215195)
	{
		Var0 = { func_462(iParam1, 1, 0) };
		iParam3 = func_463(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_464(iParam3);
	return func_403(iParam0, iParam1, iParam2, iParam3, bParam4, iParam5, 1, 0, 1, 0);
}

bool func_155()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

void func_156(int iParam0)
{
	int iVar0;

	if (!func_465(iParam0))
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

int func_157(int iParam0, int iParam1)
{
	if (!func_466(iParam0))
	{
		return 0;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_467(iParam0);
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	return func_468(Global_40.f_9910[iParam1 /*6*/], 4);
}

void func_158(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_469(*iParam0);
	iVar1 = func_470(*iParam0);
	iVar2 = func_471(*iParam0);
	iVar3 = func_472(*iParam0);
	iVar4 = func_473(*iParam0);
	iVar5 = func_474(*iParam0);
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
	iVar6 = func_475(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_475(iVar1, iVar0);
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
	func_476(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_159(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_466(iParam0))
	{
		return;
	}
	if (!func_477(iParam1))
	{
		return;
	}
	if (func_478(iParam1, 1))
	{
		return;
	}
	iVar0 = func_467(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_157(iParam0, -1))
	{
		return;
	}
	else
	{
		func_479(Global_40.f_9910[iVar0 /*6*/], 2);
	}
	(Global_40.f_9910[iVar0 /*6*/])->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_99(0, 0, 1))
		{
			func_191(0, 17);
		}
	}
}

void func_160()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 7);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_349(19);
		(*Global_1898441)[iVar0 /*38*/] = 19;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MOB5_COM", 24);
	}
}

void func_161()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 8);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_349(20);
		(*Global_1898441)[iVar0 /*38*/] = 20;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_162()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

void func_163()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 9);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_349(21);
		(*Global_1898441)[iVar0 /*38*/] = 21;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA1_COM", 24);
	}
}

void func_164()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 10);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_349(22);
		(*Global_1898441)[iVar0 /*38*/] = 22;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA3_COM", 24);
	}
}

void func_165()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 12);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_349(24);
		(*Global_1898441)[iVar0 /*38*/] = 24;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ODR5_COM", 24);
	}
}

void func_166()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 13);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_349(25);
		(*Global_1898441)[iVar0 /*38*/] = 25;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN1_COM", 24);
	}
}

void func_167()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 14);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_349(27);
		(*Global_1898441)[iVar0 /*38*/] = 27;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MAR51_COM", 24);
	}
}

void func_168()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 15);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_349(28);
		(*Global_1898441)[iVar0 /*38*/] = 28;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_169(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_170(int iParam0)
{
	return (Global_40.f_12018.f_4 && iParam0) != 0;
}

bool func_171(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_350(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_369(iParam0);
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
		if (!func_480(iParam0, 1))
		{
			return false;
		}
	}
	return func_354(iParam0, 0, bParam2) >= iParam1;
}

void func_172(int iParam0)
{
	if (func_20(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_481(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_BANK_FEED", MISC::ABSI(iParam0)), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_481(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_173()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 16);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_349(29);
		(*Global_1898441)[iVar0 /*38*/] = 29;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BEE22_COM", 24);
	}
}

void func_174()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 17);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_349(26);
		(*Global_1898441)[iVar0 /*38*/] = 26;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN2_COM", 24);
	}
}

void func_175()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 11);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_349(23);
		(*Global_1898441)[iVar0 /*38*/] = 23;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOC_COM", 24);
	}
}

void func_176()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 3);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_349(15);
		(*Global_1898441)[iVar0 /*38*/] = 15;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOW3_COM", 24);
	}
}

void func_177()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 4);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_349(16);
		(*Global_1898441)[iVar0 /*38*/] = 16;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DUT1_COM", 24);
	}
}

void func_178()
{
	if (func_482() > 1)
	{
		func_483();
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-707360575))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-707360575, true);
			func_149(444, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-1201174711))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-1201174711, true);
			func_149(447, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(151582343))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(151582343, true);
			func_149(448, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-642492359))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-642492359, true);
			func_149(450, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(5171247))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(5171247, true);
			func_149(452, 1);
		}
	}
}

bool func_179(int iParam0)
{
	return func_294(iParam0, 4, 1);
}

void func_180(int iParam0)
{
	func_484(iParam0, 4, 1);
}

void func_181(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_124(-160912108) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_182(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_20(32768))
	{
		return;
	}
	if (!func_82(iParam0))
	{
		return;
	}
	func_96(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_85(iParam0))
	{
		case 1:
			func_387(func_388(909007663, -587839005), 1);
			iVar0 = func_125(iParam0);
			func_387(func_124(-634848880), 1);
			switch (func_315(iVar0))
			{
				case 0:
					func_387(func_388(909007663, 1325140787), 1);
					break;
				case 1:
					func_387(func_388(909007663, 2101241783), 1);
					break;
				case 2:
					func_387(func_388(909007663, -1296936294), 1);
					break;
				case 3:
					func_387(func_388(909007663, -798388728), 1);
					break;
				case 4:
					func_387(func_388(909007663, -1787586531), 1);
					break;
				case 5:
					func_387(func_388(909007663, -1002834519), 1);
					break;
				case 6:
					func_387(func_388(909007663, -50600144), 1);
					break;
				case 7:
					func_387(func_388(909007663, -348503123), 1);
					break;
				case 8:
					func_387(func_388(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_387(func_388(909007663, -406093146), 1);
			}
			if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_8))))
			{
				func_387(func_388(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_125(iParam0);
			if (func_126(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				func_387(func_124(-634848880), 1);
			}
			if (func_126(((*Global_1347702)[iVar1 /*49*/])->f_12, 4) || iVar1 == 59)
			{
				if (func_126(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
				{
					func_387(func_388(909007663, -587839005), 1);
				}
				else
				{
					func_387(func_388(909007663, -2049243343), 1);
				}
			}
			if (func_126(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				switch (func_316(iVar1))
				{
					case 0:
						func_387(func_388(909007663, 1325140787), 1);
						break;
					case 1:
						func_387(func_388(909007663, 2101241783), 1);
						break;
					case 2:
						func_387(func_388(909007663, -1296936294), 1);
						break;
					case 3:
						func_387(func_388(909007663, -798388728), 1);
						break;
					case 4:
						func_387(func_388(909007663, -1787586531), 1);
						break;
					case 5:
						func_387(func_388(909007663, -1002834519), 1);
						break;
					case 6:
						func_387(func_388(909007663, -50600144), 1);
						break;
					case 7:
						func_387(func_388(909007663, -348503123), 1);
						break;
					case 8:
						func_387(func_388(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1347702)[iVar1 /*49*/])->f_3))))
				{
					func_387(func_388(909007663, 532323983), 1);
				}
			}
			else if (func_126(((*Global_1347702)[iVar1 /*49*/])->f_12, 4))
			{
				if (func_126(((*Global_1347702)[iVar1 /*49*/])->f_12, 4194304))
				{
				}
				else if (!func_126(((*Global_1347702)[iVar1 /*49*/])->f_12, 512))
				{
					func_387(func_388(909007663, 551192206), 1);
				}
				else
				{
					func_387(func_388(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_183()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (func_120() != -1)
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
	if (!func_485(64))
	{
		return;
	}
	else if (func_100(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_99(0, 0, 1) || func_486()) || func_141())
	{
		return;
	}
	iVar0 = func_103();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_487(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_488(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_488(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_489(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_191(0, -1);
	}
	if (iVar2 > 0)
	{
		func_490("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_491(1, 0);
	Global_1956575->f_2 = 1;
}

void func_184(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_20(32768))
	{
		return;
	}
	func_492(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_493(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_185(int iParam0)
{
	if (!func_82(iParam0))
	{
		return -1;
	}
	return func_494(iParam0);
}

int func_186(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_495(iParam0))
	{
		return 0;
	}
	if (!func_348())
	{
		return 0;
	}
	if (!func_496(iParam0, &iVar0, &iVar1))
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

int func_187(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_497())
	{
		iVar2 = func_497();
	}
	iVar5 = func_498(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_299(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_299(iVar6) == 0)
			{
				return func_499(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_299(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_299(iVar6) == 0)
			{
				return func_499(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_499(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_500(1330954593, 0, -1);
		case 1:
			return func_500(1330954593, 0, -1);
		case 2:
			return func_500(1330954593, 0, -1) * 2;
		case 4:
			return func_500(1330954593, 0, -1);
		case 5:
			return func_500(1330954593, 0, -1);
		case 6:
			return func_500(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_500(1330954593, 0, -1) * 3;
		case 9:
			return func_500(1330954593, 0, -1) * 3;
		case 10:
			return func_500(1330954593, 0, -1) * 3;
		case 11:
			return func_500(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

var func_189(int iParam0)
{
	char[] cVar0[8];

	if (!func_82(iParam0))
	{
		return cVar0;
	}
	switch (func_85(iParam0))
	{
		case 1:
			cVar0 = ((*Global_1835011)[func_335(iParam0) /*74*/])->f_8;
			break;
		case 8:
			cVar0 = ((*Global_1347702)[func_125(iParam0) /*49*/])->f_3;
			break;
		case 11:
			if (iParam0 == func_187(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_190(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!Global_1879514->f_11)
	{
		iVar0 = func_24();
		iVar1 = MISC::GET_HASH_KEY(&uParam0);
		if (MISSIONDATA::_0x57E798B54C45EE1A(iVar1) != 5 && iVar0 == 5)
		{
			if (func_85(Global_1879514->f_1) == 1)
			{
				func_186(5, 1);
			}
			else if (func_85(Global_1879514->f_1) == 8 && (func_126(((*Global_1347702)[func_125(Global_1879514->f_1) /*49*/])->f_12, 1) || func_126(((*Global_1347702)[func_125(Global_1879514->f_1) /*49*/])->f_12, 33554432)))
			{
				func_186(5, 1);
			}
		}
		MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&uParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&uParam0), 3);
	}
}

void func_191(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_501(&Global_0, 8);
	}
	if (!func_348() || func_120() != -1)
	{
		return;
	}
	func_501(&Global_0, 1);
}

int func_192()
{
	return Global_40.f_4283;
}

int func_193(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_82(iParam0))
	{
		return 0;
	}
	uVar0 = func_189(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_194(var uParam0)
{
	return STATS::_0x4DAC398297981B87(uParam0);
}

void func_195(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_196(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = MISC::GET_GAME_TIMER();
}

Vector3 func_197(vector3 vParam0, var uParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, float fParam9, int iParam10)
{
	vector3 vVar0;

	vVar0 = { func_502(vParam0, uParam3, uParam4, bParam5, bParam6, 1, iParam7, bParam8, fParam9, iParam10, -1, 1103626240) };
	if (func_503(vVar0))
	{
		vVar0 = { func_502(vParam0, uParam3, uParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_198(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = uParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_199(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_200(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = func_298();
	if (func_504(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_505(vParam0, bParam3);
}

void func_201()
{
	func_506();
	func_507();
	func_508();
	SCRIPTS::_0x11B0A0B282FA9B10(0);
}

char* func_202(int iParam0)
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

int func_203()
{
	return Global_40.f_4283.f_1;
}

bool func_204(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_509(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_205(int iParam0)
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

void func_206(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_205(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_510(*iParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_511(iVar0);
	*iParam0 = 0;
}

int func_207(var uParam0, char* sParam1, var uParam2, bool bParam3, bool bParam4)
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
	func_512(uParam0);
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

bool func_208(var uParam0, int iParam1)
{
	uParam0->f_264.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_264.f_1), &(uParam0->f_264));
}

bool func_209(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, var uParam5)
{
	bool bVar0;

	if (iParam2 == -1)
	{
		if (func_210(uParam0, 2, iParam4))
		{
			*uParam5 = *iParam4;
		}
		if (func_210(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_210(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_210(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_210(uParam0, 2, iParam4))
	{
		*uParam5 = *iParam4;
	}
	if (func_210(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_210(uParam0, 5, iParam4))
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
			if (func_210(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_210(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_210(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_264.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_INT(iParam2, &(uParam0->f_264));
}

bool func_211(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_264.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_STRING(cParam2, &(uParam0->f_264));
}

int func_212(var uParam0, char* sParam1, int iParam2)
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

void func_213(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_214(var uParam0)
{
	DATAFILE::_DATAFILE_UNLOAD(uParam0->f_264);
	uParam0->f_264 = 0;
	uParam0->f_270 = 0;
}

int func_215(var uParam0, float fParam1)
{
	if (!func_67(uParam0))
	{
		return 0;
	}
	if (func_229(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

float func_216(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_217(char* sParam0)
{
	int iVar0;

	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (func_513(iVar0) != -1)
	{
		return 1;
	}
	return 0;
}

void func_218(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	UILOG::_UILOG_SET_CACHED_OBJECTIVE(MISC::_CREATE_VAR_STRING(2, sParam0));
}

var func_219(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_514(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_515(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_514(sVar0, iParam1, 0, 0, 1, 1);
}

void func_220(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (bParam1)
	{
		if (!func_217(sParam0))
		{
			iVar1 = iLocal_161;
			if (iLocal_192 < iVar1)
			{
				iLocal_161[iLocal_192] = iVar0;
				iLocal_192++;
			}
		}
	}
	else
	{
		iVar2 = func_513(iVar0);
		if (iVar2 != -1)
		{
			iLocal_161[iVar2] = 0;
			func_516();
			iLocal_192 = (iLocal_192 - 1);
		}
	}
}

void func_221(var uParam0, int iParam1)
{
	func_517(uParam0, iParam1);
}

int func_222(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_223(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_518(bParam1, iParam2, iParam3);
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

bool func_224(int iParam0)
{
	int iVar0;

	iVar0 = PED::_0x5407B7288D0478B7(Global_35, iParam0);
	return iVar0 > 0;
}

void func_225(int iParam0)
{
	if (func_519())
	{
		Global_1357509 = 1;
	}
	if (func_520(-92416669))
	{
	}
	if (iParam0 && Global_1935630->f_44 == joaat("weapon_kit_camera"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		Global_1935630->f_44 = joaat("weapon_unarmed");
	}
}

void func_226(int iParam0, var uParam1)
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

int func_227(var uParam0, int iParam1)
{
	if ((*uParam0 && iParam1) != 0)
	{
		return 1;
	}
	return 0;
}

void func_228(var uParam0)
{
	func_521(uParam0, 0f);
}

float func_229(var uParam0)
{
	if (!func_67(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_522(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_523() - uParam0->f_1);
}

void func_230(var uParam0, int iParam1, bool bParam2)
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

int func_231(var uParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, int iParam5)
{
	vector3 vVar0;
	struct<8> Var3;
	var uVar11;

	if (func_524(uParam0->f_1, sParam1, &Var3))
	{
		MemCopy(&vVar0, {Var3}, 3);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			StringConCat(&vVar0, sParam2, 24);
		}
		if (bParam3)
		{
			func_525(1, 1, 0);
		}
		uVar11 = 24;
		if (!func_526(&vVar0))
		{
			func_527(&uVar11, Global_35, "ARTHUR", 0);
			func_527(&uVar11, func_62(uParam0->f_2), func_528(uParam0->f_2), 0);
			func_529(&uVar11, vVar0, bParam4, iParam5, 0, 0);
			return 1;
		}
	}
	return 0;
}

Vector3 func_232()
{
	int iVar0;
	vector3 vVar1;
	var uVar4;

	iVar0 = func_192();
	if (!func_530(iVar0, &vVar1, &uVar4))
	{
	}
	return vVar1;
}

int func_233(var uParam0, var uParam1)
{
	vector3 vVar0[24];
	struct<27> Var3;
	int iVar41;
	bool bVar42;
	float fVar43;
	int iVar44;
	struct<14> Var45;
	bool bVar70;
	int iVar71;

	Var3.f_4 = 1065353216;
	Var3.f_5 = 1065353216;
	Var3.f_9 = 1065353216;
	Var3.f_10 = 1065353216;
	Var3.f_14 = 1065353216;
	Var3.f_15 = 1065353216;
	Var3.f_17 = 1040187392;
	Var3.f_18 = 1040187392;
	Var3.f_19 = -1;
	Var3.f_26 = -1082130432;
	switch (uParam1->f_6)
	{
		case 0:
			if (!func_531(func_62(uParam0->f_2), 1868526510) && !func_531(func_62(uParam0->f_2), 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar41);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_28, true, false), 1f, -1, 1.5f, false, 40000f);
				TASK::TASK_MOUNT_ANIMAL(0, iLocal_28, -1, -1, 1f, 1, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_532(3, 9), 1.25f, -1, 0.25f, false, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
				TASK::CLOSE_SEQUENCE_TASK(iVar41);
				TASK::TASK_PERFORM_SEQUENCE(func_62(uParam0->f_2), iVar41);
				TASK::CLEAR_SEQUENCE_TASK(&iVar41);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_62(uParam0->f_2), false, false);
			}
			func_533(&(uParam1->f_6), 1);
			break;
		case 1:
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(func_62(uParam0->f_2), true))
			{
				func_228(&(uParam1->f_41));
				func_533(&(uParam1->f_6), 6);
			}
			func_60(&(uParam1->f_41), 0);
			if (func_67(&(uParam1->f_41)) && func_229(&(uParam1->f_41)) > 5f)
			{
				func_68(&(uParam1->f_41));
				func_533(&(uParam1->f_6), 0);
			}
			break;
		case 6:
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(func_62(uParam0->f_2), true))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar41);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_532(3, 9), 1.25f, -1, 0.25f, false, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
				TASK::CLOSE_SEQUENCE_TASK(iVar41);
				TASK::TASK_PERFORM_SEQUENCE(func_62(uParam0->f_2), iVar41);
				TASK::CLEAR_SEQUENCE_TASK(&iVar41);
				func_68(&(Local_195.f_38));
				func_533(&(uParam1->f_6), 7);
			}
			break;
		case 7:
			if (func_216(func_62(uParam0->f_2), func_532(3, 9), 1) < 5f || func_215(&(Local_195.f_38), 15f))
			{
				if ((PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(func_62(uParam0->f_2), true) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && func_534(Global_35, func_62(uParam0->f_2), 12f, 1))
				{
					func_535(2);
					func_533(&(uParam1->f_6), 8);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(func_62(uParam0->f_2), 242628503, 1) != 1)
			{
				func_533(&(uParam1->f_6), 6);
			}
			break;
		case 8:
			if (!PED::DOES_GROUP_EXIST(uParam1->f_36))
			{
				uParam1->f_36 = PED::CREATE_GROUP(0);
				PED::SET_GROUP_FORMATION(uParam1->f_36, 3);
				PED::SET_PED_AS_GROUP_LEADER(func_62(uParam0->f_2), uParam1->f_36, 0);
				PED::SET_PED_CONFIG_FLAG(func_62(uParam0->f_2), 279, true);
				func_268(7);
			}
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(func_62(uParam0->f_2), sLocal_137, 0, 25612, -1, 0, 0, -1);
			func_228(&(uParam1->f_56));
			uParam1->f_339 = { Global_36 };
			PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::GET_PLAYER_INDEX(), func_62(uParam0->f_2), 2f, 0f, 1, 2, 0);
			PED::_0x0E9E95FDEDCC9D35(Global_35, 1, 0);
			func_536(uParam1, 1);
			func_533(&(uParam1->f_6), 9);
			break;
		case 9:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(func_62(uParam0->f_2), 0))
			{
				TASK::SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER(func_62(uParam0->f_2), 1);
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(func_62(uParam0->f_2), 1.75f, 0, 0.2f, 0);
				func_537(1, 1);
				PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::GET_PLAYER_INDEX(), func_62(uParam0->f_2), 2f, 0f, 1, 2, 0);
				PED::_0x0E9E95FDEDCC9D35(Global_35, 1, 0);
				func_68(&(Local_195.f_56));
				func_533(&(uParam1->f_6), 10);
			}
			else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(func_62(uParam0->f_2), sLocal_137))
			{
				func_533(&(uParam1->f_6), 8);
			}
			break;
		case 10:
			func_538(uParam0);
			if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(func_62(uParam0->f_2), sLocal_137))
			{
				func_533(&(uParam1->f_6), 15);
			}
			bVar42 = func_539(func_62(uParam0->f_2));
			fVar43 = func_216(func_62(uParam0->f_2), func_540(), 1);
			if (!bVar42 && fVar43 > 10f)
			{
				func_533(&(uParam1->f_6), 13);
				return 0;
			}
			if (!func_541(Global_35))
			{
				func_60(&(Local_195.f_56), 0);
				if (func_215(&(Local_195.f_56), 3f))
				{
					func_9(2);
					func_533(&(uParam1->f_6), 11);
				}
			}
			else
			{
				func_68(&(Local_195.f_56));
			}
			break;
		case 11:
			TASK::OPEN_SEQUENCE_TASK(&iVar41);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
			TASK::CLOSE_SEQUENCE_TASK(iVar41);
			TASK::TASK_PERFORM_SEQUENCE(func_62(uParam0->f_2), iVar41);
			TASK::CLEAR_SEQUENCE_TASK(&iVar41);
			func_533(&(uParam1->f_6), 12);
			break;
		case 12:
			if ((PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(func_62(uParam0->f_2), true) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && func_534(Global_35, func_62(uParam0->f_2), 12f, 1))
			{
				func_535(2);
				func_533(&(uParam1->f_6), 8);
			}
			break;
		case 13:
			if (!func_539(func_62(uParam0->f_2)))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(func_62(uParam0->f_2), 1868526510, 1) != 1)
				{
					func_542(func_62(uParam0->f_2), iLocal_28, 0, 1065353216, -1);
				}
			}
			else
			{
				func_533(&(uParam1->f_6), 9);
			}
			break;
		case 15:
			TASK::OPEN_SEQUENCE_TASK(&iVar41);
			TASK::TASK_DISMOUNT_ANIMAL(0, 262144, 0, 0, 0, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_532(2, 1), 1f, -1, 0.25f, 4456448, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
			TASK::CLOSE_SEQUENCE_TASK(iVar41);
			TASK::TASK_PERFORM_SEQUENCE(func_62(uParam0->f_2), iVar41);
			TASK::CLEAR_SEQUENCE_TASK(&iVar41);
			func_533(&(uParam1->f_6), 16);
			break;
		case 16:
			if (!func_539(Global_35))
			{
				func_218("FISH01_O_DSJV");
				func_228(&(uParam1->f_56));
				func_68(&uLocal_149);
				PLAYER::_0x0C6B89876262A99D(PLAYER::GET_PLAYER_INDEX(), func_62(uParam0->f_2));
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				func_536(uParam1, 0);
				func_68(&(uParam1->f_56));
				func_533(&(uParam1->f_6), 17);
			}
			else if (func_67(&(uParam1->f_56)) && func_229(&(uParam1->f_56)) >= 6f)
			{
				if (!func_75(uParam1->f_94, -2147483648))
				{
					func_228(&(uParam1->f_56));
					func_221(&(uParam1->f_94), -2147483648);
				}
				else
				{
					StringCopy(&cVar0, "FIHJ1ARVDSMT", 24);
					func_529(&uLocal_36, cVar0, 0, -1, 0, 0);
					func_68(&(uParam1->f_56));
				}
			}
			break;
		case 17:
			if (PED::IS_PED_ON_MOUNT(func_62(uParam0->f_2)))
			{
				return 0;
			}
			func_218("FISH01_O_GTFS");
			if (!func_543(2))
			{
				func_535(2);
			}
			if (!func_67(&(Local_195.f_56)))
			{
				func_228(&(Local_195.f_56));
			}
			iVar44 = 25612;
			func_544(func_62(uParam0->f_2), Global_35, &Var3, 0f, 0f, 0f, sLocal_139, iVar44, 1, 5f, 2f, -1.2f, 1f, 1092616192, -1, 1, 0, 0, 0, 1);
			func_545(Global_35, func_62(uParam0->f_2), &Var3, -1082130432, 0, 0, -1082130432, 0.5f, 0, 32, 0.8f, 0.5f, 1069547520, 1073741824, 1050253722, 2f, 1, 0, -1, 1, -1082130432, -1082130432, 1);
			func_546(&(uParam1->f_19));
			func_547();
			func_537(1, 1);
			func_533(&(uParam1->f_6), 18);
			break;
		case 18:
			if (func_531(func_62(uParam0->f_2), 985146578) || func_548(func_62(uParam0->f_2), func_532(1, 3), 3f, 1, 1))
			{
				func_549(&Local_195, 0);
				func_533(&(uParam1->f_6), 19);
			}
			break;
		case 19:
			if (!func_531(func_62(uParam0->f_2), 985146578))
			{
				func_550(func_62(uParam0->f_2), 1);
				func_551(Global_35, 1);
				func_552(&(uParam1->f_19));
				func_533(&(uParam1->f_6), 4);
			}
			else
			{
				func_553(func_62(uParam0->f_2), Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				func_554(Global_35, func_62(uParam0->f_2), 1, 1, 1, 0, 1, 1, 0, 1, 1);
				func_555(&(uParam1->f_19), func_62(uParam0->f_2));
			}
			break;
		case 4:
			TASK::TASK_TURN_PED_TO_FACE_COORD(func_62(uParam0->f_2), 1182.44f, -582.5126f, 68.1995f, 0);
			func_533(&(uParam1->f_6), 5);
			break;
		case 5:
			if (func_556(func_62(uParam0->f_2), Global_35, 1, 1) < 5f && !func_531(func_62(uParam0->f_2), 1464580341))
			{
				if (func_557(&uLocal_36, "FIHJ1_STRTFISH", func_62(uParam0->f_2), Global_35, 0, 0, 1, 1))
				{
					func_228(&uLocal_17);
					if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
					{
						MAP::REMOVE_BLIP(&(Local_195.f_90));
					}
					Local_195.f_90 = MAP::_0xA6EF0C54A3443E70(408396114, Local_195.f_355);
					func_218("FISH01_O_FFSL");
					if (func_543(2))
					{
						func_9(2);
					}
					if (!func_67(&(Local_195.f_38)))
					{
						func_228(&(Local_195.f_38));
					}
					func_533(&(uParam1->f_6), 20);
				}
			}
			break;
		case 20:
			func_60(&(Local_195.f_38), 0);
			if (func_215(&(Local_195.f_38), 2f))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar41);
				TASK::TASK_PLAY_ANIM(0, "script_re@lost_drunk@player_point", "FWD_LEFT", 8f, -4f, -1, 24, 0, 0, 0, 0, 0, 0);
				TASK::TASK_ACHIEVE_HEADING(0, func_558(1, 6), 0);
				TASK::TASK_PLAY_ANIM(0, "script_re@lost_drunk@player_point", "BK_RIGHT", 4f, -4f, -1, 24, 0, 0, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar41);
				TASK::TASK_PERFORM_SEQUENCE(func_62(uParam0->f_2), iVar41);
				TASK::CLEAR_SEQUENCE_TASK(&iVar41);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_62(uParam0->f_2), false, false);
				if (!func_67(&(Local_195.f_56)))
				{
					func_228(&(Local_195.f_56));
				}
				func_228(&(uParam1->f_41));
				func_68(&(Local_195.f_38));
				func_533(&(uParam1->f_6), 21);
			}
			break;
		case 21:
			if (func_229(&(uParam1->f_41)) > 2.5f)
			{
				TASK::CLEAR_PED_TASKS(func_62(uParam0->f_2), 1, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar41);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_140, 0, 25612, -1, 0, 0, -1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_532(1, 6), 1f, -1, 0.25f, false, func_558(1, 6));
				TASK::TASK_ACHIEVE_HEADING(0, func_558(1, 6), 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar41);
				TASK::TASK_PERFORM_SEQUENCE(func_62(uParam0->f_2), iVar41);
				TASK::CLEAR_SEQUENCE_TASK(&iVar41);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_62(uParam0->f_2), false, false);
				func_228(&(uParam1->f_41));
				func_533(&(uParam1->f_6), 22);
			}
			else
			{
				Var45.f_4 = -1;
				Var45.f_8 = 2;
				Var45.f_9 = 1;
				Var45.f_10 = 1;
				Var45.f_11 = 1;
				Var45.f_13 = 1;
				Var45.f_14 = 2;
				Var45.f_15 = 2;
				Var45.f_16 = 3;
				Var45.f_19 = 3;
				Var45.f_20 = 1;
				Var45.f_21 = 3;
				Var45.f_22 = 3;
				Var45 = { 0f, 0f, 0f };
				Var45.f_3 = Global_35;
				Var45.f_8 = 4;
				Var45.f_13 = 3;
				Var45.f_7 = 500;
				_NAMESPACE29::_0x66F9EB44342BB4C5(func_62(uParam0->f_2), &Var45);
			}
			if (func_229(&(uParam1->f_41)) > 15f)
			{
				if (!func_67(&uLocal_17))
				{
					func_521(&uLocal_17, 5f);
				}
				func_533(&(uParam1->f_6), 21);
			}
			break;
		case 22:
			if (!func_531(func_62(uParam0->f_2), 242628503) && func_215(&(uParam1->f_41), 2f))
			{
				if (func_548(func_62(uParam0->f_2), func_532(1, 6), 3f, 1, 1))
				{
					func_537(1, 0);
					func_559(1);
					func_560();
					func_533(&(uParam1->f_6), 23);
				}
				else
				{
					func_533(&(uParam1->f_6), 21);
				}
			}
			else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(func_62(uParam0->f_2), 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(func_62(uParam0->f_2), 1f, 0, -1f, 0);
			}
			break;
		case 23:
			func_537(1, 0);
			func_559(1);
			if (func_67(&(uParam1->f_41)) && func_229(&(uParam1->f_41)) > 10f)
			{
				if (!func_561(1))
				{
					func_560();
					func_228(&(uParam1->f_41));
				}
				else
				{
					func_68(&(uParam1->f_41));
				}
			}
			if (func_562(1) || func_563(&(uParam1->f_96)))
			{
				if (!func_563(&(uParam1->f_96)))
				{
					uParam1->f_86++;
				}
				func_63(1, 1);
				func_533(&(uParam1->f_6), 24);
			}
			break;
		case 24:
			if (func_563(&(uParam1->f_96)))
			{
				func_533(&(uParam1->f_6), 25);
			}
			break;
		case 25:
			if (!func_563(&(uParam1->f_96)))
			{
				func_63(1, 0);
				func_533(&(uParam1->f_6), 27);
			}
			break;
		case 27:
			bVar70 = func_561(1);
			if (bVar70 && !func_75(uParam1->f_94, 8))
			{
				func_559(1);
			}
			if (func_75(uParam1->f_94, 8))
			{
				if (!func_67(&(uParam1->f_44)))
				{
					func_228(&(uParam1->f_44));
				}
				if (bVar70)
				{
					if (!func_564(1) || !func_565(1))
					{
						if (func_67(&(uParam1->f_44)))
						{
							if (func_229(&(uParam1->f_44)) > 1f)
							{
								if (!func_75(uParam1->f_94, 4194304))
								{
									func_221(&(uParam1->f_94), 4194304);
								}
								func_68(&(uParam1->f_44));
								func_533(&(uParam1->f_6), 29);
							}
						}
					}
				}
			}
			break;
		case 29:
			if (func_75(uParam1->f_94, 4194304))
			{
				func_566();
				if (!func_567(1) && func_557(&uLocal_36, "FIHJ1_IG2", func_62(uParam0->f_2), Global_35, 0, 0, 1, 1))
				{
					func_535(2);
					AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_STOP_FISH");
					func_228(&(Local_195.f_56));
					func_533(&(uParam1->f_6), 30);
				}
			}
			break;
		case 30:
			func_566();
			PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
			PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
			PAD::DISABLE_CONTROL_ACTION(0, 1499911466, false);
			func_568(Local_195.f_37, &uLocal_1599, 1500, Global_35);
			func_568(Global_35, &uLocal_1574, 1500, Local_195.f_37);
			if (!CAM::IS_GAMEPLAY_HINT_ACTIVE() && func_215(&(Local_195.f_56), 1.25f))
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(Local_195.f_37, 0f, 0f, 0f, true, 45000, 10000, 3000, 0);
			}
			if (func_548(Local_195.f_37, func_532(2, 5), 3f, 1, 1) && !func_531(Global_35, -875674219))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Local_195.f_37, 6000, -1082130432, -1082130432, -1082130432);
			}
			if (!func_567(1) && func_569(Local_195.f_37, 0) != joaat("weapon_fishingrod"))
			{
				func_68(&(Local_195.f_56));
				func_570(1);
				func_535(2);
				func_571(&(Local_195.f_37), &iLocal_1553, &iLocal_1554, "FISH01_UC_LEAV", "FISH01_UC_STAY", fLocal_1561, iLocal_1562);
				if (!func_531(Global_35, -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Local_195.f_37, 6000, -1082130432, -1082130432, -1082130432);
				}
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0f);
				if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(Local_195.f_37, 0f, 0f, 0f, true, 45000, 10000, 3000, 0);
				}
				func_533(&(uParam1->f_6), 31);
			}
			break;
		case 31:
			func_566();
			PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
			PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
			PAD::DISABLE_CONTROL_ACTION(0, 1499911466, false);
			if (!func_205(iLocal_1553) || !func_205(iLocal_1554))
			{
				func_571(&(Local_195.f_37), &iLocal_1553, &iLocal_1554, "FISH01_UC_LEAV", "FISH01_UC_STAY", fLocal_1561, iLocal_1562);
				func_535(2);
				func_68(&(Local_195.f_56));
				iVar71 = -1;
			}
			else if (func_205(iLocal_1553) && func_205(iLocal_1554))
			{
				if (func_548(Local_195.f_37, func_532(2, 5), 2f, 1, 1))
				{
					func_60(&uLocal_1555, 0);
				}
				iVar71 = func_572(Local_195.f_37, &iLocal_1553, &iLocal_1554, fLocal_1561, 1, "COMP_JAVIER");
			}
			if (((((iVar71 != -1 || !func_573(Global_35, &(uLocal_1565[2]), 1, 0)) || (!func_573(Global_35, &(uLocal_1565[1]), 1, 0) && !func_534(Global_35, Local_195.f_37, fLocal_1561, 1))) || func_215(&uLocal_1555, 10.5f)) || func_75(Local_195.f_95, 1024)) || func_75(Local_195.f_95, 512))
			{
				if (((iVar71 == 0 || !func_573(Global_35, &(uLocal_1565[2]), 1, 0)) || (!func_573(Global_35, &(uLocal_1565[1]), 1, 0) && !func_534(Global_35, Local_195.f_37, fLocal_1561, 1))) || (func_215(&uLocal_1555, 10.5f) && !func_573(Global_35, &(uLocal_1565[1]), 1, 0)))
				{
					if ((!func_75(Local_195.f_95, 512) && !func_567(1)) && func_557(&uLocal_36, "FIHJ1_IG2_POS", Global_35, func_62(uParam0->f_2), 0, 0, 1, 1))
					{
						func_221(&(Local_195.f_95), 512);
					}
				}
				else if (iVar71 == 1 || (func_215(&uLocal_1555, 10.5f) && func_573(Global_35, &(uLocal_1565[1]), 1, 0)))
				{
					if ((!func_75(Local_195.f_95, 1024) && !func_567(1)) && func_557(&uLocal_36, "FIHJ1_IG2_NEG", Global_35, func_62(uParam0->f_2), 0, 0, 1, 1))
					{
						func_221(&(Local_195.f_95), 1024);
					}
				}
				if (func_75(Local_195.f_95, 1024) || func_75(Local_195.f_95, 512))
				{
					func_206(&iLocal_1553, 1, 1);
					func_206(&iLocal_1554, 1, 1);
					CAM::STOP_GAMEPLAY_HINT(false);
					func_9(2);
					MISC::_0xE98D55C5983F2509(func_62(uParam0->f_2));
					func_533(&(uParam1->f_6), 32);
				}
			}
			break;
		case 32:
			func_566();
			PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
			PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
			PAD::DISABLE_CONTROL_ACTION(0, 1499911466, false);
			if (func_75(Local_195.f_95, 1024) || func_75(Local_195.f_95, 512))
			{
				if (!func_75(Local_195.f_94, 134217728))
				{
					TASK::CLEAR_PED_TASKS(func_62(uParam0->f_2), 1, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(func_62(uParam0->f_2), joaat("weapon_unarmed"), false, 0, false, false);
					TASK::TASK_SWAP_WEAPON(func_62(uParam0->f_2), 1, 0, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_62(uParam0->f_2), false, false);
					func_221(&(Local_195.f_94), 67108864);
					func_221(&(Local_195.f_94), 134217728);
				}
			}
			if (func_75(Local_195.f_95, 1024))
			{
				if (!func_574("FIHJ1_IG2_NEG"))
				{
					func_533(&(uParam1->f_6), 33);
				}
			}
			if (func_75(Local_195.f_95, 512))
			{
				if (!func_574("FIHJ1_IG2_POS"))
				{
					if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
					{
						MAP::REMOVE_BLIP(&(Local_195.f_90));
					}
					func_575(7);
					func_533(&(uParam1->f_6), 33);
				}
			}
			break;
		case 33:
			PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
			PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
			PAD::DISABLE_CONTROL_ACTION(0, 1499911466, false);
			if (!func_67(&(Local_195.f_68)))
			{
				func_228(&(Local_195.f_68));
			}
			else if (func_229(&(Local_195.f_68)) > 1f)
			{
				func_576(0);
				func_533(&(uParam1->f_6), 34);
			}
			break;
		case 34:
			PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
			PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
			PAD::DISABLE_CONTROL_ACTION(0, 1499911466, false);
			if (TASK::GET_SCRIPT_TASK_STATUS(func_62(uParam0->f_2), 716706914, 1) == 1 || func_569(func_62(uParam0->f_2), 0) != joaat("weapon_fishingrod"))
			{
				func_533(&(uParam1->f_6), 37);
			}
			break;
		case 37:
			if (TASK::GET_SCRIPT_TASK_STATUS(func_62(uParam0->f_2), 716706914, 1) == 1)
			{
				return 0;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_28))
			{
				func_228(&(Local_195.f_41));
				return 1;
			}
			break;
	}
	return 0;
}

struct<4> func_234(int iParam0)
{
	struct<4> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { func_532(3, 5) };
			Var0.f_3 = func_558(3, 5);
			break;
		case 1:
			Var0 = { func_532(0, 2) };
			Var0.f_3 = func_558(0, 2);
			break;
		case 2:
			Var0 = { 1158.692f, -574.4988f, 76.6756f };
			Var0.f_3 = 241.7831f;
			break;
		case 3:
			Var0 = { func_532(1, 2) };
			Var0.f_3 = func_558(1, 2);
			break;
		case 4:
			Var0 = { 1182.354f, -580.723f, 67.0964f };
			Var0.f_3 = 251.5964f;
			break;
		case 5:
			Var0 = { func_532(1, 2) };
			Var0.f_3 = func_558(1, 2);
			break;
		case 6:
			Var0 = { func_532(1, 2) };
			Var0.f_3 = func_558(1, 2);
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
		func_105(0);
	}
	uParam0->f_7 = iParam9;
	Global_1391438->f_3 = iParam9;
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_577(uParam0->f_5, Var0, Var4, iParam9, iParam10);
}

void func_236(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_578(&(Local_195.f_4), 0);
	func_579(&(Local_195.f_5), 0);
}

int func_237(var uParam0)
{
	func_580(uParam0);
	switch (Local_195.f_4)
	{
		case 0:
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
			{
				if (ENTITY::_0x083D497D57B7400F(iLocal_27))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_27, false);
				}
				func_268(7);
				func_578(&(Local_195.f_4), 29);
			}
			break;
		case 29:
			if (((((!func_574("FIHJ1_CLM_WNT") && !func_574("FIHJ1JAVMNT")) && !func_574("FIHJ1_DPART_MRN")) && !func_574("FIHJ1_DPART_EVN")) && func_217("FIHJ1_DPART")) && func_217("FIHJ1JAVMNT"))
			{
				func_235(uParam0, func_234(1), func_234(2), 1, 2);
				return 1;
			}
			break;
	}
	return 0;
}

int func_238(var uParam0)
{
	vector3 vVar0[24];

	func_581(uParam0);
	if (PED::IS_PED_ON_MOUNT(func_62(uParam0->f_2)) && TASK::GET_PED_WAYPOINT_PROGRESS(func_62(uParam0->f_2)) < 30)
	{
		if (!func_582(uParam0, &Local_195, "FISH01_O_CTCJ", 22f, 12f, 45f, 0))
		{
			return 0;
		}
	}
	else if (PED::IS_PED_ON_MOUNT(func_62(uParam0->f_2)) && !func_582(uParam0, &Local_195, "FISH01_O_CTCJ", 1106247680, 1101004800, 1114636288, 1))
	{
		return 0;
	}
	else if (!func_582(uParam0, &Local_195, "FISH01_O_CTCJ", 1106247680, 1101004800, 90f, 1))
	{
		return 0;
	}
	switch (Local_195.f_4)
	{
		case 0:
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(func_62(uParam0->f_2), true) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(func_62(uParam0->f_2), sLocal_137))
			{
				PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::GET_PLAYER_INDEX(), func_62(uParam0->f_2), 2f, 0f, 1, 2, 0);
				PED::_0x0E9E95FDEDCC9D35(Global_35, 0, 0);
				func_235(uParam0, func_234(1), func_234(2), 1, 2);
				func_268(7);
				func_578(&(Local_195.f_4), 1);
			}
			break;
		case 1:
			if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(func_62(uParam0->f_2), sLocal_137) && (func_573(func_62(uParam0->f_2), Local_195.f_354, 1, 0) || func_548(func_62(uParam0->f_2), func_532(1, 0), 70f, 1, 1)))
			{
				func_578(&(Local_195.f_4), 2);
			}
			break;
		case 2:
			if (!func_541(func_62(uParam0->f_2)))
			{
				func_60(&(Local_195.f_56), 0);
			}
			if (func_583(uParam0, &Local_195, 32, 1069547520) || !func_539(Global_35))
			{
				func_218("FISH01_O_DSJV");
				func_68(&uLocal_149);
				PLAYER::_0x0C6B89876262A99D(PLAYER::GET_PLAYER_INDEX(), func_62(uParam0->f_2));
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				func_578(&(Local_195.f_4), 3);
			}
			else if ((func_67(&(Local_195.f_56)) && func_229(&(Local_195.f_56)) >= 3.5f) && func_539(Global_35))
			{
				if (!func_75(Local_195.f_94, -2147483648))
				{
					func_219("FISH01_O_DSJV", 7500, 0, 1, 0, 0, -1, -1, 0);
					func_228(&(Local_195.f_56));
					func_221(&(Local_195.f_94), -2147483648);
				}
				else
				{
					StringCopy(&cVar0, "FIHJ1ARVDSMT", 24);
					func_529(&uLocal_36, cVar0, 0, -1, 0, 0);
					func_68(&(Local_195.f_56));
				}
			}
			break;
		case 3:
			PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::PLAYER_ID(), 28, 1);
			if (!func_539(Global_35) && (func_573(Global_35, Local_195.f_354, 1, 0) || func_548(Global_35, func_532(1, 0), 50f, 1, 1)))
			{
				func_578(&(Local_195.f_4), 29);
			}
			break;
		case 29:
			PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::PLAYER_ID(), 28, 1);
			func_235(uParam0, func_234(2), func_234(3), 2, 3);
			return 1;
	}
	return 0;
}

int func_239(var uParam0)
{
	func_584(uParam0);
	PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::PLAYER_ID(), 28, 1);
	switch (Local_195.f_4)
	{
		case 0:
			if ((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(func_62(uParam0->f_2), sLocal_139) || func_548(func_62(uParam0->f_2), func_532(1, 3), 2f, 1, 1)) || func_573(Global_35, Local_195.f_355, 1, 0))
			{
				func_578(&(Local_195.f_4), 1);
			}
			break;
		case 1:
			if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(func_62(uParam0->f_2), sLocal_139) && (func_548(func_62(uParam0->f_2), func_532(1, 3), 2f, 1, 1) || func_573(Global_35, Local_195.f_355, 1, 0)))
			{
				func_578(&(Local_195.f_4), 29);
			}
			break;
		case 29:
			func_235(uParam0, func_234(3), func_234(4), 3, 4);
			return 1;
	}
	return 0;
}

int func_240(var uParam0)
{
	vector3 vVar0[24];

	func_585(uParam0);
	func_586(&Local_195);
	if (func_75(Local_195.f_94, 33554432) && (func_217("FIHJ1LIFE") || func_574("FIHJ1LIFE")))
	{
		if (func_587(0))
		{
			func_588();
		}
		else
		{
			func_589();
		}
	}
	switch (Local_195.f_4)
	{
		case 0:
			if (func_573(Global_35, Local_195.f_355, 1, 0))
			{
				func_590(128);
				func_268(7);
				func_591();
				func_592();
				func_593(0);
				func_578(&(Local_195.f_4), 1);
			}
			break;
		case 1:
			if (func_573(Global_35, Local_195.f_355, 1, 0))
			{
				func_560();
				Local_195.f_84 = 0;
				func_578(&(Local_195.f_4), 2);
			}
			break;
		case 2:
			if (func_594() && func_561(0))
			{
				func_578(&(Local_195.f_4), 3);
			}
			break;
		case 3:
			if (func_595(0))
			{
				if (!func_75(Local_195.f_94, 4))
				{
					func_221(&(Local_195.f_94), 4);
				}
				func_578(&(Local_195.f_4), 4);
			}
			else if (func_75(Local_195.f_94, 4))
			{
				func_596(&(Local_195.f_94), 4);
			}
			if (!func_594() || !func_561(0))
			{
				func_578(&(Local_195.f_4), 2);
			}
			break;
		case 4:
			if (func_75(Local_195.f_94, 131072))
			{
				if (!TASK::_0xB520DBDA7FCF573F(func_62(uParam0->f_2)))
				{
					if (!func_67(&(Local_195.f_77)))
					{
						func_228(&(Local_195.f_77));
					}
				}
			}
			if (func_75(Local_195.f_94, 131072))
			{
				func_60(&(Local_195.f_53), 0);
				if (func_215(&(Local_195.f_53), 6f))
				{
					func_63(1, func_567(1));
				}
				else
				{
					func_63(1, 1);
				}
			}
			func_63(0, 1);
			func_597();
			if (!TASK::_0xB520DBDA7FCF573F(func_62(uParam0->f_2)))
			{
				if (func_215(&(Local_195.f_77), 60f) && func_75(Local_195.f_94, 33554432))
				{
					if (!func_567(0))
					{
						func_578(&(Local_195.f_4), 29);
						func_68(&(Local_195.f_77));
					}
				}
				else if (func_215(&(Local_195.f_77), 55f))
				{
					if (!func_567(0))
					{
						if (!func_75(Local_195.f_94, 33554432) && func_587(0))
						{
							StringCopy(&cVar0, "FIHJ1LIFE", 24);
							func_529(&uLocal_36, cVar0, 0, -1, 0, 0);
							func_588();
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 256, 0);
							func_221(&(Local_195.f_94), 33554432);
						}
					}
				}
				func_60(&(Local_195.f_77), 0);
			}
			else if (func_67(&(Local_195.f_77)))
			{
				func_68(&(Local_195.f_77));
			}
			if ((((!func_75(Local_195.f_94, 8192) && func_217("FIHJ1_REM")) && func_217("FIHJ1_WEATHER")) && !func_574("FIHJ1_REM")) && !func_574("FIHJ1_WEATHER"))
			{
				func_228(&(Local_195.f_59));
				func_221(&(Local_195.f_94), 8192);
			}
			if (func_587(0) && func_75(Local_195.f_94, 8192))
			{
				if (func_587(1))
				{
					if (func_75(Local_195.f_94, 33554432) && (func_229(&(Local_195.f_59)) >= 10f || (!func_574("FIHJ1LIFE") && func_229(&(Local_195.f_59)) >= 2f)))
					{
						if (!func_567(0))
						{
							if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
							{
								func_588();
								PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
							}
							func_63(1, 0);
							func_578(&(Local_195.f_4), 29);
						}
					}
					else if (func_229(&(Local_195.f_59)) >= 10f && !func_75(Local_195.f_94, 33554432))
					{
						if (!func_567(0) && func_587(0))
						{
							func_228(&(Local_195.f_59));
							StringCopy(&cVar0, "FIHJ1LIFE", 24);
							func_529(&uLocal_36, cVar0, 0, -1, 0, 0);
							func_588();
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
							func_63(1, 1);
							func_220("FIHJ1LIFE", 1);
							func_221(&(Local_195.f_94), 33554432);
						}
					}
					else
					{
						if (func_574("FIHJ1LIFE"))
						{
						}
						if (func_75(Local_195.f_94, 33554432) && func_229(&(Local_195.f_59)) >= 10f)
						{
						}
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && func_587(0))
						{
							func_588();
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
						}
					}
				}
				else if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && func_587(0))
				{
					func_588();
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
				}
			}
			else if (func_75(Local_195.f_94, 8192))
			{
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
				}
			}
			if (!func_594() || !func_561(0))
			{
				func_578(&(Local_195.f_4), 2);
			}
			break;
		case 29:
			func_588();
			func_235(uParam0, func_234(4), func_234(5), 4, 5);
			return 1;
	}
	return 0;
}

int func_241(var uParam0)
{
	CAM::_REQUEST_LETTER_BOX_OVERTIME(0, -1, 0, 17, 1, 0);
	func_598(1);
	func_599(0);
	func_600(0);
	func_601(0);
	func_602(1);
	TASK::_0x31BB338F64D5C861(Global_35, 1);
	TASK::_0x31BB338F64D5C861(Local_195.f_37, 1);
	func_603(&(Local_195.f_96), Global_35, 0, "w_melee_fishingpole02^1", 0, 0);
	func_603(&(Local_195.f_96), Local_195.f_37, 0, "w_melee_fishingpole02", 0, 0);
	func_605(&(Local_195.f_96), func_604(0));
	func_596(&(Local_195.f_94), 32);
	func_596(&(Local_195.f_94), 64);
	func_596(&(Local_195.f_94), 128);
	func_596(&(Local_195.f_94), 256);
	func_588();
	func_570(1);
	func_63(0, 1);
	func_63(1, 1);
	func_606();
	return 1;
}

int func_242(var uParam0)
{
	char cVar0[32];

	StringCopy(&cVar0, func_604(0), 32);
	if (func_607(cVar0, &(Local_195.f_96)))
	{
		ENTITY::_0x203BEFFDBE12E96A(Global_35, 1182.496f, -580.8946f, 67.0303f, 246.3689f, 1, 1, 1);
		func_608(-20.9653f, -10.7725f);
		CAM::_REQUEST_LETTER_BOX_OVERTIME(0, -1, 0, 17, 1, 0);
		return 1;
	}
	return 0;
}

int func_243(var uParam0)
{
	int iVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (iVar0 != joaat("weapon_fishingrod"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_fishingrod"), true, 0, false, false);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
	}
	WEAPON::GET_CURRENT_PED_WEAPON(func_62(uParam0->f_2), &iVar0, true, 0, false);
	if (iVar0 != joaat("weapon_fishingrod"))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(func_62(uParam0->f_2), joaat("weapon_fishingrod"), 1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_62(uParam0->f_2), false, false);
		func_609(1);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
	func_559(1);
	func_600(1);
	func_601(0);
	if (!func_171(-1753819339, 1, 0))
	{
		func_143(-1753819339, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
	}
	func_610(-1753819339);
	func_290(128);
	func_593(0);
	TASK::_0x31BB338F64D5C861(Global_35, 0);
	TASK::_0x31BB338F64D5C861(func_62(uParam0->f_2), 0);
	func_560();
	func_68(&(Local_195.f_47));
	func_570(0);
	func_611(1, 0);
	func_235(uParam0, func_234(4), func_234(5), 4, 5);
	func_63(1, 0);
	func_612(0, 0);
	func_602(0);
	func_613();
	return 1;
}

int func_244(var uParam0)
{
	bool bVar0;

	func_614();
	func_615(uParam0);
	func_597();
	switch (Local_195.f_4)
	{
		case 18:
			if (func_561(0))
			{
				func_578(&(Local_195.f_4), 1);
			}
			break;
		case 19:
			if (func_561(0))
			{
				func_578(&(Local_195.f_4), 3);
			}
			break;
		case 0:
			if (!func_587(0) && func_561(0))
			{
				func_578(&(Local_195.f_4), 1);
			}
			break;
		case 1:
			if (func_595(0) && func_616(0) == -1753819339)
			{
				func_602(0);
				func_578(&(Local_195.f_4), 2);
			}
			if (!func_561(0))
			{
				func_578(&(Local_195.f_4), 18);
			}
			break;
		case 2:
			if (Local_195.f_84 != func_617(0))
			{
				Local_195.f_84 = func_617(0);
			}
			func_60(&(Local_195.f_50), 0);
			if ((func_616(0) == -1753819339 && func_215(&(Local_195.f_50), MISC::GET_RANDOM_FLOAT_IN_RANGE(1.75f, 3.25f))) && (Local_195.f_84 == 0 || (Local_195.f_84 >= 1 && func_217("FIHJ1_REM2"))))
			{
				bVar0 = (func_595(0) && func_616(0) == -1753819339);
				func_63(0, (func_567(1) || bVar0 == 0));
			}
			else
			{
				func_63(0, 1);
			}
			if (Local_195.f_84 >= 1)
			{
				if (!func_67(&(Local_195.f_47)))
				{
					func_579(&(Local_195.f_5), 5);
					func_68(&(Local_195.f_56));
					func_60(&(Local_195.f_47), 0);
				}
				if (((func_215(&(Local_195.f_47), 5f) && !func_567(1)) && func_217("FIHJ1_TRYAGN")) || func_215(&(Local_195.f_47), 20f))
				{
					Local_195.f_84 = 1;
					func_68(&(Local_195.f_47));
					func_578(&(Local_195.f_4), 3);
				}
			}
			break;
		case 3:
			if (func_595(0))
			{
				func_602(0);
				func_68(&(Local_195.f_47));
				func_596(&(Local_195.f_94), 32);
				func_596(&(Local_195.f_94), 64);
				func_596(&(Local_195.f_94), 128);
				func_596(&(Local_195.f_94), 256);
				func_578(&(Local_195.f_4), 4);
			}
			if (!func_561(0))
			{
				func_578(&(Local_195.f_4), 19);
			}
			break;
		case 4:
			if (Local_195.f_84 != func_617(0))
			{
				Local_195.f_84 = func_617(0);
			}
			if (!func_75(Local_195.f_94, 262144))
			{
				func_60(&(Local_195.f_50), 0);
				if ((func_616(0) == -1753819339 && func_215(&(Local_195.f_50), MISC::GET_RANDOM_FLOAT_IN_RANGE(1.75f, 3.25f))) && (Local_195.f_84 == 0 || (Local_195.f_84 >= 1 && func_217("FIHJ1_REM2"))))
				{
					bVar0 = (func_595(0) && func_616(0) == -1753819339);
					func_63(0, (func_567(1) || bVar0 == 0));
				}
				else
				{
					func_63(0, 1);
				}
			}
			else
			{
				func_63(0, 1);
				func_63(1, 1);
				func_599(0);
				func_600(0);
				func_601(0);
				func_602(1);
				func_570(1);
			}
			if (Local_195.f_84 >= 2)
			{
				if (!func_75(Local_195.f_94, 262144))
				{
					if (func_618(0))
					{
						func_221(&(Local_195.f_94), 262144);
					}
					else if (func_619(0))
					{
						func_221(&(Local_195.f_94), 262144);
					}
				}
				if (func_75(Local_195.f_94, 262144))
				{
					func_60(&(Local_195.f_47), 0);
					if (func_215(&(Local_195.f_47), 0.25f))
					{
						func_599(0);
						func_600(0);
						func_601(0);
						func_602(1);
						func_570(1);
						func_221(&(Local_195.f_94), 8);
						func_578(&(Local_195.f_4), 29);
					}
				}
			}
			break;
		case 29:
			func_235(uParam0, func_234(5), func_234(6), 5, 6);
			return 1;
	}
	return 0;
}

int func_245(var uParam0)
{
	int iVar0;

	func_620(uParam0);
	if ((Local_195.f_4 > 0 && Local_195.f_4 != 29) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
	{
		CAM::_REQUEST_LETTER_BOX_OVERTIME(0, -1, 0, 17, 1, 0);
	}
	if (Local_195.f_4 > 0 && Local_195.f_4 <= 3)
	{
		_NAMESPACE29::_0x0EABF182FBB63D72(Global_35, 5, 1);
	}
	switch (Local_195.f_4)
	{
		case 0:
			if (func_75(Local_195.f_95, 512) || func_75(Local_195.f_95, 1024))
			{
				MISC::SET_BIT(&(Global_1956578->f_1), 5);
				func_606();
				func_621(250f);
				func_228(&uLocal_20);
				if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
				{
					MAP::REMOVE_BLIP(&(Local_195.f_90));
				}
				_NAMESPACE29::_0x0EABF182FBB63D72(Global_35, 5, 1);
				func_622(0, 1, 1, 0);
				if (func_75(Local_195.f_95, 512))
				{
					if (!func_587(0))
					{
						if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
						{
							func_596(&(Local_195.f_94), 16);
							MAP::REMOVE_BLIP(&(Local_195.f_90));
						}
						func_228(&(Local_195.f_56));
						func_578(&(Local_195.f_4), 1);
					}
				}
				else if (func_75(Local_195.f_95, 1024))
				{
					func_228(&uLocal_20);
					func_623(1);
					func_578(&(Local_195.f_4), 9);
				}
			}
			break;
		case 1:
			HUD::_0x4CC5F2FC1332577F(724769646);
			if (func_574("FIHJ1_IG2_POS") || func_557(&uLocal_36, "FIHJ1_IG2_POS", Global_35, func_62(uParam0->f_2), 0, 0, 1, 1))
			{
				func_9(2);
				func_624(&(Local_195.f_37));
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
				if (!CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
				{
					func_622(0, 1, 1, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
					func_626(Global_35, func_625(2, 2), 2, 1073741824);
					func_626(Local_195.f_37, func_625(2, 9), 2, 1073741824);
					func_626(iLocal_28, func_625(2, 11), 2, 1073741824);
					func_626(iLocal_27, func_625(2, 0), 2, 1073741824);
					AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_RETURN");
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
					TASK::TASK_STAND_STILL(Local_195.f_37, -1);
					_NAMESPACE29::_0x0EABF182FBB63D72(Global_35, 5, 1);
					iLocal_1563 = CAM::CREATE_CAMERA(26379945, true);
					CAM::SET_CAM_PARAMS(iLocal_1563, 1174.181f, -581.511f, 70.9806f, -9.1036f, 0f, -102.8413f, 26.8524f, 0, 1, 1, 2, 1, 0);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				func_228(&uLocal_20);
				func_578(&(Local_195.f_4), 2);
			}
			break;
		case 2:
			if ((!func_574("FIHJ1_IG2_POS") && func_627(&uLocal_20, 2f)) || func_627(&uLocal_20, 6f))
			{
				func_228(&uLocal_20);
				func_578(&(Local_195.f_4), 3);
			}
			break;
		case 3:
			if (((!func_574("FIHJ1_IG2_POS") || func_627(&uLocal_20, 2f)) && func_557(&uLocal_36, "FIHJ1_A_GO", func_62(uParam0->f_2), Global_35, 0, 0, 1, 1)) || (func_627(&uLocal_20, 8f) && !func_574("FIHJ1_A_GO")))
			{
				func_622(0, 1, 0, 0);
				_NAMESPACE29::_0x0EABF182FBB63D72(Global_35, 5, 0);
				func_68(&uLocal_20);
				func_578(&(Local_195.f_4), 4);
			}
			break;
		case 4:
			func_628();
			if (iLocal_1647 == 2)
			{
				func_60(&uLocal_20, 0);
			}
			else if (iLocal_1647 < 2)
			{
				func_622(0, 1, 0, 0);
				_NAMESPACE29::_0x0EABF182FBB63D72(Global_35, 5, 0);
			}
			if (func_627(&uLocal_20, 8f))
			{
				func_228(&uLocal_20);
				CAM::DO_SCREEN_FADE_OUT(3000);
				func_578(&(Local_195.f_4), 5);
			}
			break;
		case 5:
			func_628();
			if (iLocal_1647 == 3 && CAM::IS_SCREEN_FADED_OUT())
			{
				func_68(&uLocal_20);
				CAM::DO_SCREEN_FADE_IN(3000);
				func_578(&(Local_195.f_4), 6);
			}
			break;
		case 6:
			if (CAM::IS_SCREEN_FADED_IN())
			{
				func_60(&uLocal_20, 0);
				if (STREAMING::IS_LOAD_SCENE_ACTIVE())
				{
					STREAMING::_0x5A8B01199C3E79C3();
				}
			}
			if (func_628())
			{
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX(), 1.501f, 2000, 0f, true, false);
				HUD::_DISABLE_HUD_CONTEXT(724769646);
				func_228(&uLocal_20);
				func_221(&(Local_195.f_95), 16384);
				func_578(&(Local_195.f_4), 29);
			}
			break;
		case 9:
			HUD::_0x4CC5F2FC1332577F(724769646);
			if (func_574("FIHJ1_IG2_NEG") || func_557(&uLocal_36, "FIHJ1_IG2_NEG", Global_35, func_62(uParam0->f_2), 0, 0, 1, 1))
			{
				func_9(2);
				func_624(&(Local_195.f_37));
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
				func_622(0, 1, 1, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
				func_626(Global_35, func_625(2, 2), 2, 1073741824);
				func_626(Local_195.f_37, func_625(2, 6), 2, 1073741824);
				func_626(iLocal_28, func_625(2, 1), 2, 1073741824);
				TASK::TASK_STAND_STILL(Local_195.f_37, -1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, true, false);
				AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_END");
				iLocal_1563 = CAM::CREATE_CAMERA(26379945, true);
				CAM::SET_CAM_PARAMS(iLocal_1563, 1174.609f, -580.313f, 70.7421f, -1.6942f, 0f, -145.4783f, 35.5906f, 0, 1, 1, 2, 1, 0);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				func_228(&uLocal_20);
				func_578(&(Local_195.f_4), 10);
			}
			break;
		case 10:
			if ((!func_574("FIHJ1_IG2_NEG") && func_627(&uLocal_20, 1f)) || func_627(&uLocal_20, 2.3f))
			{
				if (func_574("FIHJ1_A_STAY") || func_557(&uLocal_36, "FIHJ1_A_STAY", func_62(uParam0->f_2), Global_35, 0, 0, 1, 1))
				{
					CAM::SET_CAM_PARAMS(iLocal_1563, 1171.679f, -575.6281f, 74.124f, 17.1551f, 0f, 96.1941f, 24.8162f, 0, 1, 1, 2, 1, 0);
					if (!ENTITY::IS_ENTITY_DEAD(Local_195.f_37))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						if (!PED::IS_PED_ON_MOUNT(Local_195.f_37))
						{
							TASK::TASK_MOUNT_ANIMAL(0, iLocal_28, 20000, -1, 1f, 262144, 0, 0);
						}
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_138, 0, 4220012, -1, 0, 0, -1);
						TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
						func_629(Local_195.f_37, &iVar0, 0, 0, 1, 1);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_fishingrod"), true, 0, false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
					func_228(&uLocal_20);
					func_578(&(Local_195.f_4), 11);
				}
			}
			break;
		case 11:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(func_62(uParam0->f_2), 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(func_62(uParam0->f_2), 2.5f, 0, -1f, 0);
			}
			if (((!func_574("FIHJ1_A_STAY") && !ENTITY::IS_ENTITY_ON_SCREEN(Local_195.f_37)) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_28)) || func_627(&uLocal_20, 4.8f))
			{
				func_630();
				func_631();
				func_608(-0.6962f, 10.6567f);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(iLocal_1563, false);
				_NAMESPACE29::_0x0EABF182FBB63D72(Global_35, 5, 0);
				func_228(&uLocal_20);
				func_578(&(Local_195.f_4), 12);
			}
			break;
		case 12:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(func_62(uParam0->f_2), 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(func_62(uParam0->f_2), 2.5f, 0, -1f, 0);
			}
			if (func_531(Local_195.f_37, 242628503) && TASK::GET_SEQUENCE_PROGRESS(Local_195.f_37) >= 1)
			{
				func_60(&uLocal_158, 0);
			}
			if (((!ENTITY::IS_ENTITY_ON_SCREEN(Local_195.f_37) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_28)) || func_627(&uLocal_158, 3.5f)) || func_627(&uLocal_20, 5f))
			{
				if (func_71(2))
				{
					func_73(func_72(2), 2, 1, 0, 0);
				}
				if (func_10(2))
				{
					func_74(2, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
				}
				HUD::_DISABLE_HUD_CONTEXT(724769646);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				func_228(&uLocal_20);
				func_221(&(Local_195.f_95), 16384);
				func_578(&(Local_195.f_4), 29);
			}
			break;
		case 29:
			if (PED::IS_PED_ON_MOUNT(Local_195.f_37) || func_215(&uLocal_20, 4f))
			{
				MISC::CLEAR_BIT(&(Global_1956578->f_1), 5);
				AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_END");
				func_613();
				func_221(&(Local_195.f_95), 16384);
				func_570(0);
				_NAMESPACE29::_0x0EABF182FBB63D72(Global_35, 5, 0);
				uParam0->f_14 = 1;
				uParam0->f_13 = 6;
				return 1;
			}
			break;
	}
	return 0;
}

int func_246(var uParam0)
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
		func_632(&(uParam0->f_9), 4, 1);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(uParam0->f_18));
	}
	return 1;
}

int func_247(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

bool func_248(var uParam0, var uParam1)
{
	return (*uParam0 && uParam1) != 0;
}

int func_249(int iParam0)
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

int func_250(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
			if (func_283(iParam0, 2, 1))
			{
				func_277(iParam0, 2, 1);
			}
			if (func_294(iParam0, 16, 1))
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
						func_74(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
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
						func_633(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_59(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_634(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_59(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_634(iParam0, 1);
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
			if (!func_283(iParam0, 44, 0))
			{
				func_59(iParam0, 44, 0);
			}
			if (func_635(iParam0, vVar0, iParam13, 0, 1, bParam17, bParam20, -1, 1, 0))
			{
				func_634(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_277(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/], 0);
			_NAMESPACE48::_0x6759BEE6762E140B(((*Global_1360165)[iParam0 /*1157*/])->f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_285(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_636(iParam0, 0, 0, 1);
			}
			func_277(iParam0, 33, 1);
			func_277(iParam0, 34, 1);
			func_277(iParam0, 29, 1);
			if (!func_503(vVar0) && iParam7)
			{
				func_634(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_634(iParam0, 4);
			}
			else
			{
				func_634(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						func_633(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_637(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::IS_PED_EXITING_SCENARIO(Global_1360165[iParam0 /*1157*/], 1))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], 1, 0);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_634(iParam0, 4);
			}
			else
			{
				func_634(iParam0, 5);
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
				if (func_638(iParam0, iParam13))
				{
					if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
					{
						func_639(iParam0, iParam13, 0);
						func_640(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_283(iParam0, 25, 0))
						{
							func_277(iParam0, 25, 0);
						}
						func_59(iParam0, 66, 0);
						func_634(iParam0, 5);
						((*Global_1360165)[iParam0 /*1157*/])->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_634(iParam0, 5);
				}
				func_59(iParam0, 28, 1);
			}
			else
			{
				func_634(iParam0, 5);
			}
			break;
		case 5:
			if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
			{
				func_634(iParam0, 6);
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
					if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[iParam0 /*1157*/], -1))
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
					func_641(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_642(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_634(iParam0, 7);
		case 7:
			func_285(iParam0, bParam9, bParam15, 0);
			func_77(iParam0, 4, bParam11);
			func_281(iParam0);
			if (bParam20)
			{
				if (func_643(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_644(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			(Global_40.f_4942[iParam0 /*60*/])->f_4 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
			func_634(iParam0, 0);
			func_484(iParam0, 16, 1);
			func_277(iParam0, 44, 1);
			((*Global_1360165)[iParam0 /*1157*/])->f_1156 = 0;
			((*Global_1360165)[iParam0 /*1157*/])->f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

int func_251(int iParam0, bool bParam1)
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
	if (func_79(iParam0, 0))
	{
		func_645(iParam0, 1);
		return 1;
	}
	if (!func_646())
	{
		return 0;
	}
	if (bParam1)
	{
		func_633(iParam0, 0, "Adding to Group");
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
	func_645(iParam0, 1);
	Global_1359489->f_15 = func_296(1);
	func_59(iParam0, 32, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], -1247684992);
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, true);
	PED::_0x9238A3D970BBB0A9(Global_1360165[iParam0 /*1157*/], -1972074710);
	PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, true);
	if (COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())) != 234527101)
	{
		COMPANION::_0x0DE02DA3C0F66955(func_62(iParam0), COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())));
		COMPANION::_0x61BDA07407754A5C(func_62(iParam0), Global_1391438->f_414.f_37);
	}
	PED::_0x89E59DBD15E21177(func_50(), 0);
	func_647(iParam0);
	Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	Var1.f_12 = 3;
	Var1.f_3 = Global_1360165[iParam0 /*1157*/];
	Var1.f_7 = func_298();
	Var1.f_8 = 0;
	Var1.f_11 = 10;
	Var1.f_14 = Global_1360165[iParam0 /*1157*/];
	MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	return 1;
}

int func_252(var uParam0)
{
	int iVar0;

	sLocal_137 = "fishing02_goto_a";
	sLocal_138 = "fishing02_return_a";
	sLocal_139 = "fishing02_down_to_lake";
	sLocal_140 = "fishing01_Jav_goto_fishing_rock";
	sLocal_135 = "fishing01_cme_shot1";
	sLocal_136 = "fishing01_cme_shot2";
	if (func_648(uParam0))
	{
		sLocal_140 = sLocal_140;
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_137);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_138);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_139);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_139);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_140);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_135);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_136);
	}
	else
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("script_re@lost_drunk@player_point"))
	{
		STREAMING::REQUEST_ANIM_DICT("script_re@lost_drunk@player_point");
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("script_re@lost_drunk@player_point"))
	{
		return 0;
	}
	if (!func_10(uParam0->f_2))
	{
		func_250(uParam0->f_2, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		return 0;
	}
	if (func_649(sLocal_137) == 0 || func_649(sLocal_138) == 0)
	{
		return 0;
	}
	if (!func_29(iLocal_28, 0))
	{
		iLocal_28 = func_650(&(Local_195.f_35), 2, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0);
	}
	if (!func_29(iLocal_28, 0))
	{
		return 0;
	}
	if (func_556(iLocal_28, func_62(uParam0->f_2), 1, 1) > 30f)
	{
		ENTITY::SET_ENTITY_COORDS(iLocal