#include "botw/safe_string.h"

extern "C" unsigned char data_100150ac[];
extern "C" unsigned char data_100150b4[];
extern "C" unsigned char data_100150bc[];
extern "C" unsigned char data_100150cc[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" void fn_030ea03c(void*, void*, void*);
extern "C" void fn_030ea23c(void*, void*, void*);

struct Fn020b49a0Self {
    unsigned char base[16];
    void* params[4];
};

extern "C" void fn_020b49a0(Fn020b49a0Self* self) {
    SafeString key;
    SafeString* k = &key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_100150ac;
    if (true) {
        fn_030e9b44(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100150b4;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100150bc;
    }
    if (true) {
        fn_030ea03c(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100150cc;
    }
    fn_030ea23c(self, &self->params[3], k);
}
