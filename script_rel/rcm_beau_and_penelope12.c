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
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21[69] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_91[21] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	struct<20> Local_173[7];
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<20> Local_324[6];
	int iLocal_445 = 0;
	struct<20> Local_446[49];
	int iLocal_1427 = 0;
	int iLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	struct<20> Local_1432[4];
	struct<23> Local_1513[2];
	int iLocal_1560 = 0;
	int iLocal_1561 = 0;
	int iLocal_1562[3] = { 0, 0, 0 };
	int iLocal_1566[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1572 = 0;
	int iLocal_1573 = 0;
	vector3 vLocal_1574 = { 0f, 0f, 0f };
	float fLocal_1577 = 0f;
	vector3 vLocal_1578 = { 0f, 0f, 0f };
	float fLocal_1581 = 0f;
	int iLocal_1582 = 0;
	int iLocal_1583 = 0;
	int iLocal_1584 = 0;
	int iLocal_1585 = 0;
	int iLocal_1586 = 0;
	int iLocal_1587 = 0;
	int iLocal_1588 = 0;
	int iLocal_1589 = 0;
	int iLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	int iLocal_1597 = 0;
	int iLocal_1598 = 0;
	int iLocal_1599 = 0;
	int iLocal_1600[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_1613 = false;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = -1;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 1097859072;
	var uLocal_1632 = 1000;
	var uLocal_1633 = 1067450368;
	var uLocal_1634 = 5000;
	var uLocal_1635 = 42;
	var uLocal_1636 = 1103626240;
	var uLocal_1637 = 1077936128;
	var uLocal_1638 = 1106247680;
	var uLocal_1639 = 1103101952;
	var uLocal_1640 = 1097859072;
	var uLocal_1641 = 1103626240;
	var uLocal_1642 = 0;
	vector3 vLocal_1643 = { 0f, 0f, 0f };
	int iLocal_1646 = 0;
	float fLocal_1647 = 0f;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 1;
	var uLocal_1654 = 1;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	int iLocal_1663 = 0;
	int iLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	int iLocal_1668 = 0;
	int iLocal_1669 = 0;
	int iLocal_1670 = 0;
	int iLocal_1671 = 0;
	int iLocal_1672 = 0;
	int iLocal_1673 = 0;
	int iLocal_1674 = 0;
	int iLocal_1675 = 0;
	int iLocal_1676 = 0;
	int iLocal_1677 = 0;
	int iLocal_1678 = 0;
	int iLocal_1679 = 0;
	int iLocal_1680 = 0;
	int iLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	vector3 vLocal_1685[11] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	int iLocal_1725 = 0;
	int iLocal_1726 = 0;
	bool bLocal_1727 = false;
	var uLocal_1728 = 1;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 570;
	var uLocal_1732 = 1065353216;
	var uLocal_1733 = -1082130432;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 3;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	int iLocal_1746 = 0;
	int iLocal_1747 = 0;
	var uLocal_1748 = -1;
	var uLocal_1749 = 0;
	var uLocal_1750 = -1;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = -1;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 1073741824;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 1;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 1106247680;
	var uLocal_1774 = 1067450368;
	var uLocal_1775 = 0;
	var uLocal_1776 = 1092616192;
	var uLocal_1777 = 1112014848;
	var uLocal_1778 = 1106247680;
	var uLocal_1779 = 1101529088;
	var uLocal_1780 = 1101004800;
	var uLocal_1781 = 1084227584;
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
	struct<17> Local_1808[1];
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	bool bLocal_1829 = false;
	int iLocal_1830 = 0;
	char* sLocal_1831 = NULL;
	char* sLocal_1832 = NULL;
	struct<5> Local_1833[65];
	int iLocal_2159 = 0;
	int iLocal_2160 = 0;
	var uLocal_2161[3] = { 0, 0, 0 };
	var uLocal_2165 = 0;
	vector3 vLocal_2166 = { 0f, 0f, 0f };
	float fLocal_2169 = 0f;
	vector3 vLocal_2170 = { 0f, 0f, 0f };
	float fLocal_2173 = 0f;
	vector3 vLocal_2174 = { 0f, 0f, 0f };
	float fLocal_2177 = 0f;
	vector3 vLocal_2178 = { 0f, 0f, 0f };
	float fLocal_2181 = 0f;
	int iLocal_2182 = 0;
	int iLocal_2183 = 0;
	int iLocal_2184 = 0;
	int iLocal_2185 = 0;
	int iLocal_2186[49] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_2236 = false;
	int iLocal_2237 = 0;
	int iLocal_2238 = 0;
	int iLocal_2239 = 0;
	int iLocal_2240 = 0;
	int iLocal_2241 = 0;
	int iLocal_2242 = 0;
	int iLocal_2243 = 0;
	int iLocal_2244 = 0;
	int iLocal_2245 = 0;
	int iLocal_2246 = 0;
	int iLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	int iLocal_2251 = 0;
	int iLocal_2252 = 0;
	int iLocal_2253 = 0;
	bool bLocal_2254 = false;
	int iLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	float fLocal_2259 = 0f;
	struct<61> Local_2260[2];
	struct<17> Local_2383[2];
	int iLocal_2418 = 0;
	int iLocal_2419 = 0;
	int iLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	float fLocal_2424 = 0f;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	int iLocal_2427 = 0;
	int iLocal_2428 = 0;
	float fLocal_2429 = 0f;
	int iLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	int iLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	bool bLocal_2438 = false;
	bool bLocal_2439 = false;
	int iLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	int iLocal_2444 = 0;
	int iLocal_2445 = 0;
	int iLocal_2446 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<2606> Var0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_19 = 1;
	iLocal_165 = joaat("a_c_horse_americanpaint_overo");
	iLocal_168 = joaat("cs_penelopebraithwaite");
	iLocal_172 = joaat("wagon02x");
	iLocal_314 = -82000500;
	iLocal_315 = joaat("cs_mrs_calhoun");
	iLocal_1572 = joaat("a_m_m_rhdtownfolk_02");
	iLocal_1573 = 2077812612;
	vLocal_1574 = { 1435.21f, -1440.91f, 78.61f };
	fLocal_1577 = -134.72f;
	vLocal_1578 = { 1434.94f, -1441.8f, 78.55f };
	fLocal_1581 = -108.58f;
	iLocal_1585 = joaat("a_m_m_rhdtownfolk_02");
	iLocal_1586 = joaat("a_m_m_rhdupperclass_01");
	iLocal_1587 = joaat("a_f_m_rhdtownfolk_01");
	iLocal_1588 = joaat("a_f_m_rhdupperclass_01");
	iLocal_1589 = joaat("cs_scottgray");
	iLocal_1590 = joaat("cs_iangray");
	iLocal_1681 = joaat("p_cs_letter03x");
	sLocal_1831 = "rbap13_beauLeadsToWagon";
	sLocal_1832 = "rbap12_beau_chapel";
	vLocal_2166 = { 1850.647f, -1355.572f, 41.118f };
	fLocal_2169 = 199.6201f;
	vLocal_2170 = { func_1(24) };
	fLocal_2173 = func_2(24);
	vLocal_2174 = { func_1(19) };
	fLocal_2177 = func_2(19);
	vLocal_2178 = { 1412.941f, -1768.659f, 65.9138f };
	fLocal_2181 = 207.5457f;
	fLocal_2259 = 15f;
	iLocal_2419 = -1;
	fLocal_2424 = 5f;
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
		func_3(&(Var0.f_172), 4096);
	}
	else
	{
		func_4(&(Var0.f_172), 4096);
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4650))
	{
		func_5(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_6(&Var0);
	while (true)
	{
		func_7(&Var0);
		if (func_8(Var0.f_172, 50331648))
		{
			func_9(&Var0);
		}
		else
		{
			switch (Var0.f_177)
			{
				case 0:
					func_10(&Var0);
					break;
				case 1:
					func_11(&Var0);
					break;
				case 3:
					func_12(&Var0);
					break;
				case 4:
					func_13(&Var0);
					break;
				case 2:
					func_14(&Var0);
					break;
				case 5:
					func_15(&Var0);
					break;
				case 6:
					func_16(&Var0);
					break;
				case 7:
					func_17(&Var0);
					break;
				case 8:
					func_18(&Var0);
					break;
				case 9:
					func_19(&Var0, 0);
					break;
				case 10:
					func_20(&Var0);
					break;
				case 11:
					if (Var0.f_174 == func_21())
					{
						func_22();
						func_23();
					}
					func_24(&Var0);
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
}

Vector3 func_1(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1862.547f, -1350.442f, 41.6879f;
		case 1:
			return 1860.705f, -1350.494f, 41.3188f;
		case 2:
			return 1387.92f, -1788.915f, 65.3236f;
		case 5:
			return 1454.201f, -1442.725f, 75.2137f;
		case 6:
			return 1299.637f, -1317.098f, 75.522f;
		case 3:
			return 1299.35f, -1315.24f, 75.54f;
		case 4:
			return 1442.054f, -1447.067f, 76.2945f;
		case 8:
			return 1302.225f, -1297.588f, 75.5048f;
		case 9:
			return 1278.744f, -1314.463f, 75.7564f;
		case 10:
			return 1862.543f, -1349.136f, 41.2966f;
		case 11:
			return 1860.97f, -1350.12f, 41.31f;
		case 12:
			return 1857.801f, -1358.067f, 41.2644f;
		case 13:
			return 1276.18f, -1323.179f, 75.8406f;
		case 14:
			return 1407.337f, -1773.477f, 65.7306f;
		case 15:
			return 1443.85f, -1445.677f, 76.2724f;
		case 16:
			return 1300.25f, -1292.55f, 76.2185f;
		case 17:
			return 1443.321f, -1437.516f, 77.8997f;
		case 18:
			return 1291.974f, -1286.901f, 74.8584f;
		case 19:
			return 1293.936f, -1317.825f, 75.7399f;
		case 20:
			return 1299.336f, -1300.77f, 76.3604f;
		case 21:
			return 1303.329f, -1298.778f, 75.4939f;
		case 22:
			return 1846.914f, -1350.948f, 41.3527f;
		case 23:
			return 1277.143f, -1317.557f, 75.6573f;
		case 24:
			return 1444.651f, -1444.013f, 76.4894f;
		case 25:
			return 1444.7f, -1444.2f, 75.38f;
		case 26:
			return 1335.679f, -1309.494f, 75.4299f;
		case 27:
			return 1407.337f, -1773.477f, 65.7306f;
		case 28:
			return 1283.967f, -1326.134f, 76.3259f;
		case 29:
			return 1399.489f, -1782.868f, 64.4201f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_2(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 20.7268f;
		case 2:
			return 9.4121f;
		case 5:
			return 67.9497f;
		case 6:
			return 88.4141f;
		case 8:
			return 8.3227f;
		case 4:
			return 333.6f;
		case 9:
			return 156.5724f;
		case 10:
			return 101.538f;
		case 12:
			return 200.538f;
		case 13:
			return 288.6784f;
		case 14:
			return 0f;
		case 15:
			return 301.217f;
		case 16:
			return 139.542f;
		case 17:
			return 70f;
		case 18:
			return 55.3556f;
		case 19:
			return 117.4983f;
		case 20:
			return 324.1779f;
		case 21:
			return 0f;
		case 22:
			return 205.3468f;
		case 23:
			return 180f;
		case 24:
			return 52.9749f;
		case 25:
			return 0f;
		case 26:
			return 0f;
		case 27:
			return 0f;
		default:
			break;
	}
	return 0f;
}

void func_3(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_4(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_5(var uParam0)
{
	int iVar0;

	if (&Global_1879534 == 1)
	{
		func_25(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43));
	}
	if (func_8(uParam0->f_172, 8))
	{
		iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
		func_26(uParam0, iVar0);
		if (iVar0 == 32)
		{
			func_18(uParam0);
		}
		else
		{
			func_19(uParam0, 1);
			return;
		}
	}
	if (uParam0->f_177 == 10)
	{
		func_27(uParam0);
	}
	func_28(&(uParam0->f_753));
	func_24(uParam0);
}

void func_6(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (uParam0->f_174 == func_21())
	{
		bVar0 = true;
	}
	else if (func_29(uParam0))
	{
		bVar0 = true;
		func_30(uParam0, 128);
	}
	if (bVar0)
	{
		func_30(uParam0, 64);
		if (func_31())
		{
			func_30(uParam0, 128);
		}
		func_32(0, 0);
	}
	if (func_33(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
	{
		uParam0->f_741 = 0f;
		uParam0->f_742 = 0f;
	}
	if (!func_34(uParam0, 64))
	{
		func_35(uParam0->f_174, 1);
		func_36(uParam0->f_174, 1);
	}
	func_37(uParam0->f_174);
	func_38(uParam0);
	func_39(uParam0);
	func_40(uParam0, 0, 0, 0, -1, -1, 0);
	func_41(uParam0, 0, 0, 0, -1, -1, 0);
	func_42(&(uParam0->f_178));
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_28 != 0)
	{
		func_43(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, 7);
	}
	func_44(uParam0);
	func_45(uParam0, 1);
	iVar1 = func_46(uParam0);
	if (!func_8(uParam0->f_172, 8388608) && func_47(uParam0))
	{
		iVar1 = 4;
	}
	if (!func_48(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 64))
	{
		if ((iVar1 != 0 && iVar1 != 1) && !func_47(uParam0))
		{
			func_49(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
		}
	}
	func_50();
	func_51(uParam0, iVar1);
}

void func_7(var uParam0)
{
	int iVar0;
	struct<4> Var1;

	if (func_8(uParam0->f_172, 50331648))
	{
		return;
	}
	if (func_52())
	{
		func_3(&(uParam0->f_172), 16777216);
		if (!func_8(uParam0->f_172, 8))
		{
			func_53(uParam0, 14);
		}
		return;
	}
	else if (func_54())
	{
		func_3(&(uParam0->f_172), 33554432);
		if (!func_8(uParam0->f_172, 8))
		{
			func_53(uParam0, 15);
		}
		return;
	}
	if (func_55(uParam0))
	{
		return;
	}
	func_4(&(uParam0->f_172), 64);
	func_4(&(uParam0->f_172), 128);
	if (func_8(uParam0->f_172, 67108864))
	{
		func_56(1);
		func_4(&(uParam0->f_172), 67108864);
	}
	func_57(uParam0);
	if (((uParam0->f_177 == 11 || uParam0->f_177 == 10) || uParam0->f_177 == 8) || uParam0->f_177 == 9)
	{
		return;
	}
	if (func_8(uParam0->f_172, 4096))
	{
		iVar0 = func_58(0);
		if (!func_59(iVar0) || ((*Global_1347702)[uParam0->f_174 /*49*/])->f_15 == iVar0)
		{
			func_4(&(uParam0->f_172), 4096);
		}
		else
		{
			return;
		}
	}
	if (!func_8(uParam0->f_172, 8) && func_60())
	{
		if (uParam0->f_174 != 59 || !func_61(97))
		{
			if (uParam0->f_174 != 155 || !func_61(8))
			{
				return;
			}
		}
	}
	if (uParam0->f_177 != 2)
	{
		if (func_8(uParam0->f_172, 8))
		{
			if (func_34(uParam0, 32))
			{
				if (!func_34(uParam0, 64))
				{
					if (!func_62(32768))
					{
						Var1 = { func_63(0) };
						if (func_64(&Var1))
						{
							func_65(uParam0, 32);
						}
					}
					else
					{
						func_65(uParam0, 32);
					}
				}
				else
				{
					func_65(uParam0, 32);
				}
			}
			if (func_66(uParam0))
			{
				if (uParam0->f_177 != 6 && uParam0->f_177 != 5)
				{
					func_51(uParam0, 9);
					return;
				}
			}
			else if (func_67(uParam0))
			{
				if (uParam0->f_177 != 6 && uParam0->f_177 != 5)
				{
					func_51(uParam0, 8);
					return;
				}
			}
			if (!func_8(uParam0->f_172, 131072))
			{
				if (!Global_1935630->f_12)
				{
					PED::SET_PED_RESET_FLAG(Global_35, 187, true);
				}
			}
			if (!func_8(uParam0->f_172, 268435456))
			{
				func_68();
			}
			if (!func_8(uParam0->f_172, 536870912))
			{
				POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
			}
			if (!func_8(uParam0->f_172, 1073741824))
			{
				func_69(1, 0);
			}
			func_70(uParam0);
		}
		else if (!func_34(uParam0, 64) && !func_29(uParam0))
		{
			uParam0->f_743 = BUILTIN::VDIST2(func_71(uParam0->f_174), Global_36);
			if (func_72(uParam0))
			{
				if (func_73(uParam0) == 2 || func_73(uParam0) == 12)
				{
					func_24(uParam0);
					return;
				}
				func_74(uParam0);
				func_51(uParam0, 10);
				return;
			}
			else
			{
				func_75(uParam0);
			}
			func_76(uParam0);
		}
	}
	func_77(uParam0);
	if (func_8(uParam0->f_172, 32))
	{
		func_79(uParam0, func_78(uParam0));
	}
	else if (func_8(uParam0->f_172, 8))
	{
		if (func_80(uParam0))
		{
		}
	}
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_9(var uParam0)
{
	if (func_8(uParam0->f_172, 8))
	{
		func_19(uParam0, 0);
	}
	else
	{
		if (!func_81(&(uParam0->f_2597)))
		{
			func_82(&(uParam0->f_2597), 0);
		}
		func_83(uParam0);
		if (func_84(&(uParam0->f_2597)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (uParam0->f_177 == 10)
			{
				func_27(uParam0);
			}
			else
			{
				func_74(uParam0);
			}
			func_24(uParam0);
		}
	}
}

void func_10(var uParam0)
{
	if (!func_85(64))
	{
		return;
	}
	if (func_86())
	{
		if (Global_1310720->f_6)
		{
		}
		else
		{
			return;
		}
	}
	if (Global_1879534 && func_29(uParam0))
	{
		return;
	}
	if (func_8(uParam0->f_172, 8192))
	{
		func_51(uParam0, 1);
	}
}

void func_11(var uParam0)
{
	if (func_87(uParam0))
	{
		if (func_34(uParam0, 64))
		{
			func_88(uParam0);
			func_51(uParam0, 2);
			func_80(uParam0);
		}
		else if (func_33(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
		{
			func_51(uParam0, 3);
		}
		else
		{
			func_89(uParam0);
			func_51(uParam0, 4);
		}
	}
}

void func_12(var uParam0)
{
	int iVar0;

	if (!func_81(&(uParam0->f_2585)) || IntToFloat(func_84(&(uParam0->f_2585))) > func_90(uParam0))
	{
		func_82(&(uParam0->f_2585), 1);
		iVar0 = func_91(uParam0);
		if (iVar0 != 3)
		{
			if ((iVar0 == 7 || iVar0 == 5) || iVar0 == 6)
			{
				func_88(uParam0);
				func_80(uParam0);
			}
			func_51(uParam0, iVar0);
		}
	}
}

void func_13(var uParam0)
{
	int iVar0;

	if (!func_85(64))
	{
		return;
	}
	if (func_86())
	{
		return;
	}
	else if (func_92(&Global_1935630, 131072))
	{
		return;
	}
	else if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	func_93(uParam0);
	if (func_94(uParam0))
	{
		func_88(uParam0);
		iVar0 = func_95(uParam0);
		if (iVar0 == 5)
		{
			func_96(uParam0, 4);
			func_15(uParam0);
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
			func_96(uParam0, 4);
			func_16(uParam0);
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
		if (func_29(uParam0))
		{
			if (iVar0 == 7 && !CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
		func_80(uParam0);
		func_51(uParam0, iVar0);
	}
}

void func_14(var uParam0)
{
	if (!func_8(uParam0->f_172, 8192))
	{
		return;
	}
	func_51(uParam0, func_98(uParam0, func_97(uParam0)));
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
		func_99(0);
	}
	else if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
}

void func_15(var uParam0)
{
	if (func_100(uParam0))
	{
		func_16(uParam0);
		func_51(uParam0, 6);
	}
}

void func_16(var uParam0)
{
	int iVar0;

	func_101(uParam0);
	if (func_102(&(uParam0->f_2575)))
	{
		if (func_103(uParam0))
		{
			func_104(uParam0, 1);
			iVar0 = func_105(uParam0);
			func_51(uParam0, iVar0);
		}
	}
	else
	{
		func_4(&(uParam0->f_172), 16);
		func_104(uParam0, 0);
		iVar0 = func_105(uParam0);
		func_51(uParam0, iVar0);
	}
}

void func_17(var uParam0)
{
	int iVar0;

	if (func_106(uParam0))
	{
		return;
	}
	if (func_8(uParam0->f_172, 262144))
	{
		func_108(uParam0, func_107(uParam0));
	}
	iVar0 = func_109(uParam0);
	if (iVar0 == 5)
	{
		func_96(uParam0, 7);
		func_15(uParam0);
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
		func_96(uParam0, 7);
		func_16(uParam0);
	}
	func_51(uParam0, iVar0);
}

void func_18(var uParam0)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	struct<7> Var5;
	bool bVar12;

	if (uParam0->f_177 != 8)
	{
		func_51(uParam0, 8);
	}
	if (func_8(uParam0->f_172, 32768))
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
	if (func_73(uParam0) != 0)
	{
		func_53(uParam0, 0);
		if (func_110(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
		{
			if (!STATS::STATSTRACKER_IS_INITIALIZED(func_111(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15)))
			{
				STATS::_0xCA41E86545413B5B(func_112(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), func_113(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), func_114(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), func_111(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), Global_36);
			}
			if (!STATS::STATSTRACKER_IS_INITIALIZED(func_111(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15)))
			{
			}
			else
			{
				STATS::STATSTRACKER_DEED_STARTED(func_111(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), 0);
			}
		}
		if (func_33(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 262144))
		{
			func_115();
			func_116(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), 0);
		}
		func_117(uParam0->f_174, 1);
		func_118(uParam0);
		func_120(func_119(), 0);
		if (func_8(uParam0->f_172, 8))
		{
			func_121(uParam0, 0, 1);
			if (func_122(uParam0->f_174, 128))
			{
				func_123(uParam0->f_174, 128);
			}
		}
		func_124(uParam0);
		if (!func_8(uParam0->f_172, 32768) || !func_8(uParam0->f_172, 65536))
		{
			if (func_8(uParam0->f_172, 8))
			{
				MISC::_0x1096603B519C905F("");
				HUD::SET_MISSION_NAME(false, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
				if (MISC::GET_MISSION_FLAG())
				{
					MISC::SET_MISSION_FLAG(false);
				}
				func_50();
				UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
				func_125(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15);
				func_126();
				func_127(Global_1935630, 8);
			}
			MemCopy(&vVar0, {((*Global_1347702)[uParam0->f_174 /*49*/])->f_1}, 3);
			StringConCat(&vVar0, "_obj", 24);
			if (!func_33(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4))
			{
				if (!func_33(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 64))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&vVar0))
					{
						func_128(uParam0, &vVar0, 1, 7500, 0, 0, -1082130432, 0, 0, -1, -1, 0);
					}
				}
			}
			bVar3 = func_129();
			func_130(uParam0->f_174, 1, 1, 0, 1, 1, bVar3);
			if (func_8(uParam0->f_172, 8))
			{
				iVar4 = func_97(uParam0);
				if (iVar4 < 0)
				{
					iVar4 = 0;
				}
				Var5 = func_111(func_131(uParam0->f_174));
				Var5.f_1 = 0;
				Var5.f_2 = iVar4;
				Var5.f_3 = func_73(uParam0);
				Var5.f_4 = (ENTITY::GET_ENTITY_HEALTH(Global_35) * 100 / ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0));
				Var5.f_5 = Global_40.f_7729;
				Var5.f_6 = func_132(0);
				TELEMETRY::_TELEMETRY_MISSION_OVER(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), &Var5);
				bVar12 = false;
				bVar12 = true;
				if (bVar12)
				{
					func_22();
					func_23();
				}
			}
		}
	}
	if (!func_8(uParam0->f_172, 32768) || !func_8(uParam0->f_172, 65536))
	{
		if (func_29(uParam0))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			func_133();
			func_134(0);
		}
		else if (func_8(uParam0->f_172, 32768))
		{
			func_135(1, 1);
			func_3(&(uParam0->f_172), 65536);
			return;
		}
	}
	if (func_8(uParam0->f_172, 32768))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		func_136(1);
		func_137();
		func_138(6);
		func_139(4096);
	}
	func_74(uParam0);
	if (func_8(uParam0->f_172, 32768) || func_29(uParam0))
	{
		func_24(uParam0);
	}
	func_51(uParam0, 10);
}

void func_19(var uParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	func_51(uParam0, 9);
	if (func_73(uParam0) != 1)
	{
		func_53(uParam0, 1);
		if (func_122(uParam0->f_174, 128))
		{
			func_123(uParam0->f_174, 128);
		}
		func_140(uParam0);
	}
	if (func_8(uParam0->f_172, 134217728))
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::_0x16E9ABDD34DDD931();
			CAM::DO_SCREEN_FADE_OUT(0);
		}
	}
	func_117(uParam0->f_174, 0);
	if (bParam1 == 1)
	{
		if (uParam0->f_174 == func_21())
		{
			func_22();
			func_23();
		}
	}
	else
	{
		bVar0 = false;
		if (func_8(uParam0->f_172, 134217728))
		{
			bVar0 = true;
		}
		if (!CAM::IS_SCREEN_FADED_OUT() || func_8(uParam0->f_172, 134217728))
		{
			if (!func_81(&(uParam0->f_2597)))
			{
				func_82(&(uParam0->f_2597), 0);
			}
			func_83(uParam0);
			bVar1 = CAM::_0x139EFB0A71DD9011();
			bVar2 = CAM::_0x7CE9DC58E3E4755F();
			if (!func_8(uParam0->f_172, 2097152) && !bVar2)
			{
				if (!bVar1)
				{
					func_141(1, 1);
					return;
				}
				else
				{
					func_3(&(uParam0->f_172), 2097152);
				}
			}
			if (bVar2)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
				func_4(&(uParam0->f_172), 134217728);
			}
			else if (func_84(&(uParam0->f_2597)) >= 2500)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
				func_4(&(uParam0->f_172), 134217728);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				return;
			}
			else if (func_8(uParam0->f_172, 134217728))
			{
				return;
			}
		}
		iVar3 = 1;
		if (func_8(uParam0->f_172, 16777216))
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
		else if (func_8(uParam0->f_172, 33554432))
		{
			iVar3 = 6;
			StringCopy(&(uParam0->f_2578), "PLAYER_ARRESTED", 24);
		}
		func_143(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, iVar3, &(uParam0->f_2578), func_142(uParam0), 0, bVar0);
	}
	if (func_8(uParam0->f_172, 8))
	{
		MISC::_0x1096603B519C905F("");
		HUD::SET_MISSION_NAME(false, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		func_50();
		func_127(Global_1935630, 8);
	}
	if (func_144(&(uParam0->f_2605)))
	{
		func_145(uParam0);
	}
	func_146(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15);
	bParam1 = true;
	if (func_8(uParam0->f_172, 50331648))
	{
		bParam1 = true;
	}
	else
	{
		func_74(uParam0);
	}
	if (bParam1)
	{
		func_24(uParam0);
	}
	else
	{
		func_51(uParam0, 10);
	}
}

void func_20(var uParam0)
{
	bool bVar0;
	int iVar1;

	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_13 & 4096 != 0)
	{
		bVar0 = MAP::DOES_BLIP_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_37);
		uParam0->f_743 = BUILTIN::VDIST2(func_71(uParam0->f_174), Global_36);
		func_147(uParam0->f_174, bVar0, uParam0->f_743);
	}
	if (func_148(64, 1, 1))
	{
		iVar1 = func_58(0);
		if (func_59(iVar1))
		{
			func_27(uParam0);
			func_24(uParam0);
			return;
		}
	}
	if (func_149(uParam0) && func_150())
	{
		func_27(uParam0);
		func_24(uParam0);
	}
	else if (!func_81(&(uParam0->f_2585)) || IntToFloat(func_84(&(uParam0->f_2585))) > func_151(uParam0))
	{
		func_82(&(uParam0->f_2585), 1);
		if (func_152(uParam0))
		{
			func_51(uParam0, 11);
		}
	}
}

int func_21()
{
	return func_154(func_153());
}

void func_22()
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

void func_23()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_155(0);
	func_156(0);
	func_157(0);
	func_158(0);
	func_159(0);
	func_160(1f);
}

void func_24(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	func_161(uParam0);
	func_162(uParam0->f_751);
	func_163(uParam0);
	func_164(uParam0);
	func_165(uParam0);
	func_166(uParam0->f_174);
	func_167(uParam0->f_174);
	func_168(2);
	iVar0 = 0;
	bVar2 = false;
	if (func_169(((*Global_1347702)[uParam0->f_174 /*49*/])->f_14, 1024))
	{
		bVar2 = true;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		func_170(iVar1, 1, -1082130432, 1, 1, bVar2, 0);
		iVar0++;
	}
	if (func_73(uParam0) == 2)
	{
		func_25(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43));
	}
	else
	{
		func_171(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43), 1, 0, 1);
	}
	((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = 0;
	func_172(uParam0);
	func_173(uParam0);
	if (func_73(uParam0) == 0)
	{
		func_174(uParam0->f_174);
	}
	if (func_73(uParam0) == 2 || func_73(uParam0) == 12)
	{
		func_175(uParam0->f_174);
	}
	if (func_176(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
	{
		func_177(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 0, 2);
	}
	func_104(uParam0, 0);
	if (func_8(uParam0->f_172, 8))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
		}
	}
	func_4(&(uParam0->f_172), 8);
	func_178(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
	func_178(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 4);
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_35 != -1)
	{
		func_179(uParam0->f_174, 0);
	}
	if (func_73(uParam0) == 12)
	{
		func_117(uParam0->f_174, 0);
		if (uParam0->f_174 == 65 && func_58(0) == Global_1888801[16 /*35*/])
		{
			func_180(uParam0->f_174, 8192);
		}
	}
	func_181(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 32768);
	func_182(uParam0);
	func_50();
	func_183(0);
	func_183(1);
	func_184(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_25(int* iParam0)
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

void func_26(var uParam0, int iParam1)
{
}

void func_27(var uParam0)
{
}

void func_28(var uParam0)
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
				if (func_185(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
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

int func_29(var uParam0)
{
	if (func_62(32768) && func_48(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 8192))
	{
		return 1;
	}
	return 0;
}

void func_30(var uParam0, int iParam1)
{
	uParam0->f_173 = (uParam0->f_173 || iParam1);
}

bool func_31()
{
	return Global_1572864->f_13;
}

void func_32(int iParam0, int iParam1)
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

bool func_33(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_34(var uParam0, int iParam1)
{
	return (uParam0->f_173 && iParam1) != 0;
}

int func_35(int iParam0, bool bParam1)
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

int func_36(int iParam0, bool bParam1)
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

int func_37(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 128 != 0)
	{
		return 1;
	}
	((*Global_1347702)[iParam0 /*49*/])->f_45 = func_186(((*Global_1347702)[iParam0 /*49*/])->f_24, 1);
	func_49(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 128);
	return 1;
}

void func_38(var uParam0)
{
	func_187(uParam0, 5);
	func_188(uParam0, 79);
	func_189(uParam0, Global_35, "ARTHUR", 1);
	func_190();
	func_191();
	func_192();
	func_193();
	func_194();
	*(vLocal_1685[0 /*3*/]) = { 2.9f, -2.55f, -0.5f };
	*(vLocal_1685[1 /*3*/]) = { -2.78f, 0.2f, -0.5f };
	*(vLocal_1685[2 /*3*/]) = { 3.1f, -0.15f, -0.5f };
	*(vLocal_1685[3 /*3*/]) = { -2.4f, -1.84f, -0.5f };
	*(vLocal_1685[4 /*3*/]) = { -2.27f, -2.96f, -0.5f };
	*(vLocal_1685[5 /*3*/]) = { 2.56f, -3.35f, -0.5f };
	*(vLocal_1685[6 /*3*/]) = { -2.36f, -6.22f, -0.5f };
	*(vLocal_1685[7 /*3*/]) = { 2.23f, -5.2f, -0.5f };
	*(vLocal_1685[8 /*3*/]) = { 2.29f, -7.2f, -0.5f };
	*(vLocal_1685[9 /*3*/]) = { 3.3f, -8.51f, -0.5f };
	*(vLocal_1685[10 /*3*/]) = { -3.29f, -8.26f, -0.5f };
	func_195();
	uLocal_2161[0] = func_196(22);
	uLocal_2161[1] = func_196(23);
	uLocal_2161[2] = func_196(24);
	func_197(&uLocal_1614);
	func_198(&uLocal_1614, 0);
	func_199(&uLocal_1614, 1);
	func_200(&uLocal_1614, 0);
}

void func_39(var uParam0)
{
	if (uParam0->f_748 == -1)
	{
		if (!func_33(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
		{
			uParam0->f_748 = 5;
		}
	}
	if (uParam0->f_748 > 0)
	{
		PED::_RESERVE_AMBIENT_PEDS(uParam0->f_748);
	}
}

void func_40(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
		uParam0->f_2603 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_71(uParam0->f_174), 0f, 0f, 0f, vVar8, &cVar0);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_2603))
	{
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_2603, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
	}
}

void func_41(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
		uParam0->f_2604 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_71(uParam0->f_174), 0f, 0f, 0f, vVar8, &cVar0);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_2604))
	{
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_2604, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
	}
}

void func_42(var uParam0)
{
	func_201(uParam0);
}

void func_43(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_202(&(uParam0->f_41), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_203(&(uParam0->f_41));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_41[iVar0 /*3*/] = iParam1;
	(uParam0->f_41[iVar0 /*3*/])->f_2 = ((uParam0->f_41[iVar0 /*3*/])->f_2 || iParam2);
	if (func_8(uParam0->f_172, 8192))
	{
		func_4(&(uParam0->f_172), 8192);
	}
}

void func_44(var uParam0)
{
	func_204(uParam0, 0);
	func_43(uParam0, iLocal_1585, 7);
	func_43(uParam0, iLocal_165, 7);
	func_43(uParam0, joaat("cs_beaugray"), 7);
	func_43(uParam0, joaat("p_brushhorse01x"), 7);
	func_43(uParam0, joaat("p_cs_playersatchel"), 7);
	func_43(uParam0, joaat("p_cs_billstack01x"), 7);
	func_43(uParam0, iLocal_1681, 2);
	func_43(uParam0, joaat("p_sign_suffragette01x"), 7);
	func_205(uParam0, "rbap13_wagonroute", 2, -1, 7);
	func_205(uParam0, sLocal_1832, 2, -1, 7);
	func_205(uParam0, "rbap12_caliga_gate_assist", 2, -1, 7);
	func_205(uParam0, sLocal_1831, 2, -1, 7);
}

void func_45(var uParam0, int iParam1)
{
	if (func_206(uParam0) == iParam1)
	{
		return;
	}
	func_207(uParam0, uParam0->f_168, iParam1);
	uParam0->f_168 = iParam1;
	func_4(&(uParam0->f_172), 8192);
}

int func_46(var uParam0)
{
	return 0;
}

int func_47(var uParam0)
{
	if (func_34(uParam0, 64))
	{
		return 0;
	}
	if ((func_33(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_8(uParam0->f_172, 1024)) && !func_208(uParam0->f_174))
	{
		return 1;
	}
	return 0;
}

bool func_48(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_49(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_50()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_51(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_177)
	{
		func_96(uParam0, uParam0->f_177);
		uParam0->f_177 = iParam1;
	}
}

int func_52()
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

void func_53(var uParam0, int iParam1)
{
	if (uParam0->f_175 != iParam1)
	{
		uParam0->f_175 = iParam1;
	}
}

int func_54()
{
	if ((CAM::IS_SCREEN_FADED_OUT() && !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), false))
	{
		return 1;
	}
	return 0;
}

int func_55(var uParam0)
{
	int iVar0;
	int iVar1;

	switch (func_209(&iVar0))
	{
		case 1:
			StringCopy(&(uParam0->f_2578), "", 24);
			func_19(uParam0, 0);
			return 1;
		case 3:
			if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3398))
			{
				uParam0->f_3398 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedtoAbandon", 0);
			}
			if (((func_59(iVar0) && iVar0 == ((*Global_1347702)[uParam0->f_174 /*49*/])->f_15) && func_8(uParam0->f_172, 8)) && (!func_33(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 134217728) || func_62(32768)))
			{
				iVar1 = 1;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_3398, iVar1);
			break;
	}
	return 0;
}

void func_56(bool bParam0)
{
	func_210(bParam0);
	func_211(bParam0);
}

void func_57(var uParam0)
{
	if (func_8(uParam0->f_172, 8192))
	{
		return;
	}
	if (uParam0->f_168 == 0)
	{
		return;
	}
	if (func_212(uParam0, uParam0->f_168))
	{
		func_3(&(uParam0->f_172), 8192);
	}
}

int func_58(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

bool func_59(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_60()
{
	int iVar0;

	iVar0 = func_58(0);
	if ((func_59(iVar0) && func_112(iVar0) == 8) && func_33(((*Global_1347702)[func_113(iVar0) /*49*/])->f_12, 131072))
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0)
{
	if (func_213() != -1)
	{
		return 0;
	}
	if (!func_214(iParam0))
	{
		return 0;
	}
	return func_176(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

bool func_62(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

struct<4> func_63(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			Var1 = { vLocal_2166 };
			Var1.f_3 = fLocal_2169;
			break;
		case 1:
		case 2:
			Var1 = { vLocal_2170 };
			Var1.f_3 = fLocal_2173;
			break;
		case 3:
		case 4:
			Var1 = { vLocal_2174 };
			Var1.f_3 = fLocal_2177;
			break;
		case 5:
			Var1 = { vLocal_2178 };
			Var1.f_3 = fLocal_2181;
			break;
	}
	return Var1;
}

bool func_64(var uParam0)
{
	return func_215(*uParam0, uParam0->f_3);
}

void func_65(var uParam0, int iParam1)
{
	uParam0->f_173 = (uParam0->f_173 - (uParam0->f_173 && iParam1));
}

int func_66(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[10];
	int iVar14;
	int iVar15[10];

	if (uParam0->f_177 == 7 || uParam0->f_177 == 5)
	{
		if (iLocal_14 < 1)
		{
			if (!func_81(&uLocal_1722))
			{
				if (MISC::HAS_BULLET_IMPACTED_IN_AREA(func_1(15), 20f, true, true))
				{
					func_216(uParam0);
					return 0;
				}
				if (PED::_0xB7DBB2986B87E230(iLocal_166, 1f) && func_217(Global_35, iLocal_166, 30f, 1))
				{
					func_216(uParam0);
					return 0;
				}
				if (func_218(1) && func_219(uParam0))
				{
					func_216(uParam0);
					return 0;
				}
			}
			else if (func_220(&uLocal_1722) > 1f)
			{
				StringCopy(&(uParam0->f_2578), "BAP12_F_BROKE", 24);
				return 1;
			}
		}
		else if (iLocal_14 > 2)
		{
			if (func_220(&uLocal_2441) > 2f)
			{
				func_216(uParam0);
				StringCopy(&(uParam0->f_2578), "BAP12_F_BROKE", 24);
				return 1;
			}
			iVar0 = func_221(Global_35, 1, 0, 0);
			if (!func_81(&uLocal_2441))
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(&(Local_1513[iVar1 /*23*/])))
					{
						if ((func_222(&(Local_1513[iVar1 /*23*/]), 0) && !PED::GET_PED_CONFIG_FLAG(&(Local_1513[iVar1 /*23*/]), 11, false)) || (PED::_0xB7DBB2986B87E230(&(Local_1513[iVar1 /*23*/]), 1f) && iVar0 != joaat("weapon_lasso")))
						{
							if (func_223(func_196(47)))
							{
								func_224(0, 0);
							}
							if (func_225(uParam0, 62, &Global_35, 1101004800, 1109393408, 0, 0))
							{
								func_226(&uLocal_2441);
							}
						}
					}
					iVar1++;
				}
				if (PED::_0xB7DBB2986B87E230(iLocal_166, 1f) && iVar0 != joaat("weapon_lasso"))
				{
					if (PED::_0x285D36C5C72B0569(Global_35) < 8f)
					{
						if (func_223(func_196(47)))
						{
							func_224(0, 0);
						}
						if (func_225(uParam0, 62, &Global_35, 1101004800, 1109393408, 0, 0))
						{
							func_226(&uLocal_2441);
						}
					}
					else
					{
						func_216(uParam0);
						StringCopy(&(uParam0->f_2578), "BAP12_F_ABAN7", 24);
						return 1;
					}
				}
			}
		}
		if (func_81(&uLocal_1722))
		{
			return 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_159))
		{
			if (PED::IS_PED_DEAD_OR_DYING(iLocal_159, true))
			{
				StringCopy(&(uParam0->f_2578), "BAP12_F_BEAUD", 24);
				return 1;
			}
		}
		if (func_220(&uLocal_2256) > 1f)
		{
			StringCopy(&(uParam0->f_2578), "BAP12_F_COUS", 24);
			return 1;
		}
		if (func_219(uParam0))
		{
			return 1;
		}
		if (iLocal_14 < 1 || iLocal_14 > 5)
		{
			if (!func_81(&uLocal_1665))
			{
				func_226(&uLocal_1665);
			}
			else if (func_227(&uLocal_1665) > 1.5f)
			{
				PLAYER::_0x1A6E84F13C952094(PLAYER::PLAYER_ID(), 300, &iVar3);
				iVar2 = 0;
				while (iVar2 < iVar3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(&(iVar3[iVar2])))
					{
						if (!func_222(&(iVar3[iVar2]), 0))
						{
							if (((PED::IS_PED_MODEL(&(iVar3[iVar2]), joaat("g_m_m_unigrays_01")) || PED::IS_PED_MODEL(&(iVar3[iVar2]), joaat("g_m_m_unigrays_02"))) || PED::IS_PED_MODEL(&(iVar3[iVar2]), joaat("s_m_m_cghworker_01"))) || PED::IS_PED_MODEL(&(iVar3[iVar2]), joaat("s_f_m_cghworker_01")))
							{
								iLocal_1664++;
								func_226(&uLocal_1665);
								return 0;
							}
						}
						else
						{
							iLocal_1664++;
							func_226(&uLocal_1665);
							return 0;
						}
					}
					iVar2++;
				}
			}
			if (iLocal_1664 == 1)
			{
				func_225(uParam0, 48, &iLocal_159, 70f, 80f, 0, 0);
			}
			else if (iLocal_1664 == 2)
			{
				StringCopy(&(uParam0->f_2578), "BAP12_F_GRAY", 24);
				return 1;
			}
		}
		if (iLocal_14 == 2)
		{
			PLAYER::_0x1A6E84F13C952094(PLAYER::PLAYER_ID(), 300, &iVar15);
			iVar14 = 0;
			while (iVar14 < iVar15)
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(iVar15[iVar14])))
				{
					if (!func_222(&(iVar15[iVar14]), 0))
					{
						iLocal_1583++;
					}
				}
				iVar14++;
			}
			if (iLocal_1583 > 0)
			{
				func_225(uParam0, 33, &iLocal_166, 1101004800, 1109393408, 0, 0);
				if (iLocal_21[33] && !func_223(func_196(33)))
				{
					StringCopy(&(uParam0->f_2578), "BAP12_F_BROKE", 24);
					return 1;
				}
			}
		}
		if (func_228(PLAYER::PLAYER_ID(), 1, 1, 1))
		{
			StringCopy(&(uParam0->f_2578), "BAP12_F_BROKE", 24);
			func_216(uParam0);
			return 1;
		}
		if (iLocal_14 == 0)
		{
			if (func_229(uParam0, 6, "BAP12_F_ABAN1", 0f, 0f, 0f, iLocal_159, 60f, 30f, 300f))
			{
				return 1;
			}
		}
		if (iLocal_14 == 1)
		{
			if (func_229(uParam0, 7, "BAP12_F_ABAN3", 0f, 0f, 0f, iLocal_170, 60f, 30f, 300f))
			{
				return 1;
			}
		}
		if (iLocal_14 == 2)
		{
			if (iLocal_2440 > 10)
			{
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("rbap13_wagonroute"))
				{
					if (fLocal_1647 > 15f)
					{
						func_225(uParam0, 35, Local_173[0 /*20*/], 1101004800, 1109393408, 1, 1);
					}
					else if (fLocal_1647 > 10f)
					{
						func_225(uParam0, 34, Local_173[0 /*20*/], 1101004800, 1109393408, 1, 1);
					}
					if (func_229(uParam0, 5, "BAP12_F_ABAN2", vLocal_1643, 0, 12.5f, 10f, 30f))
					{
						return 1;
					}
				}
			}
			else
			{
				iLocal_2440++;
			}
		}
		if ((iLocal_14 == 4 || iLocal_14 == 5) || iLocal_14 == 7)
		{
			if (func_229(uParam0, 6, "BAP12_F_ABAN1", 0f, 0f, 0f, iLocal_159, 60f, 30f, (300f / 3f)) || func_230(Global_35, 1))
			{
				StringCopy(&(uParam0->f_2578), "BAP12_F_ABAN1", 24);
				return 1;
			}
		}
	}
	if (func_220(&uLocal_1722) > 1f)
	{
		StringCopy(&(uParam0->f_2578), "BAP12_F_BROKE", 24);
		return 1;
	}
	return 0;
}

