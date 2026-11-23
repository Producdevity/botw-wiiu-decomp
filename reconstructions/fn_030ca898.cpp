extern "C" void* fn_0308e578(unsigned size);

extern "C" void fn_030ca898(void* arg0, int* arg1, int* arg2, int* arg3) {
    void* var_r3;

    var_r3 = arg0;
    if ((var_r3 != 0) || (var_r3 = fn_0308e578(0xCU), ((var_r3 == 0) == 0))) {
        (*(int*)var_r3) = (int) *arg1;
        (*(int*)((char*)var_r3 + 4)) = (int) *arg2;
        (*(int*)((char*)var_r3 + 8)) = (int) *arg3;
    }
}
