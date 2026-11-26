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

extern "C" void * fn_0307cd30(void *, void *);
extern "C" void fn_0307cda0(void *);
extern "C" void fn_030ea2e0(void *);
extern "C" void * fn_030747f8(void *);
extern "C" void fn_0307cd5c(void *, void *);

inline void *inline_fn(void *arg0, void **arg1)
{
  return fn_0307cd30(arg0, *arg1);
}

extern "C" void fn_022a907c(void *arg0)
{
  void *temp_r3;
  temp_r3 = inline_fn((char *) arg0 + 0x10, *((void ***) (((s8 *) arg0) + 0x18)));
  if (temp_r3 == 0)
  {
    fn_0307cda0((char *) arg0 + 0x10);
    fn_030ea2e0(arg0);
    return;
  }
  fn_030747f8(temp_r3);
  fn_0307cd5c((char *) arg0 + 0x10, *(*((void ***) (((s8 *) arg0) + 0x18))));
}
