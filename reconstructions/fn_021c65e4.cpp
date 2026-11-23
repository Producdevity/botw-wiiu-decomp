typedef int s32;

extern "C" int fn_02e17fa8(void*);
extern "C" int fn_02e18f44(void*);
extern "C" void fn_02e18f54(void*, void*);

extern "C" s32 fn_021c65e4(void) {
    s32 temp_r30;
    s32 var_r31;

    var_r31 = 0;
    temp_r30 = fn_02e17fa8(0);
    if (temp_r30 > fn_02e18f44(0)) {
        fn_02e18f54((void *) temp_r30, 0);
        var_r31 = 1;
    }
    return var_r31;
}
