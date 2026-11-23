typedef int s32;

struct ThreadAllocatorContext;
extern "C" ThreadAllocatorContext** fn_0434d168(void *);
extern "C" unsigned char data_1045cc14[];

extern "C" void fn_0409a2e0(void) {
    void* const* vt1;
    void **temp_r3;

    temp_r3 = (*(void ***)((char *)(*fn_0434d168(data_1045cc14)) + (0x2C)));
    ((s32 (*)(void **, s32))(vt1 = *(void* const**)&(*temp_r3))[5])(temp_r3, 0x10);
}
