#include "botw/byaml_iter.h"

typedef signed char s8;
typedef int s32;
typedef unsigned int u32;

extern "C" unsigned* fn_0396bd98(unsigned *);
extern "C" bool fn_0396c2bc(const ByamlIter* iter, ByamlData* data, const char* key);
extern "C" bool fn_0396c450(const ByamlIter *, int *, const char *);

extern "C" s32 data_10280e64;
extern "C" s8 data_10280e58;

extern "C" s32 fn_0310eff8(void *root) {
    struct { s32 value; u32 child; } sp;

    fn_0396bd98(&sp.child);
    if (fn_0396c2bc((const ByamlIter *) root, (ByamlData *) &sp.child, (const char *) &data_10280e64) != 0) {
        sp.value = 0;
        if (fn_0396c450((struct ByamlIter *) &sp.child, &sp.value, (const char *)(&data_10280e58)) != 0) {
            return 1;
        }
    }
    return 0;
}
