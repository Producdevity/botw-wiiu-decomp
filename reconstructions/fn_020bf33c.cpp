#include "botw/safe_string.h"

extern "C" unsigned char data_100167a4[];
extern "C" unsigned char data_10016798[];
extern "C" unsigned char data_100167b0[];
extern "C" unsigned char data_100167bc[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02357398(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

struct Fn020bf33cSelf {
    unsigned char base[52];
    void* params[4];
};

extern "C" void fn_020bf33c(Fn020bf33cSelf* self) {
    SafeString key;
    SafeString* k = &key;
    fn_02357398(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_100167a4;
    if (true) {
        fn_030e9be0(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10016798;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100167b0;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100167bc;
    }
    fn_030e9d18(self, &self->params[3], k);
}