int func_67(var uParam0)
{
	return 0;
}

void func_68()
{
	LAW::_0x15ABD5004CAD2D99(0);
	LAW::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 1352191066, 3, 3, 1);
	LAW::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 1171995096, 4, 0, -1);
}

void func_69(bool bParam0, bool bParam1)
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

void func_70(var uParam0)
{
}

Vector3 func_71(int iParam0)
{
	vector3 vVar0;

	if (!func_214(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_231(iParam0, &vVar0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_24 = { vVar0 };
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

int func_72(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_85(64))
	{
		return 0;
	}
	else if (func_92(&Global_1935630, 131072))
	{
		return 0;
	}
	else if (func_86())
	{
		return 0;
	}
	else if (Global_1310720->f_6)
	{
		return 0;
	}
	else if (func_48(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024))
	{
		return 0;
	}
	if (func_148(0, 1, 0))
	{
		iVar0 = func_58(0);
		if (func_59(iVar0) && func_232(uParam0, iVar0))
		{
		}
		else
		{
			func_53(uParam0, 12);
			return 1;
		}
	}
	if (func_233(uParam0->f_174))
	{
		func_53(uParam0, 13);
		return 1;
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 32 == 0)
	{
		if (uParam0->f_743 > (((*Global_1347702)[uParam0->f_174 /*49*/])->f_17 * ((*Global_1347702)[uParam0->f_174 /*49*/])->f_17))
		{
			func_53(uParam0, 2);
			return 1;
		}
	}
	if (!func_33(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_208(uParam0->f_174))
	{
		func_234(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 16384);
		func_53(uParam0, 3);
		return 1;
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 8388608 != 0)
	{
		iVar1 = func_235(uParam0->f_174);
		if (iVar1 != -1)
		{
			if (func_236(iVar1))
			{
				if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
				{
					func_180(uParam0->f_174, 32768);
				}
				func_53(uParam0, 5);
				return 1;
			}
			else if (func_237(iVar1))
			{
				if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
				{
					func_180(uParam0->f_174, 32768);
				}
				func_53(uParam0, 5);
				return 1;
			}
		}
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_45 != -1)
	{
		if (func_236(((*Global_1347702)[uParam0->f_174 /*49*/])->f_45))
		{
			func_180(uParam0->f_174, 2048);
			func_53(uParam0, 6);
			return 1;
		}
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_46 != 0)
	{
		if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 268435456 == 0)
		{
			iVar2 = func_238();
			if (!func_239(iVar2, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_46))
			{
				func_53(uParam0, 7);
				return 1;
			}
		}
	}
	if (Global_1357549->f_1614 == 1)
	{
		func_53(uParam0, 8);
		return 1;
	}
	if (!func_33(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 8192))
	{
		if (func_240(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			func_180(uParam0->f_174, 16384);
			func_53(uParam0, 9);
			return 1;
		}
	}
	if (uParam0->f_172 & 256 != 0 && !func_241(uParam0->f_174, 1, 1, 0, 0))
	{
		func_53(uParam0, 10);
		return 1;
	}
	if (func_242(uParam0) || func_243(uParam0->f_174, uParam0->f_743))
	{
		func_180(uParam0->f_174, 1024);
		func_53(uParam0, 11);
		return 1;
	}
	if (!func_244(uParam0) && func_245(uParam0->f_743))
	{
		func_180(uParam0->f_174, 8192);
		func_53(uParam0, 11);
		return 1;
	}
	return 0;
}

int func_73(var uParam0)
{
	return uParam0->f_175;
}

void func_74(var uParam0)
{
	bool bVar0;

	func_246();
	func_247(uParam0);
	if (func_8(uParam0->f_172, 8))
	{
		bVar0 = true;
		if (func_73(uParam0) == 1)
		{
			bVar0 = false;
		}
		else if (func_34(uParam0, 128) && func_31())
		{
			func_158(0);
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
		if (func_73(uParam0) != 0)
		{
			UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
			func_126();
			if (func_73(uParam0) == 1)
			{
				func_248(uParam0->f_174, 1);
			}
		}
		if (func_8(uParam0->f_172, 67108864))
		{
			func_56(1);
			func_4(&(uParam0->f_172), 67108864);
		}
		func_249(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_ENABLE_HUD_CONTEXT_THIS_FRAME(Global_35, 262143);
			func_250(Global_35);
			PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(-2012097661, true);
		}
	}
	if (func_73(uParam0) == 3)
	{
		func_251(uParam0->f_174);
	}
	else if (func_73(uParam0) == 2)
	{
	}
	else if (!func_169(((*Global_1347702)[uParam0->f_174 /*49*/])->f_14, 2))
	{
		func_117(uParam0->f_174, 0);
	}
	func_175(uParam0->f_174);
	if (func_73(uParam0) == 0)
	{
		func_174(uParam0->f_174);
		func_252(uParam0);
	}
	func_163(uParam0);
	func_253(0);
	func_104(uParam0, 0);
	func_45(uParam0, 4);
	func_4(&(uParam0->f_172), 8);
	func_178(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 1024);
	func_178(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
	func_49(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 4);
	func_254(&(uParam0->f_2585));
	func_255(uParam0);
}

void func_75(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	vVar0 = { func_71(uParam0->f_174) };
	fVar3 = BUILTIN::VDIST2(Global_36, vVar0);
	if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_37))
	{
		if (uParam0->f_177 == 4 || uParam0->f_177 == 3)
		{
			fVar4 = func_256(uParam0->f_174);
			if ((((*Global_1347702)[uParam0->f_174 /*49*/])->f_36 != -1822497728 || func_33(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 32)) || fVar3 < (fVar4 * fVar4))
			{
				func_257(uParam0->f_174, vVar0, 1, 0);
			}
		}
	}
	else
	{
		func_258(uParam0->f_174, fVar3);
		func_259(uParam0->f_174, vVar0, fVar3);
		func_260(uParam0->f_174);
		func_261(uParam0->f_174);
	}
}

void func_76(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;

	if (func_34(uParam0, 64))
	{
		return;
	}
	if (func_8(uParam0->f_172, 256))
	{
		if ((func_8(uParam0->f_172, 4194304) && uParam0->f_177 == 4) && !func_47(uParam0))
		{
			func_4(&(uParam0->f_172), 256);
			func_162(uParam0->f_751);
			func_262(uParam0);
		}
		else
		{
			func_263(uParam0);
		}
	}
	else if (uParam0->f_177 == 4)
	{
		if (func_47(uParam0))
		{
			if (func_8(uParam0->f_172, 16))
			{
				cVar0 = { func_264() };
				Var8 = { func_265(&(uParam0->f_206)) };
				if (!MISC::ARE_STRINGS_EQUAL(&Var8, &cVar0))
				{
					func_266(&(uParam0->f_206));
					func_267(&(uParam0->f_206), &cVar0);
				}
			}
			func_3(&(uParam0->f_172), 256);
		}
	}
}

void func_77(var uParam0)
{
	bool bVar0;
	bool bVar1;

	if (!func_8(uParam0->f_172, 16))
	{
		return;
	}
	if (func_268(uParam0->f_206.f_5))
	{
		uParam0->f_206.f_5 = { func_71(uParam0->f_174) };
	}
	bVar0 = func_269(uParam0);
	if (!bVar0)
	{
		if (func_8(uParam0->f_172, 8))
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
	if (func_102(&(uParam0->f_2575)))
	{
		bVar1 = true;
		if (uParam0->f_177 == 4 || uParam0->f_176 == 4)
		{
			if (func_29(uParam0))
			{
				bVar1 = false;
			}
			else if (func_48(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024))
			{
				bVar1 = false;
			}
		}
		if (func_270(&(uParam0->f_206), &(uParam0->f_2575), bVar0, bVar1))
		{
			if (!func_8(uParam0->f_172, 1))
			{
				func_271(uParam0);
				func_3(&(uParam0->f_172), 1);
			}
		}
		else if (func_8(uParam0->f_172, 1))
		{
			func_4(&(uParam0->f_172), 1);
		}
	}
	else if (!func_8(uParam0->f_172, 1))
	{
		func_3(&(uParam0->f_172), 1);
	}
}

int func_78(var uParam0)
{
	return uParam0->f_169;
}

void func_79(var uParam0, int iParam1)
{
	int iVar0;

	if (!func_8(uParam0->f_172, 32))
	{
		return;
	}
	if (uParam0->f_2605.f_785 > 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_2605.f_785)
		{
			if (func_272(uParam0->f_2605[iVar0 /*16*/], 1048576))
			{
				if (func_273(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_274(uParam0->f_2605[iVar0 /*16*/]);
				}
				else if (func_275(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_276(uParam0->f_2605[iVar0 /*16*/]);
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
			if (func_272(uParam0->f_2605.f_241[iVar0 /*16*/], 1048576))
			{
				if (func_277(uParam0, uParam0->f_2605.f_241[iVar0 /*16*/], iParam1))
				{
					func_278(uParam0->f_2605.f_241[iVar0 /*16*/]);
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
			if (func_272(uParam0->f_2605.f_482[iVar0 /*16*/], 1048576))
			{
				if (func_277(uParam0, uParam0->f_2605.f_482[iVar0 /*16*/], iParam1))
				{
					if (func_279(uParam0->f_2605.f_482[iVar0 /*16*/], 0))
					{
						if (func_272(uParam0->f_2605.f_482[iVar0 /*16*/], 4))
						{
							func_280(&(uParam0->f_2605));
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_80(var uParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "RCM_", 64);
	StringConCat(&cVar0, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_1), 64);
	if (func_281(&(uParam0->f_2605), &cVar0, 1, -1, 0, 1))
	{
		func_3(&(uParam0->f_172), 32);
		return 1;
	}
	return 0;
}

bool func_81(var uParam0)
{
	return func_282(*uParam0, 1);
}

void func_82(var uParam0, int iParam1)
{
	if (iParam1 || !func_81(uParam0))
	{
		func_226(uParam0);
	}
}

void func_83(var uParam0)
{
}

int func_84(var uParam0)
{
	if (!func_81(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_283(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_284() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_85(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_86()
{
	return func_92(&Global_1935630, 4096);
}

int func_87(var uParam0)
{
	if (func_48(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 64))
	{
		return 1;
	}
	if (func_285(uParam0) && func_286(uParam0))
	{
		func_49(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
		return 1;
	}
	return 0;
}

void func_88(var uParam0)
{
	bool bVar0;
	struct<4> Var1;
	int iVar5;

	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 67108864 == 0)
	{
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_287(uParam0->f_174), func_288(uParam0->f_174)))
		{
			func_289(uParam0->f_174, 128);
		}
		else
		{
			func_123(uParam0->f_174, 128);
		}
		if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
		{
			if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_287(uParam0->f_174), func_288(uParam0->f_174)))
			{
				func_290(uParam0->f_174);
				func_291(uParam0->f_174);
			}
		}
		else
		{
			func_292(Global_1347702[uParam0->f_174 /*49*/]);
			func_290(uParam0->f_174);
		}
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(func_287(uParam0->f_174), func_288(uParam0->f_174)))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_287(uParam0->f_174), func_288(uParam0->f_174), 0, "");
		}
	}
	if (!func_176(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
	{
		if (!func_293(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
		{
			func_294(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1);
		}
		func_295(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1, 1);
		func_296(Global_1935630, 8);
	}
	bVar0 = true;
	if (func_34(uParam0, 64))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_117(uParam0->f_174, 0);
	}
	func_297(uParam0);
	func_3(&(uParam0->f_172), 8);
	if (!func_33(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 8192))
	{
		func_56(0);
		LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
		LAW::_0x292AD61A33A7A485();
		func_298(1, 16384, 1);
		func_3(&(uParam0->f_172), 67108864);
	}
	func_121(uParam0, 1, 0);
	func_249(1);
	func_253(1);
	func_299();
	func_165(uParam0);
	func_166(uParam0->f_174);
	func_167(uParam0->f_174);
	func_300(uParam0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	func_301(1);
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(-2012097661, false);
	}
	if (func_47(uParam0))
	{
		func_3(&(uParam0->f_172), 256);
	}
	if (func_8(uParam0->f_172, 8388608) || !func_8(uParam0->f_172, 256))
	{
		func_45(uParam0, 2);
	}
	MISC::_0x1096603B519C905F(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
	HUD::SET_MISSION_NAME(true, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
	AUDIO::_0xA6A3A3F96B8B030E();
	AUDIO::CLEAR_CONVERSATION_HISTORY();
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	func_302(uParam0);
	if (uParam0->f_174 != func_21())
	{
		if (!func_62(32768))
		{
			Var1 = { func_63(0) };
			if (!func_64(&Var1))
			{
				func_30(uParam0, 32);
			}
		}
	}
	iVar5 = 0;
	if (func_303(uParam0))
	{
		iVar5 = func_97(uParam0);
	}
	TELEMETRY::_TELEMETRY_MISSION_STARTED(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), 0, iVar5, func_34(uParam0, 64));
	if (uParam0->f_174 != func_21())
	{
		func_304(uParam0, func_63(0), func_63(1), 0, 1, 0);
	}
}

void func_89(var uParam0)
{
	char[] cVar0[8];

	StringCopy(&(uParam0->f_2575), func_305(uParam0), 24);
	switch (iLocal_15)
	{
		case 0:
			func_306(uParam0, Global_35, 0, 0, 0, 0);
			func_306(uParam0, iLocal_159, "BeauGray", 0, 0, 0);
			func_306(uParam0, iLocal_164, "Horse_01", 0, 0, 0);
			func_306(uParam0, iLocal_161, "p_brushHorse01x", 0, 0, 0);
			func_307(uParam0, 1859.742f, -1352.796f, 41.3019f);
			func_309(uParam0, 51268/*func_308*/);
			func_311(uParam0, 51518/*func_310*/);
			func_312(&(uParam0->f_206), "1-DayVersion", 0);
			func_312(&(uParam0->f_206), "2-NightVersion", 0);
			func_312(&(uParam0->f_206), "1-DayVersion-MultiStart", 0);
			func_312(&(uParam0->f_206), "2-NightVersion-MultiStart", 0);
			if ((func_313() || func_314(uParam0)) || iLocal_1584)
			{
				if (func_315())
				{
					cVar0 = "2-NightVersion-MultiStart";
				}
				else
				{
					cVar0 = "1-DayVersion-MultiStart";
				}
			}
			else if (func_315())
			{
				cVar0 = "2-NightVersion";
			}
			else
			{
				cVar0 = "1-DayVersion";
			}
			func_316(&(uParam0->f_206), cVar0);
			func_267(&(uParam0->f_206), cVar0);
			func_317(&(uParam0->f_206), 1855.141f, -1344.115f, 41.3835f, 319.4096f, 1);
			func_319(uParam0, 52150/*func_318*/);
			break;
		case 1:
			func_307(uParam0, func_1(24));
			func_306(uParam0, Global_35, 0, 0, 0, 0);
			func_306(uParam0, iLocal_159, 0, 0, 0, 0);
			func_306(uParam0, iLocal_166, 0, 0, 0, 0);
			func_306(uParam0, &(Local_173[0 /*20*/]), "MRS_CALHOUN", 0, 0, 0);
			func_306(uParam0, &(Local_173[5 /*20*/]), "RCSP_BEAUANDPENELOPE1_FEMALES_01", 0, 0, 0);
			func_306(uParam0, &(Local_173[2 /*20*/]), "RCSP_BEAUANDPENELOPE1_FEMALES_01^2", 0, 0, 0);
			func_306(uParam0, &(Local_173[3 /*20*/]), "RCSP_BEAUANDPENELOPE1_FEMALES_01^3", 0, 0, 0);
			func_306(uParam0, &(Local_173[4 /*20*/]), "RCSP_BEAUANDPENELOPE1_FEMALES_01^4", 0, 0, 0);
			func_306(uParam0, &(Local_173[6 /*20*/]), "RCSP_BEAUANDPENELOPE1_FEMALES_01^5", 0, 0, 0);
			func_306(uParam0, &(Local_173[1 /*20*/]), "RCSP_BEAUANDPENELOPE1_FEMALES_01^6", 0, 0, 0);
			func_306(uParam0, &(Local_324[4 /*20*/]), "RCSP_BEAUANDPENELOPE1_FEMALES_01^7", 0, 0, 0);
			func_306(uParam0, &(Local_324[1 /*20*/]), "RCSP_BEAUANDPENELOPE1_FEMALES_01^8", 0, 0, 0);
			func_306(uParam0, &(Local_324[3 /*20*/]), "RCSP_BEAUANDPENELOPE1_FEMALES_01^9", 0, 0, 0);
			func_306(uParam0, &(Local_324[2 /*20*/]), "RCSP_BEAUANDPENELOPE1_FEMALES_01^10", 0, 0, 0);
			func_306(uParam0, &(Local_324[0 /*20*/]), "RCSP_BEAUANDPENELOPE1_FEMALES_01^11", 0, 0, 0);
			func_306(uParam0, iLocal_1427, "p_chair_crate02x", 0, 0, 0);
			func_306(uParam0, &(iLocal_316[0]), "p_sign_suffragette01x", 0, 0, 0);
			func_306(uParam0, &(iLocal_316[1]), "p_sign_suffragette05x^1", 0, 0, 0);
			func_306(uParam0, &(iLocal_316[2]), "p_sign_suffragette03x", 0, 0, 0);
			func_306(uParam0, &(iLocal_316[3]), "p_sign_suffragette04x", 0, 0, 0);
			func_306(uParam0, &(iLocal_316[4]), "p_sign_suffragette05x", 0, 0, 0);
			func_306(uParam0, &(iLocal_316[5]), "p_sign_suffragette03x^1", 0, 0, 0);
			func_306(uParam0, iLocal_1560, "A_M_M_RhdTownfolk_01", 0, 0, 0);
			func_306(uParam0, iLocal_1561, "A_M_M_RhdTownfolk_02", 0, 0, 0);
			func_306(uParam0, iLocal_170, "wagon02x", 0, 0, 0);
			if (func_313())
			{
				cVar0 = "MultiStart";
			}
			else
			{
				cVar0 = "MultiStart";
			}
			func_320(&(uParam0->f_206), 131072);
			func_316(&(uParam0->f_206), cVar0);
			func_267(&(uParam0->f_206), cVar0);
			func_307(uParam0, func_1(15));
			func_311(uParam0, 52290/*func_321*/);
			func_319(uParam0, 52531/*func_322*/);
			break;
		case 2:
			func_306(uParam0, iLocal_170, "wagon02x", 0, 0, 0);
			func_306(uParam0, Global_35, 0, 0, 0, 0);
			func_306(uParam0, iLocal_159, 0, 0, 0, 0);
			func_306(uParam0, iLocal_166, 0, 0, 0, 0);
			func_306(uParam0, &(Local_173[0 /*20*/]), "MRS_CALHOUN", 0, 0, 0);
			func_306(uParam0, &(Local_1513[0 /*23*/]), "CS_SCOTTGRAY", 0, 0, 0);
			func_306(uParam0, &(Local_1513[1 /*23*/]), "CS_IANGRAY", 0, 0, 0);
			func_306(uParam0, &(Local_173[2 /*20*/]), "RCSP_BEAUANDPENELOPE1_FEMALES_01", 0, 0, 0);
			func_306(uParam0, &(Local_173[3 /*20*/]), "RCSP_BEAUANDPENELOPE1_FEMALES_01^2", 0, 0, 0);
			func_306(uParam0, &(Local_173[4 /*20*/]), "RCSP_BEAUANDPENELOPE1_FEMALES_01^3", 0, 0, 0);
			func_306(uParam0, &(Local_173[5 /*20*/]), "RCSP_BEAUANDPENELOPE1_FEMALES_01^4", 0, 0, 0);
			func_306(uParam0, &(Local_173[6 /*20*/]), "RCSP_BEAUANDPENELOPE1_FEMALES_01^5", 0, 0, 0);
			func_306(uParam0, &(Local_324[3 /*20*/]), "RCSP_BEAUANDPENELOPE1_FEMALES_01^6", 0, 0, 0);
			func_306(uParam0, &(Local_173[1 /*20*/]), "RCSP_BEAUANDPENELOPE1_FEMALES_01^7", 0, 0, 0);
			func_306(uParam0, &(Local_324[0 /*20*/]), "RCSP_BEAUANDPENELOPE1_FEMALES_01^8", 0, 0, 0);
			func_306(uParam0, &(Local_324[1 /*20*/]), "RCSP_BEAUANDPENELOPE1_FEMALES_01^9", 0, 0, 0);
			func_306(uParam0, &(Local_324[2 /*20*/]), "RCSP_BEAUANDPENELOPE1_FEMALES_01^10", 0, 0, 0);
			func_306(uParam0, &(Local_324[4 /*20*/]), "RCSP_BEAUANDPENELOPE1_FEMALES_01^11", 0, 0, 0);
			func_306(uParam0, &(iLocal_316[0]), "p_sign_suffragette01x", 0, 0, 0);
			func_306(uParam0, &(iLocal_316[2]), "p_sign_suffragette03x", 0, 0, 0);
			func_306(uParam0, &(iLocal_316[5]), "p_sign_suffragette03x^1", 0, 0, 0);
			func_306(uParam0, &(iLocal_316[3]), "p_sign_suffragette04x", 0, 0, 0);
			func_306(uParam0, &(iLocal_316[6]), "p_sign_suffragette04x^1", 0, 0, 0);
			func_306(uParam0, &(iLocal_316[4]), "p_sign_suffragette05x", 0, 0, 0);
			func_306(uParam0, &(iLocal_316[1]), "p_sign_suffragette05x^1", 0, 0, 0);
			func_306(uParam0, &(iLocal_1562[0]), "A_M_M_RhdTownfolk_02", 0, 0, 0);
			func_306(uParam0, &(iLocal_1562[1]), "A_M_M_RhdTownfolk_02^2", 0, 0, 0);
			func_306(uParam0, &(iLocal_1562[2]), "A_M_M_RhdTownfolk_02^3", 0, 0, 0);
			func_306(uParam0, &(iLocal_1566[0]), "RCSP_BEAUANDPENELOPE_MALES_01", 0, 0, 0);
			func_306(uParam0, &(iLocal_1566[1]), "RCSP_BEAUANDPENELOPE_MALES_01^1", 0, 0, 0);
			func_306(uParam0, &(iLocal_1566[2]), "RCSP_BEAUANDPENELOPE_MALES_01^2", 0, 0, 0);
			func_306(uParam0, &(iLocal_1566[3]), "RCSP_BEAUANDPENELOPE_MALES_01^3", 0, 0, 0);
			func_306(uParam0, &(iLocal_1566[4]), "RCSP_BEAUANDPENELOPE_MALES_01^4", 0, 0, 0);
			func_316(&(uParam0->f_206), "MultiStart");
			uParam0->f_206.f_338 = 120f;
			uParam0->f_206.f_339 = 140f;
			func_307(uParam0, func_1(16));
			func_320(&(uParam0->f_206), 268435456);
			func_309(uParam0, 52595/*func_323*/);
			func_311(uParam0, 52748/*func_324*/);
			func_319(uParam0, 53066/*func_325*/);
			break;
		case 3:
			func_306(uParam0, Global_35, 0, 0, 0, 0);
			func_306(uParam0, iLocal_159, "BeauGray", 0, 0, 0);
			func_306(uParam0, iLocal_1428, "Horse_01", 0, 0, 0);
			func_306(uParam0, iLocal_163, "Horse_01^1", 0, 0, 0);
			func_306(uParam0, iLocal_2160, "p_cs_billstack01x", 0, 0, 0);
			func_306(uParam0, iLocal_2159, "p_cs_playersatchel", 0, 0, 0);
			func_307(uParam0, func_1(27));
			func_316(&(uParam0->f_206), "MultiStart");
			func_267(&(uParam0->f_206), "MultiStart");
			func_320(&(uParam0->f_206), 268435456);
			break;
	}
	func_3(&(uParam0->f_172), 16);
}

float func_90(var uParam0)
{
	return 1000f;
}

int func_91(var uParam0)
{
	return 3;
}

bool func_92(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_93(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_159))
	{
		func_326(uParam0);
	}
	if (func_327(Global_35, iLocal_1674, 1, 0))
	{
		func_328(Global_35, func_1(0), &uLocal_2431, 10f, 7.5f, 7.25f, 7f, 0.25f, 0, 1, 1, 1, 1);
		PED::SET_PED_RESET_FLAG(Global_35, 108, true);
	}
	if (func_329(Global_35, func_1(0), 12f, 1, 1))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
	}
}

int func_94(var uParam0)
{
	bool bVar0;

	if (func_29(uParam0))
	{
		return 1;
	}
	bVar0 = false;
	if (func_8(uParam0->f_172, 4096) || func_60())
	{
		bVar0 = true;
	}
	if (func_48(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024))
	{
		if (!bVar0)
		{
			return 1;
		}
	}
	if (func_8(uParam0->f_172, 262144) && !func_8(uParam0->f_172, 256))
	{
		func_108(uParam0, bVar0);
		if (func_8(uParam0->f_172, 524288))
		{
			return 1;
		}
		else if (func_8(uParam0->f_172, 1048576))
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
		if (uParam0->f_171 != 0 || func_330(uParam0))
		{
			if (func_331(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_95(var uParam0)
{
	return 5;
}

void func_96(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_176)
	{
		uParam0->f_176 = iParam1;
	}
}

int func_97(var uParam0)
{
	if (uParam0->f_174 == func_21())
	{
		return func_332();
	}
	return -1;
}

int func_98(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	func_333();
	func_334();
	func_335(Global_36, 500f, 0, 0, 0, 0, 0);
	iVar1 = iParam1;
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_159))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_159, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_163))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_163, false);
	}
	Var2 = { func_63(iParam1) };
	ENTITY::_0x203BEFFDBE12E96A(Global_35, Var2, Var2.f_3, 1, 0, 1);
	iLocal_2440 = 0;
	if (iVar1 >= 4)
	{
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806);
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455);
	}
	if (iVar1 >= 2)
	{
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411);
	}
	switch (iVar1)
	{
		case 0:
			SCRIPTS::ACTIVATE_GOAL_CONTEXT(-1392528840);
			if (func_314(uParam0))
			{
				if (!func_336(uParam0, iParam1))
				{
					return 2;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1428))
				{
					func_337(&iLocal_1428, vLocal_2166, fLocal_2169, 1, 1, 1, 1);
					return 2;
				}
				iLocal_15 = 0;
				func_89(uParam0);
				func_304(uParam0, func_63(0), func_63(1), 0, 1, 0);
				return 5;
			}
			else
			{
				if (!func_336(uParam0, iParam1))
				{
					return 2;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1428))
				{
					func_337(&iLocal_1428, vLocal_2166, fLocal_2169, 1, 1, 1, 1);
					return 2;
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1428))
				{
					func_338(Global_35, iLocal_1428, 0, -1, 1);
					ENTITY::_0x203BEFFDBE12E96A(iLocal_1428, vLocal_2166, fLocal_2169, 1, 0, 1);
				}
				ENTITY::_0x203BEFFDBE12E96A(iLocal_159, func_1(0), func_2(0), 1, 0, 1);
				ENTITY::_0x203BEFFDBE12E96A(iLocal_163, func_1(12), func_2(12), 1, 0, 1);
				if (!iLocal_1663)
				{
					func_339(&uLocal_1649, vLocal_2166, fLocal_2169, 0, 0, 0, 1, 0, 0, 1, 1);
					iLocal_1663 = 1;
				}
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_1833[2 /*5*/])))
				{
					func_340(2, 0, 0);
					return 2;
				}
				if (!func_341(&uLocal_1649))
				{
					return 2;
				}
				func_342(-677410626, 0, -1f, 1, 1, 0, 0, 0);
				iLocal_15 = 1;
				iLocal_16 = 0;
				func_338(iLocal_159, iLocal_163, 0, -1, 1);
				func_343(0, 0);
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				if (func_313())
				{
					func_304(uParam0, func_63(0), func_63(1), 0, 1, 0);
				}
				iLocal_1663 = 0;
			}
			return 7;
		case 1:
			if (!iLocal_2445)
			{
				if (!iLocal_2238)
				{
					STREAMING::REQUEST_MODEL(iLocal_1587, false);
					STREAMING::REQUEST_MODEL(iLocal_1585, false);
					STREAMING::REQUEST_MODEL(iLocal_1586, false);
					STREAMING::REQUEST_MODEL(iLocal_1588, false);
					iLocal_2238 = 1;
				}
				if (!iLocal_1663)
				{
					func_339(&uLocal_1649, vLocal_2170, fLocal_2173, 0, 0, 0, 1, 0, 0, 1, 1);
					iLocal_1663 = 1;
				}
				if (!func_341(&uLocal_1649))
				{
					return 2;
				}
				if (!func_336(uParam0, iParam1))
				{
					return 2;
				}
				if (!func_344(uParam0))
				{
					return 2;
				}
				if (!func_345(1, 0, 1))
				{
					return 2;
				}
				if (!func_346())
				{
					return 2;
				}
				if (!func_347())
				{
					return 2;
				}
				if (!func_340(63, 1, 0))
				{
					return 2;
				}
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_170, true);
				ENTITY::SET_ENTITY_COORDS(iLocal_166, 1401.694f, -1418.2f, 78.5293f, true, false, true, true);
				ENTITY::_0x203BEFFDBE12E96A(iLocal_159, func_1(5), func_2(5), 1, 0, 1);
				ENTITY::_0x203BEFFDBE12E96A(iLocal_163, func_1(5), func_2(5), 1, 0, 1);
				func_338(iLocal_159, iLocal_163, 0, -1, 1);
				func_343(0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_170, 0f);
				ENTITY::_0x203BEFFDBE12E96A(iLocal_170, func_1(17), func_2(17), 1, 0, 1);
				func_348(1);
				func_349(3);
				func_350(2);
				func_351(5, 0);
				func_352(11);
				if (!iLocal_2446)
				{
					iLocal_15 = 1;
					func_89(uParam0);
					iLocal_2446 = 1;
				}
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_170, false);
				iLocal_15 = 1;
				iLocal_16 = 0;
				iLocal_1663 = 0;
				func_89(uParam0);
				iLocal_2445 = 0;
				func_353(uParam0);
				iLocal_2445 = 1;
				func_335(func_1(26), 500f, 0, 0, 0, 0, 0);
				func_354(func_1(26), 500f, 0);
				if (func_313())
				{
					func_304(uParam0, func_63(1), func_63(2), 1, 2, 0);
				}
				ENTITY::SET_ENTITY_COORDS(&(Local_324[4 /*20*/]), 1290.316f, -1310.462f, 76.0403f, true, false, true, true);
				ENTITY::SET_ENTITY_VISIBLE(&(Local_324[4 /*20*/]), true);
				return 5;
			}
			break;
		case 2:
			if (!iLocal_2238)
			{
				STREAMING::REQUEST_MODEL(iLocal_1587, false);
				STREAMING::REQUEST_MODEL(iLocal_1585, false);
				STREAMING::REQUEST_MODEL(iLocal_1586, false);
				STREAMING::REQUEST_MODEL(iLocal_1588, false);
				iLocal_2238 = 1;
			}
			if (!iLocal_2445)
			{
				if (func_313())
				{
					func_304(uParam0, func_63(2), func_63(3), 2, 3, 0);
				}
				if (!iLocal_1663)
				{
					func_339(&uLocal_1649, vLocal_2170, fLocal_2173, 0, 0, 0, 1, 0, 0, 1, 1);
					iLocal_1663 = 1;
				}
				if (!func_341(&uLocal_1649))
				{
					return 2;
				}
				if (!func_336(uParam0, iParam1))
				{
					return 2;
				}
				if (!func_344(uParam0))
				{
					return 2;
				}
				if (!func_345(1, 0, 1))
				{
					return 2;
				}
				if (!func_346())
				{
					return 2;
				}
				if (!func_347())
				{
					return 2;
				}
				if (!func_340(63, 1, 0))
				{
					return 2;
				}
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_170, true);
				ENTITY::_0x203BEFFDBE12E96A(iLocal_159, func_1(5), func_2(5), 1, 0, 1);
				ENTITY::_0x203BEFFDBE12E96A(iLocal_163, func_1(5), func_2(5), 1, 0, 1);
				ENTITY::SET_ENTITY_COORDS(&(Local_324[4 /*20*/]), 1290.316f, -1310.462f, 76.0403f, true, false, true, true);
				ENTITY::SET_ENTITY_VISIBLE(&(Local_324[4 /*20*/]), true);
				func_338(iLocal_159, iLocal_163, 0, -1, 1);
				func_355(&Global_35, &iLocal_170, -1, 1);
				func_343(0, 0);
				ENTITY::_0x203BEFFDBE12E96A(iLocal_170, func_1(17), func_2(17), 1, 0, 1);
				func_348(1);
				iLocal_15 = 2;
				func_89(uParam0);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_170, false);
				iLocal_2445 = 1;
			}
			else
			{
				if (!func_222(iLocal_163, 0))
				{
					if (!PED::IS_PED_READY_TO_RENDER(iLocal_163))
					{
						return 2;
					}
				}
				if (!func_222(iLocal_159, 0))
				{
					if (!PED::IS_PED_READY_TO_RENDER(iLocal_159))
					{
						return 2;
					}
				}
				func_355(&Global_35, &iLocal_170, -1, 1);
				func_356();
				if (iLocal_18 >= 2)
				{
					func_335(func_1(26), 500f, 0, 0, 1, 1, 0);
					func_354(func_1(26), 500f, 0);
					func_349(3);
					func_350(2);
					func_351(5, 0);
					func_352(11);
					if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					func_353(uParam0);
					iLocal_1725 = 0;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1560))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_1560, Global_35, 6, 0, -1082130432, -1, 0);
						func_171(&iLocal_1560, 1, 0, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1561))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_1561, Global_35, 6, 0, -1082130432, -1, 0);
						func_171(&iLocal_1561, 1, 0, 1);
					}
					iLocal_15 = 2;
					func_89(uParam0);
					iLocal_16 = 0;
					iLocal_1663 = 0;
					ENTITY::_0x203BEFFDBE12E96A(iLocal_170, func_1(17), func_2(17), 1, 0, 1);
					return 7;
				}
			}
			return 2;
		case 3:
			if (!iLocal_2238)
			{
				STREAMING::REQUEST_MODEL(iLocal_1587, false);
				STREAMING::REQUEST_MODEL(iLocal_1585, false);
				STREAMING::REQUEST_MODEL(iLocal_1586, false);
				STREAMING::REQUEST_MODEL(iLocal_1588, false);
				iLocal_2238 = 1;
			}
			if (!iLocal_1663)
			{
				func_339(&uLocal_1649, vLocal_2174, fLocal_2177, 0, 0, 0, 1, 0, 0, 1, 1);
				iLocal_1663 = 1;
			}
			if (!func_341(&uLocal_1649))
			{
				return 2;
			}
			if (!func_336(uParam0, iParam1))
			{
				return 2;
			}
			else if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_159, -1))
			{
				ENTITY::_0x203BEFFDBE12E96A(iLocal_159, func_1(9), func_2(9), 1, 0, 1);
			}
			if (!func_344(uParam0))
			{
				return 2;
			}
			if (!func_357(uParam0, 1))
			{
				return 2;
			}
			if (!func_345(0, 0, 1))
			{
				return 2;
			}
			if (!func_358(uParam0, 0))
			{
				return 2;
			}
			if (!func_359())
			{
				return 2;
			}
			iVar0 = 0;
			while (iVar0 < 7)
			{
				func_360(&(Local_173[iVar0 /*20*/]), 1, 1);
				ENTITY::_0x203BEFFDBE12E96A(&(Local_173[iVar0 /*20*/]), func_361(iVar0), func_362(iVar0), 1, 0, 1);
				iVar0++;
			}
			ENTITY::_0x203BEFFDBE12E96A(iLocal_166, func_1(16), func_2(16), 1, 0, 1);
			ENTITY::_0x203BEFFDBE12E96A(iLocal_170, func_1(18), func_2(18), 1, 0, 1);
			ENTITY::_0x203BEFFDBE12E96A(iLocal_163, func_1(13), func_2(13), 1, 0, 1);
			func_363(6);
			ENTITY::_0x203BEFFDBE12E96A(Global_35, vLocal_2174, fLocal_2177, 1, 0, 1);
			func_343(0, 0);
			func_350(4);
			iLocal_15 = 2;
			func_89(uParam0);
			iLocal_1663 = 0;
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_170, false);
			if (func_313())
			{
				func_304(uParam0, func_63(3), func_63(4), 3, 4, 0);
			}
			if (!func_222(&(Local_173[1 /*20*/]), 0))
			{
				ENTITY::_0x203BEFFDBE12E96A(&(Local_173[1 /*20*/]), func_361(1), func_362(1), 1, 0, 1);
			}
			return 5;
		case 4:
			if (func_313())
			{
				func_304(uParam0, func_63(4), func_63(5), 4, 5, 0);
			}
			if (!iLocal_1663)
			{
				func_339(&uLocal_1649, vLocal_2174, fLocal_2177, 0, 0, 0, 1, 0, 0, 1, 1);
				iLocal_1663 = 1;
			}
			if (!func_341(&uLocal_1649))
			{
				return 2;
			}
			if (!func_344(uParam0))
			{
				return 2;
			}
			if (!func_357(uParam0, 1))
			{
				return 2;
			}
			if (!func_345(0, 0, 1))
			{
				return 2;
			}
			if (!func_358(uParam0, 0))
			{
				return 2;
			}
			if (!func_336(uParam0, iParam1))
			{
				return 2;
			}
			else if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_159, -1))
			{
				ENTITY::_0x203BEFFDBE12E96A(iLocal_159, func_1(9), func_2(9), 1, 0, 1);
			}
			iVar0 = 0;
			while (iVar0 < 7)
			{
				func_360(&(Local_173[iVar0 /*20*/]), 1, 1);
				ENTITY::_0x203BEFFDBE12E96A(&(Local_173[iVar0 /*20*/]), func_361(iVar0), func_362(iVar0), 1, 0, 1);
				iVar0++;
			}
			ENTITY::_0x203BEFFDBE12E96A(iLocal_166, func_1(16), func_2(16), 1, 0, 1);
			ENTITY::_0x203BEFFDBE12E96A(iLocal_170, func_1(18), func_2(18), 1, 0, 1);
			ENTITY::_0x203BEFFDBE12E96A(iLocal_163, func_1(13), func_2(13), 1, 0, 1);
			func_363(6);
			ENTITY::_0x203BEFFDBE12E96A(Global_35, vLocal_2174, fLocal_2177, 1, 0, 1);
			func_343(0, 0);
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
			func_350(4);
			iLocal_15 = 3;
			func_89(uParam0);
			iLocal_1663 = 0;
			return 7;
		case 5:
			if (!func_336(uParam0, iParam1))
			{
				return 2;
			}
			if (!func_358(uParam0, 0))
			{
				return 2;
			}
			ENTITY::_0x203BEFFDBE12E96A(iLocal_159, func_1(2), func_2(2), 1, 0, 1);
			ENTITY::_0x203BEFFDBE12E96A(iLocal_163, func_1(14), func_2(14), 1, 0, 1);
			if (!iLocal_1663)
			{
				func_339(&uLocal_1649, vLocal_2178, fLocal_2181, 0, 0, 0, 1, 0, 0, 1, 1);
				iLocal_1663 = 1;
			}
			if (!func_341(&uLocal_1649))
			{
				return 2;
			}
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			iLocal_15 = 3;
			func_89(uParam0);
			iLocal_1663 = 0;
			return 5;
	}
	return 2;
}

