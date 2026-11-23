typedef unsigned char u8;
typedef int s32;

extern "C" bool fn_0370e3bc(void *, int, int);

extern "C" u8 fn_025f67ec(void *arg0) {
    s32 var_r31;
    void *temp_r0;

    temp_r0 = (*(void **)((char *)((*(void **)((char *)(arg0) + (0)))) + (0x394)));
    var_r31 = 0;
    if ((temp_r0 != 0) && (fn_0370e3bc(temp_r0, *(*(s32 **)((char *)(arg0) + (0x24))), 0) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
