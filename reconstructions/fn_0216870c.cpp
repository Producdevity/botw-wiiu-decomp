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

extern "C" void * fn_02c1a1fc(void *, void *);
extern "C" void * fn_02c19cc4(void *);
extern "C" void * fn_031983c8(void *, void *);

extern "C" void fn_0216870c(void **arg0)
{
  void *temp_r31;
  void *temp_r3;
  void *temp_r3_2;
  temp_r3 = *arg0;
  temp_r31 = temp_r3;
  fn_02c1a1fc(temp_r31, 0);
  fn_02c19cc4(temp_r31);
  temp_r3 = *arg0;
  temp_r3_2 = (*((void *(**)(void *)) (((s8 *) (*((void **) (((s8 *) temp_r3) + 0xE8)))) + 0x30C)))(temp_r3);
  if (temp_r3_2 != 0)
  {
    fn_031983c8(temp_r3_2, 0);
  }
}
