#include "botw/safe_string.h"

extern "C" unsigned char data_10074bcc[];
extern "C" unsigned char data_10074bf4[];
extern "C" unsigned char data_10074c04[];
extern "C" unsigned char data_10074be8[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_024468d0(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

struct KeepPosInWater {
    unsigned char base[44];
    void* params[4];
};

extern "C" void fn_022c29a8(KeepPosInWater* self) {
    SafeString key;
    const SafeString* k = &key;
    fn_024468d0(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_10074bcc;
    if (true) {
        fn_030e9be0(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10074bf4;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10074c04;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10074be8;
    }
    fn_030e9aa8(self, &self->params[3], k);
}
