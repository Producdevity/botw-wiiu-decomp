// First-pass m2c draft from the local original. A guess to edit until `check` matches; not evidence of types or intent.
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
#define NULL 0
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK;

struct ThreadAllocatorContext;
extern "C" ThreadAllocatorContext** fn_0434d168(void *);
extern "C" unsigned char data_1045cc14[];

extern "C" void fn_0417246c(s32 *arg0) {
    s32 *var_r3;
    void **temp_r3;

    var_r3 = arg0;
    if ((var_r3 != NULL) || (temp_r3 = M2C_FIELD(*fn_0434d168(data_1045cc14), void ***, 0x2C), var_r3 = M2C_FIELD(*temp_r3, s32 *(**)(void **, M2C_UNK), 0x14)(temp_r3, 4), ((var_r3 == NULL) == 0))) {
        *var_r3 = 2;
    }
}
