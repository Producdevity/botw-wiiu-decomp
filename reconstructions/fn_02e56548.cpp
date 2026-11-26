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

extern "C" void fn_0378dc60(int, int);

extern "C" void fn_02e56548(s32 arg0, s32 arg1, s32 arg2)
{
  s8 *object = (s8 *) arg0;
  fn_0378dc60(arg0, arg1);
  *((s32 *) (object + 0xC)) = arg2;
  *((s32 *) (object + 0x10)) = 2;
}
