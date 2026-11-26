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

extern "C" void fn_02e5658c(s32 arg0, s32 arg1)
{
  s32 first;
  fn_0378dc60(arg0, arg1);
  first = *((s32 *) (((s8 *) arg1) + 0xC));
  *((s32 *) (((s8 *) arg0) + 0xC)) = first;
  *((s32 *) (((s8 *) arg0) + 0x10)) = *((s32 *) (((s8 *) arg1) + 0x10));
}
