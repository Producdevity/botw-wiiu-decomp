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

extern "C" int fn_03a2fe80(int, void *, int);

extern "C" M2C_UNK data_102229f8;
extern "C" M2C_UNK data_102229fc;

extern "C" void fn_02f0974c(void *arg0, s32 arg1)
{
  s32 temp_r3;
  s32 temp_r3_2;
  if (arg1 != 0)
  {
    *((s32 *) (((s8 *) arg0) + 0)) = arg1;
    temp_r3 = fn_03a2fe80(arg1, &data_102229fc, 1);
    *((s32 *) (((s8 *) arg0) + 4)) = temp_r3;
    if (temp_r3 != 0)
    {
      (*((M2C_UNK (**)()) (((s8 *) (*((void **) (((s8 *) ((long long) temp_r3)) + 0x14)))) + 0xCC)))();
    }
    temp_r3_2 = fn_03a2fe80(*((s32 *) (((s8 *) arg0) + 0)), &data_102229f8, 1);
    *((s32 *) (((s8 *) arg0) + 8)) = temp_r3_2;
    if (temp_r3_2 != 0)
    {
      (*((M2C_UNK (**)()) (((s8 *) (*((void **) (((s8 *) temp_r3_2) + 0x14)))) + 0xCC)))();
    }
  }
}
