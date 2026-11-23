typedef int s32;

struct ThreadAllocatorContext;
extern "C" ThreadAllocatorContext** fn_0434d168(void *);
extern "C" unsigned char data_1045cc14[];

extern "C" void fn_03f41590(void *arg0) {
    void* const* vt1;
    void **temp_r3;
    void *var_r3;

    var_r3 = arg0;
    if ((var_r3 != 0) || (temp_r3 = (*(void ***)((char *)(*fn_0434d168(data_1045cc14)) + (0x2C))), var_r3 = ((void * (*)(void **, s32))(vt1 = *(void* const**)&(*temp_r3))[5])(temp_r3, 0x40), ((var_r3 == 0) == 0))) {
        (*(s32 *)((char *)(var_r3) + (0xC))) = 0;
    }
}
