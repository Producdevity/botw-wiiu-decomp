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
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" f32 data_102e94d8;
extern "C" f32 data_102e95ec;

extern "C" f32 fn_035bd048(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) & 0x220) {
        return data_102e95ec;
    }
    return data_102e94d8;
}
