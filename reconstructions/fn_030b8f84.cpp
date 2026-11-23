extern "C" unsigned char data_1027a8b8[];
extern "C" void* fn_0308e578(unsigned size);

extern "C" void fn_030b8f84(void* arg0, int arg1, int arg2) {
    void* var_r3;

    var_r3 = arg0;
    if ((var_r3 != 0) || (var_r3 = fn_0308e578(0x10U), ((var_r3 == 0) == 0))) {
        (*(int*)((char*)var_r3 + 4)) = arg1;
        (*(int*)((char*)var_r3 + 8)) = arg2;
        (*(const void**)var_r3) = data_1027a8b8;
        (*(int*)((char*)var_r3 + 12)) = 0;
    }
}
