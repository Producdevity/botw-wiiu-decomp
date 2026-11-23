typedef int s32;
typedef float f32;

struct ThreadAllocatorContext;
extern "C" ThreadAllocatorContext** fn_0434d168(void *);
extern "C" unsigned char data_1045cc14[];

extern "C" f32 data_104116d4;

extern "C" void fn_041bc838(f32 *arg0) {
    void* const* vt1;
    f32 *var_r3;
    void **temp_r3;

    var_r3 = arg0;
    if ((var_r3 != 0) || (temp_r3 = (*(void ***)((char *)(*fn_0434d168(data_1045cc14)) + (0x2C))), var_r3 = ((f32 * (*)(void **, s32))(vt1 = *(void* const**)&(*temp_r3))[5])(temp_r3, 4), ((var_r3 == 0) == 0))) {
        *var_r3 = data_104116d4;
    }
}
