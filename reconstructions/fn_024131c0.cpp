#include "botw/safe_string.h"

extern "C" unsigned char data_100adb58[];
extern "C" unsigned char data_100adb68[];
extern "C" unsigned char data_100adb4c[];
extern "C" unsigned char data_100adb44[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_022c4d7c(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);

struct Fn024131c0Self {
    unsigned char base[92];
    void* params[4];
};

extern "C" void fn_024131c0(Fn024131c0Self* self) {
    SafeString key;
    SafeString* k = &key;
    fn_022c4d7c(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_100adb58;
    if (true) {
        fn_030e9be0(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100adb68;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100adb4c;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100adb44;
    }
    fn_030e9aa8(self, &self->params[3], k);
}