void func_99(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (!func_148(0, 0, 1) || iParam0)
	{
		iVar0 = func_364();
		iVar1 = func_365(iVar0);
		fVar2 = (1f - (MISC::ABSF(BUILTIN::TO_FLOAT(iVar1)) / BUILTIN::TO_FLOAT(8)));
		fVar3 = func_366(iVar0 < 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		fVar4 = func_366(iVar0 > 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
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

int func_100(var uParam0)
{
	if (func_48(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024) && uParam0->f_176 == 4)
	{
		if (!func_8(uParam0->f_172, 1))
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
	if (func_8(uParam0->f_172, 256))
	{
		if (!func_367(uParam0))
		{
			if ((func_8(uParam0->f_172, 8192) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_751)) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_751, 0))
			{
				if (func_8(uParam0->f_172, 8388608) || func_87(uParam0))
				{
					func_45(uParam0, 2);
					if (!func_8(uParam0->f_172, 16))
					{
						func_89(uParam0);
					}
				}
			}
			return 0;
		}
	}
	else if (func_8(uParam0->f_172, 262144) && !func_8(uParam0->f_172, 256))
	{
		func_108(uParam0, 0);
		if (!func_8(uParam0->f_172, 1048576))
		{
			return 0;
		}
	}
	else
	{
		func_368();
		func_369(uParam0);
		if (!func_370(uParam0))
		{
			return 0;
		}
	}
	if (!func_8(uParam0->f_172, 1))
	{
	}
	return 1;
}

void func_101(var uParam0)
{
	if (func_8(uParam0->f_172, 2048))
	{
		return;
	}
	if (func_102(&(uParam0->f_2575)))
	{
		func_371(&(uParam0->f_206), &(uParam0->f_753));
		if (uParam0->f_176 == 4 && !func_33(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 512))
		{
			func_372(uParam0, 0);
		}
	}
	if (func_8(uParam0->f_172, 1024) && uParam0->f_176 == 4)
	{
		func_304(uParam0, func_63(0), func_63(1), 0, 1, 1);
	}
	func_4(&(uParam0->f_172), 512);
	if (uParam0->f_176 == 4)
	{
		if (func_373(Global_35))
		{
			if (func_374())
			{
				func_375(42, 1);
			}
		}
	}
	MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
	SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	func_3(&(uParam0->f_172), 2048);
}

int func_102(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return 1;
}

int func_103(var uParam0)
{
	struct<4> Var0;

	MemCopy(&Var0, {uParam0->f_2575}, 4);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return 1;
	}
	return func_376(Var0, &(uParam0->f_206), uParam0);
}

void func_104(var uParam0, bool bParam1)
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
	func_4(&(uParam0->f_172), 1);
	func_4(&(uParam0->f_172), 16);
	func_4(&(uParam0->f_172), 2048);
	if (func_102(&(uParam0->f_2575)))
	{
		func_377(&(uParam0->f_206));
	}
	func_378(&(uParam0->f_206));
	func_379(uParam0);
}

int func_105(var uParam0)
{
	switch (iLocal_15)
	{
		case 0:
			iLocal_15 = 1;
			if (func_380(-1079451873, 1, 0))
			{
				func_381(-1079451873, 1, 0, -1387038764, 0);
			}
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348) && ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam0->f_206.f_348))
			{
				PED::_SET_PED_ON_MOUNT(iLocal_159, iLocal_163, -1, true);
			}
			func_382(1200, 0, 1065353216, 1, 0, 0, 1, 752097756);
			func_383(&iLocal_161);
			return 7;
		case 1:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
			func_355(&Global_35, &iLocal_170, -1, 1);
			ENTITY::SET_ENTITY_COORDS(&(Local_324[4 /*20*/]), 1290.316f, -1310.462f, 76.0403f, true, false, true, true);
			ENTITY::SET_ENTITY_VISIBLE(&(Local_324[4 /*20*/]), true);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1560))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_1560, Global_35, 6, 0, -1082130432, -1, 0);
				func_171(&iLocal_1560, 1, 0, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1561))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_1561, Global_35, 6, 0, -1082130432, -1, 0);
				func_171(&iLocal_1561, 1, 0, 1);
			}
			func_348(1);
			iLocal_15 = 2;
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411);
			return 7;
		case 2:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
			iLocal_15 = 3;
			func_350(4);
			func_384();
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_170, false);
			func_89(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348) && ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam0->f_206.f_348))
			{
				ENTITY::_0x203BEFFDBE12E96A(&(Local_1513[1 /*23*/]), (Local_1513[1 /*23*/])->f_6, (Local_1513[1 /*23*/])->f_22, 1, 0, 1);
				ENTITY::_0x203BEFFDBE12E96A(&(Local_1513[0 /*23*/]), (Local_1513[0 /*23*/])->f_6, (Local_1513[0 /*23*/])->f_22, 1, 0, 1);
			}
			if (!func_222(&(Local_173[1 /*20*/]), 0))
			{
				ENTITY::_0x203BEFFDBE12E96A(&(Local_173[1 /*20*/]), func_361(1), func_362(1), 1, 0, 1);
			}
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455);
			return 7;
		case 3:
			if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_1598))
			{
				iLocal_1598 = TASK::_0xF533D68FF970D190(1346.359f, -1798.611f, 68.2199f, 745599470, 200f, 0, 0);
			}
			if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_1598))
			{
				TASK::_0x5A40040BB5AE3EA2(iLocal_1598);
			}
			func_385(41);
			func_382(3000, 0, 1065353216, 1, 0, 0, 1, 752097756);
			return 8;
		default:
			break;
	}
	return 7;
}

