#include "botw/safe_string.h"

extern "C" unsigned char data_101d50b4[];
extern "C" unsigned char data_101d50e0[];
extern "C" unsigned char data_101d508c[];
extern "C" unsigned char data_101d50f4[];
extern "C" unsigned char data_101d5104[];
extern "C" unsigned char data_101d509c[];
extern "C" unsigned char data_101d50a8[];
extern "C" unsigned char data_101d5114[];
extern "C" unsigned char data_101d50c4[];
extern "C" unsigned char data_101d5124[];
extern "C" unsigned char data_101d50d0[];
extern "C" unsigned char data_101d5134[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct PlayerParashawlGlideBase {
    unsigned char base[20];
    void* params[12];
};

extern "C" void fn_02cb8a48(PlayerParashawlGlideBase* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_101d50b4;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d50e0;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d508c;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d50f4;
    }
    if (true) {
        fn_030e9be0(self, &self->params[3], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d5104;
    }
    if (true) {
        fn_030e9be0(self, &self->params[4], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d509c;
    }
    if (true) {
        fn_030e9be0(self, &self->params[5], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d50a8;
    }
    if (true) {
        fn_030e9be0(self, &self->params[6], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d5114;
    }
    if (true) {
        fn_030e9be0(self, &self->params[7], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d50c4;
    }
    if (true) {
        fn_030e9be0(self, &self->params[8], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d5124;
    }
    if (true) {
        fn_030e9be0(self, &self->params[9], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d50d0;
    }
    if (true) {
        fn_030e9be0(self, &self->params[10], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d5134;
    }
    fn_030e9be0(self, &self->params[11], &key);
}
