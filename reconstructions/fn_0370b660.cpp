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
extern "C" void fn_03a4d518(void*);
extern "C" void fn_03a4d9f4(void*);

extern "C" M2C_UNK data_1030acb4;

extern "C" void *fn_0370b660(void *arg0)
{
  void *var_r29;
  void *var_r31;
  void *var_r3;
  var_r31 = arg0;
  if ((var_r31 != 0) || ((var_r31 = fn_0308e578(0x3CU), (var_r31 == 0) == 0)))
  {
    var_r3 = (char *) var_r31 + 4;
    *((s8 *) (((s8 *) var_r31) + 0)) = 0;
    if ((var_r3 != 0) || ((var_r3 = fn_0308e578(8U), (var_r3 == 0) == 0)))
    {
      *((s32 *) (((s8 *) var_r3) + 0)) = 0;
      *((s32 *) (((s8 *) var_r3) + 4)) = 0;
    }
    var_r29 = (char *) var_r31 + 0x10;
    *((s32 *) (((s8 *) var_r31) + 0xC)) = 0;
    if ((var_r29 != 0) || ((var_r29 = fn_0308e578(0x1CU), (var_r29 == 0) == 0)))
    {
      fn_03a4d9f4(var_r29);
      *((M2C_UNK **) (((s8 *) var_r29) + 0x18)) = &data_1030acb4;
    }
    fn_03a4d518((char *) var_r31 + 0x2C);
  }
  return var_r31;
}
