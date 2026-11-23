typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern "C" u8 fn_030c05bc(void *arg0, void *arg1) {
    s32 var_r0;

    var_r0 = 0;
    if (((*(f32 *)((char *)(arg0) + (0))) == (*(f32 *)((char *)(arg1) + (0)))) && ((*(f32 *)((char *)(arg0) + (4))) == (*(f32 *)((char *)(arg1) + (4)))) && ((*(f32 *)((char *)(arg0) + (8))) == (*(f32 *)((char *)(arg1) + (8)))) && ((*(f32 *)((char *)(arg0) + (0xC))) == (*(f32 *)((char *)(arg1) + (0xC))))) {
        var_r0 = 1;
    }
    return var_r0;
}
