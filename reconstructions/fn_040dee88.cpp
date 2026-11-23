typedef int s32;

struct ThreadAllocatorContext;
extern "C" ThreadAllocatorContext** fn_0434d168(void *);
extern "C" unsigned char data_1045cc14[];

extern "C" void fn_040dee88(s32 arg0, s32 arg1) {
    void* const* vt1;
    void **temp_r3;

    temp_r3 = (*(void ***)((char *)(*fn_0434d168(data_1045cc14)) + (0x28)));
    ((s32 (*)(void **, s32, s32))(vt1 = *(void* const**)&(*temp_r3))[7])(temp_r3, arg0, arg1 * 4);
}
