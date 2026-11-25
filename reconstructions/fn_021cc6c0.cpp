#include "botw/safe_string.h"

extern "C" unsigned char data_10045308[];
extern "C" unsigned char data_10045300[];
extern "C" unsigned char data_10045314[];
extern "C" unsigned char data_10045320[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct ExpandSensor {
    unsigned char base[16];
    void* params[4];
};

extern "C" void fn_021cc6c0(ExpandSensor* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10045308;
    if (true) {
        fn_030e9b44(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10045300;
    }
    if (true) {
        fn_030e9b44(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10045314;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10045320;
    }
    fn_030e9be0(self, &self->params[3], &key);
}