int func_106(var uParam0)
{
	if (func_8(uParam0->f_172, 256) && !func_8(uParam0->f_172, 1024))
	{
		if (!func_367(uParam0))
		{
			if (func_8(uParam0->f_172, 512) && func_8(uParam0->f_172, 8192))
			{
				if (func_87(uParam0))
				{
					if (!func_8(uParam0->f_172, 16))
					{
						func_89(uParam0);
					}
				}
			}
			return 1;
		}
		else
		{
			if (func_8(uParam0->f_172, 1024) && uParam0->f_176 == 4)
			{
				func_304(uParam0, func_63(0), func_63(1), 0, 1, 1);
			}
			return 0;
		}
	}
	return 0;
}

int func_107(var uParam0)
{
	return 0;
}

void func_108(var uParam0, bool bParam1)
{
	if (!func_8(uParam0->f_172, 262144))
	{
		return;
	}
	if (func_8(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		func_4(&(uParam0->f_172), 262144);
		return;
	}
	if (!func_8(uParam0->f_172, 1048576))
	{
		if (func_386(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			func_3(&(uParam0->f_172), 1048576);
		}
		if (!func_8(uParam0->f_172, 524288))
		{
			if (func_387(&(uParam0->f_753)))
			{
				func_3(&(uParam0->f_172), 524288);
			}
		}
	}
}

int func_109(var uParam0)
{
	if (!func_218(4194304))
	{
		func_388(-857562377, 0, 0, 1103626240);
		func_389(4194304);
		func_390(0);
	}
	func_391();
	func_326(uParam0);
	func_392();
	func_393(uParam0);
	func_394();
	func_333();
	func_395(0);
	if (!func_222(iLocal_159, 0))
	{
		PED::SET_PED_RESET_FLAG(iLocal_159, 49, true);
	}
	func_396(20, 59, 59, 0);
	if (!func_218(8388608))
	{
		func_335(func_1(15), 450f, 0, 1, 0, 0, 0);
		func_354(func_1(15), 450f, 0);
		POPULATION::_0xC6DCC2A3A8825C85(1);
		func_389(8388608);
	}
	POPULATION::_0xF45E46DEECF7DF6E(2048, 0, 0, -1, -1);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0xAB0D553FE20A6E25(0f);
	PED::_0xC0258742B034DFAF(0f);
	PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0x28CB6391ACEDD9DB(0f);
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("rbap13_wagonroute", Global_36, &iLocal_1646);
	TASK::WAYPOINT_RECORDING_GET_COORD("rbap13_wagonroute", iLocal_1646, &vLocal_1643);
	switch (iLocal_14)
	{
		case 0:
			if (func_397(uParam0))
			{
				func_350(2);
				return 5;
			}
			break;
		case 2:
			func_354(Global_36, 450f, 0);
			if (func_398(uParam0))
			{
				if (!func_399())
				{
					func_350(3);
				}
			}
			break;
		case 3:
			if (func_400(uParam0))
			{
				func_350(4);
				return 5;
			}
			break;
		case 4:
			if (func_401(uParam0))
			{
				if (func_218(32768))
				{
					func_350(7);
				}
				else
				{
					func_350(5);
				}
			}
			break;
		case 5:
			if (func_402(uParam0))
			{
				func_350(7);
			}
			break;
		case 7:
			if (func_403(uParam0))
			{
				func_350(8);
			}
			if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_1598))
			{
				iLocal_1598 = TASK::_0xF533D68FF970D190(1346.359f, -1798.611f, 68.2199f, 745599470, 200f, 0, 0);
			}
			break;
		case 8:
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
			func_404(1, 1, 1, 1);
			func_405(uParam0, 5);
			func_224(1, 0);
			if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_1598))
			{
				iLocal_1598 = TASK::_0xF533D68FF970D190(1346.359f, -1798.611f, 68.2199f, 745599470, 200f, 0, 0);
			}
			if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_1598))
			{
				TASK::_0x5A40040BB5AE3EA2(iLocal_1598);
			}
			func_385(41);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_1833[62 /*5*/])))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(&(Local_1833[62 /*5*/]));
			}
			return 5;
	}
	iLocal_19 = 1;
	iLocal_20 = 0;
	return 7;
}

bool func_110(int iParam0)
{
	return func_406(iParam0) == 0;
}

int func_111(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

int func_112(int iParam0)
{
	if (!func_59(iParam0))
	{
		return 0;
	}
	return func_408(func_407(iParam0));
}

int func_113(int iParam0)
{
	if (!func_59(iParam0))
	{
		return -1;
	}
	return func_409(func_407(iParam0));
}

int func_114(int iParam0)
{
	if (!func_59(iParam0))
	{
		return -1;
	}
	return func_410(func_407(iParam0));
}

void func_115()
{
	struct<2> Var0;

	Var0.f_1 = -1;
	MISC::_COPY_MEMORY(Global_1879514, &Var0, 20);
}

void func_116(char* sParam0, int iParam1)
{
	StringCopy(&(Global_1879514->f_2), sParam0, 32);
	Global_1879514->f_8 = iParam1;
}

void func_117(int iParam0, int iParam1)
{
	if (!func_214(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		func_411(&(((*Global_1347702)[iParam0 /*49*/])->f_14));
		func_178(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
		func_412(iParam0);
		if ((!func_240(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43890) || iParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(((*Global_1347702)[iParam0 /*49*/])->f_40, 0);
			func_178(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
			func_413(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		else
		{
			func_180(iParam0, 16384);
			func_414(iParam0, 1, func_71(iParam0));
		}
	}
}

void func_118(var uParam0)
{
	func_415(1, &(uParam0->f_2605.f_482));
}

int func_119()
{
	return Global_1894899->f_2;
}

void func_120(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_416(iParam0))
	{
		return;
	}
	bVar0 = func_417(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_418(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_420(iParam0, func_419());
			func_421(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_422(iParam0, 67108864);
		func_420(iParam0, -15);
	}
	func_423(iParam0);
}

void func_121(var uParam0, int iParam1, int iParam2)
{
	if (func_424(0))
	{
		if (func_425(0))
		{
			func_426(0);
		}
	}
	if (func_424(1))
	{
		if (func_425(1))
		{
			func_426(1);
		}
	}
}

bool func_122(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_123(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_124(var uParam0)
{
}

void func_125(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_112(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_113(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_214(iVar1))
			{
				if (func_122(iVar1, 4))
				{
					func_248(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_427(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_113(iParam0);
		if (iVar3 == 59)
		{
			func_427(1);
		}
		else if (iVar3 == 61)
		{
			func_427(0);
		}
		else if (iVar3 == 83)
		{
			func_427(0);
		}
	}
}

void func_126()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_214(iVar0))
		{
			if (func_122(iVar0, 4))
			{
				if (func_122(iVar0, 16))
				{
					func_428(iVar0, 1);
				}
				if (func_122(iVar0, 8))
				{
					func_429(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_127(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_128(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, int iParam11)
{
	char* sVar0;

	func_430(uParam0->f_174, sParam1, bParam5, fParam6, 0, 0, -1, -1, 0);
	if (iParam2 || !func_431(sParam1))
	{
		func_432(sParam1, iParam3, bParam4, bParam5, sParam7, sParam8, sParam9, sParam10, iParam11);
		sVar0 = UILOG::_UILOG_GET_CACHED_OBJECTIVE();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && MISC::ARE_STRINGS_EQUAL(sVar0, sParam1))
		{
			UILOG::_UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE();
		}
	}
}

var func_129()
{
	return Global_1572864->f_15;
}

void func_130(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	var uVar0;

	if (!func_214(iParam0))
	{
		return;
	}
	if (func_433())
	{
		func_289(iParam0, 1);
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
		if (!func_62(32768))
		{
			if (STATS::CHAL_IS_GOAL_ACTIVE(-816321659, -1044347982))
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(-1718529554, 1);
			}
		}
	}
	else if (iParam0 == 102)
	{
		if (!func_433())
		{
			((*Global_1347702)[iParam0 /*49*/])->f_35 = 104;
			((*Global_1347702)[104 /*49*/])->f_48 = ((*Global_1347702)[iParam0 /*49*/])->f_15;
		}
	}
	func_434(iParam0, 0, iParam3);
	if (func_214(((*Global_1347702)[iParam0 /*49*/])->f_35))
	{
		func_435(((*Global_1347702)[iParam0 /*49*/])->f_35);
		if (iParam1 == 1)
		{
			func_436(((*Global_1347702)[iParam0 /*49*/])->f_35, 0);
			if (func_437(iParam0))
			{
				((*Global_1347702)[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])->f_43 = ((*Global_1347702)[iParam0 /*49*/])->f_43;
			}
		}
	}
	else
	{
		func_438();
	}
	if (!func_33(((*Global_1347702)[iParam0 /*49*/])->f_12, 1) && !func_33(((*Global_1347702)[iParam0 /*49*/])->f_12, 33554432))
	{
		if (func_33(((*Global_1347702)[iParam0 /*49*/])->f_12, 262144))
		{
			if (bParam5)
			{
				func_439(iParam0);
			}
			bParam5 = false;
			uVar0 = func_440(((*Global_1347702)[iParam0 /*49*/])->f_15);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
			{
				MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&uVar0), 2);
			}
			func_181(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 262144);
		}
	}
	if (bParam2 == 1)
	{
		bParam2 = func_33(((*Global_1347702)[iParam0 /*49*/])->f_12, 4);
	}
	if (!func_62(32768))
	{
		func_441(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_442(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam6);
	}
	func_443(iParam0);
}

int func_131(int iParam0)
{
	if (!func_214(iParam0))
	{
		return 0;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_15;
}

int func_132(int iParam0)
{
	iParam0 = func_444(iParam0);
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

void func_133()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;

	func_139(4112);
	func_138(6);
	vVar2 = { func_445(((*Global_2621440)[0 /*12065*/])->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_446(vVar2, uVar1, uVar0, 0);
	func_447(vVar2);
	Global_40.f_9.f_15 = func_186(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_134(int iParam0)
{
	if (func_213() != -1)
	{
		return;
	}
	func_139(32);
	if (iParam0 == 0)
	{
		func_139(16);
	}
	else if (iParam0 == 1)
	{
		func_139(8);
	}
	func_448();
	Global_43888 = 1;
}

void func_135(int iParam0, bool bParam1)
{
	if (func_213() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_62(32768))
	{
		return;
	}
	if (!func_62(32768))
	{
		func_449(1, bParam1);
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
	if (func_62(32768))
	{
		((*Global_2621440)[iParam0 /*12065*/])->f_9.f_14 = func_419();
	}
}

void func_136(int iParam0)
{
	Global_1310720->f_9 = iParam0;
}

void func_137()
{
	struct<10> Var0;
	struct<16> Var10;

	Global_1310720->f_8 = 0;
	Global_1935630->f_4 = 1;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "respawn_persistence", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_450(Var10, 0);
}

void func_138(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = MISC::GET_GAME_TIMER();
}

void func_139(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_140(var uParam0)
{
}

void func_141(bool bParam0, bool bParam1)
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
		func_451(0);
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

int func_142(var uParam0)
{
	if (func_62(32768))
	{
		return 0;
	}
	if (func_33(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 134217728))
	{
		return 1;
	}
	return 0;
}

void func_143(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_452(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_453(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_453(&(Global_1347343->f_11), 16384);
	}
	if (func_454() >= 2)
	{
		if (!func_452(Global_1347343->f_11, 16384))
		{
			func_453(&(Global_1347343->f_11), 8);
		}
		func_160(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_296(Global_1935630, 2048);
	func_455(bParam5);
}

bool func_144(var uParam0)
{
	return uParam0->f_781;
}

void func_145(var uParam0)
{
	func_456(1, &(uParam0->f_2605.f_482));
}

void func_146(int iParam0)
{
	int iVar0;

	if (!func_59(iParam0))
	{
		return;
	}
	if (iParam0 != func_58(0))
	{
		return;
	}
	if (func_111(iParam0) == 0)
	{
	}
	iVar0 = func_112(iParam0);
	if (func_457(iParam0) == 3)
	{
		if (func_111(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_111(iParam0)))
		{
			if (func_112(iParam0) != 1 && func_112(iParam0) != 8)
			{
				func_458(func_112(iParam0), func_111(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_459(iParam0);
	func_211(1);
	func_460(0);
	func_461(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_462(1);
			func_463(15, 0, 1);
			break;
		case 4:
			func_463(10, 0, 1);
			break;
		case 8:
			func_463(10, 0, 1);
			break;
		case 9:
			func_463(10, 0, 1);
			break;
		case 2:
			func_463(10, 0, 1);
			break;
		case 6:
			func_463(10, 0, 1);
			break;
		case 5:
			func_463(10, 0, 1);
			break;
	}
	func_464(1);
}

void func_147(int iParam0, bool bParam1, float fParam2)
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
		fParam2 = BUILTIN::VDIST2(Global_36, func_465(iParam0));
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
			func_178(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 512);
		}
	}
	else if (fParam2 <= 100f)
	{
		if (func_466())
		{
			return;
		}
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "RCM_INVALID_TOD", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_467(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 1024 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_ANTAGONIZE", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_467(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 4096 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_MEMORY", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_467(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 2048 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_WANTED_REGION", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_467(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 16384 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_467(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 8192 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_COMBAT", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_467(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 32768 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED_2", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_467(sVar1, 10000, 0, 0, 0, 1);
		}
		func_49(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 512);
	}
}

int func_148(int iParam0, bool bParam1, int iParam2)
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
		if (func_468())
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
		iVar0 = func_113(&(Global_1898164->f_1[0 /*5*/]));
		if (func_214(iVar0) && func_33(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_59(&(Global_1898164->f_1[0 /*5*/])))
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

int func_149(var uParam0)
{
	return 1;
}

int func_150()
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

float func_151(var uParam0)
{
	return 1000f;
}

int func_152(var uParam0)
{
	switch (func_73(uParam0))
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1428))
			{
				func_337(&iLocal_1428, 0f, 0f, 0f, 0f, 1, 1, 1, 1);
				return 0;
			}
			else
			{
				func_25(&iLocal_159);
				func_25(&iLocal_163);
				return 1;
			}
			break;
		case 11:
			func_352(20);
			if (!func_469(iLocal_159, -1082130432, 1116471296))
			{
				return 0;
			}
			break;
		default:
			if (!func_469(iLocal_159, -1082130432, 1116471296))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_153()
{
	return Global_1572864->f_8;
}

int func_154(int iParam0)
{
	if (func_112(iParam0) == 8)
	{
		return func_113(iParam0);
	}
	return -1;
}

void func_155(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_156(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_157(bool bParam0)
{
	Global_1572864->f_14 = bParam0;
	if (bParam0)
	{
		func_159(1);
	}
}

void func_158(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_159(0);
	}
}

void func_159(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_160(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_161(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::IS_ENTITY_DEAD(iLocal_159) && PED::IS_PED_GROUP_MEMBER(iLocal_159, func_470(), 0))
	{
		PED::REMOVE_PED_FROM_GROUP(iLocal_159);
	}
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "BNP12_GUARD_CONV");
	func_171(&iLocal_159, 1, 0, 1);
	func_171(&iLocal_166, 1, 0, 1);
	func_171(&iLocal_163, 1, 0, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1587);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1585);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1588);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1586);
	if (func_471(631, 0))
	{
		func_472(631, 0, 1, 0, 0);
	}
	if (func_471(632, 0))
	{
		func_472(632, 0, 1, 0, 0);
	}
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_171(Local_173[iVar0 /*20*/], 1, 0, 1);
		if ((Local_173[iVar0 /*20*/])->f_17 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((Local_173[iVar0 /*20*/])->f_17);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(Local_324[iVar0 /*20*/])) && PED::IS_PED_IN_GROUP(&(Local_324[iVar0 /*20*/])))
		{
			PED::REMOVE_PED_FROM_GROUP(&(Local_324[iVar0 /*20*/]));
			_NAMESPACE29::_0x0EABF182FBB63D72(&(Local_324[iVar0 /*20*/]), 6, 1);
		}
		func_171(Local_324[iVar0 /*20*/], 0, 1, 1);
		if ((Local_324[iVar0 /*20*/])->f_17 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED((Local_324[iVar0 /*20*/])->f_17))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((Local_324[iVar0 /*20*/])->f_17);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 49)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(Local_446[iVar0 /*20*/])))
		{
			func_171(Local_446[iVar0 /*20*/], 0, 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST((Local_446[iVar0 /*20*/])->f_16))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&((Local_446[iVar0 /*20*/])->f_16));
		}
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST((Local_446[iVar0 /*20*/])->f_11))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE((Local_446[iVar0 /*20*/])->f_11);
		}
		if ((Local_446[iVar0 /*20*/])->f_17 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED((Local_446[iVar0 /*20*/])->f_17))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((Local_446[iVar0 /*20*/])->f_17);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_171(Local_1513[iVar0 /*23*/], 1, 1, 1);
		func_171(&((Local_1513[iVar0 /*23*/])->f_2), 1, 1, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_171(Local_1432[iVar0 /*20*/], 1, 0, 1);
		func_383(&((Local_1432[iVar0 /*20*/])->f_16));
		if ((Local_1432[iVar0 /*20*/])->f_17 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED((Local_1432[iVar0 /*20*/])->f_17))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((Local_1432[iVar0 /*20*/])->f_17);
			}
		}
		iVar0++;
	}
	func_413(&iLocal_160);
	func_413(&iLocal_1599);
	func_473(iLocal_1671);
	func_473(iLocal_1672);
	func_473(iLocal_1673);
	func_171(&iLocal_164, 1, 0, 1);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_165))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_165);
	}
	if (STREAMING::HAS_MODEL_LOADED(iLocal_168))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_168);
	}
	if (STREAMING::HAS_MODEL_LOADED(iLocal_172))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_172);
	}
	if (STREAMING::HAS_MODEL_LOADED(iLocal_314))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_314);
	}
	if (STREAMING::HAS_MODEL_LOADED(iLocal_1585))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1585);
	}
	if (STREAMING::HAS_MODEL_LOADED(iLocal_1589))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1589);
	}
	if (STREAMING::HAS_MODEL_LOADED(iLocal_1590))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1590);
	}
	POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_1668);
	POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(iLocal_1668);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1678, false);
	func_473(iLocal_1668);
	iVar0 = 0;
	while (iVar0 < 49)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(&(iLocal_2186[iVar0])))
		{
			TASK::DELETE_SCENARIO_POINT(&(iLocal_2186[iVar0]));
		}
		iVar0++;
	}
	func_474(631);
	func_474(632);
	iVar1 = _NAMESPACE48::_0x112DDF56300BC6E5(2140917767);
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(iVar1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_1562[iVar0])))
		{
			func_171(iLocal_1562[iVar0], 0, 1, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_1566[iVar0])))
		{
			func_171(iLocal_1566[iVar0], 0, 1, 1);
		}
		iVar0++;
	}
	func_475(2060219211);
	func_475(1129096849);
	func_474(633);
	func_474(627);
}

