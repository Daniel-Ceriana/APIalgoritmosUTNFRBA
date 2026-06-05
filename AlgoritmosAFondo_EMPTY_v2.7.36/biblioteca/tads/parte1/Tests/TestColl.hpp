// // // cmpTK: compara un elemento T (int) con una clave K (int)
// // int cmpTK_int(int t, int k) {
// //     if (t < k) return -1;
// //     if (t == k) return  0;
// //     return 1;
// // }

// // // tFromString: convierte string a int
// // int intFromString(std::string s) {
// //     return std::stoi(s);
// // }

// // // cmpTK y tFromString para strings
// // int cmpTK_str(std::string t, std::string k) {
// //     if (t < k) return -1;
// //     if (t == k) return  0;
// //     return 1;
// // }
// // std::string strFromString(std::string s) { return s; }

// // // ── Helpers ───────────────────────────────────────────────────────────────

// // void pass(const std::string& nombre) {
// //     std::cout << "[PASS] " << nombre << "\n";
// // }
// // void fail(const std::string& nombre, const std::string& detalle) {
// //     std::cerr << "[FAIL] " << nombre << " => " << detalle << "\n";
// // }

// // // ── Tests ─────────────────────────────────────────────────────────────────

// // void test_elemento_existe_posicion_0() {
// //     Coll<int> c = coll<int>();
// //     collAdd(c, 10,intToString);
// //     collAdd(c, 20,intToString);
// //     collAdd(c, 30,intToString);

// //     int pos = collFind(c, 10, cmpTK_int, intFromString);
// //     if (pos == 0)
// //         pass("elemento_existe_posicion_0");
// //     else
// //         fail("elemento_existe_posicion_0", "esperaba 0, obtuvo " + std::to_string(pos));
// // }

// // void test_elemento_existe_posicion_intermedia() {
// //     Coll<int> c = coll<int>();
// //     collAdd(c, 10,intToString);
// //     collAdd(c, 20,intToString);
// //     collAdd(c, 30,intToString);

// //     int pos = collFind(c, 20, cmpTK_int, intFromString);
// //     if (pos == 1)
// //         pass("elemento_existe_posicion_intermedia");
// //     else
// //         fail("elemento_existe_posicion_intermedia", "esperaba 1, obtuvo " + std::to_string(pos));
// // }

// // void test_elemento_existe_ultima_posicion() {
// //     Coll<int> c = coll<int>();
// //     collAdd(c, 10,intToString);
// //     collAdd(c, 20,intToString);
// //     collAdd(c, 30,intToString);

// //     int pos = collFind(c, 30, cmpTK_int, intFromString);
// //     if (pos == 2)
// //         pass("elemento_existe_ultima_posicion");
// //     else
// //         fail("elemento_existe_ultima_posicion", "esperaba 2, obtuvo " + std::to_string(pos));
// // }

// // void test_elemento_no_existe() {
// //     Coll<int> c = coll<int>();
// //     collAdd(c, 10,intToString);
// //     collAdd(c, 20,intToString);
// //     collAdd(c, 30,intToString);

// //     int pos = collFind(c, 99, cmpTK_int, intFromString);
// //     if (pos < 0)
// //         pass("elemento_no_existe");
// //     else
// //         fail("elemento_no_existe", "esperaba negativo, obtuvo " + std::to_string(pos));
// // }

// // void test_coleccion_vacia() {
// //     Coll<int> c = coll<int>();

// //     int pos = collFind(c, 5, cmpTK_int, intFromString);
// //     if (pos < 0)
// //         pass("coleccion_vacia");
// //     else
// //         fail("coleccion_vacia", "esperaba negativo, obtuvo " + std::to_string(pos));
// // }

// // void test_primera_ocurrencia_duplicados() {
// //     // Si hay duplicados debe retornar la PRIMERA posición
// //     Coll<int> c = coll<int>();
// //     collAdd(c, 5, intToString);
// //     collAdd(c, 5,intToString);
// //     collAdd(c, 5,intToString);

// //     int pos = collFind(c, 5, cmpTK_int, intFromString);
// //     if (pos == 0)
// //         pass("primera_ocurrencia_duplicados");
// //     else
// //         fail("primera_ocurrencia_duplicados", "esperaba 0, obtuvo " + std::to_string(pos));
// // }

// // void test_un_solo_elemento_encontrado() {
// //     Coll<int> c = coll<int>();
// //     collAdd(c, 42,intToString);

