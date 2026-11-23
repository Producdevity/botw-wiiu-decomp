extern "C" void fn_031e20e8(int, int);
extern "C" int fn_031e2c10(int);
extern "C" int fn_031f6264(int);

extern "C" int fn_031cbc30(void* arg0) {
    int var_r31;

    var_r31 = 1;
    if (fn_031f6264((*(int*)((char*)arg0 + 0x17644))) == 0) {
        var_r31 = 0;
    }
    fn_031e20e8((*(int*)((char*)arg0 + 0x175C4)), 1);
    if (fn_031e2c10((*(int*)((char*)(((char*)arg0 + 0x10000)) + 0x75C4))) == 0) {
        var_r31 = 0;
    }
    return var_r31;
}
