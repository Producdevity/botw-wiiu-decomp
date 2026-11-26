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

extern "C" void* fn_03bbe6f4(void *);

extern "C" void fn_03bbfa3c(void *arg0)
{
  void *var_r10;
  var_r10 = *((void **) (4 + ((s8 *) arg0)));
  *((s32 *) (((s8 *) arg0) + 0x24)) = 0;
  if (var_r10 != 0)
  {
    do
    {
      s32 temp_r0;
      temp_r0 = *((s32 *) (((s8 *) (*((void **) (((s8 *) var_r10) + 0xF4)))) + 0x10));
      if ((*((s32 *) (((s8 *) (*((void **) (((s8 *) var_r10) + 0xF4)))) + 0x10))) != 0)
      {
        *((s32 *) (((s8 *) arg0) + 0x24)) = temp_r0;
      }
      var_r10 = fn_03bbe6f4(var_r10);
    }
    while (var_r10 != 0);
  }
}
