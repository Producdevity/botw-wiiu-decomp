extern "C" unsigned char data_1035cbec[];
extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_03c4952c(void*, int, int);

extern "C" void* fn_03a34a08(void* arg0, int arg1, int arg2) {
    void* var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0xA4U), ((var_r31 == 0) == 0))) {
        fn_03c4952c(var_r31, arg1, arg2);
        {
            const void* const table = data_1035cbec;
            (*(const void**)((char*)var_r31 + 8)) = table;
        }
    }
    return var_r31;
}