// //     int pos = collFind(c, 42, cmpTK_int, intFromString);
// //     if (pos == 0)
// //         pass("un_solo_elemento_encontrado");
// //     else
// //         fail("un_solo_elemento_encontrado", "esperaba 0, obtuvo " + std::to_string(pos));
// // }

// // void test_un_solo_elemento_no_encontrado() {
// //     Coll<int> c = coll<int>();
// //     collAdd(c, 42,intToString);

// //     int pos = collFind(c, 7, cmpTK_int, intFromString);
// //     if (pos < 0)
// //         pass("un_solo_elemento_no_encontrado");
// //     else
// //         fail("un_solo_elemento_no_encontrado", "esperaba negativo, obtuvo " + std::to_string(pos));
// // }

// // void test_tipo_string() {
// //     Coll<std::string> c = coll<std::string>();
// //     collAdd(c, std::string("alfa"),stringToString);
// //     collAdd(c, std::string("beta"),stringToString);
// //     collAdd(c, std::string("gamma"),stringToString);

// //     int pos = collFind(c, std::string("beta"), cmpTK_str, strFromString);
// //     if (pos == 1)
// //         pass("tipo_string_encontrado");
// //     else
// //         fail("tipo_string_encontrado", "esperaba 1, obtuvo " + std::to_string(pos));

// //     pos = collFind(c, std::string("delta"), cmpTK_str, strFromString);
// //     if (pos < 0)
// //         pass("tipo_string_no_encontrado");
// //     else
// //         fail("tipo_string_no_encontrado", "esperaba negativo, obtuvo " + std::to_string(pos));
// // }




// /////////////////////////////////////////////////////////////////
// // sort
// // cmpTT: compara dos int
// int cmpTT_int(int t1, int t2) {
//     if (t1 < t2) return -1;
//     if (t1 == t2) return  0;
//     return 1;
// }

// // cmpTT: orden inverso (para probar criterio distinto)
// int cmpTT_int_desc(int t1, int t2) {
//     return cmpTT_int(t2, t1);
// }

// // int intFromString(std::string s)      { return std::stoi(s); }
// // std::string intToString(int n)        { return std::to_string(n); }

// // cmpTT: compara dos string
// int cmpTT_str(std::string t1, std::string t2) {
//     if (t1 < t2) return -1;
//     if (t1 == t2) return  0;
//     return 1;
// }
// //  std::string strFromString(std::string s) { return s; }
// //  std::string strToString(std::string s)   { return s; }

// // ── Helpers ───────────────────────────────────────────────────────────────

// void pass(const std::string& nombre) {
//     std::cout << "[PASS] " << nombre << "\n";
// }
// void fail(const std::string& nombre, const std::string& detalle) {
//     std::cerr << "[FAIL] " << nombre << " => " << detalle << "\n";
// }

// // Verifica que la colección esté ordenada según cmpTT
// bool estaOrdenada_int(Coll<int>& c, int(*cmpTT)(int,int)) {
//     int n = collSize(c);
//     for (int i = 0; i < n - 1; i++) {
//         if (cmpTT(collGetAt(c, i,stringToInt), collGetAt(c, i + 1,stringToInt)) > 0)
//             return false;
//     }
//     return true;
// }

// bool estaOrdenada_str(Coll<std::string>& c, int(*cmpTT)(std::string,std::string)) {
//     int n = collSize(c);
//     for (int i = 0; i < n - 1; i++) {
//         if (cmpTT(collGetAt(c, i,stringToString), collGetAt(c, i + 1,stringToString)) > 0)
//             return false;
//     }
//     return true;
// }

// // ── Tests ─────────────────────────────────────────────────────────────────

// // void test_orden_ascendente() {
// //     Coll<int> c = coll<int>();
// //     collAdd(c, 30, intToString);
// //     collAdd(c, 10, intToString);
// //     collAdd(c, 20, intToString);

// //     collSort(c, cmpTT_int, stringToInt, intToString);

// //     if (estaOrdenada_int(c, cmpTT_int)
// //         && collGetAt(c, 0,stringToInt) == 10
// //         && collGetAt(c, 1,stringToInt) == 20
// //         && collGetAt(c, 2,stringToInt) == 30)
// //         pass("orden_ascendente");
// //     else
// //         fail("orden_ascendente", "coleccion no quedo ordenada correctamente");
// // }

