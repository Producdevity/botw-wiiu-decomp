#include "botw/safe_string.h"

extern "C" unsigned char data_100db5d8[];
extern "C" unsigned char data_100db5d0[];
extern "C" unsigned char data_100db5e4[];
extern "C" unsigned char data_100db5c8[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct Fn02547210Self {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_02547210(Fn02547210Self* self) {
    SafeString key;
    const SafeString* k = &key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_100db5d8;
    if (true) {
        fn_030e9b44(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100db5d0;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100db5e4;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100db5c8;
    }
    fn_030e9be0(self, &self->params[3], k);
}
