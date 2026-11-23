extern "C" unsigned char data_102d8dbc[];
extern "C" void* fn_0308e578(unsigned size);

extern "C" void fn_0352eb5c(void* arg0, int arg1, int arg2) {
    void* var_r3;

    var_r3 = arg0;
    if ((var_r3 != 0) || (var_r3 = fn_0308e578(0x18U), ((var_r3 == 0) == 0))) {
        (*(int*)((char*)var_r3 + 8)) = arg1;
        (*(int*)((char*)var_r3 + 20)) = arg2;
        (*(const void**)((char*)var_r3 + 4)) = data_102d8dbc;
        (*(signed char*)var_r3) = 0;
    }
}
