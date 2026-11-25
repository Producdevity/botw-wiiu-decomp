#include "botw/safe_string.h"

extern "C" unsigned char data_10055498[];
extern "C" unsigned char data_100554a4[];
extern "C" unsigned char data_10055490[];
extern "C" unsigned char data_100554b4[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0221da1c(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

struct ForkLodNoCountTimer {
    unsigned char base[24];
    void* params[4];
};

extern "C" void fn_022111ac(ForkLodNoCountTimer* self) {
    SafeString key;
    const SafeString* k = &key;
    fn_0221da1c(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_10055498;
    if (true) {
        fn_030e9b44(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100554a4;
    }
    if (true) {
        fn_030e9b44(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10055490;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100554b4;
    }
    fn_030e9d18(self, &self->params[3], k);
}
