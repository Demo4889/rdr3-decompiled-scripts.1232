#region Local Var
	vector3 vLocal_0 = { 0f, 0f, 0f };
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	float fLocal_11 = 0f;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	struct<1225> Local_18 = { 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 5, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1082130432, 0, 0, 0, -1082130432, 1, -1082130432, 0, 0, 0 } ;
	var uLocal_1243 = 5;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 2;
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
	var uLocal_1284 = 2;
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
	var uLocal_1317 = 10;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
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
	var uLocal_1353 = 0;
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
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
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
	var uLocal_1478 = 2;
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
	var uLocal_1494 = 0;
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
	var uLocal_1511 = 3;
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
	var uLocal_1532 = 0;
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
	vLocal_0 = { 0.5f, 0.5f, 2f };
	fLocal_11 = 1f;
	fLocal_12 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
	{
		func_1(&uScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2(&uScriptParam_0, &uLocal_1251);
	while (!func_3(&uScriptParam_0))
	{
		func_5(&uScriptParam_0, &uLocal_1251, func_4());
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
				func_42(&uLocal_1251);
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
	func_61(&(uParam0->f_9), 256, 0);
	func_62(&Local_18);
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
	func_63(iParam0, 8, 0);
}

bool func_10(int iParam0)
{
	if (!func_58(iParam0))
	{
		return false;
	}
	if (!func_64(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_11(var uParam0, int iParam1)
{
	if (uParam0->f_8 > 0f && uParam0->f_14 == 1)
	{
		func_65(iParam1, 0, 0, 0, uParam0->f_8, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		AUDIO::STOP_PED_SPEAKING(func_66(iParam1), false);
		func_65(iParam1, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	}
}

void func_12()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_58(iVar0) && func_67(iVar0, 1))
		{
			func_68(iVar0);
		}
		iVar0++;
	}
}

bool func_13(int iParam0)
{
	int iVar0;

	iVar0 = func_69(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_14(int iParam0)
{
	int iVar0;

	if (!func_70(iParam0))
	{
		return;
	}
	if (iParam0 != func_71(0))
	{
		return;
	}
	if (func_72(iParam0) == 0)
	{
	}
	iVar0 = func_73(iParam0);
	if (func_74(iParam0) == 3)
	{
		if (func_72(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_72(iParam0)))
		{
			if (func_73(iParam0) != 1 && func_73(iParam0) != 8)
			{
				func_75(func_73(iParam0), func_72(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_76(iParam0);
	func_32(1);
	func_33(0);
	func_77(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_78(1);
			func_79(15, 0, 1);
			break;
		case 4:
			func_79(10, 0, 1);
			break;
		case 8:
			func_79(10, 0, 1);
			break;
		case 9:
			func_79(10, 0, 1);
			break;
		case 2:
			func_79(10, 0, 1);
			break;
		case 6:
			func_79(10, 0, 1);
			break;
		case 5:
			func_79(10, 0, 1);
			break;
	}
	func_80(1);
}

void func_15(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_81(Global_1347343->f_11, 536870912))
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
	if (func_82() >= 2)
	{
		if (!func_81(Global_1347343->f_11, 16384))
		{
			func_43(&(Global_1347343->f_11), 8);
		}
		func_83(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_84(Global_1935630, 2048);
	func_85(bParam5);
}

void func_16(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_70(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_13(iParam0) && !func_86(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_72(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_13(iParam0))
	{
		iParam2 = -1;
	}
	if (func_74(iParam0) == 3 || (func_74(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_72(iParam0))))
	{
		func_75(func_73(iParam0), func_72(iParam0), iParam2);
		if ((!func_70(Global_1572864->f_8) && !func_87(0, 1, 0)) && !func_88(&Global_1935630, 32768))
		{
			iVar0 = func_89(iParam0);
			if (iVar0 != -1)
			{
				func_90(0);
			}
			else if (func_73(iParam0) == 8)
			{
				iVar0 = func_91();
				if (iVar0 != -1)
				{
					func_90(0);
				}
			}
		}
	}
	func_77(iParam0, 0);
	if (func_71(0) == iParam0)
	{
		func_32(1);
		func_33(0);
		func_80(1);
	}
	func_92(iParam0, 1);
	func_76(iParam0);
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
	func_93(0);
	func_94(0);
	func_95(0);
	func_96(0);
	func_97(0);
	func_83(1f);
}

void func_19(var uParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	char cVar2[64];
	var uVar10;

	if (!func_98(uParam0->f_1))
	{
		return;
	}
	sVar0 = func_99(uParam0->f_1);
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar1))
	{
		StringCopy(&cVar2, MISC::_CREATE_VAR_STRING(2, func_100(*uParam0)), 64);
		StringConCat(&cVar2, " - ", 64);
		StringConCat(&cVar2, MISC::_CREATE_VAR_STRING(2, func_101(uParam0->f_2, 0)), 64);
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar1, Global_36, MISC::GET_HASH_KEY(func_100(*uParam0)), func_102(uParam0->f_1), uVar10);
		UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar1, &cVar2);
		UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar1, func_103(*uParam0), 676312963);
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar1, func_104(uParam0->f_1), func_105(uParam0->f_1));
	}
	else if (bParam2)
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar1);
		return;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar1, func_102(uParam0->f_1), "", bParam1, 0, 0);
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

	if (!func_70(iParam0))
	{
		return;
	}
	if (func_69(iParam0) == 4)
	{
		func_107(iParam0, func_106());
		if (!func_74(iParam0) == 5 && !func_74(iParam0) == 6)
		{
			if (bParam3)
			{
				func_77(iParam0, 6);
			}
			else
			{
				func_77(iParam0, 5);
			}
			func_76(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_32(1);
	}
	iVar0 = func_73(iParam0);
	bVar1 = func_108() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_109(0, 2);
		if (!bVar1 && bParam1)
		{
			func_110();
		}
	}
	else
	{
		func_33(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_111(iParam0);
	}
	else
	{
		Var2 = { func_112(-1876607090) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_20(32768))
		{
			Var4 = { func_112(773573510) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_74(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_113(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[76 /*74*/])->f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_113(iParam0) /*74*/])->f_8), true);
						}
					}
					else if ((func_113(iParam0) != 95 && func_113(iParam0) != 82) && !func_114(((*Global_1347702)[func_113(iParam0) /*49*/])->f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1347702)[func_113(iParam0) /*49*/])->f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_113(iParam0) /*74*/])->f_8), true);
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
		func_116(func_113(iParam0), iVar6, func_115());
	}
	else if (iVar0 == 8)
	{
		func_118(func_113(iParam0), iVar6, func_115(), func_117());
	}
	if (!func_74(iParam0) == 5 && !func_74(iParam0) == 6)
	{
		iVar9 = func_119(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_120(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_121(func_113(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_122((iVar10 - 20), 0, iVar10);
					iVar11 = func_122((iVar11 - 10), 0, iVar11);
				}
				func_78(1);
				func_79(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_79(45, 0, 1);
				break;
			case 8:
				iVar10 = func_123(func_113(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_122((iVar10 - 20), 0, iVar10);
					iVar11 = func_122((iVar11 - 10), 0, iVar11);
				}
				func_79(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				if (func_124(func_113(iParam0)))
				{
					func_125(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_79(120, 0, 1);
				break;
			case 2:
				func_79(120, 0, 1);
				break;
			case 6:
				func_79(func_127(func_126(iParam0)), 0, 1);
				break;
			case 5:
				func_79(120, 0, 1);
				break;
		}
	}
	func_92(iParam0, 1);
	func_107(iParam0, func_106());
	func_76(iParam0);
	if ((!func_74(iParam0) == 0 && bParam1) && func_108() == -1)
	{
		iVar12 = func_89(iParam0);
		if (iVar12 != -1)
		{
			func_90(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_91();
			if (iVar12 != -1)
			{
				func_90(0);
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
				switch (func_113(iParam0))
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
				if (func_128(func_113(iParam0)) && func_114(((*Global_1347702)[func_113(iParam0) /*49*/])->f_12, 4))
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
				if (func_113(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
			case 8:
				if (func_113(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
		}
	}
	if (!func_74(iParam0) == 5 && !func_74(iParam0) == 6)
	{
		if (bParam3)
		{
			func_77(iParam0, 6);
		}
		else
		{
			func_77(iParam0, 5);
		}
		func_76(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_113(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::MAP_DISCOVER_REGION(-1753910767);
						break;
					case 1:
						func_130();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_131(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132(-1267972061);
						func_131(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132(1619534881);
						func_131(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132(-755457379);
						func_131(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132(1015404643);
						func_131(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132(-1724192342);
						func_131(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132(1310680212);
						func_131(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132(-566881549);
						func_131(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132(-1753730528);
						func_131(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132(147796381);
						func_131(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132(-378547623);
						func_131(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132(829545206);
						func_131(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132(891318243);
						func_131(joaat("weapon_kit_camera"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_133();
						func_134(967523420);
						func_135();
						func_136();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_101(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131);
						break;
					case 15:
						func_131(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1231074654))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1231074654, true);
							func_137(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1880205078))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1880205078, true);
							func_137(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_138(304805134, 1, 1);
						if (!func_139(((*Global_1347702)[21 /*49*/])->f_15, 1))
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
						func_140();
						break;
					case 26:
						func_141();
						break;
					case 17:
						func_142(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_143())
						{
							func_144(joaat("weapon_repeater_evans"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_145(-514575035, -1))
						{
							iVar15 = func_106();
							func_146(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_147(-514575035, iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_143())
						{
							func_144(joaat("weapon_revolver_lemat"));
						}
						break;
					case 34:
						if (func_143())
						{
							func_144(joaat("weapon_revolver_doubleaction_gambler"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_148();
						break;
					case 37:
						func_149();
						if (func_150())
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
						func_151();
						break;
					case 43:
						func_152();
						break;
					case 44:
						if (!func_139(((*Global_1347702)[82 /*49*/])->f_15, 1))
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
						if (!func_139(((*Global_1347702)[83 /*49*/])->f_15, 1))
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
						func_153();
						break;
					case 59:
						func_154();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_155();
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
						func_156();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1673898385))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1673898385, true);
							func_137(451, 0);
						}
						if (!func_157(-1992824800))
						{
							if (func_157(1520110311))
							{
								iVar16 = func_106();
								func_146(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_147(1937177603, iVar16, 1);
							}
						}
						if (func_158(4))
						{
							if (!func_159(684296857, 1, 0))
							{
								iVar17 = func_106();
								func_146(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_147(-1439688706, iVar17, 1);
							}
						}
						func_131(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_160(89200);
						func_160(2300);
						func_160(2300);
						break;
					case 68:
						func_161();
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
						func_162();
						func_160(-139100);
						break;
					case 69:
						if (func_139(((*Global_1347702)[9 /*49*/])->f_15, 1))
						{
							func_160(-6000);
						}
						break;
					case 70:
						func_160(23400);
						func_160(1900);
						func_160(-15000);
						break;
					case 71:
						func_160(-5500);
						break;
				}
				break;
			case 8:
				switch (func_113(iParam0))
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
						func_163();
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
						func_164();
						break;
					case 66:
						func_165();
						func_166();
						break;
					case 67:
						if (!func_167(6))
						{
							func_168(6);
						}
						if (!func_167(3))
						{
							func_168(3);
						}
						if (func_143())
						{
							func_144(joaat("weapon_pistol_m1899"));
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
						if (func_139(((*Global_1835011)[69 /*74*/])->f_1, 1))
						{
							func_169(0);
							func_160(40500);
						}
						else
						{
							func_169(0);
							func_160(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_113(iParam0))
				{
					case 0:
						switch (func_126(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_170(iParam0);
		func_171();
		switch (iVar0)
		{
			case 1:
				switch (func_113(iParam0))
				{
					case 4:
						func_172(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_172(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_172(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_172(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_172(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_172(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_172(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_173(iParam0);
						func_172(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_172(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_172(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_159(-2046502963, 1, 0))
						{
							func_131(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_172(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_172(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_172(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_173(iParam0) == 0)
						{
							func_172(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_172(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_114(((*Global_1347702)[func_113(iParam0) /*49*/])->f_12, 536870912))
				{
					func_174(11, 1);
				}
				switch (func_113(iParam0))
				{
					case 109:
						func_172(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_174(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_172(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_172(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_172(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_172(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_175(0, 10, 11, 2116153146))
				{
					func_172(iParam0, func_173(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_175(0, 7, 11, -379687487))
				{
					func_172(iParam0, func_176(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_175(0, 8, 11, -1386089015))
				{
					func_172(iParam0, func_176(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_175(0, 11, 11, -1952009645))
				{
					func_172(iParam0, func_176(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_175(0, 12, 11, 2065895756))
				{
					func_172(iParam0, func_176(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_74(iParam0) == 0)
			{
				if (func_72(iParam0) == 0)
				{
				}
				else if (STATS::STATSTRACKER_IS_INITIALIZED(func_72(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_75(func_73(iParam0), func_72(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_113(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_178(func_177(Global_1879514->f_1));
						if (iVar0 == 8 && func_113(iParam0) == 58)
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
						if (func_128(func_113(iParam0)) && func_114(((*Global_1347702)[func_113(iParam0) /*49*/])->f_12, 1))
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
			func_179(bParam2, iVar20);
		}
	}
	func_80(1);
	if ((bVar13 || func_129()) && (func_73(iParam0) == 1 || func_73(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_22(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (STATS::STATSTRACKER_IS_INITIALIZED(func_72(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_75(func_73(iParam0), func_72(iParam0), iVar0);
		if (func_20(32768))
		{
			iVar1 = func_73(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_175(0, 10, 11, 2116153146)))
			{
				Global_1898438 = MISC::GET_GAME_TIMER();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_24();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_86(iParam0))
	{
		func_16(iParam0, 0, 2);
	}
	else if (func_13(iParam0))
	{
		if (!func_74(iParam0) == 5 && !func_74(iParam0) == 6)
		{
			if (bParam1)
			{
				func_77(iParam0, 6);
			}
			else
			{
				func_77(iParam0, 5);
			}
			func_76(iParam0);
		}
	}
	switch (func_73(iParam0))
	{
		case 1:
			switch (func_113(iParam0))
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
			switch (func_113(iParam0))
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
		switch (func_180())
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

	iVar0 = func_181(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_182(iVar0))
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

	func_183(4112);
	func_184(6);
	vVar2 = { func_185(((*Global_2621440)[0 /*12065*/])->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_186(vVar2, uVar1, uVar0, 0);
	func_187(vVar2);
	Global_40.f_9.f_15 = func_188(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_26(int iParam0)
{
	if (func_108() != -1)
	{
		return;
	}
	func_183(32);
	if (iParam0 == 0)
	{
		func_183(16);
	}
	else if (iParam0 == 1)
	{
		func_183(8);
	}
	func_189();
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
	StringConCat(&cVar0, func_190(iParam0), 64);
	return cVar0;
}

struct<8> func_28(int iParam0)
{
	struct<8> Var0;

	if (!func_58(iParam0))
	{
		return Var0;
	}
	StringCopy(&Var0, func_190(iParam0), 64);
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
	if (func_191(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_191(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_191(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_191(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_191(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_191(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return 0;
		}
	}
	if (func_191(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_191(iVar0, 256))
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
	switch (func_108())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

int func_31(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_188(vParam0, 1);
	if (iVar0 == func_192())
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
		func_84(Global_1935630, 4194304);
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
	if (!bParam0 && func_193(373691918))
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
	if (func_194(uParam0->f_44))
	{
		func_195(&(uParam0->f_44), 1, 1);
	}
	if (func_196(&(uParam0->f_45)))
	{
		func_197(&(uParam0->f_45));
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
		if (!func_198(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_199(uParam0, 0))
			{
				if (func_200(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_201(uParam0, 1, &iVar0))
					{
					}
					if (func_202(uParam0, 3, &cVar2))
					{
					}
					if (func_201(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_201(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_201(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_201(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_201(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 2 && uParam0->f_273 < 2)
						{
							if (!func_203(uParam0, &cVar2, uParam0->f_273))
							{
								*((*uParam0)[uParam0->f_273 /*16*/]) = { cVar2 };
								func_204((*uParam0)[uParam0->f_273 /*16*/], 1048576);
								uParam0->f_273++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 2 && uParam0->f_274 < 2)
						{
							*(uParam0->f_33[uParam0->f_274 /*16*/]) = { cVar2 };
							func_204(uParam0->f_33[uParam0->f_274 /*16*/], 1048576);
							uParam0->f_274++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 10 && uParam0->f_275 < 10)
						{
							*(uParam0->f_66[uParam0->f_275 /*16*/]) = { cVar2 };
							func_204(uParam0->f_66[uParam0->f_275 /*16*/], 1048576);
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
						if (!func_203(&(uParam0->f_227), &cVar2, uParam0->f_276))
						{
							*(uParam0->f_227[uParam0->f_276 /*16*/]) = { cVar2 };
							func_204(uParam0->f_227[uParam0->f_276 /*16*/], 1048576);
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
			if (func_199(uParam0, 12))
			{
				if (func_201(uParam0, 13, &iVar0))
				{
				}
				if (func_201(uParam0, 14, &iVar1))
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
		func_205(uParam0);
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
	if (!func_51(uParam0))
	{
		return func_206(uParam0, &Local_18);
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
	if (!func_29(func_66(uParam0->f_2), 0))
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
		func_207(0);
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
	func_208(3, &(uParam0->f_66));
}

void func_43(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_44(var uParam0)
{
	if (Local_18.f_565.f_2 > 0 && Local_18.f_565.f_2 < 8)
	{
		Stack.Push(&Local_18);
		Call_Loc(uLocal_1250);
		func_209(&Local_18);
		func_210(&(Local_18.f_565), &(Local_18.f_730), &(Local_18.f_1111));
		func_211(&Local_18);
	}
}

void func_45(var uParam0)
{
	int iVar0;
	int iVar1;

	func_212(&(uParam0->f_43));
	func_213(&Local_18);
	func_214(&(Local_18.f_565));
	func_215(&(Local_18.f_565), &(Local_18.f_730));
	func_216(&(Local_18.f_565));
	func_217(&Local_18);
	func_218(&Local_18);
	func_219(&Local_18);
	switch (Local_18.f_565.f_2)
	{
		case -1:
			return;
		case 0:
			func_220(1, 1);
			break;
		case 1:
			if (func_221(uParam0))
			{
				func_220(2, 1);
			}
			break;
		case 2:
			if (func_222(uParam0))
			{
				func_220(3, 1);
			}
			break;
		case 3:
			if (func_223(uParam0))
			{
				func_220(4, 1);
			}
			break;
		case 4:
			if (func_224(uParam0))
			{
				func_220(5, 1);
			}
			break;
		case 5:
			if (func_225(uParam0))
			{
				func_220(6, 0);
			}
			break;
		case 6:
			if (!func_226(&(Local_18.f_1111.f_40[0]), 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_227(266), 0, 0, -1, 0, 0, -1);
				TASK::TASK_DISMOUNT_ANIMAL(0, 131072, 0, 0, 0, 0);
				TASK::TASK_START_SCENARIO_AT_POSITION(0, 1446817251, func_228(8, 2), func_229(8, 2), -1, 1, 0, 0, -1082130432, 0);
				func_230(&(Local_18.f_1111), 0, &iVar0, 0, 0, 1, 1, 1);
			}
			else if (!func_226(&(Local_18.f_1111.f_40[4]), 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_227(269), 0, 0, -1, 0, 0, -1);
				TASK::TASK_DISMOUNT_ANIMAL(0, 262144, 0, 0, 0, 0);
				TASK::TASK_START_SCENARIO_AT_POSITION(0, -442037069, func_228(8, 3), func_229(8, 3), -1, 1, 0, 0, -1082130432, 0);
				func_230(&(Local_18.f_1111), 4, &iVar1, 0, 0, 1, 1, 1);
			}
			else
			{
				func_220(7, 0);
			}
			break;
		case 7:
			if (func_231(&(Local_18.f_1111), 0, 0, 3600f) && func_231(&(Local_18.f_1111), 4, 0, 3600f))
			{
				func_233(func_232(3, -1891229662), Local_18.f_1224.f_7 + 19400);
				func_234(Local_18.f_1224.f_7, 0, 0, 0, 1);
				func_30(64);
				func_220(8, 0);
			}
			break;
		case 8:
			return;
	}
}

int func_46(var uParam0)
{
	if (func_8(&(uParam0->f_9), 4))
	{
		if (!func_235(uParam0))
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
		if (func_237(&(uParam0->f_3), func_236(iVar0)))
		{
			if (func_238(iVar0))
			{
				if (!func_10(iVar0))
				{
					func_239(iVar0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					return 0;
				}
				if (((!func_67(iVar0, 0) && uParam0->f_1 != -103573613) && uParam0->f_1 != 194099983) && uParam0->f_1 != 2038046186)
				{
					func_240(iVar0, 0);
					AUDIO::STOP_PED_SPEAKING(func_66(iVar0), true);
				}
			}
			else if (!func_10(iVar0))
			{
				func_239(iVar0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				return 0;
			}
		}
		iVar0++;
	}
	if (!func_241(uParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		func_242(&vVar1, &uVar4);
		Var6.f_10 = 7;
		Var6 = 1;
		Var6.f_2 = 1;
		Var6.f_3 = 1;
		Var6.f_4 = 1;
		Var6.f_6 = { vVar1 };
		Var6.f_9 = uVar4;
		uParam0->f_4 = func_243(&iVar5, &Var6);
		if (iVar5 <= 0)
		{
			return 0;
		}
	}
	func_244(uParam0);
	if (func_8(&(uParam0->f_9), 128))
	{
		if (!func_245(uParam0))
		{
			return 0;
		}
	}
	sVar17 = func_99(uParam0->f_1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
	{
		MISC::_0x1096603B519C905F(sVar17);
	}
	if (func_246())
	{
		func_247(1);
	}
	func_248(64);
	func_32(1);
	func_84(Global_1935630, 256);
	if (func_29(Global_35, 0))
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	}
	if (!func_20(32768))
	{
		func_249(Global_36, ENTITY::GET_ENTITY_HEADING(Global_35));
	}
	return 1;
}

int func_50()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_51(var uParam0)
{
	if (Local_18.f_565.f_2 >= 8)
	{
		Global_1879514->f_1 = uParam0->f_5;
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
	switch (func_250(uParam1))
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
		func_204(sParam0, 1);
		return 1;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_204(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_204(sParam0, 1);
			return 0;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_204(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_204(sParam0, 1);
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
		func_204(sParam0, 1);
		return 1;
	}
	func_204(sParam0, 1);
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
		if (!func_251(iParam0))
		{
			return;
		}
	}
	func_252(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_60(var uParam0, int iParam1)
{
	if (iParam1 || !func_196(uParam0))
	{
		func_253(uParam0);
	}
}

void func_61(var uParam0, int iParam1, bool bParam2)
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

void func_62(var uParam0)
{
	int iVar0;

	func_254();
	func_255(uParam0);
	func_256(&(uParam0->f_730));
	func_257(uParam0);
	func_258(uParam0, &(uParam0->f_1111), 0, 1);
	func_258(uParam0, &(uParam0->f_1111), 1, 1);
	func_258(uParam0, &(uParam0->f_1111), 2, 1);
	func_259(0);
	func_260(&(uParam0->f_1111), 0);
	func_261(&(uParam0->f_1111), 0);
	func_262(uParam0);
	func_263(-2020023971, 1, 0);
	func_264();
	if (func_29(&(uParam0->f_1111.f_40[0]), 0) && PED::IS_PED_READY_TO_RENDER(&(uParam0->f_1111.f_40[0])))
	{
		func_265(&(uParam0->f_1111), 0, 2, 0);
	}
	if (func_29(&(uParam0->f_1111.f_40[1]), 0) && PED::IS_PED_READY_TO_RENDER(&(uParam0->f_1111.f_40[1])))
	{
		func_265(&(uParam0->f_1111), 1, 0, 0);
		func_265(&(uParam0->f_1111), 1, 1, 0);
	}
	if (func_29(Global_35, 0) && PED::IS_PED_READY_TO_RENDER(Global_35))
	{
		func_265(&(uParam0->f_1111), 2, 2, 0);
	}
	if (func_29(&(uParam0->f_1111.f_40[3]), 0) && PED::IS_PED_READY_TO_RENDER(&(uParam0->f_1111.f_40[3])))
	{
		func_265(&(uParam0->f_1111), 3, 2, 0);
	}
	func_266(1, 0);
	ENTITY::SET_ENTITY_INVINCIBLE(&(uParam0->f_1111.f_40[1]), false);
	ENTITY::SET_ENTITY_INVINCIBLE(&(uParam0->f_1111.f_40[5]), false);
	if (func_268(&(((*Global_1360165)[func_267(0) /*1157*/])->f_12), 16))
	{
		func_269(func_267(0), 0);
	}
	if (func_268(&(((*Global_1360165)[func_267(4) /*1157*/])->f_12), 16))
	{
		func_269(func_267(4), 0);
	}
	AUDIO::_0x660A8F876DF1D4F8(7);
	AUDIO::_0x660A8F876DF1D4F8(25);
	AUDIO::_0x660A8F876DF1D4F8(45);
	func_270(&(uParam0->f_730.f_276), Global_35);
	func_270(&(uParam0->f_730.f_276), &(uParam0->f_1111.f_40[0]));
	func_270(&(uParam0->f_730.f_276), &(uParam0->f_1111.f_40[4]));
	func_271(func_267(0), 0);
	func_271(func_267(4), 0);
	if (uParam0->f_565.f_2 < 7)
	{
		func_231(&(uParam0->f_1111), 0, 1, -1082130432);
		func_231(&(uParam0->f_1111), 4, 1, -1082130432);
	}
	func_272(&(uParam0->f_1111.f_40[3]), 0);
	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED() != 0)
	{
		PED::_UNRESERVE_AMBIENT_PEDS(19);
	}
	Global_1430231->f_2 = 0;
	iVar0 = 244;
	while (iVar0 <= 252)
	{
		TASK::DELETE_PATROL_ROUTE(func_227(iVar0));
		iVar0++;
	}
	if (SCRIPTS::_0x7409669C5ED50144(-1392528840))
	{
		SCRIPTS::