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

extern "C" void fn_032e0620(void*);
extern "C" void fn_032f9348(void*, void*);

extern "C" s32 fn_032e07b8(void *arg0, void *arg1)
{
  *((void **) ((s8 *) arg0 + 4)) = arg1;
  fn_032f9348((s8 *) arg0 + 8, *((void **) ((s8 *) arg1 + 0x394)));
  s32 *a = (s32 *) ((s8 *) arg0 + 0xF4);
  s32 *b = (s32 *) ((s8 *) arg0 + 0xF8);
  *a = 0;
  *b = 0;
  fn_032e0620(arg0);
  return 1;
}
