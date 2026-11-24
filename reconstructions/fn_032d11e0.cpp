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

extern "C" void fn_032d2480(void*);
extern "C" void fn_034666c4(void *);
extern "C" void fn_03479bc8(void *, void *);
extern "C" void * data_1046fe50;

extern "C" void fn_032d11e0(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4;

    fn_032d2480(arg0);
    if ((s32) M2C_FIELD(arg0, u8 *, 0x30) != 0) {
        temp_r3 = M2C_FIELD(arg0, void **, 0);
        temp_r3_2 = M2C_FIELD(M2C_FIELD(temp_r3, void **, 0xE8), void *(**)(void *), 0x16C)(temp_r3);
        if (temp_r3_2 != NULL) {
            fn_034666c4(temp_r3_2);
        }
        M2C_FIELD(arg0, u8 *, 0x30) = 0U;
    }
    temp_r4 = M2C_FIELD(arg0, void **, 0x2C);
    if (temp_r4 != NULL) {
        fn_03479bc8(data_1046fe50, temp_r4);
        M2C_FIELD(arg0, void **, 0x2C) = NULL;
    }
}
