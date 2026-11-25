#include "botw/safe_string.h"

extern "C" unsigned char data_10169b80[];
extern "C" unsigned char data_10169ba0[];
extern "C" unsigned char data_10169bb4[];
extern "C" unsigned char data_10169b90[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct TemperatureRandSelect {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_02933540(TemperatureRandSelect* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10169b80;
    if (true) {
        fn_030e9b44(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10169ba0;
    }
    if (true) {
        fn_030e9b44(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10169bb4;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10169b90;
    }
    fn_030e9be0(self, &self->params[3], &key);
}