void func_162(int iParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0, 0))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
		}
	}
}

void func_163(var uParam0)
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
	func_254(&(uParam0->f_2588));
}

void func_164(var uParam0)
{
	struct<2> Var0;

	Var0 = { func_476(uParam0->f_174) };
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&Var0))
	{
		HUD::_TEXT_BLOCK_DELETE(&Var0);
	}
	Var0 = { func_477(uParam0->f_174) };
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&Var0))
	{
		HUD::_TEXT_BLOCK_DELETE(&Var0);
	}
}

int func_165(var uParam0)
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

void func_166(int iParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_22))
	{
		ITEMSET::DESTROY_ITEMSET(((*Global_1347702)[iParam0 /*49*/])->f_22);
		((*Global_1347702)[iParam0 /*49*/])->f_23 = 0;
	}
}

void func_167(int iParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_21))
	{
		ITEMSET::DESTROY_ITEMSET(((*Global_1347702)[iParam0 /*49*/])->f_21);
	}
}

void func_168(int iParam0)
{
	switch (func_213())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

bool func_169(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_170(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	if (!func_478(iParam0))
	{
		return;
	}
	if (!func_479(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = func_480(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_KEEP_TASK(iVar0, false);
		}
	}
	func_481(iParam0, 0, 0, bParam1, fParam2, bParam3, bParam4, bParam5, bParam6, 0, 0);
	func_482(iParam0, 0);
	func_483(iParam0);
}

void func_171(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_172(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_2603))
	{
		POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_2603);
		VOLUME::DELETE_VOLUME(uParam0->f_2603);
	}
}

void func_173(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_2604))
	{
		POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_2604);
		VOLUME::DELETE_VOLUME(uParam0->f_2604);
	}
}

void func_174(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_41))
	{
		func_484(((*Global_1347702)[iParam0 /*49*/])->f_41);
		if (iParam0 == 91 || iParam0 == 129)
		{
			PATHFIND::RESET_ROADS_IN_VOLUME(((*Global_1347702)[iParam0 /*49*/])->f_41, 0);
		}
		VOLUME::DELETE_VOLUME(((*Global_1347702)[iParam0 /*49*/])->f_41);
	}
}

void func_175(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_485(iParam0, &iVar1, &iVar0))
	{
		if (func_486(iVar1, iVar0, 1))
		{
			func_487(iVar1, iVar0);
		}
	}
}

