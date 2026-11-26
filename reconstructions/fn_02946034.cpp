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

extern "C" void fn_02945e7c(void*);
extern "C" void fn_02945fe8(void * *);
extern "C" void fn_02c1a5fc(void *);
extern "C" void fn_0339a080(void *);
extern "C" void fn_03485f68(void *);
extern "C" void fn_03796ed8(void*);
extern "C" void fn_0383eb7c(void*, int);
extern "C" void fn_03985a50(void *, int, void *);

extern "C" void fn_02946034(void **arg0)
{
  void *temp_r3;
  fn_02945e7c(arg0);
  fn_0383eb7c(*arg0, 2);
  fn_02945fe8(arg0);
  fn_03796ed8(*arg0);
  fn_03985a50(*((void **) (((s8 *) (*arg0)) + 0x330)), 0, 0);
  temp_r3 = *((void **) (((s8 *) (*arg0)) + 0xF4));
  if (temp_r3 != 0)
  {
    fn_03485f68(*((void **) (((s8 *) (*arg0)) + 0xF4)));
  }
  fn_02c1a5fc(*arg0);
  fn_0339a080(*arg0);
}
