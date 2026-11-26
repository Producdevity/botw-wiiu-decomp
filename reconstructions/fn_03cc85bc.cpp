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

extern "C" s32 fn_03cc85bc(void *arg0, s32 *arg1)
{
  u16 temp_r0;
  if ((arg0 == 0) || (arg1 == 0))
  {
    return -1;
  }
  if ((((u32) ((*((u16 *) (((s8 *) arg0) + 0))) - 3)) >= 9U) || ((((temp_r0, (((s32) (*((u16 *) (((s8 *) arg0) + 2)))) == 1) == 0)) && (((s32) (*((u16 *) (((s8 *) arg0) + 2)))) != 2)) && (((s32) (*((u16 *) (((s8 *) arg0) + 2)))) != 6)))
  {
    return -2;
  }
  *arg1 = 0x27CCC;
  return 0;
}
