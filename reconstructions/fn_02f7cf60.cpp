typedef int s32;
typedef float f32;

extern "C" void fn_02f7cce8(void*, int, int, int);

extern "C" f32 data_10232c94;

extern "C" void fn_02f7cf60(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void* const* vt1;
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x1B6C)));
    ((s32 (*)(void *, f32))(vt1 = *(void* const**)((char *)(temp_r3) + (0x14)))[47])(temp_r3, data_10232c94);
    fn_02f7cce8(arg0, 2, arg1, 1);
    fn_02f7cce8(arg0, 1, arg2, 1);
    fn_02f7cce8(arg0, 0, arg3, 1);
}
