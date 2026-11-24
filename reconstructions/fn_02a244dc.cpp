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

extern "C" void fn_02a240a0(void*);
extern "C" int fn_030dff10(void*, void*);
extern "C" int fn_030e005c(void*, void*);
struct ProcAccessor;
extern "C" void* fn_030e0414(const ProcAccessor *);
extern "C" void fn_03626870(void*, void*, void*, void*, int);

extern "C" void fn_02a244dc(void *arg0, struct ProcAccessor *arg1) {
    s32 sp8;

    if (fn_030dff10(arg1, (char *) arg0 + 0xEC) == 0) {
        fn_02a240a0(arg0);
        if (fn_030e005c(arg1, (char *) arg0 + 0xEC) != 0) {
            sp8 = 0x080000B6;
            fn_03626870((char *) arg0 + 0x58, fn_030e0414(arg1), &sp8, NULL, 1);
        }
    }
}
