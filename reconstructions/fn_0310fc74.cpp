typedef signed char s8;
typedef int s32;

struct ByamlIter;
extern "C" bool fn_0396c450(const ByamlIter *, int *, const char *);

extern "C" s32 fn_0310fc74(struct ByamlIter *arg0, s8 *arg1, s32 arg2) {
    struct { s32 f8; } sp;

    if (fn_0396c450(arg0, &sp.f8, (const char *)(arg1)) != 0) {
        return sp.f8;
    }
    return arg2;
}
