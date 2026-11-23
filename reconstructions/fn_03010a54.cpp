extern "C" unsigned char data_10250fc0[];
extern "C" void fn_02e73d2c(void*);
extern "C" void fn_02ecfd50(void*);
extern "C" void fn_0305d6b0(void*);
extern "C" void* fn_0308e578(unsigned size);

extern "C" void* fn_03010a54(void* arg0) {
    void* var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x1BCU), ((var_r31 == 0) == 0))) {
        fn_02e73d2c(var_r31);
        (*(const void**)((char*)var_r31 + 44)) = data_10250fc0;
        fn_02ecfd50((char*)var_r31 + 48);
        fn_0305d6b0((char*)var_r31 + 120);
    }
    return var_r31;
}
