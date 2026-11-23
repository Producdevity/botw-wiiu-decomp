typedef int s32;

extern "C" void fn_030b77d4(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1027a75d;

extern "C" void *fn_030b815c(void *arg0, void *arg1) {
    struct { const void* f8; const void* fC; } sp;
    void *temp_r31;
    void *var_r4;

    var_r4 = arg1;
    temp_r31 = (*(void **)((char *)(arg0) + (0x2C)));
    if (var_r4 == 0) {
        var_r4 = (*(void **)((char *)(arg0) + (0x28)));
    }
    (*(void **)((char *)(arg0) + (0x2C))) = var_r4;
    sp.fC = &data_10263910;
    sp.f8 = &data_1027a75d;
    fn_030b77d4(arg0, var_r4, &sp.f8);
    return temp_r31;
}
