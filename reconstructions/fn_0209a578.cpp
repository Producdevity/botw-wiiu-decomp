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

extern "C" void fn_03c6fe5c(void*, int);

extern "C" void fn_0209a578(void *arg0, void *arg1, void *arg2)
{
  fn_03c6fe5c((s8 *) arg0 + 0x8C, (int) arg1);
  *(f32 *) ((s8 *) arg1 + 0xC) = *(f32 *) ((s8 *) arg0 + 0xF8);
  *(f32 *) ((s8 *) arg1 + 0x1C) = *(f32 *) ((s8 *) arg0 + 0xFC);
  f32 z = *(f32 *) ((s8 *) arg0 + 0x100);
  *(f32 *) ((s8 *) arg1 + 0x2C) = z;
}
