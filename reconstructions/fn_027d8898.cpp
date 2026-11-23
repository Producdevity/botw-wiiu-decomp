typedef unsigned char u8;
typedef int s32;

extern "C" int fn_0289d8a8(void*);

extern "C" u8 fn_027d8898(void *arg0) {
    s32 var_r31;

    var_r31 = 1;
    if (((s32) *(*(u8 **)((char *)(arg0) + (0x7C))) == 0) && (fn_0289d8a8(arg0) == 0)) {
        var_r31 = 0;
    }
    return var_r31;
}
