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
typedef s32 M2C_UNK;

extern "C" void fn_0434bd70(void*);
extern "C" void fn_0434c1c0(void*);

extern "C" M2C_UNK (*data_105b88a0)();
extern "C" void *data_105b8914;
extern "C" void *data_105b8918;

extern "C" void fn_03c91cd0(void) {
    data_105b88a0();
    fn_0434c1c0(data_105b8918);
    fn_0434bd70(data_105b8914);
}
