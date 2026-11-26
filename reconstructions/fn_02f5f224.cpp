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

extern "C" void fn_02f5f224(void *arg0)
{
  s32 var_r30;
  void *temp_r3;
  u32 var_r31;
  void *temp_r3_2;
  var_r30 = 0;
  loop_1:
  temp_r3 = *((void **) (((s8 *) ((arg0 + 0x1B74) + (var_r30 * 4))) + 0xC));

  (*((M2C_UNK (**)(void *)) (((s8 *) (*((void **) (((s8 *) temp_r3) + 0x14)))) + 0xCC)))(temp_r3);
  var_r30 += 1;
  if (var_r30 < 4)
  {
    ;
    loop_3:
    if ((var_r30 + 3) >= 0xBU)
    {
      temp_r3_2 = *((void **) (((s8 *) arg0) + 0x1B74));
      (*((M2C_UNK (**)(void *)) (((s8 *) (*((void **) (((s8 *) temp_r3_2) + 0x14)))) + 0xCC)))(temp_r3_2);
      var_r30 += 1;
      var_r31 += 1;
      if (var_r30 < 4)
      {
        goto loop_3;
      }
    }
    else
    {
      goto loop_1;
    }

  }
}
