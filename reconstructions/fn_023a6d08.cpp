typedef unsigned int u32;

extern "C" void fn_030ea2cc(void *);
extern "C" void fn_0365df48(void *);

extern "C" void *data_1047be88;

extern "C" void fn_023a6d08(void *arg0) {
    void *var_r3;

    var_r3 = 0;
    if ((u32) (*(u32 *)((char *)(data_1047be88) + (0x45C))) > 4U) {
        var_r3 = (*(void **)((char *)((*(void **)((char *)(data_1047be88) + (0x464)))) + (0x10)));
    }
    fn_0365df48(var_r3);
    fn_030ea2cc(arg0);
}
