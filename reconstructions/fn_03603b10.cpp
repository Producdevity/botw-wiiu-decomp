extern "C" unsigned char data_102f8d20[];
extern "C" unsigned char data_102f8f48[];
extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_03a3e24c(void*);

extern "C" void* fn_03603b10(void* arg0) {
    void* var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0xA4U), ((var_r31 == 0) == 0))) {
        fn_03a3e24c(var_r31);
        (*(const void**)((char*)var_r31 + 12)) = data_102f8d20;
        (*(const void**)((char*)var_r31 + 16)) = data_102f8f48;
        (*(int*)((char*)var_r31 + 160)) = 0;
    }
    return var_r31;
}
