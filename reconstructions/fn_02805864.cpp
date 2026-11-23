typedef unsigned char u8;
typedef int s32;

extern "C" void* fn_027fe888(void*);

extern "C" u8 fn_02805864(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if ((fn_027fe888(arg0) != 0) && ((s32) (*(s32 *)((char *)(fn_027fe888(arg0)) + (0x28))) == 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
