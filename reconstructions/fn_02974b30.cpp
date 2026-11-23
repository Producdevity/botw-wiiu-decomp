typedef unsigned char u8;
typedef int s32;

extern "C" int fn_037b7e30(void*);

extern "C" u8 fn_02974b30(void *arg0) {
    s32 var_r31;

    var_r31 = 1;
    if (((s32) *(*(u8 **)((char *)(arg0) + (0x30))) == 0) && (fn_037b7e30(arg0) == 0)) {
        var_r31 = 0;
    }
    return var_r31;
}
