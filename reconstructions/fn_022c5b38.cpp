typedef unsigned char u8;
typedef int s32;

extern "C" int fn_03677224(void*);

extern "C" void *data_1047be88;

extern "C" s32 fn_022c5b38(void **arg0) {
    s32 var_r31;

    var_r31 = 1;
    if (!((*(u8 *)((char *)((*(void **)((char *)(*arg0) + (0x444)))) + (6))) & 6) && (fn_03677224(data_1047be88) == 0)) {
        var_r31 = 0;
    }
    return var_r31 == 0;
}
