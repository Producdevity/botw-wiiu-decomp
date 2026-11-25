#include "botw/safe_string.h"

extern "C" unsigned char data_10032264[];
extern "C" unsigned char data_1003225c[];
extern "C" unsigned char data_10032270[];
extern "C" unsigned char data_10032254[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" void fn_030e9c7c(void*, void*, void*);

struct DirectToWindDirection {
    unsigned char base[16];
    void* params[4];
};

extern "C" void fn_021618f0(DirectToWindDirection* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10032264;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1003225c;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10032270;
    }
    if (true) {
        fn_030e9c7c(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10032254;
    }
    fn_030e9c7c(self, &self->params[3], &key);
}