bool func_176(int iParam0)
{
	int iVar0;

	iVar0 = func_406(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_177(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_59(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_176(iParam0) && !func_293(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_111(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_176(iParam0))
	{
		iParam2 = -1;
	}
	if (func_457(iParam0) == 3 || (func_457(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_111(iParam0))))
	{
		func_458(func_112(iParam0), func_111(iParam0), iParam2);
		if ((!func_59(Global_1572864->f_8) && !func_148(0, 1, 0)) && !func_92(&Global_1935630, 32768))
		{
			iVar0 = func_488(iParam0);
			if (iVar0 != -1)
			{
				func_489(0);
			}
			else if (func_112(iParam0) == 8)
			{
				iVar0 = func_490();
				if (iVar0 != -1)
				{
					func_489(0);
				}
			}
		}
	}
	func_461(iParam0, 0);
	if (func_58(0) == iParam0)
	{
		func_211(1);
		func_460(0);
		func_464(1);
	}
	func_491(iParam0, 1);
	func_459(iParam0);
}

void func_178(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_179(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_35;
	if (iVar0 == -1)
	{
		return;
	}
	if (iParam1 == 1)
	{
		func_49(&(((*Global_1347702)[iVar0 /*49*/])->f_13), 8);
	}
	else
	{
		func_178(&(((*Global_1347702)[iVar0 /*49*/])->f_13), 8);
	}
}

void func_180(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_214(iParam0))
	{
		return;
	}
	func_492(&(((*Global_1347702)[iParam0 /*49*/])->f_14), iParam1);
	func_492(&(((*Global_1347702)[iParam0 /*49*/])->f_14), 2);
	func_234(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 16384);
	func_178(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_214(&(Global_40.f_450[iVar0])))
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

void func_181(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_182(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 25)
	{
		func_493(uParam0->f_41[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_494(uParam0->f_117[iVar0 /*5*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_495((*uParam0)[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_496(uParam0->f_28[iVar0 /*3*/]);
		iVar0++;
	}
	func_164(uParam0);
}

void func_183(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_497(iParam0, 32);
	func_498();
}

void func_184(bool bParam0)
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

bool func_185(var uParam0, int iParam1)
{
	return (uParam0->f_1560 && iParam1) != 0;
}

int func_186(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = func_119();
	if (func_416(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_499(vParam0, bParam3);
}

void func_187(var uParam0, int iParam1)
{
	uParam0->f_748 = iParam1;
}

void func_188(var uParam0, int iParam1)
{
	uParam0->f_749 = iParam1;
}

void func_189(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_500(&(uParam0->f_643), iParam1, sParam2, bParam3);
}

void func_190()
{
	(Local_324[0 /*20*/])->f_19 = 723785634;
	(Local_324[1 /*20*/])->f_19 = 92458080;
	(Local_324[2 /*20*/])->f_19 = -631044895;
	(Local_324[3 /*20*/])->f_19 = -1178090581;
	(Local_324[4 /*20*/])->f_19 = 646454646;
	(Local_324[5 /*20*/])->f_19 = -295686949;
}

void func_191()
{
	(Local_173[1 /*20*/])->f_19 = 1888985740;
	(Local_173[2 /*20*/])->f_19 = 1652360791;
	(Local_173[3 /*20*/])->f_19 = -504265410;
	(Local_173[4 /*20*/])->f_19 = -612403110;
	(Local_173[5 /*20*/])->f_19 = -851584041;
	(Local_173[6 /*20*/])->f_19 = -1193528556;
}

void func_192()
{
	(Local_1432[1 /*20*/])->f_17 = joaat("p_apple01x");
	(Local_1432[3 /*20*/])->f_17 = joaat("p_apple01x");
}

void func_193()
{
	(Local_1513[0 /*23*/])->f_3 = { 1286.696f, -1308.803f, 76.0404f };
	(Local_1513[1 /*23*/])->f_3 = { 1286.696f, -1308.803f, 76.0404f };
	(Local_1513[0 /*23*/])->f_11 = { 1320.682f, -1287.831f, 75.3074f };
	(Local_1513[1 /*23*/])->f_11 = { 1320.818f, -1285.151f, 75.3802f };
	(Local_1513[0 /*23*/])->f_15 = { -2.5f, -1f, 0f };
	(Local_1513[1 /*23*/])->f_15 = { 2f, -1.5f, 0f };
	(Local_1513[0 /*23*/])->f_9 = 121.5863f;
	(Local_1513[1 /*23*/])->f_9 = 153.9735f;
	(Local_1513[0 /*23*/])->f_14 = 39.6244f;
	(Local_1513[1 /*23*/])->f_14 = 44.3274f;
	(Local_1513[0 /*23*/])->f_6 = { 1295.5f, -1314.29f, 75.69f };
	(Local_1513[1 /*23*/])->f_6 = { 1297.68f, -1313.2f, 75.65f };
	(Local_1513[0 /*23*/])->f_18 = { 1313.948f, -1301.993f, 75.0898f };
	(Local_1513[1 /*23*/])->f_18 = { 1297.914f, -1280.208f, 75.1689f };
	(Local_1513[0 /*23*/])->f_21 = 58.1594f;
	(Local_1513[1 /*23*/])->f_21 = 202.9539f;
	(Local_1513[0 /*23*/])->f_22 = 178.1128f;
	(Local_1513[1 /*23*/])->f_22 = 178.1128f;
}

void func_194()
{
	int iVar0;

	vLocal_91[0 /*3*/] = "BAP12_O_GET_HORSE";
	vLocal_91[1 /*3*/] = "BAP12_O_COOL";
	vLocal_91[2 /*3*/] = "BAP12_O_RETURN";
	vLocal_91[3 /*3*/] = "BAP12_O_WAGON";
	vLocal_91[9 /*3*/] = "BAP12_O_DRIVE";
	vLocal_91[5 /*3*/] = "BAP12_O_WARN1";
	vLocal_91[6 /*3*/] = "BAP12_O_WARN2";
	vLocal_91[7 /*3*/] = "BAP12_O_WARN3";
	vLocal_91[8 /*3*/] = "BAP12_O_WARN4";
	vLocal_91[4 /*3*/] = "BAP12_O_STOP";
	vLocal_91[10 /*3*/] = "BAP12_IG_SONG";
	vLocal_91[12 /*3*/] = "BAP12_O_GRAB";
	vLocal_91[13 /*3*/] = "BAP12_O_DRAG";
	vLocal_91[11 /*3*/] = "BAP12_IG_HECK";
	vLocal_91[14 /*3*/] = "BAP12_O_ALLEY";
	vLocal_91[15 /*3*/] = "BAP12_O_LEAVE";
	vLocal_91[16 /*3*/] = "BAP12_O_COOL";
	vLocal_91[17 /*3*/] = "BAP12_O_COAC";
	vLocal_91[18 /*3*/] = "BAP12_O_BEAT";
	vLocal_91[20 /*3*/] = "BAP12_O_HORSE";
	vLocal_91[19 /*3*/] = "BAP12_O_HORSE";
	iVar0 = 0;
	while (iVar0 < 21)
	{
		(vLocal_91[iVar0 /*3*/])->f_1 = 0;
		iVar0++;
	}
}

void func_195()
{
	(Local_1833[0 /*5*/])->f_1 = "script@rcm@bnp1@leadin@rc3@base";
	(Local_1833[0 /*5*/])->f_2 = func_501(0);
	(Local_1833[1 /*5*/])->f_1 = "script@rcm@bnp1@leadin@rc3@front";
	(Local_1833[1 /*5*/])->f_2 = func_501(1);
	(Local_1833[2 /*5*/])->f_1 = "script@timelapse@rbnp12_timelapse";
	(Local_1833[2 /*5*/])->f_2 = func_501(2);
	(Local_1833[3 /*5*/])->f_1 = "script@rcm@bnp1@leadin@s2@mcs1@leadin_crowd";
	(Local_1833[3 /*5*/])->f_2 = "pl_loop_A_leadin_loop_B";
	(Local_1833[4 /*5*/])->f_1 = "script@rcm@bnp1@leadin@s2@mcs1@leadin_penelope";
	(Local_1833[4 /*5*/])->f_2 = "pl_loop_A_leadin_loop_B";
	(Local_1833[5 /*5*/])->f_1 = "script@rcm@bnp1@ig@s2@ig5_attack_the_wagon@ig5_taunt_heckler";
	(Local_1833[5 /*5*/])->f_2 = "pbl_action";
	(Local_1833[6 /*5*/])->f_1 = "script@rcm@bnp1@ig@s2@ig5_attack_the_wagon@ig5_taunt_supporters";
	(Local_1833[6 /*5*/])->f_2 = "pbl_React_To_Heckler_Taunts";
	(Local_1833[7 /*5*/])->f_1 = "script@rcm@bnp1@ig@s2@ig5_attack_the_wagon@ig5_action";
	(Local_1833[7 /*5*/])->f_2 = "pbl_action";
	(Local_1833[8 /*5*/])->f_1 = "script@rcm@bnp1@ig@s2@ig7_rallycontinues@mrs_calhoun";
	(Local_1833[8 /*5*/])->f_2 = "pl_base";
	(Local_1833[9 /*5*/])->f_1 = "script@rcm@bnp1@ig@s2@ig6_deal_with_grays@ig6_deal_with_grays_arthur_scott";
	(Local_1833[9 /*5*/])->f_2 = "pbl_New_In_Town_Son";
	(Local_1833[10 /*5*/])->f_1 = "script@rcm@bnp1@ig@s2@ig6_deal_with_grays@ig6_deal_with_grays_ian";
	(Local_1833[10 /*5*/])->f_2 = "pbl_Ian_Idle_Loop_A";
	(Local_1833[11 /*5*/])->f_1 = "script@rcm@bnp1@ig@s2@ig6_deal_with_grays@ig6_deal_with_grays_beau";
	(Local_1833[11 /*5*/])->f_2 = "pbl_Enter_Idle_Loop";
	(Local_1833[63 /*5*/])->f_1 = "script@rcm@bnp1@ig@s2@ig2_signing_on_wagon@ig2_signing_on_wagon";
	(Local_1833[63 /*5*/])->f_2 = "pbl_Intro_Singing";
	(Local_1833[64 /*5*/])->f_1 = "script@rcm@bnp1@ig@s2@ig7_rallycontinues@mrs_calhoun";
	(Local_1833[64 /*5*/])->f_2 = "PL_SPEECH";
	(Local_1833[62 /*5*/])->f_1 = "script@rcm@rbnp1@leadin@s2@ext@leadin";
	(Local_1833[62 /*5*/])->f_2 = "";
}

char* func_196(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BAP12_GUARD";
		case 1:
			return "BAP12_GUARD_NM";
		case 2:
			return "BAP12_RESPONSE";
		case 3:
			return "BAP12_RESPONSE2";
		case 4:
			return "RBNP1_GBEAU1";
		case 5:
			return "RBNP1_GBEAU2";
		case 6:
			return "RBNP1_GBEAU3";
		case 7:
			return "BNP1_S2_CMONB";
		case 8:
			return "BAP12_MOUNT";
		case 9:
			return "BAP12_BMOUNT";
		case 11:
			return "BAP12_DIRECT";
		case 10:
			return "BAP12_RIDE";
		case 12:
			return "BAP12_DIRECT2";
		case 13:
			return "BAP12_DAWD";
		case 14:
			return "BAP12_RIDE";
		case 15:
			return "BAP12_THERE";
		case 16:
			return "BAP12_DRIVE";
		case 17:
			return "BNP1_S1_IG5_PRO";
		case 18:
			return "BAP12_CHAT1";
		case 19:
			return "BAP12_SHERIFF";
		case 20:
			return "BAP12_CAL_HECK";
		case 21:
			return "BAP12_CAL_HECK2";
		case 22:
			return "BAP12_STPD1";
		case 23:
			return "BAP12_STPD2";
		case 24:
			return "BAP12_STPD3";
		case 25:
			return "BAP12_ROUT1";
		case 26:
			return "BAP12_ROUT2";
		case 27:
			return "BAP12_CALDIR";
		case 28:
			return "BAP12_CAL_BANK";
		case 29:
			return "BAP12_CAL_FUR";
		case 30:
			return "BAP12_CAL_HERE";
		case 31:
			return "BAP12_PEDS";
		case 32:
			return "BAP12_RECK";
		case 33:
			return "BAP12_RUNOVER2";
		case 34:
			return "BAP12_ROUT1";
		case 35:
			return "BAP12_ROUT2";
		case 50:
			return "BNP12_LEAVE";
		case 48:
			return "BAP12_RUNOVER1";
		case 49:
			return "BAP12_RUNOVER2";
		case 51:
			return "BNP12_LEAVE_ALT";
		case 52:
			return "BNP12_RET_RALLY";
		case 53:
			return "RBNP12_B_TOWN";
		case 54:
			return "BAP12_CHAP";
		case 55:
			return "BAP12_CHAPDAWD";
		case 56:
			return "BAP12_CHAPARR";
		case 57:
			return "BNP12_IAN_LEAV";
		case 58:
			return "BNP12_IAN_CHAS";
		case 59:
			return "BNP12_SCOT_LEAV";
		case 60:
			return "BNP12_SCOT_CHAS";
		case 61:
			return "BNP12_DRAW";
		case 62:
			return "BNP12_USE";
		case 63:
			return "BNP12_HOG";
		case 36:
			return "BAP12_FIGHT";
		case 37:
			return "BAP12_FIGHT2";
		case 38:
			return "BAP12_TAUNT2";
		case 39:
			return "BAP12_TAUNT";
		case 40:
			return "BAP12_SCOTT";
		case 41:
			return "BAP12_IAN";
		case 42:
			return "BAP12_SCOTT_EN";
		case 43:
			return "BAP12_SCOTT_K";
		case 44:
			return "BAP12_IAN_EN";
		case 45:
			return "BAP12_IAN_K";
		case 46:
			return "BNP12_KNOCK1";
		case 47:
			return "BNP12_KNOCK2";
		case 64:
			return "BNP1_S2_IG6_C1";
		case 65:
			return "BNP1_S2_IG6_C2B";
		case 66:
			return "BNP1_S2_IG6_A2B";
		case 68:
			return "BAP12DEFIAN";
		case 67:
			return "BAP12DEFSCOTT";
		default:
			break;
	}
	return "";
}

void func_197(var uParam0)
{
	func_502(uParam0, 0);
	func_503(uParam0, 0);
	func_200(uParam0, 1);
	func_504(uParam0, 1);
	func_505(uParam0, 0);
	func_506(uParam0, 1);
	func_507(uParam0, 1, 1, 1);
}

void func_198(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_508(&(uParam0->f_1), 8);
	}
	else
	{
		func_509(&(uParam0->f_1), 8);
	}
}

void func_199(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_508(&(uParam0->f_1), 4);
	}
	else
	{
		func_509(&(uParam0->f_1), 4);
	}
}

void func_200(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_508(&(uParam0->f_1), 256);
	}
	else
	{
		func_509(&(uParam0->f_1), 256);
	}
}

void func_201(var uParam0)
{
	func_197(uParam0);
	func_199(uParam0, 1);
	func_510(uParam0, 1);
	func_200(uParam0, 1);
	func_511(uParam0, 1);
	func_198(uParam0, 1);
	func_502(uParam0, 1);
	func_512(uParam0, 1);
	func_503(uParam0, 0);
}

int func_202(var uParam0, int iParam1)
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

int func_203(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!func_513((*uParam0)[iVar0 /*3*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_204(var uParam0, char* sParam1)
{
	struct<2> Var0;

	Var0 = { func_476(uParam0->f_174) };
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
			uParam0->f_2573 = { func_477(uParam0->f_174) };
		}
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_2573)))
	{
		HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_2573));
	}
}

void func_205(var uParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = func_514(&(uParam0->f_117), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_515(&(uParam0->f_117));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_117[iVar0 /*5*/] = cParam1;
	(uParam0->f_117[iVar0 /*5*/])->f_1 = iParam2;
	(uParam0->f_117[iVar0 /*5*/])->f_2 = iParam3;
	(uParam0->f_117[iVar0 /*5*/])->f_4 = ((uParam0->f_117[iVar0 /*5*/])->f_4 || iParam4);
	if (func_8(uParam0->f_172, 8192))
	{
		func_4(&(uParam0->f_172), 8192);
	}
}

int func_206(var uParam0)
{
	return uParam0->f_168;
}

void func_207(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (func_516((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1))
		{
			func_517((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_41[iVar0 /*3*/])->f_2 == 0 || !func_516((uParam0->f_41[iVar0 /*3*/])->f_2, iParam2))
			{
				func_493(uParam0->f_41[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_516((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1))
		{
			func_517((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1);
			if ((uParam0->f_117[iVar0 /*5*/])->f_4 == 0 || !func_516((uParam0->f_117[iVar0 /*5*/])->f_4, iParam2))
			{
				func_494(uParam0->f_117[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_516(((*uParam0)[iVar0 /*3*/])->f_2, iParam1))
		{
			func_517(((*uParam0)[iVar0 /*3*/])->f_2, iParam1);
			if (((*uParam0)[iVar0 /*3*/])->f_2 == 0 || !func_516(((*uParam0)[iVar0 /*3*/])->f_2, iParam2))
			{
				func_495((*uParam0)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_516((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1))
		{
			func_517((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_28[iVar0 /*3*/])->f_2 == 0 || !func_516((uParam0->f_28[iVar0 /*3*/])->f_2, iParam2))
			{
				func_496(uParam0->f_28[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

int func_208(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_44 != -1)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_44 != 0)
		{
			if (!func_518(((*Global_1347702)[iParam0 /*49*/])->f_44))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_209(var uParam0)
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
						*uParam0 = func_519(vVar0.z);
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

void func_210(bool bParam0)
{
	if (!bParam0)
	{
		LAW::_0x61B98367D93F012F(PLAYER::GET_PLAYER_INDEX());
	}
	LAW::_ENABLE_DISPATCH_LAW(bParam0);
	LAW::_ENABLE_DISPATCH_LAW_2(bParam0);
}

void func_211(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_127(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_296(Global_1935630, 4194304);
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

int func_212(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if (func_513(uParam0->f_41[iVar1 /*3*/]))
		{
			if (func_516((uParam0->f_41[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_520(uParam0->f_41[iVar1 /*3*/]))
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
		if (func_521(uParam0->f_117[iVar1 /*5*/]))
		{
			if (func_516((uParam0->f_117[iVar1 /*5*/])->f_4, iParam1))
			{
				if (!func_522(uParam0->f_117[iVar1 /*5*/]))
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
		if (func_523((*uParam0)[iVar1 /*3*/]))
		{
			if (func_516(((*uParam0)[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_524((*uParam0)[iVar1 /*3*/]))
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
		if (func_525(uParam0->f_28[iVar1 /*3*/]))
		{
			if (func_516((uParam0->f_28[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_526(uParam0->f_28[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (iParam1 != 0 && iParam1 != 4)
	{
		if (!func_527(uParam0->f_174))
		{
			iVar0 = 0;
		}
		if (!func_528(uParam0))
		{
			iVar0 = 0;
		}
	}
	if (!func_529(uParam0, iParam1))
	{
		iVar0 = 0;
	}
	if (uParam0->f_177 == 2 && !PED::IS_INSTANTLY_FILL_PED_POPULATION_FINISHED())
	{
		iVar0 = 0;
	}
	if (iParam1 == 2)
	{
		if (!func_8(uParam0->f_172, 32))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_213()
{
	return Global_1572887->f_12;
}

bool func_214(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_215(vector3 vParam0, var uParam3)
{
	int iVar0;

	if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) != 1)
	{
		func_135(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_221(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_530(0, 0);
		if (func_531(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_532(1, 0);
		}
	}
	else
	{
		func_532(1, 0);
	}
	func_156(0);
	func_533(0, vParam0, uParam3);
	return 1;
}

void func_216(var uParam0)
{
	if (!func_81(&uLocal_1722))
	{
		if (iLocal_14 < 1)
		{
			if (func_534(3, 2, func_501(8), 0) && func_534(4, 2, func_501(9), 0))
			{
				func_226(&uLocal_1722);
			}
		}
		else
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_1833[8 /*5*/])))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(&(Local_1833[8 /*5*/]));
			}
			func_535();
			func_349(5);
			func_351(7, 0);
			func_226(&uLocal_1722);
		}
	}
}

int func_217(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_218(int iParam0)
{
	return func_536(uLocal_1648, iParam0);
}

int func_219(var uParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iLocal_159))
	{
		if (iLocal_14 < 4)
		{
			if (func_537(uParam0, &iLocal_159, "BAP12_F_ABAN5", iLocal_159, 69))
			{
				return 1;
			}
		}
		else if (PED::IS_PED_DEAD_OR_DYING(iLocal_159, true))
		{
			StringCopy(&(uParam0->f_2578), "BAP12_F_ABAN5", 24);
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_166))
	{
		if (func_537(uParam0, &iLocal_166, "BAP12_F_ABAN6", iLocal_159, 69))
		{
			return 1;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_173[iVar0 /*20*/])))
		{
			if ((func_537(uParam0, Local_173[iVar0 /*20*/], "BAP12_F_ABAN7", iLocal_166, 69) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(Local_173[iVar0 /*20*/]), Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(Local_173[iVar0 /*20*/]), iLocal_170, 1, 1))
			{
				if (iLocal_14 == 2)
				{
					if (func_225(uParam0, 49, Local_173[0 /*20*/], 1101004800, 1109393408, 1, 1))
					{
						StringCopy(&(uParam0->f_2578), "BAP12_F_BROKE", 24);
						return 1;
					}
				}
				else
				{
					StringCopy(&(uParam0->f_2578), "BAP12_F_BROKE", 24);
					return 1;
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_324[iVar0 /*20*/])))
		{
			if ((PED::IS_PED_DEAD_OR_DYING(&(Local_324[iVar0 /*20*/]), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(Local_324[iVar0 /*20*/]), Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(Local_324[iVar0 /*20*/]), iLocal_170, 1, 1))
			{
				if (PED::IS_PED_INJURED(&(Local_324[iVar0 /*20*/])) && ENTITY::_0x96C638784DB4C815(&(Local_324[iVar0 /*20*/])) < 0.3f)
				{
					if (iLocal_14 == 2)
					{
						if (func_225(uParam0, 49, Local_173[0 /*20*/], 1101004800, 1109393408, 1, 1))
						{
							StringCopy(&(uParam0->f_2578), "BAP12_F_BROKE", 24);
							return 1;
						}
					}
					else
					{
						StringCopy(&(uParam0->f_2578), "BAP12_F_BROKE", 24);
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_163))
	{
		if (!func_538(iLocal_163, 1))
		{
			StringCopy(&(uParam0->f_2578), "BAP12_F_ABAN8", 24);
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_170))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170, 0, 0))
		{
			StringCopy(&(uParam0->f_2578), "BAP12_F_ABAN9", 24);
			return 1;
		}
		if (!bLocal_2438)
		{
			bLocal_2438 = func_539(&iLocal_170);
		}
		else
		{
			if (func_540(iLocal_170, 0))
			{
				StringCopy(&(uParam0->f_2578), "BAP12_F_ABAN9", 24);
				return 1;
			}
			if (func_540(iLocal_170, 1))
			{
				StringCopy(&(uParam0->f_2578), "BAP12_F_ABAN9", 24);
				return 1;
			}
		}
	}
	return 0;
}

float func_220(var uParam0)
{
	if (!func_81(uParam0))
	{
		return 0f;
	}
	if (func_283(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_541() - uParam0->f_1);
}

int func_221(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_222(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return 1;
}

bool func_223(char* sParam0)
{
	return func_542(sParam0);
}

void func_224(int iParam0, int iParam1)
{
	func_543(1, iParam0, iParam1);
}

int func_225(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, int iParam5, bool bParam6)
{
	if (!&iLocal_21[iParam1])
	{
		if (func_217(*iParam2, Global_35, fParam3, 1))
		{
			if (!bParam6)
			{
				func_224(1, 0);
			}
			if (func_544())
			{
				return 0;
			}
			if (func_545(uParam0, func_196(iParam1), 0))
			{
				if (*iParam2 != Global_35)
				{
					TASK::TASK_LOOK_AT_ENTITY(*iParam2, Global_35, 30000, 4, 51, 0);
				}
				iLocal_21[iParam1] = 1;
			}
		}
		else
		{
			return 0;
		}
	}
	else if (func_223(func_196(iParam1)))
	{
		if (!func_217(*iParam2, Global_35, fParam4, 1))
		{
			func_546(func_196(iParam1), 0, 0);
		}
		iLocal_21[iParam1] = 1;
		return 1;
	}
	return 0;
}

void func_226(var uParam0)
{
	func_547(uParam0, 0f);
}

float func_227(var uParam0)
{
	if (!func_81(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_283(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_541() - uParam0->f_1);
}

int func_228(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_548(bParam1, iParam2, bParam3);
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

int func_229(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	if (!iParam6 == 0)
	{
		fVar0 = func_549(Global_35, iParam6, 1, 1);
		bVar1 = true;
	}
	else
	{
		fVar0 = func_550(Global_35, vParam3, 1);
	}
	if (fVar0 > fParam9)
	{
		if (bVar1)
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(iParam6))
			{
				StringCopy(&(uParam0->f_2578), sParam2, 24);
				return 1;
			}
		}
		else
		{
			StringCopy(&(uParam0->f_2578), sParam2, 24);
			return 1;
		}
	}
	else if (fVar0 > fParam7)
	{
		if (!(vLocal_91[iParam1 /*3*/])->f_1)
		{
			_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
			func_432(&(vLocal_91[iParam1 /*3*/]), 7500, 0, 1, 0, 0, -1, -1, 0);
			(vLocal_91[iParam1 /*3*/])->f_1 = 1;
		}
	}
	else if (fVar0 < fParam8)
	{
		func_551(&(vLocal_91[iParam1 /*3*/]));
		if ((vLocal_91[iParam1 /*3*/])->f_1)
		{
		}
		iVar2 = 0;
		while (iVar2 < 21)
		{
			(vLocal_91[iVar2 /*3*/])->f_2 = 0;
			iVar2++;
		}
		(vLocal_91[iParam1 /*3*/])->f_1 = 0;
	}
	return 0;
}

int func_230(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_552(iVar0) || func_553(iVar0))
				{
					return 0;
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_231(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_554(((*Global_1347702)[iParam0 /*49*/])->f_15) != 0)
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

int func_232(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_555(0);
	if (iVar0 == 11)
	{
		iVar1 = func_556(func_114(iParam1), 1);
		if (iVar1 != -589165916)
		{
			if ((iVar1 == -103573613 || iVar1 == 194099983) || iVar1 == 2038046186)
			{
				iVar2 = func_557(Global_40.f_4283);
				if (func_416(iVar2) && iVar2 == ((*Global_1347702)[uParam0->f_174 /*49*/])->f_27)
				{
					return 1;
				}
			}
		}
	}
	else if (iVar0 == 4)
	{
		iVar3 = func_558(iParam1);
		if (iVar3 != -1)
		{
			if ((iVar3 == 1 || iVar3 == 3) || iVar3 == 2)
			{
				if (func_416(Global_1894899->f_2) && Global_1894899->f_2 == func_557(Global_40.f_4283))
				{
					return 1;
				}
			}
		}
	}
	if (func_559(uParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_233(int iParam0)
{
	int iVar0;
	int iVar1;

	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 8 != 0)
	{
		return 1;
	}
	if (func_560(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		if (!func_560(((*Global_1835011)[44 /*74*/])->f_1, 1))
		{
			if (iParam0 != 82 && iParam0 != 83)
			{
				return 1;
			}
		}
		if (func_560(((*Global_1835011)[67 /*74*/])->f_1, 1))
		{
			if ((!func_560(((*Global_1347702)[8 /*49*/])->f_15, 1) && !func_560(((*Global_1835011)[69 /*74*/])->f_1, 1)) && iParam0 != 8)
			{
				if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1835011)[67 /*74*/])->f_22)) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(((*Global_1835011)[67 /*74*/])->f_22))) > 0)
				{
					return 1;
				}
			}
		}
	}
	else if ((!func_561(2) && !func_560(((*Global_1347702)[61 /*49*/])->f_15, 1)) && func_560(((*Global_1347702)[59 /*49*/])->f_15, 1))
	{
		if (iParam0 != 60 && iParam0 != 61)
		{
			return 1;
		}
	}
	if (iParam0 == 15)
	{
		iVar1 = func_564(func_562(65536), 0, 3, func_563(65536));
		if (func_59(iVar1))
		{
			iVar0 = func_554(iVar1);
			if (!func_536(iVar0, 4))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 26 || iParam0 == 27)
	{
		if (((((!func_560(((*Global_1835011)[14 /*74*/])->f_1, 1) && func_560(((*Global_1347702)[62 /*49*/])->f_15, 1)) && func_560(((*Global_1347702)[0 /*49*/])->f_15, 1)) && func_560(((*Global_1347702)[94 /*49*/])->f_15, 1)) && func_560(((*Global_1835011)[25 /*74*/])->f_1, 1)) && (func_560(((*Global_1835011)[8 /*74*/])->f_1, 1) || (func_560(((*Global_1347702)[98 /*49*/])->f_15, 1) && func_554(((*Global_1347702)[98 /*49*/])->f_15) == 0)))
		{
			return 1;
		}
	}
	else if (iParam0 == 27)
	{
		if (!func_560(((*Global_1835011)[34 /*74*/])->f_1, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 42)
	{
		if (!func_560(((*Global_1347702)[41 /*49*/])->f_15, 1))
		{
			if (!func_565(8))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 51)
	{
		if (!func_566(2))
		{
			return 1;
		}
	}
	else if (iParam0 == 52)
	{
		if (!func_560(((*Global_1347702)[51 /*49*/])->f_15, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 57)
	{
		if (func_293(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 69 || iParam0 == 70)
	{
		if (func_567(((*Global_1347702)[iParam0 /*49*/])->f_15) == 0)
		{
			if (func_568() <= 160)
			{
				return 1;
			}
			else
			{
				func_569(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
			}
		}
		if (!func_570(68))
		{
			return 1;
		}
	}
	else if (iParam0 == 77)
	{
		if (func_293(((*Global_1835011)[47 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_293(((*Global_1835011)[45 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_571(16, 0))
		{
			return 1;
		}
	}
	else if (iParam0 == 87)
	{
		if (func_293(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 95)
	{
		if (func_293(((*Global_1835011)[20 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_293(((*Global_1835011)[21 /*74*/])->f_1))
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
		else if (!SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[113 /*49*/])->f_42, false) && func_572())
		{
			if (func_432("MUDTOWN32_altobj", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
			{
				func_181(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 262144);
				func_234(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 64);
				func_130(113, 1, 0, 1, 1, 1, 0);
				return 1;
			}
		}
	}
	else if (iParam0 == 99)
	{
		if (func_573(-404697685, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 117)
	{
		if (func_293(((*Global_1835011)[69 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 136)
	{
		if (func_293(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_234(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_235(int iParam0)
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

int func_236(int iParam0)
{
	if (!func_416(iParam0))
	{
		return 0;
	}
	return func_417(iParam0, 33554432);
}

int func_237(int iParam0)
{
	if (!func_416(iParam0))
	{
		return 0;
	}
	return func_417(iParam0, 67108864);
}

var func_238()
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

bool func_239(int iParam0, int iParam1)
{
	return func_574(iParam0, iParam1);
}

int func_240(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (func_228(iParam0, bParam1, iParam2, iParam3))
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

int func_241(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
			else if (func_575(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0]), 16, 1))
			{
				if (iParam1 == 0)
				{
					return 0;
				}
				else if (!func_479(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])))
				{
					return 0;
				}
			}
			if (iParam4 && func_92(&Global_1935630, 4096))
			{
			}
			else if (func_576(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0]), 44, 0) && iParam2 == 1)
			{
			}
			else if (!func_577(func_480(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])), -1f, 10f, 1, 1, 40f))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_242(var uParam0)
{
	if (func_219(uParam0) || iLocal_162 == 20)
	{
		bLocal_2439 = true;
		func_352(20);
	}
	if (bLocal_2439)
	{
		if (!func_81(&uLocal_1722))
		{
			func_226(&uLocal_1722);
		}
		else if (func_220(&uLocal_1722) > 1.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_243(int iParam0, float fParam1)
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

int func_244(var uParam0)
{
	return 0;
}

int func_245(float fParam0)
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

void func_246()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_478(iVar0) && func_479(iVar0))
		{
			func_578(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_82(&(Global_1359489->f_40), 1);
}

void func_247(var uParam0)
{
	int iVar0;
	float fVar1;

	if (func_8(uParam0->f_172, 8))
	{
		func_390(1);
		func_579(4194304);
		func_580(1);
		if (func_538(Global_35, 0))
		{
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
		if (func_73(uParam0) == 1)
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_170);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_170))
			{
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_170, true);
			}
			func_581(&iLocal_170);
		}
		func_582();
		if (PED::DOES_GROUP_EXIST(iLocal_445))
		{
			PED::REMOVE_GROUP(iLocal_445);
		}
		func_342(-215861784, 0, 0f, 0, 1, 0, 0, 0);
		func_342(-543954117, 0, 0f, 0, 1, 0, 0, 0);
		func_211(1);
		STREAMING::_REMOVE_IMAP(-1390612743);
		func_583(0);
		if (VOLUME::DOES_VOLUME_EXIST(iLocal_1671))
		{
			PATHFIND::RESET_ROADS_IN_VOLUME(iLocal_1671, 0);
		}
		if (VOLUME::DOES_VOLUME_EXIST(iLocal_1672))
		{
			PATHFIND::RESET_ROADS_IN_VOLUME(iLocal_1672, 0);
		}
		if (VOLUME::DOES_VOLUME_EXIST(iLocal_1673))
		{
			PATHFIND::RESET_ROADS_IN_VOLUME(iLocal_1673, 0);
		}
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_1598))
	{
		iLocal_1598 = TASK::_0xF533D68FF970D190(1346.359f, -1798.611f, 68.2199f, 745599470, 200f, 0, 0);
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_1598))
	{
		TASK::_0x5A40040BB5AE3EA2(iLocal_1598);
	}
	func_385(41);
	func_199(&uLocal_1614, 1);
	func_200(&uLocal_1614, 0);
	func_510(&uLocal_1614, 1);
	func_413(&iLocal_160);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_159))
	{
		if (PED::IS_PED_IN_GROUP(iLocal_159))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_159);
		}
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(Local_324[iVar0 /*20*/])) && PED::IS_PED_IN_GROUP(&(Local_324[iVar0 /*20*/])))
		{
			PED::REMOVE_PED_FROM_GROUP(&(Local_324[iVar0 /*20*/]));
		}
		_NAMESPACE29::_0x0EABF182FBB63D72(&(Local_324[iVar0 /*20*/]), 6, 1);
		func_171(Local_324[iVar0 /*20*/], 0, 1, 1);
		iVar0++;
	}
	func_413(&iLocal_1599);
	func_413(&iLocal_171);
	func_413(&iLocal_167);
	func_211(1);
	func_584(func_1(26), 150f, 5);
	if (func_585(Global_35, iLocal_170, 0))
	{
		func_586(&iLocal_170);
	}
	if (!func_73(uParam0) == 1)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_538(&(Local_173[iVar0 /*20*/]), 0))
			{
				if (iVar0 == 0)
				{
					func_355(Local_173[iVar0 /*20*/], &iLocal_170, -1, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(&(Local_173[iVar0 /*20*/]), 2, true);
					TASK::CLEAR_PED_TASKS(&(Local_173[iVar0 /*20*/]), 1, 0);
					TASK::TASK_SMART_FLEE_COORD(&(Local_173[iVar0 /*20*/]), func_1(18), 10000f, -1, false, 2f);
					func_171(Local_173[iVar0 /*20*/], 1, 1, 1);
				}
				else
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(&(Local_173[iVar0 /*20*/]), false))
					{
						func_360(&(Local_173[iVar0 /*20*/]), 0, 0);
					}
					TASK::TASK_WANDER_STANDARD(&(Local_173[iVar0 /*20*/]), 40000f, 0);
					func_171(Local_173[iVar0 /*20*/], 1, 1, 1);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_316[iVar0])))
			{
				fVar1 = (0.2f + IntToFloat((iVar0 + 1 / 20)));
				func_587(&(iLocal_316[iVar0]), iLocal_170, 0f, -0.61f, fVar1, 90f, 0f, 0f, 1, 0, 0);
			}
			iVar0++;
		}
	}
	func_413(&iLocal_1599);
}

void func_248(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_287(iParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_288(iParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(iVar0, func_288(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_288(iParam0)))
			{
				UILOG::_UILOG_REMOVE_ENTRY(2, func_288(iParam0));
			}
		}
	}
	func_123(iParam0, 4);
	func_123(iParam0, 8);
	func_123(iParam0, 16);
}

void func_249(int iParam0)
{
	Global_36579 = iParam0;
}

void func_250(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_251(int iParam0)
{
	func_49(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			func_257(iParam0, func_71(iParam0), 1, 0);
		}
		else
		{
			func_588(iParam0);
		}
	}
	else
	{
		func_117(iParam0, 0);
	}
}

void func_252(var uParam0)
{
	if (func_589(uParam0->f_174))
	{
		func_590(262144, 5, 0, 1);
		func_591(720f, 1, 0);
	}
}

void func_253(int iParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_fishingrod"), 0, 0))
	{
		return;
	}
	Global_1900073->f_18 = iParam0;
}

void func_254(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_255(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_73(uParam0);
	if (uParam0->f_750 == -1)
	{
		if (iVar0 == 1 || iVar0 == 0)
		{
			uParam0->f_750 = uParam0->f_749;
		}
		else if (!func_33(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
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

float func_256(int iParam0)
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

void func_257(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;

	if (!func_214(iParam0))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 256 != 0 && func_148(0, 0, 1))
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
	if (func_62(32768))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	((*Global_1347702)[iParam0 /*49*/])->f_38 = func_592(iParam0);
	if (!bParam5 && func_593(iParam0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::BLIP_ADD_FOR_RADIUS(((*Global_1347702)[iParam0 /*49*/])->f_38, func_465(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_18);
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(((*Global_1347702)[iParam0 /*49*/])->f_37, ((*Global_1347702)[iParam0 /*49*/])->f_36, true);
	}
	else
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::BLIP_ADD_FOR_COORDS(((*Global_1347702)[iParam0 /*49*/])->f_38, vParam1);
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(((*Global_1347702)[iParam0 /*49*/])->f_37, ((*Global_1347702)[iParam0 /*49*/])->f_36, true);
	}
	if (iParam0 == 61)
	{
		func_594(8);
	}
	else if (iParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		MAP::BLIP_ADD_MODIFIER(((*Global_1347702)[iParam0 /*49*/])->f_37, 838722941);
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
	func_588(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(((*Global_1347702)[iParam0 /*49*/])->f_37, 64, iParam0);
	if (func_213() == -1)
	{
		func_595(iParam0);
		iVar0 = func_557(Global_40.f_4283);
		if (func_416(iVar0) && func_596(((*Global_1888801)[iVar0 /*35*/])->f_13))
		{
			iVar1 = 1;
			bVar2 = func_597(iVar0);
		}
		if (func_598(iParam0, iVar1, iVar0))
		{
			func_599(((*Global_1347702)[iParam0 /*49*/])->f_15, bVar2, iVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT() || CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 1 == 0)
	{
		func_49(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		if (((!func_593(iParam0) || func_33(((*Global_1347702)[iParam0 /*49*/])->f_12, 1)) || func_33(((*Global_1347702)[iParam0 /*49*/])->f_12, 512)) || func_48(((*Global_1347702)[iParam0 /*49*/])->f_13, 2048))
		{
			MAP::BLIP_ADD_MODIFIER(((*Global_1347702)[iParam0 /*49*/])->f_37, 580546400);
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32768 == 0)
	{
		if ((((*Global_1347702)[iParam0 /*49*/])->f_36 == -1822497728 && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 == 0) && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 2 != 0)
		{
			MAP::BLIP_ADD_MODIFIER(((*Global_1347702)[iParam0 /*49*/])->f_37, -211388321);
		}
		else
		{
			func_49(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_600(iParam0))
		{
			if (iParam0 == 97)
			{
				func_375(185, 0);
			}
			else
			{
				func_375(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = ((*Global_1347702)[iParam0 /*49*/])->f_37;
			((*Global_1347702)[iParam0 /*49*/])->f_40 = func_467(MISC::_CREATE_VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_289(iParam0, 2);
	}
}

void func_258(int iParam0, float fParam1)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32768 != 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_36 != -1822497728)
	{
		func_49(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 2 == 0)
	{
		func_49(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	if (fParam1 < (((*Global_1347702)[iParam0 /*49*/])->f_18 * ((*Global_1347702)[iParam0 /*49*/])->f_18))
	{
		MAP::BLIP_REMOVE_MODIFIER(((*Global_1347702)[iParam0 /*49*/])->f_37, -211388321);
		func_49(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
	}
}

void func_259(int iParam0, vector3 vParam1, float fParam4)
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
		func_181(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 1048576);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	if (func_601(iParam0, fParam4))
	{
		func_49(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2048);
		func_178(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		func_117(iParam0, 0);
		func_257(iParam0, vParam1, 1, 0);
	}
}

void func_260(int iParam0)
{
	if (func_602(179))
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
	else if (func_593(iParam0))
	{
		return;
	}
	if (((MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37) && MAP::IS_BLIP_ON_MINIMAP(((*Global_1347702)[iParam0 /*49*/])->f_37)) && BUILTIN::VDIST2(func_71(iParam0), Global_36) < 10000f) && func_603())
	{
		func_604(179, ((*Global_1347702)[iParam0 /*49*/])->f_37, 0);
	}
}

void func_261(int iParam0)
{
	if (func_602(180))
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_36 != -1822497728)
	{
		return;
	}
	else if (!func_593(iParam0))
	{
		return;
	}
	if ((MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37) && MAP::IS_BLIP_ON_MINIMAP(((*Global_1347702)[iParam0 /*49*/])->f_37)) && func_603())
	{
		func_604(180, ((*Global_1347702)[iParam0 /*49*/])->f_37, 0);
	}
}

void func_262(var uParam0)
{
	if (func_8(uParam0->f_172, 16))
	{
		func_104(uParam0, 0);
		func_89(uParam0);
	}
}

int func_263(var uParam0)
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
		Var0 = { func_605(uParam0->f_174) };
		uParam0->f_751 = ANIMSCENE::_CREATE_ANIM_SCENE(&Var0, 0, 0, false, true);
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_751))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_751);
		}
	}
	return 0;
}

struct<8> func_264()
{
	char cVar0[64];

	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

struct<8> func_265(var uParam0)
{
	return uParam0->f_350;
}

void func_266(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_606(uParam0) };
	func_316(uParam0, &Var0);
}

void func_267(var uParam0, char* sParam1)
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
	if (!ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_348, sParam1))
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
	func_316(uParam0, sParam1);
	func_607(uParam0, 2097152, 1);
	func_320(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_348, sParam1, true);
}

int func_268(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_269(var uParam0)
{
	if (uParam0->f_177 == 6)
	{
		return 1;
	}
	else if (uParam0->f_177 == 2)
	{
		return 1;
	}
	else if (func_608(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_270(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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
			return (func_609(uParam0, 256) && !func_609(uParam0, 4194304));
		}
		uParam0->f_415 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	func_610(uParam0, sParam1);
	if (!func_609(uParam0, 64))
	{
		if (!func_268(func_611(uParam0)))
		{
			func_320(uParam0, 64);
		}
		else
		{
			vVar0 = { func_612(uParam0) };
			if (!func_268(vVar0))
			{
				func_613(uParam0, vVar0);
			}
		}
		return 0;
	}
	fVar3 = func_550(Global_35, func_611(uParam0), 1);
	if (func_609(uParam0, 128) || func_609(uParam0, 256))
	{
		if ((fVar3 >= func_614(uParam0) && !bParam2) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
		{
			if (uParam0->f_433)
			{
				func_615();
				uParam0->f_433 = 0;
			}
			func_616(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
			}
			func_377(uParam0);
			func_607(uParam0, 128, 1);
			func_607(uParam0, 256, 1);
			func_607(uParam0, 4096, 1);
			func_607(uParam0, 32768, 1);
			func_607(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_617(uParam0) || bParam2)
	{
		if (!func_609(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
			{
				if (func_617(uParam0) >= func_614(uParam0))
				{
				}
				Var4 = { func_265(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_618(uParam0);
				}
				Var4 = { func_265(uParam0) };
				iVar12 = 256;
				if (!func_609(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_348 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_344), iVar12, &Var4, false, true);
				func_619(uParam0, 0, 0, 0, 0);
				func_320(uParam0, 128);
			}
		}
	}
	if (func_609(uParam0, 128))
	{
		if (func_609(uParam0, 256) && !func_609(uParam0, 4194304))
		{
			return 1;
		}
		func_620(uParam0);
		if (!uParam0->f_433)
		{
			if (func_621())
			{
				func_622(4096);
				uParam0->f_433 = 1;
			}
		}
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_348, 1, 0))
		{
			bVar13 = true;
			Var15 = { func_606(uParam0) };
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
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_348, uParam0->f_366[iVar14 /*9*/]);
							bVar13 = false;
						}
						else if (!ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_348, uParam0->f_366[iVar14 /*9*/]))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_609(uParam0, 8388608))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_348, &Var15))
				{
					if (!func_609(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_348, &Var15) && !ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_348, &Var15)) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_348, &Var15))
						{
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_348, &Var15);
						}
						func_320(uParam0, 16777216);
					}
					if (!ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_348, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return 0;
			}
			func_320(uParam0, 256);
			func_607(uParam0, 4194304, 1);
			return 1;
		}
	}
	return 0;
}

void func_271(var uParam0)
{
}

bool func_272(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

int func_273(var uParam0, char* sParam1, int iParam2)
{
	if (func_272(sParam1, 2))
	{
		return 0;
	}
	if (func_272(sParam1, 1))
	{
		return 0;
	}
	if (iParam2 < sParam1->f_11 || iParam2 > sParam1->f_13)
	{
		return 0;
	}
	if ((func_623(sParam1) == 9 || func_623(sParam1) == 12) || func_623(sParam1) == 13)
	{
		if (!func_272(sParam1, 8))
		{
			if (iParam2 == sParam1->f_11)
			{
				func_624(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return 1;
		}
	}
	if (iParam2 >= sParam1->f_11)
	{
		return func_625(uParam0, func_623(sParam1));
	}
	return 0;
}

void func_274(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::START_AUDIO_SCENE(sParam0);
	}
	func_624(sParam0, 1);
}

int func_275(var uParam0, char* sParam1, int iParam2)
{
	if (!func_272(sParam1, 1))
	{
		return 0;
	}
	if (func_272(sParam1, 2))
	{
		return 0;
	}
	if (iParam2 > sParam1->f_13)
	{
		return 1;
	}
	if ((func_626(sParam1) == 9 || func_626(sParam1) == 12) || func_626(sParam1) == 13)
	{
		if (!func_272(sParam1, 8))
		{
			if (iParam2 == sParam1->f_13)
			{
				func_624(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return 1;
		}
	}
	if (iParam2 >= sParam1->f_13)
	{
		return func_625(uParam0, func_626(sParam1));
	}
	return 0;
}

void func_276(char* sParam0)
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
	func_624(sParam0, 2);
}

int func_277(var uParam0, char* sParam1, int iParam2)
{
	if (func_272(sParam1, 1))
	{
		return 0;
	}
	if (func_623(sParam1) == 2)
	{
		return uParam0->f_177 == 2;
	}
	if (func_623(sParam1) == 0)
	{
		if (uParam0->f_177 == 6 && func_627(uParam0) == -1)
		{
			return 1;
		}
	}
	if (sParam1->f_11 != iParam2)
	{
		if (((func_623(sParam1) == 9 || func_623(sParam1) == 12) || func_623(sParam1) == 13) && func_272(sParam1, 8))
		{
			return 1;
		}
		return 0;
	}
	switch (func_623(sParam1))
	{
		case 0:
			return uParam0->f_177 == 6;
		case 4:
			return func_387(&(uParam0->f_753));
		case 1:
		case 10:
		case 11:
			return uParam0->f_177 == 7;
		case 9:
		case 12:
		case 13:
			if (!func_272(sParam1, 8))
			{
				func_624(sParam1, 8);
			}
			break;
	}
	return 0;
}

void func_278(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::_0x2B9C37C01BF25EDB(sParam0);
	}
	func_624(sParam0, 1);
}

int func_279(char* sParam0, bool bParam1)
{
	if (func_272(sParam0, 1))
	{
		return 0;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		AUDIO::PREPARE_MUSIC_EVENT(sParam0);
		func_624(sParam0, 1);
		return 1;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_624(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_624(sParam0, 1);
			return 0;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_624(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_624(sParam0, 1);
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
		func_624(sParam0, 1);
		return 1;
	}
	func_624(sParam0, 1);
	return 0;
}

void func_280(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_482)
	{
		if ((func_272(uParam0->f_482[iVar0 /*16*/], 1048576) && func_272(uParam0->f_482[iVar0 /*16*/], 4)) && !func_272(uParam0->f_482[iVar0 /*16*/], 1))
		{
			AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_482[iVar0 /*16*/]);
			return;
		}
		iVar0++;
	}
}

int func_281(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
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
		if (!func_628(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_629(uParam0, 0))
			{
				if (func_630(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_631(uParam0, 1, &iVar0))
					{
					}
					if (func_632(uParam0, 3, &cVar2))
					{
					}
					if (func_631(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_631(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_631(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_631(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_631(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 15 && uParam0->f_785 < 15)
						{
							if (!func_633(uParam0, &cVar2, uParam0->f_785))
							{
								*((*uParam0)[uParam0->f_785 /*16*/]) = { cVar2 };
								func_624((*uParam0)[uParam0->f_785 /*16*/], 1048576);
								uParam0->f_785++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 15 && uParam0->f_786 < 15)
						{
							*(uParam0->f_241[uParam0->f_786 /*16*/]) = { cVar2 };
							func_624(uParam0->f_241[uParam0->f_786 /*16*/], 1048576);
							uParam0->f_786++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 16 && uParam0->f_787 < 16)
						{
							*(uParam0->f_482[uParam0->f_787 /*16*/]) = { cVar2 };
							func_624(uParam0->f_482[uParam0->f_787 /*16*/], 1048576);
							if (!bVar19 && func_272(&cVar2, 4))
							{
								AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_482[uParam0->f_787 /*16*/]);
								bVar19 = true;
							}
							uParam0->f_787++;
						}
					}
					else if (iVar0 < 2 && uParam0->f_788 < 2)
					{
						if (!func_633(&(uParam0->f_739), &cVar2, uParam0->f_788))
						{
							*(uParam0->f_739[uParam0->f_788 /*16*/]) = { cVar2 };
							func_624(uParam0->f_739[uParam0->f_788 /*16*/], 1048576);
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
	if (!func_144(uParam0) && uParam0->f_791 > 0)
	{
		iVar20 = uParam0->f_792;
		while (iVar20 <= (uParam0->f_791 - 1))
		{
			uParam0->f_776.f_1 = 0;
			uParam0->f_776.f_3 = iVar20;
			iVar22 = 0;
			if (func_629(uParam0, 12))
			{
				if (func_631(uParam0, 13, &iVar0))
				{
				}
				if (func_631(uParam0, 14, &iVar1))
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
		func_634(uParam0);
	}
	return 1;
}

bool func_282(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_283(var uParam0)
{
	return func_282(*uParam0, 2);
}

int func_284()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_285(var uParam0)
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
		vVar0 = { func_71(uParam0->f_174) };
		func_635(vVar0, 2.5f, 1, 0, 0, 0, 0);
		_NAMESPACE49::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(vVar0, 2.5f);
		if (func_33(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 524288))
		{
			((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = func_636(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, vVar0, 0, 1, 1, 0, 1, 1, 0, 1, 1);
		}
		else
		{
			((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = func_636(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, vVar0, 0, 1, 1, 0, 1, 1, 1, 1, 0);
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

int func_286(var uParam0)
{
	bool bVar0;

	bVar0 = true;
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_1668))
	{
		iLocal_1668 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1286.332f, -1316.415f, 76.95814f, 0f, 0f, -37.5624f, 27.1345f, 21.13703f, 8.672677f, "m_volBlockAlley");
		bVar0 = false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_1670))
	{
		iLocal_1670 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1305.05f, -1288.248f, 77.5198f, 0f, 0f, -36.80527f, 54.27384f, 48.38937f, 9.148383f, "m_volRallyFail");
		bVar0 = false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_1671))
	{
		iLocal_1671 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1409.628f, -1413.222f, 79.15613f, 0f, 0f, 143.6281f, 113.7582f, 193.8853f, 44.3486f, "m_volBlockMainRoad");
		bVar0 = false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_1676))
	{
		iLocal_1676 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1437.704f, -1435.688f, 78.87199f, 0f, 0f, -22.20845f, 4.101529f, 7.48863f, 4.006544f, "m_volFlee");
		bVar0 = false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_1672))
	{
		iLocal_1672 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1340.538f, -1309.592f, 79.15613f, 0f, 0f, -20.59999f, 161.659f, 150.1979f, 62.87448f, "m_volBlockPubRoad");
		bVar0 = false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_1673))
	{
		iLocal_1673 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1295.226f, -1566.839f, 79.15613f, 0f, 0f, 91.0927f, 185.7997f, 211.4777f, 40.12586f, "m_volBlockStartRoad");
		bVar0 = false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_1674))
	{
		iLocal_1674 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1862.033f, -1352.947f, 41.7592f, 0f, 0f, 21.03727f, 12.35007f, 8.990881f, 3.933563f, "m_volRestrict");
		bVar0 = false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_1675))
	{
		iLocal_1675 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1863.443f, -1350.684f, 42.27082f, 0f, 0f, 20.76675f, 3.686311f, 5.982208f, 2.096659f, "Force start!");
		bVar0 = false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_1669))
	{
		iLocal_1669 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1303.825f, -1293.668f, 78.40648f, 0f, 0f, -37.56239f, 27.1345f, 21.13703f, 8.672677f, "m_volTriggerCousinsToAttackBeau");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_1677))
	{
		iLocal_1677 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1857.837f, -1352.987f, 42.52772f, 0f, 0f, 21.71396f, 7.713505f, 4.974056f, 2.583666f, "ILO");
	}
	if (!bVar0)
	{
		return 0;
	}
	func_354(func_1(0), 20f, 0);
	iLocal_1678 = func_637(iLocal_1668, 0, 0, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_1668, 0, 262144, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_1668, 0, 0, 0, -1, -1, 0);
	if (func_336(uParam0, -1))
	{
		STREAMING::_REQUEST_IMAP(-1390612743);
		func_638(1860876114, 1);
		return 1;
	}
	return 0;
}

int func_287(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0 || ((*Global_1347702)[iParam0 /*49*/])->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_288(int iParam0)
{
	var uVar0;

	uVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_3;
	return MISC::GET_HASH_KEY(&uVar0);
}

void func_289(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

void func_290(int iParam0)
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
	uVar10 = func_639(iParam0, 0);
	iVar11 = uVar10;
	iVar12 = uVar10;
	if (iParam0 == 82 || iParam0 == 83)
	{
		iVar12 = MISC::GET_HASH_KEY("LAW_UI_DUTCH_GANG");
	}
	MemCopy(&cVar0, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 8);
	StringConCat(&cVar0, "_DESC", 64);
	iVar13 = func_287(iParam0);
	UILOG::_UILOG_ADD_ENTRY_HASH(iVar13, func_288(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_24, iVar12, MISC::GET_HASH_KEY(&cVar0), ((*Global_1347702)[iParam0 /*49*/])->f_37);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar13, func_288(iParam0), iVar11, MISC::GET_HASH_KEY("toast_log_blips"));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar8) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar9))
	{
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(iVar13, func_288(iParam0), MISC::GET_HASH_KEY(sVar8), MISC::GET_HASH_KEY(sVar9));
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar13, func_288(iParam0)))
	{
		func_289(iParam0, 4);
	}
}

void func_291(int iParam0)
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
		cVar3 = func_640(0, &Var1, 0, 0, -1, -1);
		func_641(iParam0, &Var1, cVar3, -1082130432);
	}
}

void func_292(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_214(iVar0) && Global_1347702[iVar0 /*49*/] == iParam0)
		{
			bVar1 = true;
			func_248(iVar0, 1);
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

int func_293(int iParam0)
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
		iVar0 = func_457(iParam0);
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

void func_294(int iParam0, bool bParam1)
{
	if (!func_59(iParam0))
	{
		return;
	}
	if (!func_110(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_111(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_111(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_112(iParam0), func_113(iParam0), func_114(iParam0), func_111(iParam0), Global_36);
		}
	}
	func_461(iParam0, 1);
	bParam1 = bParam1;
}

void func_295(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_59(iParam0))
	{
		return;
	}
	if (!func_293(iParam0))
	{
		return;
	}
	iVar0 = func_112(iParam0);
	if (bParam1)
	{
		if (func_111(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_111(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != ((*Global_1835011)[77 /*74*/])->f_1)
			{
				func_642(func_113(iParam0));
			}
			if (func_213() != 0)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_111(iParam0), 0);
			}
			else
			{
				STATS::STATSTRACKER_DEED_STARTED(func_111(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_643(iParam0);
	if (!func_59(func_58(0)))
	{
		func_461(iParam0, 3);
		func_211(bParam2);
		if (func_213() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
			}
			func_460(1);
		}
		func_644(iParam0, -1);
		if (bParam1 && !func_62(2))
		{
			func_645(&Global_0, 1024);
		}
		if (func_213() == -1)
		{
			func_646(&(Global_1347343->f_11), 536870912);
			func_647(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_648(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_649(0);
			}
		}
		if (func_213() == -1)
		{
			iVar1 = func_488(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_490();
				switch (iVar1)
				{
					case 0:
						func_650(0);
						break;
					case 1:
						func_650(1);
						break;
					case 2:
						func_650(2);
						break;
					case 3:
						func_650(3);
						break;
					case 4:
						func_650(4);
						break;
					case 5:
						func_650(5);
						break;
					case 6:
						func_650(5);
						break;
					case 7:
						func_650(7);
						break;
					case 8:
						func_650(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_113(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_650(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_113(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_650(11);
						break;
					default:
						iVar1 = func_490();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_651(0);
									break;
								case 1:
									func_651(1);
									break;
								case 2:
									func_651(2);
									break;
								case 3:
									func_651(3);
									break;
								case 4:
									func_651(4);
									break;
								case 5:
									func_651(5);
									break;
								case 6:
									func_651(5);
									break;
								case 7:
									func_651(7);
									break;
								case 8:
									func_651(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_464(1);
	}
	else
	{
		func_644(iParam0, -1);
		func_461(iParam0, 4);
	}
	func_491(iParam0, 0);
}

void func_296(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_297(var uParam0)
{
	int iVar0;

	if (uParam0->f_749 == -1)
	{
		if (!func_33(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
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

void func_298(bool bParam0, int iParam1, bool bParam2)
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
	if (PED::_GET_PEDS_IN_COMBAT_WITH_TARGET(Global_35, iVar0, iParam1) > 0)
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
					if (_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(_NAMESPACE48::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(iVar3)))
					{
						_NAMESPACE48::FORCE_DESPAWN_PERSCHAR(_NAMESPACE48::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(iVar3));
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

void func_299()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_478(iVar0))
		{
			func_578(iVar0, 30, 1);
		}
		iVar0++;
	}
}

void func_300(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_560(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return;
	}
	else if (func_560(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return;
	}
	if (((((((((((((((uParam0->f_174 == 29 || uParam0->f_174 == 56) || uParam0->f_174 == 57) || uParam0->f_174 == 72) || uParam0->f_174 == 84) || uParam0->f_174 == 85) || uParam0->f_174 == 86) || uParam0->f_174 == 87) || uParam0->f_174 == 88) || uParam0->f_174 == 92) || uParam0->f_174 == 111) || uParam0->f_174 == 102) || uParam0->f_174 == 117) || uParam0->f_174 == 122) || uParam0->f_174 == 149) || uParam0->f_174 == 150)
	{
		iVar0 = 100;
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_revolver_cattleman"), 0, 0))
		{
			if (!func_652(joaat("weapon_revolver_cattleman")))
			{
				func_653(joaat("weapon_revolver_cattleman"));
			}
			func_654(Global_35, joaat("weapon_revolver_cattleman"), 0, 0, 2, 1, 0, 1056964608, 1065353216, iVar0, 0, 0, 0, 0);
		}
		else
		{
			iVar1 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman"));
			if (iVar1 < iVar0)
			{
				WEAPON::_ADD_AMMO_TO_PED(Global_35, joaat("weapon_revolver_cattleman"), (iVar0 - iVar1), 752097756);
			}
		}
	}
}

void func_301(bool bParam0)
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
	PED::_SET_PED_MOTIVATION(Global_35, 10, 0f, 0);
	AUDIO::SET_PED_IS_DRUNK(Global_35, false);
	PED::_SET_PED_DRUNKNESS(Global_35, 0, 0f);
	func_655(0f);
	Global_1935436->f_11 = 1;
	if (func_433())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_656();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_302(var uParam0)
{
	func_657(&(uParam0->f_206));
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_159, false);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_163, false);
}

int func_303(var uParam0)
{
	if (uParam0->f_174 == func_21())
	{
		return 1;
	}
	return 0;
}

void func_304(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10, bool bParam11)
{
	struct<4> Var0;
	struct<4> Var4;

	if (uParam0->f_752 != iParam9)
	{
		if (uParam0->f_752 > -1)
		{
			func_658(uParam0);
		}
		uParam0->f_752 = iParam9;
		func_659(uParam0);
	}
	if (func_34(uParam0, 128) && func_31())
	{
		func_158(0);
		bParam11 = true;
	}
	if (!bParam11)
	{
		if ((func_332() == iParam9 && func_660() == iParam10) && !func_661(*Global_1347394, 0f, 0f, 0f))
		{
			return;
		}
	}
	if (func_332() != iParam9 && !func_661(*Global_1347394, 0f, 0f, 0f))
	{
		func_155(0);
	}
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_662(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, Var0, Var4, iParam9, iParam10);
}

char* func_305(var uParam0)
{
	switch (iLocal_15)
	{
		case 0:
			return "RBNP1_RC3";
		case 1:
			return "RBNP1_S2_MCS1";
		case 2:
			return "rbnp1_s2_mcs2";
		case 3:
			return "RBNP1_S2_EXT";
		default:
			break;
	}
	return "INVALID";
}

void func_306(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_663(&(uParam0->f_206), iParam1, sParam2, iParam3, iParam4, bParam5);
}

void func_307(var uParam0, vector3 vParam1)
{
	if (!func_268(vParam1))
	{
		uParam0->f_206.f_5 = { vParam1 };
	}
	else
	{
		uParam0->f_206.f_5 = { func_71(uParam0->f_174) };
	}
}

void func_308(var uParam0)
{
	int iVar0;
	int iVar1;

	LAW::_DISABLE_GUARD_ZONE("CALIGA_HALL");
	PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
	func_342(-677410626, 0, -1f, 1, 1, 0, 0, 0);
	func_337(&iLocal_1428, vLocal_2166, fLocal_2169, 1, 1, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1428))
	{
		ENTITY::_0x203BEFFDBE12E96A(iLocal_1428, func_1(22), func_2(22), 1, 0, 1);
	}
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::_0x203BEFFDBE12E96A(iVar0, 1897.992f, -1353.131f, 41.5754f, 336.9154f, 1, 0, 1);
	}
	func_354(Global_36, 180f, 0);
	func_335(1855.296f, -1353.97f, 41.2732f, 180f, 0, 0, 1, 0, 0);
	func_664(&iLocal_1747, iLocal_159);
	func_665(&Local_1808, 0, 0, 1, 0);
	iVar1 = 1592;
	MISC::CLEAR_AREA(1855.296f, -1353.97f, 41.2732f, 90f, iVar1);
}

void func_309(var uParam0, int iParam1)
{
	func_666(&(uParam0->f_206), iParam1);
}

void func_310(var uParam0)
{
	func_335(1855.296f, -1353.97f, 41.2732f, 180f, 0, 0, 1, 0, 0);
	LAW::_DISABLE_GUARD_ZONE("CALIGA_HALL");
	func_657(uParam0);
	if (func_667(uParam0, Global_35, 0, 0, 1, 1))
	{
		if (!iLocal_1830)
		{
			func_668(-668482597, 2000, 0, 1, 1, 0, 0, 0);
			iLocal_1830 = 1;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1428))
	{
		func_337(&iLocal_1428, vLocal_2166, fLocal_2169, 1, 1, 1, 1);
	}
	if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_348) < 0.01f)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1428))
		{
			ENTITY::_0x203BEFFDBE12E96A(iLocal_1428, func_1(22), func_2(22), 1, 0, 1);
		}
	}
	if (func_667(uParam0, iLocal_159, 0, 0, 1, 1))
	{
		func_352(3);
	}
}

void func_311(var uParam0, int iParam1)
{
	func_669(&(uParam0->f_206), iParam1);
}

void func_312(var uParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (func_670(uParam0, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_366[iVar0 /*9*/]))
		{
			if (!func_671(uParam0, sParam1) || func_609(uParam0, 8388608))
			{
				StringCopy(uParam0->f_366[iVar0 /*9*/], sParam1, 64);
				if (!bParam2)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_348, 1, 0))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_348, sParam1))
						{
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_348, sParam1);
						}
					}
					else
					{
						func_320(uParam0, 4194304);
					}
				}
				else
				{
					func_320(uParam0, 4194304);
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

bool func_313()
{
	return Global_1572864->f_14;
}

int func_314(var uParam0)
{
	if (func_34(uParam0, 64) && func_34(uParam0, 128))
	{
		return 1;
	}
	return 0;
}

int func_315()
{
	int iVar0;

	iVar0 = func_672();
	if (iVar0 != 1 && iVar0 != 2)
	{
		if (CLOCK::GET_CLOCK_HOURS() < 6 || CLOCK::GET_CLOCK_HOURS() >= 21)
		{
			return 1;
		}
	}
	return 0;
}

void func_316(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_350), sParam1, 64);
}

void func_317(var uParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	uParam0->f_409 = { vParam1 };
	uParam0->f_412 = fParam4;
	if (func_268(vParam1))
	{
		func_607(uParam0, 2048, 1);
	}
	else
	{
		func_320(uParam0, 2048);
		if (bParam5)
		{
			func_320(uParam0, -2147483648);
		}
	}
}

int func_318(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1428))
	{
		ENTITY::_0x203BEFFDBE12E96A(iLocal_1428, func_1(22), func_2(22), 1, 0, 1);
	}
	func_338(iLocal_159, iLocal_163, 0, -1, 1);
	ENTITY::_0x203BEFFDBE12E96A(iLocal_159, func_1(12), func_2(12), 1, 0, 1);
	func_335(1855.296f, -1353.97f, 41.2732f, 180f, 0, 0, 0, 0, 0);
	return 1;
}

void func_319(var uParam0, int iParam1)
{
	func_673(&(uParam0->f_206), iParam1);
}

void func_320(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

void func_321(var uParam0)
{
	func_335(Global_36, 500f, 0, 0, 0, 0, 0);
	if (!func_218(8388608))
	{
		func_335(func_1(15), 450f, 0, 1, 0, 0, 0);
		func_354(func_1(15), 450f, 0);
		POPULATION::_0xC6DCC2A3A8825C85(1);
		func_389(8388608);
	}
	vLocal_1643 = { ENTITY::GET_ENTITY_COORDS(iLocal_170, true, false) };
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_1833[3 /*5*/])))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(&(Local_1833[3 /*5*/]));
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_1833[4 /*5*/])))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(&(Local_1833[4 /*5*/]));
	}
	if (!func_347())
	{
		return;
	}
	if (!func_346())
	{
		return;
	}
	if (!func_345(1, 1, 1))
	{
		return;
	}
	if (!(Local_1833[63 /*5*/])->f_3)
	{
		(Local_1833[63 /*5*/])->f_3 = func_340(63, 1, 0);
	}
	if (func_667(uParam0, Global_35, "ARTHUR", 0, 1, 1))
	{
		func_534(63, 1, 0, 0);
	}
}

int func_322(var uParam0)
{
	if (!func_347())
	{
		return 0;
	}
	if (!func_346())
	{
		return 0;
	}
	if (!func_345(1, 1, 1))
	{
		return 0;
	}
	if (!func_340(63, 1, 0))
	{
		return 0;
	}
	return 1;
}

void func_323(var uParam0)
{
	int iVar0;

	func_663(uParam0, iLocal_170, "wagon02x", 0, 0, 0);
	func_25(Local_324[5 /*20*/]);
	func_583(1);
	iVar0 = 0;
	while (iVar0 < 49)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST((Local_446[iVar0 /*20*/])->f_11))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE((Local_446[iVar0 /*20*/])->f_11);
		}
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_446[iVar0 /*20*/])))
		{
			func_674(iVar0, 7);
			func_171(Local_446[iVar0 /*20*/], 1, 1, 1);
		}
		iVar0++;
	}
	if (!func_222(iLocal_163, 0))
	{
		ENTITY::_0x203BEFFDBE12E96A(iLocal_163, func_1(13), func_2(13), 1, 0, 1);
	}
}

void func_324(var uParam0)
{
	if (!func_218(8388608))
	{
		func_335(func_1(15), 450f, 0, 1, 0, 0, 0);
		func_354(func_1(15), 450f, 0);
		POPULATION::_0xC6DCC2A3A8825C85(1);
		func_389(8388608);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_1833[6 /*5*/])))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(&(Local_1833[6 /*5*/]));
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_1833[5 /*5*/])))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(&(Local_1833[5 /*5*/]));
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_1833[7 /*5*/])))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(&(Local_1833[7 /*5*/]));
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_1833[63 /*5*/])))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(&(Local_1833[63 /*5*/]));
	}
	if (func_667(uParam0, &(Local_1513[0 /*23*/]), "CS_SCOTTGRAY", 0, 1, 1))
	{
		func_675(2, 0);
	}
	if (func_667(uParam0, &(Local_1513[1 /*23*/]), "CS_IANGRAY", 0, 1, 1))
	{
		func_675(2, 1);
	}
	if (func_667(uParam0, Global_35, 0, 0, 1, 1))
	{
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_170, false))
	{
		PED::_WARP_PED_OUT_OF_VEHICLE(Global_35);
	}
	if (iLocal_2245 == 0)
	{
		func_354(Global_36, 180f, 0);
		func_335(Global_36, 180f, 0, 0, 0, 0, 0);
	}
	else if (iLocal_2245 > 3)
	{
		iLocal_2245 = 0;
	}
	iLocal_2245++;
}

int func_325(var uParam0)
{
	int iVar0;

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_1833[6 /*5*/])))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(&(Local_1833[6 /*5*/]));
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_1833[5 /*5*/])))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(&(Local_1833[5 /*5*/]));
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_1833[7 /*5*/])))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(&(Local_1833[7 /*5*/]));
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_1833[63 /*5*/])))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(&(Local_1833[63 /*5*/]));
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_316[iVar0])))
		{
			OBJECT::DELETE_OBJECT(iLocal_316[iVar0]);
		}
		iVar0++;
	}
	if (!func_222(&(Local_173[1 /*20*/]), 0))
	{
		ENTITY::_0x203BEFFDBE12E96A(&(Local_173[1 /*20*/]), func_361(1), func_362(1), 1, 0, 1);
	}
	if (!func_222(iLocal_163, 0))
	{
		ENTITY::_0x203BEFFDBE12E96A(iLocal_163, func_1(13), func_2(13), 1, 0, 1);
	}
	func_350(4);
	return 1;
}

void func_326(var uParam0)
{
	float fVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iLocal_159) && !(iLocal_162 == 6 || iLocal_162 == 16))
	{
	}
	switch (iLocal_162)
	{
		case 0:
			break;
		case 1:
			if (!(Local_1833[0 /*5*/])->f_4)
			{
				if (func_534(0, 0, func_501(0), 0))
				{
					(Local_1833[0 /*5*/])->f_4 = 1;
				}
			}
			if (PED::_0xB7DBB2986B87E230(iLocal_159, 1f))
			{
				func_352(20);
			}
			break;
		case 2:
			if (!(Local_1833[1 /*5*/])->f_4)
			{
				if (func_534(1, 0, func_501(1), 0))
				{
					(Local_1833[1 /*5*/])->f_4 = 1;
					ANIMSCENE::_DELETE_ANIM_SCENE(&(Local_1833[0 /*5*/]));
				}
			}
			break;
		case 3:
			if ((func_676(iLocal_159, 242628503) && TASK::GET_SEQUENCE_PROGRESS(iLocal_159) > 1) || PED::IS_PED_ON_MOUNT(iLocal_159))
			{
				func_352(5);
			}
			break;
		case 5:
			if (PED::IS_PED_ON_MOUNT(iLocal_159))
			{
				if (iLocal_14 == 6)
				{
					if (func_677(Global_35, iLocal_1428, 0))
					{
						func_352(16);
					}
				}
				else if (iLocal_14 == 7)
				{
					if (iLocal_21[53] && func_677(Global_35, iLocal_1428, 0))
					{
						func_352(16);
					}
				}
				else if (iLocal_14 == 0)
				{
					func_352(6);
				}
			}
			fVar0 = 1.9f;
			if (iLocal_14 == 4)
			{
				fVar0 = 1.5f;
			}
			if (func_677(Global_35, iLocal_163, 0))
			{
				if (!func_676(iLocal_159, 1868526510))
				{
					TASK::TASK_MOUNT_ANIMAL(iLocal_159, iLocal_1428, 60000, -1, fVar0, 1, 0, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_159, 167, true);
				}
			}
			else if (!func_676(iLocal_159, 1868526510) && PED::_IS_MOUNT_SEAT_FREE(iLocal_163, -1))
			{
				TASK::TASK_MOUNT_ANIMAL(iLocal_159, iLocal_163, 60000, -1, fVar0, 1, 0, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_159, 167, true);
				AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(iLocal_163, 0, 1);
			}
			break;
		case 4:
			if (func_676(iLocal_159, 242628503) && TASK::GET_SEQUENCE_PROGRESS(iLocal_159) > 0)
			{
				func_352(6);
			}
			break;
		case 6:
			if (!PED::IS_PED_ON_MOUNT(iLocal_159))
			{
				func_352(5);
			}
			else if (!func_678(sLocal_1831))
			{
				func_352(7);
			}
			break;
		case 7:
			if (!PED::IS_PED_ON_MOUNT(iLocal_159))
			{
				func_352(5);
			}
			else if (func_678(sLocal_1831))
			{
				func_352(6);
			}
			break;
		case 16:
			if (!PED::IS_PED_ON_MOUNT(iLocal_159))
			{
				func_352(5);
			}
			else if (!func_678(sLocal_1832))
			{
				func_352(18);
			}
			break;
		case 18:
			if (!PED::IS_PED_ON_MOUNT(iLocal_159))
			{
				func_352(5);
			}
			else if (func_677(Global_35, iLocal_1428, 0))
			{
				if (func_678(sLocal_1832))
				{
					func_352(16);
				}
			}
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			if (func_329(iLocal_159, func_1(13), 10f, 1, 1) && !func_679(iLocal_159))
			{
				func_352(12);
			}
			break;
		case 13:
			if (!func_327(Global_35, iLocal_1668, 1, 0))
			{
				func_352(6);
			}
			break;
	}
}

bool func_327(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_328(int iParam0, vector3 vParam1, var uParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	func_680(iParam0, vParam1, 0, fParam5, fParam6, fParam7, fParam8, iParam12, iParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	fVar4 = func_550(iParam0, vParam1, 1);
	if (!func_81(uParam4))
	{
		if (fVar4 <= fParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				func_82(uParam4, 0);
			}
		}
	}
	else if (iParam10 && fVar4 > fParam8)
	{
		func_254(uParam4);
	}
	if (func_81(uParam4))
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
		if (func_227(uParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_681(iParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
					return 1;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !func_681(iParam0, -828834893))
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

int func_329(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_682(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

int func_330(var uParam0)
{
	LAW::_DISABLE_GUARD_ZONE("CALIGA_HALL");
	func_683(uParam0);
	if (func_81(&uLocal_1722))
	{
		return 0;
	}
	if (iLocal_162 == 20)
	{
		return 0;
	}
	if (func_327(Global_35, iLocal_1675, 1, 0))
	{
		func_684(&iLocal_159, &iLocal_1747, &Local_1808, 10f, -1082130432, 0);
		if (func_315())
		{
			func_316(&(uParam0->f_206), "2-NightVersion-MultiStart");
			func_267(&(uParam0->f_206), "2-NightVersion-MultiStart");
		}
		else
		{
			func_316(&(uParam0->f_206), "1-DayVersion-MultiStart");
			func_267(&(uParam0->f_206), "1-DayVersion-MultiStart");
		}
		func_320(&(uParam0->f_206), 268435456);
		func_234(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 128);
		func_89(uParam0);
		return 1;
	}
	else if (iLocal_157)
	{
		func_684(&iLocal_159, &iLocal_1747, &Local_1808, 10f, -1082130432, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1428))
		{
			func_685(uParam0, &iLocal_1428, func_1(22), func_2(22), 0, 1, 1, 1, 1);
		}
		if (!iLocal_2434)
		{
			if (!(Local_1833[1 /*5*/])->f_3)
			{
				(Local_1833[1 /*5*/])->f_3 = func_340(1, 0, 0);
			}
			else
			{
				if (func_686())
				{
					if (!func_676(Global_35, 1369124074))
					{
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, &(Local_1833[1 /*5*/]), "ARTHUR", "pl_leadin", 1069379748, 0, 0, 20000, -1082130432);
						if (!func_81(&uLocal_2435))
						{
							func_226(&uLocal_2435);
						}
					}
				}
				if (ANIMSCENE::_0x337F1CC8EE895601(&(Local_1833[1 /*5*/]), "ARTHUR"))
				{
					iLocal_2434 = 1;
				}
				if (((func_220(&uLocal_2435) > 8f || CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()) || CAM::_0xD1BA66940E94C547())
				{
					iLocal_1584 = 1;
					func_342(-677410626, 0, -1f, 1, 1, 0, 0, 0);
					if (func_315())
					{
						func_316(&(uParam0->f_206), "2-NightVersion-MultiStart");
						func_267(&(uParam0->f_206), "2-NightVersion-MultiStart");
					}
					else
					{
						func_316(&(uParam0->f_206), "1-DayVersion-MultiStart");
						func_267(&(uParam0->f_206), "1-DayVersion-MultiStart");
					}
					return 1;
				}
			}
		}
		else
		{
			iLocal_162 = 2;
			if ((Local_1833[1 /*5*/])->f_4 && func_687(1, 0.95f))
			{
				if (iLocal_158 != 5)
				{
				}
				func_342(-677410626, 0, -1f, 1, 1, 0, 0, 0);
				return 1;
			}
		}
	}
	else
	{
		iLocal_162 = 1;
		if (!(Local_1833[1 /*5*/])->f_3)
		{
			(Local_1833[1 /*5*/])->f_3 = func_340(1, 0, 0);
		}
		if (func_327(Global_35, iLocal_1677, 1, 0))
		{
			func_688();
			if (iLocal_1746)
			{
				if (func_689())
				{
					iLocal_157 = 1;
					if (func_315())
					{
						func_316(&(uParam0->f_206), "2-NightVersion");
						func_267(&(uParam0->f_206), "2-NightVersion");
					}
					else
					{
						func_316(&(uParam0->f_206), "1-DayVersion");
						func_267(&(uParam0->f_206), "1-DayVersion");
					}
					func_89(uParam0);
				}
			}
		}
		else if (iLocal_1746)
		{
			func_665(&Local_1808, 0, 0, 1, 0);
			iLocal_1746 = 0;
		}
	}
	return 0;
}

int func_331(var uParam0)
{
	if (func_33(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 128))
	{
		func_163(uParam0);
		return 1;
	}
	switch (uParam0->f_171)
	{
		case 0:
			if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
			{
				func_404(0, 1, 1, 1);
				uParam0->f_171 = 1;
			}
			else
			{
				return 1;
			}
			break;
		case 1:
			func_404(0, 1, 1, 1);
			if (func_690(Global_35, &(uParam0->f_747), 0, 0, 0, 1084227584, 100, 0, 0))
			{
				func_163(uParam0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_332()
{
	return Global_1572864->f_9;
}

void func_333()
{
	if (STREAMING::_0x8A3945405B31048F() > 0.6f)
	{
		func_691(0.6f);
	}
}

void func_334()
{
	int iVar0;

	if (!iLocal_2444)
	{
		func_413(&iLocal_160);
		func_413(&iLocal_1599);
		func_171(&iLocal_166, 1, 0, 1);
		func_171(&iLocal_163, 1, 0, 1);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			func_25(Local_1432[iVar0 /*20*/]);
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_170))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_170);
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 7)
		{
			func_25(Local_173[iVar0 /*20*/]);
			iVar0++;
		}
		iLocal_2444 = 1;
	}
}

void func_335(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

int func_336(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_159))
	{
		iLocal_159 = func_692(joaat("cs_beaugray"), func_1(0), func_2(0), 1, 1, 0, 0, 1, 0, 0, 1, 0, 0);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_163))
	{
		iLocal_163 = func_692(iLocal_165, func_1(12), func_2(12), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		return 0;
	}
	if (!func_693(uParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_164))
	{
		iLocal_164 = func_692(iLocal_165, func_1(10), func_2(10), 1, 1, 0, 1, 0, 0, 0, 0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_164))
		{
			PED::_SET_PED_SCALE(iLocal_164, 1f);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_161))
	{
		iLocal_161 = OBJECT::CREATE_OBJECT(joaat("p_brushhorse01x"), func_1(0), true, true, false, false, true);
		return 0;
	}
	if (!func_222(iLocal_159, 0))
	{
		if (!iLocal_2183)
		{
			iLocal_2182 = PED::_REQUEST_METAPED_OUTFIT(joaat("cs_beaugray"), 243346937);
			iLocal_2183 = 1;
		}
		if (!PED::_0x610438375E5D1801(iLocal_2182))
		{
			return 0;
		}
		iLocal_2184++;
		if (!PED::IS_PED_READY_TO_RENDER(iLocal_159) && iLocal_2184 < 180)
		{
			iVar0 = iParam1;
			switch (iVar0)
			{
				case 0:
					ENTITY::_0x203BEFFDBE12E96A(iLocal_159, func_1(0), func_2(0), 1, 0, 1);
					ENTITY::_0x203BEFFDBE12E96A(iLocal_163, func_1(12), func_2(12), 1, 0, 1);
					break;
				case 1:
					ENTITY::_0x203BEFFDBE12E96A(iLocal_159, func_1(5), func_2(5), 1, 0, 1);
					ENTITY::_0x203BEFFDBE12E96A(iLocal_163, func_1(5), func_2(5), 1, 0, 1);
					break;
				case 2:
					ENTITY::_0x203BEFFDBE12E96A(iLocal_159, func_1(5), func_2(5), 1, 0, 1);
					ENTITY::_0x203BEFFDBE12E96A(iLocal_163, func_1(5), func_2(5), 1, 0, 1);
					break;
				case 3:
					if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_159, -1))
					{
						ENTITY::_0x203BEFFDBE12E96A(iLocal_159, func_1(9), func_2(9), 1, 0, 1);
					}
					ENTITY::_0x203BEFFDBE12E96A(iLocal_163, func_1(13), func_2(13), 1, 0, 1);
					break;
				case 4:
					if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_159, -1))
					{
						ENTITY::_0x203BEFFDBE12E96A(iLocal_159, func_1(9), func_2(9), 1, 0, 1);
					}
					ENTITY::_0x203BEFFDBE12E96A(iLocal_163, func_1(13), func_2(13), 1, 0, 1);
					break;
				case 5:
					ENTITY::_0x203BEFFDBE12E96A(iLocal_159, func_1(2), func_2(2), 1, 0, 1);
					ENTITY::_0x203BEFFDBE12E96A(iLocal_163, func_1(14), func_2(14), 1, 0, 1);
					break;
			}
			return 0;
		}
		PED::_0x1902C4CFCC5BE57C(iLocal_159, 243346937);
		PED::_0xCC8CA3E88256E58F(iLocal_159, 0, 1, 1, 1, 0);
		if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_159, -1))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_159, func_1(0), true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_159, func_2(0));
		}
		PED::SET_PED_CONFIG_FLAG(iLocal_159, 364, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_159, 308, true);
		func_694(iLocal_159, 1);
		ENTITY::SET_ENTITY_PROOFS(iLocal_159, 8, false);
		func_695(iLocal_159, 1);
		func_189(uParam0, iLocal_159, "BEAU_GRAY", 1);
		PED::SET_PED_LASSO_HOGTIE_FLAG(iLocal_159, 0, 0);
		AUDIO::STOP_PED_SPEAKING(iLocal_159, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_159, -1538724068);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_163, -1538724068);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cs_beaugray"));
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_163))
	{
		func_695(iLocal_163, 1);
		PED::SET_PED_LASSO_HOGTIE_FLAG(iLocal_163, 0, 0);
		PED::SET_PED_OWNS_ANIMAL(iLocal_159, iLocal_163, 0);
		AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(iLocal_163, 0, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_164))
	{
		func_695(iLocal_164, 1);
		PED::SET_PED_LASSO_HOGTIE_FLAG(iLocal_164, 0, 0);
		func_696(iLocal_164, 1);
		AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(iLocal_164, 0, 1);
	}
	iVar1 = _NAMESPACE48::_0x112DDF56300BC6E5(2140917767);
	_NAMESPACE48::FORCE_DESPAWN_PERSCHAR(iVar1);
	return 1;
}

