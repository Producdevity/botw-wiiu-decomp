#include "botw/safe_string.h"

extern "C" unsigned char data_10019fc8[];
extern "C" unsigned char data_10019fd8[];
extern "C" unsigned char data_10019fe8[];
extern "C" unsigned char data_10019fc0[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);

struct Fn020d3e54Self {
    unsigned char base[16];
    void* params[4];
};

extern "C" void fn_020d3e54(Fn020d3e54Self* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10019fc8;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10019fd8;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10019fe8;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10019fc0;
    }
    fn_030e9aa8(self, &self->params[3], &key);
}
