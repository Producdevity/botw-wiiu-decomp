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

extern "C" f32 data_10303380;
extern "C" f32 data_103033c8;

extern "C" void fn_03679850(void *arg0, f32 farg0)
{
  f32 temp_f12;
  temp_f12 = *((f32 *) (((s8 *) arg0) + 0x5E4));
  if (!(temp_f12 > data_103033c8))
  {
    if (farg0 > data_10303380)
    {
      if (farg0 < temp_f12)
      {
        return;
      }
      *((f32 *) (((s8 *) arg0) + 0x5E4)) = farg0;
      *((s32 *) (((s8 *) arg0) + 0x620)) = 4;
      return;
    }
    if (!((double) (farg0 > temp_f12)))
    {
      *((f32 *) (((s8 *) arg0) + 0x5E4)) = farg0;
      *((s32 *) (((s8 *) arg0) + 0x620)) = 4;
      return;
    }
    return;
  }
  *((f32 *) (((s8 *) arg0) + 0x5E4)) = farg0;
  *((s32 *) (((s8 *) arg0) + 0x620)) = 4;
}
