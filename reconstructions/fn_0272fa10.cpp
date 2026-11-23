typedef int s32;

extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_1011f8a8;

extern "C" void fn_0272fa10(void **arg0) {
    void* const* vt1;
    void *temp_r3;

    temp_r3 = *arg0;
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(temp_r3) + (0xE8)))[215])(temp_r3);
    fn_037b8284(arg0, &data_1011f8a8, 0);
}
