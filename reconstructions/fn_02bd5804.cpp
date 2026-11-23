typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02bd5618(void*);

extern "C" s32 fn_02bd5804(void *arg0) {
    s32 var_r31;

    var_r31 = 1;
    if (fn_02bd5618(arg0) == 0) {
        var_r31 = (*(u8 *)((char *)(arg0) + (0xB))) & 1;
    }
    return var_r31;
}
