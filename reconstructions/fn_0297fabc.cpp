#include "botw/safe_string.h"

extern "C" unsigned char data_10173aa0[];
extern "C" unsigned char data_10173a94[];
extern "C" unsigned char data_10173aac[];
extern "C" unsigned char data_10173ab8[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02549d1c(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

struct Fn0297fabcSelf {
    unsigned char base[60];
    void* params[4];
};

extern "C" void fn_0297fabc(Fn0297fabcSelf* self) {
    SafeString key;
    SafeString* k = &key;
    fn_02549d1c(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_10173aa0;
    if (true) {
        fn_030e9be0(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10173a94;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10173aac;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10173ab8;
    }
    fn_030e9d18(self, &self->params[3], k);
}
