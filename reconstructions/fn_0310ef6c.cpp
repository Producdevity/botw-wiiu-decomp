typedef signed char s8;
typedef int s32;
typedef unsigned int u32;

extern "C" unsigned* fn_0396bd98(unsigned *);
extern "C" int fn_0396c2bc(void*, void*, void*);
struct ByamlIter;
extern "C" bool fn_0396c450(const ByamlIter *, int *, const char *);

extern "C" s32 data_10280e40;
extern "C" s8 data_10280e4c;

extern "C" s32 fn_0310ef6c(void *arg0) {
    struct { s32 f8; u32 fC; } sp;

    fn_0396bd98(&sp.fC);
    if (fn_0396c2bc(arg0, &sp.fC, &data_10280e40) != 0) {
        sp.f8 = 0;
        if (fn_0396c450((struct ByamlIter *) &sp.fC, &sp.f8, (const char *)(&data_10280e4c)) != 0) {
            return 1;
        }
    }
    return 0;
}
