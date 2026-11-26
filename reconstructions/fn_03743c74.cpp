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

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" s32 fn_03743c74(void *arg0)
{
  void *lock = (s8 *) arg0 + 0xE8;
  fn_030bb668(lock);
  s32 *counter = (s32 *) ((s8 *) arg0 + 0xE4);
  s32 count = *counter + 1;
  *counter = count;
  fn_030bb69c(lock);
  return count;
}
