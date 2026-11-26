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

extern "C" void fn_02e1a728(void*, void*, void*);
extern "C" void fn_02e1a758(void*, void*, void*);

extern "C" void fn_0249c934(void *arg0, void *arg1)
{
  s8 *base = (s8 *) arg0;
  fn_02e1a728(*((void **) base), arg1, 0);
  fn_02e1a758(*((void **) (base + 4)), arg1, 0);
}