int func_337(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	struct<11> Var0;
	int iVar11;

	Var0.f_10 = 7;
	Var0 = bParam5;
	Var0.f_1 = 1;
	Var0.f_4 = iParam7;
	Var0.f_3 = iParam8;
	Var0.f_6 = { vParam1 };
	if (fParam4 == -1f)
	{
		Var0.f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else
	{
		Var0.f_9 = fParam4;
	}
	if (bParam5)
	{
		Var0.f_2 = 1;
	}
	else if (!bParam6)
	{
		Var0.f_2 = 0;
	}
	iVar11 = 0;
	*iParam0 = func_697(&iVar11, &Var0);
	if (iVar11 == 0)
	{
		return 0;
	}
	else if (iVar11 == 1)
	{
		return 0;
	}
	else if (iVar11 == 2)
	{
		if (!func_538(*iParam0, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_338(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

void func_339(var uParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
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
	if (func_213() != -1)
	{
		func_698(!bParam5);
		func_699(!bParam6);
		func_700(vParam1, fParam4, 1);
		Var0.f_12 = 255;
		Var0.f_13 = 255;
		Var0.f_3 = 51;
		func_702(Var0, func_701(0, 15), 0, 0);
		return;
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
		{
			return;
		}
		CAM::DO_SCREEN_FADE_OUT(0);
		func_703(1);
		iVar16 = func_186(vParam1, 1);
		if (bParam8)
		{
			if ((func_418(iVar16) == 1 || func_418(iVar16) == 2) || iVar16 == func_557(Global_40.f_4283))
			{
				func_704(0);
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
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
			}
			ITEMSET::DESTROY_ITEMSET(iVar17);
		}
		PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vParam1, fParam4, 1, 1, 0, 0);
	}
}

bool func_340(int iParam0, int iParam1, char* sParam2)
{
	if (!(Local_1833[iParam0 /*5*/])->f_3)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_1833[iParam0 /*5*/])))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(&(Local_1833[iParam0 /*5*/]), 1, 0))
			{
				(Local_1833[iParam0 /*5*/])->f_3 = 1;
				return (Local_1833[iParam0 /*5*/])->f_3;
			}
		}
		else
		{
			if (MISC::IS_STRING_NULL(sParam2))
			{
				Local_1833[iParam0 /*5*/] = ANIMSCENE::_CREATE_ANIM_SCENE((Local_1833[iParam0 /*5*/])->f_1, iParam1, (Local_1833[iParam0 /*5*/])->f_2, false, true);
			}
			else
			{
				(Local_1833[iParam0 /*5*/])->f_2 = sParam2;
				Local_1833[iParam0 /*5*/] = ANIMSCENE::_CREATE_ANIM_SCENE((Local_1833[iParam0 /*5*/])->f_1, iParam1, sParam2, false, true);
			}
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_1833[iParam0 /*5*/])))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(&(Local_1833[iParam0 /*5*/]));
			}
		}
	}
	return (Local_1833[iParam0 /*5*/])->f_3;
}

