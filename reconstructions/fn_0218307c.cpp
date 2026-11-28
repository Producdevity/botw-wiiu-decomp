#include "botw/safe_string.h"

extern "C" unsigned char data_10038878[];
extern "C" unsigned char data_10038884[];
extern "C" unsigned char data_10038890[];
extern "C" unsigned char data_10038870[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);

struct Fn0218307cSelf {
    unsigned char base[16];
    void* params[4];
};

extern "C" void fn_0218307c(Fn0218307cSelf* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10038878;
    if (true) {
        fn_030e9b44(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10038884;
    }
    if (true) {
        fn_030e9b44(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10038890;
    }
    if (true) {
        fn_030e9d18(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10038870;
    }
    fn_030e9aa8(self, &self->params[3], &key);
}
