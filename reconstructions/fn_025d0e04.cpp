typedef int s32;
typedef float f32;

extern "C" void fn_025cf2b0(void *);

extern "C" f32 data_100eede4;

extern "C" void fn_025d0e04(void **arg0) {
    void* const* vt1;
    void *temp_r3;

    fn_025cf2b0(arg0);
    temp_r3 = *arg0;
    ((s32 (*)(void *, s32, f32))(vt1 = *(void* const**)((char *)(temp_r3) + (0xE8)))[187])(temp_r3, 0, data_100eede4);
}
