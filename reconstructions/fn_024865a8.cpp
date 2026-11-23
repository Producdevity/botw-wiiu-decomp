extern "C" int fn_02e17844(int);
extern "C" int fn_02e17854(int);
extern "C" int fn_02e17864(int);
extern "C" int fn_02e17874(int);

extern "C" int fn_024865a8() {
    int var_r31;

    var_r31 = 0;
    if (fn_02e17874(0) != 0) {
        var_r31 = 1;
    }
    if (fn_02e17864(0) != 0) {
        var_r31 += 1;
    }
    if (fn_02e17854(0) != 0) {
        var_r31 += 1;
    }
    if (fn_02e17844(0) != 0) {
        var_r31 += 1;
    }
    return var_r31;
}
