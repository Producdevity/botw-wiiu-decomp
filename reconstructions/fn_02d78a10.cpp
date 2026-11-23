extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_030bb668(void *);

extern "C" void **fn_02d78a10(void **arg0, void *arg1) {
    void **var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = (void **)(fn_0308e578(4U)), ((var_r31 == 0) == 0))) {
        *var_r31 = arg1;
        fn_030bb668(arg1);
    }
    return var_r31;
}
