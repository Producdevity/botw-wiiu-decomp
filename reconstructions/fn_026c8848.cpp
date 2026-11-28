#include "botw/safe_string.h"

extern "C" unsigned char data_10112298[];
extern "C" unsigned char data_101122a4[];
extern "C" unsigned char data_101122b4[];
extern "C" unsigned char data_101122c0[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0289d7ec(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);

struct Fn026c8848Self {
    unsigned char base[112];
    void* params[4];
};

extern "C" void fn_026c8848(Fn026c8848Self* self) {
    SafeString key;
    SafeString* k = &key;
    fn_0289d7ec(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_10112298;
    if (true) {
        fn_030e9b44(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101122a4;
    }
    if (true) {
        fn_030e9b44(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101122b4;
    }
    if (true) {
        fn_030e9b44(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101122c0;
    }
    fn_030e9b44(self, &self->params[3], k);
}
