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
					MISSIONDATA::_0xE824CE7D13FCB300(2116153146, func_24());
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
		else if (STATS::_0x01F4D242765C6B24(func_84(iParam0)))
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
	if (func_86(iParam0) == 3 || (func_86(iParam0) == 1 && STATS::_0x01F4D242765C6B24(func_84(iParam0))))
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
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
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
						func_143(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[21 /*49*/])->f_3)), iVar14);
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
							func_156(1905553950);
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
							func_156(1529685685);
						}
						break;
					
					case 34:
						if (func_155())
						{
							func_156(-2082646505);
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
							MISSIONDATA::_0xE824CE7D13FCB300(2116153146, iVar14);
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
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[82 /*49*/])->f_3)), iVar14);
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
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[83 /*49*/])->f_3)), iVar14);
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
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[108 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[69 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[70 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[7 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[22 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[23 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[65 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[7 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[8 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[36 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[48 /*74*/])->f_8)), iVar14);
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
							func_156(1534638301);
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
						MAP::_0xD8C7162AB2E2AF45(1720279629);
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
				else if (STATS::_0x01F4D242765C6B24(func_84(iParam0)))
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
	
	if (STATS::_0x01F4D242765C6B24(func_84(iParam0)))
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
		if (PED::_0x3AA24CCC0D451379(iParam0))
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
		if (PED::_0xB655DB7582AEC805(iParam0))
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
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
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
		if (((PED::IS_PED_SHOOTING(Global_35) && !WEAPON::_0x30E7C16B12DA8211(func_222(Global_35, 0, 1, 0))) && !WEAPON::_0xC4DEC3CA8C365A5D(func_222(Global_35, 0, 1, 0))) || (func_67(&uLocal_152) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_15), "FSH_SCARE")))
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
	if (((WEAPON::IS_WEAPON_VALID(Global_1935630->f_44) && WEAPON::_0x6AD66548840472E5(Global_1935630->f_44)) && PED::GET_PED_RESET_FLAG(Global_35, 0)) && CAM::_0xA24C1D341C6E0D53(1, 1, 1))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630->f_44 == -160924582 && PED::GET_PED_RESET_FLAG(Global_35, 0))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630->f_44 == -1016714371)
	{
		func_225(0);
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
		if (HUD::_0x2C729F2B94CEA911(&(uParam0->f_52)))
		{
			HUD::_0xF66090013DE648D5(&(uParam0->f_52));
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
		if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
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
	bVar2 = _NAMESPACE48::_0x800DF3FC913355F3(iVar1);
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
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
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
	if (HUD::_0xD0976CC34002DB57(sLocal_34))
	{
		HUD::_0xAA03F130A637D923(sLocal_34);
	}
	if (func_29(func_62(uParam0->f_2), 0))
	{
		PED::_0xAE6004120C18DF97(func_62(uParam0->f_2), 0, 1);
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

void func_119(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_6 = iParam1;
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
				iVar1 = WEAPON::_0x5C2EA6C44F515F34(iParam0);
				if (WEAPON::_0x1F7977C9101F807F(iVar1))
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
					iVar8 = -1281487556;
					break;
				
				case -1421669656:
					iVar8 = -59585102;
					break;
				
				case -830181022:
					iVar8 = 1018123892;
					break;
				
				case 917695895:
					iVar8 = -1455768246;
					break;
				
				case -1580595448:
					iVar8 = -921879912;
					break;
				
				case 1309992709:
					iVar8 = 982182330;
					break;
				
				case 1541618973:
					iVar8 = -1406390556;
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
			
			case -160924582:
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
					iParam0 = -1448210800;
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
		STATS::_0x6A0184E904CDF25E(&Var35, iVar0);
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
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uParam0), 3);
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
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
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
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
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
	if (iParam0 && Global_1935630->f_44 == -1016714371)
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
				PED::_0x2208438012482A1A(func_62(uParam0->f_2), false, false);
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
				PED::_0x2208438012482A1A(func_62(uParam0->f_2), false, false);
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
				PED::_0x2208438012482A1A(func_62(uParam0->f_2), false, false);
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
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(func_62(uParam0->f_2), 1f, 0, -1082130432, 0);
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
			if (!func_567(1) && func_569(Local_195.f_37, 0) != -1415022764)
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
					PED::_0x2208438012482A1A(func_62(uParam0->f_2), false, false);
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
			if (TASK::GET_SCRIPT_TASK_STATUS(func_62(uParam0->f_2), 716706914, 1) == 1 || func_569(func_62(uParam0->f_2), 0) != -1415022764)
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
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			if (!func_539(Global_35) && (func_573(Global_35, Local_195.f_354, 1, 0) || func_548(Global_35, func_532(1, 0), 50f, 1, 1)))
			{
				func_578(&(Local_195.f_4), 29);
			}
			break;
		
		case 29:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			func_235(uParam0, func_234(2), func_234(3), 2, 3);
			return 1;
	}
	return 0;
}

int func_239(var uParam0)
{
	func_584(uParam0);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
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
	CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
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
		ENTITY::_0x203BEFFDBE12E96A(Global_35, 1182.496f, -580.8946f, 67.0303f, 246.3689f, 1, true, 1);
		func_608(-20.9653f, -10.7725f);
		CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
		return 1;
	}
	return 0;
}

int func_243(var uParam0)
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (iVar0 != -1415022764)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, -1415022764, true, 0, false, false);
		PED::_0x2208438012482A1A(Global_35, false, false);
	}
	WEAPON::GET_CURRENT_PED_WEAPON(func_62(uParam0->f_2), &iVar0, true, 0, false);
	if (iVar0 != -1415022764)
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(func_62(uParam0->f_2), -1415022764, 1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		PED::_0x2208438012482A1A(func_62(uParam0->f_2), false, false);
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
	if ((Local_195.f_4 > 0 && Local_195.f_4 != 29) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
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
				if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					func_622(0, 1, 1, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
					func_626(Global_35, func_625(2, 2), 2, 1073741824);
					func_626(Local_195.f_37, func_625(2, 9), 2, 1073741824);
					func_626(iLocal_28, func_625(2, 11), 2, 1073741824);
					func_626(iLocal_27, func_625(2, 0), 2, 1073741824);
					AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_RETURN");
					PED::_0x2208438012482A1A(Global_35, false, false);
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
				if (STREAMING::_0xCF45DF50C7775F2A())
				{
					STREAMING::_0x5A8B01199C3E79C3();
				}
			}
			if (func_628())
			{
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX(), 1.501f, 2000, 0f, true, false);
				HUD::_0x8BC7C1F929D07BF3(724769646);
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
				PED::_0x2208438012482A1A(Global_35, true, false);
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
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, -1415022764, true, 0, false, false);
					PED::_0x2208438012482A1A(Global_35, false, false);
					func_228(&uLocal_20);
					func_578(&(Local_195.f_4), 11);
				}
			}
			break;
		
		case 11:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(func_62(uParam0->f_2), 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(func_62(uParam0->f_2), 2.5f, 0, -1082130432, 0);
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
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(func_62(uParam0->f_2), 2.5f, 0, -1082130432, 0);
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
				HUD::_0x8BC7C1F929D07BF3(724769646);
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
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_277(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
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
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
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
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::_0x0C3CB2E600C8977D(Global_1360165[iParam0 /*1157*/], 1))
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
					if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
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
			if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
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
		ENTITY::SET_ENTITY_COORDS(iLocal_28, func_651(), true, false, true, true);
		TASK::TASK_STAND_STILL(iLocal_28, -1);
	}
	if (!func_29(iLocal_27, 0))
	{
		Local_195.f_343 = 1;
		Local_195.f_343.f_1 = 0;
		Local_195.f_343.f_3 = 1;
		Local_195.f_343.f_4 = 1;
		Local_195.f_343.f_6 = { 662.3802f, -1229.426f, 43.3795f };
		Local_195.f_343.f_9 = 182.7417f;
		iLocal_27 = func_652(&(Local_195.f_342), &(Local_195.f_343));
		return 0;
	}
	if (uParam0->f_7 == 0)
	{
		iVar0 = func_653(5, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		if (ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return 0;
		}
		if (!func_548(iVar0, func_532(3, 8), 2f, 1, 1))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, 0, 1);
			TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iVar0, func_532(3, 8), 3f, 10000, 0, 0, 0, 0);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
			TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(iVar0, func_532(3, 8), 3f, 10000, 0, 0, 0, 0);
		}
	}
	func_527(&uLocal_36, Global_35, "ARTHUR", 0);
	func_527(&uLocal_36, func_62(uParam0->f_2), "JAVIER", 0);
	func_70(0);
	func_66(1, 1);
	func_64(uParam0->f_2, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_62(uParam0->f_2), true);
	func_654(1);
	func_655();
	Local_195.f_37 = func_62(uParam0->f_2);
	AUDIO::STOP_PED_SPEAKING(func_62(uParam0->f_2), false);
	if (!VOLUME::_0x92A78D0BEDB332A3(Local_195.f_355))
	{
		Local_195.f_355 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1182.924f, -580.0331f, 67.1474f, 0f, 0f, -15.99697f, 5.256088f, 7.785017f, 5.105182f, "volFishingLoc");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(Local_195.f_356))
	{
		Local_195.f_356 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1183.408f, -580.9863f, 67.68938f, 0f, 0f, -14.52683f, 5.676475f, 15.55996f, 4.36567f, "volFishingHasBegunLoc");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(Local_195.f_354))
	{
		Local_195.f_354 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1189.868f, -589.7604f, 67.85253f, 0f, 0f, -34.12126f, 34.28095f, 31.20574f, 14.95374f, "volLeavingFishingLoc");
	}
	Local_195.f_1333 = { 0f, 0f, 0f };
	Local_195.f_1333.f_3 = Global_35;
	Local_195.f_1333.f_4 = 21030;
	Local_195.f_1333.f_8 = 4;
	Local_195.f_1333.f_19 = 4;
	Local_195.f_1333.f_21 = 4;
	Local_195.f_1333.f_17 = 4;
	Local_195.f_1333.f_18 = 4;
	Local_195.f_1333.f_7 = 0;
	func_656();
	if (!func_8(&(uParam0->f_9), 128))
	{
		func_235(uParam0, func_234(0), func_234(1), 0, 1);
	}
	return 1;
}

void func_253(var uParam0)
{
	COMPANION::_0x0F1CD8CA9E65D5F6(func_50(), *uParam0);
	COMPANION::_0xD55A871E1CE3481B(func_50(), uParam0->f_37);
}

int func_254(var uParam0)
{
	if (func_100(&Global_1935630, 2048))
	{
		return 0;
	}
	if (func_657(uParam0))
	{
		CAM::DO_SCREEN_FADE_IN(500);
		func_658(0);
		HUD::DISPLAY_HUD(true);
		MAP::DISPLAY_RADAR(true);
		return 1;
	}
	return 0;
}

bool func_255()
{
	return (func_659() || func_660());
}

void func_256(bool bParam0)
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
	func_661(0f);
	Global_1935436->f_11 = 1;
	if (func_129())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_662();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_257(int iParam0)
{
	switch (func_120())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

int func_258(vector3 vParam0, float fParam3)
{
	int iVar0;
	
	if (MISC::_0x1B065A2BF7953815(0) != 1)
	{
		func_663(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_664(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_665(0, 0);
		if (func_465(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_666(1, 0);
		}
	}
	else
	{
		func_666(1, 0);
	}
	func_106(0);
	func_667(0, vParam0, fParam3);
	return 1;
}

int func_259(var uParam0)
{
	return uParam0->f_9;
}

bool func_260(int iParam0)
{
	return iParam0 > -1;
}

int func_261(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

void func_262(var uParam0, int iParam1)
{
	if (func_668(uParam0))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(uParam0, iParam1);
	}
}

bool func_263(int iParam0, var uParam1)
{
	if (!func_669(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && uParam1) != 0;
}

void func_264(int iParam0, bool bParam1)
{
	if (!func_669(iParam0))
	{
		return;
	}
	(Global_17503.f_42[iParam0 /*8*/])->f_7 = !bParam1;
}

bool func_265(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_266(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_267(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

int func_267(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_268(int iParam0)
{
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_671(iParam0, 32);
	func_672();
}

void func_269(int iParam0)
{
	int iVar0;
	
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_270(iParam0);
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		func_272(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_272(iParam0);
	}
}

int func_270(int iParam0)
{
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_3;
}

int func_271(int iParam0)
{
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_2;
}

void func_272(int iParam0)
{
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = 0;
}

bool func_273(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_274(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_275(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_276(int iParam0)
{
	if (!func_260(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == ((*Global_1360165)[iParam0 /*1157*/])->f_128)
	{
		return 0;
	}
	return 1;
}

void func_277(int iParam0, int iParam1, bool bParam2)
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
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_278(int iParam0, int iParam1, bool bParam2)
{
	if (!func_260(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 || iParam1);
	}
	else
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 - (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 && iParam1));
	}
}

int func_279(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_260(iParam0))
	{
		return 0;
	}
	iVar0 = func_72(iParam0);
	if (func_29(iVar0, 0))
	{
		if (func_29(PED::_0xB676EFDA03DADA52(iVar0, 0), 0) && !bParam4)
		{
			return 0;
		}
		if ((iParam1 || !func_276(iParam0)) || func_71(iParam0))
		{
			if (iParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_673(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = func_674(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_675(iParam0);
					_NAMESPACE48::_0x7B204F88F6C3D287(func_676(iParam0, 0));
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_676(iParam0, 0));
					func_677(iParam0);
				}
			}
			else
			{
				if (func_294(iParam0, 32768, 1))
				{
					iVar2 = func_676(iParam0, 0);
					_NAMESPACE48::_0xB65E7F733956CF25(iVar2);
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_29(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			if (func_294(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_675(iParam0);
				_NAMESPACE48::_0x7B204F88F6C3D287(func_676(iParam0, 0));
				_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_676(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				func_675(iParam0);
				PED::DELETE_PED(&(((*Global_1360165)[iParam0 /*1157*/])->f_124));
			}
		}
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = 0;
	func_678(iParam0, 0);
	return 1;
}

void func_280(int iParam0, bool bParam1)
{
	if (!func_260(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_679(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_77(iParam0, 1, 0);
		}
	}
	func_77(iParam0, 16, bParam1);
}

void func_281(int iParam0)
{
	func_59(iParam0, 36, 1);
}

int func_282(int iParam0, bool bParam1)
{
	if (!func_58(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_680(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

bool func_283(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		if (!func_260(iParam0))
		{
			return false;
		}
	}
	func_261(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

void func_284(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_58(iParam0))
	{
		iVar1 = func_62(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_681(iParam0);
		}
	}
	if (func_283(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_62(iParam0), 137, true);
	}
}

void func_285(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_260(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_277(iParam0, 50, 1);
		func_277(iParam0, 48, 1);
		func_277(iParam0, 49, 1);
		func_277(iParam0, 51, 1);
		func_277(iParam0, 52, 1);
		func_277(iParam0, 54, 1);
		func_277(iParam0, 55, 1);
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
			func_277(iParam0, 54, 1);
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
			func_277(iParam0, 52, 1);
			if (!bParam3)
			{
				func_277(iParam0, 55, 1);
			}
		}
	}
}

void func_286(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	
	if (!func_58(iParam0))
	{
		return;
	}
	if (func_78(iParam0))
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
	if (func_283(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_282(iParam0, 0);
	if (!MISC::_0x716F17F8A0419F95(uVar0))
	{
		return;
	}
	iVar1 = func_62(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_682(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
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
		func_683(iParam0);
		func_59(iParam0, 1, 1);
	}
}

void func_287(int iParam0, int iParam1, bool bParam2)
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

void func_288(int iParam0)
{
	if (func_289())
	{
		func_290(4);
		if (iParam0 == 1)
		{
			func_290(8);
		}
	}
	else if (iParam0 == 1)
	{
		func_291();
	}
}

int func_289()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(&Global_1900073, false))
	{
		return 1;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-506425016) > 0)
	{
		return 1;
	}
	return 0;
}

void func_290(int iParam0)
{
	if (!func_684(iParam0))
	{
		func_221(&(Global_1900073->f_1), iParam0);
	}
}

void func_291()
{
	func_63(0, 0);
	func_63(1, 0);
	func_63(2, 0);
	func_63(3, 0);
	func_612(0, 0);
	func_612(1, 0);
	func_612(2, 0);
	func_612(3, 0);
	func_611(1, 0);
	func_611(2, 0);
	func_611(3, 0);
	func_685(0);
	func_686(0);
	func_687(0);
	func_602(0);
	func_537(1, 0);
	func_537(2, 0);
	func_537(3, 0);
	func_688(0, 2048);
	func_688(1, 2048);
	func_688(2, 2048);
	func_688(3, 2048);
	func_689(0);
	func_559(0);
	func_609(0);
	func_690(0);
	func_691(0);
	func_599(0);
	func_600(0);
	func_601(0);
	func_692(0);
	func_693(0);
	func_694(0);
	func_593(0);
	func_570(0);
	func_613();
	func_695(0f, 0f, 0f);
	HUD::_0x160825DADF1B04B3();
	func_590(8);
	func_590(2048);
}

void func_292(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		VEHICLE::_0x2A7413168F6CD5A8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_696(iVar0, 4096);
			if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iVar0 /*373*/])->f_1))
			{
				VEHICLE::_0xF8F7DA13CFBD4532(((*Global_1425371)[iVar0 /*373*/])->f_1, 0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iVar1 /*373*/])->f_1))
			{
				VEHICLE::_0xF8F7DA13CFBD4532(((*Global_1425371)[iVar1 /*373*/])->f_1, 1);
			}
			iVar1++;
		}
		VEHICLE::_0x4C05B42A8D937796();
		VEHICLE::_0x16B86A49E072AA85();
	}
	if (func_120() == -1)
	{
		Global_1430221->f_1 = !bParam0;
	}
}

void func_293(var uParam0, var uParam1, bool bParam2)
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

bool func_294(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_260(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

void func_295(int iParam0)
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
	func_697(iParam0, 0, 0);
}

int func_296(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (bParam0)
	{
		return func_698(Global_1359489->f_4);
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
		if (func_699(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_297()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = func_700(iVar0);
		iVar2 = func_700(iVar0 + 1);
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

var func_298()
{
	return Global_1894899->f_2;
}

int func_299(int iParam0)
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

int func_300(int iParam0)
{
	return iParam0 & 31;
}

int func_301(int iParam0)
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

int func_302(int iParam0)
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

int func_303(int iParam0)
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
	func_701(iParam0, Global_1898164->f_162);
	return 1;
}

void func_304(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_702(iParam0);
	}
	else
	{
		func_703(iParam0, iParam1);
	}
	func_704();
}

void func_305(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = MISC::GET_GAME_TIMER();
	func_705(iParam0, iParam1, bParam2);
}

bool func_306(int iParam0)
{
	return iParam0 != 0;
}

int func_307()
{
	return -1904156936;
}

int func_308(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!func_82(iParam0))
	{
		return 0;
	}
	switch (func_85(iParam0))
	{
		case 1:
			iVar0 = func_125(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		
		case 8:
			iVar1 = func_125(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return 0;
}

int func_309()
{
	return 166188472;
}

int func_310()
{
	return 2015838421;
}

int func_311()
{
	return 207908017;
}

var func_312(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vector3 vVar0;
	var uVar3;
	
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _NAMESPACE76::_0x9F2CC2439A04E7BA(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_313(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	var uVar3;
	
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _NAMESPACE76::_0x815C4065AE6E6071(uParam0, &Var0, iParam3);
	return uVar3;
}

int func_314()
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

int func_315(int iParam0)
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

int func_316(int iParam0)
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

void func_317(int iParam0, var uParam1)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_318()
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

int func_319(int iParam0)
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

void func_320(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

int func_321(int iParam0)
{
	if (!func_82(iParam0))
	{
		return 0;
	}
	switch (func_85(iParam0))
	{
		case 1:
			switch (func_125(iParam0))
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
			switch (func_125(iParam0))
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

void func_322(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_706(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_374(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_708(func_707(iParam0), 6);
}

void func_323(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_706(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_374(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_709(func_707(iParam0), 6);
}

int func_324(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		return func_710(iParam0);
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

int func_325(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			func_340(Global_40.f_4283.f_6[iVar0 /*5*/], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_326(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_2;
	}
	return -1;
}

void func_327(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

int func_328(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_329()
{
	return Global_40.f_11095.f_35;
}

void func_330(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 1)
	{
		func_711(iParam0, 0);
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
		func_331(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_331(int iParam0)
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
			func_711(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_712(1);
	}
}

bool func_332(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_333()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_713(((*Global_1347702)[9 /*49*/])->f_15);
	iVar1 = func_713(((*Global_1835011)[69 /*74*/])->f_1);
	if (func_714(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

int func_334(int iParam0)
{
	if (!func_715(iParam0))
	{
		return 0;
	}
	return func_151(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_335(int iParam0)
{
	if (func_85(iParam0) == 1)
	{
		return func_125(iParam0);
	}
	return -1;
}

int func_336(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_716(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_717(iVar6);
	}
	return iVar5;
}

int func_337(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_718(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_338(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	func_719(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
}

int func_339(int iParam0)
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

void func_340(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_338(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_341(2, *uParam0);
		}
		else
		{
			func_342(2, *uParam0);
		}
	}
	func_720(uParam0);
}

void func_341(int iParam0, int iParam1)
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

void func_342(int iParam0, int iParam1)
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

int func_343(int iParam0)
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

int func_344(int iParam0)
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

void func_345(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
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
	
	iVar0 = func_721();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_722(iParam0);
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
	if (func_372(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_723())
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
	Global_40.f_11095.f_35 = func_134(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_721();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_724(iVar1);
		func_726(func_725(), 0, 4000);
		func_727(Global_40.f_11095.f_35);
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
		func_728(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_387(func_124(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_344(14))
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
					sParam4 = func_729(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_481(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_481(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_387(func_124(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_344(4))
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
					sParam4 = func_729(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_481(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_481(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_124(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_186(10, 1);
	}
}

void func_346(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_347(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

int func_348()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_349(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1898441[iVar1 /*38*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_1898441[iVar1 /*38*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

int func_350(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_351(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_120() == -1)
	{
		if (func_730(iParam0) && func_731(iParam0))
		{
			func_732(iParam0, iParam1, 1, &iParam2, iParam3);
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

int func_352(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	
	*uParam1 = iParam2;
	func_733(iParam0, uParam1);
	Var0 = { func_462(iParam0, 0, 1) };
	iVar5 = func_734(iParam0, &Var0, 0, 0);
	iVar6 = func_735(iParam0, 0);
	if ((iVar5 > 1 && !func_141()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_370(iParam0, -2051813666))
		{
			func_149(583, 1);
		}
		else
		{
			func_149(582, 0);
		}
	}
	if (func_736(iParam0, &Var0, *uParam1, 0, 0))
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

void func_353(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_432(iParam0, -949239683))
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

int func_354(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_369(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_737(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_738(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_706(bParam2), iParam0, 0);
	return iVar2;
}

bool func_355(int iParam0)
{
	if (func_120() != -1)
	{
		return false;
	}
	return func_356(iParam0) != 0;
}

int func_356(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < func_739())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_740(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_357(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_358(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < func_739())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_357(iVar0))
		{
			if (func_171(func_740(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_359(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_741(48);
	func_191(0, -1);
}

int func_360(int iParam0)
{
	if (func_120() != -1)
	{
		return 0;
	}
	return func_151(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_361(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_362(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_363(int iParam0)
{
	if (func_120() != -1)
	{
		return 0;
	}
	return func_151(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_364(int iParam0)
{
	if (func_120() != -1)
	{
		return 0;
	}
	if (!func_140(iParam0))
	{
		return 0;
	}
	return func_13(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_365()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_171(func_742(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_366(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_348() && (func_364(38) || func_360(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = 38816757;
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838;
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		
		case 39:
			if (func_348() && (func_364(39) || func_360(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770;
				iVar13 = -1223580455;
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279;
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
			iVar9 = func_743(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		
		case 41:
			if (func_348() && (func_364(41) || func_360(41)))
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
			iVar11 = -273196610;
			iVar13 = -1666208710;
			break;
		
		case 49:
			if (func_348() && (func_364(49) || func_360(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276;
				iVar13 = -170865073;
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712;
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
			iVar9 = func_743(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_744(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_745(iParam0, iVar13, iVar14))
	{
	}
	if (func_746(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_747(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_748(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_749(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_750(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_367(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_368(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_348() && (func_364(38) || func_360(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757;
			break;
		
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_348() && (func_364(39) || func_360(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770;
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455;
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
			iVar6 = 911890963;
			break;
		
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610;
			iVar6 = -1666208710;
			break;
		
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_348() && (func_364(49) || func_360(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276;
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073;
			break;
		
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931;
			iVar6 = -1424865411;
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
		if (func_348() && (func_364(38) || func_360(38)))
		{
			iVar6 = 38816757;
		}
		else
		{
			iVar6 = 578982838;
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
			func_751(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_751(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_488(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_752(func_362(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_751(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_751(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_348() && (func_364(39) || func_360(39)))
		{
			iVar6 = -1223580455;
		}
		else
		{
			iVar6 = 349797279;
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_751(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_751(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_348() && (func_364(49) || func_360(49)))
		{
			iVar6 = -170865073;
		}
		else
		{
			iVar6 = 1974744712;
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_751(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_751(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_751(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_751(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_369(int iParam0)
{
	vector3 vVar0;
	
	if (!func_350(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_370(int iParam0, int iParam1)
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

int func_371(int iParam0, int iParam1)
{
	if (!func_350(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_372(int iParam0)
{
	if (!func_753(iParam0))
	{
		return 0;
	}
	return func_754(iParam0);
}

void func_373(int iParam0)
{
	if (!func_753(iParam0))
	{
		return;
	}
	func_755(iParam0);
	func_756(iParam0);
}

int func_374(int iParam0)
{
	struct<2> Var0;
	
	if (!func_350(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_375(int iParam0, bool bParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		
		case 1222378998:
			iVar0 = -764310200;
			break;
		
		case 2074469742:
			iVar0 = -764310200;
			break;
		
		case 480079517:
			iVar0 = -1504859554;
			break;
		
		case 840671577:
			iVar0 = -1504859554;
			break;
		
		case joaat("ammo_molotov"):
			iVar0 = 1885857703;
			break;
		
		case -2006166057:
			iVar0 = 1885857703;
			break;
		
		case 1235846615:
			iVar0 = -1511427369;
			break;
		
		case -228768324:
			iVar0 = 2133046983;
			break;
		
		case -1411922943:
			iVar0 = -1511427369;
			break;
		
		case -834103244:
			iVar0 = -1511427369;
			break;
		
		case 424030678:
			iVar0 = 165751297;
			break;
		
		case 446901936:
			iVar0 = 710736342;
			break;
		
		case -1092841802:
			iVar0 = -462374995;
			break;
		
		case -1452241321:
			iVar0 = 567069252;
			break;
		
		case -1188697038:
			iVar0 = -281894307;
			break;
		
		case 1671758975:
			iVar0 = -1127860381;
			break;
		
		case -893514737:
			iVar0 = -1894785522;
			break;
		
		case -2063089161:
			iVar0 = 469927692;
			break;
		
		case -452897925:
			iVar0 = 1960591597;
			break;
		
		default:
			break;
	}
	if (func_350(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_757(iVar0) || func_758(iVar0))
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

int func_376(int iParam0, bool bParam1)
{
	if (!func_350(iParam0, 0))
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

void func_377(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_465(iParam0))
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

int func_378(bool bParam0)
{
	if (func_120() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_706(bParam0));
}

int func_379(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_462(bParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_759((375 + iVar28), 1);
			if (func_760(bParam0, &Var0, iVar5, 0))
			{
				if (func_761(bParam0, &Var6, iVar5))
				{
					Var29 = { func_762(bParam0, Var0, iVar5, 0) };
					func_763(bParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_378(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
					{
						return 0;
					}
					func_380(WEAPON::_0x5C2EA6C44F515F34(bParam0), iParam1, iParam6);
					func_764(bParam0, iParam1);
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

int func_380(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_382(iParam0))
	{
		return 0;
	}
	if (!func_378(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

int func_381(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	
	iVar0 = func_376(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_120() == -1)
		{
			func_377(iVar0);
			if (iParam1 == 1248274121)
			{
				func_765(iVar0);
			}
		}
		if (!func_736(iParam0, &uVar1, 1, 0, 0))
		{
			func_732(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_766(iVar0);
			if (WEAPON::_0x6AD66548840472E5(iVar0))
			{
				func_379(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_379(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_379(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(iVar0))
			{
				if (iVar0 == 494733111 && !func_723())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_767(iVar0))
				{
					func_379(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_379(iVar0, WEAPON::_0xD3750CCC00635FC2(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
			{
				iVar7 = func_222(Global_35, 2, 0, 1);
				if ((((func_465(iVar7) && !Global_43890) && iVar7 != iVar0) && !func_171(-1185145312, 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				if (func_465(iVar7) && func_171(-1185145312, 1, 0))
				{
					if (!func_379(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_379(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_379(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_149(480, 1);
	}
	return 1;
}

bool func_382(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_383(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!func_382(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_465(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (iVar4 == -2002235300)
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
	if (func_171(611073244, 1, 0) && iParam2 == -897553835)
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
		func_419(func_768(iParam0), func_418(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_120() == -1)
		{
			if (func_151(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_149(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_378(0))
	{
		if (func_380(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_424(iParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_384(int iParam0)
{
	var uVar0;
	
	if ((iParam0 == -615217896 && !func_162()) || iParam0 != -615217896)
	{
		if (func_769(Global_35, iParam0, &uVar0))
		{
			func_403(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_409();
			break;
		
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_409();
			break;
		
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_409();
			break;
		
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_407();
			break;
		
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_405();
			break;
	}
}

void func_385(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_405();
			break;
		
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_406();
			break;
		
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_407();
			break;
		
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_408();
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
			func_409();
			break;
		
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_770();
			break;
		
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_771();
			break;
		
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_386(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_1 = iParam0;
	return Var0;
}

void func_387(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

struct<2> func_388(int iParam0, int iParam1)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_389(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_370(iParam0, -2017733358);
	if (func_772() < 3)
	{
		if (bVar0)
		{
			if (func_774(func_773(iParam0), iParam0))
			{
				func_419(79, func_418(func_773(iParam0)), 1);
			}
			else
			{
				func_419(78, func_418(func_773(iParam0)), 1);
			}
		}
		else
		{
			func_419(80, func_418(func_775(iParam0)), 1);
		}
	}
}

int func_390()
{
	if (((((func_776(839908568, 400) || func_776(-1134030454, 400)) || func_776(623353496, 400)) || func_776(-344413337, 400)) || func_776(-1664948962, 400)) || func_776(1795228059, 400))
	{
		return 1;
	}
	return 0;
}

int func_391(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_500(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_777(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_778(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_392(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_366(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_368(51, 0, 0, 0, 0, -1, 0);
			func_779(8192);
			break;
		
		case 581047644:
			func_366(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_368(51, 0, 0, 0, 0, -1, 0);
			func_779(524288);
			break;
		
		case -644199619:
			func_366(39, 0, 0, 0, 0, 0, 1, 0);
			func_368(39, 0, 0, 0, 0, -1, 0);
			func_780(16);
			break;
		
		case 684296857:
			func_366(41, 0, 0, 0, 0, 0, 1, 0);
			func_368(41, 0, 0, 0, 0, -1, 0);
			func_781(8);
			break;
		
		case 466137807:
			func_366(49, 0, 0, 0, 0, 0, 1, 0);
			func_368(49, 0, 0, 0, 0, -1, 0);
			func_782(16);
			break;
		
		case -1087522507:
			func_366(43, 0, 0, -1791518714, func_783(1), 0, -1, 0);
			func_784(1);
			break;
		
		case -405829000:
			func_366(43, 0, 0, -2087881550, func_783(2), 0, -1, 0);
			func_784(2);
			break;
		
		case 378660860:
			func_366(43, 0, 0, 1908068621, func_783(4), 0, -1, 0);
			func_784(4);
			break;
		
		case 1566111097:
			func_366(43, 0, 0, 1611247019, func_783(8), 0, -1, 0);
			func_784(8);
			break;
		
		case 1276007140:
			func_366(43, 0, 0, 1319635688, func_783(16), 0, -1, 0);
			func_784(16);
			break;
	}
}

void func_393(int iParam0)
{
	if (func_785() == 1)
	{
		if (func_360(39))
		{
			func_149(342, 0);
		}
		else
		{
			func_149(343, 0);
			func_780(1);
		}
	}
	if (func_785() >= 30)
	{
		func_149(344, 0);
	}
	func_366(39, 0, 0, 0, 0, 0, -1, 0);
	func_368(39, 0, 0, func_785(), 30, 1, 0);
}

void func_394(int iParam0)
{
	if (func_786() == 1)
	{
		if (func_360(49))
		{
			func_149(409, 0);
		}
		else
		{
			func_149(410, 0);
			func_782(1);
		}
	}
	if (func_786() >= 10)
	{
		func_149(411, 0);
	}
	func_366(49, 0, 0, 0, 0, 0, -1, 0);
	func_368(49, 0, 0, func_786(), 10, 1, 0);
}

void func_395(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1369162587:
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_149(437, 0);
			func_149(440, 0);
			func_787(-949689219, 444160793, &iVar0, 1, 0, 0);
			func_366(51, 0, 0, -949689219, iVar0, 0, -1, 0);
			func_368(51, 0, 0, iVar0, func_743(-949689219, 20), 1, 0);
			func_779(1);
			func_788(-748969569, 0, 0);
			Jump @494; //curOff = 149
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_787(-1248968496, -1969404854, &iVar0, 1, 0, 0);
			func_366(51, 0, 0, -1248968496, iVar0, 0, -1, 0);
			func_368(51, 0, 0, iVar0, func_743(-1248968496, 20), 1, 0);
			func_779(8);
			Jump @494; //curOff = 229
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_787(1706369307, -832850511, &iVar0, 1, 0, 0);
			func_366(51, 0, 0, 1706369307, iVar0, 0, -1, 0);
			func_368(51, 0, 0, iVar0, func_743(1706369307, 20), 1, 0);
			func_779(64);
			Jump @494; //curOff = 309
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_787(1520110311, -100913452, &iVar0, 1, 0, 0);
			func_366(51, 0, 0, 1520110311, iVar0, 0, -1, 0);
			func_368(51, 0, 0, iVar0, func_743(1520110311, 20), 1, 0);
			func_779(512);
			Jump @494; //curOff = 390
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_149(438, 0);
			func_787(-1992824800, 905173572, &iVar0, 1, 0, 0);
			func_366(51, 0, 0, -1992824800, iVar0, 0, -1, 0);
			func_368(51, 0, 0, iVar0, func_743(-1992824800, 20), 1, 0);
			func_779(32768);
			Jump @494; //curOff = 480
			func_149(439, 0);
		}

void func_396()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_397(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (func_120() == -1)
	{
		if (!func_360(43))
		{
			if (iParam0 == 281887510)
			{
				func_149(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_149(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_149(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_149(400, 0);
			}
		}
		else if (func_370(iParam0, 412399755))
		{
			func_789(-1791518714);
			if (func_790() == 0)
			{
				func_191(0, 10);
				iVar1 = func_791(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_792(iParam0) < func_793(iParam0))
					{
						func_366(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_368(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_360(44))
		{
			if (iParam0 == -222563712)
			{
				func_149(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_149(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_149(401, 0);
			}
		}
		else if (func_370(iParam0, 709057512))
		{
			func_789(-2087881550);
			if (func_790() == 1)
			{
				func_191(0, 10);
				iVar1 = func_791(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_792(iParam0) < func_793(iParam0))
					{
						func_366(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_368(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_360(45))
		{
			if (iParam0 == 2116770557)
			{
				func_149(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_149(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_149(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_149(398, 0);
			}
		}
		else if (func_370(iParam0, -1478961327))
		{
			func_789(1908068621);
			if (func_790() == 2)
			{
				func_191(0, 10);
				iVar1 = func_791(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_794(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
					{
						func_795(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
						func_741(48);
					}
					if (func_792(iParam0) < func_793(iParam0))
					{
						func_366(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_368(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_792(iParam0) < func_793(iParam0))
					{
						func_366(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_368(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_360(46))
		{
			if (iParam0 == 2085530337)
			{
				func_149(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_149(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_149(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_149(406, 0);
			}
		}
		else if (func_370(iParam0, -1238404098))
		{
			func_789(1611247019);
			if (func_790() == 3)
			{
				func_191(0, 10);
				iVar1 = func_791(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_792(iParam0) < func_793(iParam0))
					{
						func_366(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_368(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_360(47))
		{
			if (iParam0 == -1521783510)
			{
				func_149(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_149(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_149(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_149(403, 0);
			}
		}
		else if (func_370(iParam0, 1160548794))
		{
			func_789(1319635688);
			if (func_790() == 4)
			{
				func_191(0, 10);
				iVar1 = func_791(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_792(iParam0) < func_793(iParam0))
					{
						func_366(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_368(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_398(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 2116770557)
	{
		if (!func_794(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
		{
			func_795(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
			func_741(48);
		}
	}
}

void func_399(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_171(func_796(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_797(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_798(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_400(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_120() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_391(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_391(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1394529493:
			func_391(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1262623627:
			func_391(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1124867377:
			func_391(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1790920086:
			func_391(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -2001202686:
			func_391(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1111063991:
			func_391(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1576210101:
			func_391(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 675090918:
			func_391(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 355838765:
			func_391(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -343824903:
			func_391(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1142684684:
			func_391(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1243851340:
			if (!func_799())
			{
				func_391(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		
		case -525490740:
			func_391(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1736635264:
			func_391(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1302860970:
			func_391(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1027115192:
			func_391(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1064332555:
			func_391(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1954478446:
			func_391(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -518592739:
			func_391(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -2010073778:
			func_391(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -700133011:
			func_391(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1415414735:
			func_391(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case 2045548742:
			func_391(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case 830381058:
			func_391(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_401(int iParam0)
{
	if (func_360(41))
	{
		func_149(363, 0);
	}
	else
	{
		func_149(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_800(-1865241121);
			func_801(-642026005);
			func_802(-642026005);
			func_191(0, 10);
			break;
		
		case -2108314374:
			func_800(2117142684);
			func_801(-940584364);
			func_802(-940584364);
			func_191(0, 10);
			break;
		
		case -1193798153:
			func_800(-1409326024);
			func_801(1972645282);
			func_802(1972645282);
			func_191(0, 10);
			break;
		
		case -787702678:
			func_800(-641744968);
			func_801(1667205433);
			func_802(1667205433);
			func_191(0, 10);
			break;
		
		case -804542901:
			func_800(-946988203);
			func_801(1362715885);
			func_802(1362715885);
			func_191(0, 10);
			break;
		
		case -1696275132:
			func_800(-646136018);
			func_801(1053540370);
			func_802(1053540370);
			func_191(0, 10);
			break;
		
		case -161595323:
			func_800(-955835837);
			func_801(-1100103852);
			func_802(-1100103852);
			func_191(0, 10);
			break;
		
		case -1114363619:
			func_800(-179276075);
			func_801(-1409869209);
			func_802(-1409869209);
			func_191(0, 10);
			break;
		
		case -368407134:
			func_800(-492711560);
			func_801(-1760235357);
			func_802(-1760235357);
			func_191(0, 10);
			break;
		
		case 1997759228:
			func_800(1764383959);
			func_801(-138366827);
			func_802(-138366827);
			func_191(0, 10);
			break;
		
		case 1265573293:
			func_800(317501533);
			func_801(-1261163843);
			func_802(-1261163843);
			func_191(0, 10);
			break;
		
		case -1030441283:
			func_800(817753087);
			func_801(-963523016);
			func_802(-963523016);
			func_191(0, 10);
			break;
		
		case -1490884871:
			func_800(576606016);
			func_801(560825326);
			func_802(560825326);
			func_191(0, 10);
			break;
		
		case -395458616:
			func_800(814934957);
			func_801(858269539);
			func_802(858269539);
			break;
	}
}

void func_402(int iParam0, int iParam1)
{
	var uVar0;
	
	func_803(iParam0, iParam1, &uVar0);
}

int func_403(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	
	if (iParam3 == -358215195)
	{
		Var0 = { func_462(iParam1, 1, 0) };
		iParam3 = func_463(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_804(iParam1, iParam2, func_450(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_805(1, (func_120() == -1 && iParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (iParam8 && iParam1 != &Global_1946804->f_57[func_450(iParam3, 1) /*11*/])
			{
				func_461(31, 0, 0, 0, 0);
			}
			break;
		
		case 1108822547:
			if (func_806(32768) && iParam1 != &Global_1946804->f_57[func_450(iParam3, 1) /*11*/])
			{
				func_807();
				func_461(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_461(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_808(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_461(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_809(0);
			func_810(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_461(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

int func_404(var uParam0, bool bParam1)
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
	iVar18 = func_222(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_222(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_811("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_812(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_0xD955FEE4B87AFA07(Var3.f_4))
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
						func_813(iVar0);
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

void func_405()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_406()
{
	float fVar0;
	float fVar1;
	
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_407()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_408()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_409()
{
	func_814();
	func_815();
	func_816();
}

void func_410(int iParam0, int iParam1, bool bParam2)
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
			iVar0 = -293111728;
			break;
		
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390;
			break;
		
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075;
			break;
		
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026;
			break;
		
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735;
			break;
		
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085;
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

void func_411(int iParam0, bool bParam1)
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
			iVar0 = -293111728;
			break;
		
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390;
			break;
		
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075;
			break;
		
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026;
			break;
		
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735;
			break;
		
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085;
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_751(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), 1433015236, MISC::_CREATE_VAR_STRING(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_412(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_413(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_414(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_415(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_416(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_417(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_418(int iParam0)
{
	if (!func_350(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_419(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	func_457(iParam0, &iVar0, &iVar1);
	if (!func_458(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_817(iParam0, 1024))
	{
		return;
	}
	func_459(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_420(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	func_457(iParam0, &iVar0, &iVar1);
	if (!func_458(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_817(iParam0, 1024))
	{
		return;
	}
	func_459(iVar0, iVar1);
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

int func_421()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_739())
	{
		return func_422();
	}
	iVar4 = (func_739() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_739())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_818(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_740(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_422()
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_739());
	return func_740(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_423(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		
		case 998010398:
			*iParam0 = -324053813;
			break;
		
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

int func_424(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;
	
	if (!func_350(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_462(iParam0, 0, 1) };
	Var5 = { func_762(iParam0, Var0, Var0.f_4, 0) };
	return func_819(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_425(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_120() != -1)
	{
		return;
	}
	switch (func_374(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_820(81053684, 0) <= 0)
			{
				func_461(32, iParam0, 0, 0, 0);
			}
			break;
		
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_461(32, iParam0, 0, 0, 0);
			}
			break;
		
		case -999503751:
			iVar0 = func_821(iParam0);
			if (func_822(iVar0))
			{
				func_823(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_461(30, iParam0, 0, 0, 0);
			}
			if (func_452() == -2125499975 || func_452() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_461(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_452() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_461(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		
		case -525676072:
			if (!func_824(-525676072, 0))
			{
				if (func_825(-525676072, &iVar1))
				{
					func_461(33, iVar1, 0, 0, 0);
				}
			}
			func_461(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_826(99217379))
		{
			func_403(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_373(24);
		if (func_404(&iVar2, 0))
		{
			func_379(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_426(int iParam0)
{
	if (func_370(iParam0, 943695443))
	{
		func_827(0, iParam0);
	}
	else if (func_370(iParam0, -2096528786))
	{
		func_827(1, iParam0);
	}
	else if (func_370(iParam0, -1094167013))
	{
		func_827(2, iParam0);
	}
	else if (func_370(iParam0, 1936654645))
	{
		func_827(3, iParam0);
	}
	else if (func_370(iParam0, 1306489306))
	{
		func_827(4, iParam0);
	}
	else if (func_370(iParam0, 435762317))
	{
		func_827(5, iParam0);
	}
	else if (func_370(iParam0, 1259363210))
	{
		func_827(6, iParam0);
	}
	else if (func_370(iParam0, 881398259))
	{
		func_827(7, iParam0);
	}
	else if (func_370(iParam0, -541549214))
	{
		func_827(8, iParam0);
	}
	else if (func_370(iParam0, 130796156))
	{
		func_827(-1, iParam0);
	}
}

int func_427(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;
	
	Var4.f_1 = 10;
	func_828(&Var4, 1356624740);
	return func_829(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_428(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!func_350(iParam0, 0))
	{
		return Var0;
	}
	if (func_370(iParam0, -305066475))
	{
		if (func_120() == -1)
		{
			if (func_370(iParam0, -537818634))
			{
				return func_124(189951448);
			}
			else
			{
				return func_124(1176172851);
			}
		}
	}
	else if (func_370(iParam0, -537818634))
	{
		return func_124(-963660207);
	}
	if (func_370(iParam0, 2084895747))
	{
		return func_124(1694039471);
	}
	return Var2;
}

void func_429(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_120() == -1)
			{
				if (func_151(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_149(109, 1);
				}
			}
			break;
	}
}

void func_430(int iParam0, char* sParam1)
{
	char* sVar0;
	
	sVar0 = func_831(func_830(0));
	func_481(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_832(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_431(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_350(iParam0, 0))
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
	if (!func_833())
	{
		func_834(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_835(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_835(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_371(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_369(iParam0);
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
	else if (!func_836(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_837(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_418(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_370(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_418(iParam0));
	}
	func_481(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_432(int iParam0, int iParam1)
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

struct<10> func_433(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
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
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

int func_434(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	*uParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, uParam11, iParam12);
	if (*uParam10 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_435(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_0xD389A2549C4EFB30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_0x8750F69A720C2E41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_436(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	struct<37> Var2;
	int iVar49;
	
	if (!func_350(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 != 0 && !func_838(iParam0, iParam1, 1))
	{
		return 0;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		iVar1 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == 1644203656 && func_838(iParam0, Var2, 1))
				{
					if (func_839(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_839(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_149(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_99(0, 0, 1))
		{
			func_191(1, 5);
		}
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

int func_437(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_438(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case -1375947476:
			iVar0 = 307;
			break;
		
		case -1704241585:
			iVar0 = 308;
			break;
		
		case -1267972061:
			iVar0 = 309;
			break;
		
		case -142033055:
			iVar0 = 310;
			break;
		
		case 890514341:
			iVar0 = 311;
			break;
		
		case -58963793:
			iVar0 = 312;
			break;
		
		case 1882019322:
			iVar0 = 313;
			break;
		
		case 807302083:
			iVar0 = 314;
			break;
		
		case 617759310:
			iVar0 = 315;
			break;
		
		case -378547623:
			iVar0 = 316;
			break;
		
		case 829545206:
			iVar0 = 317;
			break;
		
		case 891318243:
			iVar0 = 319;
			break;
		
		case 431374225:
			iVar0 = 320;
			break;
		
		case 1619534881:
			iVar0 = 321;
			break;
		
		case -755457379:
			iVar0 = 322;
			break;
		
		case 2141714005:
			iVar0 = 323;
			break;
		
		case 1015404643:
			iVar0 = 324;
			break;
		
		case 983875052:
			iVar0 = 325;
			break;
		
		case -1753730528:
			iVar0 = 326;
			break;
		
		case 2131765035:
			iVar0 = 327;
			break;
		
		case -1740272183:
			iVar0 = 328;
			break;
		
		case 1310680212:
			iVar0 = 329;
			break;
		
		case -1724192342:
			iVar0 = 330;
			break;
		
		case 912296423:
			iVar0 = 331;
			break;
		
		case -566881549:
			iVar0 = 332;
			break;
		
		case 147796381:
			iVar0 = 333;
			break;
		
		case -120865369:
			iVar0 = 334;
			break;
		
		case 1158808845:
			iVar0 = 335;
			break;
	}
	if (iVar0 != -1)
	{
		func_149(iVar0, 0);
	}
}

void func_439()
{
	bool bVar0;
	
	bVar0 = DLC::IS_DLC_PRESENT(33819255);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(2116153146, 0);
			func_840(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, false);
			func_841();
		}
		return;
	}
	if (!func_151(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	func_842();
	if (MISSIONDATA::_0x57E798B54C45EE1A(1685912227) >= 2)
	{
		if (MISSIONDATA::_0x57E798B54C45EE1A(2116153146) < 2)
		{
			MISSIONDATA::_0xE824CE7D13FCB300(2116153146, 2);
		}
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(645322743))
	{
		return;
	}
	func_840(1);
}

void func_440()
{
	if (!func_151(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(304788622))
	{
		return;
	}
	func_143(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(304788622, true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1968398307))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-1968398307, true);
}

void func_441()
{
	bool bVar0;
	
	bVar0 = DLC::IS_DLC_PRESENT(-751383868);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(1244328330))
		{
			func_843(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(1244328330))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1383789777))
	{
		return;
	}
	if (!func_151(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, true);
	func_843(1);
}

void func_442()
{
	bool bVar0;
	
	bVar0 = DLC::IS_DLC_PRESENT(-1499823613);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(398807247))
		{
			func_844(15000, 0, 0, 0, 1);
			func_843(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(398807247))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1651350587))
	{
		return;
	}
	if (!func_151(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, true);
	func_492(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_843(1);
}

void func_443()
{
	bool bVar0;
	
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1491419385) > 0)
		{
			if ((!func_171(1191437462, 1, 0) && !func_13(((*Global_1835011)[23 /*74*/])->f_1)) && !Global_43890)
			{
				func_143(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_845(1))
			{
				func_415(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1809565830) > 0)
		{
			if ((!func_171(1119149048, 1, 0) && !func_13(((*Global_1835011)[23 /*74*/])->f_1)) && !Global_43890)
			{
				func_143(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_845(2))
			{
				func_415(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(2056119786) > 0 && !func_845(4))
		{
			func_415(4);
		}
		if (func_845(0))
		{
			func_846(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1491419385) > 0)
		{
			if (func_171(1191437462, 1, 0))
			{
				func_446(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1809565830) > 0)
		{
			if (func_171(1119149048, 1, 0))
			{
				func_446(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_845(1))
		{
			func_846(1);
		}
		if (func_845(2))
		{
			func_846(2);
		}
		if (func_845(4))
		{
			func_846(4);
		}
		if (!func_845(0))
		{
			func_415(0);
		}
	}
}

void func_444()
{
	bool bVar0;
	struct<4> Var1;
	int iVar15;
	int iVar16;
	
	bVar0 = UNLOCK::_UNLOCK_IS_UNLOCKED(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_151(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-236259196))
	{
		return;
	}
	Var1 = { func_847() };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_377(127400949);
		if (func_379(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_847() };
		}
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_848(-2055673461, Var1, 1423542233);
		func_848(-202131179, Var1, -1264898804);
		func_848(2013836545, Var1, 1592019450);
		func_848(1497476650, Var1, 1117400455);
		func_848(1063571467, Var1, 1150213537);
		func_848(2107224237, Var1, 1598825281);
		func_848(1747981656, Var1, -712527121);
		func_848(-1371140647, Var1, 454332195);
		func_848(-19142973, Var1, 256105670);
		func_848(-2074737817, Var1, -1328061889);
		func_848(-1114256243, Var1, -782241404);
		func_848(-1653277288, Var1, 1669853467);
		func_848(1869398132, Var1, -1559225678);
		func_848(459868358, Var1, -266425508);
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) && !func_849())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar15, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar16, false, 0, false);
			if (func_465(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (WEAPON::_0xD955FEE4B87AFA07(iVar16))
					{
						if (func_372(24))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar16, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 127400949, true, 0, false, false);
					}
					else if (WEAPON::_0x0556E9D2ECF39D01(iVar16))
					{
						if ((func_372(24) && func_465(iVar15)) && iVar15 != 127400949)
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_465(iVar15))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_372(24))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 127400949, true, 2, false, false);
			}
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(-236259196, true);
	}
}

void func_445()
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(99890643))
	{
		return;
	}
	if (MISC::IS_PC_VERSION() || MISC::_IS_STADIA_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
	if (MISC::IS_ORBIS_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
}

int func_446(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	
	if (!func_350(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_737(iParam0, 1);
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
			func_431(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_171(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_428(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_354(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_354(iParam0, 0, 0) - iParam1) < 0)
		{
			func_446(iParam0, func_354(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_369(iParam0) == -427144552)
	{
		if (!func_850(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_851(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_378(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_431(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_852(iParam0, iParam1);
	return 1;
}

int func_447(int iParam0)
{
	switch (func_374(iParam0))
	{
		case -2061583405:
			return 1;
		
		case -1719060085:
			return 1;
		
		case -999503751:
			return 1;
		
		case -525676072:
			return 1;
		
		case 81053684:
			return 1;
		
		case -413129408:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_448(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	switch (func_374(iParam0))
	{
		case -2061583405:
			bVar0 = func_853(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		
		case 81053684:
			bVar0 = func_853(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		
		case -999503751:
			bVar0 = func_853(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		
		case -525676072:
			bVar0 = func_853(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		
		case -1719060085:
			bVar0 = func_853(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		
		case -413129408:
			bVar0 = func_853(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_854();
	}
	if (bParam1)
	{
		func_855(0, 0);
	}
}

int func_449(int iParam0)
{
	struct<5> Var0;
	
	Var0 = { func_462(iParam0, 1, 0) };
	return func_463(Var0.f_4);
}

int func_450(int iParam0, int iParam1)
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

void func_451(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	
	if (func_120() == -1)
	{
		Var2 = -1394038466;
	}
	else
	{
		Var2 = 545953470;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var2);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var2))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar1, &Var2, -2008906477))
		{
			return;
		}
		iVar0 = func_450(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_856(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
		}
	}
}

int func_452()
{
	return Global_1946804->f_1;
}

int func_453(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	
	Var4 = func_857(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return 0;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*uParam2 = bVar2;
	Global_1946804->f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_859(uParam0, func_858(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_450(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1373051002))
			{
			}
			else
			{
				Global_1946804->f_2612[Global_1946804->f_2652] = iVar1;
				Global_1946804->f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 1155669136;
					}
					else
					{
						Jump @343; //curOff = 278
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_860(iVar3) && func_861(&(uParam0->f_1[iVar1 /*3*/]), iVar3, &iVar0))
							{
								(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
							}
						}
						else
						{
							(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804->f_2652)
						{
							func_862(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1] /*3*/]), &(Global_1946804->f_2612[iVar1]), 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return 1;
				}
			}
		}
	}

Vector3 func_454(int iParam0, int iParam1)
{
	if (func_120() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		return *((Global_26795.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	return *((Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
}

int func_455(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0 = { func_454(iParam0, iParam1) };
	return vVar0.x;
}

void func_456(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_457(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_458(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_863(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_864(iParam0))
	{
		return 0;
	}
	if (func_865(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_817(iParam0, 1)) || func_20(32768))
	{
		if (!func_817(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_866())
	{
		return 0;
	}
	return 1;
}

void func_459(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_460(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_461(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	
	if (bParam4)
	{
		func_867(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_868(Var0);
}

struct<5> func_462(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;
	
	Var0 = { func_869(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_369(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_762(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		
		case -427144552:
			Var0 = { func_870(bParam1) };
			if (iParam2 && func_871(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_760(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_760(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_761(iParam0, &Var5, 1728382685))
				{
					Var0.f_4 = 1728382685;
				}
				else
				{
					Var0.f_4 = -649335959;
				}
			}
			else
			{
				Var0.f_4 = 1728382685;
			}
			break;
		
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_872(bParam1) };
			switch (func_374(iParam0))
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
			if (func_873(iParam0, -1823706425))
			{
				Var0 = { func_762(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_873(iParam0, -1483207246))
			{
				Var0 = { func_762(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_874(Var0, &Var27, bParam1, 0))
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
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_463(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_875(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_464(int iParam0)
{
	func_856(Global_1946804->f_1497.f_1[func_450(iParam0, 1) /*3*/], 2, 6);
	func_856(Global_1946804->f_1378.f_1[func_450(iParam0, 1) /*3*/], 2, 6);
}

bool func_465(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

bool func_466(int iParam0)
{
	return iParam0 != 0;
}

int func_467(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	if (!func_466(iParam0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 180)
	{
		if (&Global_40.f_9910[iVar1 /*6*/] == iParam0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

bool func_468(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

var func_469(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_876(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_470(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_471(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_472(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_473(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_474(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_475(int iParam0, int iParam1)
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

void func_476(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_877(uParam0, iParam6);
	func_878(uParam0, iParam5);
	func_879(uParam0, iParam4);
	func_880(uParam0, iParam3);
	func_881(uParam0, iParam2);
	func_882(uParam0, iParam1);
}

int func_477(int iParam0)
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
	iVar0 = func_474(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_473(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_472(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_469(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_470(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_471(iParam0);
	if (iVar5 < 1 || iVar5 > func_475(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

bool func_478(int iParam0, bool bParam1)
{
	return func_714(func_118(), iParam0, bParam1);
}

void func_479(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_480(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;
	
	if (!func_350(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_737(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_811("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_812(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_465(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_813(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_813(iVar1);
	}
	return 0;
}

var func_481(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_883(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_482()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_884(iVar1);
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(func_885(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_483()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_884(iVar0);
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(func_885(iVar1)))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(func_885(iVar1), true);
		}
		iVar0++;
	}
}

void func_484(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_58(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

bool func_485(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_486()
{
	return (func_100(&Global_1935630, 4096) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1637780761) > 0);
}

int func_487(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	int iVar11;
	
	if (func_120() != -1)
	{
		return 0;
	}
	if (&Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!func_350(iVar0, 0))
	{
		return 0;
	}
	if (!func_886(iVar0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_887(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_370(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_462(iVar0, 0, 1) };
	iVar10 = func_888(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar10) / BUILTIN::TO_FLOAT(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_889(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_890(iVar11))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	if (!func_143(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	func_844(iVar11, 0, 0, 0, 1);
	*uParam3 = (*uParam3 + iVar11);
	*uParam1 = (*uParam1 + iVar2);
	return 1;
}

var func_488(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_489(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_481(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_490(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_491(bool bParam0, bool bParam1)
{
	var uVar0;
	var uVar9;
	
	if (func_120() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (bParam0)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_CRAFTING_ACTION(&uVar0))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar0, false))
			{
			}
		else
		{
			}
		}
	}
	if (bParam1)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar9))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar9, false))
			{
			}
		else
		{
			}
		}
	}
}

void func_492(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_777(iParam0, sParam4, iParam5);
	}
	func_778(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_493(int iParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam1) * fParam2));
	sVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_891())
	{
		iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(sVar1) * 0.1f));
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(1072517412, 908516622, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(2067252994, 908516622, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = sVar1;
	if (func_891())
	{
		iVar3 = (iVar3 + iVar2);
	}
	TELEMETRY::_0xE6DC9B21AC7A8729(func_84(iParam0), iVar3, sVar1, iParam3);
	iVar4 = func_125(iParam0);
	if (func_85(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(-1391579956, 1997120069, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_ARTHUR"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_85(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_892(1, sVar1);
					func_892(8, sVar1);
					func_892(7, sVar1);
					break;
				
				case 12:
					func_892(6, sVar1);
					break;
				
				case 53:
					func_892(3, sVar1);
					func_892(7, sVar1);
					func_892(4, sVar1);
					break;
				
				case 20:
					func_892(8, sVar1);
					break;
				
				case 19:
					func_892(1, sVar1);
					func_892(2, sVar1);
					break;
				
				case 24:
					func_892(3, sVar1);
					func_892(9, sVar1);
					func_892(20, sVar1);
					break;
				
				case 28:
					func_892(1, sVar1);
					break;
				
				case 34:
					func_892(23, sVar1);
					func_892(2, sVar1);
					func_892(18, sVar1);
					break;
				
				case 29:
					func_892(0, sVar1);
					func_892(9, sVar1);
					break;
				
				case 37:
					break;
				
				case 58:
					break;
				
				case 57:
					func_892(0, sVar1);
					func_892(3, sVar1);
					func_892(2, sVar1);
					func_892(11, sVar1);
					func_892(6, sVar1);
					func_892(25, sVar1);
					func_892(24, sVar1);
					break;
			}
			break;
		
		case 8:
			switch (iVar4)
			{
				case 94:
					func_892(5, sVar1);
					break;
				
				case 63:
					func_892(1, sVar1);
					func_892(3, sVar1);
					break;
				
				case 37:
					func_892(23, sVar1);
					break;
				
				case 116:
					break;
			}
			break;
		
		case 11:
			if (iParam0 == func_187(0, 10, 11, 2116153146))
			{
				func_892(7, sVar1);
				func_892(4, sVar1);
			}
			else if (iParam0 == func_187(0, 7, 11, -379687487))
			{
				func_892(8, sVar1);
				func_892(15, sVar1);
			}
			else if (iParam0 == func_187(0, 8, 11, -1386089015))
			{
				func_892(3, sVar1);
			}
			else if (iParam0 == func_187(0, 11, 11, -1952009645))
			{
				func_892(6, sVar1);
				func_892(3, sVar1);
			}
			else if (iParam0 == func_187(0, 12, 11, 2065895756))
			{
				func_892(9, sVar1);
			}
			break;
	}
	UILOG::_UILOG_SET_TOTAL_TAKE_SUMMARY(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_893()));
	if (!func_894(629))
	{
		func_149(629, 0);
	}
}

int func_494(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

int func_495(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_496(int iParam0, var uParam1, var uParam2)
{
	if (!func_495(iParam0))
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

int func_497()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

var func_498(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_499(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;
	
	if (!func_895(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_497())
	{
		return -1;
	}
	uVar0 = func_498(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_304(iVar1, 0);
	func_327(iVar1, 0);
	func_896(iVar1, 0);
	func_897(iVar1, 0);
	func_898(iVar1, uVar0);
	if (iParam4 != 0)
	{
		func_899(iVar1, iParam4);
	}
	return iVar1;
}

int func_500(int iParam0, int iParam1, int iParam2)
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
	if (iParam1 && func_171(1811977508, 1, 0))
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
			if (func_350(iVar25, 0) && func_370(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_501(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

Vector3 func_502(vector3 vParam0, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9, float fParam10, int iParam11, int iParam12, float fParam13)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	struct<5> Var15;
	struct<5> Var20;
	var uVar25;
	var uVar26;
	
	fVar2 = 9999999f;
	func_900(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_901() == 0 && !func_902(0))
		{
			bVar14 = true;
		}
	}
	if (!func_903(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		iVar10 = func_904();
		if (VOLUME::_0x92A78D0BEDB332A3(iVar10))
		{
		}
	}
	if (!func_905(Global_1310720->f_21))
	{
		fParam10 = iParam11;
	}
	Var15.f_2 = 723128514;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar25, &Var15);
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar26, &Var20);
		while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var20, uVar26) > iVar1)
		{
			vVar7 = { func_906(iVar0, iVar1) };
			bVar11 = func_907(iVar0, iVar1);
			fVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((fVar3 < fVar2 && fVar3 > fParam10) && !func_503(vVar7)) && func_908(iVar0, uParam8, iParam12)) && !func_909(iVar0)) || bVar11)
			{
				if (func_910(vVar7, iVar0, iVar1, bParam5, bParam6, bVar14, iVar10, bParam9, fParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = BUILTIN::VDIST(vParam0, vVar7);
					*uParam3 = iVar0;
					*uParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					VOLUME::_0x748C5F51A18CB8F0(1);
					return vVar4;
				}
			}
		}
	}

int func_503(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_504(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_505(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	iVar0 = func_911(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1894065)[iVar0 /*51*/][iVar2];
			if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iVar4 /*35*/])->f_3))
			{
				if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar4 /*35*/])->f_3, vParam0))
				{
					switch (((*Global_1888801)[iVar4 /*35*/])->f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

void func_506()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(1);
}

void func_507()
{
}

void func_508()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(2);
}

int func_509(int iParam0, int iParam1)
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

int func_510(int iParam0)
{
	return iParam0;
}

void func_511(int iParam0)
{
	if (!func_912(iParam0))
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

void func_512(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_264, iVar0, func_913(iVar0));
		iVar0++;
	}
}

int func_513(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_192)
	{
		if (&iLocal_161[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

var func_514(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = _NAMESPACE71::_0xCEDBF17EFCC0E4A4(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_515(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return MISC::_CREATE_VAR_STRING(2, func_914(sParam1));
}

void func_516()
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_161;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		if (&iLocal_161[iVar1] == 0)
		{
			if (&iLocal_161[iVar1 + 1] != 0)
			{
				iLocal_161[iVar1] = &iLocal_161[iVar1 + 1];
				iLocal_161[iVar1 + 1] = 0;
			}
		}
		iVar1++;
	}
}

void func_517(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_518(bool bParam0, var uParam1, var uParam2)
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

int func_519()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0)
	{
		return 1;
	}
	return 0;
}

int func_520(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			func_915(iVar0);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_521(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_523() - fParam1);
	func_916(uParam0, 1);
	func_917(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_522(var uParam0)
{
	return func_265(*uParam0, 2);
}

float func_523()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_524(var uParam0, char* sParam1, char[4] cParam2)
{
	struct<5> Var0;
	
	Var0 = Global_1359489->f_21;
	Var0.f_1 = 0;
	Var0.f_3 = uParam0;
	Var0.f_4 = MISC::GET_HASH_KEY(sParam1);
	if (func_918(Var0, 2072518271, cParam2, 0))
	{
		return 1;
	}
	return 0;
}

void func_525(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

bool func_526(char* sParam0)
{
	return AUDIO::_0xD89504D9D7D5057D(sParam0);
}

void func_527(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_919(uParam0, iParam1, sParam2))
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

char* func_528(int iParam0)
{
	if (!func_58(iParam0))
	{
		return "INVALID";
	}
	switch (iParam0)
	{
		case 3:
			return "BILL";
		
		case 5:
			return "HOSEA";
		
		case 1:
			return "JOHN";
		
		case 7:
			return "CHARLES_SMITH";
		
		case 0:
			return "DUTCH";
		
		case 2:
			return "JAVIER";
		
		case 9:
			return "LENNY";
		
		case 8:
			return "SEAN";
		
		case 6:
			return "MICAH_BELL";
		
		case 4:
			return "UNCLE";
		
		case 11:
			return "SADIE_ADLER";
		
		case 21:
			return "SWANSON";
		
		case 23:
			return "TRELAWNY";
		
		case 18:
			return "STRAUSS";
		
		default:
			break;
	}
	return "NEEDS TO BE ADDED";
}

bool func_529(var uParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_920(cParam1, uParam0);
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

int func_530(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 6:
			*uParam1 = { 2368.145f, 1339.411f, 105.2073f };
			*uParam2 = 0f;
			break;
		
		case 0:
			*uParam1 = { -1347.354f, 2415.999f, 306.1693f };
			*uParam2 = 0f;
			break;
		
		case 2:
			*uParam1 = { 676.0986f, -1223.26f, 44.8735f };
			*uParam2 = 186f;
			break;
		
		case 1:
			*uParam1 = { -113.3444f, -16.16381f, 94.90366f };
			*uParam2 = 0f;
			break;
		
		case 3:
			*uParam1 = { 1855.146f, -1834.112f, 42.1034f };
			*uParam2 = 0f;
			break;
		
		case 7:
			*uParam1 = { -2591.77f, 465.7827f, 146.256f };
			*uParam2 = 0f;
			break;
		
		case 8:
			*uParam1 = { -1595.7f, -1414.78f, 83.7f };
			*uParam2 = 0f;
			break;
		
		case 5:
			*uParam1 = { 2278.67f, -751.0582f, 40.9953f };
			*uParam2 = 0f;
			break;
		
		default:
			return 0;
	}
	return 1;
}

int func_531(int iParam0, int iParam1)
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

Vector3 func_532(int iParam0, int iParam1)
{
	return func_921(iParam0, iParam1);
}

void func_533(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_534(int iParam0, int iParam1, float fParam2, bool bParam3)
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

void func_535(int iParam0)
{
	func_77(iParam0, 8, 1);
}

void func_536(var uParam0, bool bParam1)
{
	if (bParam1 == bLocal_1624)
	{
		return;
	}
	if (bParam1)
	{
		AUDIO::_0x0D7FD6A55FD63AEF(21, 3, bParam1);
		AUDIO::_0x0D7FD6A55FD63AEF(6, 3, bParam1);
		AUDIO::_0x0D7FD6A55FD63AEF(14, 3, bParam1);
		AUDIO::_0x0D7FD6A55FD63AEF(15, 3, bParam1);
		AUDIO::_0x0D7FD6A55FD63AEF(18, 3, bParam1);
		AUDIO::_0x0D7FD6A55FD63AEF(19, 3, bParam1);
		AUDIO::_0x0D7FD6A55FD63AEF(22, 3, bParam1);
		AUDIO::_0x0D7FD6A55FD63AEF(24, 3, bParam1);
		AUDIO::_0x0D7FD6A55FD63AEF(28, 2, bParam1);
	}
	else
	{
		AUDIO::_0x660A8F876DF1D4F8(21);
		AUDIO::_0x660A8F876DF1D4F8(6);
		AUDIO::_0x660A8F876DF1D4F8(14);
		AUDIO::_0x660A8F876DF1D4F8(15);
		AUDIO::_0x660A8F876DF1D4F8(18);
		AUDIO::_0x660A8F876DF1D4F8(19);
		AUDIO::_0x660A8F876DF1D4F8(22);
		AUDIO::_0x660A8F876DF1D4F8(24);
		AUDIO::_0x660A8F876DF1D4F8(28);
	}
	bLocal_1624 = bParam1;
	if (bParam1 == 0)
	{
		func_922(uParam0, 1);
	}
}

void func_537(int iParam0, int iParam1)
{
	if ((iParam0 >= 1 && iParam0 <= 3) && &Global_1900073->f_174[iParam0] != iParam1)
	{
		Global_1900073->f_174[iParam0] = iParam1;
	}
}

void func_538(var uParam0)
{
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(func_62(uParam0->f_2), 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.75f);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_27, 1.75f);
		if (TASK::GET_PED_WAYPOINT_PROGRESS(func_62(uParam0->f_2)) < 2)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(func_62(uParam0->f_2), 1f, 0, -1082130432, 0);
		}
		else if (TASK::GET_PED_WAYPOINT_PROGRESS(func_62(uParam0->f_2)) < 6)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(func_62(uParam0->f_2), 1.001f, 0, -1082130432, 0);
		}
		else if (TASK::GET_PED_WAYPOINT_PROGRESS(func_62(uParam0->f_2)) < 35)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(func_62(uParam0->f_2), 1.25f, 0, -1082130432, 0);
		}
		else if (TASK::GET_PED_WAYPOINT_PROGRESS(func_62(uParam0->f_2)) >= 337 && TASK::GET_PED_WAYPOINT_PROGRESS(func_62(uParam0->f_2)) < 342)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(func_62(uParam0->f_2), 1.5f, 0, -1082130432, 0);
		}
		else if (TASK::GET_PED_WAYPOINT_PROGRESS(func_62(uParam0->f_2)) < 438)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(func_62(uParam0->f_2), 1.75f, 0, -1082130432, 0);
		}
		else if (TASK::GET_PED_WAYPOINT_PROGRESS(func_62(uParam0->f_2)) < 452)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(func_62(uParam0->f_2), 1.501f, 0, -1082130432, 0);
		}
		else if (TASK::GET_PED_WAYPOINT_PROGRESS(func_62(uParam0->f_2)) < 462)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(func_62(uParam0->f_2), 1.25f, 0, -1082130432, 0);
		}
		else if (TASK::GET_PED_WAYPOINT_PROGRESS(func_62(uParam0->f_2)) < 466)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(func_62(uParam0->f_2), 1.001f, 0, -1082130432, 0);
		}
		else if (TASK::GET_PED_WAYPOINT_PROGRESS(func_62(uParam0->f_2)) < 468)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(func_62(uParam0->f_2), 1f, 0, -1082130432, 0);
		}
	}
}

bool func_539(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

Vector3 func_540()
{
	return 1150.682f, -574.3315f, 78.1578f;
}

int func_541(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return 0;
}

int func_542(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!PED::IS_PED_ON_MOUNT(iParam0) && !ENTITY::DOES_ENTITY_EXIST(PED::_0xB676EFDA03DADA52(iParam1, 0)))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iParam1, bParam2);
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1868526510, 1) != 1)
				{
					TASK::TASK_MOUNT_ANIMAL(iParam0, iParam1, iParam4, -1, fParam3, 1, 0, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_543(int iParam0)
{
	var uVar0;
	
	uVar0 = func_923(iParam0);
	if (func_679(&uVar0, 8))
	{
		return 1;
	}
	return 0;
}

void func_544(int iParam0, int iParam1, var uParam2, vector3 vParam3, char* sParam6, int iParam7, int iParam8, float fParam9, float fParam10, float fParam11, float fParam12, int iParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19)
{
	struct<10> Var0;
	struct<10> Var11;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		if (iParam7 == 0)
		{
			iParam7 = 14;
		}
		Var0 = 2;
		Var0.f_4 = sParam6;
		Var0.f_5 = iParam7;
		Var0.f_7 = iParam16;
		Var0.f_9 = iParam17;
		TASK::TASK_LEAD_AND_CONVERSE(iParam0, iParam1, &Var0, iParam8, fParam9, fParam10, fParam11, iParam13, fParam12);
	}
	else if (!func_924(vParam3, 0f, 0f, 0f))
	{
		Var11 = 0;
		Var11.f_1 = { vParam3 };
		Var11.f_7 = iParam16;
		Var11.f_9 = iParam17;
		Var11.f_8 = iParam18;
		TASK::TASK_LEAD_AND_CONVERSE(iParam0, iParam1, &Var11, iParam8, fParam9, fParam10, fParam11, iParam13, fParam12);
	}
	if (bParam15)
	{
		PED::_0x7DE9692C6F64CFE8(iParam0, false, 0, 0);
	}
	if (bParam19)
	{
		func_925(iParam0, iParam1, iParam14);
	}
}

void func_545(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, float fParam10, float fParam11, int iParam12, int iParam13, int iParam14, float fParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	struct<7> Var0;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = iParam14;
		Var0.f_2 = fParam15;
		Var0.f_4 = iParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), &Var0);
	}
	else
	{
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, iParam6, fParam7, iParam9, fParam10, fParam11, iParam12, iParam13);
	}
	if (bParam19)
	{
		PED::_0x7DE9692C6F64CFE8(iParam0, false, 0, 0);
	}
	if (bParam22)
	{
		func_925(iParam0, iParam1, iParam18);
	}
}

void func_546(char* sParam0)
{
	StringCopy(sParam0, "walk_and_talk", 64);
	StringCopy(&(sParam0->f_8), "WALK_AND_TALK_REQUEST", 64);
	CAM::_0x6A4D224FC7643941(sParam0);
}

void func_547()
{
	if ((func_29(iLocal_27, 0) && !func_531(iLocal_27, -982327190)) && PED::_IS_MOUNT_SEAT_FREE(iLocal_27, -1))
	{
		TASK::TASK_STAND_STILL(iLocal_27, -1);
	}
	if ((func_29(iLocal_28, 0) && !func_531(iLocal_28, -982327190)) && PED::_IS_MOUNT_SEAT_FREE(iLocal_28, -1))
	{
		TASK::TASK_STAND_STILL(iLocal_28, -1);
	}
}

int func_548(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_926(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

void func_549(var uParam0, int iParam1)
{
	char cVar0[32];
	
	func_927(&(uParam0->f_96));
	uParam0->f_338 = func_604(iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_338))
	{
		return;
	}
	StringCopy(&cVar0, uParam0->f_338, 32);
	func_928(&(uParam0->f_96), cVar0);
	switch (iParam1)
	{
		case 0:
			func_929(uParam0);
			break;
	}
}

void func_550(int iParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, 0);
	PED::_0x9E66708B2B41F14A(iParam0, -1);
	if (bParam1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 43, false);
	}
	else
	{
		PED::_0x15F4732C357B1D6D(iParam0, PLAYER::PLAYER_ID(), 6);
	}
}

void func_551(int iParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, 0);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 43, false);
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "WalkAndTalk");
	}
	PED::_0x9E66708B2B41F14A(iParam0, -1);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0xC4873B053054C04B(PLAYER::PLAYER_ID(), 0, 1050253722, 1067030938, 0, 0, -1082130432, -1082130432);
	}
	else
	{
		PED::_0x15F4732C357B1D6D(iParam0, PLAYER::PLAYER_ID(), 6);
	}
	if (bParam1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
	}
}

void func_552(char* sParam0)
{
	if (CAM::_0x927B810E43E99932(sParam0))
	{
		CAM::_0x0A5A4F1979ABB40E(sParam0);
	}
	CAM::_0x798BE43C9393632B(sParam0);
}

void func_553(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (bParam8)
	{
		PED::SET_PED_RESET_FLAG(iParam0, 229, true);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (bParam3 && PED::_0xD5FE956C70FF370B(iParam0))
		{
			PED::_0x7DE9692C6F64CFE8(iParam0, false, 0, 0);
		}
		func_930(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(iParam0, 188, true);
		}
	}
}

void func_554(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (bParam8)
	{
		PED::SET_PED_RESET_FLAG(iParam0, 229, true);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (bParam3 && PED::_0xD5FE956C70FF370B(iParam0))
		{
			PED::_0x7DE9692C6F64CFE8(iParam0, false, 0, 0);
		}
		func_930(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(iParam0, 188, true);
		}
	}
}

void func_555(char* sParam0, int iParam1)
{
	var uVar0[1];
	
	if (CAM::_0xDD0B7C5AE58F721D(sParam0) && !CAM::_0x927B810E43E99932(sParam0))
	{
		CAM::_0xB8B207C34285E978(sParam0);
		uVar0[0] = iParam1;
		CAM::_0xFEB8646818294C75(sParam0, &uVar0);
	}
}

float func_556(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_557(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	vector3 vVar0[24];
	bool bVar3;
	
	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam2) && (func_556(iParam2, iParam3, 1, 1) < 70f || iParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			TASK::TASK_LOOK_AT_ENTITY(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_556(iParam2, iParam3, 1, 1) < 25f)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			bVar3 = true;
		}
		func_228(&uLocal_0);
		if (AUDIO::_0xD89504D9D7D5057D(sParam1))
		{
			if (func_931(sParam1))
			{
				return 1;
			}
		}
		else if (func_529(uParam0, cVar0, bVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

float func_558(int iParam0, int iParam1)
{
	return func_932(iParam0, iParam1);
}

void func_559(int iParam0)
{
	if (Global_1900073->f_13 != iParam0)
	{
		Global_1900073->f_13 = iParam0;
	}
}

void func_560()
{
	if (!func_289())
	{
		func_290(1);
	}
}

int func_561(int iParam0)
{
	if (iParam0 == 0)
	{
		return (func_594() && func_289());
	}
	else if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return func_933(iParam0, 1);
	}
	return 0;
}

bool func_562(int iParam0)
{
	return func_75((Global_1900073->f_26[iParam0 /*30*/])->f_5, 8);
}

bool func_563(var uParam0)
{
	return (ANIMSCENE::_0x25557E324489393C(uParam0->f_156) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_156, 0));
}

int func_564(int iParam0)
{
	if (&Global_1900073->f_26[iParam0 /*30*/] == 7 && &Global_1900073->f_154[iParam0] == 1)
	{
		return 1;
	}
	return 0;
}

bool func_565(int iParam0)
{
	return &Global_1900073->f_26[iParam0 /*30*/] == 12;
}

void func_566()
{
	if (!func_75(Local_195.f_95, 2048))
	{
		if (!func_67(&uLocal_1558))
		{
			func_576(0);
			func_60(&uLocal_1558, 0);
		}
		if (func_215(&uLocal_1558, 1.25f) && func_569(Local_195.f_37, 0) != -1415022764)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1564);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_532(2, 5), (1f + 0.5f), -1, 5f, false, func_558(2, 5));
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1564);
			TASK::TASK_PERFORM_SEQUENCE(Local_195.f_37, iLocal_1564);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1564);
			PED::_0x2208438012482A1A(Local_195.f_37, false, false);
			TASK::_0x12990818C1D35886(Local_195.f_37, 0, 1065353216);
			func_221(&(Local_195.f_95), 2048);
		}
	}
}

bool func_567(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

void func_568(int iParam0, var uParam1, int iParam2, var uParam3)
{
	if (!func_29(iParam0, 0))
	{
		return;
	}
	*uParam1 = { 0f, 0f, 0f };
	uParam1->f_4 = 21030;
	uParam1->f_8 = 4;
	uParam1->f_19 = 4;
	uParam1->f_21 = 4;
	uParam1->f_17 = 4;
	uParam1->f_18 = 4;
	uParam1->f_3 = uParam3;
	uParam1->f_7 = iParam2;
	_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, uParam1);
}

int func_569(int iParam0, int iParam1)
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

void func_570(int iParam0)
{
	if (iParam0 == 1)
	{
		func_290(256);
	}
	else
	{
		func_590(256);
	}
}

void func_571(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, float fParam5, int iParam6)
{
	var uVar0;
	
	uVar0 = *uParam0;
	func_934(&uVar0, iParam1, iParam2, sParam3, sParam4, fParam5, iParam6);
}

int func_572(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, char* sParam5)
{
	if ((!func_205(*iParam1) || !func_205(*iParam2)) || !ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iParam0, fParam3, 3, 1, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam0), sParam5, 0);
	HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam0), sParam5, 1, 0, 0, 0);
	func_935(*iParam1, 1, 1);
	func_936(*iParam1, 1, 1);
	if (func_937(*iParam1, 1))
	{
		return 0;
	}
	func_935(*iParam2, 1, 1);
	func_936(*iParam2, 1, 1);
	if (func_937(*iParam2, 1))
	{
		return 1;
	}
	return -1;
}

bool func_573(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

int func_574(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0) && AUDIO::_0x1ECC76792F661CF5(sParam0))
	{
		return 1;
	}
	return 0;
}

void func_575(int iParam0)
{
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_938(iParam0, 32);
	func_672();
}

void func_576(int iParam0)
{
	if (func_561(1))
	{
		func_559(0);
		func_622(1, 1, 0, iParam0);
	}
}

void func_577(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, var uParam10)
{
	char[] cVar0[8];
	
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = uParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_85(iParam0) == 1)
	{
		cVar0 = func_939(func_335(iParam0));
		TELEMETRY::_0x8EC7890D446BD9C1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_85(iParam0) == 8)
	{
		cVar0 = func_941(func_940(iParam0));
		TELEMETRY::_0x8EC7890D446BD9C1(&cVar0, 0, Global_1572864->f_9);
	}
	func_663(1, 1);
	func_667(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_107(0);
	func_108(0);
	func_95(1f);
}

void func_578(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_579(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_68(&(Local_195.f_56));
	func_68(&(Local_195.f_38));
}

void func_580(var uParam0)
{
	char[] cVar0[8];
	int iVar1;
	int iVar2;
	
	switch (Local_195.f_5)
	{
		case 0:
			if (func_557(&uLocal_36, "FIHJ1_CLM_WNT", func_62(uParam0->f_2), Global_35, 0, 0, 1, 1))
			{
				func_218("FSH_MOUNT");
				if (!func_942(7))
				{
					func_575(7);
				}
				iLocal_193 = 0;
				func_68(&(Local_195.f_38));
				PLAYER::_0xC71D07C96946E263(PLAYER::GET_PLAYER_INDEX(), iLocal_27);
				func_579(&(Local_195.f_5), 1);
			}
			break;
		
		case 1:
			func_60(&(Local_195.f_56), 0);
			if (!func_942(7))
			{
				func_575(7);
			}
			if (!func_539(Global_35))
			{
				PLAYER::_0xC71D07C96946E263(PLAYER::GET_PLAYER_INDEX(), iLocal_27);
			}
			if (func_539(Global_35))
			{
				if (func_942(7))
				{
					func_268(7);
				}
				func_943("FSH_MOUNT", 1);
				func_68(&(Local_195.f_38));
				func_535(2);
				func_579(&(Local_195.f_5), 2);
			}
			else if (!func_942(7))
			{
				func_575(7);
			}
			else if (func_215(&(Local_195.f_56), 6f))
			{
				func_219("FSH_MOUNT", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_68(&(Local_195.f_56));
			}
			if ((iLocal_193 < 3 && !func_539(Global_35)) && func_539(func_62(uParam0->f_2)))
			{
				func_60(&(Local_195.f_38), 0);
				if (func_627(&(Local_195.f_38), func_944(iLocal_193 == 0, 4.6f, 10f)))
				{
					if (func_529(&uLocal_36, func_945("FIHJ1_MOUNTUP"), 1, iLocal_193, 0, 0))
					{
						iLocal_193++;
						func_68(&(Local_195.f_38));
					}
				}
			}
			break;
		
		case 2:
			if (!func_567(1))
			{
				func_60(&(Local_195.f_38), 0);
			}
			if ((func_627(&(Local_195.f_38), 1.25f) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(func_62(uParam0->f_2), true)) && !func_574("FIHJ1_CLM_WNT"))
			{
				iVar1 = func_118();
				iVar2 = func_472(iVar1);
				cVar0 = "FIHJ1_TOLAKE";
				if (iVar2 > 16)
				{
					cVar0 = "FIHJ1_DPART_EVN";
				}
				else if (iVar2 < 12)
				{
					cVar0 = "FIHJ1_DPART_MRN";
				}
				if (func_557(&uLocal_36, cVar0, func_62(uParam0->f_2), Global_35, 0, 0, 1, 1))
				{
					if (func_942(7))
					{
						func_268(7);
					}
					func_535(2);
					func_218("FISH01_O_FLWJ");
					if (MISC::ARE_STRINGS_EQUAL(cVar0, "FIHJ1_TOLAKE"))
					{
						func_220("FIHJ1_TOLAKE", 1);
					}
					iLocal_193 = 0;
					func_220("FIHJ1_DPART", 1);
					func_68(&(Local_195.f_38));
					func_579(&(Local_195.f_5), 3);
				}
			}
			break;
		
		case 3:
			if (!func_567(1))
			{
				func_60(&(Local_195.f_38), 0);
			}
			if ((func_627(&(Local_195.f_38), 2f) && !func_567(1)) && func_557(&uLocal_36, "FIHJ1JAVMNT", Global_35, func_62(uParam0->f_2), 0, 0, 1, 1))
			{
				if (func_942(7))
				{
					func_268(7);
				}
				func_535(2);
				func_218("FISH01_O_FLWJ");
				iLocal_193 = 0;
				func_220("FIHJ1JAVMNT", 1);
				func_579(&(Local_195.f_5), 51);
			}
			break;
		
		case 51:
			if (func_942(7))
			{
				func_268(7);
			}
			func_535(2);
			func_68(&(Local_195.f_38));
			func_68(&(Local_195.f_56));
			func_218("FISH01_O_FLWJ");
			func_579(&(Local_195.f_5), -1);
			break;
	}
}

void func_581(var uParam0)
{
	vector3 vVar0[24];
	
	switch (Local_195.f_5)
	{
		case 0:
			if (!func_567(1))
			{
				func_60(&(Local_195.f_38), 0);
			}
			if (!func_539(Global_35))
			{
				PLAYER::_0xC71D07C96946E263(PLAYER::GET_PLAYER_INDEX(), iLocal_27);
			}
			if ((func_627(&(Local_195.f_38), 1.25f) && !func_567(1)) && ((func_217("FIHJ1_TOLAKE") || func_217("FIHJ1_DPART")) || func_557(&uLocal_36, "FIHJ1_TOLAKE", func_62(uParam0->f_2), Global_35, 0, 0, 1, 1)))
			{
				func_218("FISH01_O_FLWJ");
				func_220("FIHJ1_TOLAKE", 1);
				if (!func_942(7))
				{
					func_575(7);
				}
				iLocal_193 = 0;
				if (!func_539(Global_35))
				{
					func_579(&(Local_195.f_5), 1);
				}
				else
				{
					func_579(&(Local_195.f_5), 11);
				}
			}
			break;
		
		case 1:
			iLocal_193 = 0;
			if (!func_539(Global_35))
			{
				PLAYER::_0xC71D07C96946E263(PLAYER::GET_PLAYER_INDEX(), iLocal_27);
				func_219("FSH_MOUNT", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_218("FSH_MOUNT");
				func_9(2);
				if (!func_942(7))
				{
					func_575(7);
				}
				func_579(&(Local_195.f_5), 11);
			}
			else if (func_539(Global_35))
			{
				func_60(&(Local_195.f_38), 0);
				if ((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(func_62(uParam0->f_2), 0) && TASK::GET_PED_WAYPOINT_PROGRESS(func_62(uParam0->f_2)) > 60) && (func_217("FIHJ1_RIDE") || func_557(&uLocal_36, "FIHJ1_RIDE", Global_35, func_62(uParam0->f_2), 0, 0, 1, 1)))
				{
					if (func_942(7))
					{
						func_268(7);
					}
					func_943("FSH_MOUNT", 1);
					func_535(2);
					func_220("FIHJ1_RIDE", 1);
					AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_RIDE");
					func_68(&(Local_195.f_38));
					func_218("FISH01_O_FLWJ");
					func_579(&(Local_195.f_5), 2);
				}
			}
			break;
		
		case 11:
			func_60(&(Local_195.f_56), 0);
			PLAYER::_0xC71D07C96946E263(PLAYER::GET_PLAYER_INDEX(), iLocal_27);
			if (func_539(Global_35))
			{
				func_60(&(Local_195.f_38), 0);
				if ((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(func_62(uParam0->f_2), 0) && TASK::GET_PED_WAYPOINT_PROGRESS(func_62(uParam0->f_2)) > 60) && (func_217("FIHJ1_RIDE") || func_557(&uLocal_36, "FIHJ1_RIDE", Global_35, func_62(uParam0->f_2), 0, 0, 1, 1)))
				{
					if (func_942(7))
					{
						func_268(7);
					}
					iLocal_193 = 0;
					func_943("FSH_MOUNT", 1);
					func_535(2);
					func_220("FIHJ1_RIDE", 1);
					AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_RIDE");
					func_68(&(Local_195.f_38));
					func_218("FISH01_O_FLWJ");
					func_579(&(Local_195.f_5), 2);
				}
			}
			else if (!func_942(7))
			{
				func_575(7);
			}
			else if (func_215(&(Local_195.f_56), 15f))
			{
				func_219("FSH_MOUNT", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_68(&(Local_195.f_56));
			}
			if ((iLocal_193 < 3 && !func_539(Global_35)) && func_539(func_62(uParam0->f_2)))
			{
				if (!func_567(1))
				{
					func_60(&(Local_195.f_38), 0);
				}
				if (func_627(&(Local_195.f_38), 6f) && !func_567(1))
				{
					if (func_529(&uLocal_36, func_945("FIHJ1_MOUNTUP"), 1, iLocal_193, 0, 0))
					{
						iLocal_193++;
						func_68(&(Local_195.f_38));
					}
				}
			}
			if (iLocal_194 < 3)
			{
				if (func_539(Global_35) && func_556(Global_35, func_62(uParam0->f_2), 1, 1) > 23f)
				{
					if (!func_567(1))
					{
						func_60(&uLocal_155, 0);
					}
					if (func_627(&uLocal_155, 8f) && !func_567(1))
					{
						if (func_529(&uLocal_36, func_945("FIHJ1_FALLBACK"), 1, iLocal_194, 0, 0))
						{
							iLocal_194++;
							func_68(&uLocal_155);
						}
					}
				}
			}
			break;
		
		case 2:
			if (!func_567(1))
			{
				func_60(&(Local_195.f_56), 0);
			}
			if (func_556(func_62(uParam0->f_2), Global_35, 1, 1) < 10f)
			{
				iLocal_193 = 0;
				func_68(&(Local_195.f_38));
				func_579(&(Local_195.f_5), 5);
			}
			else if (func_229(&(Local_195.f_56)) >= 6f && !func_567(1))
			{
				func_219("FISH01_O_FLWJ", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_68(&(Local_195.f_38));
				iLocal_193 = 0;
				func_579(&(Local_195.f_5), 5);
			}
			break;
		
		case 5:
			if (!func_75(Local_195.f_94, 536870912))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(func_62(uParam0->f_2), sLocal_137))
				{
					if ((TASK::GET_PED_WAYPOINT_PROGRESS(func_62(uParam0->f_2)) >= 338 && TASK::GET_PED_WAYPOINT_PROGRESS(func_62(uParam0->f_2)) <= 341) && !func_567(1))
					{
						StringCopy(&cVar0, "FIHJ1FSHRT", 24);
						func_529(&uLocal_36, cVar0, 0, -1, 0, 0);
						func_221(&(Local_195.f_94), 536870912);
					}
				}
			}
			if (!func_75(Local_195.f_94, 1048576))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(func_62(uParam0->f_2), sLocal_137))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(func_62(uParam0->f_2)) > 342 && !func_567(1))
					{
						StringCopy(&cVar0, "FIHJ1_LANRIVER", 24);
						func_529(&uLocal_36, cVar0, 0, -1, 0, 0);
						func_221(&(Local_195.f_94), 1048576);
					}
				}
			}
			if (!func_75(Local_195.f_95, 256))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(func_62(uParam0->f_2), sLocal_137))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(func_62(uParam0->f_2)) >= 440 && !func_567(1))
					{
						StringCopy(&cVar0, "FIHJ1FSHDNHR", 24);
						func_529(&uLocal_36, cVar0, 0, -1, 0, 0);
						func_221(&(Local_195.f_95), 256);
					}
				}
			}
			if (!func_541(Global_35))
			{
				func_60(&(Local_195.f_56), 0);
				if (func_215(&(Local_195.f_56), 1.5f))
				{
					func_9(2);
					func_579(&(Local_195.f_5), 0);
				}
			}
			else
			{
				func_68(&(Local_195.f_56));
			}
			if (iLocal_194 < 3)
			{
				if (func_556(Global_35, func_62(uParam0->f_2), 1, 1) > 23f)
				{
					if (!func_567(1))
					{
						func_60(&uLocal_155, 0);
					}
					if (func_627(&uLocal_155, 8f) && !func_567(1))
					{
						if (func_529(&uLocal_36, func_945("FIHJ1_FALLBACK"), 1, iLocal_194, 0, 0))
						{
							iLocal_194++;
							func_68(&(Local_195.f_38));
						}
					}
				}
			}
			break;
		
		case 51:
			if (func_557(&uLocal_36, "FIHJ1_LOOKSPOT", func_62(uParam0->f_2), Global_35, 0, 0, 1, 1))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_ARRIVE");
				func_579(&(Local_195.f_5), -1);
			}
			break;
	}
}

int func_582(var uParam0, var uParam1, char* sParam2, float fParam3, float fParam4, float fParam5, bool bParam6)
{
	switch (uParam1->f_12)
	{
		case 0:
			if (func_556(Global_35, func_62(uParam0->f_2), 1, 1) > fParam3)
			{
				if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(func_62(uParam0->f_2)))
				{
					TASK::WAYPOINT_PLAYBACK_PAUSE(func_62(uParam0->f_2), 1, 1, 0);
				}
				if (bParam6)
				{
					func_514(sParam2, 7500, 0, 0, 0, 1);
					func_218(sParam2);
					func_228(&(Local_195.f_56));
				}
				uParam1->f_12 = 1;
			}
			break;
		
		case 1:
			if (bParam6)
			{
				if (func_67(&(Local_195.f_56)))
				{
					if (func_229(&(Local_195.f_56)) > 2f)
					{
						func_219(sParam2, 7500, 0, 1, 0, 0, -1, -1, 0);
						func_68(&(Local_195.f_56));
					}
				}
			}
			if (func_556(Global_35, func_62(uParam0->f_2), 1, 1) > fParam5)
			{
				uParam1->f_12 = 2;
			}
			else if (func_556(Global_35, func_62(uParam0->f_2), 1, 1) < fParam4)
			{
				if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(func_62(uParam0->f_2)))
				{
					TASK::WAYPOINT_PLAYBACK_RESUME(func_62(uParam0->f_2), false, -1, 0);
				}
				func_218("FISH01_O_FLWJ");
				uParam1->f_12 = 0;
			}
			break;
		
		case 2:
			if (func_556(Global_35, func_62(uParam0->f_2), 1, 1) < fParam4)
			{
				if (func_75(uParam1->f_83, 1))
				{
					func_596(&(uParam1->f_83), 1);
				}
				if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(func_62(uParam0->f_2)))
				{
					TASK::WAYPOINT_PLAYBACK_RESUME(func_62(uParam0->f_2), false, -1, 0);
				}
				func_218("FISH01_O_FLWJ");
				uParam1->f_12 = 0;
			}
			else
			{
				if (!func_75(uParam1->f_83, 1))
				{
					func_221(&(uParam1->f_83), 1);
				}
				return 0;
			}
			break;
	}
	return 1;
}

int func_583(var uParam0, var uParam1, int iParam2, float fParam3)
{
	if (func_946(Global_35, func_532(1, 0), &uLocal_149, 60f, 50f, 40f, 10f, fParam3, 0, 0, 1, 1, 1) || func_573(Global_35, &(uLocal_1565[0]), 1, 0))
	{
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
		return 1;
	}
	return 0;
}

void func_584(var uParam0)
{
	switch (Local_195.f_5)
	{
		case 0:
			if (!func_567(1))
			{
				if (func_557(&uLocal_36, "FIHJ1_FLW_FSPOT", func_62(uParam0->f_2), Global_35, 0, 0, 1, 1))
				{
					func_218("FISH01_O_GTFS");
					func_228(&uLocal_17);
					AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_ARRIVE");
					func_535(2);
					func_579(&(Local_195.f_5), 1);
				}
			}
			break;
		
		case 1:
			if (!func_567(1))
			{
				func_60(&(Local_195.f_38), 0);
			}
			if (func_215(&(Local_195.f_38), 2.5f))
			{
				if (func_557(&uLocal_36, "FIHJ1_IG1", func_62(uParam0->f_2), Global_35, 0, 0, 1, 1))
				{
					func_579(&(Local_195.f_5), 2);
				}
			}
			break;
		
		case 2:
			func_60(&(Local_195.f_56), 0);
			if (func_215(&(Local_195.f_56), 6f) || func_556(func_62(uParam0->f_2), Global_35, 1, 1) < 5f)
			{
				if (func_67(&(Local_195.f_56)) && func_556(func_62(uParam0->f_2), Global_35, 1, 1) >= 5f)
				{
					func_219("FISH01_O_GTFS", 7500, 0, 1, 0, 0, -1, -1, 0);
					func_68(&(Local_195.f_56));
				}
				func_579(&(Local_195.f_5), 3);
			}
			break;
		
		case 3:
			func_60(&(Local_195.f_56), 0);
			if (func_215(&(Local_195.f_56), 5f))
			{
				if (!func_947() && func_556(func_62(uParam0->f_2), Global_35, 1, 1) > 9f)
				{
					func_219("FISH01_O_GTFS", 7500, 0, 1, 0, 0, -1, -1, 0);
				}
			}
			if (func_573(Global_35, Local_195.f_355, 1, 0))
			{
				func_579(&(Local_195.f_5), 51);
			}
			break;
		
		case 51:
			func_579(&(Local_195.f_5), -1);
			break;
	}
}

void func_585(var uParam0)
{
	vector3 vVar0[24];
	char cVar3[128];
	
	func_63(1, func_567(1));
	switch (Local_195.f_5)
	{
		case 0:
			if (func_557(&uLocal_36, "FIHJ1_STRTFISH", func_62(uParam0->f_2), Global_35, 0, 0, 1, 1))
			{
				iLocal_193 = 0;
				func_218("FISH01_O_FFSL");
				if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
				{
					MAP::REMOVE_BLIP(&(Local_195.f_90));
				}
				Local_195.f_90 = MAP::_0xA6EF0C54A3443E70(408396114, Local_195.f_355);
				func_9(2);
				func_579(&(Local_195.f_5), 1);
			}
			break;
		
		case 1:
			func_60(&(Local_195.f_56), 0);
			if (func_215(&(Local_195.f_56), 6f) || func_573(Global_35, Local_195.f_355, 1, 0))
			{
				if (!func_573(Global_35, Local_195.f_355, 1, 0))
				{
					func_219("FISH01_O_FFSL", 7500, 0, 1, 0, 0, -1, -1, 0);
				}
				else
				{
					func_218("FISH01_O_GFISH");
				}
				func_579(&(Local_195.f_5), 2);
			}
			break;
		
		case 2:
			if (func_573(Global_35, Local_195.f_355, 1, 0) && !func_567(0))
			{
				if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
				{
					_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
					MAP::REMOVE_BLIP(&(Local_195.f_90));
				}
				AUDIO::TRIGGER_MUSIC_EVENT("CAFISH01_START_FISH");
				func_218("FISH01_O_GFISH");
				func_560();
				func_599(1);
				func_600(0);
				func_601(1);
				func_602(0);
				func_68(&(Local_195.f_38));
				func_596(&(Local_195.f_94), 16);
				func_579(&(Local_195.f_5), 3);
			}
			break;
		
		case 3:
			if (func_594() && func_561(0))
			{
				func_579(&(Local_195.f_5), 4);
			}
			if (func_948("FISH01_O_FFSL", 0, 0, -1, -1, 0) && func_573(Global_35, Local_195.f_355, 1, 0))
			{
				func_218("FISH01_O_GFISH");
			}
			if (!func_573(Global_35, Local_195.f_356, 1, 0) || !func_594())
			{
				func_579(&(Local_195.f_5), 10);
			}
			if (func_949())
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_950()) && MISC::IS_STRING_NULL_OR_EMPTY(sLocal_141))
				{
					sLocal_141 = "FISH01_O_GFISH";
					func_951();
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_141))
			{
				func_218(sLocal_141);
				sLocal_141 = "";
			}
			break;
		
		case 4:
			if (func_949())
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_950()) && MISC::IS_STRING_NULL_OR_EMPTY(sLocal_141))
				{
					sLocal_141 = "FISH01_O_GFISH";
					func_951();
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_141))
			{
				func_218(sLocal_141);
				sLocal_141 = "";
			}
			if (!func_75(Local_195.f_94, 131072))
			{
				if (func_587(0))
				{
					func_60(&(Local_195.f_38), 0);
					if (func_215(&(Local_195.f_38), 2f))
					{
						func_68(&(Local_195.f_38));
						if (!func_573(Global_35, Local_195.f_356, 1, 0))
						{
							func_218("FISH01_O_FFSL");
						}
						else
						{
							func_218("FISH01_O_GFISH");
						}
						func_579(&(Local_195.f_5), 5);
						func_221(&(Local_195.f_94), 131072);
					}
				}
			}
			else if (func_587(0) || func_595(0))
			{
				if (!func_573(Global_35, Local_195.f_356, 1, 0))
				{
					func_218("FISH01_O_FFSL");
				}
				else
				{
					func_218("FISH01_O_GFISH");
				}
				if (func_217("FIHJ1_WEATHER"))
				{
					func_579(&(Local_195.f_5), 10);
				}
				else
				{
					func_579(&(Local_195.f_5), 15);
				}
				func_221(&(Local_195.f_94), 131072);
			}
			if (!func_573(Global_35, Local_195.f_356, 1, 0) || !func_594())
			{
				func_579(&(Local_195.f_5), 10);
			}
			break;
		
		case 5:
			StringCopy(&cVar0, "FIHJ1_REM", 24);
			func_60(&(Local_195.f_38), 0);
			if (func_215(&(Local_195.f_38), 6f))
			{
				if (func_557(&uLocal_36, &cVar0, func_62(uParam0->f_2), Global_35, 0, 0, 1, 1))
				{
					func_220("FIHJ1_REM", 1);
					func_68(&(Local_195.f_38));
					func_579(&(Local_195.f_5), 15);
				}
			}
			break;
		
		case 15:
			StringCopy(&cVar0, "FIHJ1_WEATHER", 24);
			if (!func_574("FIHJ1_REM"))
			{
				func_60(&(Local_195.f_38), 0);
			}
			if (!func_953(func_952()))
			{
				func_220("FIHJ1_WEATHER", 1);
			}
			if (((!func_573(Global_35, Local_195.f_356, 1, 0) || !func_594()) || func_217("FIHJ1_WEATHER")) || (func_215(&(Local_195.f_38), 10f) && func_557(&uLocal_36, &cVar0, func_62(uParam0->f_2), Global_35, 0, 0, 1, 1)))
			{
				if (func_574("FIHJ1_WEATHER"))
				{
					func_220("FIHJ1_WEATHER", 1);
				}
				func_68(&(Local_195.f_38));
				func_579(&(Local_195.f_5), 10);
			}
			break;
		
		case 10:
			if (func_949())
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_950()) && MISC::IS_STRING_NULL_OR_EMPTY(sLocal_141))
				{
					StringCopy(&cVar3, func_950(), 128);
					sLocal_141 = func_954(cVar3);
					func_951();
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_141))
			{
				func_218(sLocal_141);
				sLocal_141 = "";
			}
			if ((!func_573(Global_35, Local_195.f_354, 1, 0) || !func_573(Global_35, Local_195.f_355, 1, 0)) || !func_594())
			{
				if (!func_573(Global_35, Local_195.f_355, 1, 0))
				{
					if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
					{
						MAP::REMOVE_BLIP(&(Local_195.f_90));
					}
					Local_195.f_90 = MAP::_0xA6EF0C54A3443E70(408396114, Local_195.f_355);
					func_599(0);
					func_600(0);
					func_601(0);
					func_602(1);
				}
				else
				{
					func_599(1);
					func_600(0);
					func_601(1);
					func_602(0);
				}
				if (!func_573(Global_35, Local_195.f_355, 1, 0))
				{
					func_218("FISH01_O_FFSL");
				}
				else
				{
					func_218("FISH01_O_GFISH");
				}
				func_221(&(Local_195.f_94), 16);
				func_228(&(Local_195.f_56));
				func_579(&(Local_195.f_5), 11);
			}
			break;
		
		case 11:
			if (!func_573(Global_35, Local_195.f_354, 1, 0))
			{
				func_60(&(Local_195.f_56), 0);
				if (func_215(&(Local_195.f_56), 1f))
				{
					func_219("FISH01_O_FFSL", 7500, 0, 1, 0, 0, -1, -1, 0);
					func_579(&(Local_195.f_5), 20);
				}
			}
			else if (!func_573(Global_35, Local_195.f_355, 1, 0))
			{
				func_60(&(Local_195.f_56), 0);
				if (func_215(&(Local_195.f_56), 3f))
				{
					func_219("FISH01_O_FFSL", 10000, 0, 1, 0, 0, -1, -1, 0);
					func_579(&(Local_195.f_5), 12);
				}
			}
			else if (!func_594())
			{
				func_602(0);
				func_599(1);
				func_600(0);
				func_601(1);
				func_579(&(Local_195.f_5), 13);
			}
			else
			{
				if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
				{
					_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
					MAP::REMOVE_BLIP(&(Local_195.f_90));
				}
				func_579(&(Local_195.f_5), 2);
			}
			break;
		
		case 12:
			if (!func_573(Global_35, Local_195.f_354, 1, 0))
			{
				func_219("FISH01_O_FFSL", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_579(&(Local_195.f_5), 20);
			}
			else if (func_573(Global_35, Local_195.f_355, 1, 0))
			{
				if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
				{
					_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
					MAP::REMOVE_BLIP(&(Local_195.f_90));
				}
				func_579(&(Local_195.f_5), 2);
			}
			break;
		
		case 13:
			if (func_594())
			{
				if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
				{
					_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
					MAP::REMOVE_BLIP(&(Local_195.f_90));
				}
				iLocal_193 = 0;
				func_579(&(Local_195.f_5), 2);
			}
			else
			{
				if (!func_567(1))
				{
					func_60(&(Local_195.f_38), 0);
				}
				StringCopy(&cVar0, "FIHJ1_EQUIP_FP", 24);
				if (((func_215(&(Local_195.f_38), 8f) && !func_567(1)) && (!func_217("FIHJ1_EQUIP_FP_1") || !func_217("FIHJ1_EQUIP_FP_2"))) && func_529(&uLocal_36, cVar0, 1, iLocal_193, 0, 0))
				{
					func_68(&(Local_195.f_38));
					iLocal_193++;
					if (!func_217("FIHJ1_EQUIP_FP_1"))
					{
						func_220("FIHJ1_EQUIP_FP_1", 1);
					}
					else
					{
						func_220("FIHJ1_EQUIP_FP_2", 1);
					}
				}
			}
			if (!func_573(Global_35, Local_195.f_355, 1, 0))
			{
				_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
				func_579(&(Local_195.f_5), 10);
			}
			break;
		
		case 20:
			if (func_573(Global_35, Local_195.f_354, 1, 0))
			{
				func_579(&(Local_195.f_5), 11);
			}
			else if (iLocal_193 < 3)
			{
				if (!func_567(1))
				{
					func_60(&(Local_195.f_38), 0);
				}
				StringCopy(&cVar0, "FIHJ1_ABANDON1", 24);
				if (iLocal_193 == 1)
				{
					StringCopy(&cVar0, "FIHJ1_ABANDON2", 24);
				}
				else if (iLocal_193 == 2)
				{
					StringCopy(&cVar0, "FIHJ1_ABANDON3", 24);
				}
				if (func_627(&(Local_195.f_38), func_944(iLocal_193 == 0, 3.6f, 9.8f)) && !func_567(1))
				{
					if (func_557(&uLocal_36, &cVar0, func_62(uParam0->f_2), Global_35, 0, 0, 1, 1))
					{
						iLocal_193++;
						func_68(&(Local_195.f_38));
					}
				}
			}
			break;
		
		case 51:
			func_579(&(Local_195.f_5), -1);
			break;
	}
}

void func_586(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_338))
	{
		return;
	}
	if (!func_75(uParam0->f_94, 1))
	{
		if (func_955(&(uParam0->f_96), uParam0->f_338, 1, 1))
		{
			func_221(&(uParam0->f_94), 1);
		}
	}
}

bool func_587(int iParam0)
{
	return &Global_1900073->f_26[iParam0 /*30*/] == 6;
}

void func_588()
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	func_570(1);
	func_612(0, 1);
	func_63(1, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 1339352408, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1779240557, false);
}

void func_589()
{
	func_570(0);
	func_612(0, 0);
}

void func_590(int iParam0)
{
	if (func_684(iParam0))
	{
		func_596(&(Global_1900073->f_1), iParam0);
	}
}

void func_591()
{
	var uVar0;
	var uVar1;
	
	if (&Global_40.f_11184[0] != 1309979101)
	{
		if (!func_289())
		{
			Global_40.f_11184[0] = 1309979101;
			uVar0 = func_957(func_956(1309979101), 109029619);
			uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Fishing");
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar1, "LureName", uVar0);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar1, "LureCount", "");
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar1, "LureTexture", -973584697);
		}
	}
}

void func_592()
{
	struct<2> Var0;
	
	Var0 = 1;
	Var0.f_1 = -1415022764;
	HUD::_0x8A59D44189AF2BC5(&Var0, 1646793768);
}

void func_593(int iParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, -1415022764, 0, 0))
	{
		return;
	}
	Global_1900073->f_18 = iParam0;
}

bool func_594()
{
	return Global_1935630->f_44 == -1415022764;
}

bool func_595(int iParam0)
{
	return func_958(func_616(iParam0));
}

void func_596(var uParam0, int iParam1)
{
	func_959(uParam0, iParam1);
}

void func_597()
{
	float fVar0;
	vector3 vVar1[24];
	
	Local_195.f_86 = func_617(1);
	if (func_561(1))
	{
		if (func_75(Local_195.f_94, 131072))
		{
			func_60(&(Local_195.f_59), 0);
		}
		if (func_564(1))
		{
			fVar0 = func_960(1);
			if (!func_75(Local_195.f_95, 1))
			{
				if (!func_75(Local_195.f_95, 4) && !func_567(1))
				{
					if (Local_195.f_86 == 0)
					{
						StringCopy(&cVar1, "FIHJ1_JVRHOOK01", 24);
						func_228(&(Local_195.f_65));
					}
					else if (Local_195.f_86 >= 1)
					{
						StringCopy(&cVar1, "FIHJ1_JVRHOOK02", 24);
						func_228(&(Local_195.f_65));
					}
					func_221(&(Local_195.f_95), 4);
				}
				if (!func_565(0) && !func_567(1))
				{
					func_529(&uLocal_36, cVar1, 0, -1, 0, 0);
				}
				func_221(&(Local_195.f_95), 1);
				func_596(&(Local_195.f_95), 8);
				func_596(&(Local_195.f_95), 2);
				func_596(&(Local_195.f_95), 16);
				func_596(&(Local_195.f_95), 64);
				func_596(&(Local_195.f_95), 32);
				func_596(&(Local_195.f_95), 128);
				func_596(&(Local_195.f_95), 32);
				func_596(&(Local_195.f_95), 128);
			}
			if (fVar0 > 0f)
			{
				if (!func_567(0))
				{
					if (!func_75(Local_195.f_95, 2))
					{
						if (func_229(&(Local_195.f_65)) > 0.5f)
						{
							if (!func_75(Local_195.f_95, 8))
							{
								if (Local_195.f_86 == 0)
								{
									StringCopy(&cVar1, "FIHJ1_JVRREEL01", 24);
									func_228(&(Local_195.f_65));
								}
								else if (Local_195.f_86 >= 1)
								{
									StringCopy(&cVar1, "FIHJ1_JVRREEL02", 24);
									func_228(&(Local_195.f_65));
								}
								func_221(&(Local_195.f_95), 8);
							}
							if (!func_565(0))
							{
								func_529(&uLocal_36, cVar1, 0, -1, 0, 0);
							}
							func_68(&(Local_195.f_65));
							func_60(&(Local_195.f_59), 0);
							func_221(&(Local_195.f_95), 2);
						}
					}
				}
			}
		}
		if (func_961(1))
		{
			if (!func_75(Local_195.f_95, 64))
			{
				if (!func_75(Local_195.f_95, 16) && !func_567(1))
				{
					StringCopy(&cVar1, "FIHJ1CMPES", 24);
					func_228(&(Local_195.f_65));
					func_221(&(Local_195.f_95), 16);
				}
				if (!func_565(0) && !func_567(1))
				{
					func_529(&uLocal_36, cVar1, 0, -1, 0, 0);
				}
				func_221(&(Local_195.f_95), 64);
				func_596(&(Local_195.f_95), 4);
				func_596(&(Local_195.f_95), 1);
			}
		}
		if (func_565(1))
		{
			if (!func_75(Local_195.f_95, 128))
			{
				if (!func_75(Local_195.f_95, 32) && !func_567(1))
				{
					StringCopy(&cVar1, "FIHJ1_JVRCTCH02", 24);
					func_228(&(Local_195.f_65));
					func_221(&(Local_195.f_95), 32);
				}
				if (!func_565(0) && !func_567(1))
				{
					func_529(&uLocal_36, cVar1, 0, -1, 0, 0);
				}
				func_221(&(Local_195.f_95), 128);
				func_596(&(Local_195.f_95), 4);
				func_596(&(Local_195.f_95), 1);
			}
			func_611(1, 1);
		}
		if (func_75(Local_195.f_95, 128) && (func_962(1) || func_963(1)))
		{
			if (!func_217("FIHJ1_JVRCAST02"))
			{
				StringCopy(&cVar1, "FIHJ1_JVRCAST02", 24);
				func_228(&(Local_195.f_65));
				if (!func_565(0) && !func_567(1))
				{
					func_529(&uLocal_36, cVar1, 0, -1, 0, 0);
					func_220("FIHJ1_JVRCAST02", 1);
				}
				func_221(&(Local_195.f_95), 128);
			}
		}
	}
}

void func_598(int iParam0)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

void func_599(int iParam0)
{
	if (Global_1900073->f_19 != iParam0)
	{
		Global_1900073->f_19 = iParam0;
	}
}

void func_600(int iParam0)
{
	if (Global_1900073->f_20 != iParam0)
	{
		Global_1900073->f_20 = iParam0;
	}
}

void func_601(int iParam0)
{
	if (Global_1900073->f_21 != iParam0)
	{
		Global_1900073->f_21 = iParam0;
	}
}

void func_602(int iParam0)
{
	if (Global_1900073->f_11 != iParam0)
	{
		Global_1900073->f_11 = iParam0;
	}
}

void func_603(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	iVar0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iParam1, iParam2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar1, false, iParam2, false))
		{
			sParam3 = func_964(iVar1);
		}
	}
	func_965(uParam0, iVar0, sParam3, iParam4, iParam5, 1);
}

char* func_604(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CAJAV_FSH1_MCS1";
		
		default:
			break;
	}
	return "FAIL";
}

void func_605(var uParam0, char* sParam1)
{
	struct<8> Var0;
	char cVar8[32];
	
	if (func_966(uParam0) == 2 && (func_967(uParam0->f_212, 16384) || func_968(uParam0, 268435456)))
	{
		Var0 = { func_969(uParam0) };
		func_970(uParam0, &Var0);
	}
	func_971(uParam0, sParam1);
	if (func_968(uParam0, 131072))
	{
		func_972(uParam0, 0);
	}
	if (func_973())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		func_974();
	}
	if (func_519())
	{
		func_225(1);
	}
	func_975(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_928(uParam0, cVar8);
	func_976(1, 0);
	func_977(uParam0);
	if (func_978(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_148);
	}
	func_979(uParam0);
	func_980(uParam0, 1);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_156);
	Global_43799 = uParam0->f_156;
	StringCopy(&Global_43801, sParam1, 24);
}

void func_606()
{
	func_290(512);
	func_590(1024);
}

int func_607(char* sParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4)
{
	int iVar0;
	
	func_981(uParam4, &sParam0);
	if (func_968(uParam4, 2) && !func_968(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -842734359, false);
	}
	if (func_966(uParam4) != 1)
	{
		func_982(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_966(uParam4))
	{
		case 1:
			if (ANIMSCENE::_0x25557E324489393C(uParam4->f_156) && ANIMSCENE::_0x477122B8D05E7968(uParam4->f_156, 1, 0))
			{
				if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam4->f_156, 0))
				{
					func_605(uParam4, &sParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156))
				{
					func_983(uParam4, 4);
					return 0;
				}
				else if (func_978(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_149);
				}
				func_983(uParam4, 3);
			}
			else if (!ANIMSCENE::_0x25557E324489393C(uParam4->f_156))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_158)) && func_968(uParam4, 134217728))
				{
				}
				else
				{
					func_984(uParam4);
				}
				func_228(&(uParam4->f_1));
				func_983(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_985(uParam4);
				if (!func_67(&(uParam4->f_1)))
				{
					func_60(&(uParam4->f_1), 0);
				}
				else if (func_229(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_0x25557E324489393C(uParam4->f_156))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
					}
					func_983(uParam4, 4);
				}
			}
			break;
		
		case 2:
			if (!ANIMSCENE::_0x25557E324489393C(uParam4->f_156) || !ANIMSCENE::_0x477122B8D05E7968(uParam4->f_156, 1, 0))
			{
				if (func_955(uParam4, &sParam0, 1, 1))
				{
					if (!ANIMSCENE::_0x477122B8D05E7968(uParam4->f_156, 1, 0))
					{
						func_983(uParam4, 4);
					}
					else if (!func_503(func_986(uParam4)) && !func_548(Global_35, func_986(uParam4), 100f, 1, 1))
					{
						func_987(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_986(uParam4), 0f, 1, 1, 1, 0);
					}
				}
				else if (func_229(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_0x25557E324489393C(uParam4->f_156))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
					}
					func_983(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::_0xA565FAC215CBC77D();
					func_976(1, 0);
					func_605(uParam4, &sParam0);
					func_983(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_229(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_0x25557E324489393C(uParam4->f_156))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
				}
				func_983(uParam4, 4);
			}
			break;
		
		case 3:
			func_988(uParam4);
			if (func_978(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_149);
			}
			if ((ANIMSCENE::_0x25557E324489393C(uParam4->f_156) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam4->f_156, 0)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156) || func_968(uParam4, 512)))
			{
				if (!func_968(uParam4, 1024) && func_989(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_968(uParam4, 512))
				{
					func_228(&(uParam4->f_1));
					func_990(uParam4, 512);
					func_983(uParam4, 4);
				}
				else if (func_968(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_982(uParam4);
			}
			if (func_968(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_991(uParam4) - func_992(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_0x25557E324489393C(uParam4->f_156))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (func_993(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_992(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (func_994(uParam4))
			{
				if (!ANIMSCENE::_0x25557E324489393C(uParam4->f_156))
				{
				}
				func_995(uParam4);
				func_996(uParam4);
				return 1;
			}
			else
			{
				if (func_968(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_156) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_156);
						}
						func_228(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						func_990(uParam4, 512);
						func_997(uParam4, 67108864, 1);
						func_983(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_968(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156)) && CAM::IS_SCREEN_FADED_OUT()) && func_992(uParam4) <= 5000) && func_992(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!func_968(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_998(&(uParam4->f_213), 0);
					func_990(uParam4, 536870912);
				}
				if (func_992(uParam4) >= 5000 && func_992(uParam4) <= (func_991(uParam4) - 5000))
				{
					func_999();
				}
			}
			break;
		
		case 6:
			if (func_994(uParam4))
			{
				func_995(uParam4);
				func_996(uParam4);
				return 1;
			}
			break;
		
		case 4:
			if (func_968(uParam4, 524288))
			{
				ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_156))
					{
						func_990(uParam4, 1073741824);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_0x25557E324489393C(uParam4->f_156))
				{
					if (!ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_156))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, 1);
						if (_NAMESPACE71::_0xC17F69E1418CD11F(9) != 0)
						{
							_NAMESPACE71::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_156))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_978(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_150);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::_0x25557E324489393C(uParam4->f_156) && ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_156))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, 0);
						}
						func_983(uParam4, 3);
					}
					else if (func_229(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_0x25557E324489393C(uParam4->f_156) && ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_156))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, 0);
						}
						func_983(uParam4, 3);
					}
				}
				if (func_966(uParam4) == 3)
				{
					if (func_968(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		
		case 5:
			func_983(uParam4, 4);
			break;
	}
	return 0;
}

void func_608(int iParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(iParam0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

void func_609(int iParam0)
{
	if (Global_1900073->f_14 != iParam0)
	{
		Global_1900073->f_14 = iParam0;
	}
}

void func_610(int iParam0)
{
	func_1000(iParam0, -1527293029, 0);
	func_1000(iParam0, 1059426360, 0);
	func_1000(iParam0, 488496242, 0);
	func_1000(iParam0, 1380607804, 0);
	func_1000(iParam0, -1753819339, 0);
	func_1000(iParam0, 149706141, 0);
	func_1000(iParam0, 2100131425, 0);
	func_1000(iParam0, -978159653, 0);
	func_1000(iParam0, -2041382104, 0);
	func_1000(iParam0, 1334018438, 0);
	func_1000(iParam0, 1815744868, 0);
	func_1000(iParam0, 1055480217, 0);
	func_1000(iParam0, -1916584960, 0);
}

void func_611(int iParam0, int iParam1)
{
	if (&Global_1900073->f_189[iParam0] != iParam1)
	{
		Global_1900073->f_189[iParam0] = iParam1;
	}
}

void func_612(int iParam0, int iParam1)
{
	if (&Global_1900073->f_184[iParam0] != iParam1)
	{
		Global_1900073->f_184[iParam0] = iParam1;
	}
}

void func_613()
{
	func_290(1024);
	func_590(512);
}

void func_614()
{
	float fVar0;
	vector3 vVar1[24];
	int iVar4;
	
	if (func_561(0))
	{
		if (func_564(0))
		{
			if (func_75(Local_195.f_94, 2097152))
			{
				_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
				func_218("FISH01_O_FFSL");
				func_596(&(Local_195.f_94), 2097152);
			}
			fVar0 = func_960(0);
			if (!func_75(Local_195.f_94, 32) && !func_567(1))
			{
				if (Local_195.f_3 == 8 && Local_195.f_84 == 0)
				{
					StringCopy(&cVar1, "FIHJ1HOOK", 24);
					func_228(&(Local_195.f_62));
				}
				else if (Local_195.f_3 == 8 && Local_195.f_84 >= 1)
				{
					StringCopy(&cVar1, "FIHJ1HOOK2", 24);
					func_228(&(Local_195.f_62));
					func_220("FIHJ1_TRYAGN", 1);
				}
				iVar4 = func_134(Local_195.f_84, 0, 3);
				func_529(&uLocal_36, cVar1, 1, iVar4, 0, 0);
				func_596(&(Local_195.f_94), 128);
				func_596(&(Local_195.f_94), 256);
				func_596(&(Local_195.f_94), 64);
				func_221(&(Local_195.f_94), 32);
			}
			else if (fVar0 > 0f)
			{
				if (!func_567(1))
				{
					if (!func_75(Local_195.f_94, 64))
					{
						if (func_229(&(Local_195.f_62)) > 6f)
						{
							if (Local_195.f_3 == 8 && Local_195.f_84 == 0)
							{
								StringCopy(&cVar1, "FIHJ1REEL", 24);
							}
							else if (Local_195.f_3 == 8 && Local_195.f_84 >= 1)
							{
								StringCopy(&cVar1, "FIHJ1REEL2", 24);
							}
							iVar4 = func_134(Local_195.f_84, 0, 3);
							func_529(&uLocal_36, cVar1, 1, iVar4, 0, 0);
							func_68(&(Local_195.f_62));
							func_221(&(Local_195.f_94), 64);
						}
					}
				}
			}
		}
		if (func_961(0))
		{
			if (!func_75(Local_195.f_94, 128))
			{
				if (Local_195.f_3 == 8 && Local_195.f_84 == 0)
				{
					StringCopy(&cVar1, "FIHJ1ESC", 24);
				}
				else if (Local_195.f_3 == 8 && Local_195.f_84 >= 1)
				{
					StringCopy(&cVar1, "FIHJ1ESC2", 24);
				}
				func_596(&(Local_195.f_94), 32);
				func_596(&(Local_195.f_94), 64);
				if (!func_567(1))
				{
					func_529(&uLocal_36, cVar1, 0, -1, 0, 0);
				}
				func_221(&(Local_195.f_94), 128);
			}
		}
		if (func_565(0))
		{
			if (!func_75(Local_195.f_94, 256) && !func_567(1))
			{
				if (Local_195.f_3 == 8 && Local_195.f_84 == 0)
				{
					StringCopy(&cVar1, "FIHJ1CHT", 24);
				}
				else if (Local_195.f_3 == 8 && Local_195.f_84 >= 1)
				{
					StringCopy(&cVar1, "FIHJ1_CHT3", 24);
				}
				func_596(&(Local_195.f_94), 32);
				func_596(&(Local_195.f_94), 64);
				func_529(&uLocal_36, cVar1, 0, -1, 0, 0);
				Local_195.f_85 = func_617(0);
				func_221(&(Local_195.f_94), 256);
			}
			else if (func_75(Local_195.f_94, 256))
			{
				if (func_618(0))
				{
					if (!func_567(1) && !func_217("FIHJ1_ARTCATCH"))
					{
						StringCopy(&cVar1, "FIHJ1_ARTCATCH", 24);
						func_529(&uLocal_36, cVar1, 0, -1, 0, 0);
						func_220("FIHJ1_ARTCATCH", 1);
					}
				}
				else if (func_1001(0))
				{
					if (!func_567(1) && !func_217("FIHJ1_ARTRELEAS"))
					{
						StringCopy(&cVar1, "FIHJ1_ARTRELEAS", 24);
						func_529(&uLocal_36, cVar1, 0, -1, 0, 0);
						func_220("FIHJ1_ARTRELEAS", 1);
					}
				}
			}
		}
	}
}

void func_615(var uParam0)
{
	vector3 vVar0[24];
	char cVar3[128];
	bool bVar19;
	int iVar20;
	int iVar21;
	
	if (!func_75(Local_195.f_94, 262144))
	{
		bVar19 = (func_595(0) && func_616(0) == -1753819339);
		func_63(0, (func_567(1) || bVar19 == 0));
		func_63(1, func_567(1));
	}
	switch (Local_195.f_5)
	{
		case 0:
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			iLocal_193 = 0;
			if (func_561(0) && func_587(0))
			{
				if (HUD::_0xD0976CC34002DB57("MGFSH"))
				{
					func_514("MGFSH_REEL_OBJ", 8000, 0, 0, 0, 1);
					func_218("MGFSH_REEL_OBJ");
					func_560();
					func_579(&(Local_195.f_5), 1);
				}
			}
			else if (func_561(0) && !func_587(0))
			{
				func_560();
				func_579(&(Local_195.f_5), 1);
			}
			break;
		
		case 1:
			if (func_561(0) && !func_587(0))
			{
				func_602(0);
				func_599(1);
				func_601(0);
				func_600(1);
				func_68(&(Local_195.f_38));
				func_579(&(Local_195.f_5), 2);
			}
			else if (func_561(0) && func_587(0))
			{
				func_60(&(Local_195.f_56), 0);
				if ((func_215(&(Local_195.f_56), 6f) && HUD::_0xD0976CC34002DB57("MGFSH")) && !func_217("MGFSH_REEL_OBJ"))
				{
					func_514("MGFSH_REEL_OBJ", -1, 0, 0, 0, 1);
					func_220("MGFSH_REEL_OBJ", 1);
					func_218("MGFSH_REEL_OBJ");
				}
			}
			break;
		
		case 2:
			if (func_595(0) && func_616(0) == -1753819339)
			{
				if (func_948("FISH01_O_QBAIT", 0, 0, -1, -1, 0))
				{
					_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
				}
				func_218("FISH01_O_FFSL");
				func_228(&(Local_195.f_50));
				func_579(&(Local_195.f_5), 3);
			}
			else
			{
				if (!func_567(1))
				{
					func_60(&(Local_195.f_38), 0);
				}
				if (((func_215(&(Local_195.f_38), 7f) && !func_567(1)) && !func_217("FIHJ1_EQUIP_CRK")) && func_557(&uLocal_36, "FIHJ1_EQUIP_CRK", func_62(uParam0->f_2), Global_35, 0, 0, 1, 1))
				{
					func_68(&(Local_195.f_38));
					func_220("FIHJ1_EQUIP_CRK", 1);
				}
			}
			if (!func_573(Global_35, Local_195.f_356, 1, 0) || !func_594())
			{
				func_579(&(Local_195.f_5), 10);
			}
			break;
		
		case 3:
			func_60(&(Local_195.f_56), 0);
			if (func_215(&(Local_195.f_56), 6f) || func_573(Global_35, Local_195.f_355, 1, 0))
			{
				if (!func_573(Global_35, Local_195.f_356, 1, 0))
				{
					func_219("FISH01_O_FFSL", 7500, 0, 1, 0, 0, -1, -1, 0);
				}
				else
				{
					func_218("FISH01_O_GFISH");
				}
				func_579(&(Local_195.f_5), 4);
			}
			break;
		
		case 4:
			if (func_587(0))
			{
				func_68(&(Local_195.f_38));
				if (!func_217("FIHJ1_REM2"))
				{
					func_579(&(Local_195.f_5), 8);
				}
				else if (!func_217("FIHJ1_LEGENDSM"))
				{
					func_579(&(Local_195.f_5), 9);
				}
				else
				{
					func_579(&(Local_195.f_5), 10);
				}
			}
			if (func_948("FISH01_O_FFSL", 0, 0, -1, -1, 0) && func_573(Global_35, Local_195.f_356, 1, 0))
			{
				func_218("FISH01_O_GFISH");
			}
			if (!func_573(Global_35, Local_195.f_356, 1, 0) || !func_594())
			{
				func_579(&(Local_195.f_5), 10);
			}
			break;
		
		case 5:
			if (func_587(0) || (func_561(0) && !func_587(0)))
			{
				if (Local_195.f_84 > 1)
				{
					func_220("FIHJ1_TRYAGN", 1);
				}
				if (!func_567(1) && (!func_564(0) && !func_565(0)))
				{
					func_60(&(Local_195.f_56), 0);
					if (func_215(&(Local_195.f_56), 1.3f))
					{
						if (!func_217("FIHJ1_TRYAGN"))
						{
							StringCopy(&cVar0, "FIHJ1_TRYAGN", 24);
							iVar20 = func_118();
							iVar21 = func_472(iVar20);
							if (iVar21 > 16)
							{
								StringCopy(&cVar0, "FIHJ1_MIDEVNING", 24);
							}
							else if (iVar21 < 12)
							{
								StringCopy(&cVar0, "FIHJ1_MIDMORN", 24);
							}
							func_529(&uLocal_36, cVar0, 0, -1, 0, 0);
							func_220("FIHJ1_TRYAGN", 1);
						}
						func_218("FISH01_O_QBAIT");
						func_579(&(Local_195.f_5), 6);
					}
				}
			}
			break;
		
		case 6:
			if ((!func_574("FIHJ1_TRYAGN") && !func_574("FIHJ1_MIDMORN")) && !func_574("FIHJ1_MIDEVNING"))
			{
				func_1002("FISH01_O_QBAIT", 5000, 0, 0, 1);
				func_218("FISH01_O_QBAIT");
				func_570(0);
				func_579(&(Local_195.f_5), 2);
			}
			break;
		
		case 8:
			if (!func_567(1))
			{
				if (!func_67(&(Local_195.f_38)))
				{
					func_228(&(Local_195.f_50));
				}
				func_60(&(Local_195.f_38), 0);
			}
			if (((!func_573(Global_35, Local_195.f_356, 1, 0) || !func_594()) || func_217("FIHJ1_REM2")) || ((func_215(&(Local_195.f_38), 15.75f) && func_1003()) && func_557(&uLocal_36, "FIHJ1_REM2", func_62(uParam0->f_2), Global_35, 0, 0, 1, 1)))
			{
				if (func_574("FIHJ1_REM2"))
				{
					func_220("FIHJ1_REM2", 1);
				}
				func_68(&(Local_195.f_38));
				if (!func_573(Global_35, Local_195.f_356, 1, 0) || !func_594())
				{
					func_579(&(Local_195.f_5), 10);
				}
				else
				{
					func_579(&(Local_195.f_5), 9);
				}
			}
			break;
		
		case 9:
			if (!func_567(1))
			{
				if (!func_67(&(Local_195.f_38)))
				{
					func_228(&(Local_195.f_50));
				}
				func_60(&(Local_195.f_38), 0);
			}
			if (((!func_573(Global_35, Local_195.f_356, 1, 0) || !func_594()) || func_217("FIHJ1_LEGENDSM")) || ((func_215(&(Local_195.f_38), 20f) && func_1003()) && func_557(&uLocal_36, "FIHJ1_LEGENDSM", func_62(uParam0->f_2), Global_35, 0, 0, 1, 1)))
			{
				if (func_574("FIHJ1_LEGENDSM"))
				{
					func_220("FIHJ1_LEGENDSM", 1);
				}
				func_68(&(Local_195.f_38));
				func_579(&(Local_195.f_5), 10);
			}
			break;
		
		case 10:
			if (func_949())
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_950()) && MISC::IS_STRING_NULL_OR_EMPTY(sLocal_141))
				{
					StringCopy(&cVar3, func_950(), 128);
					sLocal_141 = func_954(cVar3);
					func_951();
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_141))
			{
				func_218(sLocal_141);
				sLocal_141 = "";
			}
			if ((!func_573(Global_35, Local_195.f_354, 1, 0) || !func_573(Global_35, Local_195.f_355, 1, 0)) || !func_594())
			{
				if (!func_573(Global_35, Local_195.f_355, 1, 0))
				{
					if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
					{
						MAP::REMOVE_BLIP(&(Local_195.f_90));
					}
					Local_195.f_90 = MAP::_0xA6EF0C54A3443E70(408396114, Local_195.f_355);
					func_599(0);
					func_600(0);
					func_601(0);
					func_602(1);
				}
				else
				{
					func_599(1);
					func_600(0);
					func_601(1);
					func_602(0);
				}
				func_218("FISH01_O_FFSL");
				func_221(&(Local_195.f_94), 16);
				func_228(&(Local_195.f_56));
				func_579(&(Local_195.f_5), 11);
			}
			if (func_616(0) == -1753819339 && func_958(func_616(0)))
			{
				if (func_75(Local_195.f_94, 4))
				{
					func_596(&(Local_195.f_94), 4);
				}
				func_600(0);
			}
			break;
		
		case 11:
			if (!func_573(Global_35, Local_195.f_354, 1, 0))
			{
				func_60(&(Local_195.f_56), 0);
				if (func_215(&(Local_195.f_56), 1f))
				{
					func_219("FISH01_O_FFSL", 7500, 0, 1, 0, 0, -1, -1, 0);
					func_579(&(Local_195.f_5), 20);
				}
			}
			else if (!func_573(Global_35, Local_195.f_355, 1, 0))
			{
				func_60(&(Local_195.f_56), 0);
				if (func_215(&(Local_195.f_56), 3f))
				{
					func_219("FISH01_O_FFSL", 10000, 0, 1, 0, 0, -1, -1, 0);
					func_579(&(Local_195.f_5), 12);
				}
			}
			else if (!func_594())
			{
				func_602(0);
				func_599(1);
				func_601(0);
				func_600(1);
				func_579(&(Local_195.f_5), 13);
			}
			else
			{
				if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
				{
					_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
					MAP::REMOVE_BLIP(&(Local_195.f_90));
				}
				func_579(&(Local_195.f_5), 1);
			}
			break;
		
		case 12:
			if (!func_573(Global_35, Local_195.f_354, 1, 0))
			{
				func_219("FISH01_O_FFSL", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_579(&(Local_195.f_5), 20);
			}
			else if (func_573(Global_35, Local_195.f_355, 1, 0))
			{
				if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
				{
					_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
					MAP::REMOVE_BLIP(&(Local_195.f_90));
				}
				func_579(&(Local_195.f_5), 1);
			}
			break;
		
		case 13:
			if (func_594())
			{
				if (MAP::DOES_BLIP_EXIST(Local_195.f_90))
				{
					_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
					MAP::REMOVE_BLIP(&(Local_195.f_90));
				}
				func_579(&(Local_195.f_5), 1);
			}
			if (!func_573(Global_35, Local_195.f_355, 1, 0))
			{
				_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
				func_579(&(Local_195.f_5), 10);
			}
			break;
		
		case 20:
			if (func_573(Global_35, Local_195.f_354, 1, 0))
			{
				func_579(&(Local_195.f_5), 11);
			}
			else if (iLocal_193 < 3)
			{
				if (!func_567(1))
				{
					func_60(&(Local_195.f_38), 0);
				}
				StringCopy(&cVar0, "FIHJ1_ABANDON1", 24);
				if (iLocal_193 == 1)
				{
					StringCopy(&cVar0, "FIHJ1_ABANDON2", 24);
				}
				else if (iLocal_193 == 2)
				{
					StringCopy(&cVar0, "FIHJ1_ABANDON3", 24);
				}
				if (func_627(&(Local_195.f_38), func_944(iLocal_193 == 0, 3.6f, 9.8f)) && !func_567(1))
				{
					if (func_557(&uLocal_36, &cVar0, func_62(uParam0->f_2), Global_35, 0, 0, 1, 1))
					{
						iLocal_193++;
						func_68(&(Local_195.f_38));
					}
				}
			}
			break;
		
		case 51:
			func_579(&(Local_195.f_5), -1);
			break;
	}
}

int func_616(int iParam0)
{
	return &(Global_40.f_11184[iParam0]);
}

int func_617(int iParam0)
{
	return &(Global_1900073->f_215[iParam0]);
}

bool func_618(int iParam0)
{
	return func_75((Global_1900073->f_26[iParam0 /*30*/])->f_6, 32);
}

bool func_619(int iParam0)
{
	return func_933(iParam0, 65536);
}

void func_620(var uParam0)
{
	switch (Local_195.f_5)
	{
		case 0:
			func_218("FISH01_O_ASK");
			func_579(&(Local_195.f_5), 1);
			break;
		
		case 1:
			func_60(&(Local_195.f_56), 0);
			if ((func_75(Local_195.f_95, 512) || func_75(Local_195.f_95, 1024)) || func_215(&(Local_195.f_56), 15f))
			{
				if (!(func_75(Local_195.f_95, 512) || func_75(Local_195.f_95, 1024)))
				{
					func_219("FISH01_O_ASK", 7500, 0, 1, 0, 0, -1, -1, 0);
				}
				func_579(&(Local_195.f_5), 51);
			}
			break;
		
		case 51:
			func_579(&(Local_195.f_5), -1);
			break;
	}
}

void func_621(float fParam0)
{
	fLocal_31 = fParam0;
}

void func_622(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_1004(iParam0, 2);
	if (iParam1 == 1 && iParam0 != 0)
	{
		func_1004(iParam0, 512);
	}
	else
	{
		func_688(iParam0, 512);
	}
	if (iParam2 == 1 && iParam0 != 0)
	{
		func_1004(iParam0, 1024);
	}
	else
	{
		func_688(iParam0, 1024);
	}
	if (iParam3 == 1 && iParam0 != 0)
	{
		func_1004(iParam0, 4096);
	}
	else
	{
		func_688(iParam0, 4096);
	}
}

void func_623(bool bParam0)
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	
	if (!func_75(Local_195.f_95, 4096))
	{
		vVar0 = { func_532(3, 7) };
		fVar3 = func_558(3, 7);
		vVar4 = { func_532(3, 6) };
		TASK::OPEN_SEQUENCE_TASK(&iLocal_1564);
		if (!func_539(Local_195.f_37))
		{
			TASK::TASK_MOUNT_ANIMAL(0, iLocal_28, -1, -1, (1f + 0.25f), 1, 0, 0);
		}
		if (bParam0)
		{
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_136, 0, 25708, -1, 0, 0, -1);
		}
		TASK::_TASK_MOVE_IN_TRAFFIC_4(0, 1.501f, vVar4, 0);
		TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, (1f + 0.5f), -1, 5f, false, fVar3);
		TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar0, 3f, 0, 0, 0, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_1564);
		TASK::TASK_PERFORM_SEQUENCE(Local_195.f_37, iLocal_1564);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_1564);
		PED::SET_PED_KEEP_TASK(Local_195.f_37, true);
		func_221(&(Local_195.f_95), 4096);
	}
}

void func_624(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

struct<4> func_625(int iParam0, int iParam1)
{
	return func_1005(iParam0, iParam1);
}

void func_626(int iParam0, struct<4> Param1, int iParam5, int iParam6)
{
	func_637(iParam0, Param1, Param1.f_3, iParam5, iParam6);
}

int func_627(var uParam0, float fParam1)
{
	if (func_215(uParam0, fParam1))
	{
		func_68(uParam0);
		return 1;
	}
	return 0;
}

int func_628()
{
	if (iLocal_1647 > 1 && iLocal_1647 < 5)
	{
		CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
	}
	switch (iLocal_1647)
	{
		case 0:
			func_1006("script@tripskip@Fishing1_Shot1_srl");
			func_1007();
			func_1008(&iLocal_1647, 1);
			break;
		
		case 1:
			if (!CAM::_0xDD0B7C5AE58F721D(sLocal_1625))
			{
			}
			if (CAM::_0xDD0B7C5AE58F721D(sLocal_1625))
			{
				POPULATION::_0xC6DCC2A3A8825C85(1);
				func_1006("script@tripskip@Fishing1_Shot2_srl");
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
				HUD::_0x4CC5F2FC1332577F(724769646);
				func_626(iLocal_28, func_625(2, 11), 2, 1073741824);
				func_626(iLocal_27, func_625(2, 10), 2, 1073741824);
				PED::_0x2208438012482A1A(iLocal_28, false, false);
				func_1009(Global_35, iLocal_27, 0, -1, 1);
				func_1009(Local_195.f_37, iLocal_28, 0, -1, 1);
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_195.f_37, sLocal_135, 0, 25708, -1, 0, 0, -1);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Global_35, sLocal_135, 0, 25708, -1, 0, 0, -1);
				func_1010(func_532(2, 16), 100f, 0, 0, 0, 0, 0);
				func_1011(func_532(2, 16), 100f, 0);
				STREAMING::_0x513F8AA5BF2F17CF(func_532(2, 13), 60f, 1);
				CAM::DESTROY_CAM(iLocal_1563, false);
				AUDIO::_0x5E3CCF03995388B5(1960118912, func_532(2, 11));
				CAM::_0xBC016635D6A73B31(sLocal_1625, "SHOT1", 5);
				func_228(&uLocal_1626);
				func_1008(&iLocal_1647, 2);
			}
			break;
		
		case 2:
			func_1012(2f, 2f);
			if (AUDIO::_0xFFE9C53DEEA3DB0B((CAM::_0xEA113BF9B0C0C5D7(sLocal_1625, "SHOT1", 5) - func_1013(&uLocal_1626)), 1253167713, func_532(2, 13), STREAMING::IS_SRL_LOADED(), 2147483647))
			{
				func_626(iLocal_28, func_625(2, 13), 2, 1073741824);
				func_626(iLocal_27, func_625(2, 12), 2, 1073741824);
				func_1009(Global_35, iLocal_27, 0, -1, 1);
				func_1009(Local_195.f_37, iLocal_28, 0, -1, 1);
				func_1014();
				func_623(1);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Global_35, sLocal_136, 0, 25708, -1, 0, 0, -1);
				CAM::_0xA54D643D0773EB65(sLocal_1625, "SHOT1", 5);
				CAM::_0xBC016635D6A73B31(sLocal_1625, "SHOT2", 5);
				func_228(&uLocal_1626);
				func_1008(&iLocal_1647, 3);
			}
			break;
		
		case 3:
			func_1012(1.501f, 1.501f);
			if (AUDIO::_0xFFE9C53DEEA3DB0B((CAM::_0xEA113BF9B0C0C5D7(sLocal_1625, "SHOT2", 5) - func_1013(&uLocal_1626)), -1, 787.8481f, -1117.704f, 49.42791f, true, 2147483647))
			{
				CAM::_0xB8B207C34285E978(&Local_1631);
				func_228(&uLocal_1626);
				func_1008(&iLocal_1647, 4);
			}
			break;
		
		case 4:
			func_1012(1.501f, 1.501f);
			if (func_215(&uLocal_1626, 1f))
			{
				POPULATION::_0xBC90BDF4E5228EA1();
				STREAMING::END_SRL();
				AUDIO::_0x43037ABFE214A851();
				HUD::_0x8BC7C1F929D07BF3(724769646);
				CAM::_0x2412216FCC7B4E3E(sLocal_1625);
				CAM::_0x798BE43C9393632B(&Local_1631);
				CAM::_0x0A5A4F1979ABB40E(&Local_1631);
				func_228(&uLocal_1626);
				func_1008(&iLocal_1647, 5);
			}
			break;
		
		case 5:
			func_1012(1.501f, 1.501f);
			if (func_215(&uLocal_1626, 0.5f))
			{
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1.501f, 2000, ENTITY::GET_ENTITY_HEADING(Global_35), false, false);
				func_623(0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				HUD::_0x8BC7C1F929D07BF3(724769646);
				func_1008(&iLocal_1647, 6);
			}
			break;
		
		case 6:
			return 1;
	}
	return 0;
}

void func_629(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_630()
{
	CAM::_0x88544C0E3291DCAE(1);
	func_1015();
}

void func_631()
{
	func_630();
}

void func_632(var uParam0, int iParam1, bool bParam2)
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

void func_633(int iParam0, bool bParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = func_62(iParam0);
	if (!func_58(iParam0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::_0xF1C03A5352243A30(iVar0);
	if (bParam1)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, 0, 1);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
	}
}

void func_634(int iParam0, int iParam1)
{
	if (!func_260(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_11 = iParam1;
}

int func_635(int iParam0, vector3 vParam1, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_260(iParam0))
	{
		return 0;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(89040947))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(89040947);
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 1;
		
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(89040947))
			{
				return 0;
			}
			if (Global_1359489->f_9 != -1)
			{
				return 0;
			}
			Global_1359489->f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_1016(iParam0, iParam9, bParam7, 1);
				}
				else if ((((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 == (Global_40.f_4942[iParam0 /*60*/])->f_59) && (func_98(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2) || func_13(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2)))
				{
					iParam4 = ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_1;
				}
				else
				{
					iParam4 = func_1016(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (((*Global_1360165)[iParam0 /*1157*/])->f_63 != iParam4 && func_1017(((*Global_1360165)[iParam0 /*1157*/])->f_63))
				{
					if (!func_1018(iParam0, 0))
					{
						func_59(iParam0, 25, 0);
					}
				}
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_4 = { func_1019(iParam0, iParam4, vParam1, bParam5, bParam6, bParam8, (Global_40.f_4942[iParam0 /*60*/])->f_59, bParam11) };
			if (!bParam6)
			{
				func_277(iParam0, 44, 1);
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 2;
		
		case 2:
			if (!func_29(func_62(iParam0), 0))
			{
				return 0;
			}
			if (bParam5 && iParam10)
			{
				if (!func_29(func_72(iParam0), 0))
				{
					return 0;
				}
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 3;
		
		case 3:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_636(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_58(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1020(iParam0, bParam3);
	}
	else
	{
		func_1021(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_1022(iParam0, bParam3);
	}
	else
	{
		func_1023(iParam0, bParam3);
	}
}

void func_637(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_0xD5FE956C70FF370B(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == func_1024(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_1025(iParam0))
	{
		if (func_1026(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_75(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_637(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_637(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_75(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 1);
		}
	}
	if (func_75(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_75(iParam5, 32), 1);
		}
		else
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_75(iParam5, 32), 1);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_75(iParam5, 129))
	{
		if (func_75(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_75(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_75(iParam5, 32), 1);
	}
	if (bVar4)
	{
		if (!func_75(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, 0);
		}
		if (func_1025(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_75(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_75(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

int func_638(int iParam0, int iParam1)
{
	var uVar0;
	
	if (!func_58(iParam0))
	{
		return 0;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return 1;
	}
	uVar0 = func_1027(iParam0, iParam1);
	return uVar0;
}

void func_639(int iParam0, int iParam1, bool bParam2)
{
	if (!func_58(iParam0))
	{
		return;
	}
	if (!func_638(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_4942[iParam0 /*60*/])->f_3 = iParam1;
	if (bParam2)
	{
		func_59(iParam0, 25, 1);
	}
}

void func_640(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_1028(iParam2))
		{
			iVar0 = func_1029(iParam2, -1);
			if (func_1030(iParam1, iVar0))
			{
				if (func_1031(iParam1, iVar0))
				{
					if (func_1032(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_1033(iParam1);
					}
				}
				else
				{
					PED::_0x1902C4CFCC5BE57C(iParam1, iVar0);
				}
			}
		}
		func_1034(iParam0, iParam1, 0);
		PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, 0);
		PED::_0xE3144B932DFDFF65(iParam1, 0f, -1, 1, 1);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 9);
		if (bParam3)
		{
			func_59(iParam0, 66, 0);
		}
	}
}

void func_641(int iParam0)
{
	func_1035(iParam0);
	func_1036(iParam0, 0);
}

void func_642(int iParam0, int iParam1)
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

int func_643(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_0x0556E9D2ECF39D01(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			WEAPON::_0xE9BD19F8121ADE3E(iParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_644(int iParam0, int iParam1)
{
	if (!func_260(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if ((Global_40.f_4942[iParam0 /*60*/])->f_3 == -1341683964)
			{
				func_1037(iParam1, 1240907314, 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_1037(iParam1, -2088446466, 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_645(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!func_58(iParam0))
	{
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
	if (PED::IS_PED_GROUP_MEMBER(iVar0, iVar1, 0))
	{
		return;
	}
	COMPANION::_0xCBD9EC60495C728C(func_50());
	PED::SET_PED_CONFIG_FLAG(iVar0, 279, true);
	PED::SET_PED_AS_GROUP_MEMBER(iVar0, iVar1);
	if (bParam1)
	{
		func_697(iParam0, 1, Global_35);
	}
}

bool func_646()
{
	return func_296(1) < 3;
}

void func_647(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_58(iParam0))
	{
		iVar0 = 0;
		iVar1 = 0;
		switch (iParam0)
		{
			case 2:
				func_1038(&iVar0, 1);
				break;
			
			case 14:
				func_1038(&iVar0, 8);
				func_1038(&iVar1, 4);
				func_1038(&iVar1, 5);
				func_1038(&iVar1, 0);
				break;
			
			case 13:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
				func_1038(&iVar0, 8);
				func_1038(&iVar0, 5);
				func_1038(&iVar1, 4);
				func_1038(&iVar1, 0);
				break;
		}
		COMPANION::_0xDEB369F6AD168C58(func_62(iParam0), iVar0);
		COMPANION::_0x1740E3DEE0AE4D27(func_62(iParam0), iVar1);
	}
}

int func_648(var uParam0)
{
	bool bVar0;
	
	bVar0 = true;
	if (iLocal_14)
	{
		iLocal_14 = 0;
		HUD::_0xF66090013DE648D5(sLocal_34);
		iLocal_35 = 0;
	}
	if (HUD::_0xD0976CC34002DB57(sLocal_34) == 0)
	{
		bVar0 = false;
	}
	if (func_29(func_62(uParam0->f_2), 0))
	{
		PED::_0xAE6004120C18DF97(func_62(uParam0->f_2), 0, 0);
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	func_60(&uLocal_23, 0);
	func_292(0);
	func_527(&uLocal_36, Global_35, "ARTHUR", 0);
	func_527(&uLocal_36, func_62(uParam0->f_2), func_528(uParam0->f_2), 0);
	return 1;
}

int func_649(char* sParam0)
{
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam0))
	{
		return 0;
	}
	return 1;
}

int func_650(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17)
{
	int iVar0;
	
	if (!func_260(iParam1))
	{
		return 0;
	}
	iVar0 = func_72(iParam1);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || !func_29(iVar0, 0)) || (bParam3 && !func_71(iParam1)))
	{
		if (bParam2)
		{
			if (func_674(iParam1, 1) != 0)
			{
				iVar0 = func_1039(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, fParam12, bParam7, bParam15, bParam16, bParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && func_29(iVar0, 0))
	{
		*uParam0 = 2;
		((*Global_1360165)[iParam1 /*1157*/])->f_70.f_2 = 0;
		func_1040(iParam1, iVar0);
		func_1041(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

Vector3 func_651()
{
	switch (func_192())
	{
		case 1:
			return -112.3384f, -14.3773f, 94.8194f;
		
		case 2:
			return 662.6482f, -1230.246f, 43.4672f;
	}
	return 0f, 0f, 0f;
}

int func_652(var uParam0, var uParam1)
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
	
	uParam1->f_10 = func_670(uParam1->f_10);
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
		if (func_503(uParam1->f_6))
		{
		}
	}
	bVar0 = func_348();
	if (*uParam1)
	{
		if (bVar0 && !func_151(((*Global_1835011)[4 /*74*/])->f_1, 1))
		{
			if (func_1042(5))
			{
				func_1043(5);
				func_1044(5);
				func_1045(0);
				func_1046(0);
			}
		}
	}
	if (func_1047(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_151(((*Global_1835011)[37 /*74*/])->f_1, 1)) && !func_151(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_151(((*Global_1835011)[43 /*74*/])->f_1, 1)) && !func_151(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_1048(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_1049(iVar1))
	{
		bVar3 = true;
		if (func_1050(iVar1))
		{
			bVar4 = true;
		}
		if (func_1051(iVar1))
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
				func_1052(uParam1->f_10);
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
			if (!func_1042(0) && func_1042(1))
			{
				func_1053(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1054())
			{
				func_1055();
			}
			func_1045(0);
			func_1046(0);
			func_1056(uParam1->f_6);
		}
	}
	if (!func_1049(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1057(uParam1->f_10) == 0 || func_1058(uParam1->f_10) == 0) || func_1059(uParam1->f_10) == 0)
			{
				func_1060(uParam1->f_10);
			}
			func_1061(uParam1->f_10);
			func_1062(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_1048(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_1049(iVar1))
	{
		bVar3 = true;
		if (func_1050(iVar1))
		{
			bVar4 = true;
		}
		if (func_1051(iVar1))
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
			if (!func_503(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (func_1063(uParam1->f_10))
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
			if (!PED::_0xA0BC8FAED8CFEB3C(iVar2))
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
			Var8 = { func_1064(uParam1->f_10) };
			Var10 = { func_1065() };
			func_1066(iVar2, &Var8, &Var10, 0);
			PLAYER::_0xD2CB0FB0FDCB473D(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_271(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_1067(uParam1->f_10);
		if (uParam1->f_2 && !func_503(uParam1->f_6))
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
	func_269(uParam1->f_10);
	if (func_271(uParam1->f_10))
	{
		iVar16 = func_270(uParam1->f_10);
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

int func_653(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	var uVar0;
	int iVar1;
	
	if (!func_260(iParam0))
	{
		return 0;
	}
	iVar1 = func_650(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, bParam16);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::_0xA0BC8FAED8CFEB3C(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

void func_654(int iParam0)
{
	switch (func_120())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 || iParam0);
			break;
	}
}

void func_655()
{
	if (func_216(iLocal_27, func_532(3, 4), 1) > 15f)
	{
		func_626(iLocal_27, func_625(3, 4), 2, 1073741824);
	}
}

void func_656()
{
	func_1068(uLocal_1565[2], 1189.868f, -589.7604f, 67.85253f, 0f, 0f, -34.12126f, 34.67387f, 31.40111f, 14.95374f, "Fishing Area", 0, 0);
	func_1068(uLocal_1565[1], 1183.616f, -580.1835f, 67.68938f, 0f, 0f, -14.52683f, 5.676475f, 7.107867f, 3.392037f, "Player Rock/Fish Area", 0, 0);
	func_1068(uLocal_1565[0], 1184.388f, -583.2227f, 72.31178f, 0f, 0f, -58.59084f, 47.73118f, 40.17714f, 27.84984f, "Player Fish Dismount Area", 0, 0);
}

int func_657(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_43));
	}
	switch (uParam0->f_7)
	{
		case 0:
			return func_1069(uParam0);
		
		case 1:
			return func_1070(uParam0);
		
		case 2:
			return func_1071(uParam0);
		
		case 3:
			return func_1072(uParam0);
		
		case 4:
			return func_1073(uParam0);
		
		case 5:
			return func_1074(uParam0);
		
		case 6:
			return func_1075(uParam0);
		
		default:
			break;
	}
	return 1;
}

void func_658(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (!func_99(0, 0, 1) || iParam0)
	{
		iVar0 = func_721();
		iVar1 = func_724(iVar0);
		fVar2 = (1f - (MISC::ABSF(BUILTIN::TO_FLOAT(iVar1)) / BUILTIN::TO_FLOAT(8)));
		fVar3 = func_944(iVar0 < 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		fVar4 = func_944(iVar0 > 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnWithHonor");
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 1, fVar3);
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 2, fVar2);
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 3, fVar4);
	}
	else
	{
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
	}
}

bool func_659()
{
	return &Global_1935436 == 1;
}

bool func_660()
{
	return &Global_1935436 == 2;
}

void func_661(float fParam0)
{
	func_1076(10, fParam0);
}

void func_662()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436->f_12 = 0f;
}

void func_663(int iParam0, bool bParam1)
{
	if (func_120() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_20(32768))
	{
		return;
	}
	if (!func_20(32768))
	{
		func_1077(1, bParam1);
	}
	MISC::_0x279B0696DA4657EB(iParam0);
	MISC::_COPY_MEMORY((*Global_2621440)[iParam0 /*12065*/], &Global_40, 12065);
	MISC::_COPY_MEMORY((*Global_2645571)[iParam0 /*5398*/], &Global_12105, 5398);
	MISC::_COPY_MEMORY((*Global_2656368)[iParam0 /*3206*/], &Global_17503, 3206);
	MISC::_COPY_MEMORY((*Global_2662781)[iParam0 /*2408*/], &Global_20709, 2408);
	MISC::_COPY_MEMORY((*Global_2667598)[iParam0 /*1769*/], &Global_23117, 1769);
	MISC::_COPY_MEMORY((*Global_2671137)[iParam0 /*1909*/], &Global_24886, 1909);
	MISC::_COPY_MEMORY((*Global_2674956)[iParam0 /*777*/], &Global_26795, 777);
	MISC::_COPY_MEMORY((*Global_2676511)[iParam0 /*4501*/], &Global_27572, 4501);
	MISC::_COPY_MEMORY((*Global_2685514)[iParam0 /*4234*/], &Global_32073, 4234);
	if (func_20(32768))
	{
		((*Global_2621440)[iParam0 /*12065*/])->f_9.f_14 = func_118();
	}
}

int func_664(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_665(int iParam0, int iParam1)
{
	var uVar0;
	
	return func_1078(&uVar0, iParam0, iParam1);
}

void func_666(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_465(iVar3) && WEAPON::_0x705BE297EEBDB95D(iVar3))
			{
				if (bParam0)
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3) < WEAPON::_0xD3750CCC00635FC2(iVar3) * 4)
					{
						WEAPON::_0x106A811C6D3035F3(Global_35, WEAPON::_0x5C2EA6C44F515F34(iVar3), (WEAPON::_0xD3750CCC00635FC2(iVar3) * 4 - WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_35, iVar3))), 752097756);
					}
				}
				iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3);
				if (iVar0 > WEAPON::_0xD3750CCC00635FC2(iVar3))
				{
					iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					WEAPON::SET_AMMO_IN_CLIP(Global_35, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (iParam1 && PLAYER::_0x21091B4BEB6376EE(PLAYER::GET_PLAYER_INDEX()) == 0)
	{
		func_1079(1);
	}
}

void func_667(int iParam0, vector3 vParam1, var uParam4)
{
	((*Global_2621440)[iParam0 /*12065*/])->f_9.f_7 = { vParam1 };
	((*Global_2621440)[iParam0 /*12065*/])->f_9.f_13 = uParam4;
	((*Global_2621440)[iParam0 /*12065*/])->f_9 = 5;
	((*Global_2621440)[iParam0 /*12065*/])->f_9.f_15 = func_200(vParam1, 1);
}

bool func_668(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_669(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

int func_670(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_671(int iParam0, int iParam1)
{
	iParam0 = func_670(iParam0);
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

void func_672()
{
	if (func_1049(0))
	{
		func_1080(0);
	}
	if (func_1049(1))
	{
		func_1080(1);
	}
	if (func_1049(5))
	{
		func_1080(5);
	}
	if (func_1049(6))
	{
		func_1081(6);
	}
}

float func_673(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_926(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_674(int iParam0, bool bParam1)
{
	if (!func_260(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_127 != 0)
	{
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	switch (iParam0)
	{
		case 3:
			return -698095578;
		
		case 7:
			return 230221572;
		
		case 0:
			return 47961446;
		
		case 5:
			return 1268955201;
		
		case 2:
			return 2103924091;
		
		case 1:
			return 1554677062;
		
		case 9:
			return 984702223;
		
		case 6:
			return -1825091419;
		
		case 11:
			return 948152617;
		
		case 8:
			return 795059774;
		
		case 23:
			return -1880884094;
		
		case 20:
			return 849012978;
		
		case 4:
			return 404801781;
		
		case 10:
			return -1094022447;
		
		case 26:
			return -1484815615;
		
		case 12:
		case 14:
			return 0;
		
		default:
			break;
	}
	if (bParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_127 = func_1082(iParam0);
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	return 0;
}

void func_675(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_72(iParam0);
	if (!PED::_0xA911EE21EDF69DAF(iVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		iVar3 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
		}
		else
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(iVar3))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, true);
			}
			ENTITY::_0x0D0DB2B6AF19A987(&iVar3);
		}
		iVar2++;
	}
}

int func_676(int iParam0, int iParam1)
{
	if (!func_260(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126) && iParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = func_1083(iParam0);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

void func_677(int iParam0)
{
	int iVar0;
	
	if (!func_260(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((Global_1357549->f_1675[iVar0 /*5*/])->f_1 == iParam0)
		{
			(Global_1357549->f_1675[iVar0 /*5*/])->f_1 = -1;
			((*Global_1360165)[iParam0 /*1157*/])->f_127 = 0;
		}
		iVar0++;
	}
}

void func_678(int iParam0, int iParam1)
{
	if (!func_260(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_12 = iParam1;
}

bool func_679(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_680(int iParam0)
{
	int iVar0;
	
	if (!func_260(iParam0))
	{
		return;
	}
	if (!MISC::_0x716F17F8A0419F95(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_1084(iParam0);
		if (iVar0 != 0)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = _NAMESPACE48::_0x4F76E3676583D951(iVar0);
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_1);
		}
		else
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = 0;
		}
	}
}

void func_681(int iParam0)
{
	if (func_58(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_62(iParam0)))
		{
			func_484(iParam0, 67108864, 1);
			func_277(iParam0, 19, 1);
		}
	}
}

float func_682(int iParam0)
{
	if (!func_260(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

void func_683(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = func_62(iParam0);
	iVar1 = func_282(iParam0, 0);
	func_1085(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		_NAMESPACE48::_0x7B204F88F6C3D287(iVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	_NAMESPACE48::_0xFCC6DB8DBE709BC8(iVar1);
}

bool func_684(int iParam0)
{
	return func_75(Global_1900073->f_1, iParam0);
}

void func_685(int iParam0)
{
	if (iParam0 == 1)
	{
		func_290(2);
	}
	else
	{
		func_590(2);
	}
}

void func_686(int iParam0)
{
	if (iParam0 == 1)
	{
		func_290(64);
	}
	else
	{
		func_590(64);
	}
}

void func_687(int iParam0)
{
	if (Global_1900073->f_25 != iParam0)
	{
		Global_1900073->f_25 = iParam0;
	}
}

void func_688(int iParam0, int iParam1)
{
	if (func_933(iParam0, iParam1))
	{
		func_596(Global_1900073->f_2[iParam0], iParam1);
	}
}

void func_689(int iParam0)
{
	if (Global_1900073->f_12 != iParam0)
	{
		Global_1900073->f_12 = iParam0;
	}
}

void func_690(int iParam0)
{
	if (Global_1900073->f_15 != iParam0)
	{
		Global_1900073->f_15 = iParam0;
	}
}

void func_691(int iParam0)
{
	if (iParam0 == 1)
	{
		func_290(16);
	}
	else
	{
		func_590(16);
	}
}

void func_692(int iParam0)
{
	if (Global_1900073->f_22 != iParam0)
	{
		Global_1900073->f_22 = iParam0;
	}
}

void func_693(int iParam0)
{
	if (Global_1900073->f_23 != iParam0)
	{
		Global_1900073->f_23 = iParam0;
	}
}

void func_694(int iParam0)
{
	if (Global_1900073->f_24 != iParam0)
	{
		Global_1900073->f_24 = iParam0;
	}
}

void func_695(vector3 vParam0)
{
	Global_1900073->f_212 = { vParam0 };
}

void func_696(int iParam0, int iParam1)
{
	if (!func_1086(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] = (Global_40.f_11029[iParam0 /*5*/] || iParam1);
}

void func_697(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_58(iParam0))
	{
		return;
	}
	if (!func_249(iParam0))
	{
		return;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (bParam1 && ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return;
	}
	iVar0 = func_62(iParam0);
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(iParam2, 155, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
	}
	else
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 152, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 154, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 156, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 25, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 87, bParam1);
	if (bParam1)
	{
		COMPANION::_0xD428C3F92FC3F6F8(iVar0, func_202(iParam0));
		PED::_0x9238A3D970BBB0A9(iVar0, -1972074710);
		PED::_0x9238A3D970BBB0A9(Global_35, -1972074710);
	}
	else
	{
		PED::_0x9A4AC116CC1EEE14(iVar0);
		if (!func_1087())
		{
			PED::_0x9A4AC116CC1EEE14(Global_35);
		}
	}
}

int func_698(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_959(&iVar1, -2147483648);
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

int func_699(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_120() != -1)
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

int func_700(int iParam0)
{
	if (!func_260(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_296(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

void func_701(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_1088((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1088(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_82(&(Global_1898164->f_1[0 /*5*/])))
	{
		func_89(&(Global_1898164->f_1[0 /*5*/]), 3);
	}
}

int func_702(int iParam0)
{
	int iVar0;
	
	iVar0 = func_301(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1089(iVar0);
}

int func_703(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;
	
	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			func_1090(iVar2);
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_704()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

void func_705(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	Global_1327479->f_4 = (Global_1327479->f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750->f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + ((Global_1327479->f_4 - MISC::GET_GAME_TIMER()) / 2));
		}
		else
		{
			Global_1327479->f_5 = (Global_1327479->f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iParam1 * 1000);
	}
}

int func_706(bool bParam0)
{
	if (func_120() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

int func_707(int iParam0)
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

void func_708(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && uParam0));
}

void func_709(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || uParam0);
}

bool func_710(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_719(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_711(var uParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(uParam0);
	if (iParam1 == 1)
	{
		func_712(1);
	}
}

void func_712(bool bParam0)
{
	if (bParam0)
	{
		func_1091(&(Global_40.f_12018.f_42), 1);
	}
	else
	{
		func_1092(&(Global_40.f_12018.f_42), 1);
	}
}

int func_713(int iParam0)
{
	if (!func_82(iParam0))
	{
		return -15;
	}
	return func_1093(iParam0);
}

bool func_714(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_477(iParam1) || !func_477(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_715(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_716(vector3 vParam0, var uParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	var uVar0;
	
	vParam0.f_2 = iParam5;
	uVar0 = *uParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*uParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_717(int iParam0)
{
	switch (iParam0)
	{
		case 1928985868:
			return 7;
		
		case 1784174017:
			return 8;
		
		case 1763160914:
			return 10;
		
		case 2051438686:
			return 11;
		
		case 1155669136:
			return 1;
		
		case 1871598:
			return 9;
		
		case -1379218218:
			return 6;
		
		case 1059981727:
			return 2;
		
		case -1216736853:
			return 4;
		
		case 1191674135:
			return 3;
		
		case -112322057:
			return 12;
		
		case -823778732:
			return 25;
		
		case 1338623152:
			return 16;
		
		case 1401247110:
			return 20;
		
		case 1007627076:
			return 13;
		
		case 864606355:
			return 31;
		
		case 1338525796:
			return 18;
		
		case -2076625074:
			return 26;
		
		case -288774278:
			return 15;
		
		case 1934998953:
			return 14;
		
		case -1148482643:
			return 32;
		
		case 603776282:
			return 22;
		
		case 1339344423:
			return 27;
		
		case 1562395675:
			return 19;
		
		case 1316832864:
			return 28;
		
		case -1619448191:
			return 29;
		
		case -520130198:
			return 24;
		
		case 1418253584:
			return 30;
		
		case -348149883:
			return 33;
		
		case 814591385:
			return 34;
		
		case 981348373:
			return 17;
		
		case -1100417366:
			return 35;
		
		case 1438856241:
			return 23;
		
		case -1989143022:
			return 21;
		
		default:
			break;
	}
	return 0;
}

int func_718(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_INT(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_719(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_1094(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

void func_720(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

int func_721()
{
	int iVar0;
	
	iVar0 = func_329();
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

int func_722(int iParam0)
{
	float fVar0;
	float fVar1;
	
	if (func_120() != -1)
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
	fVar1 = func_944(MISC::ABSF(fVar1) < 1f, func_944(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_723()
{
	if (func_120() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_724(int iParam0)
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

int func_725()
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

void func_726(int iParam0, bool bParam1, int iParam2)
{
	func_1095((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1096(iParam0);
}

void func_727(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_1097(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_728(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	bVar3 = false;
	if (func_1098(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1099(iVar5, &iVar2, &iVar0))
			{
				if (!func_350(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1100(iVar2);
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
							if (func_369(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_721() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_721() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1101();
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

char* func_729(int iParam0)
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

bool func_730(int iParam0)
{
	return func_369(iParam0) == -427144552;
}

int func_731(int iParam0)
{
	var uVar0;
	
	if (func_120() != -1)
	{
		return 0;
	}
	if (func_371(iParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_736(iParam0, &uVar0, 1, 0, 0);
	}
	return func_171(iParam0, 1, 0);
}

void func_732(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	int iVar0;
	
	if (func_369(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_376(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (iParam2 || !func_758(iVar0))
	{
		if (func_120() == -1)
		{
			func_377(iVar0);
		}
		if (iParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 0) && func_354(iParam0, 0, 0) == 0))
		{
			if (!*uParam3 && !iParam4 == 1248274121)
			{
				func_431(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}
}

void func_733(int iParam0, var uParam1)
{
	int iVar0;
	
	if (func_370(iParam0, 58855631))
	{
		func_887(iParam0, -915411861, &iVar0, 1);
		*uParam1 = (*uParam1 * iVar0);
	}
}

int func_734(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_350(iParam0, 0))
	{
		return 0;
	}
	if (!func_378(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_706(bParam3), iParam0);
}

int func_735(int iParam0, bool bParam1)
{
	if (func_382(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_706(bParam1), iParam0, 0);
}

int func_736(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;
	
	func_1102(&iParam0);
	if (!func_350(iParam0, 0))
	{
		return 0;
	}
	if (!func_378(0))
	{
		bParam3 = true;
	}
	if (func_730(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
		{
			Var0 = { func_870(0) };
			Var4.f_9 = -1591664384;
			if (!func_760(iParam0, &Var0, 1728382685, 0))
			{
				return 0;
			}
			else if (func_761(iParam0, &Var4, 1728382685))
			{
				return 0;
			}
			if (func_871(iParam0, 1))
			{
				if (!func_760(iParam0, &Var0, -649335959, 0))
				{
					return 0;
				}
				else if (func_761(iParam0, &Var4, -649335959))
				{
					return 0;
				}
			}
		}
		else if (!func_1103(iParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_734(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1104(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_706(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_737(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (!func_350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_369(iParam0);
	if (iVar0 == -427144552 && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == 307971639 && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_370(iParam0, 1399091007))
	{
		func_803(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_738(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;
	
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1105(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1106(&Var0, func_870(0));
	}
	if (!func_1107(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_813(iVar14);
	return uVar15;
}

int func_739()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_740(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_741(int iParam0)
{
	int iVar0;
	float fVar1;
	
	if (func_120() != -1)
	{
		return;
	}
	iVar0 = func_1108(iParam0);
	fVar1 = func_1109(iParam0);
	if ((Global_1347477->f_117 || !func_372(31)) || !func_1110(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1111(iVar0) >= 7)
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
	func_1112(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_481(MISC::_CREATE_VAR_STRING(6, func_1113(iParam0), fVar1), "itemtype_textures", func_1114(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_742(int iParam0)
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

int func_743(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	
	if (!func_903(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_744(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_365() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1115(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1116(), 12);
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
			else if (func_785() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1117(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_785(), 30);
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
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1118(), 13);
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
			else if (func_786() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1119(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_786(), 10);
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
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_743(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_745(int iParam0, int iParam1, int iParam2)
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

int func_746(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_747(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, 0, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, 1);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_748(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
			iVar2 = func_1120(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_171(iVar2, 1, 0) || func_1122(func_1121(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_752(func_1120(iVar0))), func_752(func_1120(iVar0)), bVar1, 1, 0);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_785() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1123(iVar0)), func_1123(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1117() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1123(iVar0)), func_1123(iVar0), bVar1, 1, 0);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1123(iVar0)), func_1123(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_796(iParam3, func_1124(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_792(iVar2) - iParam7) >= func_743(iParam3, func_1125(iVar0));
				}
				else
				{
					bVar1 = func_792(iVar2) >= func_743(iParam3, func_1125(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_792(iVar2) + iParam7) >= func_743(iParam3, func_1125(iVar0));
			}
			else
			{
				bVar1 = func_792(iVar2) >= func_743(iParam3, func_1125(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1126(iVar2)), func_1126(iVar2), bVar1, 1, 0);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1127(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1128(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_1128(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, 1, 0);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_786() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1129(iVar0)), func_1129(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1119() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1129(iVar0)), func_1129(iVar0), bVar1, 1, 0);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1129(iVar0)), func_1129(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_796(iParam3, func_1124(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_792(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1130(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1130(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_956(iVar2)), func_956(iVar2), bVar1, 1, 0);
		}
		iVar0++;
	}
	return 1;
}

int func_749(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1118() >= 13)
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

int func_750(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_82(func_83(0)) && ((func_1131(0) == 1 || func_1131(0) == 8) || func_1131(0) == 6))
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

var func_751(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_752(int iParam0)
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

int func_753(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_754(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_755(int iParam0)
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

void func_756(int iParam0)
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
			func_1132(1);
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
			func_1133(1);
			break;
		
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1133(2);
			break;
		
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1133(3);
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
			func_1134(1);
			break;
		
		case 34:
			func_1135(1);
			break;
		
		case 35:
			func_1136(1);
			break;
		
		case 36:
			break;
		
		case 37:
			func_1137(0);
			break;
		
		case 38:
			func_1138(0);
			break;
		
		case 39:
			func_1139(0);
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
			if ((!&Global_1879534 && func_348()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_488("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 2);
			func_149(586, 0);
			break;
		
		case 3:
			if ((!&Global_1879534 && func_348()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_488("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 3);
			func_149(587, 0);
			break;
		
		case 4:
			if ((!&Global_1879534 && func_348()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_488("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 4);
			func_149(588, 0);
			break;
		
		case 5:
			if ((!&Global_1879534 && func_348()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_488("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 5);
			func_149(589, 0);
			break;
		
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_120() == -1)
			{
				if (!func_826(99217379) || func_1140(99217379) == 2110595215)
				{
					if (func_723())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_171(iVar0, 1, 0))
					{
						func_424(iVar0, 1, 752097756);
					}
					func_403(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		
		case 48:
			if (func_120() == -1)
			{
				if (!func_171(1013902307, 1, 0))
				{
					func_424(1013902307, 1, 752097756);
				}
			}
			break;
		
		case 50:
			if (func_120() == -1)
			{
				if (!func_171(1013902307, 1, 0))
				{
					func_424(1013902307, 1, 752097756);
				}
				if (!func_171(142640135, 1, 0))
				{
					func_424(142640135, 1, 752097756);
				}
			}
			break;
		
		case 49:
			if (func_120() == -1)
			{
				if (!func_171(786809402, 1, 0))
				{
					func_424(786809402, 1, 752097756);
				}
			}
			break;
		
		case 51:
			if (func_120() == -1)
			{
				if (!func_171(786809402, 1, 0))
				{
					func_424(786809402, 1, 752097756);
				}
				if (!func_171(-518019409, 1, 0))
				{
					func_424(-518019409, 1, 752097756);
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
			func_1141();
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

int func_757(int iParam0)
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

int func_758(int iParam0)
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

int func_759(int iParam0, int iParam1)
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
			return 155413195;
			return -1162387149;
			return 1728382685;
			return -649335959;
			return -1876502240;
			return -2107032155;
			return 619103418;
			return 1355448197;
			return 1681762005;
			return 1026887814;
			return 354352628;
			return 1519366642;
			return -82757515;
			return 386306655;
			return 1243962119;
			return 756214903;
			return -718417579;
			return -1445516411;
			return -672392892;
			return 1465341584;
			return -427758369;
			return -735647142;
			return 1535838048;
			return -602272282;
			return 2051264661;
			return 487172188;
			return 282270687;
			return 1607708943;
			return 1686264939;
			return 314786149;
			return 1402841185;
			return 1099170772;
			return 2125676786;
			return -363896735;
			return -468790222;
			return -1779133048;
			return 1732537631;
			return 1755095401;
			return 835771095;
			return 1963317232;
			return 259627919;
			return 1299075397;
			return -1509094230;
			return 61132362;
			return 1549741908;
			return 288484254;
			return -1877032947;
			return -1395676456;
			return 1136146715;
			return 468034421;
			return 1079459546;
			return -140369351;
			return 1822341990;
			return 1219701681;
			return 1601295268;
			return -1692460667;
			return 1471419228;
			return 907446160;
			return -1126482585;
			return 1911050315;
			return -1343525599;
			return 1261891225;
			return 763162704;
			return 1335861197;
			return 526744654;
			return -1177461517;
			return -241638635;
			return 1024262875;
			return 853355463;
			return -337288221;
			return 361381308;
			return -1264898804;
			return -585289073;
			return 1423542233;
			return -948489286;
			return 2063859257;
			return -1652627327;
			return -1959697839;
			return -1532267859;
			return -1410062763;
			return -901428716;
			return -1628873469;
			return 144855571;
			return -617589883;
			return -1306457086;
			return 1713542477;
			return -305542365;
			return 1985390213;
			return -2145069367;
			return -1674390752;
			return -2117214398;
			return 1880805647;
			return -62390436;
			return 1815288415;
			return 196214097;
			return -201958220;
			return 1400281261;
			return 1601515402;
			return -940704970;
			return -548371721;
			return -1022384613;
			return -357406394;
			return 1077068189;
			return -782241404;
			return 1669853467;
			return 1592019450;
			return 635273153;
			return -1559225678;
			return -266425508;
			return 1117400455;
			return 454332195;
			return -1328061889;
			return 561650932;
			return 256105670;
			return 1976779618;
			return -269095126;
			return 2145617267;
			return 1150213537;
			return 1598825281;
			return -712527121;
			return 1308553072;
			return 852866398;
			return -1794417972;
			return 293062146;
			return 95360094;
			return 807631773;
			return 1603958275;
			return 860052020;
			return -1885979781;
			return 746147970;
			return 666663006;
			return -2096186453;
			return 859409444;
			return -671427187;
			return 100192478;
			return 307812616;
			return 1670843243;
			return 899615863;
			return -298901850;
			return 1379186917;
			return -817206030;
			return -1150323212;
			return -247466821;
			return 427124242;
			return 855418120;
			return -777015093;
			return -722462870;
			return -937454324;
			return -339438116;
			return 2135639035;
			return 1254273765;
			return -792172668;
			return 1905987493;
			return 495693044;
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1360128126;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

bool func_760(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1104(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_761(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	
	if (func_1142(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_762(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;
	
	if (!func_350(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_706(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_763(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_1143(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_874(*uParam1, &Var0, bParam6, 0))
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
	if (!func_378(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_706(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_764(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_1144(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_765(int iParam0)
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
	if (WEAPON::_0xC4DEC3CA8C365A5D(iParam0))
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
	iVar2 = func_118();
	func_158(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_766(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_1145(iParam0))
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
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_0x5C2EA6C44F515F34(iParam0));
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

bool func_767(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

int func_768(int iParam0)
{
	int iVar0;
	
	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(iVar0))
		{
			if (!func_372(50))
			{
				if (!func_372(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
		{
			if (!func_372(51))
			{
				if (!func_372(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

int func_769(int iParam0, int iParam1, var uParam2)
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
	
	if (!func_350(iParam1, 0))
	{
		return 0;
	}
	if (func_369(iParam1) != -1037537535)
	{
		return 0;
	}
	bVar1 = func_120() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (func_374(iParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_449(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_370(iParam1, 866047851))
	{
		iVar5 = func_450(iVar4, 1);
		if (func_1146(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256;
			return 0;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_0x5FF9A878C3D115B8(iVar8, iVar2, bVar1) == 2056714954 && PED::_0xFB4891BD7578CDC1(iParam0, -1455751347))
			{
				*uParam2 = 111371848;
				return 0;
			}
			iVar5 = 10;
			iVar3 = func_374(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return 0;
			}
			break;
		
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_370(iParam1, -1638171711))
			{
				*uParam2 = 187275271;
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
				*uParam2 = -849690042;
				return 0;
			}
			break;
		
		case -1505978566:
			if (func_1147(1868067663, &uVar0))
			{
				*uParam2 = 939463734;
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
				iVar10 = func_1148(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1148(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return 0;
				}
				Jump @726; //curOff = 583
				iVar3 = func_374(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_370(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
				{
					*uParam2 = -357399012;
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

void func_770()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_771()
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

int func_772()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_171(func_1149(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_773(int iParam0)
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

int func_774(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case -62615415:
			if (iParam1 == 425319238)
			{
				iVar0 = 363594903;
				iVar1 = -1217729597;
			}
			else if (iParam1 == 363594903)
			{
				iVar0 = 425319238;
				iVar1 = -1217729597;
			}
			else
			{
				iVar0 = 425319238;
				iVar1 = 363594903;
			}
			break;
		
		case -832719552:
			if (iParam1 == -1540119664)
			{
				iVar0 = 2100194981;
				iVar1 = 446659922;
			}
			else if (iParam1 == 2100194981)
			{
				iVar0 = -1540119664;
				iVar1 = 446659922;
			}
			else
			{
				iVar0 = -1540119664;
				iVar1 = 2100194981;
			}
			break;
		
		case -184823984:
			if (iParam1 == -390982951)
			{
				iVar0 = -1018798851;
				iVar1 = -757567246;
			}
			else if (iParam1 == -1018798851)
			{
				iVar0 = -390982951;
				iVar1 = -757567246;
			}
			else
			{
				iVar0 = -390982951;
				iVar1 = -1018798851;
			}
			break;
		
		case -1941112926:
			if (iParam1 == -2054602073)
			{
				iVar0 = -378441099;
				iVar1 = -585121677;
			}
			else if (iParam1 == -378441099)
			{
				iVar0 = -2054602073;
				iVar1 = -585121677;
			}
			else
			{
				iVar0 = -2054602073;
				iVar1 = -378441099;
			}
			break;
	}
	if (func_171(iVar0, 1, 0) && func_171(iVar1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_775(int iParam0)
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

int func_776(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_1150(iParam0);
	if (iVar0 != -15)
	{
		func_158(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_478(iVar0, 1);
	}
	return 0;
}

void func_777(int iParam0, char* sParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_481(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_778(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_891())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_481(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1151(iVar0);
			func_1152(iVar0, 0, 0);
		}
		func_481(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_387(func_124(1644987397), iVar1);
	}
}

void func_779(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_780(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_781(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_782(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_783(int iParam0)
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
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_792(iVar9);
	iVar2 = func_792(iVar10);
	iVar3 = func_792(iVar11);
	iVar5 = func_793(iVar9);
	iVar6 = func_793(iVar10);
	iVar7 = func_793(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_792(iVar12);
		iVar8 = func_793(iVar12);
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

void func_784(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_785()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1153(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_786()
{
	return COLLECTION::_0x5461C821D00FE15A(2103522376, 0);
}

int func_787(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
				iVar0 = 444160793;
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239;
			}
			break;
		
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432;
				iVar1 = -843795569;
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854;
				iVar1 = -843795569;
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854;
				iVar1 = 1761263432;
			}
			break;
		
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1464585113;
			}
			break;
		
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = 102446365;
			}
			break;
		
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 924882045;
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 59384454;
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_1130(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1130(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1130(iVar0))
		{
			*iParam2++;
		}
		if (func_1130(iVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1130(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1130(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1130(iVar0))
		{
			*iParam2++;
		}
		if (func_1130(iVar1))
		{
			*iParam2++;
		}
		if (func_1130(iVar0) && func_1130(iVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1130(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1130(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1130(iVar0))
		{
			*iParam2++;
		}
		if (func_1130(iVar1))
		{
			*iParam2++;
		}
		if (func_1130(iVar2))
		{
			*iParam2++;
		}
		if ((func_1130(iVar0) && func_1130(iVar1)) && func_1130(iVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1130(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1130(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1130(iVar0))
		{
			*iParam2++;
		}
		if (func_1130(iVar1))
		{
			*iParam2++;
		}
		if (func_1130(iVar2))
		{
			*iParam2++;
		}
		if (func_1130(iVar3))
		{
			*iParam2++;
		}
		if (((func_1130(iVar0) && func_1130(iVar1)) && func_1130(iVar2)) && func_1130(iVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_788(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1154(1497516462);
			func_1155(2016141805);
			func_1155(1010885152);
			func_1155(-502324015);
			break;
		
		case 2016141805:
			func_1155(1497516462);
			func_1154(2016141805);
			func_1155(1010885152);
			func_1155(-502324015);
			break;
		
		case 1010885152:
			func_1155(1497516462);
			func_1155(2016141805);
			func_1154(1010885152);
			func_1155(-502324015);
			break;
		
		case -502324015:
			func_1155(1497516462);
			func_1155(2016141805);
			func_1155(1010885152);
			func_1154(-502324015);
			break;
		
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1155(-538889627);
			func_1155(-538880323);
			func_1155(-1056767524);
			func_1154(iParam0);
			break;
		
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1156();
			func_1154(iParam0);
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
			func_1157();
			func_1154(iParam0);
			break;
		
		case 2019386373:
			func_1155(-664252410);
			func_1155(2109952320);
			func_1154(2019386373);
			break;
		
		case -664252410:
			func_1155(2019386373);
			func_1155(2109952320);
			func_1154(-664252410);
			break;
		
		case 2109952320:
			func_1155(2019386373);
			func_1155(-664252410);
			func_1154(2109952320);
			break;
		
		case -1674179981:
			func_1155(-1835851517);
			func_1155(-1838352012);
			func_1154(-1674179981);
			break;
		
		case -1835851517:
			func_1155(-1674179981);
			func_1155(-1838352012);
			func_1154(-1835851517);
			break;
		
		case -1838352012:
			func_1155(-1674179981);
			func_1155(-1835851517);
			func_1154(-1838352012);
			break;
		
		case -1717960576:
			func_1155(210001842);
			func_1154(-1717960576);
			break;
		
		case 210001842:
			func_1155(-1717960576);
			func_1154(210001842);
			break;
		
		case -150493654:
			func_1155(-1271608261);
			func_1155(1846061697);
			func_1155(-1145519186);
			func_1154(-150493654);
			break;
		
		case -1271608261:
			func_1155(-150493654);
			func_1155(1846061697);
			func_1155(-1145519186);
			func_1154(-1271608261);
			break;
		
		case 1846061697:
			func_1155(-150493654);
			func_1155(-1271608261);
			func_1155(-1145519186);
			func_1154(1846061697);
			break;
		
		case -1145519186:
			func_1155(-150493654);
			func_1155(-1271608261);
			func_1155(1846061697);
			func_1154(-1145519186);
			break;
		
		case 1766284049:
			func_1155(280705402);
			func_1155(1926308480);
			func_1154(1766284049);
			break;
		
		case 280705402:
			func_1155(1766284049);
			func_1155(1926308480);
			func_1154(280705402);
			break;
		
		case 1926308480:
			func_1155(1766284049);
			func_1155(280705402);
			func_1154(1926308480);
			break;
		
		case 1609506757:
			if (bParam1)
			{
				func_1155(439465264);
				func_1154(1609506757);
			}
			else
			{
				func_1155(1609506757);
				func_1155(439465264);
			}
			break;
		
		case 439465264:
			if (func_204(1609506757))
			{
				if (bParam1)
				{
					func_1154(439465264);
				}
				else
				{
					func_1155(439465264);
				}
			}
			break;
		
		case 1822001510:
			func_1155(-1612662716);
			func_1154(1822001510);
			break;
		
		case -1612662716:
			func_1155(1822001510);
			func_1154(-1612662716);
			break;
		
		case 1306158345:
			func_1155(1952610440);
			func_1155(-223469678);
			func_1155(-404698347);
			func_1155(1517904467);
			func_1154(1306158345);
			break;
		
		case 1952610440:
			func_1155(1306158345);
			func_1155(-223469678);
			func_1155(-404698347);
			func_1155(1517904467);
			func_1154(1952610440);
			break;
		
		case -223469678:
			func_1155(1306158345);
			func_1155(1952610440);
			func_1155(-404698347);
			func_1155(1517904467);
			func_1154(-223469678);
			break;
		
		case -404698347:
			func_1155(1306158345);
			func_1155(1952610440);
			func_1155(-223469678);
			func_1155(1517904467);
			func_1154(-404698347);
			break;
		
		case 1517904467:
			func_1155(1306158345);
			func_1155(1952610440);
			func_1155(-223469678);
			func_1155(-404698347);
			func_1154(1517904467);
			break;
		
		case 1376646519:
			func_1155(931649776);
			func_1155(-434590080);
			func_1155(1743048395);
			func_1155(449774763);
			func_1154(1376646519);
			break;
		
		case 931649776:
			func_1155(1376646519);
			func_1155(-434590080);
			func_1155(1743048395);
			func_1155(449774763);
			func_1154(931649776);
			break;
		
		case -434590080:
			func_1155(1376646519);
			func_1155(931649776);
			func_1155(1743048395);
			func_1155(449774763);
			func_1154(-434590080);
			break;
		
		case 1743048395:
			func_1155(1376646519);
			func_1155(931649776);
			func_1155(-434590080);
			func_1155(449774763);
			func_1154(1743048395);
			break;
		
		case 449774763:
			func_1155(1376646519);
			func_1155(931649776);
			func_1155(-434590080);
			func_1155(1743048395);
			func_1154(449774763);
			break;
		
		case -1414537028:
			func_1155(38162571);
			func_1155(1350391819);
			func_1155(54073871);
			func_1154(-1414537028);
			break;
		
		case 38162571:
			func_1155(-1414537028);
			func_1155(1350391819);
			func_1155(54073871);
			func_1154(38162571);
			break;
		
		case 1350391819:
			func_1155(-1414537028);
			func_1155(38162571);
			func_1155(54073871);
			func_1154(1350391819);
			break;
		
		case 54073871:
			func_1155(-1414537028);
			func_1155(38162571);
			func_1155(1350391819);
			func_1154(54073871);
			break;
		
		case 198200492:
			func_1154(198200492);
			func_1155(-1124061431);
			func_1155(52706132);
			func_1155(-259123672);
			break;
		
		case -1124061431:
			func_1155(198200492);
			func_1154(-1124061431);
			func_1155(52706132);
			func_1155(-259123672);
			break;
		
		case 52706132:
			func_1155(198200492);
			func_1155(-1124061431);
			func_1154(52706132);
			func_1155(-259123672);
			break;
		
		case -259123672:
			func_1155(198200492);
			func_1155(-1124061431);
			func_1155(52706132);
			func_1154(-259123672);
			break;
		
		case -919512195:
			func_1154(-919512195);
			func_1155(-1925798111);
			func_1155(420709909);
			func_1155(1703426636);
			break;
		
		case -1925798111:
			func_1154(-1925798111);
			func_1155(-919512195);
			func_1155(420709909);
			func_1155(1703426636);
			break;
		
		case 420709909:
			func_1154(420709909);
			func_1155(-919512195);
			func_1155(-1925798111);
			func_1155(1703426636);
			break;
		
		case 1703426636:
			func_1154(1703426636);
			func_1155(-919512195);
			func_1155(-1925798111);
			func_1155(420709909);
			break;
		
		case -1223121209:
			func_1154(-1223121209);
			func_1155(630808005);
			break;
		
		case 630808005:
			func_1154(630808005);
			func_1155(-1223121209);
			break;
		
		case 1453909576:
			func_1154(1453909576);
			func_1155(1643531967);
			break;
		
		case 1643531967:
			func_1154(1643531967);
			func_1155(1453909576);
			break;
		
		case 0:
			func_1154(0);
			func_1155(473295046);
			func_1155(-1738165526);
			break;
		
		case 473295046:
			func_1154(473295046);
			func_1155(0);
			func_1155(-1738165526);
			break;
		
		case -1738165526:
			func_1154(-1738165526);
			func_1155(0);
			func_1155(473295046);
			break;
		
		case 932909855:
			func_1154(932909855);
			func_1155(2051822093);
			break;
		
		case 2051822093:
			func_1154(2051822093);
			func_1155(932909855);
			break;
		
		case 405586984:
			func_1154(405586984);
			func_1155(1509509592);
			func_1155(-959357075);
			func_1155(-1311865656);
			break;
		
		case 1509509592:
			func_1154(1509509592);
			func_1155(405586984);
			func_1155(-959357075);
			func_1155(-1311865656);
			break;
		
		case -959357075:
			func_1154(-959357075);
			func_1155(1509509592);
			func_1155(405586984);
			func_1155(-1311865656);
			break;
		
		case -1311865656:
			func_1154(-1311865656);
			func_1155(1509509592);
			func_1155(-959357075);
			func_1155(405586984);
			break;
		
		case -524145696:
			if (bParam1)
			{
				func_1154(-524145696);
			}
			else
			{
				func_1155(-524145696);
			}
			func_1155(1626481264);
			func_1155(282809459);
			break;
		
		case 282809459:
			func_1154(282809459);
			func_1155(1626481264);
			func_1155(-524145696);
			break;
		
		case 1626481264:
			func_1154(1626481264);
			func_1155(-524145696);
			func_1155(282809459);
			break;
		
		case 885203519:
			if (bParam1)
			{
				func_1154(885203519);
			}
			else
			{
				func_1155(885203519);
			}
			break;
		
		case -1080627546:
			if (bParam1)
			{
				func_1154(-1080627546);
			}
			else
			{
				func_1155(-1080627546);
			}
			break;
		
		default:
			if (bParam1)
			{
				if (!func_204(iParam0))
				{
					func_1154(iParam0);
				}
			}
			else if (func_204(iParam0))
			{
				func_1155(iParam0);
			}
			break;
	}
}

void func_789(int iParam0)
{
	if (!func_1158(iParam0))
	{
		func_1160(func_1159(iParam0));
	}
}

int func_790()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1158(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_791(int iParam0, int iParam1, int iParam2)
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
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_792(iVar9);
	iVar2 = func_792(iVar10);
	iVar3 = func_792(iVar11);
	iVar5 = func_793(iVar9);
	iVar6 = func_793(iVar10);
	iVar7 = func_793(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_792(iVar12);
		iVar8 = func_793(iVar12);
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

int func_792(int iParam0)
{
	int iVar0;
	
	if (func_171(iParam0, 1, 0))
	{
		iVar0 = func_354(iParam0, 0, 0);
	}
	return iVar0;
}

int func_793(int iParam0)
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

int func_794(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_795(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_796(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	
	if (!func_903(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_797(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_796(iParam1, 5) || iParam0 == func_796(iParam1, 6)) || iParam0 == func_796(iParam1, 7)) || iParam0 == func_796(iParam1, 8)) || iParam0 == func_796(iParam1, 9))
	{
		func_787(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_366(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_368(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_798(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 1;
	if ((((iParam0 == func_796(iParam1, 5) || iParam0 == func_796(iParam1, 6)) || iParam0 == func_796(iParam1, 7)) || iParam0 == func_796(iParam1, 8)) || iParam0 == func_796(iParam1, 9))
	{
		if (func_787(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_366(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_368(51, 0, 0, iVar0, func_743(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_366(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_368(51, 0, 0, iVar0, func_743(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_799()
{
	if (func_13(((*Global_1347702)[37 /*49*/])->f_15) && Global_1392388->f_7)
	{
		return 1;
	}
	return 0;
}

void func_800(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_801(int iParam0)
{
	if (!func_1161(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_802(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_803(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*uParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		
		case -1202134084:
			*uParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		
		case 1297050066:
			*uParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		
		case -1780177928:
			*uParam1 = -1803237008;
			*uParam2 = -2084181920;
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
			*uParam2 = 836939099;
			break;
		
		case 1845082736:
			*uParam1 = -1521597660;
			*uParam2 = -1411815376;
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
			*uParam2 = 1654725195;
			break;
		
		case -276295943:
			*uParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		
		case -2029793397:
			*uParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		
		case -2075613923:
			*uParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		
		case 122656217:
			*uParam1 = 1192843172;
			*uParam2 = 231465488;
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
			*uParam2 = 314966081;
			break;
		
		case 550900979:
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

int func_804(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	
	func_1162();
	if (iParam2 == 39)
	{
		Var0 = { func_462(iParam0, 1, 0) };
		iParam2 = func_450(func_463(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_370(iParam0, 866047851) && func_1146(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_806(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_1163(func_875(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1164(iParam2);
	func_1165(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_856(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_856(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_862(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = iParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_1166(iParam0, iParam2, iParam1, func_120() != -1);
	if (bParam4)
	{
		func_1167(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1167(&(Global_1946804->f_1378), 1, 0);
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
				func_1168(func_875(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_805(bool bParam0, bool bParam1, bool bParam2)
{
	func_1169(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_806(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_807()
{
	func_1170(&(Global_1946804->f_2776));
	func_1171(32768);
	func_1168(1108822547, 8, 6);
}

int func_808(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_450(iParam0, 1);
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

void func_809(int iParam0)
{
	struct<4> Var0;
	
	if (func_1172(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1173(Var0);
}

void func_810(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1173(Var0);
}

int func_811(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_706(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_812(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

int func_813(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

float func_814()
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
	
	if (func_1174())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1175(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1175(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1176();
	fVar2 = func_1177();
	fVar3 = func_1178();
	fVar4 = func_1179();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1180()));
	fVar7 = (func_1175(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1181(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1182(3, fVar9, fVar9 > 100f);
	return func_1183(fVar7, -100f, 100f);
}

float func_815()
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
	
	if (func_1174())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1175(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1175(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1176();
	fVar2 = func_1177();
	fVar3 = func_1178();
	fVar4 = func_1179();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1180()));
	fVar7 = (func_1175(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1181(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1182(2, fVar9, fVar9 > 100f);
	return func_1183(fVar7, -100f, 100f);
}

float func_816()
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
	
	if (func_1174())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1175(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1184())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1185())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1175(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1176();
	fVar2 = func_1177();
	fVar3 = func_1178();
	fVar4 = func_1179();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1180()));
	fVar7 = (func_1175(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1181(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1182(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_1175(0);
	}
	return func_1183(fVar7, -100f, 100f);
}

bool func_817(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_818(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_819(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_350(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_736(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_378(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_706(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_820(int iParam0, bool bParam1)
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
				return func_1186();
			}
			break;
	}
	return 0;
}

int func_821(int iParam0)
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

int func_822(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

void func_823(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_822(iParam0))
	{
		return;
	}
	if (func_1187(iParam0))
	{
		return;
	}
	if (!func_1188(iParam0))
	{
		func_1189(iParam0, 1, 0);
	}
	iVar0 = func_1190(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1191(iParam0, 512))
		{
			func_461(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1192() && !bParam1) && !func_99(0, 0, 1))
	{
		func_490(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1193(iParam0, 6);
	if (bParam2)
	{
		if (!func_99(0, 0, 1))
		{
			func_191(1, 4);
		}
	}
}

bool func_824(int iParam0, bool bParam1)
{
	return func_820(iParam0, 0) < func_1194(iParam0, bParam1);
}

int func_825(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_374(iVar1) == iParam0)
		{
			*uParam1 = iVar1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_826(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_450(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_450(iParam0, 1) /*11*/];
}

void func_827(int iParam0, int iParam1)
{
	if (func_370(iParam1, 130796156))
	{
		func_1195(iParam1, 0);
	}
	else if (func_370(iParam1, 930141731))
	{
		func_1195(iParam1, 1);
		func_1196(iParam0);
	}
}

void func_828(var uParam0, int iParam1)
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

int func_829(int iParam0, var uParam1, var uParam2, var uParam3)
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
	func_1197(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = uParam3;
	Var1.f_2 = { *uParam1 };
	func_1198(uParam2, iParam0, Var1);
	return 1;
}

int func_830(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_831(int iParam0)
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

int func_832(int iParam0)
{
	var uVar0;
	
	if (!func_1199(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_833()
{
	return !&Global_1911774;
}

void func_834(int iParam0, int iParam1, var uParam2, var uParam3)
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

char* func_835(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_836(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_837(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_838(int iParam0, int iParam1, int iParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;
	
	if ((iParam2 && func_120() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 0;
	}
	if (!func_1200(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_839(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	
	if (func_120() != -1)
	{
		return false;
	}
	if (func_1200(iParam0, iParam1, &uVar2, &iVar1))
	{
		iVar14 = 0;
		while (iVar14 < iVar1)
		{
			iVar13 = &uVar2[iVar14];
			if (iVar13 == 0)
			{
			}
			else
			{
				if (!bVar0)
				{
					if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
					{
						bVar0 = true;
					}
				}
				UNLOCK::_UNLOCK_SET_UNLOCKED(iVar13, true);
			}
			iVar14++;
		}
	}
	return bVar0;
}

void func_840(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (bParam0)
	{
		func_143(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_143(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_143(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_841();
		UNLOCK::_UNLOCK_SET_UNLOCKED(645322743, true);
	}
	else
	{
		func_1201(2032023096);
		func_146(-615217896);
		func_446(655868243, 1, 1, -142743235, 1);
		func_1203(146323340, func_1202());
		Var0 = { func_1065() };
		if (func_1204(&Var0) == -1387633835)
		{
			func_1205(&Var0);
			func_1206(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1207(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1058(iVar6) == 2010625508)
			{
				func_1208(iVar6, iVar7);
				func_1209(iVar6, iVar8);
				func_1210(iVar6, iVar9);
				func_1211(iVar6, 0);
				if (func_1212(iVar6))
				{
					func_1213(iVar6);
				}
				iVar10 = func_1214(iVar8);
				func_1215(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(645322743, false);
	}
}

int func_841()
{
	if (!func_1216(-1898635967, func_1202(), 1))
	{
		return 0;
	}
	if (func_162())
	{
		if (!func_1216(146323340, func_1202(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_842()
{
	func_156(34411519);
	func_156(834124286);
	func_156(-570967010);
}

void func_843(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (bParam0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1426541042))
		{
			return;
		}
		func_143(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_143(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_143(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_143(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_143(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_143(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_143(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_143(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_143(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_143(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_143(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1426541042, true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1426541042))
		{
			return;
		}
		func_446(-1080874779, 3, 1, -142743235, 1);
		func_446(-223790555, 3, 1, -142743235, 1);
		func_446(1566032147, 3, 1, -142743235, 1);
		func_446(891311852, 5, 1, -142743235, 1);
		func_446(-1353737667, 5, 1, -142743235, 1);
		func_446(-330313895, 5, 1, -142743235, 1);
		func_446(-2051332199, 5, 1, -142743235, 1);
		func_446(1237770824, 5, 1, -142743235, 1);
		func_446(-1795542128, 3, 1, -142743235, 1);
		func_446(-1757588258, 3, 1, -142743235, 1);
		func_446(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1207(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1058(iVar0) == 153881023)
			{
				func_1208(iVar0, iVar1);
				func_1209(iVar0, iVar2);
				func_1210(iVar0, iVar3);
				func_1211(iVar0, 0);
				if (func_1212(iVar0))
				{
					func_1213(iVar0);
				}
				iVar4 = func_1214(iVar2);
				func_1215(iVar0, iVar4);
			}
			iVar0++;
		}
		func_841();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1426541042, false);
	}
}

void func_844(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1217(iParam0);
	if (bParam3)
	{
		func_489(iParam0, sParam1, iParam2);
	}
}

bool func_845(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_846(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_847()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<10> Var17;
	struct<14> Var39;
	
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_811("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_812(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_761(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_813(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_813(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_848(int iParam0, struct<4> Param1, int iParam5)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var19;
	
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1218(Param1, iParam5, &Var5, 0))
	{
		func_763(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_819(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1219(Var19, 1);
}

bool func_849()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_43799) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_43799, 0));
}

int func_850(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_1105(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1106(&Var0, func_870(0));
	}
	if (!func_1107(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_812(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_763(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_813(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

int func_851(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;
	
	if (!func_350(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_462(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1220(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_762(iParam0, Var0, Var0.f_4, bParam4) };
	return func_763(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_852(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_370(iParam0, 606799272))
		{
			func_1221(iParam0, iParam1);
		}
		if (func_370(iParam0, -1112814642) && func_370(iParam0, -1697809989))
		{
			func_399(iParam0, iParam1, 1, 0);
		}
	}
}

int func_853(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (!func_1222(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_374(iParam0) != -999503751)
		{
			func_1223(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_374(iParam0) != -999503751)
	{
		func_1223(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1224(iParam0, 1);
	return 1;
}

void func_854()
{
	int iVar0;
	
	if (func_120() == -1)
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

void func_855(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1225(0);
	}
	if (bParam0)
	{
		func_867(8);
		func_867(512);
	}
	else
	{
		func_867(8);
		func_867(16);
	}
}

void func_856(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_857(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		iParam0 = func_452();
	}
	if (func_120() == -1)
	{
		if (iParam0 == 1160113249)
		{
			iVar0 = 1583685020;
		}
		else
		{
			iVar0 = -572793833;
		}
	}
	else
	{
		iVar0 = -2109211296;
	}
	return iVar0;
}

int func_858(int iParam0)
{
	switch (iParam0)
	{
		case 708211766:
			return 1;
		
		case -1815871154:
			return 2;
		
		case 1053922635:
			return 4;
		
		case -1248203249:
			return 8;
		
		case -1275860049:
			return 16;
		
		case -473313046:
			return 32;
		
		case 1009605579:
			return 64;
		
		case -92538845:
			return 128;
		
		case 350097565:
			return 256;
		
		case 346761890:
			return 512;
		
		case -915377750:
			return 1024;
		
		case -1283403230:
			return 2048;
		
		case 1024778115:
			return 4096;
		
		case 75507907:
			return 8192;
		
		case -1678578495:
			return 16384;
		
		case -1925540957:
			return 32768;
		
		case -2125161702:
			return 131072;
		
		case 1929486675:
			return 262144;
		
		case -1932005642:
			return 65536;
		
		case 315750675:
			return 524288;
		
		case -376594188:
			return -1;
		
		case -663436545:
			return 112;
		
		case 1042019528:
			return 1136;
		
		case -141044514:
			return 4208;
		
		case 884232794:
			return 8304;
		
		case 836721350:
			return 20480;
		
		case -1062102573:
			return 32833;
		
		case -884591393:
			return 96;
		
		case -1886898087:
			return 16496;
		
		case -1674046782:
			return 139376;
		
		case 1481630954:
			return 262256;
		
		case -366477279:
			return 0;
		
		default:
			break;
	}
	return 0;
}

void func_859(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1226(uParam0->f_1[iVar0 /*3*/], 2))
		{
			iVar7 = func_875(iVar0, 1);
			if (func_1227(iVar0, iParam1))
			{
				vVar4 = { func_454(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0 /*11*/] && vVar4.x != 0) && (&uParam0->f_1[iVar0 /*3*/] != vVar4.x || (uParam0->f_1[iVar0 /*3*/])->f_1 != vVar4.y))
				{
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar4 };
				}
				if (func_1228(iVar7, 4))
				{
					func_1168(iVar7, 4, 6);
				}
			}
			else
			{
				func_1229(iVar7, 4, 6);
				Jump @201; //curOff = 167
				if (bParam2)
				{
					vVar1.x = &Global_1946804->f_57[iVar0 /*11*/];
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar1 };
				}
			}
			iVar0++;
		}
	}

int func_860(int iParam0)
{
	int iVar0;
	var uVar1;
	
	Global_1946804->f_964.f_2 = 0;
	if (func_120() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_1230(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_861(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return 1;
}

void func_862(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 12;
	iVar2 = func_374(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1227(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1165(iVar1, iVar3);
		}
	}
	if (func_826(-1586649372) && func_1227(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1165(iVar1, iVar3);
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
						func_1165(iVar1, iVar3);
					}
				}
			}
			func_1231(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		
		case 688587926:
			func_1231(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1165(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_1231(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1155669136)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_1165(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_1165(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_1231(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_1231(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1165(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_1231(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1165(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1165(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_374(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1165(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_370(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
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
			switch (func_374(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_374(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1165(iVar1, iVar3);
						}
					}
					break;
				
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_374(&(uParam0->f_1[iVar1 /*3*/])) || func_370(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1165(iVar1, iVar3);
						}
					}
					break;
			}
		}

bool func_863(int iParam0, int iParam1)
{
	if (func_120() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_864(int iParam0)
{
	if (func_120() != -1)
	{
		if (func_817(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_817(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_865(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_817(iParam0, 65536) && !func_817(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_817(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_817(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_866()
{
	return Global_1905944->f_5694;
}

void func_867(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_868(struct<4> Param0)
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
			if (func_1232(Param0))
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
			func_1233(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_867(8);
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
			if (func_1232(Param0))
			{
				return;
			}
			func_1233(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_867(8);
			break;
		
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_810(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_869(bool bParam0)
{
	return func_762(1328661203, func_1234(), -1591664384, bParam0);
}

struct<4> func_870(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_706(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_762(923904168, func_869(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_762(923904168, func_869(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_762(923904168, func_869(bParam0), -740156546, 0);
}

int func_871(int iParam0, bool bParam1)
{
	if (func_374(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_735(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_872(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_706(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_762(271701509, func_869(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_762(271701509, func_869(bParam0), 12999093, 0);
}

int func_873(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_374(iParam0);
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

int func_874(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_706(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_875(int iParam0, int iParam1)
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

int func_876(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_877(var uParam0, int iParam1)
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

void func_878(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_879(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_470(*uParam0);
	iVar1 = func_469(*uParam0);
	if (iParam1 < 1 || iParam1 > func_475(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_880(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_881(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_882(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_883(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_884(int iParam0)
{
	return BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iParam0)));
}

int func_885(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -707360575;
		
		case 2:
			return -1201174711;
		
		case 4:
			return 151582343;
		
		case 8:
			return -642492359;
		
		case 16:
			return 5171247;
		
		default:
			break;
	}
	return 0;
}

bool func_886(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_120() == -1)
	{
		if (func_730(iParam0))
		{
			iVar1 = WEAPON::_0x865F36299079FB75(iParam0);
			bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iParam0);
	}
	return bVar0;
}

int func_887(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;
	
	if (!func_350(iParam0, 0))
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
	*iParam2 = Var0.f_1;
	return 1;
}

int func_888(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	func_1102(&iParam0);
	if (!func_350(iParam0, 0))
	{
		return 0;
	}
	if (!func_378(0))
	{
		bParam2 = true;
	}
	iVar0 = func_734(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1104(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = INVENTORY::_0xE787F05DFC977BDE(func_706(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_889(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<14> Var35;
	int iVar49;
	struct<9> Var50;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	
	if (func_370(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			INVENTORY::_0x42A2F33A1942E865(iVar33);
		}
		iVar49 = 0;
		if (func_1235(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532)
				{
					iVar49 = (iVar49 + (Var0[iVar32 /*2*/])->f_1);
					Jump @229; //curOff = 201
				}
				else if (&Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = func_432(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_435(iVar62, iVar61);
					if (func_350(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_889(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_889(iVar63, -915411861, 1, 0, 0));
								}
								INVENTORY::_0x42A2F33A1942E865(iVar33);
							}
						}
					}
					iVar62++;
				}
				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar61);
			}
		}
		return iVar49;
	}
	if (!func_1235(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532)
		{
			return (Var0[iVar32 /*2*/])->f_1;
		}
		else if (&Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

bool func_890(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1236(1);
}

int func_891()
{
	if (func_162())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_892(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(func_1237(iParam0)), 1997120069, MISC::_CREATE_VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP", MISC::_CREATE_VAR_STRING(2, func_113(iParam0, 0))), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(func_1237(iParam0)), 1997120069, MISC::_CREATE_VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP_NOS", MISC::_CREATE_VAR_STRING(2, func_113(iParam0, 0))), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_893()
{
	return Global_40.f_4283.f_325;
}

bool func_894(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_120() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

bool func_895(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_896(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

void func_897(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

void func_898(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12105[iParam0 /*7*/] = uParam1;
		return;
	}
	Global_1058888->f_498[iParam0 /*2*/] = uParam1;
}

void func_899(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_5 = iParam1;
		return;
	}
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = iParam1;
}

int func_900(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	*uParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_348();
	bVar1 = false;
	if (bVar0 && !func_1238(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1238(37)) && !func_1238(43))
	{
		*uParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1238(43)) && !func_1238(44))
	{
		bVar2 = true;
	}
	if (bVar1)
	{
		*uParam0 = 1;
		return 1;
	}
	if (!bVar1 && !bVar2)
	{
		if (func_1059(0) == 1)
		{
			*uParam0 = 1;
		}
		if (func_1059(1) == 1)
		{
			*uParam1 = 1;
		}
	}
	if (*uParam0 || *uParam1)
	{
		return 1;
	}
	return 0;
}

int func_901()
{
	return Global_40.f_1095.f_3054;
}

int func_902(int iParam0)
{
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_420;
}

int func_903(int iParam0, var uParam1)
{
	if (!func_1239(iParam0))
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

int func_904()
{
	if (func_348())
	{
		if (!func_1238(3))
		{
			return func_1240(43);
		}
		if (func_1238(38) && !func_1238(43))
		{
			return func_1241(8);
		}
	}
	return 0;
}

bool func_905(int iParam0)
{
	if (!func_504(iParam0))
	{
		return false;
	}
	return ((((*Global_1888801)[iParam0 /*35*/])->f_20 == 1 || ((*Global_1888801)[iParam0 /*35*/])->f_20 == 2) && !func_1242(iParam0));
}

Vector3 func_906(int iParam0, int iParam1)
{
	struct<5> Var0;
	vector3 vVar5;
	
	func_903(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -495185473;
		DATAFILE::_DATAFILE_GET_VECTOR(&vVar5, &Var0);
	}
	return vVar5;
}

int func_907(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	
	if (LAW::_0x54310AAB97B92816(PLAYER::PLAYER_ID()) <= 0)
	{
		return 0;
	}
	if (Global_1310720->f_21 == -1)
	{
		return 0;
	}
	if (Global_1310720->f_23 >= 3)
	{
		return 0;
	}
	iVar0 = func_1243(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_903(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		DATAFILE::_DATAFILE_GET_HASH(&iVar6, &Var1);
		if (func_1244(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_908(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_1245(iParam0);
	if (func_204(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (uParam1 || iVar0 == -1);
}

int func_909(int iParam0)
{
	struct<4> Var0;
	var uVar5;
	
	if (!func_903(15, &Var0))
	{
		return 0;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = 303248275;
	if (DATAFILE::_DATAFILE_GET_BOOL(&uVar5, &Var0))
	{
	}
	return uVar5;
}

int func_910(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, float fParam10)
{
	int iVar0;
	int iVar1;
	
	if (bParam5)
	{
		if (func_1246(iParam3, iParam4))
		{
			return 0;
		}
	}
	if (!bParam7 || func_1247(5))
	{
		if (func_1248(iParam3, iParam4))
		{
			return 0;
		}
	}
	iVar0 = func_1047(vParam0);
	if (bParam6)
	{
		iVar1 = func_200(vParam0, 1);
		if (func_1249(iVar1) || func_1250(iVar0, 1))
		{
			return 0;
		}
	}
	if (!func_1251(iParam3, iParam4))
	{
		return 0;
	}
	if (!func_1252())
	{
		if (func_1253(iParam3, iParam4))
		{
			return 0;
		}
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam8))
	{
		if (!func_1254(iVar0))
		{
			return 0;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_200(vParam0, 0))
				{
					return 0;
				}
			}
		}
	}
	if (!func_1255(iParam3, iParam4))
	{
		return 0;
	}
	if (func_1256(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return 0;
		}
	}
	if (!func_1257(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return 0;
		}
	}
	if (func_348())
	{
		if (VOLUME::_0x92A78D0BEDB332A3(iParam8))
		{
			if (!VOLUME::_0xF256A75210C5C0EB(iParam8, vParam0))
			{
				return 0;
			}
		}
		if (func_1258(vParam0, fParam10) || func_1259(vParam0, fParam10))
		{
			return 0;
		}
	}
	else if (bParam9)
	{
		if (vParam0.x < -450f && vParam0.y < -600f)
		{
			return 0;
		}
	}
	return 1;
}

int func_911(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = func_1260(vParam0, 0f, 0f, 0, 2);
	return func_1260(vParam0, ((*Global_1894052)[iVar0 /*3*/])->f_1, ((*Global_1894052)[iVar0 /*3*/])->f_2, Global_1894052[iVar0 /*3*/], 4);
}

bool func_912(int iParam0)
{
	return func_1261(iParam0, 2);
}

char* func_913(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "musicData/triggers/trigger(%i)";
		
		case 1:
			return ":EVENT_INDEX";
		
		case 2:
			return ":EVENT_TYPE";
		
		case 3:
			return ":EVENT_LABEL";
		
		case 4:
			return ":EVENT_FLAGS";
		
		case 5:
			return ":EVENT_START";
		
		case 6:
			return ":EVENT_START_INT";
		
		case 7:
			return ":EVENT_START_INT2";
		
		case 8:
			return ":EVENT_END";
		
		case 9:
			return ":EVENT_END_INT";
		
		case 10:
			return ":EVENT_END_INT2";
		
		case 11:
			return ":EVENT_PED_USEAGE";
		
		case 12:
			return "musicData/entities/entity(%i)";
		
		case 13:
			return ":INDEX";
		
		case 14:
			return ":MODEL_NAME";
	}
	return "";
}

char* func_914(char* sParam0)
{
	return sParam0;
}

void func_915(int iParam0)
{
	struct<16> Var0;
	
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1934603)[iParam0 /*16*/])->f_10)))
	{
		return;
	}
	*((*Global_1934603)[iParam0 /*16*/]) = { Var0 };
	Global_1934603->f_161 = (Global_1934603->f_161 - 1);
	if (Global_1934603->f_161 < 0)
	{
		Global_1934603->f_161 = 0;
	}
}

void func_916(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_917(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_918(vector3 vParam0, var uParam3, var uParam4, int iParam5, char[4] cParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_STRING(cParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_919(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(((*uParam0)[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&(((*uParam0)[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

void func_920(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam3[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, uParam3[iVar0 /*4*/], &(((*uParam3)[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

Vector3 func_921(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -108.3568f, -15.6171f, 94.8505f;
				
				case 1:
					return -95.5762f, -14.1243f, 94.6515f;
				
				case 2:
					return 680.4623f, -1221.427f, 43.9875f;
				
				case 3:
					return 681.7044f, -1217.882f, 44.2152f;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1150.917f, -568.7803f, 77.313f;
				
				case 1:
					return 1152.86f, -574.4587f, 78.5386f;
				
				case 2:
					return 1176.209f, -580.1877f, 69.2677f;
				
				case 3:
					return 1179.079f, -581.7966f, 67.7924f;
				
				case 4:
					return 1182.354f, -580.723f, 67.0964f;
				
				case 5:
					return 1184.316f, -594.7933f, 68.3869f;
				
				case 6:
					return 1185.089f, -595.3312f, 68.0589f;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1150.766f, -569.3737f, 77.6678f;
				
				case 1:
					return 1162.385f, -577.0369f, 76.0753f;
				
				case 2:
					return 1175.757f, -581.8738f, 69.2246f;
				
				case 3:
					return 1182.496f, -580.8946f, 67.0303f;
				
				case 4:
					return 1185.089f, -595.3312f, 68.0589f;
				
				case 5:
					return 1176.272f, -582.6965f, 68.7668f;
				
				case 6:
					return 1163.573f, -578.1478f, 75.2313f;
				
				case 7:
					return 1097.895f, -585.5579f, 89.2839f;
				
				case 8:
					return 1174.885f, -580.5032f, 70.8415f;
				
				case 9:
					return 1173.124f, -580.6735f, 71.6362f;
				
				case 10:
					return 1137f, -603.4f, 83.9f;
				
				case 11:
					return 1136f, -607.6f, 85.4f;
				
				case 12:
					return 795.1f, -1085.5f, 49.2f;
				
				case 13:
					return 795.9f, -1092.4f, 49.1f;
				
				case 14:
					return 755.0931f, -1191.137f, 43.7034f;
				
				case 15:
					return 750.2631f, -1190.962f, 43.7675f;
				
				case 16:
					return 1137.137f, -645.2842f, 87.8167f;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return -115.3411f, -18.6639f, 94.9392f;
				
				case 1:
					return -113.6571f, -15.0543f, 94.8969f;
				
				case 2:
					return -108.3824f, -17.9594f, 94.8904f;
				
				case 3:
					return -109.2995f, -22.1023f, 94.7682f;
				
				case 4:
					return 661.4152f, -1229.124f, 43.372f;
				
				case 5:
					return 674.713f, -1220.37f, 44.109f;
				
				case 6:
					return 664.2993f, -1229.623f, 43.3788f;
				
				case 7:
					return 674.277f, -1222.26f, 43.9272f;
				
				case 8:
					return 676.1924f, -1227.299f, 43.6122f;
				
				case 9:
					return 682.881f, -1230.918f, 44.3515f;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 675.3544f, -1217.752f, 44.5789f;
				
				case 1:
					return 676.8029f, -1218.12f, 44.2704f;
				
				case 2:
					return 674.0723f, -1218.424f, 44.5562f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_922(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		AUDIO::_0x0D7FD6A55FD63AEF(14, 3, bParam1);
		AUDIO::_0x0D7FD6A55FD63AEF(19, 3, bParam1);
	}
	else
	{
		AUDIO::_0x660A8F876DF1D4F8(14);
		AUDIO::_0x660A8F876DF1D4F8(19);
	}
}

int func_923(int iParam0)
{
	if (!func_260(iParam0))
	{
		return 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_13;
}

bool func_924(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_925(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (iParam2 == -1)
	{
		if (!PED::IS_PED_A_PLAYER(iParam1))
		{
			iParam2 = 0;
		}
		else
		{
			iParam2 = 1;
		}
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, iParam1);
	PED::_0xF634E2892220EF34(iParam0, iParam2);
}

float func_926(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_927(int* iParam0)
{
	struct<175> Var0;
	
	Var0 = 1;
	Var0.f_13 = 11;
	Var0.f_146 = 1097859072;
	Var0.f_147 = 1101004800;
	Var0.f_174 = 4;
	MISC::_COPY_MEMORY(iParam0, &Var0, 242);
}

void func_928(var uParam0, char[16] cParam1)
{
	uParam0->f_152 = { cParam1 };
}

void func_929(var uParam0)
{
	func_1262(&(uParam0->f_96), Global_35, "ARTHUR", 0, 0, 0);
	func_1262(&(uParam0->f_96), Local_195.f_37, "JavierEscuella", 0, 0, 0);
	func_990(&(uParam0->f_96), 65536);
	func_1264(&(uParam0->f_96), 242418/*func_1263*/);
}

void func_930(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
	PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
	PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1632043089, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1623727326, false);
		PAD::DISABLE_CONTROL_ACTION(0, -922478227, false);
	}
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
	}
	if (bParam3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 440314811, false);
			PAD::DISABLE_CONTROL_ACTION(0, 2028806450, false);
			PAD::DISABLE_CONTROL_ACTION(0, 371916472, false);
		}
	}
	if (bParam4)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -620139643, false);
	}
	func_1265(0);
	if (bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
	}
	if (!PED::IS_PED_INJURED(Global_35))
	{
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			PED::SET_PED_RESET_FLAG(Global_35, 189, true);
		}
		if (bParam6)
		{
			if (!PED::GET_PED_CONFIG_FLAG(Global_35, 43, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 43, true);
			}
		}
	}
}

int func_931(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0))
	{
		AUDIO::START_PRELOADED_CONVERSATION(sParam0);
		return 1;
	}
	return 0;
}

float func_932(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -82.8f;
				
				case 1:
					return -59.76f;
				
				case 2:
					return 313.5827f;
				
				case 3:
					return 307.3372f;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return -109.2011f;
				
				case 1:
					return -164.4883f;
				
				case 2:
					return 262.8872f;
				
				case 3:
					return 280.7184f;
				
				case 4:
					return 251.5964f;
				
				case 5:
					return 249.3134f;
				
				case 6:
					return 265.3134f;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 97.075f;
				
				case 1:
					return -34.4883f;
				
				case 2:
					return 67.0164f;
				
				case 3:
					return 246.3689f;
				
				case 4:
					return 265.3134f;
				
				case 5:
					return 290.8814f;
				
				case 6:
					return 32.8422f;
				
				case 7:
					return 85.041f;
				
				case 8:
					return 69.075f;
				
				case 9:
					return 73.5117f;
				
				case 10:
					return 167.1f;
				
				case 11:
					return 167.1f;
				
				case 12:
					return -166.9f;
				
				case 13:
					return -166.9f;
				
				case 14:
					return 97.075f;
				
				case 15:
					return 125.5117f;
				
				case 16:
					return 222.0715f;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 71.5988f;
				
				case 1:
					return 56.7003f;
				
				case 2:
					return 59.76f;
				
				case 3:
					return 62.64f;
				
				case 4:
					return 208.9985f;
				
				case 5:
					return 162.272f;
				
				case 6:
					return 163.7694f;
				
				case 7:
					return 170.475f;
				
				case 8:
					return 6.9474f;
				
				case 9:
					return 366.248f;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 180.1252f;
				
				case 1:
					return 200.1252f;
				
				case 2:
					return -179.1097f;
			}
			break;
	}
	return 0f;
}

bool func_933(int iParam0, int iParam1)
{
	return func_75(&(Global_1900073->f_2[iParam0]), iParam1);
}

void func_934(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, float fParam5, int iParam6)
{
	if ((func_205(*uParam1) && func_205(*uParam2)) || !ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 364, true);
	PED::SET_PED_CAN_BE_TARGETTED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam0), true);
	func_1266(*uParam0, "", fParam5, 0, 0, iParam6);
	PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam0), 130, true);
	PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam0), 315, true);
	PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam0), 297, true);
	if (!func_205(*uParam1))
	{
		*uParam1 = func_1267(sParam3, -163964935, *uParam0, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		func_1268(uParam1, *uParam0);
	}
	if (!func_205(*uParam2))
	{
		*uParam2 = func_1267(sParam4, 648122183, *uParam0, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		func_1268(uParam2, *uParam0);
	}
	if (func_205(*uParam1))
	{
		func_1269(*uParam2, 0, 1);
		func_936(*uParam1, 1, 1);
		func_935(*uParam1, 1, 1);
	}
	if (func_205(*uParam2))
	{
		func_1269(*uParam2, 0, 1);
		func_936(*uParam2, 1, 1);
		func_935(*uParam2, 1, 1);
	}
}

void func_935(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 && !func_205(iParam0))
	{
		return;
	}
	iVar0 = func_510(iParam0);
	if (bParam1)
	{
		func_1270(iParam0, 4);
		func_1271(iVar0, 1);
		func_1272(iVar0, 1);
	}
	else
	{
		func_1273(iParam0, 4);
		func_1272(iVar0, 0);
	}
}

void func_936(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 && !func_205(iParam0))
	{
		return;
	}
	iVar0 = func_510(iParam0);
	func_1271(iVar0, iParam1);
}

bool func_937(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 && !func_205(iParam0))
	{
		return false;
	}
	iVar0 = func_510(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_938(int iParam0, int iParam1)
{
	iParam0 = func_670(iParam0);
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

var func_939(int iParam0)
{
	var uVar0;
	
	if (!func_715(iParam0))
	{
		return uVar0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_8;
}

int func_940(int iParam0)
{
	if (func_85(iParam0) == 8)
	{
		return func_125(iParam0);
	}
	return -1;
}

var func_941(int iParam0)
{
	var uVar0;
	
	if (!func_140(iParam0))
	{
		return uVar0;
	}
	uVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_3;
	return uVar0;
}

int func_942(int iParam0)
{
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_1274(iParam0, 32))
	{
		return 1;
	}
	return 0;
}

void func_943(char* sParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;
	
	Var0.f_1 = sParam0;
	iVar2 = _NAMESPACE71::_0x4E88A65968A55C78(&Var0, iParam1);
	if (func_306(iVar2))
	{
		_NAMESPACE71::_0x2F901291EF177B02(iVar2, 0);
	}
}

float func_944(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

Vector3 func_945(char* sParam0)
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

int func_946(int iParam0, vector3 vParam1, var uParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	func_1275(iParam0, vParam1, 0, fParam5, fParam6, fParam7, fParam8, iParam12, iParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	fVar4 = func_216(iParam0, vParam1, 1);
	if (!func_67(uParam4))
	{
		if (fVar4 <= fParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				func_60(uParam4, 0);
			}
		}
	}
	else if (iParam10 && fVar4 > fParam8)
	{
		func_68(uParam4);
	}
	if (func_67(uParam4))
	{
		if (bParam14)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && VEHICLE::_0xEA44E97849E9F3DD(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = VEHICLE::_0xA8BA0BAE0173457B(iVar2, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, 1f);
					VEHICLE::_0x0C3F0F7F92CA847C(iVar2, PED::_0x46BF2A810679D6E6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (func_229(uParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_1276(iParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
					return 1;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !func_1276(iParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, 0);
					return 1;
				}
			}
		}
		if (iParam0 == Global_35 && iParam11 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(iParam0, 8))
			{
				TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			}
			PED::SET_PED_RESET_FLAG(iParam0, 175, true);
		}
	}
	return 0;
}

bool func_947()
{
	return UILOG::_UILOG_HAS_DISPLAYED_CACHED_OBJECTIVE();
}

bool func_948(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5)
{
	sParam0 = func_515(iParam5, sParam0, sParam1, sParam2, sParam3, sParam4);
	return MISC::ARE_STRINGS_EQUAL(sParam0, func_950());
}

bool func_949()
{
	return func_684(2048);
}

var func_950()
{
	return UILOG::_UILOG_GET_CACHED_OBJECTIVE();
}

void func_951()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

int func_952()
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

int func_953(int iParam0)
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

var func_954(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_955(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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
		uParam0->f_223++;
		if (uParam0->f_223 < 10)
		{
			return (func_968(uParam0, 256) && !func_968(uParam0, 4194304));
		}
		uParam0->f_223 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	func_981(uParam0, sParam1);
	if (!func_968(uParam0, 64))
	{
		if (!func_503(func_986(uParam0)))
		{
			func_990(uParam0, 64);
		}
		else
		{
			vVar0 = { func_1277(uParam0) };
			if (!func_503(vVar0))
			{
				func_1278(uParam0, vVar0);
			}
		}
		return 0;
	}
	fVar3 = func_216(Global_35, func_986(uParam0), 1);
	if (func_968(uParam0, 128) || func_968(uParam0, 256))
	{
		if ((fVar3 >= func_1279(uParam0) && !bParam2) || !ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
		{
			if (uParam0->f_241)
			{
				func_1280();
				uParam0->f_241 = 0;
			}
			func_977(uParam0);
			if (ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_156);
			}
			func_1281(uParam0);
			func_997(uParam0, 128, 1);
			func_997(uParam0, 256, 1);
			func_997(uParam0, 4096, 1);
			func_997(uParam0, 32768, 1);
			func_997(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_1282(uParam0) || bParam2)
	{
		if (!func_968(uParam0, 128))
		{
			if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
			{
				if (func_1282(uParam0) >= func_1279(uParam0))
				{
				}
				Var4 = { func_1283(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_1284(uParam0);
				}
				Var4 = { func_1283(uParam0) };
				iVar12 = 256;
				if (!func_968(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_156 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_152), iVar12, &Var4, false, true);
				func_975(uParam0, 0, 0, 0, 0);
				func_990(uParam0, 128);
			}
		}
	}
	if (func_968(uParam0, 128))
	{
		if (func_968(uParam0, 256) && !func_968(uParam0, 4194304))
		{
			return 1;
		}
		func_985(uParam0);
		if (!uParam0->f_241)
		{
			if (func_1285())
			{
				func_809(4096);
				uParam0->f_241 = 1;
			}
		}
		if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_156, 1, 0))
		{
			bVar13 = true;
			Var15 = { func_969(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_174[iVar14 /*9*/]))
				{
					if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_174[iVar14 /*9*/], &Var15))
					{
						if (!(uParam0->f_174[iVar14 /*9*/])->f_8)
						{
							(uParam0->f_174[iVar14 /*9*/])->f_8 = 1;
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_156, uParam0->f_174[iVar14 /*9*/]);
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, uParam0->f_174[iVar14 /*9*/]))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_968(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_156, &Var15))
				{
					if (!func_968(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_156, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_156, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_156, &Var15);
						}
						func_990(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return 0;
			}
			func_990(uParam0, 256);
			func_997(uParam0, 4194304, 1);
			return 1;
		}
	}
	return 0;
}

char* func_956(int iParam0)
{
	if (!func_350(iParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_418(iParam0));
}

char* func_957(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_837(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_958(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if ((((((((((((iParam0 == -1527293029 || iParam0 == 1059426360) || iParam0 == 488496242) || iParam0 == 1380607804) || iParam0 == -1753819339) || iParam0 == 149706141) || iParam0 == 2100131425) || iParam0 == -978159653) || iParam0 == -2041382104) || iParam0 == 1334018438) || iParam0 == 1815744868) || iParam0 == 1055480217) || iParam0 == -1916584960)
	{
		return 1;
	}
	return 0;
}

void func_959(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

var func_960(int iParam0)
{
	return (Global_1900073->f_26[iParam0 /*30*/])->f_4;
}

bool func_961(int iParam0)
{
	return func_933(iParam0, 16);
}

bool func_962(int iParam0)
{
	return &Global_1900073->f_26[iParam0 /*30*/] == 3;
}

bool func_963(int iParam0)
{
	return &Global_1900073->f_26[iParam0 /*30*/] == 4;
}

char* func_964(int iParam0)
{
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return "";
	}
	switch (iParam0)
	{
		case -2055158210:
			return "w_pistol_mauser01";
		
		case 1701864918:
			return "w_pistol_semiauto01";
		
		case 34411519:
			return "w_pistol_volcanic01";
		
		case -183018591:
			return "w_repeater_carbine-1";
		
		case -1783478894:
			return "w_repeater_henry01";
		
		case -1471716628:
			return "w_repeater_winchester01";
		
		case 379542007:
			return "w_revolver_cattleman01";
		
		case 127400949:
			return "w_revolver_doubleaction01";
		
		case 2075992054:
			return "w_revolver_schofield01";
		
		case 1999408598:
			return "w_rifle_boltaction01";
		
		case 1676963302:
			return "w_revolver_springfield01";
		
		case -570967010:
			return "w_repeater_pumpaction01";
		
		case 834124286:
			return "w_shotgun_pumpAction01";
		
		case 1845102363:
			return "w_shotgun_doublebarrel01";
		
		case 1674213418:
			return "w_shotgun_repeating01";
		
		case 392538360:
			return "w_shotgun_sawed01";
		
		case 1838922096:
			return "w_shotgun_semiauto01";
		
		case 1402226560:
			return "w_rifle_carcano01";
		
		case -506285289:
			return "w_rifle_rollingBlock01";
		
		case -2002235300:
		case -1504859554:
		case -618550132:
		case -281894307:
		case -164645981:
		case 165751297:
		case 680856689:
		case 1742487518:
		case 2055893578:
			break;
	}
	return "";
}

void func_965(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(iParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_1286(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1287(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam2))
		{
		}
		else if ((uParam0->f_13[iVar0 /*12*/])->f_9 != iParam3)
		{
		}
		else if ((uParam0->f_13[iVar0 /*12*/])->f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		iVar1 = func_1288(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			func_1289(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1290(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0 /*12*/] = iParam1;
		StringCopy(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam2, 64);
		(uParam0->f_13[iVar0 /*12*/])->f_9 = iParam3;
		(uParam0->f_13[iVar0 /*12*/])->f_10 = iParam4;
		if (bParam5)
		{
			func_1291(uParam0->f_13[iVar0 /*12*/], 2);
		}
		else
		{
			func_1292(uParam0->f_13[iVar0 /*12*/], 2);
		}
	}
}

int func_966(var uParam0)
{
	return *uParam0;
}

bool func_967(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_968(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

struct<8> func_969(var uParam0)
{
	struct<8> Var0;
	
	Var0 = { func_1293(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { func_1294() };
	}
	return Var0;
}

void func_970(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> Var1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_156, 1, 0))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_174[iVar0 /*9*/]) && MISC::ARE_STRINGS_EQUAL(sParam1, uParam0->f_174[iVar0 /*9*/]))
		{
			Var1 = { uParam0->f_158 };
			*(uParam0->f_174[iVar0 /*9*/]) = { Var1 };
		}
		iVar0++;
	}
	func_1295(uParam0, sParam1);
	func_997(uParam0, 2097152, 1);
	func_990(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_156, sParam1, true);
}

void func_971(var uParam0, var uParam1)
{
	if (((!func_968(uParam0, 32) || func_1296(uParam0)) || func_968(uParam0, 268435456)) && !func_968(uParam0, 65536))
	{
		func_1297(&(uParam0->f_212), 256);
	}
}

void func_972(var uParam0, int iParam1)
{
	var uVar0;
	
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 9, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 9, iParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 7, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 7, iParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 8, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 8, iParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 10, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 10, iParam1);
	}
}

bool func_973()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(130487986) > 0;
}

void func_974()
{
	int iVar0;
	
	SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
	iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	while (SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		if (SCRIPTS::_GET_HASH_OF_THREAD(iVar0) == 130487986)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 265, true);
			}
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar0, 1);
			return;
		}
		iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	}
}

void func_975(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_968(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4) && !func_924(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_1298());
		func_990(uParam0, 8);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_1299(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::_0xC1799FAFD2FDF52B(uParam0->f_4, 0, 0, iParam2);
		func_990(uParam0, 16);
	}
}

void func_976(bool bParam0, int iParam1)
{
	if (func_1300())
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_1192())
		{
			func_598(1);
		}
	}
	AUDIO::_0x36559148B78853B3(0, iParam1, 0);
}

void func_977(var uParam0)
{
	int iVar0;
	
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_156, 1, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_174[iVar0 /*9*/]) && (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, uParam0->f_174[iVar0 /*9*/]) || ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_156, uParam0->f_174[iVar0 /*9*/])))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_156, uParam0->f_174[iVar0 /*9*/]);
		}
		(uParam0->f_174[iVar0 /*9*/])->f_8 = 0;
		iVar0++;
	}
}

bool func_978(var uParam0, int iParam1)
{
	return (uParam0->f_151 && iParam1) != 0;
}

void func_979(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_174[iVar0 /*9*/]))
		{
			func_1301(uParam0, uParam0->f_174[iVar0 /*9*/]);
		}
		iVar0++;
	}
	Var1 = { func_1302() };
	func_1301(uParam0, &Var1);
	Var1 = { func_969(uParam0) };
	func_1301(uParam0, &Var1);
}

void func_980(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0 /*12*/])) || func_1303(uParam0->f_13[iVar0 /*12*/], 2))
		{
			if (func_1303(uParam0->f_13[iVar0 /*12*/], 1) || ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, &((uParam0->f_13[iVar0 /*12*/])->f_1)))
			{
				func_1304(uParam0, &((uParam0->f_13[iVar0 /*12*/])->f_1), &(uParam0->f_13[iVar0 /*12*/]), (uParam0->f_13[iVar0 /*12*/])->f_9);
				if (iParam1 && ENTITY::IS_ENTITY_A_PED(&(uParam0->f_13[iVar0 /*12*/])))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_13[iVar0 /*12*/]));
					if (iVar1 != Global_35 && !func_1303(uParam0->f_13[iVar0 /*12*/], 16))
					{
						func_1305(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_981(var uParam0, char* sParam1)
{
	int iVar0;
	
	if (func_968(uParam0, 8192))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_152), {func_1306("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_152), {func_1306("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_990(uParam0, 8192);
}

void func_982(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (((!ANIMSCENE::_0x25557E324489393C(uParam0->f_156) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_156, 0)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_156)) || func_968(uParam0, 512))
	{
		if (!func_1307(uParam0->f_213, 128))
		{
			func_1308();
		}
		return;
	}
	if ((func_993(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, func_1309(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_156, func_1309(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_156))
	{
		if (!func_1307(uParam0->f_213, 128))
		{
			func_1308();
		}
		return;
	}
	iVar0 = 1;
	iVar1 = _NAMESPACE71::_0xC17F69E1418CD11F(9);
	if (iVar1 != 0)
	{
		if (func_1310(iVar1))
		{
			if (func_1311(Global_43800, 0))
			{
				iVar0 = 0;
			}
		}
	}
	bVar2 = false;
	if (func_1307(uParam0->f_213, 512))
	{
		bVar2 = true;
	}
	if (func_1312(iVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_156);
		func_1308();
	}
}

void func_983(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_228(&(uParam0->f_1));
}

void func_984(var uParam0)
{
	struct<8> Var0;
	
	Var0 = { func_969(uParam0) };
	func_1295(uParam0, &Var0);
}

void func_985(var uParam0)
{
	if ((!func_968(uParam0, 32768) && ANIMSCENE::_0x25557E324489393C(uParam0->f_156)) && ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_156, 0))
	{
		func_1313(uParam0);
		func_980(uParam0, 0);
		if (!ANIMSCENE::_0x59606519FF9D3EC2(uParam0->f_156, 1))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_156);
		}
		func_990(uParam0, 32768);
	}
}

Vector3 func_986(var uParam0)
{
	return uParam0->f_5;
}

void func_987(int iParam0)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), iParam0, 0, 256);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
}

void func_988(var uParam0)
{
	vector3 vVar0;
	
	if (!func_968(uParam0, 4))
	{
		if (func_967(uParam0->f_212, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { func_1314(uParam0) };
		if (!func_967(uParam0->f_212, 524288))
		{
			func_1315(&(uParam0->f_224));
		}
		func_1316(&(uParam0->f_212), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_1317(uParam0, 0f, 0f, 0f);
		func_1318(uParam0);
		func_1319(uParam0);
		func_1320(uParam0, 0f, 0f, 0f, 0, 0);
		func_1321(uParam0);
		func_990(uParam0, 4);
		func_1322(uParam0, 0);
		func_1323(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_225)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_225));
		}
	}
}

int func_989(var uParam0, int iParam1)
{
	if (func_968(uParam0, 262144))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, "ExportCamera"))
	{
		return 0;
	}
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_156, "ExportCamera") || (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_156, "ExportCamera") && iParam1)) || ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_156))
	{
		func_990(uParam0, 262144);
		func_1322(uParam0, 1);
		return 1;
	}
	return 0;
}

void func_990(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_991(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_156) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_156, 0))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_0x49F1D143ADE32656(uParam0->f_156) * 1000f));
}

int func_992(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_156) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_156, 0))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_156) * 1000f));
}

int func_993(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1) && func_1303(uParam0->f_13[iVar0 /*12*/], iParam2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_994(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
	{
		return 1;
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_156, 0))
	{
		if (func_968(uParam0, 524288))
		{
			ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
		}
		return 1;
	}
	if (ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_156) && func_968(uParam0, 1048576))
	{
		return 1;
	}
	return 0;
}

void func_995(var uParam0)
{
	if (((func_968(uParam0, 1073741824) && !func_968(uParam0, 524288)) && func_968(uParam0, 512)) && CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
}

void func_996(var uParam0)
{
	if (!func_968(uParam0, 536870912))
	{
		func_1322(uParam0, 1);
		func_998(&(uParam0->f_213), uParam0->f_224);
		func_1280();
		func_990(uParam0, 536870912);
	}
	if (func_968(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_1324(uParam0);
	func_983(uParam0, 1);
	func_1281(uParam0);
	func_1325(uParam0);
	func_1326(uParam0);
	func_1327(uParam0, 4);
	func_1284(uParam0);
	func_972(uParam0, 1);
	func_977(uParam0);
	func_68(&(uParam0->f_1));
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_156) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_156))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_156);
	}
	func_1328(!func_1307(uParam0->f_213, 128));
	if (!func_1307(uParam0->f_213, 128))
	{
		func_1308();
	}
}

void func_997(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && iParam2) && ANIMSCENE::_0x25557E324489393C(uParam0->f_156)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_156))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_156);
	}
}

void func_998(var uParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_1329(2000);
	Global_16 = 0;
	func_1330();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_1307(*uParam0, 8));
	if (!func_1307(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (func_1307(*uParam0, 2) || func_1307(*uParam0, 4))
	{
		HUD::_0x4CC5F2FC1332577F(-1679307491);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(-1679307491);
	}
	if (!func_1307(*uParam0, 16))
	{
		func_1331(1);
	}
	if (func_1307(*uParam0, 32))
	{
		func_403(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1332(-1623728698, 0);
	}
	func_1323(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_999()
{
	Global_1935630->f_52 = 1;
}

void func_1000(int iParam0, int iParam1, int iParam2)
{
	if (func_171(iParam1, 1, 0))
	{
		if (iParam1 == iParam0 || iParam2 == 1)
		{
			func_1333(iParam1, 1);
		}
		else
		{
			func_1333(iParam1, 0);
		}
	}
}

bool func_1001(int iParam0)
{
	return func_75((Global_1900073->f_26[iParam0 /*30*/])->f_6, 64);
}

var func_1002(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	return func_514(sParam0, iParam1, iParam2, iParam3, 0, iParam4);
}

int func_1003()
{
	if (func_567(1))
	{
		return 0;
	}
	if (!func_561(0) || (func_561(0) && func_587(0)))
	{
		return 1;
	}
	return 0;
}

void func_1004(int iParam0, int iParam1)
{
	if (!func_933(iParam0, iParam1))
	{
		func_221(Global_1900073->f_2[iParam0], iParam1);
	}
}

struct<4> func_1005(int iParam0, int iParam1)
{
	struct<4> Var0;
	
	Var0 = { func_921(iParam0, iParam1) };
	Var0.f_3 = func_932(iParam0, iParam1);
	return Var0;
}

void func_1006(char* sParam0)
{
	STREAMING::END_SRL();
	STREAMING::PREFETCH_SRL(sParam0);
	STREAMING::_0xAE00387E53B1E9FC();
}

void func_1007()
{
	if (iLocal_1630 == 0)
	{
		sLocal_1625 = "script@Cinematics@TripSkip@Fishing1";
		CAM::_0x1B3C2D961F5FC0E1(sLocal_1625);
		StringCopy(&Local_1631, "camera_treatments", 64);
		StringCopy(&(Local_1631.f_8), "GENERIC_CME_PUSH_IN_TREATMENT_REQUEST", 64);
		CAM::_0x6A4D224FC7643941(&Local_1631);
		iLocal_1630 = 1;
	}
}

void func_1008(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

int func_1009(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

void func_1010(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	
	iVar0 = 8;
	if (bParam4)
	{
		iVar0 |= 72;
	}
	if (bParam5)
	{
		iVar0 |= 131072;
	}
	if (bParam6)
	{
		iVar0 |= 24;
	}
	if (bParam7)
	{
		iVar0 |= 40;
	}
	if (bParam8)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_1011(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_1012(float fParam0, float fParam1)
{
	if (func_29(Local_195.f_37, 0) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_195.f_37, 0))
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_195.f_37, fParam0, 0, -1082130432, 0);
	}
	if (func_29(Global_35, 0) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Global_35, 0))
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, fParam1, 0, -1082130432, 0);
	}
}

int func_1013(var uParam0)
{
	if (!func_67(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_522(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_1334() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_1014()
{
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_195.f_37, 0, 1);
}

void func_1015()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_1016(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	
	if (!func_260(iParam0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_151(((*Global_1835011)[4 /*74*/])->f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				
				case 3:
					if (func_1335(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				
				case 4:
					iVar1[0] = -268604689;
					break;
				
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				
				case 8:
					iVar1[0] = -268604689;
					break;
				
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				
				case 10:
					if (func_151(((*Global_1347702)[63 /*49*/])->f_15, 1) || func_13(((*Global_1347702)[63 /*49*/])->f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				
				case 14:
					iVar1[0] = -268604689;
					break;
				
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				
				case 17:
					if (func_1335(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				
				case 18:
					if (!func_151(((*Global_1835011)[14 /*74*/])->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_294(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				
				case 3:
					if (func_1335(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				
				case 4:
					iVar1[0] = -922193456;
					break;
				
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				
				case 11:
					if (func_151(((*Global_1347702)[134 /*49*/])->f_15, 1) || func_13(((*Global_1347702)[134 /*49*/])->f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				
				case 18:
					iVar1[0] = -922193456;
					break;
				
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				
				case 26:
					iVar1[0] = -268604689;
					break;
				
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_151(((*Global_1835011)[38 /*74*/])->f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				
				default:
					iVar1[0] = 1593315648;
					break;
			}
			break;
		
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				
				case 3:
					if (func_1335(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				
				case 4:
					iVar1[0] = -922193456;
					break;
				
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				
				case 11:
					iVar1[0] = -2051275045;
					break;
				
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				
				case 18:
					iVar1[0] = -922193456;
					break;
				
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				
				case 26:
					iVar1[0] = -268604689;
					break;
				
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				
				case 14:
					iVar1[0] = -426171916;
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				
				case 4:
					if (func_324(747937920, 1) && !func_151(((*Global_1347702)[1 /*49*/])->f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
	}
	if (iParam3 && ENTITY::DOES_ENTITY_EXIST(func_62(iParam0)))
	{
		iVar10 = 0;
		while (iVar10 < iVar7)
		{
			if (&iVar1[iVar10] == (Global_40.f_4942[iParam0 /*60*/])->f_3)
			{
				bVar9 = true;
				iVar8 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
			}
			iVar10++;
		}
	}
	if (!bVar9)
	{
		iVar11 = 0;
		if (iVar7 > 0 && bParam2)
		{
			iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
		}
		iVar8 = &iVar1[iVar11];
	}
	if (!func_638(iParam0, iVar8))
	{
		iVar8 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
	}
	return iVar8;
}

int func_1017(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return 1;
		
		default:
			break;
	}
	return 0;
}

bool func_1018(int iParam0, bool bParam1)
{
	if (!func_260(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_78(iParam0) || func_283(iParam0, 44, 1))
		{
			return false;
		}
	}
	return MISC::ARE_STRINGS_EQUAL(&(((*Global_1360165)[iParam0 /*1157*/])->f_48), "Sleep");
}

struct<7> func_1019(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
{
	struct<7> Var0;
	
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_3 = { vParam2 };
	Var0.f_2 = uParam8;
	Var0.f_6 = 0;
	if (bParam5)
	{
		MISC::SET_BIT(&(Var0.f_6), 0);
	}
	if (bParam6)
	{
		MISC::SET_BIT(&(Var0.f_6), 1);
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(Var0.f_6), 2);
	}
	if (bParam9)
	{
		MISC::SET_BIT(&(Var0.f_6), 3);
	}
	return Var0;
}

void func_1020(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_260(iParam0))
	{
		return;
	}
	iVar0 = func_62(iParam0);
	func_1336(iVar0);
	func_59(iParam0, 60, 1);
	if (bParam1)
	{
		func_1337(iParam0);
	}
}

void func_1021(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_260(iParam0))
	{
		return;
	}
	iVar0 = func_62(iParam0);
	func_1338(iVar0);
	func_277(iParam0, 60, 1);
	if (bParam1)
	{
		func_1339(iParam0);
	}
}

void func_1022(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_260(iParam0))
	{
		return;
	}
	iVar0 = func_62(iParam0);
	func_1340(iVar0);
	if (iParam0 == 14)
	{
		func_1341(iVar0);
	}
	func_59(iParam0, 61, 1);
	if (bParam1)
	{
		func_1342(iParam0);
	}
}

void func_1023(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_260(iParam0))
	{
		return;
	}
	iVar0 = func_62(iParam0);
	func_1343(iVar0);
	func_277(iParam0, 61, 1);
	if (bParam1)
	{
		func_1344(iParam0);
	}
}

int func_1024(var uParam0)
{
	return uParam0;
}

bool func_1025(int iParam0)
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

int func_1026(int iParam0)
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

bool func_1027(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_260(iParam0))
	{
		return false;
	}
	func_1345(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_65[iVar0]), iVar1);
}

int func_1028(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1029(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 178615350:
			return 331645018;
		
		case 2094043703:
			return -1395382793;
		
		case -695701225:
			return -1090160065;
		
		case 404503428:
			return -1704514526;
		
		case -1268239471:
			return -1832874334;
		
		case -1874208704:
			return 1680324116;
		
		case 1593315648:
			return 989578874;
		
		case -1559986688:
			return 174754238;
		
		case 1071744295:
			return -2065784734;
		
		case 977450639:
			return 2111449038;
		
		case 1901494236:
			return 1245083301;
		
		case 713940276:
			return -1949892659;
		
		case 1744281750:
			return -663077666;
		
		case 283037683:
			return 1996046145;
		
		case -2051275045:
			return -306710010;
		
		case 1495063555:
			return -339275545;
		
		case 1046468203:
			return 393090546;
		
		case 1018353621:
			return 114272443;
		
		case -433615745:
			return 643643053;
		
		case 777603945:
			return -328334844;
		
		case -1668922931:
			return -1915831038;
		
		case -1341683964:
			return 1689938120;
		
		case 928493661:
			return 861275228;
		
		case 431390894:
			return -20643141;
		
		case -301101630:
			return -1187204983;
		
		case -1155031950:
			return 1883650185;
		
		case -1248623443:
			return -1437962122;
		
		case 350498312:
			return 1959714099;
		
		case -481967001:
			return 1833893952;
		
		case 513932985:
			return 505715365;
		
		case -193269670:
			return -1774801049;
		
		case -1684458716:
			return 1976273473;
		
		case -973332710:
			return -2045878709;
		
		case 1658153743:
			return -2072429185;
		
		case 1842975347:
			return 491764525;
		
		case -1678882891:
			return -1638703055;
		
		case -268604689:
			return -1496612359;
		
		case 1818898449:
			return 30596609;
		
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return 41788943;
				
				default:
					break;
			}
			return -99272505;
		
		case 1205492208:
			return 1598276604;
		
		case 1199580439:
			return -1443192745;
		
		case -310473775:
			return -877585857;
		
		case -1632589543:
			return 1052055818;
		
		case -1862464078:
			return 1895628185;
		
		case 296923297:
			iVar0 = func_1346(296923297, iParam1);
			return func_1347(iVar0);
		
		case -2040275819:
			return 464906090;
		
		case -1114682645:
			return 744097966;
		
		case -1414977761:
			return 1059434053;
		
		case 1237718549:
			iVar0 = func_1346(1237718549, iParam1);
			return func_1347(iVar0);
		
		case -23947011:
			return -456769142;
		
		case 1295334688:
			return 869636257;
		
		case 1200878026:
			return 1560123389;
		
		case -1692022104:
			return -1851470579;
		
		case 707545953:
			return 890352471;
		
		case -1532979576:
			return 1391951221;
		
		case -1642335258:
			return -1491647079;
		
		case 876797088:
			return 1309207681;
		
		case -1587546924:
			return -1303789247;
		
		case 961676983:
			return -1527307534;
		
		case 1300659195:
			return -309158751;
		
		case -571427255:
			return -251280159;
		
		case 837028314:
			return -20984612;
		
		case -1394723994:
			return -1857650992;
		
		case -1335291723:
			return -1120526485;
		
		case -445211559:
			return -757536090;
		
		case -946772361:
			return 646599895;
		
		case 1950972546:
			return -1699183538;
		
		case -1092189504:
			return 389057251;
		
		case 80515440:
			return -2137653778;
		
		case 6418928:
			return -211106360;
		
		case -1648322231:
			return 1074183062;
		
		case -1065026089:
			return 1087308308;
		
		case 2062813606:
			return 1709174532;
		
		case 876535472:
			return -1916145078;
		
		case -1205468859:
			return -757536090;
		
		case 1484386316:
			return -800489594;
		
		case 1254970547:
			return -211106360;
		
		case 867156718:
			return 241911854;
		
		case -426171916:
			return 41788943;
	}
	return 41788943;
}

bool func_1030(int iParam0, int iParam1)
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

int func_1031(int iParam0, int iParam1)
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

int func_1032(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_1030(iParam0, iVar0))
	{
		return 1;
	}
	if (iVar0 != iParam1)
	{
		return 0;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_1033(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_1034(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (PED::_0xFB4891BD7578CDC1(iParam1, 1933068772))
	{
		PED::_0xD710A5007C2AC539(iParam1, 1933068772, 1);
	}
	if (PED::_0xFB4891BD7578CDC1(iParam1, 494009478))
	{
		PED::_0xD710A5007C2AC539(iParam1, 494009478, 1);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1 > 0 && func_1030(iParam1, 860729266))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 860729266);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4096 > 0 && func_1030(iParam1, 879715242))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 879715242);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 128 > 0 && func_1030(iParam1, 1606325429))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1606325429);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 256 > 0 && func_1030(iParam1, 1743550585))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1743550585);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 512 > 0 && func_1030(iParam1, 1064646155))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1064646155);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1024 > 0 && func_1030(iParam1, -536694793))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -536694793);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2048 > 0 && func_1030(iParam1, -1304053509))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1304053509);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & -2147483648 > 0 && func_1030(iParam1, 718939204))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 718939204);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 65536 > 0 && func_1030(iParam1, -972364774))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -972364774);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16384 > 0 && func_1030(iParam1, -1100875244))
	{
		if (PED::_0xFB4891BD7578CDC1(iParam1, -134124598))
		{
			PED::_0xD710A5007C2AC539(iParam1, -134124598, 1);
		}
		if (PED::_0xFB4891BD7578CDC1(iParam1, 2071466316))
		{
			PED::_0xD710A5007C2AC539(iParam1, 2071466316, 1);
		}
		PED::_0x1902C4CFCC5BE57C(iParam1, -1100875244);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 262144 > 0 && func_1030(iParam1, 1153596794))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1153596794);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 524288 > 0 && func_1030(iParam1, 1016389820))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1016389820);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1048576 > 0 && func_1030(iParam1, -726966617))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -726966617);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2097152 > 0 && func_1030(iParam1, 1365901568))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1365901568);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 32768 > 0 && func_1030(iParam1, -1658942149))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1658942149);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 131072 > 0 && func_1030(iParam1, -1980913856))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1980913856);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4194304 > 0 && func_1030(iParam1, 491764525))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 491764525);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8388608 > 0 && func_1030(iParam1, -76015264))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -76015264);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16777216 > 0 && func_1030(iParam1, 622113465))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 622113465);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 33554432 > 0 && func_1030(iParam1, 781533162))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 781533162);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 67108864 > 0 && func_1030(iParam1, -271415321))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -271415321);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 134217728 > 0 && func_1030(iParam1, -1683207356))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1683207356);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 268435456 > 0 && func_1030(iParam1, -254794762))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -254794762);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 536870912 > 0 && func_1030(iParam1, 609066278))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 609066278);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1073741824 > 0 && func_1030(iParam1, -1712783565))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1712783565);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8192 > 0 && func_1030(iParam1, 1544915253))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1544915253);
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_57 = 1;
	}
}

void func_1035(int iParam0)
{
	func_1348(iParam0, 1);
	func_1348(iParam0, 128);
	func_1348(iParam0, 256);
	func_1348(iParam0, 512);
	func_1348(iParam0, 1024);
	func_1348(iParam0, 2048);
	func_1348(iParam0, 4096);
	func_1348(iParam0, 65536);
	func_1348(iParam0, 16384);
	func_1348(iParam0, 262144);
	func_1348(iParam0, 524288);
	func_1348(iParam0, 1048576);
	func_1348(iParam0, 2097152);
	func_1348(iParam0, 32768);
	func_1348(iParam0, 131072);
	func_1348(iParam0, 134217728);
	func_1348(iParam0, 1073741824);
}

void func_1036(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return;
	}
	if (!bParam1)
	{
		if (DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
		{
			DECORATOR::DECOR_REMOVE(Global_1360165[iParam0 /*1157*/], "wearing_bandana");
		}
	}
	else if (!DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
	{
		DECORATOR::DECOR_SET_BOOL(Global_1360165[iParam0 /*1157*/], "wearing_bandana", true);
	}
}

bool func_1037(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_465(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_465(iVar4) && iVar4 != bVar0)
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
	if (func_120() == -1 && !func_758(bVar0))
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
				bVar0 = 379542007;
				break;
			
			case -1212426201:
			case -594562071:
			case 860033945:
			case 970310034:
				if (func_758(-183018591))
				{
					bVar0 = -183018591;
				}
				else
				{
					bVar0 = 379542007;
				}
				break;
			
			default:
				bVar0 = 379542007;
				break;
		}
	}
	else if (bVar0 == -164645981 && iParam0 == Global_35)
	{
		bVar0 = 1247405313;
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_465(bVar0))
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
	if (iParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_379(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1349(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_767(bVar0))
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

void func_1038(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(1, iVar0));
}

int func_1039(int iParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	int iVar3;
	char* sVar4;
	char* sVar12;
	
	if (!func_260(iParam0))
	{
		return 0;
	}
	vVar0 = { uParam3, uParam4, uParam5 };
	iVar3 = func_676(iParam0, 1);
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_12)
	{
		case 0:
			((*Global_1360165)[iParam0 /*1157*/])->f_124 = _NAMESPACE48::_0x31C70A716CAE1FEE(iVar3);
			((*Global_1360165)[iParam0 /*1157*/])->f_125 = 0;
			if (func_29(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
			{
				func_678(iParam0, 3);
			}
			else
			{
				if (!func_1350(iParam0) && func_1351(iParam0, &sVar4))
				{
					_NAMESPACE48::_0x187D65F3AEC5D679(func_674(iParam0, 1), &sVar4);
				}
				func_278(iParam0, 256, 0);
				func_678(iParam0, 1);
			}
			break;
		
		case 1:
			if (!Global_1359489->f_12)
			{
				if (!_NAMESPACE48::_0xA8120EBEAF290C7A(iVar3))
				{
					return func_1352();
				}
				if (bParam2 && !func_503(vVar0))
				{
					_NAMESPACE48::_0x59C7AD6FEA2AC449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					_NAMESPACE48::_0xD4B614179BCD0654(iVar3);
				}
				if (!func_1353(iParam0, vVar0, fParam6, bParam10))
				{
					return func_1352();
				}
				if (func_29(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
				{
					if (_NAMESPACE48::_0x31C70A716CAE1FEE(iVar3) != ((*Global_1360165)[iParam0 /*1157*/])->f_124)
					{
					}
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(((*Global_1360165)[iParam0 /*1157*/])->f_124, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(((*Global_1360165)[iParam0 /*1157*/])->f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(((*Global_1360165)[iParam0 /*1157*/])->f_124, true);
					func_678(iParam0, 2);
				}
			}
			break;
		
		case 2:
			if (!func_29(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
			{
				func_678(iParam0, 1);
				return func_1352();
			}
			if (!bParam9 || PED::_0xA0BC8FAED8CFEB3C(((*Global_1360165)[iParam0 /*1157*/])->f_124))
			{
				func_678(iParam0, 3);
			}
			break;
		
		case 3:
			if (!func_29(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
			{
				func_678(iParam0, 1);
				return func_1352();
			}
			if (bParam7)
			{
				if (!func_1354(iParam0, ((*Global_1360165)[iParam0 /*1157*/])->f_124, 1))
				{
					return func_1352();
				}
			}
			if ((bParam2 && !func_503(vVar0)) && !func_1355(vVar0, ENTITY::GET_ENTITY_COORDS(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, false), 1056964608, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::DETACH_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_637(((*Global_1360165)[iParam0 /*1157*/])->f_124, vVar0, fParam6, 2, 1073741824);
			}
			if (bParam1)
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					if (func_283(iParam0, 39, 1))
					{
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_59(iParam0, 39, 1);
				func_278(iParam0, 8, 1);
				func_278(iParam0, 64, 0);
				((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			ENTITY::FREEZE_ENTITY_POSITION(((*Global_1360165)[iParam0 /*1157*/])->f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(((*Global_1360165)[iParam0 /*1157*/])->f_124, false);
			func_1356(((*Global_1360165)[iParam0 /*1157*/])->f_124, iParam0);
			if (bParam8)
			{
				POPULATION::_0xF74E134F40192884(((*Global_1360165)[iParam0 /*1157*/])->f_124, 1);
			}
			sVar12 = func_1357(iParam0, func_723());
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar12))
			{
				_NAMESPACE48::_0x63AA2B8EB087886A(func_674(iParam0, 1), MISC::GET_HASH_KEY(sVar12));
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_70 = ((*Global_1360165)[iParam0 /*1157*/])->f_124;
			((*Global_1360165)[iParam0 /*1157*/])->f_124 = 0;
			func_277(iParam0, 40, 0);
			func_278(iParam0, 32, 0);
			func_678(iParam0, 0);
			return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
	}
	return func_1352();
}

void func_1040(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 6:
			iVar0 = 0;
			break;
		
		case 3:
			iVar1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(iParam1, 16);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND((IntToFloat(iVar1) * 0.4f)), BUILTIN::ROUND((IntToFloat(iVar1) * 0.75f)));
			break;
		
		default:
			iVar1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(iParam1, 16);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND((IntToFloat(iVar1) * 0.1f)), BUILTIN::ROUND((IntToFloat(iVar1) * 0.4f)));
			break;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iParam1, 16, iVar0);
}

void func_1041(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_58(iParam0))
	{
		return;
	}
	if (func_674(iParam0, 1) == 0)
	{
		return;
	}
	if (bParam3)
	{
		func_1358(func_72(iParam0), 1f, 0);
	}
	if (bParam1)
	{
		func_1337(iParam0);
	}
	else
	{
		func_1339(iParam0);
	}
	if (bParam2)
	{
		func_1342(iParam0);
	}
	else
	{
		func_1344(iParam0);
	}
}

int func_1042(int iParam0)
{
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_1059(iParam0) == 0)
	{
		return 0;
	}
	return 1;
}

void func_1043(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1049(iParam0))
	{
		return;
	}
	iVar0 = func_1048(iParam0);
	func_1359(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_0xAA9F048DCF69B6DC(iVar1))
	{
		if (!func_1360(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_1361(iParam0, 0);
	func_272(iParam0);
}

void func_1044(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(Global_40.f_1095.f_1[iParam0 /*436*/], "", 64);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_8 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_9 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_10 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_11 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_12 = -1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_13 = -15;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 = 0;
	func_1362(&Var0);
	func_1363(iParam0, Var0);
	func_1364(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_15));
	func_1365(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_298));
	func_1366(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_356));
	func_1367(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1368(iVar2, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iVar2 /*4*/]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1369(iVar3, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iVar3 /*4*/]);
		iVar3++;
	}
	func_1370(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_420));
	func_1371(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_422));
	func_1372(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_425));
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_427 = { 0f, 0f, 0f };
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_430 = 0f;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_431 = -1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_432 = -1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_433 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_434 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_435 = 0;
	(*Global_1900383)[iParam0 /*45*/] = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_1 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_19 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_22 = 0f;
	((*Global_1900383)[iParam0 /*45*/])->f_23 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_24 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_26 = 0;
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_27 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_28 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_31 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_34 = 0f;
	((*Global_1900383)[iParam0 /*45*/])->f_35 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_36 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_37 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_38 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_41 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_42 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_43 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_44 = -1;
}

void func_1045(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1046(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_1047(vector3 vParam0)
{
	return func_1373(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_1048(int iParam0)
{
	iParam0 = func_670(iParam0);
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

int func_1049(int iParam0)
{
	iParam0 = func_670(iParam0);
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

int func_1050(int iParam0)
{
	int iVar0;
	
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_1049(iParam0))
	{
		return 0;
	}
	iVar0 = func_1048(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_1051(int iParam0)
{
	int iVar0;
	
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_1049(iParam0))
	{
		return 0;
	}
	iVar0 = func_1048(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_1052(int iParam0)
{
	int iVar0;
	
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1049(iParam0))
	{
		return;
	}
	iVar0 = func_1048(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::_SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_1053(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	func_1081(iParam0);
	func_1081(iParam0);
	func_1374(iParam0, iParam1);
	func_1375(iParam0, iParam1);
	func_1376(iParam0, iParam1);
	iVar1 = func_1048(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1377(iVar1);
		}
		if (iParam0 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			uVar2 = PLAYER::_0x227B06324234FB09(iVar0, iVar1);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar1)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar1)
			{
				PLAYER::_0x227B06324234FB09(iVar0, 0);
			}
		}
	}
	iVar3 = func_1048(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1377(iVar3);
		}
		if (iParam1 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			uVar4 = PLAYER::_0x227B06324234FB09(iVar0, iVar3);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar3)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar3)
			{
				PLAYER::_0x227B06324234FB09(iVar0, 0);
			}
		}
	}
	func_672();
}

int func_1054()
{
	int iVar0;
	
	iVar0 = func_1378();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_1055()
{
	int iVar0;
	
	iVar0 = func_1378();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_1379(0);
}

void func_1056(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_1057(int iParam0)
{
	iParam0 = func_670(iParam0);
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

int func_1058(int iParam0)
{
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_8;
}

int func_1059(int iParam0)
{
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_14;
}

void func_1060(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1207(&iVar0, &iVar1, &iVar2);
	func_1208(iParam0, iVar0);
	func_1209(iParam0, iVar1);
	func_1210(iParam0, iVar2);
	func_1380(iParam0, 1);
	func_1381(iParam0, 1);
}

void func_1061(int iParam0)
{
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_938(iParam0, 1);
}

void func_1062(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_19 = { vParam1 };
	((*Global_1900383)[iParam0 /*45*/])->f_22 = uParam4;
}

int func_1063(int iParam0)
{
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return func_1274(iParam0, 1);
}

struct<2> func_1064(int iParam0)
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1382(iParam0, &uVar2))
	{
	}
	if (!func_1383(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1065()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	
	if (func_1384(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1384(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1384(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1384(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1384(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1384(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1066(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return;
	}
	func_1385(iParam0);
	func_1386(iParam0, uParam1);
	func_1387(iParam0);
	func_1388(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1389(iParam0, iParam3, 0);
	}
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 1);
}

void func_1067(int iParam0)
{
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 1;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_1068(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10, bool bParam11, int iParam12)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(*uParam0))
	{
		if (bParam11)
		{
			if (iParam12 == 1)
			{
				*uParam0 = VOLUME::_0x0EB78C2B156635B1(665633627, vParam1, vParam4, vParam7);
				VOLUME::_0x5B23DFF8E0948BB2(*uParam0, 1);
			}
			else
			{
				func_1390(uParam0, vParam1, vParam4, vParam7, sParam10);
			}
		}
		else if (iParam12 == 1)
		{
			*uParam0 = VOLUME::_0x0EB78C2B156635B1(-1612834106, vParam1, vParam4, vParam7);
			VOLUME::_0x5B23DFF8E0948BB2(*uParam0, 1);
		}
		else
		{
			func_1391(uParam0, vParam1, vParam4, vParam7, sParam10);
		}
	}
}

int func_1069(var uParam0)
{
	if (func_29(iLocal_27, 0) == 0)
	{
		Local_195.f_343 = 1;
		Local_195.f_343.f_1 = 0;
		iLocal_27 = func_652(&(Local_195.f_342), &(Local_195.f_343));
		return 0;
	}
	if (func_29(iLocal_28, 0) == 0)
	{
		if (func_29(func_62(uParam0->f_2), 0))
		{
			iLocal_28 = func_653(uParam0->f_2, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		return 0;
	}
	if (func_1392(func_532(3, 5)) == 0)
	{
		return 0;
	}
	if (func_29(Global_35, 0))
	{
		if (PED::GET_MOUNT(Global_35) != 0)
		{
			PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
		}
		func_626(Global_35, func_625(3, 5), 2, 1073741824);
		func_608(0, 0);
	}
	if (func_29(iLocal_27, 0))
	{
		func_626(iLocal_27, func_625(3, 4), 2, 1073741824);
	}
	if (func_29(iLocal_28, 0))
	{
		func_626(iLocal_28, func_625(3, 6), 2, 1073741824);
	}
	if (func_29(func_62(uParam0->f_2), 0))
	{
		if (PED::GET_MOUNT(func_62(uParam0->f_2)) != 0)
		{
			PED::_REMOVE_PED_FROM_MOUNT(func_62(uParam0->f_2), true, false);
		}
		func_626(func_62(uParam0->f_2), func_625(3, 7), 2, 1073741824);
	}
	if (!func_1393(1073741824))
	{
		return 0;
	}
	iLocal_15 = 1;
	iLocal_16 = 1;
	func_1394();
	func_922(&Local_195, 1);
	func_533(&(Local_195.f_6), 0);
	func_236(&(Local_195.f_3), 0);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	func_235(uParam0, func_234(0), func_234(1), 0, 1);
	return 1;
}

int func_1070(var uParam0)
{
	if (func_29(iLocal_27, 0) == 0)
	{
		Local_195.f_343 = 1;
		Local_195.f_343.f_1 = 0;
		iLocal_27 = func_652(&(Local_195.f_342), &(Local_195.f_343));
		return 0;
	}
	if (func_29(iLocal_28, 0) == 0)
	{
		if (func_29(func_62(uParam0->f_2), 0))
		{
			iLocal_28 = func_653(uParam0->f_2, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		return 0;
	}
	if (func_1392(func_532(0, 2)) == 0)
	{
		return 0;
	}
	if (func_29(iLocal_27, 0))
	{
		func_626(iLocal_27, func_625(0, 2), 2, 1073741824);
	}
	if (func_29(iLocal_28, 0))
	{
		func_626(iLocal_28, func_625(0, 3), 2, 1073741824);
	}
	if (func_29(Global_35, 0))
	{
		if (func_29(iLocal_27, 0))
		{
			PED::_SET_PED_ON_MOUNT(Global_35, iLocal_27, -1, true);
			func_608(0, 0);
		}
	}
	if (func_29(func_62(uParam0->f_2), 0))
	{
		if (func_29(iLocal_28, 0))
		{
			PED::_SET_PED_ON_MOUNT(func_62(uParam0->f_2), iLocal_28, -1, true);
		}
	}
	func_535(2);
	func_533(&(Local_195.f_6), 8);
	func_236(&(Local_195.f_3), 2);
	func_608(0, 0);
	func_536(&Local_195, 1);
	func_1394();
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	func_235(uParam0, func_234(1), func_234(2), 1, 2);
	return 1;
}

int func_1071(var uParam0)
{
	if (func_29(iLocal_27, 0) == 0)
	{
		Local_195.f_343 = 1;
		Local_195.f_343.f_1 = 0;
		iLocal_27 = func_652(&(Local_195.f_342), &(Local_195.f_343));
		return 0;
	}
	if (func_29(iLocal_28, 0) == 0)
	{
		if (func_29(func_62(uParam0->f_2), 0))
		{
			iLocal_28 = func_653(uParam0->f_2, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		return 0;
	}
	if (func_1392(func_532(1, 2)) == 0)
	{
		return 0;
	}
	if (func_29(Global_35, 0))
	{
		if (PED::GET_MOUNT(Global_35) != 0)
		{
			PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
		}
		func_637(Global_35, 1158.692f, -574.4988f, 76.6756f, 241.7831f, 2, 1073741824);
		func_608(0, 0);
	}
	if (func_29(func_62(uParam0->f_2), 0))
	{
		if (PED::GET_MOUNT(func_62(uParam0->f_2)) != 0)
		{
			PED::_REMOVE_PED_FROM_MOUNT(func_62(uParam0->f_2), true, false);
		}
		func_637(func_62(uParam0->f_2), 1159.571f, -576.0067f, 76.4621f, 266.946f, 2, 1073741824);
	}
	if (func_29(iLocal_27, 0))
	{
		func_626(iLocal_27, func_625(1, 0), 2, 1073741824);
	}
	if (func_29(iLocal_28, 0))
	{
		func_626(iLocal_28, func_625(1, 1), 2, 1073741824);
	}
	func_533(&(Local_195.f_6), 17);
	func_236(&(Local_195.f_3), 3);
	func_1394();
	func_922(&Local_195, 1);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	func_235(uParam0, func_234(2), func_234(3), 2, 3);
	return 1;
}

int func_1072(var uParam0)
{
	if (func_29(iLocal_27, 0) == 0)
	{
		Local_195.f_343 = 1;
		Local_195.f_343.f_1 = 0;
		iLocal_27 = func_652(&(Local_195.f_342), &(Local_195.f_343));
		return 0;
	}
	if (func_29(iLocal_28, 0) == 0)
	{
		if (func_29(func_62(uParam0->f_2), 0))
		{
			iLocal_28 = func_653(uParam0->f_2, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		return 0;
	}
	if (func_1392(func_532(1, 2)) == 0)
	{
		return 0;
	}
	if (func_29(Global_35, 0))
	{
		if (PED::GET_MOUNT(Global_35) != 0)
		{
			PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
		}
		func_626(Global_35, func_625(1, 2), 2, 1073741824);
		func_608(0, 0);
	}
	if (func_29(func_62(uParam0->f_2), 0))
	{
		if (PED::GET_MOUNT(func_62(uParam0->f_2)) != 0)
		{
			PED::_REMOVE_PED_FROM_MOUNT(func_62(uParam0->f_2), true, false);
		}
		func_626(func_62(uParam0->f_2), func_625(1, 3), 2, 1073741824);
	}
	if (func_29(iLocal_27, 0))
	{
		func_626(iLocal_27, func_625(1, 0), 2, 1073741824);
	}
	if (func_29(iLocal_28, 0))
	{
		func_626(iLocal_28, func_625(1, 1), 2, 1073741824);
	}
	func_591();
	func_592();
	func_549(&Local_195, 0);
	func_533(&(Local_195.f_6), 20);
	func_236(&(Local_195.f_3), 4);
	func_235(uParam0, func_234(3), func_234(4), 3, 4);
	func_1394();
	func_9(2);
	func_922(&Local_195, 1);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	return 1;
}

int func_1073(var uParam0)
{
	int iVar0;
	
	if (func_29(iLocal_27, 0) == 0)
	{
		Local_195.f_343 = 1;
		Local_195.f_343.f_1 = 0;
		iLocal_27 = func_652(&(Local_195.f_342), &(Local_195.f_343));
		return 0;
	}
	if (func_29(iLocal_28, 0) == 0)
	{
		if (func_29(func_62(uParam0->f_2), 0))
		{
			iLocal_28 = func_653(uParam0->f_2, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		return 0;
	}
	if (func_1392(func_532(1, 2)) == 0)
	{
		return 0;
	}
	if (func_29(Global_35, 0))
	{
		if (PED::GET_MOUNT(Global_35) != 0)
		{
			PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
		}
		func_626(Global_35, func_625(1, 4), 2, 1073741824);
		func_608(0, 0);
	}
	if (func_29(func_62(uParam0->f_2), 0))
	{
		if (PED::GET_MOUNT(func_62(uParam0->f_2)) != 0)
		{
			PED::_REMOVE_PED_FROM_MOUNT(func_62(uParam0->f_2), true, false);
		}
		func_626(func_62(uParam0->f_2), func_625(1, 5), 2, 1073741824);
		func_626(func_62(uParam0->f_2), func_625(1, 5), 0, 1073741824);
	}
	if (func_29(iLocal_27, 0))
	{
		func_626(iLocal_27, func_625(1, 0), 2, 1073741824);
	}
	if (func_29(iLocal_28, 0))
	{
		func_626(iLocal_28, func_625(1, 1), 2, 1073741824);
	}
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (iVar0 != -1415022764)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, -1415022764, true, 0, false, false);
		PED::_0x2208438012482A1A(Global_35, false, false);
	}
	WEAPON::GET_CURRENT_PED_WEAPON(func_62(uParam0->f_2), &iVar0, true, 0, false);
	if (iVar0 != -1415022764)
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(func_62(uParam0->f_2), -1415022764, 1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		PED::_0x2208438012482A1A(func_62(uParam0->f_2), false, false);
		func_609(1);
	}
	func_559(1);
	func_600(1);
	func_601(0);
	if (!func_171(-1753819339, 1, 0))
	{
		func_143(-1753819339, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
	}
	func_290(128);
	func_1395(0);
	TASK::_0x31BB338F64D5C861(Global_35, 0);
	TASK::_0x31BB338F64D5C861(func_62(uParam0->f_2), 0);
	func_63(0, 1);
	func_63(1, 0);
	func_560();
	func_68(&(Local_195.f_47));
	func_570(0);
	func_1394();
	func_537(1, 0);
	func_559(1);
	func_560();
	func_533(&(Local_195.f_6), 27);
	func_236(&(Local_195.f_3), 7);
	func_922(&Local_195, 1);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	func_235(uParam0, func_234(4), func_234(5), 4, 5);
	return 1;
}

int func_1074(var uParam0)
{
	int iVar0;
	
	if (func_29(iLocal_27, 0) == 0)
	{
		Local_195.f_343 = 1;
		Local_195.f_343.f_1 = 0;
		iLocal_27 = func_652(&(Local_195.f_342), &(Local_195.f_343));
		return 0;
	}
	if (func_29(iLocal_28, 0) == 0)
	{
		if (func_29(func_62(uParam0->f_2), 0))
		{
			iLocal_28 = func_653(uParam0->f_2, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		return 0;
	}
	if (func_1392(func_532(2, 0)) == 0)
	{
		return 0;
	}
	if (func_29(Global_35, 0))
	{
		if (PED::GET_MOUNT(Global_35) != 0)
		{
			PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
		}
		func_626(Global_35, func_625(1, 4), 2, 1073741824);
		func_608(0, 0);
	}
	if (func_29(func_62(uParam0->f_2), 0))
	{
		if (PED::GET_MOUNT(func_62(uParam0->f_2)) != 0)
		{
			PED::_REMOVE_PED_FROM_MOUNT(func_62(uParam0->f_2), true, false);
		}
		func_626(func_62(uParam0->f_2), func_625(1, 5), 2, 1073741824);
		func_626(func_62(uParam0->f_2), func_625(1, 5), 0, 1073741824);
	}
	if (func_29(iLocal_27, 0))
	{
		func_626(iLocal_27, func_625(1, 0), 2, 1073741824);
	}
	if (func_29(iLocal_28, 0))
	{
		func_626(iLocal_28, func_625(1, 1), 2, 1073741824);
	}
	func_533(&(Local_195.f_6), 29);
	func_236(&(Local_195.f_3), 9);
	func_537(1, 1);
	func_559(0);
	func_1394();
	if (!func_75(Local_195.f_94, 2))
	{
		func_221(&(Local_195.f_94), 2);
	}
	if (!func_75(Local_195.f_94, 4194304))
	{
		func_221(&(Local_195.f_94), 4194304);
	}
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (iVar0 != -1415022764)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, -1415022764, true, 0, false, false);
		PED::_0x2208438012482A1A(Global_35, false, false);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	func_235(uParam0, func_234(5), func_234(6), 5, 6);
	return 1;
}

int func_1075(var uParam0)
{
	func_632(&(uParam0->f_9), 256, 1);
	iLocal_35 = 25;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	return 1;
}

void func_1076(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_835(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_1396(1, bVar1, 1, sVar2);
		func_1397(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_1398(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_409();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_1398(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_1398(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_1077(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	
	if (func_120() == -1)
	{
		func_1399();
	}
	else
	{
		return;
	}
	func_1400();
	Global_40.f_9.f_14 = func_118();
	Global_40.f_9.f_20 = LAW::_0x54310AAB97B92816(PLAYER::GET_PLAYER_INDEX());
	Global_40.f_11999 = _NAMESPACE59::_0xB00CE33465B5406D(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1401())
		{
			func_199(Global_1310720->f_1);
		}
		else if (func_203() == func_200(Global_36, 1) && func_1402() != 2)
		{
			func_199(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_199(Global_36);
		}
		func_1403(Global_36, &vVar0, &uVar4);
		if (!func_1401())
		{
			if (func_926(vVar0, Global_36) < func_926(Global_40.f_9.f_7, Global_36))
			{
				func_199(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_200(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1403(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		MISC::OVERRIDE_SAVE_HOUSE(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_96(Global_1935630, 8192);
	}
	func_1404();
}

int func_1078(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;
	
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1405(uParam1, 128);
	if (func_811("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_812(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_465(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if (((WEAPON::_0xD955FEE4B87AFA07(Var4.f_4) && (!WEAPON::_0xC75386174ECE95D5(Var4.f_4) || func_1405(uParam1, 32))) && (!WEAPON::_0xDDC64F5E31EEDAB6(Var4.f_4) || !func_1405(uParam1, 8192))) && (!WEAPON::_0xC212F1D05A8232BB(Var4.f_4) || !func_1405(uParam1, 16384)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_813(iVar1);
	}
	if (func_465(iVar0))
	{
	}
	return iVar0;
}

void func_1079(int iParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

void func_1080(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
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
	iVar0 = func_1048(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
	{
		return;
	}
	if (func_1274(iParam0, 64))
	{
		func_1081(iParam0);
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
	uVar3 = func_372(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
		}
		if (iVar0 == PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) && uVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
			{
				((*Global_1900383)[iParam0 /*45*/])->f_27 = MAP::_0x23F74C2FDA6E7C61(-515518185, iVar0);
				MAP::SET_BLIP_SPRITE(((*Global_1900383)[iParam0 /*45*/])->f_27, -1327110633, true);
				func_1406(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
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
		func_1081(iParam0);
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
		if (func_1407(1) < 1)
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
		((*Global_1900383)[iParam0 /*45*/])->f_26 = MAP::_0x23F74C2FDA6E7C61(iVar5, iVar0);
		((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
		func_1408(&(((*Global_1900383)[iParam0 /*45*/])->f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1274(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_1409(iParam0);
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
	fVar15 = func_1410(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1411(iParam0))
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
		func_1412(((*Global_1900383)[iParam0 /*45*/])->f_26);
		func_1413(((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar17);
		if (iVar17 == -401963276)
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar18);
	}
	if ((PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) == iVar0 && uVar3) && !bVar9)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	else
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	if (func_1026(iVar0) && !bVar9)
	{
		if (iVar5 == -1925605092)
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar20);
	}
	else
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, 561559387);
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, -201249929);
	}
	iVar21 = func_1407(iParam0);
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

void func_1081(int iParam0)
{
	iParam0 = func_670(iParam0);
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

int func_1082(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!func_260(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if ((Global_1357549->f_1675[iVar1 /*5*/])->f_1 == iParam0)
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
				return &(Global_1357549->f_1675[iVar1 /*5*/]);
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (&Global_1357549->f_1675[iVar1 /*5*/] != 0 && (Global_1357549->f_1675[iVar1 /*5*/])->f_1 == -1)
		{
			iVar0 = &Global_1357549->f_1675[iVar1 /*5*/];
			Jump @165; //curOff = 150
		}
		iVar1++;
	}
	if (!func_260(iParam0))
	{
		if (iVar0 != 0)
		{
			(Global_1357549->f_1675[iVar1 /*5*/])->f_1 = iParam0;
			((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
		}
	}
	return iVar0;
}

int func_1083(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!func_260(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126))
	{
		iVar0 = func_674(iParam0, 1);
		iVar1 = _NAMESPACE48::_0xA00DF706C60173D1(iVar0);
		if ((Global_40.f_4942[iParam0 /*60*/])->f_7 != 0 && iVar1 != (Global_40.f_4942[iParam0 /*60*/])->f_7)
		{
			_NAMESPACE48::_0x8BC555034A5A5E8C(iVar0, (Global_40.f_4942[iParam0 /*60*/])->f_7);
		}
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = _NAMESPACE48::_0x4F76E3676583D951(iVar0);
		_NAMESPACE48::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_126);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

int func_1084(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -177936449;
		
		case 0:
			return -1758735922;
		
		case 6:
			return -680519380;
		
		case 3:
			return 263744889;
		
		case 7:
			return 351057032;
		
		case 4:
			return 1172283326;
		
		case 2:
			return -1046310682;
		
		case 5:
			return 652984488;
		
		case 8:
			return 1389665576;
		
		case 9:
			return -1066280913;
		
		case 13:
			return 1975793632;
		
		case 14:
			return -1887627202;
		
		case 15:
			return 1851096281;
		
		case 16:
			return 47402526;
		
		case 17:
			return 1762683397;
		
		case 18:
			return -1154551809;
		
		case 19:
			return -333682158;
		
		case 20:
			return 1465089966;
		
		case 21:
			return 511213393;
		
		case 22:
			return -1214580355;
		
		case 23:
			return -1397900723;
		
		case 10:
			return 541398842;
		
		case 24:
			return -1960060437;
		
		case 25:
			return 1634371177;
		
		case 26:
			return -1308114737;
		
		case 11:
			return 683250525;
		
		case 12:
			return -814958461;
	}
	return 0;
}

void func_1085(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_1414(iParam1);
	}
}

int func_1086(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return 0;
	}
	return 1;
}

bool func_1087()
{
	if (func_120() != -1)
	{
		return false;
	}
	return func_296(1) > 0;
}

void func_1088(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { *(Global_1898164->f_1[iParam0 /*5*/]) };
	*(Global_1898164->f_1[iParam0 /*5*/]) = { *(Global_1898164->f_1[iParam1 /*5*/]) };
	*(Global_1898164->f_1[iParam1 /*5*/]) = { Var0 };
}

int func_1089(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_1090(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 /*2*/]) };
		}
		iVar0 = (iVar0 - 1);
	}
	*(Global_1058888->f_40501.f_1[iParam0 /*2*/]) = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

void func_1091(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1092(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1093(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_6;
	}
	return -15;
}

int func_1094(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147332013:
			return 129;
		
		case -2137730706:
			return 13;
		
		case -2129915369:
			return 383;
		
		case -2122981486:
			return 179;
		
		case -2104294676:
			return 83;
		
		case -2098336883:
			return 145;
		
		case -2093351659:
			return 297;
		
		case -2093199573:
			return 185;
		
		case -2082302444:
			return 259;
		
		case -2075517304:
			return 393;
		
		case -2071373019:
			return 440;
		
		case -2063047758:
			return 190;
		
		case -2047114234:
			return 351;
		
		case -2041153728:
			return 277;
		
		case -2038346064:
			return 244;
		
		case -2033572567:
			return 92;
		
		case -2030965067:
			return 380;
		
		case -2023813568:
			return 125;
		
		case -2006082799:
			return 56;
		
		case -1994410205:
			return 499;
		
		case -1988547710:
			return 457;
		
		case -1981702243:
			return 96;
		
		case -1971110347:
			return 435;
		
		case -1955429862:
			return 387;
		
		case -1949364492:
			return 285;
		
		case -1943655584:
			return 460;
		
		case -1935893216:
			return 124;
		
		case -1934704933:
			return 423;
		
		case -1922834065:
			return 320;
		
		case -1917134080:
			return 309;
		
		case -1916588959:
			return 29;
		
		case -1897704131:
			return 225;
		
		case -1888506091:
			return 142;
		
		case -1885734028:
			return 110;
		
		case -1868521635:
			return 396;
		
		case -1866112883:
			return 257;
		
		case -1856459307:
			return 219;
		
		case -1837343824:
			return 496;
		
		case -1832590852:
			return 326;
		
		case -1827461037:
			return 233;
		
		case -1827211287:
			return 197;
		
		case -1827011525:
			return 98;
		
		case -1825730216:
			return 18;
		
		case -1818590041:
			return 246;
		
		case -1812183035:
			return 97;
		
		case -1805142260:
			return 273;
		
		case -1804466187:
			return 77;
		
		case -1802212639:
			return 10;
		
		case -1790474454:
			return 331;
		
		case -1771575988:
			return 16;
		
		case -1757085331:
			return 454;
		
		case -1738185394:
			return 411;
		
		case -1728071186:
			return 108;
		
		case -1719149624:
			return 131;
		
		case -1689239424:
			return 312;
		
		case -1675752723:
			return 249;
		
		case -1671819791:
			return 196;
		
		case -1667151809:
			return 139;
		
		case -1664107227:
			return 405;
		
		case -1648173738:
			return 22;
		
		case -1646431667:
			return 415;
		
		case -1633236438:
			return 426;
		
		case -1596446207:
			return 252;
		
		case -1584659518:
			return 210;
		
		case -1582252733:
			return 409;
		
		case -1565979762:
			return 507;
		
		case -1564254711:
			return 158;
		
		case -1557862414:
			return 88;
		
		case -1557856056:
			return 112;
		
		case -1548165899:
			return 422;
		
		case -1538781541:
			return 483;
		
		case -1526278254:
			return 338;
		
		case -1520159291:
			return 17;
		
		case -1512720465:
			return 413;
		
		case -1501120273:
			return 57;
		
		case -1486701482:
			return 437;
		
		case -1483924019:
			return 27;
		
		case -1482329777:
			return 369;
		
		case -1479860879:
			return 482;
		
		case -1466029365:
			return 223;
		
		case -1461741225:
			return 280;
		
		case -1426009748:
			return 119;
		
		case -1425653701:
			return 199;
		
		case -1417145007:
			return 472;
		
		case -1409307734:
			return 289;
		
		case -1408927269:
			return 21;
		
		case -1405475146:
			return 329;
		
		case -1396074730:
			return 427;
		
		case -1393633441:
			return 377;
		
		case -1383535454:
			return 135;
		
		case -1381943684:
			return 470;
		
		case -1377327596:
			return 205;
		
		case -1370062029:
			return 148;
		
		case -1355784201:
			return 311;
		
		case -1340559426:
			return 373;
		
		case -1333840726:
			return 236;
		
		case -1318290630:
			return 254;
		
		case -1316284753:
			return 114;
		
		case -1302664729:
			return 294;
		
		case -1299405763:
			return 206;
		
		case -1276847784:
			return 229;
		
		case -1238376790:
			return 445;
		
		case -1235200494:
			return 165;
		
		case -1233518925:
			return 318;
		
		case -1220678266:
			return 120;
		
		case -1211711936:
			return 26;
		
		case -1205318041:
			return 23;
		
		case -1202860612:
			return 327;
		
		case -1198456774:
			return 442;
		
		case -1190705999:
			return 9;
		
		case -1179993139:
			return 284;
		
		case -1171086122:
			return 41;
		
		case -1164176475:
			return 138;
		
		case -1152282847:
			return 33;
		
		case -1143028112:
			return 25;
		
		case -1117048125:
			return 238;
		
		case -1088604829:
			return 247;
		
		case -1077843421:
			return 324;
		
		case -1061998329:
			return 164;
		
		case -1061765120:
			return 169;
		
		case -1048889581:
			return 391;
		
		case -1045864225:
			return 510;
		
		case -1036305792:
			return 58;
		
		case -1032742879:
			return 61;
		
		case -1025265051:
			return 485;
		
		case -978287173:
			return 12;
		
		case -954047483:
			return 395;
		
		case -948342953:
			return 359;
		
		case -935212592:
			return 486;
		
		case -925475803:
			return 484;
		
		case -916887991:
			return 76;
		
		case -908082222:
			return 187;
		
		case -895048976:
			return 374;
		
		case -890266811:
			return 172;
		
		case -872824399:
			return 170;
		
		case -860304527:
			return 186;
		
		case -850999370:
			return 2;
		
		case -833577856:
			return 86;
		
		case -830432609:
			return 492;
		
		case -825056768:
			return 149;
		
		case -820146008:
			return 52;
		
		case -820014425:
			return 439;
		
		case -818926670:
			return 200;
		
		case -813365276:
			return 243;
		
		case -811804990:
			return 293;
		
		case -807742826:
			return 3;
		
		case -807680461:
			return 68;
		
		case -807112425:
			return 180;
		
		case -803062666:
			return 65;
		
		case -779264865:
			return 106;
		
		case -757336127:
			return 372;
		
		case -742985447:
			return 302;
		
		case -736212459:
			return 275;
		
		case -715535005:
			return 362;
		
		case -713369135:
			return 461;
		
		case -710247698:
			return 251;
		
		case -697342513:
			return 242;
		
		case -695655810:
			return 443;
		
		case -694047360:
			return 375;
		
		case -693094356:
			return 89;
		
		case -692943180:
			return 341;
		
		case -681593414:
			return 175;
		
		case -671103079:
			return 504;
		
		case -670201310:
			return 313;
		
		case -666548248:
			return 345;
		
		case -650501093:
			return 509;
		
		case -646454939:
			return 94;
		
		case -637873918:
			return 404;
		
		case -636774257:
			return 146;
		
		case -625309660:
			return 343;
		
		case -625171987:
			return 234;
		
		case -620369863:
			return 403;
		
		case -619139736:
			return 104;
		
		case -604891653:
			return 237;
		
		case -597010176:
			return 487;
		
		case -582523927:
			return 424;
		
		case -574426587:
			return 261;
		
		case -561040434:
			return 400;
		
		case -558867971:
			return 266;
		
		case -554271718:
			return 232;
		
		case -550689301:
			return 283;
		
		case -544885621:
			return 310;
		
		case -544096309:
			return 337;
		
		case -534913305:
			return 174;
		
		case -532430534:
			return 444;
		
		case -527348304:
			return 253;
		
		case -515663690:
			return 330;
		
		case -505205920:
			return 39;
		
		case -453449739:
			return 182;
		
		case -449489613:
			return 140;
		
		case -445710060:
			return 469;
		
		case -435161770:
			return 150;
		
		case -426458298:
			return 59;
		
		case -423162607:
			return 133;
		
		case -413943699:
			return 141;
		
		case -404697685:
			return 308;
		
		case -402973141:
			return 418;
		
		case -399703928:
			return 155;
		
		case -384358266:
			return 295;
		
		case -381477663:
			return 37;
		
		case -365550600:
			return 30;
		
		case -332258016:
			return 382;
		
		case -331451824:
			return 303;
		
		case -330340613:
			return 489;
		
		case -328226663:
			return 323;
		
		case -324786054:
			return 288;
		
		case -319093529:
			return 260;
		
		case -317452243:
			return 128;
		
		case -314300362:
			return 473;
		
		case -308211771:
			return 194;
		
		case -303175962:
			return 431;
		
		case -302690754:
			return 67;
		
		case -302574837:
			return 24;
		
		case -290258665:
			return 317;
		
		case -286479684:
			return 269;
		
		case -285172118:
			return 505;
		
		case -270246276:
			return 490;
		
		case -266920872:
			return 357;
		
		case -259827569:
			return 425;
		
		case -258855820:
			return 464;
		
		case -248683070:
			return 429;
		
		case -231638975:
			return 34;
		
		case -222982511:
			return 204;
		
		case -221923309:
			return 406;
		
		case -221398783:
			return 354;
		
		case -219249641:
			return 474;
		
		case -218211995:
			return 344;
		
		case -207368052:
			return 361;
		
		case -172442174:
			return 385;
		
		case -170673728:
			return 156;
		
		case -165538585:
			return 127;
		
		case -164763388:
			return 376;
		
		case -164125056:
			return 438;
		
		case -162152912:
			return 441;
		
		case -144509608:
			return 113;
		
		case -134086241:
			return 222;
		
		case -125979788:
			return 95;
		
		case -123719783:
			return 151;
		
		case -121904458:
			return 208;
		
		case -120359954:
			return 316;
		
		case -117389654:
			return 93;
		
		case -115054321:
			return 325;
		
		case -110297889:
			return 290;
		
		case -98209688:
			return 55;
		
		case -94582539:
			return 239;
		
		case -72799657:
			return 287;
		
		case -66788599:
			return 19;
		
		case -58963831:
			return 105;
		
		case -58291054:
			return 201;
		
		case -56411631:
			return 342;
		
		case -54575589:
			return 353;
		
		case -21372580:
			return 46;
		
		case -18183703:
			return 466;
		
		case -8269375:
			return 137;
		
		case 13460468:
			return 350;
		
		case 15906262:
			return 321;
		
		case 16938930:
			return 81;
		
		case 61425283:
			return 51;
		
		case 65871884:
			return 54;
		
		case 70047950:
			return 188;
		
		case 72162222:
			return 43;
		
		case 72854145:
			return 1;
		
		case 85572330:
			return 147;
		
		case 94814634:
			return 228;
		
		case 95619635:
			return 408;
		
		case 98434060:
			return 458;
		
		case 108841201:
			return 358;
		
		case 121222228:
			return 476;
		
		case 121466883:
			return 498;
		
		case 122725574:
			return 477;
		
		case 124507607:
			return 480;
		
		case 127002552:
			return 455;
		
		case 132239274:
			return 494;
		
		case 132287504:
			return 184;
		
		case 137433874:
			return 227;
		
		case 139790602:
			return 60;
		
		case 171363131:
			return 47;
		
		case 176656832:
			return 0;
		
		case 180573150:
			return 279;
		
		case 187832713:
			return 282;
		
		case 195634974:
			return 433;
		
		case 200640922:
			return 35;
		
		case 207369059:
			return 64;
		
		case 209896562:
			return 304;
		
		case 217189690:
			return 241;
		
		case 220165734:
			return 134;
		
		case 228261307:
			return 74;
		
		case 229393477:
			return 270;
		
		case 278608719:
			return 399;
		
		case 281905065:
			return 419;
		
		case 289706151:
			return 364;
		
		case 290238735:
			return 250;
		
		case 291150162:
			return 103;
		
		case 299577191:
			return 90;
		
		case 315283201:
			return 240;
		
		case 315850182:
			return 193;
		
		case 319124397:
			return 506;
		
		case 340819214:
			return 84;
		
		case 388356689:
			return 101;
		
		case 397857304:
			return 335;
		
		case 400034151:
			return 71;
		
		case 403634348:
			return 291;
		
		case 404260466:
			return 73;
		
		case 408875702:
			return 80;
		
		case 411591903:
			return 132;
		
		case 437096661:
			return 446;
		
		case 443165194:
			return 332;
		
		case 446631778:
			return 436;
		
		case 448165982:
			return 220;
		
		case 474959407:
			return 255;
		
		case 477580579:
			return 493;
		
		case 487107418:
			return 370;
		
		case 490619049:
			return 163;
		
		case 500323776:
			return 40;
		
		case 501194998:
			return 471;
		
		case 512067206:
			return 452;
		
		case 525567468:
			return 160;
		
		case 531203229:
			return 245;
		
		case 532176461:
			return 203;
		
		case 533929296:
			return 346;
		
		case 534386033:
			return 488;
		
		case 534766068:
			return 349;
		
		case 542655528:
			return 360;
		
		case 545240164:
			return 398;
		
		case 553023190:
			return 78;
		
		case 561912024:
			return 420;
		
		case 569547151:
			return 389;
		
		case 579829077:
			return 178;
		
		case 597768834:
			return 315;
		
		case 627421591:
			return 268;
		
		case 634843927:
			return 66;
		
		case 643583911:
			return 401;
		
		case 652625673:
			return 501;
		
		case 654830082:
			return 371;
		
		case 676394410:
			return 8;
		
		case 678897243:
			return 211;
		
		case 679257961:
			return 126;
		
		case 685466172:
			return 217;
		
		case 692218123:
			return 467;
		
		case 693884302:
			return 177;
		
		case 703663141:
			return 328;
		
		case 705436149:
			return 365;
		
		case 709886296:
			return 414;
		
		case 720937389:
			return 115;
		
		case 727456822:
			return 153;
		
		case 730196087:
			return 157;
		
		case 737744809:
			return 50;
		
		case 747937920:
			return 481;
		
		case 753501669:
			return 367;
		
		case 761196368:
			return 218;
		
		case 766757422:
			return 296;
		
		case 772151702:
			return 28;
		
		case 779383250:
			return 336;
		
		case 787526397:
			return 202;
		
		case 794696385:
			return 14;
		
		case 812866778:
			return 355;
		
		case 833697503:
			return 298;
		
		case 837366581:
			return 118;
		
		case 847641699:
			return 192;
		
		case 852724290:
			return 136;
		
		case 853563984:
			return 49;
		
		case 856952521:
			return 42;
		
		case 866755445:
			return 4;
		
		case 870594813:
			return 173;
		
		case 881844660:
			return 11;
		
		case 920901415:
			return 412;
		
		case 921753284:
			return 272;
		
		case 951007010:
			return 407;
		
		case 951777606:
			return 212;
		
		case 953460136:
			return 159;
		
		case 960236560:
			return 70;
		
		case 1004978630:
			return 333;
		
		case 1005520287:
			return 38;
		
		case 1019519723:
			return 256;
		
		case 1025198797:
			return 171;
		
		case 1046168872:
			return 456;
		
		case 1057391314:
			return 356;
		
		case 1059753202:
			return 198;
		
		case 1061621862:
			return 299;
		
		case 1073595144:
			return 417;
		
		case 1080053708:
			return 189;
		
		case 1086705486:
			return 265;
		
		case 1092859156:
			return 116;
		
		case 1098143971:
			return 305;
		
		case 1130474589:
			return 264;
		
		case 1132574871:
			return 402;
		
		case 1134064472:
			return 271;
		
		case 1138578991:
			return 286;
		
		case 1141344854:
			return 378;
		
		case 1150653348:
			return 392;
		
		case 1156064998:
			return 366;
		
		case 1157034909:
			return 451;
		
		case 1165920102:
			return 292;
		
		case 1166284695:
			return 363;
		
		case 1176031365:
			return 224;
		
		case 1176450045:
			return 87;
		
		case 1185998732:
			return 410;
		
		case 1188734721:
			return 214;
		
		case 1219566057:
			return 166;
		
		case 1234351222:
			return 463;
		
		case 1249990864:
			return 428;
		
		case 1264235360:
			return 450;
		
		case 1267596926:
			return 7;
		
		case 1267957796:
			return 32;
		
		case 1292421672:
			return 215;
		
		case 1296800590:
			return 107;
		
		case 1297331434:
			return 130;
		
		case 1300783988:
			return 45;
		
		case 1305416676:
			return 495;
		
		case 1314347520:
			return 122;
		
		case 1328264128:
			return 258;
		
		case 1330480767:
			return 102;
		
		case 1335382896:
			return 248;
		
		case 1338855384:
			return 152;
		
		case 1344816618:
			return 314;
		
		case 1344986053:
			return 168;
		
		case 1349313303:
			return 6;
		
		case 1354948947:
			return 300;
		
		case 1357649685:
			return 267;
		
		case 1358951864:
			return 368;
		
		case 1360004037:
			return 322;
		
		case 1365311568:
			return 85;
		
		case 1366067161:
			return 91;
		
		case 1402899606:
			return 195;
		
		case 1406459015:
			return 53;
		
		case 1410684624:
			return 181;
		
		case 1415827953:
			return 432;
		
		case 1425403638:
			return 479;
		
		case 1427678219:
			return 230;
		
		case 1437607594:
			return 306;
		
		case 1438982821:
			return 111;
		
		case 1441230304:
			return 502;
		
		case 1447433250:
			return 352;
		
		case 1448617333:
			return 99;
		
		case 1454698172:
			return 421;
		
		case 1456958671:
			return 397;
		
		case 1467569385:
			return 69;
		
		case 1469701481:
			return 394;
		
		case 1508162848:
			return 434;
		
		case 1522535287:
			return 48;
		
		case 1524405765:
			return 79;
		
		case 1534808110:
			return 301;
		
		case 1549419655:
			return 216;
		
		case 1566844391:
			return 63;
		
		case 1571380021:
			return 75;
		
		case 1578693170:
			return 144;
		
		case 1593516439:
			return 462;
		
		case 1618734891:
			return 339;
		
		case 1621135203:
			return 44;
		
		case 1623482561:
			return 503;
		
		case 1636680094:
			return 478;
		
		case 1647502903:
			return 20;
		
		case 1665139197:
			return 278;
		
		case 1674863702:
			return 281;
		
		case 1675028401:
			return 109;
		
		case 1685749736:
			return 334;
		
		case 1688887348:
			return 209;
		
		case 1699962800:
			return 263;
		
		case 1701503387:
			return 207;
		
		case 1707661169:
			return 167;
		
		case 1723031480:
			return 161;
		
		case 1731971171:
			return 262;
		
		case 1750892420:
			return 183;
		
		case 1756182884:
			return 162;
		
		case 1759111208:
			return 72;
		
		case 1769573516:
			return 468;
		
		case 1773135364:
			return 231;
		
		case 1777191912:
			return 340;
		
		case 1783253542:
			return 384;
		
		case 1784248599:
			return 143;
		
		case 1786449168:
			return 31;
		
		case 1791780428:
			return 117;
		
		case 1792418811:
			return 100;
		
		case 1796786552:
			return 379;
		
		case 1817180056:
			return 390;
		
		case 1819621703:
			return 276;
		
		case 1824331150:
			return 449;
		
		case 1852529797:
			return 307;
		
		case 1863892775:
			return 274;
		
		case 1874987418:
			return 191;
		
		case 1888528254:
			return 447;
		
		case 1889392998:
			return 508;
		
		case 1890596065:
			return 235;
		
		case 1899640864:
			return 388;
		
		case 1909655985:
			return 430;
		
		case 1914552023:
			return 176;
		
		case 1927460276:
			return 448;
		
		case 1935952956:
			return 475;
		
		case 1937922313:
			return 459;
		
		case 1945593927:
			return 62;
		
		case 1955664182:
			return 226;
		
		case 1964695690:
			return 491;
		
		case 1971155641:
			return 453;
		
		case 1974689262:
			return 500;
		
		case 1978339427:
			return 154;
		
		case 2011168490:
			return 123;
		
		case 2011368334:
			return 221;
		
		case 2016323151:
			return 36;
		
		case 2030928096:
			return 381;
		
		case 2033246305:
			return 82;
		
		case 2045192987:
			return 319;
		
		case 2045388447:
			return 121;
		
		case 2050878222:
			return 497;
		
		case 2057380366:
			return 348;
		
		case 2071287828:
			return 347;
		
		case 2080199877:
			return 213;
		
		case 2082303678:
			return 5;
		
		case 2091083291:
			return 15;
		
		case 2137967386:
			return 386;
		
		case 2143106360:
			return 416;
		
		case 2143139308:
			return 465;
		
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

void func_1095(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1415(bParam1);
	}
}

void func_1096(int iParam0)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-156028329, iParam0);
}

char* func_1097(int iParam0)
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

int func_1098(var uParam0)
{
	vector3 vVar0;
	
	if (!func_903(23, &vVar0))
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

int func_1099(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	var uVar5;
	
	if (!func_903(23, &Var0))
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

int func_1100(int iParam0)
{
	return iParam0;
}

int func_1101()
{
	int iVar0;
	
	iVar0 = func_721();
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

int func_1102(var uParam0)
{
	if (!func_350(*uParam0, 0))
	{
		return 0;
	}
	switch (*uParam0)
	{
		case -1073808995:
			*uParam0 = -1753819339;
			return 1;
		
		case 1903483453:
			*uParam0 = -1527293029;
			return 1;
		
		case -541584777:
			*uParam0 = 206762213;
			return 1;
		
		case 998010398:
			*uParam0 = -324053813;
			return 1;
		
		case -1424823393:
			*uParam0 = -885810591;
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_1103(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;
	
	if (!func_350(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_462(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_759((375 + iVar29), 1);
		if (func_760(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_761(iParam0, &Var6, iVar5);
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

int func_1104(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;
	
	if (!func_350(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_762(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_706(bParam6), &Var0, 0);
	return uVar4;
}

struct<14> func_1105(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1106(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_1107(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_706(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1108(var uParam0)
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

float func_1109(int iParam0)
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
			return func_1416(iParam0);
		
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
			return func_1416(iParam0);
		
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
			return func_1416(iParam0);
		
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

int func_1110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_372(18);
		
		case 2:
			return func_372(20);
		
		case 1:
			return func_372(19);
		
		default:
			break;
	}
	return 1;
}

int func_1111(int iParam0)
{
	return func_1417(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1112(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (func_120() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_372(31))
	{
		return;
	}
	iVar0 = func_1111(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1111(iParam0);
	if (func_1418(iParam0) && func_1419(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1420(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1421(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_149(func_1422(iParam0), 0);
					}
					func_1423(iParam0, iVar2, iVar3);
					func_1424(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_1113(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1114(int iParam0)
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

int func_1115()
{
	return func_1425(Global_40.f_12018);
}

int func_1116()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_742(iVar1);
		if (func_171(iVar2, 1, 0) || func_1122(func_1121(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1117()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1426(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1118()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1127(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1119()
{
	return COLLECTION::_0x3A65F4844913A047(2103522376, 0);
}

int func_1120(int iParam0)
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

int func_1121(int iParam0)
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

bool func_1122(var uParam0)
{
	return (Global_40.f_12018 && uParam0) != 0;
}

char* func_1123(int iParam0)
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

int func_1124(int iParam0)
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

int func_1125(int iParam0)
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

char* func_1126(int iParam0)
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

bool func_1127(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_1128(int iParam0)
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

char* func_1129(int iParam0)
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

int func_1130(int iParam0)
{
	if (func_1427(iParam0) && func_171(iParam0, 1, 0))
	{
		return 1;
	}
	else if (func_1428(iParam0) && func_1429(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1131(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

void func_1132(bool bParam0)
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

void func_1133(int iParam0)
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

void func_1134(bool bParam0)
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

void func_1135(bool bParam0)
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

void func_1136(bool bParam0)
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

void func_1137(bool bParam0)
{
	int iVar0;
	
	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_0x4CC5F2FC1332577F(iVar0);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(iVar0);
	}
}

void func_1138(bool bParam0)
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

void func_1139(bool bParam0)
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

int func_1140(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_450(iParam0, 1) /*3*/]);
}

void func_1141()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1526891582))
	{
		func_1430();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, true);
		func_377(-916314281);
		func_424(-916314281, 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, -916314281, true, 2, false, false);
		func_377(494733111);
		func_424(494733111, 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 494733111, true, 4, false, false);
	}
}

int func_1142(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_706(0);
	*uParam1 = { func_762(iParam0, func_870(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_1143(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_1144(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_1145(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

int func_1146(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_370(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_370(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_370(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_370(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_370(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_370(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

int func_1147(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_450(func_1431(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_374(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_1148(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == &Global_1946804->f_57[func_450(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_806(524288))
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

int func_1149(int iParam0)
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

int func_1150(var uParam0)
{
	return func_1432(uParam0, -1);
}

void func_1151(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1433((Global_40.f_4283.f_325 + iParam0));
}

void func_1152(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_891())
	{
		func_481(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_481(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_1153(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_1154(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_509(iParam0, 1);
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

void func_1155(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_509(iParam0, 1);
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

void func_1156()
{
	func_1155(-939420910);
	func_1155(-1187950766);
	func_1155(356365161);
	func_1155(753127042);
	func_1155(-2038424081);
	func_1155(1884271742);
	func_1155(459290420);
}

void func_1157()
{
	func_1155(704802028);
	func_1155(588987611);
	func_1155(2008888900);
	func_1155(1649996811);
	func_1155(227918160);
	func_1155(168171957);
	func_1155(1193080109);
	func_1155(-491981251);
	func_1155(-639037538);
	func_1155(-618620429);
}

bool func_1158(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1159(int iParam0)
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

void func_1160(var uParam0)
{
	Global_40.f_12018.f_43 = (Global_40.f_12018.f_43 || uParam0);
}

bool func_1161(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_1162()
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

void func_1163(int iParam0)
{
	func_1168(iParam0, 8, 6);
}

void func_1164(int iParam0)
{
	func_1434(&(Global_1946804->f_2589), iParam0);
}

void func_1165(int iParam0, int iParam1)
{
	func_1435(&(Global_1946804->f_2589), iParam0, iParam1);
}

int func_1166(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	
	uVar0 = func_1436(0);
	if (iParam2 != 0 && func_1437(iParam0, uVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_861(iParam0, func_875(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1167(var uParam0, bool bParam1, int iParam2)
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
	
	bVar6 = func_120() != -1;
	iVar7 = func_1436(0);
	if (func_806(32768))
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
			iVar5 = func_875(iVar0, 1);
			if (func_1228(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_1228(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_1148(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1438(uParam0);
				if (iVar3 > 0)
				{
					if (!func_806(524288))
					{
						func_867(524288);
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
							iVar5 = func_875(iVar0, 1);
							if (func_1228(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_1228(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_1148(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_1165(iVar0, iParam2);
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
					func_1171(524288);
				}
			}
		}
	}

void func_1168(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_450(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_450(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_450(iParam0, 1) /*11*/])->f_10 && iParam1));
}

void func_1169(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1439(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_120() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1440(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_1190(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_1190(Global_40.f_7729);
				Global_1946804->f_1378 = func_1190(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_1441(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_855(0, 1);
	}
}

void func_1170(var uParam0)
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

void func_1171(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1172(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1173(struct<4> Param0)
{
	int iVar0;
	int iVar1;
	
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1232(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_1232(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1233(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_867(8);
}

int func_1174()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_1175(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1176()
{
	float fVar0;
	int iVar1;
	
	fVar0 = func_1442(13);
	iVar1 = func_1443(fVar0);
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

float func_1177()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1178()
{
	if (func_162())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1179()
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

float func_1180()
{
	return Global_1955565->f_3;
}

void func_1181(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = func_1444(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), iParam2);
}

void func_1182(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;
	
	sVar0 = func_1444(iParam0, 2, 0, 0);
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

float func_1183(float fParam0, float fParam1, float fParam2)
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

bool func_1184()
{
	return func_1442(12) <= -99f;
}

bool func_1185()
{
	return func_1442(12) >= 99f;
}

int func_1186()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_374(iVar1) == -999503751)
		{
			if (func_1445() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_1187(int iParam0)
{
	if (!func_822(iParam0))
	{
		return 0;
	}
	if (func_1191(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_1188(int iParam0)
{
	if (!func_822(iParam0))
	{
		return 0;
	}
	if (func_1191(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_1189(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_822(iParam0))
	{
		return;
	}
	if (!func_1188(iParam0))
	{
		func_1193(iParam0, 2);
		if (bParam2)
		{
			if (!func_99(0, 0, 1))
			{
				func_191(1, 4);
			}
		}
		if ((!func_1192() && !bParam1) && !func_99(0, 0, 1))
		{
			func_490(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", func_1446(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1190(int iParam0)
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

bool func_1191(int iParam0, int iParam1)
{
	if (!func_822(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_1192()
{
	int iVar0;
	
	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_1193(int iParam0, int iParam1)
{
	if (!func_822(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_1194(int iParam0, bool bParam1)
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

void func_1195(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_1447(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_373(50);
			}
			else
			{
				func_373(48);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_373(51);
			}
			else
			{
				func_373(49);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				if (!func_1448(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_405();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_405();
			}
			break;
		
		case 3:
			func_373(24);
			if (bParam1)
			{
				if (!func_1448(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_405();
				}
			}
			break;
	}
}

void func_1196(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1449(0))
			{
				iVar0++;
			}
			if (func_1449(2))
			{
				iVar0++;
			}
			if (func_1449(4))
			{
				iVar0++;
			}
			if (!func_1450(16))
			{
				if (iVar0 == 1)
				{
					func_1451();
					func_149(456, 1);
					func_1452(16);
				}
			}
			if (!func_1450(32))
			{
				if (iVar0 >= 3)
				{
					func_1451();
					func_149(456, 1);
					func_1452(32);
				}
			}
			break;
		
		case 1:
		case 3:
		case 7:
			if (func_1449(1))
			{
				iVar0++;
			}
			if (func_1449(3))
			{
				iVar0++;
			}
			if (func_1449(7))
			{
				iVar0++;
			}
			if (!func_1450(1))
			{
				if (iVar0 == 1)
				{
					func_1453();
					func_149(457, 1);
					func_1452(1);
				}
			}
			if (!func_1450(2))
			{
				if (iVar0 >= 3)
				{
					func_1453();
					func_149(457, 1);
					func_1452(2);
				}
			}
			break;
		
		case 5:
		case 6:
		case 8:
			if (func_1449(5))
			{
				iVar0++;
			}
			if (func_1449(6))
			{
				iVar0++;
			}
			if (func_1449(8))
			{
				iVar0++;
			}
			if (!func_1450(4))
			{
				if (iVar0 == 1)
				{
					func_1454();
					func_149(455, 1);
					func_1452(4);
				}
			}
			if (!func_1450(8))
			{
				if (iVar0 >= 3)
				{
					func_1454();
					func_149(455, 1);
					func_1452(8);
				}
			}
			break;
	}
}

void func_1197(var uParam0)
{
	func_828(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_828(uParam0, 617531372);
	}
	else
	{
		func_828(uParam0, 291123060);
	}
}

void func_1198(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;
	
	if (!func_1455(uParam0))
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

int func_1199(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_1200(int iParam0, int iParam1, var uParam2, var uParam3)
{
	struct<37> Var0;
	int iVar47;
	
	*uParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_350(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	*uParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return 1;
}

void func_1201(int iParam0)
{
	int iVar0[15];
	int iVar16;
	bool bVar17;
	var uVar18[15];
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	var uVar39;
	bool bVar40;
	
	func_446(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_1456(iParam0, &uVar18);
	func_1457(iParam0, &uVar18, &iVar34, 1);
	if (func_452() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_1458(iParam0, &(Global_26795.f_627.f_121.f_20));
	func_448(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_446(&(uVar18[iVar36]), 1, 1, -142743235, 1);
		switch (func_374(&(uVar18[iVar36])))
		{
			case -2061583405:
				func_1458(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_21));
				break;
			
			case 81053684:
				func_1458(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_23));
				break;
			
			case -525676072:
				func_1458(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_22));
				break;
			
			case -1719060085:
				func_1458(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_24));
				break;
			
			case -413129408:
				func_1458(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_25));
				break;
		}
		func_448(&(uVar18[iVar36]), 1, 1);
		iVar0[iVar36] = func_450(func_449(&(uVar18[iVar36])), 1);
		iVar36++;
	}
	func_1459(&(Global_1946804->f_1616));
	func_453(&(Global_1946804->f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { func_454(8, 0) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { func_454(9, 0) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { func_454(0, 0) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { func_454(2, 0) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { func_454(3, 0) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { func_454(1, 0) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { func_454(5, 0) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { func_454(6, 0) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { func_454(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (&uVar18[iVar36] == func_455(&(iVar0[iVar36]), iVar35))
			{
				func_448(func_1460(iVar35), 1, 1);
				func_1461(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_1226(Global_1946804->f_1616.f_1[iVar37 /*3*/], 2))
						{
						}
						else
						{
							func_456(Global_1946804->f_1616.f_1[iVar37 /*3*/], iVar37, 0);
							*(Global_1946804->f_1497.f_1[iVar37 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar37 /*3*/]) };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (&uVar18[iVar36] == &Global_1946804->f_1497.f_1[&iVar0[iVar36] /*3*/])
		{
			iVar16 = 1;
		}
		else
		{
			iVar36++;
		}
	}
	if ((iVar16 || bVar17) || Global_40.f_7729 == func_821(iParam0))
	{
		if (!func_1462(8))
		{
			if (func_452() == -2125499975)
			{
				if (bVar17)
				{
					func_453(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
					Global_1946804->f_1616 = 166243423;
					func_1463(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1464(2, 0, 6);
					}
				}
				if (iVar16 || Global_40.f_7729 == func_821(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_453(&(Global_1946804->f_1616), -361635024, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804->f_1616 = 166243423;
					func_1463(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1464(2, 0, 6);
					}
				}
				if (iVar16 || Global_40.f_7729 == func_821(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (iVar16 || Global_40.f_7729 == func_821(iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					func_1465(Global_40.f_7729, 4096);
					func_1193(&Global_1905941, 4096);
					Global_40.f_7729 = &Global_1905941;
				}
				else
				{
					func_1466(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (&uVar18[iVar36] == &Global_26795.f_627.f_1.f_1.f_1[&iVar0[iVar36] /*3*/])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	func_453(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
	func_453(&(Global_1946804->f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[8 /*3*/]) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[9 /*3*/]) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[0 /*3*/]) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[2 /*3*/]) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[3 /*3*/]) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[1 /*3*/]) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[5 /*3*/]) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[6 /*3*/]) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[7 /*3*/]) };
	Global_26795.f_627 = Global_1946804->f_1616;
	Global_26795.f_627.f_1.f_1 = Global_1946804->f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		*(Global_26795.f_627.f_1.f_1.f_1[iVar36 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar36 /*3*/]) };
		iVar36++;
	}
}

struct<4> func_1202()
{
	struct<4> Var0;
	
	Var0 = { func_869(0) };
	return func_762(856287005, Var0, -218846335, 0);
}

int func_1203(int iParam0, struct<4> Param1)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	var uVar7;
	int iVar11;
	struct<5> Var12;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_350(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1104(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1467(&uVar7);
					if (func_763(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1204(var uParam0)
{
	return uParam0->f_1;
}

void func_1205(var uParam0)
{
	func_1468(uParam0);
	func_1470(uParam0, func_1469(-1346384396));
	func_1471(uParam0, func_1469(-712836614));
	func_1472(uParam0, func_1469(-1629133289));
	func_1473(uParam0, func_1469(1302066700));
	func_1474(uParam0, func_1469(599669344));
	func_1475(uParam0, func_1469(-1555511632));
}

void func_1206(struct<6> Param0)
{
	if (!func_1476(Param0.f_4, 1))
	{
	}
	if (!func_1476(Param0, 1))
	{
	}
	if (!func_1476(Param0.f_2, 1))
	{
	}
	if (!func_1476(Param0.f_5, 1))
	{
	}
	if (!func_1476(Param0.f_3, 1))
	{
	}
	if (!func_1476(Param0.f_1, 1))
	{
	}
}

int func_1207(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_348())
	{
		if (func_129())
		{
			bVar0 = false;
			if (!func_151(((*Global_1835011)[15 /*74*/])->f_1, 1) && !func_372(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_1477();
				*iParam1 = func_1478();
				*iParam2 = func_1479();
				return 1;
			}
			else
			{
				*iParam0 = func_1480();
				*iParam1 = func_1481();
				*iParam2 = func_1482();
				return 1;
			}
		}
		else if (func_723())
		{
			if (!func_151(((*Global_1835011)[60 /*74*/])->f_1, 1))
			{
				*iParam0 = func_1483();
				*iParam1 = func_1484();
				*iParam2 = func_1485();
				return 1;
			}
			else
			{
				*iParam0 = func_1486();
				*iParam1 = func_1487();
				*iParam2 = func_1488();
				return 1;
			}
		}
	}
	else if (func_129())
	{
		*iParam0 = func_1489();
		*iParam1 = func_1490();
		*iParam2 = func_1491();
		return 1;
	}
	else if (func_723())
	{
		*iParam0 = func_1492();
		*iParam1 = func_1493();
		*iParam2 = func_1494();
		return 1;
	}
	return 0;
}

void func_1208(int iParam0, int iParam1)
{
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_8 = iParam1;
}

void func_1209(int iParam0, int iParam1)
{
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_9 = iParam1;
}

void func_1210(int iParam0, int iParam1)
{
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_10 = iParam1;
}

void func_1211(int iParam0, int iParam1)
{
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_434 = iParam1;
}

int func_1212(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = func_1495(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_869(0) };
	if (func_1496(&Var1, iVar0, 0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_1213(int iParam0)
{
	struct<10> Var0;
	struct<5> Var29;
	
	Var0.f_9 = -1591664384;
	if (!func_1497(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_763(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1214(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return 559905966;
	}
	switch (iParam0)
	{
		case -450053710:
			return 1538827865;
		
		case -1679658797:
			return -1792561227;
		
		case 1792770814:
			return 1033678910;
		
		case -1963397600:
			return -1942141178;
		
		case -1250098797:
			return 671599957;
		
		case -318278790:
			return -1554935503;
		
		case 55096099:
			return 694610769;
		
		case -458397856:
			return 1941463607;
		
		case -444610976:
			return -887316537;
		
		case 746627200:
			return 1762474047;
		
		case 705691988:
			return -828859553;
		
		case 2130094044:
			return 1410237043;
		
		case -1554827654:
			return -2026073756;
		
		case 604357666:
			return 729407854;
		
		case -1029277326:
			return 2002245664;
		
		case -1140650619:
			return -1120227140;
		
		case -1999198818:
			return 1142681594;
		
		case 1496579364:
			return 1214981718;
		
		case -1523757120:
			return -845373950;
		
		case -403470324:
			return -864588185;
		
		case 1576849913:
			return 1482814085;
		
		case -925223936:
			return -1040918754;
		
		case -1547438906:
			return 535545841;
		
		case -635239558:
			return 1686036388;
		
		case -2026265047:
			return -621245377;
		
		case -586898625:
			return 2125477381;
		
		case 937246805:
			return 1808724704;
		
		case 1593035738:
			return -1745871311;
		
		case 861505058:
			return -1366099125;
		
		case 687445866:
			return -1900776854;
		
		case 1705182311:
			return 1381855825;
		
		case -78273782:
			return -470894301;
		
		case -819697512:
			return -58297715;
		
		case -247265944:
			return 919533729;
		
		case -1516219602:
			return -1158763155;
		
		case -1265030920:
			return 1112812928;
		
		case 2024948086:
			return 753764318;
		
		case 1696286663:
			return 2100045093;
		
		case -1342159303:
			return 1097965086;
		
		case -1154406788:
			return -2136667309;
		
		case 2030804811:
			return -376463594;
		
		case 1230359523:
			return -1917318030;
		
		case -1038436471:
			return 1631640006;
		
		case -1063137731:
			return -1565311117;
		
		case 96930969:
			return 1714576673;
		
		case -1180427609:
			return 210760725;
		
		case 2119038574:
			return 2051021144;
		
		case 43825738:
			return 1924406350;
		
		case 2145697477:
			return -1990143531;
		
		case -1261814606:
			return 1741899492;
		
		case 107013696:
			return -1629575335;
		
		case 1066034872:
			return 1096294193;
		
		case 36009259:
			return -1162498792;
		
		case -1599683008:
			return -212500005;
		
		case -1693870200:
			return -538557079;
		
		case 1072019803:
			return 171150858;
		
		case 1074477367:
			return 67538819;
		
		case -85890205:
			return -126472599;
		
		case 1048964673:
			return -1219957736;
		
		case -727455979:
			return -332060056;
		
		case -1667789645:
			return 1917500091;
		
		case -1924405794:
			return -1043453945;
		
		case 1861665605:
			return 1723487083;
		
		case -526169133:
			return 2044230644;
		
		case 900144280:
			return 1680713143;
		
		case 1133837220:
			return 344528703;
		
		case 1702024301:
			return -1674873797;
		
		case -1604180548:
			return 281852151;
		
		case 1772321403:
			return -285185056;
		
		case -1028075925:
			return -1692268955;
		
		case 84224102:
			return 2130706226;
		
		case -1896838685:
			return -1754375530;
		
		case -420599285:
			return -71211764;
		
		case 478986344:
			return -1390353518;
		
		case 446670976:
			return 330935532;
		
		case 802784330:
			return -935042458;
		
		case 549900435:
			return -41062704;
		
		case -2063289686:
			return 887669186;
		
		case 917402668:
			return 2102774612;
		
		case -914712122:
			return -2011111190;
		
		case -598917269:
			return -535752499;
		
		default:
			break;
	}
	return 0;
}

int func_1215(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;
	
	if (!func_350(iParam1, 0))
	{
		return 0;
	}
	if (!func_1498(iParam1))
	{
		return 0;
	}
	if (func_1212(iParam0))
	{
		return 0;
	}
	iVar0 = func_1495(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_869(0) };
	Var1.f_4 = iVar0;
	if (!func_819(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

int func_1216(int iParam0, struct<4> Param1, bool bParam5)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	struct<4> Var7;
	int iVar11;
	struct<5> Var12;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_350(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1104(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1467(&Var7);
					if (func_819(Var3, &Var7, &Var12, 1, 752097756, 0))
					{
						if (bParam5)
						{
							func_1219(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_1217(int iParam0)
{
	struct<2> Var0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1236(1) < iParam0)
	{
		iParam0 = func_1236(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_124(1644987397) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

int func_1218(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;
	
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_706(bParam6), &uParam0, uParam4, &Var0))
	{
		return 0;
	}
	if (!func_874(Var0, uParam5, bParam6, 0))
	{
		return 0;
	}
	return 1;
}

int func_1219(struct<4> Param0, int iParam4)
{
	struct<11> Var0;
	
	if (!func_378(0))
	{
		return func_1499(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_874(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_706(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1220(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	
	if (func_1143(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	if (!func_378(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_706(bParam4), iParam0, iParam1, uParam2))
	{
		return 0;
	}
	return 1;
}

void func_1221(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = 0;
	if (func_120() == -1)
	{
		if (func_360(43))
		{
			if (func_370(iParam0, 412399755))
			{
				func_789(-1791518714);
				if (func_790() == 0)
				{
					func_191(0, 10);
					sVar0 = func_1500(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_792(iParam0) < func_793(iParam0))
						{
							func_366(43, iParam0, iParam1, -1791518714, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_360(44))
		{
			if (func_370(iParam0, 709057512))
			{
				func_789(-2087881550);
				if (func_790() == 1)
				{
					func_191(0, 10);
					sVar0 = func_1500(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_792(iParam0) < func_793(iParam0))
						{
							func_366(43, iParam0, iParam1, -2087881550, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_360(45))
		{
			if (func_370(iParam0, -1478961327))
			{
				func_789(1908068621);
				if (func_790() == 2)
				{
					func_191(0, 10);
					sVar0 = func_1500(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_792(iParam0) < func_793(iParam0))
						{
							func_366(43, iParam0, iParam1, 1908068621, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_360(46))
		{
			if (func_370(iParam0, -1238404098))
			{
				func_789(1611247019);
				if (func_790() == 3)
				{
					func_191(0, 10);
					sVar0 = func_1500(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_792(iParam0) < func_793(iParam0))
						{
							func_366(43, iParam0, iParam1, 1611247019, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_360(47))
		{
			if (func_370(iParam0, 1160548794))
			{
				func_789(1319635688);
				if (func_790() == 4)
				{
					func_191(0, 10);
					sVar0 = func_1500(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_792(iParam0) < func_793(iParam0))
						{
							func_366(43, iParam0, iParam1, 1319635688, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

int func_1222(int iParam0, var uParam1)
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

void func_1223(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_1501(iParam1);
	func_1502(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1503(&(uParam0->f_26), iVar1);
		if (func_1504(uParam0->f_26, &iVar0))
		{
			func_1505(iVar0, iVar1);
		}
	}
}

int func_1224(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	
	Var0 = { func_462(iParam0, 0, 0) };
	Var5 = { func_762(iParam0, Var0, Var0.f_4, 0) };
	if (func_1104(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_706(0), &Var5, iParam1);
	return 1;
}

void func_1225(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_1226(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_1227(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

bool func_1228(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_450(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

void func_1229(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_450(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_450(iParam0, 1) /*11*/])->f_10 || iParam1);
}

void func_1230(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

void func_1231(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_1165(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1165(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == -1158926300)
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = 1155669136;
		if (bParam3)
		{
			func_1165(iVar2, iVar0);
		}
	}
}

bool func_1232(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1233(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

struct<4> func_1234()
{
	struct<4> Var0;
	
	return Var0;
}

int func_1235(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<37> Var0;
	int iVar47;
	
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_350(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam5)
		{
		}
		return 0;
	}
	if (!bParam5)
	{
	}
	*iParam3 = Var0.f_3;
	iVar47 = 0;
	while (iVar47 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*((*uParam2)[iVar47 /*2*/]) = { *(Var0.f_4[iVar47 /*2*/]) };
		iVar47++;
	}
	if (bParam4)
	{
		func_1506(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

int func_1236(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

char* func_1237(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEADSHOT_DUTCH";
		
		case 1:
			return "HEADSHOT_JOHN";
		
		case 2:
			return "HEADSHOT_JAVIER";
		
		case 3:
			return "HEADSHOT_BILL";
		
		case 4:
			return "HEADSHOT_UNCLE";
		
		case 5:
			return "HEADSHOT_HOSEA";
		
		case 6:
			return "HEADSHOT_MICAH";
		
		case 7:
			return "HEADSHOT_CHARLES";
		
		case 8:
			return "HEADSHOT_SEAN";
		
		case 9:
			return "HEADSHOT_LENNY";
		
		case 10:
			return "HEADSHOT_KIERAN";
		
		case 11:
			return "HEADSHOT_SADIE";
		
		case 13:
			return "HEADSHOT_ABIGAIL";
		
		case 14:
			return "HEADSHOT_JACK";
		
		case 15:
			return "HEADSHOT_MARYBETH";
		
		case 16:
			return "HEADSHOT_MOLLY";
		
		case 17:
			return "HEADSHOT_PEARSON";
		
		case 18:
			return "HEADSHOT_STRAUSS";
		
		case 19:
			return "HEADSHOT_SUSAN";
		
		case 20:
			return "HEADSHOT_KAREN";
		
		case 21:
			return "HEADSHOT_SWANSON";
		
		case 22:
			return "HEADSHOT_TILLY";
		
		case 23:
			return "HEADSHOT_TRELAWNY";
		
		case 24:
			return "HEADSHOT_CLEET";
		
		case 25:
			return "HEADSHOT_JOE";
		
		default:
			break;
	}
	return "";
}

bool func_1238(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_151(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

bool func_1239(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1240(int iParam0)
{
	if (!func_504(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_3;
}

int func_1241(int iParam0)
{
	int iVar0;
	
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1897952)[iParam0 /*2*/])->f_1))
	{
		return ((*Global_1897952)[iParam0 /*2*/])->f_1;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BAYOU_NWA");
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, -2050f, 150f, 0f, 0f, 18f, 575f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2485f, -1497.5f, 150f, 0f, 0f, 20f, 725f, 1050f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2060f, -1812.5f, 150f, 0f, 0f, 20f, 315f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1975f, -1452.5f, 150f, 0f, 0f, -43f, 200f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -1277.5f, 150f, 0f, 0f, -7f, 100f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -925f, 150f, 0f, 0f, 20f, 865f, 365f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2200f, -2440f, 150f, 0f, 0f, 0f, 500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1762.5f, -737.5f, 150f, 0f, 0f, 20f, 500f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2020.944f, -580.694f, 150f, 0f, 0f, -111f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2116.078f, -612.5f, 150f, 0f, 0f, -1f, 240f, 540f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2197.5f, -693.982f, 150f, 0f, 0f, -111f, 200f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2527.5f, -785f, 150f, 0f, 0f, -80f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3550f, -1455f, 150f, 0f, 0f, 0f, 1800f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2687.5f, -757.5f, 150f, 0f, 0f, -80f, 400f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2826.796f, -755f, 150f, 0f, 0f, 0f, 282.646f, 400f, 700f);
			break;
		
		case 1:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BIG_VALLEY");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1605f, -382.5f, 150f, 0f, 0f, 25f, 1100f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2035f, -810f, 150f, 0f, 0f, -65f, 400f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1887.5f, -1050f, 150f, 0f, 0f, -45f, 210f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -625f, 150f, 0f, 0f, -65f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2827.5f, -82.5f, 150f, 0f, 0f, 167f, 1500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -930f, -730f, 150f, 0f, 0f, 0f, 600f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -825f, -780f, 150f, 0f, 0f, -45f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -632.5f, -902.5f, 150f, 0f, 0f, -20f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -820f, -170f, 150f, 0f, 0f, 37.5f, 500f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -835f, -525f, 150f, 0f, 0f, 41f, 200f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -532.5f, -32.5f, 150f, 0f, 0f, -27f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -605f, 50f, 150f, 0f, 0f, -75f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -540f, 50f, 150f, 0f, 0f, -140f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1127.5f, -90f, 150f, 0f, 0f, -32.5f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1500f, 392.5f, 150f, 0f, 0f, 160f, 700f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1477.5f, 552.5f, 150f, 0f, 0f, 143f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1656.969f, 378.098f, 150f, 0f, 0f, 122f, 795f, 1083f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2617.969f, 452.097f, 150f, 0f, 0f, 167f, 1763f, 1500f, 700f);
			break;
		
		case 2:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BLUEGILL_MARSH");
			VOLUME::_0x39816F6F94F385AD(iVar0, 3585f, -280f, 150f, 0f, 0f, 0f, 1800f, 550f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3085f, -337.5f, 150f, 0f, 0f, -80.5f, 300f, 1500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2440f, -465f, 150f, 0f, 0f, -1f, 400f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2322.5f, -537.5f, 150f, 0f, 0f, -111f, 100f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3100f, 125f, 150f, 0f, 0f, 41f, 1700f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3670f, 80f, 150f, 0f, 0f, 41f, 1400f, 475f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2332.651f, -365.338f, 150f, 0f, 0f, 86f, 150f, 140f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2124.824f, -347.118f, 150f, 0f, 0f, 86f, 140f, 291f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3726.431f, -755f, 150f, 0f, 0f, 0f, 1518.809f, 400f, 700f);
			break;
		
		case 3:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CUMBERLAND_FOREST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190.4736f, 1214.829f, 200f, 0f, 0f, 59f, 488.2586f, 443.9291f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 695f, 1075f, 200f, 0f, 0f, 35f, 250f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -11.22244f, 1259.539f, 200f, 0f, 0f, 0f, 135f, 340.8336f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 667.5f, 1675f, 200f, 0f, 0f, 15f, 150f, 325f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 627.5f, 1255f, 200f, 0f, 0f, 9.999999f, 400f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 507.5f, 1532.5f, 200f, 0f, 0f, -45f, 300f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 72.5f, 1297.5f, 200f, 0f, 0f, 50f, 400f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 615f, 1750f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 510f, 1025f, 200f, 0f, 0f, 1f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 330.2712f, 1028.66f, 200f, 0f, 0f, 82f, 300f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 224.7084f, 1010.634f, 200f, 0f, 0f, 58.85596f, 175f, 267.2676f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 153.0846f, 1314.722f, 200f, 0f, 0f, -23f, 400f, 409.2231f, 800f);
			Jump @9445; //curOff = 2480
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GREAT_PLAINS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1285f, -1725f, 150f, 0f, 0f, 20f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1360f, -1540f, 150f, 0f, 0f, 30f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1492.5f, -1262.5f, 150f, 0f, 0f, 15f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1410f, -1147.5f, 150f, 0f, 0f, 25f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1125f, 150f, 0f, 0f, -20f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1725f, 150f, 0f, 0f, 0f, 800f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1300f, -1917.5f, 150f, 0f, 0f, -42f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1180f, -2122.5f, 150f, 0f, 0f, 20f, 300f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -955f, -1065f, 150f, 0f, 0f, -45f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1052.5f, -990f, 150f, 0f, 0f, 1.25f, 200f, 200f, 700f);
			Jump @9445; //curOff = 2919
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_WEST");
			VOLUME::_0x39816F6F94F385AD(iVar0, -100f, 1557.5f, 200f, 0f, 0f, 50f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1660f, 200f, 0f, 0f, 0f, 135f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1952.5f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -752.5f, 2135f, 200f, 0f, 0f, 0f, 1050f, 1975f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2139.972f, 1966.829f, 200f, 0f, 0f, 165f, 1814.271f, 1288f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1295f, 1090f, 200f, 0f, 0f, 122f, 1200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1080f, 1132.5f, 200f, 0f, 0f, 105f, 1200f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -895f, 1150f, 200f, 0f, 0f, 45f, 800f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -845f, 720f, 200f, 0f, 0f, 0f, 200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1015f, 560f, 200f, 0f, 0f, 143f, 75f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1940f, 3145f, 200f, 0f, 0f, 0f, 1400f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -757.5f, 3625f, 200f, 0f, 0f, 0f, 975f, 1050f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -187.5f, 3210f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2315.88f, 1498.498f, 150f, 0f, 0f, 167f, 1655f, 587f, 700f);
			Jump @9445; //curOff = 3514
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_EAST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190f, 1630f, 200f, 0f, 0f, -23f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 715f, 3145f, 200f, 0f, 0f, 0f, 1200f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1210f, 1212.5f, 200f, 0f, 0f, -14f, 585f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1510f, 1445f, 200f, 0f, 0f, 16f, 450f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1935f, 1040f, 200f, 0f, 0f, 12f, 200f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 1030f, 200f, 0f, 0f, -14f, 100f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1495f, 1425f, 200f, 0f, 0f, -9f, 1200f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1050f, 1430f, 200f, 0f, 0f, 10f, 500f, 700f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, 1630f, 200f, 0f, 0f, 118f, 200f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1400f, 2500f, 200f, 0f, 0f, -47f, 2000f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 2707.5f, 200f, 0f, 0f, -19f, 1500f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2175f, 3557.5f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1040f, 2120f, 200f, 0f, 0f, 15f, 800f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 410f, 2112.5f, 200f, 0f, 0f, -93f, 500f, 600f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 307.5f, 1722.5f, 200f, 0f, 0f, -45f, 250f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 472.5f, 1880f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 135f, 2000f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 217.5f, 3245f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			Jump @9445; //curOff = 4297
			if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1897952)[6 /*2*/])->f_1) && VOLUME::_0x92A78D0BEDB332A3(((*Global_1897952)[7 /*2*/])->f_1))
			{
				iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES");
				VOLUME::_0x6E0D3C3F828DA773(iVar0, ((*Global_1897952)[6 /*2*/])->f_1);
				VOLUME::_0x6E0D3C3F828DA773(iVar0, ((*Global_1897952)[7 /*2*/])->f_1);
			}
			else
			{
				return 0;
			}
			Jump @9445; //curOff = 4381
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			Jump @9445; //curOff = 4472
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HEARTLAND");
			VOLUME::_0x39816F6F94F385AD(iVar0, -357.5f, -120f, 200f, 0f, 0f, -27f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -385f, 180f, 200f, 0f, 0f, -140f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -600f, 280f, 200f, 0f, 0f, -75f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 165f, 165f, 200f, 0f, 0f, 0f, 1100f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -465f, -340f, 200f, 0f, 0f, 37.5f, 500f, 275f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -37.5f, -525f, 200f, 0f, 0f, 0f, 1125f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 670f, -315f, 200f, 0f, 0f, -42f, 365f, 817f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 860f, 487.5f, 200f, 0f, 0f, 35f, 650f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 512.5f, 800f, 200f, 0f, 0f, 1f, 300f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1230f, 695f, 200f, 0f, 0f, -14f, 875f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1560f, 835f, 200f, 0f, 0f, 16f, 450f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1727.5f, 702.5f, 200f, 0f, 0f, -14f, 100f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 964.14f, 59.521f, 200f, 0f, 0f, -71.00001f, 415f, 725f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1485f, 322.5f, 200f, 0f, 0f, -84f, 650f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1630f, 100f, 200f, 0f, 0f, -111f, 435f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1752.5f, 302.5f, 200f, 0f, 0f, -47f, 275f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 103.6867f, 807.6879f, 200f, 0f, 0f, 58.7951f, 295.0871f, 709.0376f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 302.139f, 780.344f, 200f, 0f, 0f, 82f, 200f, 157.492f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -847.5f, 240f, 200f, 0f, 0f, 33f, 797f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -975f, 280f, 200f, 0f, 0f, 142f, 329f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -245.4394f, 1000f, 200f, 0f, 0f, 0f, 333.3127f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -760f, 440f, 200f, 0f, 0f, 105f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -520f, 507.5f, 200f, 0f, 0f, 0f, 450f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -495f, 822.5f, 200f, 0f, 0f, 45f, 500f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -140f, 705f, 200f, 0f, 0f, 59f, 250f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -327.5f, 1080f, 200f, 0f, 0f, 45f, 100f, 100f, 800f);
			Jump @9445; //curOff = 5583
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_ROANOKE_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1838.526f, 72.693f, 200f, 0f, 0f, -111f, 525f, 311f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2827.5f, 1215f, 200f, 0f, 0f, -9f, 1500f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1920f, 655f, 200f, 0f, 0f, -14f, 300f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2181.992f, -132.078f, 200f, 0f, 0f, 86f, 315f, 322f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2130f, 825f, 200f, 0f, 0f, 12f, 500f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2345f, 1795f, 200f, 0f, 0f, 118f, 200f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2775f, 725f, 200f, 0f, 0f, 41f, 2000f, 985f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2565f, 1537.5f, 200f, 0f, 0f, -47f, 1000f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3025f, 1632.5f, 200f, 0f, 0f, -19f, 1500f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3730f, 2300f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			Jump @9445; //curOff = 6026
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_SCARLETT_MEADOWS");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1025f, -642.5f, 150f, 0f, 0f, -42f, 600f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1335f, -407.5f, 150f, 0f, 0f, -71f, 717f, 325f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1585f, -330f, 150f, 0f, 0f, -111f, 400f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1250f, -1702.5f, 150f, 0f, 0f, 0f, 594f, 2000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 612.5f, -1337.5f, 150f, 0f, 0f, 0f, 850f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 677.5f, -2270f, 150f, 0f, 0f, 45f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1408.3f, -1687.9f, 150f, 0f, 0f, 5f, 450f, 1300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1600f, -545f, 100f, 0f, 0f, 20f, 325f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1807.467f, -1544.09f, 150f, 0f, 0f, -72f, 309f, 562f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1705.656f, -1257.077f, 150f, 0f, 0f, 20f, 400f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1946.824f, -1264.023f, 150f, 0f, 0f, 21f, 100f, 176f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1735.228f, -1334.945f, 150f, 0f, 0f, 20f, 295f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1902.5f, -432.5f, 150f, 0f, 0f, -111f, 365f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1827.5f, -580f, 150f, 0f, 0f, 20f, 75f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1571.834f, -1097.489f, 150f, 0f, 0f, 20f, 85f, 371f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1661.989f, -1972.796f, 150f, 0f, 0f, 18f, 85f, 371f, 700f);
			Jump @9445; //curOff = 6715
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_TALL_TREES");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1762.5f, -2030f, 150f, 0f, 0f, 16f, 275f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1445f, -1987.5f, 150f, 0f, 0f, -42f, 125f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1600f, -1882.5f, 150f, 0f, 0f, 20f, 200f, 335f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1927.5f, -1750f, 150f, 0f, 0f, 30f, 690f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2052.5f, -1517.5f, 150f, 0f, 0f, 15f, 715f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2162.5f, -1237.5f, 150f, 0f, 0f, -45f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2272.5f, -1057.5f, 150f, 0f, 0f, -65f, 519f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2865f, -1112.5f, 150f, 0f, 0f, 167f, 1250f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1972.5f, -2022.5f, 150f, 0f, 0f, 44f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1875f, -2087.5f, 150f, 0f, 0f, 70f, 300f, 180f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2140f, -1950f, 150f, 0f, 0f, 70f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -1890f, 150f, 0f, 0f, 24f, 200f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1397.5f, -2027.5f, 150f, 0f, 0f, 20f, 45f, 25f, 700f);
			Jump @9445; //curOff = 7287
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CHOLLA_SPRINGS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3305f, -3380f, 150f, 0f, 0f, 123f, 300f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3335f, -3582.5f, 150f, 0f, 0f, 170f, 225f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3200f, -3515f, 150f, 0f, 0f, -154f, 235f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3515f, -3190f, 150f, 0f, 0f, 139f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3930f, -2912.5f, 150f, 0f, 0f, 154f, 700f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4537.5f, -2665f, 150f, 0f, 0f, -178f, 1000f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4967.5f, -2390f, 150f, 0f, 0f, -148f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4617.5f, -2080f, 150f, 0f, 0f, 175f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3747.5f, -2030f, 150f, 0f, 0f, 99f, 700f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3282.5f, -3050f, 150f, 0f, 0f, 107f, 750f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3370f, -2690f, 150f, 0f, 0f, 124f, 100f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3355f, -2345f, 150f, 0f, 0f, 69f, 200f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3657.5f, -2610f, 150f, 0f, 0f, 98f, 500f, 850f, 700f);
			Jump @9445; //curOff = 7859
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			Jump @9445; //curOff = 8173
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HENNIGAS_STEAD");
			VOLUME::_0x39816F6F94F385AD(iVar0, -2510f, -2542.5f, 150f, 0f, 0f, 44f, 1200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1632.5f, -2480f, 150f, 0f, 0f, 16f, 275f, 535f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1990f, -2525f, 150f, 0f, 0f, 70f, 600f, 850f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1452.5f, -2342.5f, 150f, 0f, 0f, 16f, 150f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1480f, -2177.5f, 150f, 0f, 0f, 20f, 165f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1487.5f, -2087.5f, 150f, 0f, 0f, -42f, 60f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1350f, -2330f, 150f, 0f, 0f, 20f, 165f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1562.5f, -2652.5f, 150f, 0f, 0f, 28f, 500f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2445f, -2795f, 150f, 0f, 0f, 107f, 750f, 1350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2675f, -2177.5f, 150f, 0f, 0f, 70f, 600f, 900f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2947.5f, -2465f, 150f, 0f, 0f, 98f, 150f, 600f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3097.5f, -1977.5f, 150f, 0f, 0f, 99f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2467.5f, -3145f, 150f, 0f, 0f, 123f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2577.5f, -3182.5f, 150f, 0f, 0f, 85f, 150f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2985f, -2502.5f, 150f, 0f, 0f, 124f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2942.5f, -2457.5f, 150f, 0f, 0f, 69f, 175f, 600f, 700f);
			Jump @9445; //curOff = 8874
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_RIO_BRAVO");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3540f, -3635f, 150f, 0f, 0f, 123f, 125f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3880f, -3687.5f, 150f, 0f, 0f, 105f, 225f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4495f, -3610f, 150f, 0f, 0f, 96f, 600f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4922.5f, -3742.5f, 150f, 0f, 0f, 131f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5135f, -3900f, 150f, 0f, 0f, 22f, 200f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5205f, -3887.5f, 150f, 0f, 0f, -16f, 300f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5350f, -3835f, 150f, 0f, 0f, -32f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5125f, -3500f, 150f, 0f, 0f, 175f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4975f, -3360f, 150f, 0f, 0f, 137f, 450f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4645f, -3220f, 150f, 0f, 0f, -178f, 735f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4205f, -3420f, 150f, 0f, 0f, 154f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3795f, -3510f, 150f, 0f, 0f, 139f, 450f, 275f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3992.5f, -3567.5f, 150f, 0f, 0f, 0f, 200f, 200f, 700f);
			((*Global_1897952)[iParam0 /*2*/])->f_1 = iVar0;
			return iVar0;
		}

int func_1242(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_723())
	{
		return 1;
	}
	if (iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_1243(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				
				case 6:
					return 130;
				
				case 27:
					return 131;
				
				case 26:
					return 129;
				
				case 19:
					return 59;
				
				default:
					break;
			}
			break;
		
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				
				case 33:
					return 11;
				
				case 29:
					return 106;
				
				case 30:
					return 107;
				
				case 3:
					return 7;
				
				case 8:
					return 9;
				
				case 10:
					return 10;
				
				case 9:
					return 13;
				
				case 2:
					return 14;
				
				case 1:
					return 15;
				
				case 31:
					return 108;
				
				case 22:
					return 16;
				
				case 7:
					return 17;
				
				case 21:
					return 12;
				
				default:
					break;
			}
			break;
		
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				
				case 6:
					return 134;
				
				case 27:
					return 135;
				
				case 26:
					return 133;
				
				case 19:
					return 57;
				
				default:
					break;
			}
			break;
		
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				
				case 3:
					return 19;
				
				case 2:
					return 20;
				
				case 1:
					return 21;
				
				case 31:
					return 105;
				
				default:
					break;
			}
			break;
		
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				
				case 6:
					return 139;
				
				case 27:
					return 140;
				
				case 26:
					return 138;
				
				case 19:
					return 56;
				
				default:
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				
				case 6:
					return 143;
				
				case 27:
					return 144;
				
				case 26:
					return 142;
				
				default:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				
				case 31:
					return 118;
				
				default:
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				
				case 8:
					return 37;
				
				case 33:
					return 52;
				
				case 29:
					return 109;
				
				case 10:
					return 38;
				
				case 30:
					return 110;
				
				case 0:
					return 39;
				
				case 4:
					return 41;
				
				case 3:
					return 42;
				
				case 6:
					return 43;
				
				case 9:
					return 44;
				
				case 2:
					return 45;
				
				case 1:
					return 46;
				
				case 31:
					return 111;
				
				case 22:
					return 51;
				
				case 7:
					return 47;
				
				case 12:
					return 48;
				
				case 13:
					return 49;
				
				case 14:
					return 50;
				
				case 18:
					return 55;
				
				case 21:
					return 54;
				
				default:
					break;
			}
			break;
		
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				
				case 33:
					return 33;
				
				case 29:
					return 112;
				
				case 10:
					return 26;
				
				case 4:
					return 27;
				
				case 3:
					return 28;
				
				case 6:
					return 29;
				
				case 2:
					return 30;
				
				case 31:
					return 113;
				
				case 22:
					return 32;
				
				case 1:
					return 31;
				
				default:
					break;
			}
			break;
		
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				
				default:
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				
				default:
					break;
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				
				case 1:
					return 24;
				
				default:
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				
				case 26:
					return 146;
				
				case 6:
					return 147;
				
				case 27:
					return 148;
				
				case 19:
					return 58;
				
				default:
					break;
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				
				case 33:
					return 66;
				
				case 10:
					return 60;
				
				case 3:
					return 61;
				
				case 20:
					return 62;
				
				case 9:
					return 63;
				
				case 31:
					return 115;
				
				case 22:
					return 64;
				
				case 2:
					return 65;
				
				default:
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				
				default:
					break;
			}
			break;
		
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				
				case 8:
					return 69;
				
				case 33:
					return 70;
				
				case 29:
					return 102;
				
				case 10:
					return 72;
				
				case 30:
					return 103;
				
				case 0:
					return 73;
				
				case 3:
					return 74;
				
				case 6:
					return 75;
				
				case 9:
					return 76;
				
				case 2:
					return 77;
				
				case 31:
					return 104;
				
				case 1:
					return 78;
				
				case 22:
					return 80;
				
				case 20:
					return 79;
				
				default:
					break;
			}
			break;
		
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				
				case 4:
					return 82;
				
				case 2:
					return 86;
				
				case 1:
					return 85;
				
				case 31:
					return 117;
				
				case 9:
					return 84;
				
				default:
					break;
			}
			break;
		
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				
				case 6:
					return 0;
				
				case 2:
					return 2;
				
				case 31:
					return 121;
				
				case 22:
					return 1;
				
				case 1:
					return 3;
				
				default:
					break;
			}
			break;
		
		case 90:
		case 128:
			switch (iParam1)
			{
				case 18:
					return 34;
				
				default:
					break;
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 2:
					return 89;
				
				case 1:
					return 88;
				
				case 3:
					return 87;
				
				default:
					break;
			}
			break;
		
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
				
				default:
					break;
			}
			break;
		
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
				
				default:
					break;
			}
			break;
		
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
				
				default:
					break;
			}
			break;
		
		case 115:
			switch (iParam1)
			{
				case 33:
					return 93;
				
				case 3:
					return 90;
				
				case 6:
					return 91;
				
				case 9:
					return 94;
				
				case 10:
					return 92;
				
				default:
					break;
			}
			break;
		
		case 120:
			switch (iParam1)
			{
				case 3:
					return 95;
				
				case 2:
					return 96;
				
				default:
					break;
			}
			break;
		
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
				
				default:
					break;
			}
			break;
		
		case 117:
			switch (iParam1)
			{
				case 31:
					return 123;
				
				case 2:
					return 99;
				
				case 1:
					return 100;
				
				default:
					break;
			}
			break;
		
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
				
				default:
					break;
			}
			break;
		
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
				
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_1244(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 443958153;
		
		case 8:
			return 1035357148;
		
		case 9:
			return -990591911;
		
		case 17:
			return 1434435999;
		
		case 13:
			return 914613127;
		
		case 14:
			return 277114628;
		
		case 15:
			return -441298053;
		
		case 108:
			return 1671261677;
		
		case 12:
			return -2008988392;
		
		case 16:
			return -1779570775;
		
		case 106:
			return 1866591384;
		
		case 107:
			return -810797676;
		
		case 6:
			return 1591504033;
		
		case 10:
			return -1481022983;
		
		case 11:
			return -200160067;
		
		case 19:
			return 213861089;
		
		case 20:
			return 187124199;
		
		case 21:
			return -1639286351;
		
		case 18:
			return 1244472740;
		
		case 105:
			return -1711647719;
		
		case 22:
			return -184950877;
		
		case 118:
			return 354888782;
		
		case 39:
			return -922179383;
		
		case 42:
			return 877339314;
		
		case 41:
			return 327042733;
		
		case 43:
			return -1159824322;
		
		case 36:
			return 187784199;
		
		case 37:
			return 156869848;
		
		case 38:
			return 959980967;
		
		case 40:
			return 268171375;
		
		case 44:
			return -605457855;
		
		case 45:
			return -967272484;
		
		case 46:
			return 253446434;
		
		case 47:
			return -24930371;
		
		case 55:
			return -491616406;
		
		case 111:
			return 806137889;
		
		case 48:
			return 683812333;
		
		case 49:
			return 1055138492;
		
		case 50:
			return -1673339528;
		
		case 53:
			return 1428271505;
		
		case 54:
			return -2132681852;
		
		case 51:
			return 641024601;
		
		case 109:
			return 1479356600;
		
		case 110:
			return -1608228131;
		
		case 52:
			return 1700741106;
		
		case 23:
			return -768596287;
		
		case 24:
			return -1789795772;
		
		case 28:
			return 986912071;
		
		case 27:
			return 312948291;
		
		case 29:
			return 770563571;
		
		case 30:
			return 288839560;
		
		case 26:
			return 399352507;
		
		case 31:
			return -1241147617;
		
		case 113:
			return 399096998;
		
		case 32:
			return -483073269;
		
		case 112:
			return 1576805996;
		
		case 25:
			return -1427623397;
		
		case 33:
			return 305555540;
		
		case 60:
			return 2080716288;
		
		case 61:
			return 922959422;
		
		case 62:
			return 1948709075;
		
		case 63:
			return 599204508;
		
		case 65:
			return -362796541;
		
		case 115:
			return -1178912317;
		
		case 64:
			return -1575046645;
		
		case 114:
			return -176953214;
		
		case 66:
			return -1992095599;
		
		case 73:
			return 646741747;
		
		case 74:
			return -773037432;
		
		case 75:
			return 1444751354;
		
		case 69:
			return 709943351;
		
		case 77:
			return 731746260;
		
		case 76:
			return 405856312;
		
		case 72:
			return -1749578899;
		
		case 78:
			return 1581089825;
		
		case 104:
			return -883880335;
		
		case 71:
			return 1124822890;
		
		case 81:
			return 1618521465;
		
		case 80:
			return -1675300716;
		
		case 79:
			return -442258411;
		
		case 102:
			return 1665083003;
		
		case 103:
			return 810431028;
		
		case 68:
			return 1161446575;
		
		case 70:
			return -406930559;
		
		case 35:
			return 1523596125;
		
		case 86:
			return -372049939;
		
		case 85:
			return 226213668;
		
		case 82:
			return 1437804895;
		
		case 117:
			return 430529746;
		
		case 84:
			return -1254552445;
		
		case 83:
			return 1526480524;
		
		case 116:
			return 644508980;
		
		case 1:
			return 1628277480;
		
		case 120:
			return -1985767496;
		
		case 0:
			return 1117878254;
		
		case 2:
			return 622553269;
		
		case 3:
			return -1934358691;
		
		case 121:
			return 962619556;
		
		case 89:
			return 94750187;
		
		case 87:
			return 545745902;
		
		case 88:
			return 1875117241;
		
		case 101:
			return -1861588330;
		
		case 126:
			return -1079912632;
		
		case 127:
			return -1624899219;
		
		case 124:
			return 646944986;
		
		case 149:
			return 1712034773;
		
		case 150:
			return 1084233913;
		
		case 151:
			return -1628307596;
		
		case 152:
			return 1244193358;
		
		case 128:
			return -268420964;
		
		case 129:
			return -283845926;
		
		case 130:
			return 76731659;
		
		case 131:
			return 2141489518;
		
		case 59:
			return 1529797091;
		
		case 132:
			return 1120323763;
		
		case 133:
			return -1951530479;
		
		case 134:
			return 2034257465;
		
		case 135:
			return 278587369;
		
		case 57:
			return 1388932648;
		
		case 137:
			return 1467401843;
		
		case 138:
			return -1049737591;
		
		case 139:
			return 1175719437;
		
		case 140:
			return 2115547696;
		
		case 56:
			return 878376253;
		
		case 141:
			return -508879537;
		
		case 142:
			return -654369397;
		
		case 143:
			return 1573058547;
		
		case 144:
			return 1753151614;
		
		case 145:
			return -2113647360;
		
		case 146:
			return 1337275619;
		
		case 147:
			return -237650722;
		
		case 148:
			return 283754781;
		
		case 58:
			return -2076086367;
		
		case 136:
			return -487054121;
		
		case 119:
			return 551011289;
		
		case 122:
			return -647250101;
		
		case 95:
			return -1769964380;
		
		case 97:
			return -1464928880;
		
		case 96:
			return 1315212395;
		
		case 90:
			return -1495157302;
		
		case 93:
			return -2140031237;
		
		case 91:
			return -1829807698;
		
		case 92:
			return 186603357;
		
		case 94:
			return -1575817877;
		
		case 98:
			return 1087483310;
		
		case 125:
			return -552506176;
		
		case 123:
			return -614248279;
		
		case 99:
			return 441769767;
		
		case 100:
			return 1318049946;
		
		case 4:
			return 548657065;
		
		case 5:
			return 243086140;
		
		case 34:
			return -305029900;
		
		case 67:
			return 1008537949;
		
		default:
			break;
	}
	return 0;
}

int func_1245(var uParam0)
{
	struct<4> Var0;
	int iVar5;
	var uVar6;
	
	if (!func_903(15, &Var0))
	{
		return -1;
	}
	Var0.f_3 = uParam0;
	Var0.f_2 = -125049320;
	if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
	{
		uVar6 = func_1507(iVar5);
		return uVar6;
	}
	return -1;
}

int func_1246(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = (BUILTIN::SHIFT_LEFT(iParam1, 11) || uParam0);
	iVar0 = 0;
	while (iVar0 < Global_40.f_9.f_16)
	{
		if (&Global_40.f_9.f_16[iVar0] == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1247(int iParam0)
{
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_1508(iParam0) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_1248(var uParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	var uVar6;
	struct<4> Var7;
	
	func_903(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = uParam0;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	DATAFILE::_DATAFILE_GET_HASH(&uVar6, &Var0);
	func_903(15, &Var7);
	Var7.f_2 = -1222062814;
	Var7.f_3 = uVar6;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var7.f_1), &Var7))
	{
		Var7.f_2 = -1148228754;
		DATAFILE::_DATAFILE_GET_BOOL(&uVar5, &Var7);
	}
	return uVar5;
}

int func_1249(int iParam0)
{
	if (!func_504(iParam0))
	{
		return 0;
	}
	return func_1509(iParam0, 33554432);
}

int func_1250(int iParam0, bool bParam1)
{
	if (!func_1510(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_1511(iParam0, 8))
		{
			return 0;
		}
	}
	if (func_1511(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_1251(var uParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	var uVar6;
	int iVar7;
	struct<4> Var8;
	
	func_903(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = uParam0;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	func_903(15, &Var8);
	Var8.f_2 = -1222062814;
	Var8.f_3 = uVar5;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var8.f_1), &Var8))
	{
		Var8.f_2 = 939842437;
		if (DATAFILE::_DATAFILE_GET_HASH(&uVar6, &Var8))
		{
			iVar7 = uVar6;
			return func_171(iVar7, 1, 0);
		}
	}
	return 1;
}

bool func_1252()
{
	var uVar0;
	
	if (func_348())
	{
		if (!func_1238(4))
		{
			return true;
		}
	}
	return (PED::_0xFB4891BD7578CDC1(Global_35, -1725579161) || func_1147(-2061583405, &uVar0));
}

int func_1253(var uParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	var uVar6;
	struct<4> Var7;
	
	func_903(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = uParam0;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	func_903(15, &Var7);
	Var7.f_2 = -1222062814;
	Var7.f_3 = uVar5;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var7.f_1), &Var7))
	{
		Var7.f_2 = 1689379704;
		if (DATAFILE::_DATAFILE_GET_BOOL(&uVar6, &Var7))
		{
			return uVar6;
		}
	}
	return 0;
}

bool func_1254(int iParam0)
{
	if (!func_1510(Global_1310720->f_22))
	{
		return true;
	}
	if (func_1250(Global_1310720->f_22, 1))
	{
		return true;
	}
	if ((0 == iParam0 && 2 == Global_1310720->f_22) || (2 == iParam0 && 0 == Global_1310720->f_22))
	{
		return true;
	}
	return Global_1310720->f_22 == iParam0;
}

int func_1255(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	
	func_903(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = uParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1563492982;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
		{
			iVar6 = func_1512(iVar5);
			if (func_1238(iVar6))
			{
				return 0;
			}
		}
		Var0.f_2 = 1975530226;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
		{
			iVar6 = func_1512(iVar5);
			if (!func_1238(iVar6))
			{
				return 0;
			}
		}
		Var0.f_2 = 108838230;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
		{
			iVar7 = func_1513(iVar5);
			if (func_1514(iVar7))
			{
				return 0;
			}
		}
		Var0.f_2 = 181294442;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
		{
			iVar7 = func_1513(iVar5);
			if (!func_1514(iVar7))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_1256(int iParam0)
{
	if (!func_1515(iParam0))
	{
		return -1;
	}
	return &(Global_40.f_9096[iParam0 /*12*/]);
}

bool func_1257(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] && iParam0) != 0;
}

int func_1258(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < &Global_1898329)
	{
		if (!func_82(Global_1898330[iVar0]))
		{
		}
		else
		{
			switch (((*Global_1898346)[iVar0 /*6*/])->f_3)
			{
				case 1:
					iVar1 = ((*Global_1898346)[iVar0 /*6*/])->f_4;
					if (BUILTIN::VDIST(func_1516(iVar1), vParam0) < func_944(func_1517(iVar1) == 0f, fParam3, func_1517(iVar1)))
					{
						return 1;
					}
					break;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1259(vector3 vParam0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 201)
	{
		if (func_1518(iVar0, 0))
		{
			if (BUILTIN::VDIST(func_1519(iVar0), vParam0) < fParam3)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1260(struct<2> Param0, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

bool func_1261(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

void func_1262(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_965(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5);
}

void func_1263(var uParam0)
{
	if (func_1520(uParam0, Global_35, 0, 0, 1, 1))
	{
	}
	if (func_1520(uParam0, Local_195.f_37, 0, 0, 1, 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_195.f_37))
		{
		}
	}
}

void func_1264(var uParam0, int iParam1)
{
	uParam0->f_149 = iParam1;
	func_1521(uParam0, 2);
}

void func_1265(bool bParam0)
{
	if (bParam0)
	{
		func_1522(4);
	}
	func_1522(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

void func_1266(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0)) && fParam2 > 0f)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PED::SET_PED_CONFIG_FLAG(iVar0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, true);
			if (iParam3 == 1)
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 359, true);
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			iVar1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0);
			OBJECT::_0xA22712E8471AA08E(iVar1, 1, 1);
		}
		MISC::_0x870708A6E147A9AD(iParam0, sParam1, fParam2, iParam4, iParam5, 0, 0, 0, 0, -1);
	}
}

int func_1267(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
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
		if (func_1261(iVar0, 2))
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
				func_1523(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

int func_1268(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_510(*uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
		{
			HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1), 0);
			return 1;
		}
	}
	return 0;
}

void func_1269(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 && !func_205(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1270(iParam0, 128);
	}
	else
	{
		func_1273(iParam0, 128);
	}
}

void func_1270(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_1271(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_1261(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_1272(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_1273(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

bool func_1274(int iParam0, int iParam1)
{
	iParam0 = func_670(iParam0);
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

void func_1275(int iParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, var uParam10, bool bParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	if (bParam4)
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return;
	}
	if (func_924(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((fParam5 < 0f || fParam6 < 0f) || fParam7 < 0f) || fParam8 < 0f)
	{
		return;
	}
	if (((((!fParam5 > fParam6 || !fParam5 > fParam7) || !fParam5 > fParam8) || !fParam6 > fParam7) || !fParam6 > fParam8) || !fParam7 > fParam8)
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	fVar3 = func_216(iParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
		}
		if ((func_1524() && !ENTITY::IS_ENTITY_DEAD(iVar1)) && VEHICLE::_0xEA44E97849E9F3DD(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_0xA8BA0BAE0173457B(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.75f);
					VEHICLE::_0x0C3F0F7F92CA847C(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam6 && fVar3 > fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1.5f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_0xEA44E97849E9F3DD(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_0xA8BA0BAE0173457B(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.25f);
					VEHICLE::_0x0C3F0F7F92CA847C(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
			if (iParam9 == 1)
			{
				if (PED::_0x33FA048675821DA7(iVar0, 3))
				{
					PED::_0x06D26A96CA1BCA75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_0xEA44E97849E9F3DD(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_0xA8BA0BAE0173457B(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1f);
					if (iParam9 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (PED::_0x33FA048675821DA7(iVar0, 3))
							{
								PED::_0x06D26A96CA1BCA75(iVar2, 3, 0f, 0);
							}
						}
					}
					VEHICLE::_0x0C3F0F7F92CA847C(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (fVar3 <= fParam8)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !func_1276(iParam0, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_1276(iParam0, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, iParam12);
			}
		}
	}
}

int func_1276(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

Vector3 func_1277(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;
	
	MemCopy(&uVar0, {func_1525(uParam0)}, 8);
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_157))
	{
		uParam0->f_157 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_152), 0, 0, false, true);
	}
	else if (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_157, 0))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_157, func_1309(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			ANIMSCENE::_0xADF1D53F3B1FE0A7(uParam0->f_157, &vVar8, &uVar11, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_157);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

void func_1278(var uParam0, vector3 vParam1)
{
	if (func_503(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_1279(var uParam0)
{
	return uParam0->f_147;
}

void func_1280()
{
	struct<4> Var0;
	
	Global_1946804->f_858 = (Global_1946804->f_858 - 1);
	if (Global_1946804->f_858 <= 0)
	{
		Var0 = 35;
		func_1173(Var0);
	}
}

void func_1281(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4))
	{
		if (func_968(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			func_1526(uParam0);
			PATHFIND::_0xD17672447692478E(uParam0->f_4, 0);
		}
	}
	if (func_968(uParam0, 8))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_4);
		func_997(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_997(uParam0, 16, 1);
}

float func_1282(var uParam0)
{
	return uParam0->f_146;
}

struct<8> func_1283(var uParam0)
{
	return uParam0->f_158;
}

void func_1284(var uParam0)
{
	struct<8> Var0;
	
	Var0 = { func_1302() };
	func_1295(uParam0, &Var0);
}

bool func_1285()
{
	return Global_1946804->f_1497 != Global_1946804->f_2163.f_1;
}

char* func_1286(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return func_1309(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return func_1527(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return func_1528(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	return "";
}

int func_1287(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1288(var uParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && MISC::ARE_STRINGS_EQUAL(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam1))
		{
			return &(uParam0->f_13[iVar0 /*12*/]);
		}
		iVar0++;
	}
	return 0;
}

void func_1289(var uParam0, int iParam1)
{
	struct<12> Var0;
	int iVar12;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 11)
	{
		if (&uParam0->f_13[iVar12 /*12*/] == iParam1)
		{
			*(uParam0->f_13[iVar12 /*12*/]) = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_1290(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1291(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1292(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

struct<8> func_1293(var uParam0)
{
	return uParam0->f_166;
}

struct<8> func_1294()
{
	char cVar0[64];
	
	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

void func_1295(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_158), sParam1, 64);
}

bool func_1296(var uParam0)
{
	struct<8> Var0;
	struct<8> Var8;
	
	Var0 = { func_1283(uParam0) };
	Var8 = { func_969(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(&Var0, &Var8);
}

void func_1297(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

char* func_1298()
{
	return "unnamed";
}

void func_1299(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
	uParam0->f_4 = iParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_9 = PED::_0x4C39C95AE5DB1329(iParam1, bParam2, iVar0);
}

bool func_1300()
{
	return func_306(_NAMESPACE71::_0xC17F69E1418CD11F(3));
}

void func_1301(var uParam0, char* sParam1)
{
	struct<8> Var0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	Var0 = { func_1283(uParam0) };
	if ((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam1) && ANIMSCENE::_0xA9016536015DE29D(uParam0->f_156, sParam1)) && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_156, sParam1);
	}
}

struct<8> func_1302()
{
	char cVar0[64];
	
	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

bool func_1303(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_1304(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_156, sParam1))
		{
			iParam3 = 0;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_156, sParam1, iParam2, iParam3);
}

void func_1305(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_BLOOD_DAMAGE(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::_0x7F5D88333EE8A86F(iParam0, iVar0);
		iVar0++;
	}
}

struct<8> func_1306(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	struct<8> Var18;
	
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, HUD::_0x806862E5D266CF38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, HUD::_0x806862E5D266CF38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

bool func_1307(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1308()
{
	if (func_205(Global_43800))
	{
		func_206(&Global_43800, 0, 0);
	}
}

char* func_1309(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_35)
	{
		if (ENTITY::GET_ENTITY_MODEL(Global_35) == 11966224)
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_1529(iVar0);
}

int func_1310(int iParam0)
{
	int iVar0;
	
	if (func_306(iParam0))
	{
		iVar0 = _NAMESPACE71::_0x59FA676177DBE4C9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return 0;
}

bool func_1311(int iParam0, int iParam1)
{
	if (iParam1 && !func_205(iParam0))
	{
		return false;
	}
	return !func_1261(iParam0, 4);
}

int func_1312(int iParam0, bool bParam1)
{
	if (!func_205(Global_43800))
	{
		Global_43800 = func_1530("CUTSCENE_SKIP", -842734359, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
		((*Global_1945938)[Global_43800 /*18*/])->f_16 = &Global_23[3];
		func_936(Global_43800, 0, 1);
		func_1531(Global_43800, 6, 1);
		if (bParam1)
		{
			func_1531(Global_43800, 14, 1);
		}
	}
	else
	{
		if (!func_1311(Global_43800, 0))
		{
			func_935(Global_43800, 1, 1);
		}
		if (func_1532(Global_43800, 1) != 0f && iParam0)
		{
			func_936(Global_43800, 1, 1);
		}
		else
		{
			func_936(Global_43800, 0, 1);
		}
		return func_1533(Global_43800, 1);
	}
	return 0;
}

void func_1313(var uParam0)
{
	int iVar0;
	
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_156, 1, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0 /*12*/])) || func_1303(uParam0->f_13[iVar0 /*12*/], 2))
		{
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, &((uParam0->f_13[iVar0 /*12*/])->f_1)))
			{
				func_1291(uParam0->f_13[iVar0 /*12*/], 1);
			}
		}
		iVar0++;
	}
}

Vector3 func_1314(var uParam0)
{
	return uParam0->f_214;
}

void func_1315(var uParam0)
{
	int iVar0;
	
	if (func_1534(&iVar0))
	{
		if (func_350(iVar0, 0))
		{
			if (func_374(iVar0) == -525676072)
			{
				PED::_0xD710A5007C2AC539(Global_35, 1249071452, 0);
				func_403(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::_0xD710A5007C2AC539(Global_35, 1606587013, 0);
			}
			if (!func_350(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_1316(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_1535(0, 0);
		func_1536(-1);
	}
	func_987(1);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!func_967(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_967(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_967(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_967(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_967(*uParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam1, 1);
	}
	if (!func_967(*uParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!func_967(*uParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!func_967(*uParam0, 4) && !func_967(*uParam0, 2))
	{
		HUD::_0x4CC5F2FC1332577F(-1679307491);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(-1679307491);
	}
	if (!func_967(*uParam0, 2048))
	{
		func_666(0, 0);
	}
	if (func_967(*uParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
	}
	if (func_967(*uParam0, 256))
	{
		WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
	}
	if (func_967(*uParam0, 8192))
	{
		func_1537();
	}
	if (!func_967(*uParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!func_967(*uParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!func_967(*uParam0, 1024))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_35, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_35, ENTITY::GET_ENTITY_HEADING(Global_35));
			ENTITY::SET_ENTITY_VELOCITY(Global_35, 0f, 0f, 0f);
		}
		if (!func_967(*uParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_0xEE04C0AFD4EFAF0E(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (func_1378() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (func_503(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1538(&vVar3, 50, 10, 0);
					}
					PED::_0xED00D72F81CF7278(iVar7, 0, 1);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1046(2);
						func_1045(-1);
						func_1056(vVar3);
						func_1540(func_1539());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
					PED::_0x2208438012482A1A(Global_35, false, false);
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar9 = PED::GET_MOUNT(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, 1, 0);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!func_967(*uParam0, 4096))
	{
		func_1305(Global_35);
	}
	if (!func_967(*uParam0, 1048576))
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(7, 1, 0);
	}
	if (!func_967(*uParam0, 2097152))
	{
		if (func_255() || PED::_0x50F124E6EF188B22(Global_35))
		{
			func_256(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*uParam0 = 0;
}

void func_1317(var uParam0, vector3 vParam1)
{
	uParam0->f_214 = { vParam1 };
}

void func_1318(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_968(uParam0, 2048) && !func_503(func_1541(uParam0)))
	{
		bVar0 = VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4);
		iVar1 = PED::_0x4C8B59171957BCF7(Global_35);
		if ((!ENTITY::IS_ENTITY_DEAD(iVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar1, uParam0->f_4, true, 0)) || func_968(uParam0, -2147483648))) && PED::GET_MOUNT(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (TASK::IS_PED_IN_WRITHE(iVar1))
			{
				iVar2 |= 32;
			}
			func_637(iVar1, func_1541(uParam0), func_1542(uParam0), iVar2, 1073741824);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || func_968(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_637(iVar3, func_1541(uParam0), func_1542(uParam0), 2, 1073741824);
		}
	}
}

void func_1319(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if ((func_968(uParam0, 268435456) && !func_503(func_1541(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { func_1541(uParam0) };
			func_637(iVar0, vVar1, func_1543(vVar1, Global_36, 1), 2, 1073741824);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1320(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_217 = { vParam1 };
	uParam0->f_220 = iParam4;
	if (func_503(vParam1))
	{
		func_997(uParam0, 2048, 1);
	}
	else
	{
		func_990(uParam0, 2048);
		if (bParam5)
		{
			func_990(uParam0, -2147483648);
		}
	}
}

void func_1321(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0 /*12*/])) && ENTITY::IS_ENTITY_A_PED(&(uParam0->f_13[iVar0 /*12*/]))) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_13[iVar0 /*12*/])) != Global_35)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_13[iVar0 /*12*/]));
			if (PED::IS_PED_HUMAN(iVar1))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, &((uParam0->f_13[iVar0 /*12*/])->f_1)))
				{
					if (!func_1303(uParam0->f_13[iVar0 /*12*/], 8))
					{
						if (func_465(func_222(iVar1, 0, 1, 0)))
						{
							if (!func_1544(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 0)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("weapon_unarmed"), true, 0, false, false);
							}
						}
						if (func_465(func_222(iVar1, 1, 1, 0)))
						{
							if (!func_1544(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 1)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("weapon_unarmed"), true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1322(var uParam0, bool bParam1)
{
	WEAPON::_0x67E21ACC5C0C970C(Global_35, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_17)
		{
			PED::_0xD710A5007C2AC539(Global_35, -1229581779, 0);
			Global_17 = !bParam1;
		}
	}
}

void func_1323(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	bVar4 = func_120() != -1;
	Global_1946804->f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(iParam1);
		if (!bVar4)
		{
			if (Global_1347477->f_189 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1347477->f_189);
			}
			if ((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && Global_1347477->f_190 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1347477->f_190);
			}
			func_867(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1545(iParam1, 29, bVar4, 1, 0);
			func_1545(iParam1, 31, bVar4, 1, 0);
			func_1545(iParam1, 30, bVar4, 1, 0);
			func_1545(iParam1, 22, bVar4, 1, 0);
			func_1545(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_806(32768) && func_1228(1108822547, 8)) && func_1227(10, iParam3))
	{
		func_1546(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = &Global_1946804->f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_875(iVar1, 1);
			if (func_1228(iVar3, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar1 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1 /*3*/];
				if (!func_1227(iVar1, iParam3))
				{
				}
				else if ((func_1228(iVar3, 6) || &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/]) || (uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
				{
					if (!func_1228(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1545(iParam1, iVar1, bVar4, 1, 0);
						}
						if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
						{
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = 289238755;
						}
						func_1229(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_2456[iVar1 /*2*/]) && (uParam0->f_1[iVar1 /*3*/])->f_1 == (Global_1946804->f_2456[iVar1 /*2*/])->f_1)
						{
						}
						else
						{
							if ((Global_1946804->f_57[iVar1 /*11*/])->f_1 > 1)
							{
								func_1545(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1 /*3*/]));
							}
							Global_1946804->f_2456[iVar1 /*2*/] = &uParam0->f_1[iVar1 /*3*/];
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = (uParam0->f_1[iVar1 /*3*/])->f_1;
							if (func_1228(iVar3, 1))
							{
								func_1168(iVar3, 1, 6);
							}
							Global_1946804->f_857++;
							PED::_SET_PED_COMPONENT_ENABLED(iParam1, iVar2, false, bVar4, false);
							if ((uParam0->f_1[iVar1 /*3*/])->f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(iParam1, iVar2, (uParam0->f_1[iVar1 /*3*/])->f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804->f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(iParam1, bVar4);
							PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, iParam5);
						}
					}
				}
			}
		}
	}

void func_1324(var uParam0)
{
	StringCopy(&(uParam0->f_152), "", 32);
	func_1547(uParam0);
	func_1278(uParam0, 0f, 0f, 0f);
	func_1548(uParam0);
}

void func_1325(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		(uParam0->f_13[iVar0 /*12*/])->f_11 = 0;
		iVar0++;
	}
}

void func_1326(var uParam0)
{
	uParam0->f_8 = 0;
}

void func_1327(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_1292(uParam0->f_13[iVar0 /*12*/], iParam1);
		iVar0++;
	}
}

void func_1328(bool bParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(Global_43799))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Global_43799))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Global_43799);
		}
	}
	Global_43799 = -1;
	StringCopy(&Global_43801, "", 24);
	Global_16 = 0;
	if (bParam0)
	{
		func_1308();
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
}

void func_1329(int iParam0)
{
	func_1549();
	Global_1911774->f_1 = MISC::GET_GAME_TIMER();
	Global_1911774->f_2 = iParam0;
}

void func_1330()
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
}

void func_1331(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_1550(bParam0);
}

void func_1332(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	
	Var0 = { func_462(iParam0, 0, 0) };
	Var5 = { func_762(iParam0, Var0, Var0.f_4, 0) };
	if (func_1104(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_706(0), &Var5, bParam1);
}

void func_1333(int iParam0, bool bParam1)
{
	if (func_1551(iParam0))
	{
		return;
	}
	Global_1935496->f_72[Global_1935496->f_72.f_41 /*2*/] = iParam0;
	(Global_1935496->f_72[Global_1935496->f_72.f_41 /*2*/])->f_1 = func_876(bParam1, 1, 0);
	Global_1935496->f_72.f_41++;
	if (Global_1935496->f_72.f_41 == 20)
	{
		Global_1935496->f_72.f_41 = (Global_1935496->f_72.f_41 - 1);
	}
}

int func_1334()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_1335(int iParam0, int iParam1, int iParam2)
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

void func_1336(int iParam0)
{
	if (func_1552(iParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, true);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 127, false);
	if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
	{
		FIRE::STOP_ENTITY_FIRE(iParam0, 0);
		ENTITY::_SET_ENTITY_HEALTH(iParam0, ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, 0), 0);
	}
}

void func_1337(int iParam0)
{
	int iVar0;
	
	if (!func_260(iParam0))
	{
		return;
	}
	if (func_674(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_72(iParam0);
	func_1336(iVar0);
	func_278(iParam0, 8192, 1);
}

void func_1338(int iParam0)
{
	if (func_1552(iParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 0, false);
}

void func_1339(int iParam0)
{
	int iVar0;
	
	if (!func_260(iParam0))
	{
		return;
	}
	if (func_674(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_72(iParam0);
	func_1338(iVar0);
	func_278(iParam0, 8192, 0);
}

void func_1340(int iParam0)
{
	if (func_1552(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
}

void func_1341(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (func_78(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[4])))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iParam0, &(Global_1357549->f_3[4]), true, 0))
	{
		return;
	}
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 909522);
}

void func_1342(int iParam0)
{
	int iVar0;
	
	if (!func_260(iParam0))
	{
		return;
	}
	if (func_674(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_72(iParam0);
	func_1340(iVar0);
	func_278(iParam0, 16384, 1);
}

void func_1343(int iParam0)
{
	if (func_1552(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, true);
}

void func_1344(int iParam0)
{
	int iVar0;
	
	if (!func_260(iParam0))
	{
		return;
	}
	if (func_674(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_72(iParam0);
	func_1343(iVar0);
	func_278(iParam0, 16384, 0);
}

int func_1345(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_1553(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

int func_1346(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				
				case 1:
					iVar1 = -1632589543;
					break;
				
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				
				case 1:
					iVar1 = -2040275819;
					break;
				
				case 2:
					iVar1 = -1114682645;
					break;
				
				case 3:
					iVar1 = -1414977761;
					break;
			}
			break;
	}
	if (iParam1 != -1)
	{
		if (func_638(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_1347(int iParam0)
{
	switch (iParam0)
	{
		case -268604689:
			return -1496612359;
		
		case -1632589543:
			return 1052055818;
		
		case -1862464078:
			return 1895628185;
		
		case -922193456:
			return -99272505;
		
		case -2040275819:
			return 464906090;
		
		case -1114682645:
			return 744097966;
		
		case -1414977761:
			return 1059434053;
		
		default:
			break;
	}
	return 41788943;
}

void func_1348(int iParam0, int iParam1)
{
	(Global_40.f_4942[iParam0 /*60*/])->f_5 = ((Global_40.f_4942[iParam0 /*60*/])->f_5 - ((Global_40.f_4942[iParam0 /*60*/])->f_5 && iParam1));
}

void func_1349(int iParam0, bool bParam1, float fParam2)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*bParam1 == 383145463 || *bParam1 == -169598849) || *bParam1 == 600245965) || *bParam1 == 38266755) || *bParam1 == -510274983) || *bParam1 == 1252941818) || *bParam1 == 575725904) || *bParam1 == 1311933014)
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case -1273613561:
		case -776789570:
		case -763072541:
		case -486390692:
		case 50483426:
		case 215164947:
		case 247176142:
		case 347599949:
		case 852072701:
		case 861896523:
		case 1017000466:
		case 1245530084:
		case 1336863290:
		case 1485366395:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		
		case -969819655:
		case -628956517:
		case -355385988:
		case 300505615:
		case 466209020:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		
		case 363815774:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		
		case -1910990966:
		case -1421951598:
		case 1921874948:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		
		case -1090280091:
		case -1076294934:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		
		case -1011228908:
		case -1008616424:
		case 424175505:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		
		case -1208814201:
		case -390289284:
		case 1112571710:
		case 1478983280:
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

int func_1350(int iParam0)
{
	if (!func_260(iParam0))
	{
		return 0;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_127)
	{
		case -784953535:
		case -543937540:
		case -233385727:
		case 893704044:
		case 1132950513:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_1351(int iParam0, char* sParam1)
{
	switch (Global_40.f_4283)
	{
		case 0:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "colter/col_default_horse_bill", 64);
					return 1;
				
				case 7:
					StringCopy(sParam1, "colter/col_default_horse_charles", 64);
					return 1;
				
				case 0:
					StringCopy(sParam1, "colter/col_default_horse_dutch", 64);
					return 1;
				
				case 5:
					StringCopy(sParam1, "colter/col_default_horse_hosea", 64);
					return 1;
				
				case 2:
					StringCopy(sParam1, "colter/col_default_horse_javier", 64);
					return 1;
				
				case 1:
					StringCopy(sParam1, "colter/col_default_horse_john", 64);
					return 1;
				
				case 9:
					StringCopy(sParam1, "colter/col_default_horse_lenny", 64);
					return 1;
				
				case 6:
					StringCopy(sParam1, "colter/col_default_horse_micah", 64);
					return 1;
				
				default:
					break;
			}
			StringCopy(sParam1, "colter/col_default_horses1", 64);
			return 1;
		
		case 1:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_bill", 64);
					return 1;
				
				case 7:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_charles", 64);
					return 1;
				
				case 0:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_dutch", 64);
					return 1;
				
				case 5:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_hosea", 64);
					return 1;
				
				case 2:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_javier", 64);
					return 1;
				
				case 1:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_john", 64);
					return 1;
				
				case 10:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
					return 1;
				
				case 9:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_lenny", 64);
					return 1;
				
				case 6:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_micah", 64);
					return 1;
				
				case 11:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sadie", 64);
					return 1;
				
				case 8:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sean", 64);
					return 1;
				
				case 4:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_uncle", 64);
					return 1;
				
				default:
					break;
			}
			StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
			return 1;
		
		case 2:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_bill", 64);
					return 1;
				
				case 7:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_charles", 64);
					return 1;
				
				case 0:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_dutch", 64);
					return 1;
				
				case 5:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_hosea", 64);
					return 1;
				
				case 2:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_javier", 64);
					return 1;
				
				case 1:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_john", 64);
					return 1;
				
				case 10:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_kieran", 64);
					return 1;
				
				case 9:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_lenny", 64);
					return 1;
				
				case 6:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_micah", 64);
					return 1;
				
				case 11:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sadie", 64);
					return 1;
				
				case 8:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sean", 64);
					return 1;
				
				case 4:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_uncle", 64);
					return 1;
				
				default:
					break;
			}
			StringCopy(sParam1, "clemensPoint/clm_default_horses1", 64);
			return 1;
		
		case 3:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_bill", 64);
					return 1;
				
				case 7:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_charles", 64);
					return 1;
				
				case 0:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_dutch", 64);
					return 1;
				
				case 5:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_hosea", 64);
					return 1;
				
				case 2:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_javier", 64);
					return 1;
				
				case 1:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_john", 64);
					return 1;
				
				case 10:
					StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
					return 1;
				
				case 9:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_lenny", 64);
					return 1;
				
				case 6:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_micah", 64);
					return 1;
				
				case 11:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_sadie", 64);
					return 1;
				
				case 4:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_uncle", 64);
					return 1;
				
				default:
					break;
			}
			StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
			return 1;
		
		case 5:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "lakay/lak_default_horse_bill", 64);
					return 1;
				
				case 7:
					StringCopy(sParam1, "lakay/lak_default_horse_charles", 64);
					return 1;
				
				case 0:
					StringCopy(sParam1, "lakay/lak_default_horse_dutch", 64);
					return 1;
				
				case 2:
					StringCopy(sParam1, "lakay/lak_default_horse_javier", 64);
					return 1;
				
				case 1:
					StringCopy(sParam1, "lakay/lak_default_horse_john", 64);
					return 1;
				
				case 6:
					StringCopy(sParam1, "lakay/lak_default_horse_micah", 64);
					return 1;
				
				case 11:
					StringCopy(sParam1, "lakay/lak_default_horse_sadie", 64);
					return 1;
				
				case 4:
					StringCopy(sParam1, "lakay/lak_default_horses1", 64);
					return 1;
				
				default:
					break;
			}
			StringCopy(sParam1, "lakay/lak_default_horses1", 64);
			return 1;
		
		case 6:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_bill", 64);
					return 1;
				
				case 7:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_charles", 64);
					return 1;
				
				case 0:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_dutch", 64);
					return 1;
				
				case 2:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_javier", 64);
					return 1;
				
				case 1:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_john", 64);
					return 1;
				
				case 6:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_micah", 64);
					return 1;
				
				case 11:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_sadie", 64);
					return 1;
				
				case 4:
					StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
					return 1;
				
				default:
					break;
			}
			StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
			return 1;
		
		case 8:
			StringCopy(sParam1, "beechersHope/bch_default_horses", 64);
			return 1;
	}
	return 0;
}

int func_1352()
{
	return -1;
}

int func_1353(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_260(iParam0))
	{
		return 0;
	}
	if ((!bParam5 && !Global_1359489->f_12) || (bParam5 && Global_1359489->f_13 < 8))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_125 <= 300)
		{
			if (_NAMESPACE48::_0xEB98B38CA60742D7(((*Global_1360165)[iParam0 /*1157*/])->f_126))
			{
				_NAMESPACE48::_0x49A8C2CD97815215(((*Global_1360165)[iParam0 /*1157*/])->f_126);
			}
			if (bParam5)
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_124 = _NAMESPACE48::_0x08FC896D2CB31FCC(((*Global_1360165)[iParam0 /*1157*/])->f_126, 0);
				Global_1359489->f_13++;
			}
			else
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_124 = _NAMESPACE48::_0x0CADC3A977997472(((*Global_1360165)[iParam0 /*1157*/])->f_126, 0);
			}
			_NAMESPACE48::_0x6759BEE6762E140B(((*Global_1360165)[iParam0 /*1157*/])->f_126);
			((*Global_1360165)[iParam0 /*1157*/])->f_125++;
		}
		else
		{
			iVar0 = _NAMESPACE48::_0xA00DF706C60173D1(func_674(iParam0, 1));
			STREAMING::REQUEST_MODEL(iVar0, false);
			if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_124 = func_1554(iVar0, vParam1, fParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				_NAMESPACE48::_0x7B204F88F6C3D287(((*Global_1360165)[iParam0 /*1157*/])->f_126);
			}
		}
		if (!func_29(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			return 0;
		}
		Global_1359489->f_12 = 1;
		func_278(iParam0, 256, 0);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_1354(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_260(iParam0))
	{
		return 0;
	}
	if (func_1555(iParam0, 256))
	{
		return 1;
	}
	iVar0 = 0;
	if (bParam2)
	{
		iVar0 = 256;
	}
	if (!func_29(iParam1, iVar0))
	{
		return 0;
	}
	PED::_0x1902C4CFCC5BE57C(iParam1, func_1556(iParam0));
	PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, 0);
	func_278(iParam0, 256, 1);
	return 1;
}

int func_1355(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_1356(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_BOOL(iParam0, "HorseCompanion", true);
	func_1558(iParam0, func_1557(iParam1));
	if (func_1555(iParam1, 8))
	{
		POPULATION::_0xF74E134F40192884(iParam0, 2);
		PED::SET_PED_CONFIG_FLAG(iParam0, 412, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 412, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_62(iParam1)))
	{
		PED::_0x931B241409216C1F(func_62(iParam1), iParam0, 0);
		PED::_0xED1C764997A86D5A(func_62(iParam1), iParam0);
		PED::SET_PED_CONFIG_FLAG(iParam0, 367, true);
	}
	else
	{
		func_59(iParam1, 38, 1);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0, -1856989775);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, -1856989775);
	if (Global_40.f_4283 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 172, true);
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 324, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 331, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 471, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 442, true);
	if (func_1555(iParam1, 4096))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 1, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 54, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 121, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 302, false);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 1, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 54, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 121, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 302, true);
	}
	PED::_0xAE6004120C18DF97(iParam0, 2, 0);
	PED::_0xAE6004120C18DF97(iParam0, 3, 0);
	func_1041(iParam1, func_1555(iParam1, 8192), func_1555(iParam1, 16384), 1);
}

char* func_1357(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 3:
			return "HORSE_NAME_GANG_BILL";
		
		case 7:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_CHARLES_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_CHARLES";
			}
			break;
		
		case 0:
			return "HORSE_NAME_GANG_DUTCH";
		
		case 5:
			return "HORSE_NAME_GANG_HOSEA";
		
		case 2:
			return "HORSE_NAME_GANG_JAVIER";
		
		case 1:
			return "HORSE_NAME_GANG_JOHN";
		
		case 20:
			return "HORSE_NAME_GANG_KAREN";
		
		case 9:
			return "HORSE_NAME_GANG_LENNY";
		
		case 6:
			return "HORSE_NAME_GANG_MICAH";
		
		case 10:
			return "HORSE_NAME_GANG_KIERAN";
		
		case 11:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_SADIE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_SADIE";
			}
			break;
		
		case 8:
			return "HORSE_NAME_GANG_SEAN";
		
		case 23:
			return "HORSE_NAME_GANG_TRELAWNEY";
		
		case 4:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_UNCLE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_UNCLE";
			}
			break;
		
		default:
			break;
	}
	return "";
}

void func_1358(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_1183(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, iParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

void func_1359(int iParam0)
{
	int iVar0;
	var uVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1048(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		uVar1 = func_1559(iVar6);
		if (!PED::_0x608BC6A6AACD5036(&Var2, iVar0, uVar1, 0))
		{
		}
		else
		{
			iVar7 = Var2.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7) && !ENTITY::_0x88AD6CC10D8D35B2(iVar7))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, true);
				}
				ENTITY::_0x0D0DB2B6AF19A987(&iVar7);
			}
		}
		iVar6++;
	}
}

int func_1360(int iParam0)
{
	if (!func_1560(iParam0))
	{
		return 0;
	}
	if (!func_155())
	{
		return 1;
	}
	return 0;
}

void func_1361(int iParam0, int iParam1)
{
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0 /*45*/] = iParam1;
}

void func_1362(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_1363(int iParam0, struct<2> Param1)
{
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1561(iParam0, Param1))
	{
	}
	if (!func_1562(iParam0, Param1.f_1))
	{
	}
}

void func_1364(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1563((*uParam0)[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_1365(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_1366(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0 /*5*/] = 0;
		((*uParam0)[iVar0 /*5*/])->f_1 = 0;
		((*uParam0)[iVar0 /*5*/])->f_2 = 0;
		((*uParam0)[iVar0 /*5*/])->f_3 = 0;
		((*uParam0)[iVar0 /*5*/])->f_4 = 0;
		iVar0++;
	}
}

void func_1367(var uParam0)
{
	int iVar0;
	
	uParam0->f_1 = 0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_1368(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1369(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 == 2)
	{
		iVar0 = 50;
	}
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1370(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_1371(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_1372(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_1373(int iParam0)
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

void func_1374(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam1 /*436*/], Global_40.f_1095.f_1[iParam0 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam0 /*436*/], &(Global_1900383->f_508), 436);
}

void func_1375(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_463), (*Global_1900383)[iParam1 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam1 /*45*/], (*Global_1900383)[iParam0 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam0 /*45*/], &(Global_1900383->f_463), 45);
}

int func_1376(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar58;
	int iVar59;
	
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_1497(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_1497(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_1495(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_1564(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_1565(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1377(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (func_1566(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
	}
	PED::_0xBCC76708E5677E1D(iParam0, 0);
	PED::_0x931B241409216C1F(Global_35, iParam0, 0);
	PED::_0xB8B6430EAD2D2437(iParam0, 130495496);
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iVar1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iVar2);
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	POPULATION::_0xF74E134F40192884(iParam0, 1);
	PED::_0xFD6943B6DF77E449(iParam0, false);
	PLAYER::_0xDF93973251FB2CA5(iVar0, 1);
	PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	FLOCK::_0xAEB97D84CDF3C00B(iParam0, 0);
	if (func_266(iParam0))
	{
		uVar3 = func_267(iParam0);
		if (func_1567(uVar3))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 324, true);
		}
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 211, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 209, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 400, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 136, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 312, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 113, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 277, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 319, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 6, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 24, false);
}

int func_1378()
{
	return Global_1900383->f_393;
}

void func_1379(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

void func_1380(int iParam0, int iParam1)
{
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 = iParam1;
}

void func_1381(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1057(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_1207(&iVar1, &iVar0, &iVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iParam1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 = fVar4;
	func_1568(iParam1);
	iVar5 = func_1048(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	iVar6 = BUILTIN::FLOOR((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar5, 7, iVar6);
	iVar7 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar5, 7);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iVar7;
	PED::_0xA69899995997A63B(iVar5, iVar7);
}

int func_1382(int iParam0, var uParam1)
{
	struct<4> Var0;
	
	Var0.f_9 = -1591664384;
	if (!func_1497(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_1569(Var0, 1415981582, 0);
	if (!func_350(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_1383(int iParam0, var uParam1)
{
	struct<4> Var0;
	
	Var0.f_9 = -1591664384;
	if (!func_1497(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_1569(Var0, -2119169513, 0);
	if (!func_350(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_1384(int iParam0, var uParam1)
{
	struct<4> Var0;
	
	if (!func_1570(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_1202() };
	*uParam1 = func_1569(Var0, iParam0, 0);
	if (!func_350(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

void func_1385(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::_0xDF631E4BCE1B1FC4(iParam0, -1442703445, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -1505972720, 0, false);
}

void func_1386(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_1571(iParam0, *uParam1);
	func_1571(iParam0, uParam1->f_1);
}

void func_1387(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::_0xDF631E4BCE1B1FC4(iParam0, 399422490, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -1163401704, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, 88372018, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -630346294, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -273475295, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -2142954459, 0, false);
}

void func_1388(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_1571(iParam0, *uParam1);
	func_1571(iParam0, uParam1->f_1);
	func_1571(iParam0, uParam1->f_2);
	func_1571(iParam0, uParam1->f_3);
	func_1571(iParam0, uParam1->f_4);
	func_1571(iParam0, uParam1->f_5);
}

int func_1389(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, iVar0))
	{
		return 0;
	}
	PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 1, 1, 1, 1, 0);
	}
	return 1;
}

void func_1390(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_1391(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

int func_1392(vector3 vParam0)
{
	if (func_216(Global_35, vParam0, 1) > 25f)
	{
		if (STREAMING::_0xCF45DF50C7775F2A() == 0)
		{
			STREAMING::_0x513F8AA5BF2F17CF(vParam0, 50f, 0);
		}
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		if (!STREAMING::_0x0909F71B5C070797())
		{
			return 0;
		}
	}
	return 1;
}

int func_1393(int iParam0)
{
	switch (func_120())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return 0;
}

void func_1394()
{
	func_1572(128);
}

void func_1395(int iParam0)
{
	if (func_587(iParam0))
	{
		func_1004(iParam0, 2048);
	}
}

void func_1396(int iParam0, bool bParam1, int iParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_7, iParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_9, sParam3);
}

void func_1397(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	
	sVar0 = func_1444(0, 1, bParam0, bParam1);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[1]), bParam2);
	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 0);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 1);
	}
}

int func_1398(int iParam0)
{
	float fVar0;
	
	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

void func_1399()
{
	if (func_120() != -1)
	{
		return;
	}
	if (!func_348())
	{
		return;
	}
	func_1573(&(Global_40.f_40));
}

void func_1400()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_40.f_11029)
	{
		if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iVar0 /*373*/])->f_1))
		{
			(Global_40.f_11029[iVar0 /*5*/])->f_1 = { VEHICLE::_0x1E8A921112891651(((*Global_1425371)[iVar0 /*373*/])->f_1) };
			(Global_40.f_11029[iVar0 /*5*/])->f_4 = VEHICLE::_0x67995318F5FAA496(((*Global_1425371)[iVar0 /*373*/])->f_1);
		}
		iVar0++;
	}
}

bool func_1401()
{
	return !func_503(Global_1310720->f_1);
}

int func_1402()
{
	return Global_40.f_4283.f_4;
}

void func_1403(vector3 vParam0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_1574())
	{
		fVar0 = func_1410(vParam0, Global_40.f_6);
	}
	if (func_1575(33554432))
	{
		if (!func_1355(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_1410(vParam0, Global_40.f_2);
		}
	}
	if (fVar1 > 150f && fVar0 > 150f)
	{
		*uParam3 = { Global_36 };
		*uParam4 = 6;
		return;
	}
	if (fVar0 < fVar1)
	{
		*uParam3 = { Global_40.f_6 };
		*uParam4 = 1;
	}
	else
	{
		*uParam3 = { Global_40.f_2 };
		*uParam4 = 3;
	}
}

void func_1404()
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<2> Var6;
	float fVar8;
	int iVar9[50];
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	
	if (!func_100(&Global_1935630, 8192))
	{
		return;
	}
	if (func_20(32768))
	{
		return;
	}
	func_34(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(func_1576(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * BUILTIN::TO_FLOAT(func_1576(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * BUILTIN::TO_FLOAT(func_1576(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * BUILTIN::TO_FLOAT(func_1576(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(func_1576(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * BUILTIN::TO_FLOAT(func_1576(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * BUILTIN::TO_FLOAT(func_1576(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * BUILTIN::TO_FLOAT(func_1576(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * BUILTIN::TO_FLOAT(func_1576(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_1577(10f, BUILTIN::TO_FLOAT(func_1576(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_1577(5f, BUILTIN::TO_FLOAT(func_1576(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_1577(25f, BUILTIN::TO_FLOAT(func_1578(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_1577(1f, BUILTIN::TO_FLOAT(func_1578(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_1577(6f, BUILTIN::TO_FLOAT(func_1578(64058978)))));
	fVar0 = (fVar0 + (3f * func_1577(1f, BUILTIN::TO_FLOAT(func_1578(795577402)))));
	iVar1 = func_1579();
	fVar0 = (fVar0 + (0.1111111f * func_1577(9f, BUILTIN::TO_FLOAT(iVar1))));
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1665658745)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1665658745)));
	fVar2 = func_1580(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -263938772)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -263938772))));
	fVar2 = func_1580(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 228647253)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 228647253))));
	fVar2 = func_1580(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1695604435)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1695604435))));
	fVar2 = func_1580(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -379038926)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -379038926))));
	fVar2 = func_1580(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1597499323)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1597499323))));
	fVar2 = func_1580(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -278663717)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -278663717))));
	fVar2 = func_1580(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 586249988)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 586249988))));
	fVar2 = func_1580(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -419800938)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -419800938))));
	fVar2 = func_1580(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -1362069171)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -1362069171))));
	fVar2 = func_1580(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -740350755)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -740350755))));
	fVar2 = func_1580(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1511070393)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_1577(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_1577(BUILTIN::TO_FLOAT(20), BUILTIN::TO_FLOAT(func_1581()))));
	if (func_1514(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_1514(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_1514(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_1514(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_1514(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 499813453)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 499813453)));
	fVar2 = func_1580(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 666607663)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 666607663))));
	fVar2 = func_1580(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, -220219788)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, -220219788))));
	fVar2 = func_1580(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 218622660)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 218622660))));
	fVar2 = func_1580(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 390004462)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 390004462))));
	fVar2 = func_1580(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 6410548)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_1577(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_1577(5f, BUILTIN::TO_FLOAT(func_1578(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_1577(5f, BUILTIN::TO_FLOAT(func_1576(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1144(COMPENDIUM::_0x729D52F61A5A9E22(1979337996), 50)) / BUILTIN::TO_FLOAT(50)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1144(COMPENDIUM::_0x729D52F61A5A9E22(-2125891426), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1144(COMPENDIUM::_0x729D52F61A5A9E22(1630085303), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + COMPENDIUM::_0x725D52F21A5E9E22(-1658238931));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1144(COMPENDIUM::_0x729D52F61A5A9E22(1807539419), 20)) / BUILTIN::TO_FLOAT(20)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1144(COMPENDIUM::_0x729D52F61A5A9E22(717108105), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1144(COMPENDIUM::_0x729D52F61A5A9E22(-2143405780), 48)) / BUILTIN::TO_FLOAT(48)));
	func_1582(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_1577((BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_1577(1f, BUILTIN::TO_FLOAT(func_1583(-2116919750)))));
	fVar5 = BUILTIN::TO_FLOAT(func_1584());
	fVar0 = (fVar0 + ((3f * fVar5) / BUILTIN::TO_FLOAT(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_1577(1f, BUILTIN::TO_FLOAT(func_1576(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1577(1f, BUILTIN::TO_FLOAT(func_1576(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1577(1f, BUILTIN::TO_FLOAT(func_1576(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1577(1f, BUILTIN::TO_FLOAT(func_1576(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_1577(5f, BUILTIN::TO_FLOAT(func_1578(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_1577(1f, BUILTIN::TO_FLOAT(func_1578(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_1577(1f, BUILTIN::TO_FLOAT(func_1578(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_1577(1f, BUILTIN::TO_FLOAT(func_1578(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1577(1f, BUILTIN::TO_FLOAT(func_1576(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1577(1f, BUILTIN::TO_FLOAT(func_1576(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1577(1f, BUILTIN::TO_FLOAT(func_1576(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1577(1f, BUILTIN::TO_FLOAT(func_1576(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1577(1f, BUILTIN::TO_FLOAT(func_1576(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1577(1f, BUILTIN::TO_FLOAT(func_1576(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1577(1f, BUILTIN::TO_FLOAT(func_1576(978382515, joaat("coach"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1577(1f, BUILTIN::TO_FLOAT(func_1576(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1577(1f, BUILTIN::TO_FLOAT(func_1576(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1577(1f, BUILTIN::TO_FLOAT(func_1576(978382515, 1015970717)))));
	Var6 = { func_124(joaat("total_progress_made")) };
	fVar8 = func_1585(Var6);
	STATS::_0xE141F6B40B1E3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_82(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_82(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_86(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_1586(Global_1898330[iVar61]);
				}
				else
				{
					func_1587(iVar61, 0);
					if (func_85(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_84(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (&Global_40.f_450[iVar63] > -1 && &Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = func_84(((*Global_1347702)[&Global_40.f_450[iVar63] /*49*/])->f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										TELEMETRY::_0x51EC204A6E5B5A1A(func_84(&Global_1898437), &iVar9);
									}
								}
							}
						}
					}
				}
			}
		}
	}

bool func_1405(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1406(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_1589(func_1588(255), 109029619));
	}
	else if (func_129())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_723();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1407(int iParam0)
{
	iParam0 = func_670(iParam0);
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

void func_1408(var uParam0, bool bParam1)
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_1589(func_1588(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_129())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_723())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_1409(int iParam0)
{
	iParam0 = func_670(iParam0);
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

float func_1410(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_1411(int iParam0)
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
	
	iParam0 = func_670(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1057(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1407(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1407(iParam0) + 1;
	fVar6 = func_1590(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_1591(fVar3, fVar4, fVar11);
	return uVar12;
}

void func_1412(int iParam0)
{
	MAP::_0xB059D7BD3D78C16F(iParam0, -401963276);
	MAP::_0xB059D7BD3D78C16F(iParam0, 231194138);
	MAP::_0xB059D7BD3D78C16F(iParam0, -1012863186);
	MAP::_0xB059D7BD3D78C16F(iParam0, -272772079);
	MAP::_0xB059D7BD3D78C16F(iParam0, 1313031610);
	MAP::_0xB059D7BD3D78C16F(iParam0, -1814032670);
	MAP::_0xB059D7BD3D78C16F(iParam0, -1380599892);
	MAP::_0xB059D7BD3D78C16F(iParam0, 430539302);
	MAP::_0xB059D7BD3D78C16F(iParam0, -995247980);
	MAP::_0xB059D7BD3D78C16F(iParam0, -25056193);
	MAP::_0xB059D7BD3D78C16F(iParam0, -264630352);
}

void func_1413(int iParam0)
{
	MAP::_0xB059D7BD3D78C16F(iParam0, 673950256);
	MAP::_0xB059D7BD3D78C16F(iParam0, 561559387);
	MAP::_0xB059D7BD3D78C16F(iParam0, -201249929);
}

void func_1414(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_1415(bool bParam0)
{
	func_1592(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_0x4CC5F2FC1332577F(121713391);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(121713391);
	}
}

float func_1416(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar4 = func_1108(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1417(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1593(iVar6) - func_1593(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		
		default:
			break;
	}
	return -1f;
}

int func_1417(float fParam0)
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

int func_1418(int iParam0)
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

int func_1419(int iParam0)
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

int func_1420(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_1417(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_1593(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_1593(iVar0 + 1));
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

int func_1421(int iParam0)
{
	int iVar0;
	
	if (func_1594(iParam0, &iVar0))
	{
		return func_1593(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1595())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		
		case 0:
			if (func_1595())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		
		case 2:
			if (func_1595())
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

int func_1422(int iParam0)
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

void func_1423(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_1596(iParam0));
	sVar4 = func_1598(func_1597(iVar3, iParam2));
	sVar6 = func_1599(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::_CREATE_VAR_STRING(10, sVar0, func_1600(iParam0));
	uVar8 = func_1601(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = uVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1602(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_751(sVar7, sVar1, uVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1603(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1424(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

int func_1425(int iParam0)
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

bool func_1426(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_1427(int iParam0)
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

int func_1428(int iParam0)
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

int func_1429(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;
	
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1604(&iVar0, 0, iVar95, &Var1) && !func_1604(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_1605(iVar0, &Var1);
			if (func_350(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95 = (iVar95 + 1);
	}
	return 0;
}

void func_1430()
{
	var uVar0;
	struct<4> Var30;
	
	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	func_1606(Global_35, &uVar0);
	Var30 = { func_869(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_1607(0);
	func_1608(7);
	func_1609(-1623728698, 1, 1, 0);
	if (func_452() == 1160113249)
	{
		func_1609(-763730846, 1, 1, 1);
		func_1609(-361635024, 1, 1, 1);
	}
	func_1610(Global_35, &uVar0);
}

int func_1431(int iParam0)
{
	int iVar0;
	
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_463(iVar0);
}

int func_1432(var uParam0, int iParam1)
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
		iParam1 = func_706(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, uParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_877(&uVar6, iVar0);
	func_878(&uVar6, iVar1);
	func_879(&uVar6, iVar2);
	func_880(&uVar6, iVar3);
	func_881(&uVar6, iVar4);
	func_882(&uVar6, iVar5);
	return uVar6;
}

void func_1433(int iParam0)
{
	struct<2> Var0;
	
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_124(1356759001) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_1434(var uParam0, int iParam1)
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
			if ((func_1611(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_1611(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_1612(uParam0->f_2[iVar0 /*2*/], 2, 6);
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

void func_1435(var uParam0, var uParam1, var uParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1613(uParam0, 1))
	{
		func_1614(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = uParam2;
	uParam0->f_2[*uParam0 /*2*/] = uParam1;
	*uParam0++;
}

int func_1436(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		iParam0 = func_452();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1437(var uParam0, var uParam1, int iParam2, var uParam3)
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

int func_1438(var uParam0)
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

void func_1439(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1946804->f_1497.f_1[iParam0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_120() == -1)
	{
		func_456(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_26795.f_776);
	}
	else
	{
		func_1615(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_36637.f_45.f_350.f_1011);
	}
}

int func_1440(int iParam0, int iParam1)
{
	if (func_120() == -1)
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

void func_1441(int iParam0, bool bParam1, int iParam2)
{
	func_1463(&(Global_1946804->f_1378), iParam0);
	func_1464(2, iParam0, 6);
	if (bParam1)
	{
		func_855(0, 1);
	}
}

float func_1442(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_1443(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_1444(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_835(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				
				case 2:
					return func_835(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_1445()
{
	return Global_1946804->f_1497;
}

char* func_1446(int iParam0)
{
	int iVar0;
	
	iVar0 = func_1190(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_956(iVar0);
}

int func_1447(int iParam0)
{
	int iVar0;
	
	if (func_1616(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1617(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1618(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1619(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_1448(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_171(func_1620(iVar0, iParam0), 1, 0))
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

int func_1449(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_171(func_1621(iVar0, iParam0), 1, 0))
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

bool func_1450(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1451()
{
	int iVar0;
	
	if (func_120() != -1)
	{
		return;
	}
	func_424(1654063339, 1, 752097756);
	iVar0 = func_1111(1);
	func_1423(1, iVar0, 0);
}

void func_1452(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1453()
{
	int iVar0;
	
	if (func_120() != -1)
	{
		return;
	}
	func_424(1623931083, 1, 752097756);
	iVar0 = func_1111(2);
	func_1423(2, iVar0, 0);
}

void func_1454()
{
	int iVar0;
	
	if (func_120() != -1)
	{
		return;
	}
	func_424(-1845241476, 1, 752097756);
	iVar0 = func_1111(0);
	func_1423(0, iVar0, 0);
}

int func_1455(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1456(int iParam0, var uParam1)
{
	var uVar0;
	struct<2> Var1;
	int iVar8;
	
	iVar8 = 0;
	if (!func_1622(iParam0, func_452()))
	{
		return 0;
	}
	Var1 = func_857(func_452());
	Var1.f_1 = iParam0;
	DATAFILE::_0x91DED5DD64BB2691(&Var1);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		return 0;
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&uVar0, &Var1, 1373051002))
		{
		}
		else
		{
			(*uParam1)[iVar8] = uVar0;
			iVar8++;
		}
	}
	return iVar8;
}

int func_1457(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	var uVar19;
	struct<14> Var20;
	
	Var5.f_9 = -1591664384;
	uVar19 = func_857(func_452());
	Var20 = { func_1105(0, -1591664384, -1591664384, -1591664384, -999503751, 0) };
	if (!func_1107(&Var20, &iVar0, &iVar1, bParam3))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_812(&Var5, iVar2, iVar0, iVar1))
		{
		}
		else if (iParam0 == Var5.f_4)
		{
		}
		else
		{
			iVar4 = func_821(Var5.f_4);
			if (iVar4 >= 0 && iVar4 <= 5)
			{
			}
			else
			{
				iVar3 = (*uParam2 - 1);
				while (iVar3 >= 0)
				{
					func_1230(&(Global_1946804->f_964), uVar19, Var5.f_4, 1373051002, 1, uParam1[iVar3]);
					DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
					if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804->f_964)))
					{
					}
					else
					{
						*uParam2 = (*uParam2 - 1);
						(*uParam1)[iVar3] = uParam1[*uParam2];
						(*uParam1)[*uParam2] = 0;
					}
					iVar3 = (iVar3 + -1);
				}
			}
		}
		iVar2++;
	}
	func_813(iVar0);
	return 1;
}

void func_1458(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	iVar2 = iParam0;
	if (!func_1222(iVar2, &iVar0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_26795.f_627.f_121.f_19)
	{
		if (iVar2 == &Global_26795.f_627.f_121[iVar0])
		{
			bVar1 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar1)
	{
		return;
	}
	if (Global_26795.f_627.f_121.f_19 == 1)
	{
		Global_26795.f_627.f_121.f_19 = 0;
		*uParam1 = 0;
		Global_26795.f_627.f_121[0] = 0;
		return;
	}
	Global_26795.f_627.f_121.f_19 = (Global_26795.f_627.f_121.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_26795.f_627.f_121[iVar0] = &Global_26795.f_627.f_121[Global_26795.f_627.f_121.f_19];
	Global_26795.f_627.f_121[Global_26795.f_627.f_121.f_19] = 0;
}

void func_1459(var uParam0)
{
	int iVar0;
	
	*uParam0 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(uParam0->f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_1460(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_1623();
	}
	if (func_120() == -1)
	{
		return (Global_26795.f_26[iParam0 /*120*/])->f_1;
	}
	return (Global_36637.f_45.f_350.f_26[iParam0 /*120*/])->f_1;
}

void func_1461(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (func_120() == -1)
	{
		Global_26795.f_26[iParam0 /*120*/] = 0;
		(Global_26795.f_26[iParam0 /*120*/])->f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uVar1 = &Global_1946804->f_57[iVar0 /*11*/];
			func_456(&uVar1, iVar0, iParam0);
			iVar0++;
		}
		return;
	}
	Global_36637.f_45.f_350.f_26[iParam0 /*120*/] = 0;
	(Global_36637.f_45.f_350.f_26[iParam0 /*120*/])->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uVar1 = &Global_1946804->f_57[iVar0 /*11*/];
		func_1615(&uVar1, iVar0, iParam0);
		iVar0++;
	}
}

bool func_1462(int iParam0)
{
	return (Global_26795.f_774 && iParam0) != 0;
}

void func_1463(var uParam0, int iParam1)
{
	int iVar0;
	
	if (func_120() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_456(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
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
		func_1615(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_1464(int iParam0, int iParam1, int iParam2)
{
	if (func_120() == -1)
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

void func_1465(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!func_822(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0 /*3*/] && iParam1);
	Global_40.f_7157[iParam0 /*3*/] = (&Global_40.f_7157[iParam0 /*3*/] - iVar0);
}

int func_1466(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_1190(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_1460(iParam1);
	}
	if ((iParam3 && func_1191(iParam1, 4096)) && Global_1946804->f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_1622(iVar0, Global_1946804->f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_1465(Global_40.f_7729, 4096);
		func_1193(&Global_1905941, 4096);
		Global_40.f_7729 = &Global_1905941;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		func_1033(iParam0);
	}
	func_1624();
	if (!func_1625(iParam1))
	{
		func_1627(iVar0, iParam0, func_1626(iParam1), 1, 0, 1);
	}
	func_1628(iParam0);
	return 1;
}

void func_1467(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_1468(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

int func_1469(int iParam0)
{
	if (func_129())
	{
		switch (iParam0)
		{
			case -1346384396:
				return 1351319737;
			
			case -712836614:
				return 1832924306;
			
			case -1629133289:
				return -960265739;
			
			case 1302066700:
				return 1484641439;
			
			case 599669344:
				return -1742648548;
			
			case -1555511632:
				return -288915854;
		}
	}
	else if (func_723())
	{
		switch (iParam0)
		{
			case -1346384396:
				return -5120398;
			
			case -712836614:
				return 540384851;
			
			case -1629133289:
				return 859626502;
			
			case 1302066700:
				return -415239647;
			
			case 599669344:
				return 1436607742;
			
			case -1555511632:
				return 691935155;
		}
	}
	return 0;
}

void func_1470(var uParam0, var uParam1)
{
	*uParam0 = uParam1;
}

void func_1471(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1;
}

void func_1472(var uParam0, var uParam1)
{
	uParam0->f_2 = uParam1;
}

void func_1473(var uParam0, var uParam1)
{
	uParam0->f_3 = uParam1;
}

void func_1474(var uParam0, var uParam1)
{
	uParam0->f_4 = uParam1;
}

void func_1475(var uParam0, var uParam1)
{
	uParam0->f_5 = uParam1;
}

int func_1476(int iParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> Var10;
	struct<4> Var14;
	var uVar18;
	var uVar19;
	var uVar20;
	int iVar21;
	
	if (!func_350(iParam0, 0))
	{
		return 0;
	}
	if (!func_1629(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return 0;
	}
	Var10 = { func_1202() };
	Var14 = { func_762(iParam0, Var10, iVar9, 0) };
	if (func_1219(Var14, iParam1))
	{
		if (func_1630(iParam0))
		{
			if (func_1384(325139909, &uVar18))
			{
				if (func_1476(uVar18, 0))
				{
				}
			}
		}
		else if (func_1631(iParam0))
		{
			if (func_1384(325139909, &uVar19))
			{
				if (func_1476(uVar19, 0))
				{
				}
			}
			if (func_1384(986998820, &uVar20))
			{
				if (func_1476(uVar20, 0))
				{
				}
			}
			iVar21 = func_1632(iParam0);
			if (func_350(iVar21, 0))
			{
				if (func_1476(iVar21, 1))
				{
				}
			}
		}
		func_1633();
		return 1;
	}
	return 0;
}

int func_1477()
{
	return 1342496140;
}

int func_1478()
{
	return 446670976;
}

int func_1479()
{
	return 1;
}

int func_1480()
{
	return -868094182;
}

int func_1481()
{
	return 1074477367;
}

int func_1482()
{
	return 1;
}

int func_1483()
{
	return -997197050;
}

int func_1484()
{
	return -2063289686;
}

int func_1485()
{
	return 2;
}

int func_1486()
{
	return -868094182;
}

int func_1487()
{
	return 1074477367;
}

int func_1488()
{
	return 1;
}

int func_1489()
{
	return 1235275977;
}

int func_1490()
{
	return 2030804811;
}

int func_1491()
{
	return 1;
}

int func_1492()
{
	return 1974379573;
}

int func_1493()
{
	return 2024948086;
}

int func_1494()
{
	return 1;
}

int func_1495(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
		
		case 1:
			return -832337898;
		
		case 2:
			return 1271463052;
		
		case 3:
			return 1983140194;
		
		case 4:
			return 677262775;
	}
	return 0;
}

int func_1496(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(func_706(bParam2), uParam0, iParam1);
}

int func_1497(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;
	
	if (!func_1212(iParam0))
	{
		return 0;
	}
	iVar0 = func_1495(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_869(0) };
	if (!func_1634(Var15, iVar0, &Var1, 0, 0))
	{
		return 0;
	}
	if (!func_1635(&Var1, uParam1))
	{
		return 0;
	}
	return 1;
}

bool func_1498(int iParam0)
{
	return func_369(iParam0) == -1784221369;
}

int func_1499(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<28> Var16;
	struct<17> Var44;
	struct<16> Var61;
	
	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_874(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_369(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1636(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1637(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1638(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1639(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1640(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1641(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1500(int iParam0, int iParam1, int iParam2)
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
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_792(iVar9);
	iVar2 = func_792(iVar10);
	iVar3 = func_792(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_792(iVar12);
	}
	iVar5 = func_793(iVar9);
	iVar6 = func_793(iVar10);
	iVar7 = func_793(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_793(iVar12);
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

var func_1501(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1502(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1503(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1642(uParam0->f_1[iParam1 /*5*/]);
	*(uParam0->f_1[iParam1 /*5*/]) = { *(uParam0->f_1[*uParam0 /*5*/]) };
}

int func_1504(int iParam0, var uParam1)
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

void func_1505(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1506(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	struct<2> Var21[15];
	
	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		Var21[iVar0 /*2*/] = uParam2[iVar0 /*2*/];
		(Var21[iVar0 /*2*/])->f_1 = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (&Var21[iVar0 /*2*/] == Var19)
							{
								(Var21[iVar0 /*2*/])->f_1 = ((Var21[iVar0 /*2*/])->f_1 - Var19.f_1);
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if ((Var21[iVar0 /*2*/])->f_1 != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = BUILTIN::FLOOR((IntToFloat(((*uParam2)[iVar0 /*2*/])->f_1) * ((Var21[iVar0 /*2*/])->f_1 / 1f)));
		}
		iVar0++;
	}
}

int func_1507(int iParam0)
{
	switch (iParam0)
	{
		case -2045110373:
			return 5;
		
		case 2092390181:
			return 6;
		
		case 695356898:
			return 0;
		
		case 2093317438:
			return 2;
		
}