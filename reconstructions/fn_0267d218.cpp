typedef int s32;

extern "C" void fn_0294f720(void *, int, void *);

extern "C" void fn_0267d218(void **arg0) {
    void* const* vt1;
    void *temp_r3;

    temp_r3 = *arg0;
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(temp_r3) + (0xE8)))[255])(temp_r3);
    fn_0294f720(*arg0, 4, (char *)arg0 + 0x54);
}
