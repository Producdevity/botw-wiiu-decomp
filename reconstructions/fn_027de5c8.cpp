#include "botw/safe_string.h"

extern "C" unsigned char data_10134d00[];
extern "C" unsigned char data_10134cd8[];
extern "C" unsigned char data_10134ccc[];
extern "C" unsigned char data_10134cbc[];
extern "C" unsigned char data_10134cec[];
extern "C" unsigned char data_10134d10[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct OctarockServiceHideWait {
    unsigned char base[32];
    void* params[6];
};

extern "C" void fn_027de5c8(OctarockServiceHideWait* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10134d00;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10134cd8;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10134ccc;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10134cbc;
    }
    if (true) {
        fn_030e9be0(self, &self->params[3], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10134cec;
    }
    if (true) {
        fn_030e9be0(self, &self->params[4], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10134d10;
    }
    fn_030e9be0(self, &self->params[5], &key);
}
