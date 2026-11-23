extern "C" int fn_02e18180(int);
extern "C" int fn_02e18190(int);
extern "C" int fn_02e181a0(int);
extern "C" int fn_02e181b0(int);

extern "C" int fn_02485dd8() {
    int var_r31;

    var_r31 = 0;
    if (fn_02e181b0(0) != 0) {
        var_r31 = 1;
    }
    if (fn_02e181a0(0) != 0) {
        var_r31 += 1;
    }
    if (fn_02e18190(0) != 0) {
        var_r31 += 1;
    }
    if (fn_02e18180(0) != 0) {
        var_r31 += 1;
    }
    return var_r31;
}
