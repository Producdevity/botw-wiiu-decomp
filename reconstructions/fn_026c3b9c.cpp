#include "botw/safe_string.h"

extern "C" unsigned char data_10111140[];
extern "C" unsigned char data_10111134[];
extern "C" unsigned char data_10111150[];
extern "C" unsigned char data_1011112c[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct Fn026c3b9cSelf {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_026c3b9c(Fn026c3b9cSelf* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10111140;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10111134;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10111150;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1011112c;
    }
    fn_030e9be0(self, &self->params[3], &key);
}
