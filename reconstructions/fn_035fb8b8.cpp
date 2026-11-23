extern "C" void fn_03515340();
extern "C" void fn_03515b00();
extern "C" void fn_03518708();
extern "C" int fn_03519720();
extern "C" int fn_035197b8();
extern "C" int fn_03519850();

extern "C" void fn_035fb8b8() {
    if (fn_03519720() != 0) {
        fn_03515b00();
        return;
    }
    if (fn_035197b8() != 0) {
        fn_03515340();
        return;
    }
    if (fn_03519850() != 0) {
        fn_03518708();
    }
}
