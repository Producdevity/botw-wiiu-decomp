typedef int s32;
typedef float f32;

extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" f32 data_10134e98;
extern "C" s32 data_10134f1c;

extern "C" void fn_027df698(void **arg0) {
    void* const* vt1;
    void *temp_r3;

    temp_r3 = *arg0;
    ((s32 (*)(void *, s32, f32))(vt1 = *(void* const**)((char *)(temp_r3) + (0xE8)))[187])(temp_r3, 0, data_10134e98);
    fn_037b8284(arg0, &data_10134f1c, 0);
}
