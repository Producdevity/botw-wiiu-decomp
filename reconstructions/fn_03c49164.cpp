extern "C" unsigned char data_103de0f0[];
extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_03c4952c(void*, int, int);

extern "C" void* fn_03c49164(void* arg0, int arg1, int arg2, int arg3) {
    void* var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0xA4U), ((var_r31 == 0) == 0))) {
        fn_03c4952c(var_r31, arg1, arg3);
        (*(const void**)((char*)var_r31 + 8)) = data_103de0f0;
    }
    return var_r31;
}
