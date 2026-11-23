typedef int s32;

extern "C" void fn_03c92f98(void*);
extern "C" int fn_03ca6e9c(void*);
extern "C" void fn_03cc77f4(void*);
extern "C" void fn_0434bda8(void*, void*);

extern "C" s32 fn_03cc7c98(void *arg0) {
    s32 var_r3;
    void *temp_r4;

    var_r3 = fn_03ca6e9c((char *)arg0 + 0x30);
    if (var_r3 == 0) {
        temp_r4 = (*(void **)((char *)(arg0) + (0xDC)));
        if (temp_r4 != 0) {
            fn_0434bda8((*(void **)((char *)(arg0) + (4))), temp_r4);
        }
        fn_03c92f98(arg0);
        fn_03cc77f4(arg0);
        var_r3 = 0;
    }
    return var_r3;
}