int func_341(var uParam0)
{
	int iVar0;

	if (func_213() != -1)
	{
		return 1;
	}
	if (uParam0->f_12 == 0)
	{
		uParam0->f_12 = MISC::GET_GAME_TIMER();
	}
	iVar0 = func_186(*uParam0, 1);
	if (func_416(iVar0))
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
		func_705(1, 0);
		uParam0->f_5 = 0;
	}
	func_706();
	if (uParam0->f_10 == 0)
	{
		uParam0->f_10 = MISC::GET_GAME_TIMER();
	}
	if (uParam0->f_10 + 1000 > MISC::GET_GAME_TIMER())
	{
		return 0;
	}
	switch (func_418(iVar0))
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 8:
		case 9:
			if (!func_707(iVar0) && uParam0->f_10 + 20000 + 1000 > MISC::GET_GAME_TIMER())
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
		if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
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
			if (!func_708())
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

void func_342(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_709(iParam0, 0, 0);
	if (func_710(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_711(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_712(iParam0, 1);
			}
			else
			{
				func_713(iParam0, 1);
			}
		}
		else
		{
			func_714(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::DOOR_SYSTEM_FORCE_SHUT(iParam0, 1);
		}
	}
	else if (func_715())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

void func_343(int iParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(iParam0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

int func_344(var uParam0)
{
	if (!func_716(uParam0))
	{
		return 0;
	}
	if (!func_717(uParam0))
	{
		return 0;
	}
	if (!func_718())
	{
		return 0;
	}
	if (!func_719())
	{
		return 0;
	}
	if (!func_720())
	{
		return 0;
	}
	return 1;
}

int func_345(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar1 = 5;
	if (bParam1)
	{
		iVar1 = 6;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(Local_324[iVar0 /*20*/])))
		{
			STREAMING::REQUEST_MODEL(iLocal_314, false);
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_314))
			{
				return 0;
			}
			Local_324[iVar0 /*20*/] = func_692(iLocal_314, func_721(iVar0), func_722(iVar0), 1, 1, 2, 1, 1, 1, 0, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_324[iVar0 /*20*/])))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(&(Local_324[iVar0 /*20*/]), 1);
			}
			return 0;
		}
		iVar0++;
	}
	if (bParam2)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(Local_324[iVar0 /*20*/])))
			{
				(Local_324[iVar0 /*20*/])->f_6++;
				if (!PED::IS_PED_READY_TO_RENDER(&(Local_324[iVar0 /*20*/])) && (Local_324[iVar0 /*20*/])->f_6 < 60)
				{
					if (iVar0 < 4)
					{
						bVar2 = false;
					}
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(Local_324[iVar0 /*20*/])))
		{
			if (!(Local_324[iVar0 /*20*/])->f_7)
			{
				func_695(&(Local_324[iVar0 /*20*/]), 1);
				if (!bParam0)
				{
					ENTITY::_0x203BEFFDBE12E96A(&(Local_324[iVar0 /*20*/]), func_723(iVar0), func_724(iVar0), 1, 0, 1);
				}
				func_725(&(Local_324[iVar0 /*20*/]), (Local_324[iVar0 /*20*/])->f_19);
				PED::SET_PED_CONFIG_FLAG(&(Local_324[iVar0 /*20*/]), 169, true);
				PED::SET_PED_CONFIG_FLAG(&(Local_324[iVar0 /*20*/]), 280, true);
				(Local_324[iVar0 /*20*/])->f_7 = 1;
			}
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_314);
	return 1;
}

int func_346()
{
	int iVar0;
	int iVar1;

	if (!iLocal_2238)
	{
		STREAMING::REQUEST_MODEL(iLocal_1587, false);
		STREAMING::REQUEST_MODEL(iLocal_1585, false);
		STREAMING::REQUEST_MODEL(iLocal_1586, false);
		STREAMING::REQUEST_MODEL(iLocal_1588, false);
		iLocal_2238 = 1;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_1587))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_1585))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_1586))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_1588))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 49)
	{
		iVar1 = iVar0;
		if (!ENTITY::DOES_ENTITY_EXIST(&(Local_446[iVar0 /*20*/])))
		{
			if (iVar1 < 38)
			{
				if (func_726(iVar1))
				{
					Local_446[iVar0 /*20*/] = func_692(iLocal_1586, func_727(iVar0), func_728(iVar0), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				}
				else
				{
					Local_446[iVar0 /*20*/] = func_692(iLocal_1585, func_727(iVar0), func_728(iVar0), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				}
			}
			else if (func_729(iVar1))
			{
				Local_446[iVar0 /*20*/] = func_692(iLocal_1588, func_727(iVar0), func_728(iVar0), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				Local_446[iVar0 /*20*/] = func_692(iLocal_1587, func_727(iVar0), func_728(iVar0), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 49)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(Local_446[iVar0 /*20*/])))
		{
			func_695(&(Local_446[iVar0 /*20*/]), 1);
			PED::_0xF1C03A5352243A30(&(Local_446[iVar0 /*20*/]));
		}
		iVar0++;
	}
	return 1;
}

int func_347()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(Local_1432[iVar0 /*20*/])))
		{
			func_354(func_730(iVar0), 4f, 0);
			Local_1432[iVar0 /*20*/] = func_692(iLocal_1586, func_730(iVar0), func_731(iVar0), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(Local_1432[iVar0 /*20*/])))
		{
			func_695(&(Local_1432[iVar0 /*20*/]), 1);
			PED::_0xF1C03A5352243A30(&(Local_1432[iVar0 /*20*/]));
		}
		iVar0++;
	}
	return 1;
}

void func_348(int iParam0)
{
	if (iParam0 != iLocal_18)
	{
		iLocal_18 = iParam0;
	}
}

void func_349(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ENTITY::GET_ENTITY_COLLISION_DISABLED(&(Local_173[iVar0 /*20*/])))
		{
			ENTITY::SET_ENTITY_COLLISION(&(Local_173[iVar0 /*20*/]), true, false);
		}
		func_732(iVar0, iParam0);
		iVar0++;
	}
}

void func_350(int iParam0)
{
	if (iLocal_14 != iParam0)
	{
		iLocal_16 = 0;
		iLocal_14 = iParam0;
		iLocal_1664 = 0;
	}
}

void func_351(int iParam0, int iParam1)
{
	int iVar0;

	if (iLocal_169 != iParam0 && !ENTITY::IS_ENTITY_DEAD(iLocal_166))
	{
		if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_166, -1))
		{
			TASK::CLEAR_PED_TASKS(iLocal_166, 1, 0);
		}
		iLocal_169 = iParam0;
	}
	else if (iParam1 == 0 || ENTITY::IS_ENTITY_DEAD(iLocal_166))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_166))
	{
		switch (iLocal_169)
		{
			case 0:
				break;
			case 1:
				break;
			case 4:
				func_226(&uLocal_1594);
				break;
			case 5:
				break;
			case 6:
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_PAUSE(0, 250);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_166, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				break;
			case 7:
				TASK::TASK_SMART_FLEE_COORD(iLocal_166, func_1(16), 1000f, -1, false, 1077936128);
				break;
		}
	}
}

void func_352(int iParam0)
{
	int iVar0;

	if (iLocal_162 != iParam0)
	{
		if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_159, -1))
		{
		}
	