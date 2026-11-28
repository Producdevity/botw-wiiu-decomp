#include "botw/safe_string.h"

extern "C" unsigned char data_100c87a8[];
extern "C" unsigned char data_100c87bc[];
extern "C" unsigned char data_100c87d0[];
extern "C" unsigned char data_100c87e0[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_025e83dc(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" void fn_030ea284(void*, void*, void*);

struct Fn024c88b4Self {
    unsigned char base[304];
    void* params[4];
};

extern "C" void fn_024c88b4(Fn024c88b4Self* self) {
    SafeString key;
    SafeString* k = &key;
    fn_025e83dc(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_100c87a8;
    if (true) {
        fn_030e9be0(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100c87bc;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100c87d0;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100c87e0;
    }
    fn_030ea284(self, &self->params[3], k);
}
