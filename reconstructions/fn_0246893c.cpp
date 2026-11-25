#include "botw/safe_string.h"

extern "C" unsigned char data_100bd284[];
extern "C" unsigned char data_100bd2b8[];
extern "C" unsigned char data_100bd28c[];
extern "C" unsigned char data_100bd2c4[];
extern "C" unsigned char data_100bd298[];
extern "C" unsigned char data_100bd2a4[];
extern "C" unsigned char data_100bd2d0[];
extern "C" unsigned char data_100bd2e4[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

struct WindControl {
    unsigned char base[132];
    void* params[8];
};

extern "C" void fn_0246893c(WindControl* self) {
    SafeString key;
    const SafeString* k = &key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_100bd284;
    if (true) {
        fn_030e9be0(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100bd2b8;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100bd28c;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100bd2c4;
    }
    if (true) {
        fn_030e9be0(self, &self->params[3], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100bd298;
    }
    if (true) {
        fn_030e9be0(self, &self->params[4], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100bd2a4;
    }
    if (true) {
        fn_030e9d18(self, &self->params[5], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100bd2d0;
    }
    if (true) {
        fn_030e9d18(self, &self->params[6], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100bd2e4;
    }
    fn_030e9aa8(self, &self->params[7], k);
}
