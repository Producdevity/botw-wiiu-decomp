typedef int s32;
typedef float f32;

extern "C" void fn_026ee37c(void*, float);

extern "C" f32 data_101189f8;

extern "C" void fn_026ee3ec(void *arg0) {
    void* const* vt1;
    fn_026ee37c(arg0, data_101189f8);
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0xC)))[79])(arg0);
    (*(s32 *)((char *)(arg0) + (0x78))) = 0;
}
