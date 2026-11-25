#include "botw/safe_string.h"

extern "C" unsigned char data_10164020[];
extern "C" unsigned char data_10164030[];
extern "C" unsigned char data_10164010[];
extern "C" unsigned char data_10163ff0[];
extern "C" unsigned char data_10164000[];
extern "C" unsigned char data_10163fe8[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" void fn_030e9ff4(void*, void*, const SafeString*);

struct SwitchWheel {
    unsigned char base[32];
    void* params[6];
};

extern "C" void fn_02917194(SwitchWheel* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10164020;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10164030;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10164010;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10163ff0;
    }
    if (true) {
        fn_030e9be0(self, &self->params[3], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10164000;
    }
    if (true) {
        fn_030e9d18(self, &self->params[4], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10163fe8;
    }
    fn_030e9ff4(self, &self->params[5], &key);
}
