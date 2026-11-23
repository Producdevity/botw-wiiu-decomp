typedef int s32;

extern "C" void fn_03ed2e08(void*, void*);
struct ThreadAllocatorContext;
extern "C" ThreadAllocatorContext** fn_0434d168(void *);
extern "C" unsigned char data_1045cc14[];

extern "C" s32 data_103fbe58;

extern "C" s32 **fn_03f6e4f4(s32 **arg0, s32 *arg1) {
    void* const* vt1;
    struct { s32 f8; } sp;
    s32 **var_r31;
    s32 temp_r30;
    void **temp_r3;

    var_r31 = arg0;
    temp_r30 = *arg1;
    if ((var_r31 != 0) || (temp_r3 = (*(void ***)((char *)(*fn_0434d168(data_1045cc14)) + (0x2C))), var_r31 = ((s32 ** (*)(void **, s32))(vt1 = *(void* const**)&(*temp_r3))[5])(temp_r3, 0x80), ((var_r31 == 0) == 0))) {
        sp.f8 = temp_r30;
        fn_03ed2e08(var_r31, &sp.f8);
        *var_r31 = &data_103fbe58;
    }
    return var_r31;
}
