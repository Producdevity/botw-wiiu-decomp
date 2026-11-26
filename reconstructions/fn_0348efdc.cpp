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

struct Body;
struct BodyOwner;
extern "C" Body* fn_0348cbf8(const BodyOwner *);

inline u32 inline_fn(struct BodyOwner *arg0)
{
  return *((u32 *) (((s8 *) fn_0348cbf8(arg0)) + 0x98));
}
extern "C" s32 fn_0348efdc(struct BodyOwner *arg0)
{
  u32 flags;
  if ((((u8) (((*((s32 *) (((s8 *) arg0) + 0x50))) & 1) ^ 1)) != 0) && (((s32) (*((s32 *) (((s8 *) arg0) + 0x80)))) != 0))
  {
    flags = ((u32) inline_fn(arg0)) >> 8U;
    return flags & 1;
  }
  return 0;
}
