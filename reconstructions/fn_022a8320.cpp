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

extern "C" void fn_02a0cc4c(void*, void*);

extern "C" s32 fn_022a8320(void *arg0)
{
  void *temp_r3;
  if (((*((void **) (((s8 *) arg0) + 0x14))) != 0) && (((u8) (((*((s32 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x14)))) + 0x18))) & 1) ^ 1)) != 0))
  {
    fn_02a0cc4c(*((void **) (((s8 *) arg0) + 0x14)), *((void **) (temp_r3 = ((s8 *) arg0) + 0)));
  }
  return 1;
}
