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

extern "C" void fn_02e91174(void*);
extern "C" void* fn_0308e578(unsigned);

extern "C" M2C_UNK data_1021adf0;

extern "C" void *fn_02e991a8(void *arg0)
{
  void *var_r31;
  var_r31 = arg0;
  if ((var_r31 != 0) || ((var_r31 = fn_0308e578(0x48U), (var_r31 == 0) == 0)))
  {
    fn_02e91174(var_r31);
    *((M2C_UNK **) (((s8 *) var_r31) + 0x3C)) = &data_1021adf0;
    *((s32 *) (((s8 *) var_r31) + 0x40)) = 0;
    *((s32 *) (((s8 *) var_r31) + 0x44)) = 0;
  }
  return var_r31;
}
