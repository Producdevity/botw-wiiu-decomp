extern "C" void fn_03515224();
extern "C" void fn_035159e4();
extern "C" void fn_0351866c();
extern "C" int fn_03519720();
extern "C" int fn_035197b8();
extern "C" int fn_03519850();

extern "C" void fn_035fb84c() {
    if (fn_03519720() != 0) {
        fn_035159e4();
        return;
    }
    if (fn_035197b8() != 0) {
        fn_03515224();
        return;
    }
    if (fn_03519850() != 0) {
        fn_0351866c();
    }
}
