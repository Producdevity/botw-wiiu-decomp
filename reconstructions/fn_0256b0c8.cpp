#include "botw/safe_string.h"

extern "C" unsigned char data_100e1f3c[];
extern "C" unsigned char data_100e1f48[];
extern "C" unsigned char data_100e1f08[];
extern "C" unsigned char data_100e1f10[];
extern "C" unsigned char data_100e1f54[];
extern "C" unsigned char data_100e1f2c[];
extern "C" unsigned char data_100e1f20[];
extern "C" unsigned char data_100e1f60[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" void fn_030ea0cc(void*, void*, void*);

struct DominoRoot {
    unsigned char base[32];
    void* params[8];
};

extern "C" void fn_0256b0c8(DominoRoot* self) {
    SafeString key;
    SafeString* k = &key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_100e1f3c;
    if (true) {
        fn_030e9be0(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100e1f48;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100e1f08;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100e1f10;
    }
    if (true) {
        fn_030e9be0(self, &self->params[3], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100e1f54;
    }
    if (true) {
        fn_030e9be0(self, &self->params[4], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100e1f2c;
    }
    if (true) {
        fn_030e9d18(self, &self->params[5], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100e1f20;
    }
    if (true) {
        fn_030ea0cc(self, &self->params[6], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100e1f60;
    }
    fn_030ea0cc(self, &self->params[7], k);
}
