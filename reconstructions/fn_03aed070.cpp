extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_03aed030(void* object, int value);
extern "C" void fn_03aed03c(void*);
extern "C" void fn_03bf6638(void*);

extern "C" void* fn_03aed070(void* arg0) {
    void* var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x6CU), ((var_r31 == 0) == 0))) {
        (*(short*)((char*)var_r31 + 2)) = 0;
        fn_03bf6638((char*)var_r31 + 68);
        fn_03aed030(var_r31, 16);
        fn_03aed03c(var_r31);
    }
    return var_r31;
}
