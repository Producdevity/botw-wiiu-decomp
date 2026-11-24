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

extern "C" char * fn_035194bc();
extern "C" void * fn_03513434(void *);
extern "C" void * fn_03baa330(int);
extern "C" void * fn_03bad7fc(void *, void *);
extern "C" void * fn_03513838(void *, void *);

extern "C" void fn_0354efc8(void *arg0, void *arg1) {
    void *temp_r31;
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = fn_03513434(fn_035194bc());
    if (temp_r3 != NULL) {
        temp_r31 = M2C_FIELD(arg1, void **, 4);
        if (temp_r31 != NULL) {
            temp_r3_2 = fn_03baa330((s32) temp_r31);
            if (temp_r3_2 != NULL) {
                fn_03bad7fc(temp_r3_2, temp_r3);
                fn_03513838(temp_r3, temp_r31);
            }
        }
    }
}
