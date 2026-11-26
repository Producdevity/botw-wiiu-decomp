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
typedef s32 M2C_UNK;

extern "C" s32 fn_0294d674(s32, s32);
extern "C" void fn_037b8284(void *, const void *, void *);
extern "C" M2C_UNK data_10171378;
extern "C" M2C_UNK data_10171380;

inline s32 inline_fn(s32 arg0, s32 arg1)
{
  return fn_0294d674(arg0, arg1);
}

extern "C" void fn_02971a18(void *arg0, void *arg1)
{
  M2C_UNK *var_r30;
  var_r30 = &data_10171380;
  if (inline_fn(*((s32 *) (((s8 *) arg0) + 0)), *(*((s32 **) (((s8 *) arg0) + 0x20)))) != 0)
  {
    var_r30 = &data_10171378;
  }
  fn_037b8284(arg0, var_r30, arg1);
}
