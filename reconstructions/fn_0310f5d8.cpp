#include "botw/safe_string.h"

extern "C" unsigned* fn_0396bd98(unsigned*);
extern "C" bool fn_0310e564(const void* self, unsigned* iter, const char* actor, bool x);
extern "C" const char* fn_0310f56c(const unsigned* iter, const char* key, const SafeString* fallback, int x);

extern "C" const unsigned char data_10263910;
extern "C" const char data_10280ecc[];
extern "C" const char data_10280ed4[];

extern "C" const char* fn_0310f5d8(const void* self, const char* actor) {
    unsigned iter[2];
    fn_0396bd98(iter);
    const char* dummy = data_10280ed4;
    if (fn_0310e564(self, iter, actor, true)) {
        SafeString fallback;
        if (true) {
            fallback.string = dummy;
            fallback.vtable = &data_10263910;
        }
        return fn_0310f56c(iter, data_10280ecc, &fallback, 1);
    }
    return dummy;
}
