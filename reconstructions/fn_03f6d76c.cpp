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

extern "C" s32 fn_03f6d76c(void *arg0)
{
  f32 temp_f0;
  f32 temp_f0_2;
  f32 var_f12;
  s32 var_r0;
  f32 var_f13;
  s32 var_r12;
  temp_f0 = *((f32 *) (((s8 *) arg0) + 4));
  var_f13 = *((f32 *) (((s8 *) arg0) + 0));
  var_r0 = 0;
  if (!(var_f13 > temp_f0))
  {
    var_f13 = temp_f0;
    var_r0 = 1;
  }
  var_f12 = *((f32 *) (((s8 *) arg0) + 8));
  temp_f0_2 = *((f32 *) (((s8 *) arg0) + 0xC));
  var_r12 = 2;
  if (!(var_f12 > temp_f0_2))
  {
    var_f12 = temp_f0_2;
    var_r12 = 3;
  }
  if (!(var_f13 > var_f12))
  {
    return var_r12;
  }
  return var_r0;
}
