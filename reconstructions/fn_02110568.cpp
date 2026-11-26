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
typedef s32 M2C_UNK;

extern "C" void fn_022f89fc(void*, void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_100241c4;
extern "C" M2C_UNK data_100241c8;

extern "C" void fn_02110568(void *arg0, void *arg1)
{
  f32 value = data_100241c4;
  fn_037946f0(arg0, (s32) (&data_100241c8), 0, 0, 0, value);
  fn_022f89fc(arg0, arg1);
}
