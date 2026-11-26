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

struct LinearRamp;
extern "C" void fn_03bb572c(LinearRamp *, float);
struct LinearRamp;
extern "C" float fn_03bb57ac(LinearRamp *);
extern "C" const float data_103cbab4;

extern "C" void fn_03bb58e4(s32 arg0, void *arg1, void *arg2, void *arg3, f32 farg0, f32 farg1)
{
  f32 temp_f12;
  f32 var_f2;
  var_f2 = farg1;
  if (!(data_103cbab4 > var_f2))
  {
    temp_f12 = *((f32 *) (((s8 *) arg0) + 0));
    *((f32 *) (((s8 *) arg0) + 8)) = farg0;
    if ((farg0 == (*((f32 *) (((s8 *) arg0) + 0)))) || (var_f2 == data_103cbab4))
    {
      fn_03bb572c((struct LinearRamp *) arg0, farg0);
      return;
    }
    if (!((farg0 - temp_f12) > data_103cbab4))
    {
      var_f2 = -var_f2;
    }
    *((f32 *) (((s8 *) arg0) + 0xC)) = var_f2;
    *((f32 *) (((s8 *) arg0) + 4)) = fn_03bb57ac((struct LinearRamp *) arg0);
  }
}
