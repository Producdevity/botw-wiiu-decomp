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

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_039298f4(void*);

extern "C" M2C_UNK data_10339a10;

extern "C" void *fn_03928f44(void *arg0)
{
  void *var_r31;
  var_r31 = arg0;
  if ((var_r31 != 0) || ((var_r31 = fn_0308e578(0x2CU), (var_r31 == 0) == 0)))
  {
    fn_039298f4(var_r31);
    *((M2C_UNK **) (((s8 *) var_r31) + 0x20)) = &data_10339a10;
    *((s32 *) (((s8 *) var_r31) + 0x24)) = 0;
    *((s32 *) (((s8 *) var_r31) + 0x28)) = 0;
  }
  return var_r31;
}