// // void test_orden_descendente() {
// //     Coll<int> c = coll<int>();
// //     collAdd(c, 10, intToString);
// //     collAdd(c, 30, intToString);
// //     collAdd(c, 20, intToString);

// //     collSort(c, cmpTT_int_desc, stringToInt, intToString);

// //     if (collGetAt(c, 0,stringToInt) == 30
// //         && collGetAt(c, 1,stringToInt) == 20
// //         && collGetAt(c, 2,stringToInt) == 10)
// //         pass("orden_descendente");
// //     else
// //         fail("orden_descendente", "coleccion no quedo en orden descendente");
// // }

// // void test_ya_ordenada() {
// //     Coll<int> c = coll<int>();
// //     collAdd(c, 1, intToString);
// //     collAdd(c, 2, intToString);
// //     collAdd(c, 3, intToString);

// //     collSort(c, cmpTT_int, stringToInt, intToString);

// //     if (estaOrdenada_int(c, cmpTT_int))
// //         pass("ya_ordenada");
// //     else
// //         fail("ya_ordenada", "se rompio una coleccion que ya estaba ordenada");
// // }

// // void test_orden_inverso() {
// //     Coll<int> c = coll<int>();
// //     collAdd(c, 3, intToString);
// //     collAdd(c, 2, intToString);
// //     collAdd(c, 1, intToString);

// //     collSort(c, cmpTT_int, stringToInt, intToString);

// //     if (estaOrdenada_int(c, cmpTT_int))
// //         pass("orden_inverso");
// //     else
// //         fail("orden_inverso", "no ordeno coleccion en orden inverso");
// // }

// // void test_elementos_duplicados() {
// //     Coll<int> c = coll<int>();
// //     collAdd(c, 5, intToString);
// //     collAdd(c, 3, intToString);
// //     collAdd(c, 5, intToString);
// //     collAdd(c, 1, intToString);
// //     collAdd(c, 3, intToString);

// //     collSort(c, cmpTT_int, stringToInt, intToString);

// //     if (estaOrdenada_int(c, cmpTT_int)
// //         && collGetAt(c, 0,stringToInt) == 1
// //         && collGetAt(c, 1,stringToInt) == 3
// //         && collGetAt(c, 2,stringToInt) == 3
// //         && collGetAt(c, 3,stringToInt) == 5
// //         && collGetAt(c, 4,stringToInt) == 5)
// //         pass("elementos_duplicados");
// //     else
// //         fail("elementos_duplicados", "no manejo bien los duplicados");
// // }

// // void test_un_elemento() {
// //     Coll<int> c = coll<int>();
// //     collAdd(c, 42, intToString);

// //     collSort(c, cmpTT_int, stringToInt, intToString);

// //     if (collSize(c) == 1 && collGetAt(c, 0,stringToInt) == 42)
// //         pass("un_elemento");
// //     else
// //         fail("un_elemento", "coleccion de un elemento quedo mal");
// // }

// // void test_coleccion_vacia() {
// //     Coll<int> c = coll<int>();

// //     collSort(c, cmpTT_int, stringToInt, intToString);

// //     if (collSize(c) == 0)
// //         pass("coleccion_vacia");
// //     else
// //         fail("coleccion_vacia", "coleccion vacia quedo con elementos");
// // }

// // void test_todos_iguales() {
// //     Coll<int> c = coll<int>();
// //     collAdd(c, 7, intToString);
// //     collAdd(c, 7, intToString);
// //     collAdd(c, 7, intToString);

// //     collSort(c, cmpTT_int, stringToInt, intToString);

// //     if (estaOrdenada_int(c, cmpTT_int) && collSize(c) == 3)
// //         pass("todos_iguales");
// //     else
// //         fail("todos_iguales", "fallo con todos los elementos iguales");
// // }

// // void test_tipo_string() {
// //     Coll<std::string> c = coll<std::string>();
// //     collAdd(c, std::string("banana"),  stringToString);
// //     collAdd(c, std::string("alfa"),    stringToString);
// //     collAdd(c, std::string("gamma"),   stringToString);

// //     collSort(c, cmpTT_str, stringToString, stringToString);

// //     if (estaOrdenada_str(c, cmpTT_str)
// //         && collGetAt(c, 0,stringToString) == "alfa"
// //         && collGetAt(c, 1,stringToString) == "banana"
// //         && collGetAt(c, 2,stringToString) == "gamma")
// //         pass("tipo_string");
// //     else
// //         fail("tipo_string", "no ordeno strings correctamente");
// // }