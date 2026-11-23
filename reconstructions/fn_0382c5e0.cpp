typedef unsigned char u8;
typedef int s32;
typedef unsigned int u32;

extern "C" int fn_0382c5a0(void*);

extern "C" u8 fn_0382c5e0(void *arg0) {
    u8 var_r0;

    var_r0 = 0;
    if ((s32) ((((u32) (*(u32 *)((char *)(arg0) + (0x90))) >> 9U) & 1) ^ 1) == 0) {
        var_r0 = fn_0382c5a0(arg0) ^ 1;
    }
    return var_r0;
}
