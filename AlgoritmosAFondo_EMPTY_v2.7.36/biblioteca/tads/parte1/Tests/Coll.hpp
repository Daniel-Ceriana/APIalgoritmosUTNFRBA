// // cmpTK: compara un elemento T (int) con una clave K (int)
// int cmpTK_int(int t, int k) {
//     if (t < k) return -1;
//     if (t == k) return  0;
//     return 1;
// }

// // tFromString: convierte string a int
// int intFromString(std::string s) {
//     return std::stoi(s);
// }

// // cmpTK y tFromString para strings
// int cmpTK_str(std::string t, std::string k) {
//     if (t < k) return -1;
//     if (t == k) return  0;
//     return 1;
// }
// std::string strFromString(std::string s) { return s; }

// // ── Helpers ───────────────────────────────────────────────────────────────

// void pass(const std::string& nombre) {
//     std::cout << "[PASS] " << nombre << "\n";
// }
// void fail(const std::string& nombre, const std::string& detalle) {
//     std::cerr << "[FAIL] " << nombre << " => " << detalle << "\n";
// }

// // ── Tests ─────────────────────────────────────────────────────────────────

// void test_elemento_existe_posicion_0() {
//     Coll<int> c = coll<int>();
//     collAdd(c, 10,intToString);
//     collAdd(c, 20,intToString);
//     collAdd(c, 30,intToString);

//     int pos = collFind(c, 10, cmpTK_int, intFromString);
//     if (pos == 0)
//         pass("elemento_existe_posicion_0");
//     else
//         fail("elemento_existe_posicion_0", "esperaba 0, obtuvo " + std::to_string(pos));
// }

// void test_elemento_existe_posicion_intermedia() {
//     Coll<int> c = coll<int>();
//     collAdd(c, 10,intToString);
//     collAdd(c, 20,intToString);
//     collAdd(c, 30,intToString);

//     int pos = collFind(c, 20, cmpTK_int, intFromString);
//     if (pos == 1)
//         pass("elemento_existe_posicion_intermedia");
//     else
//         fail("elemento_existe_posicion_intermedia", "esperaba 1, obtuvo " + std::to_string(pos));
// }

// void test_elemento_existe_ultima_posicion() {
//     Coll<int> c = coll<int>();
//     collAdd(c, 10,intToString);
//     collAdd(c, 20,intToString);
//     collAdd(c, 30,intToString);

//     int pos = collFind(c, 30, cmpTK_int, intFromString);
//     if (pos == 2)
//         pass("elemento_existe_ultima_posicion");
//     else
//         fail("elemento_existe_ultima_posicion", "esperaba 2, obtuvo " + std::to_string(pos));
// }

// void test_elemento_no_existe() {
//     Coll<int> c = coll<int>();
//     collAdd(c, 10,intToString);
//     collAdd(c, 20,intToString);
//     collAdd(c, 30,intToString);

//     int pos = collFind(c, 99, cmpTK_int, intFromString);
//     if (pos < 0)
//         pass("elemento_no_existe");
//     else
//         fail("elemento_no_existe", "esperaba negativo, obtuvo " + std::to_string(pos));
// }

// void test_coleccion_vacia() {
//     Coll<int> c = coll<int>();

//     int pos = collFind(c, 5, cmpTK_int, intFromString);
//     if (pos < 0)
//         pass("coleccion_vacia");
//     else
//         fail("coleccion_vacia", "esperaba negativo, obtuvo " + std::to_string(pos));
// }

// void test_primera_ocurrencia_duplicados() {
//     // Si hay duplicados debe retornar la PRIMERA posición
//     Coll<int> c = coll<int>();
//     collAdd(c, 5, intToString);
//     collAdd(c, 5,intToString);
//     collAdd(c, 5,intToString);

//     int pos = collFind(c, 5, cmpTK_int, intFromString);
//     if (pos == 0)
//         pass("primera_ocurrencia_duplicados");
//     else
//         fail("primera_ocurrencia_duplicados", "esperaba 0, obtuvo " + std::to_string(pos));
// }

// void test_un_solo_elemento_encontrado() {
//     Coll<int> c = coll<int>();
//     collAdd(c, 42,intToString);

//     int pos = collFind(c, 42, cmpTK_int, intFromString);
//     if (pos == 0)
//         pass("un_solo_elemento_encontrado");
//     else
//         fail("un_solo_elemento_encontrado", "esperaba 0, obtuvo " + std::to_string(pos));
// }

// void test_un_solo_elemento_no_encontrado() {
//     Coll<int> c = coll<int>();
//     collAdd(c, 42,intToString);

//     int pos = collFind(c, 7, cmpTK_int, intFromString);
//     if (pos < 0)
//         pass("un_solo_elemento_no_encontrado");
//     else
//         fail("un_solo_elemento_no_encontrado", "esperaba negativo, obtuvo " + std::to_string(pos));
// }

// void test_tipo_string() {
//     Coll<std::string> c = coll<std::string>();
//     collAdd(c, std::string("alfa"),stringToString);
//     collAdd(c, std::string("beta"),stringToString);
//     collAdd(c, std::string("gamma"),stringToString);

//     int pos = collFind(c, std::string("beta"), cmpTK_str, strFromString);
//     if (pos == 1)
//         pass("tipo_string_encontrado");
//     else
//         fail("tipo_string_encontrado", "esperaba 1, obtuvo " + std::to_string(pos));

//     pos = collFind(c, std::string("delta"), cmpTK_str, strFromString);
//     if (pos < 0)
//         pass("tipo_string_no_encontrado");
//     else
//         fail("tipo_string_no_encontrado", "esperaba negativo, obtuvo " + std::to_string(pos));
// }