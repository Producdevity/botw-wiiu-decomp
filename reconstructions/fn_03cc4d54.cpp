typedef int s32;

extern "C" void fn_03c92f98(void *);
extern "C" void fn_03cc48ac(void*);
extern "C" s32 fn_03cc71fc(void *);
extern "C" s32 fn_03cc7c98(void *);
extern "C" void fn_0434bda8(void *, void *);

extern "C" s32 fn_03cc4d54(void *arg0) {
    s32 var_r3;
    void *temp_r4;
    void *temp_r4_2;

    var_r3 = fn_03cc7c98((char *)arg0 + 0x30);
    if (var_r3 == 0) {
        var_r3 = fn_03cc71fc((char *)arg0 + 0x148);
        if (var_r3 == 0) {
            temp_r4 = (*(void **)((char *)(arg0) + (0x144)));
            if (temp_r4 != 0) {
                fn_0434bda8((*(void **)((char *)(arg0) + (4))), temp_r4);
            }
            temp_r4_2 = (*(void **)((char *)(arg0) + (0x12C)));
            if (temp_r4_2 != 0) {
                fn_0434bda8((*(void **)((char *)(arg0) + (4))), temp_r4_2);
            }
            fn_03c92f98(arg0);
            fn_03cc48ac(arg0);
            var_r3 = 0;
        }
    }
    return var_r3;
}
