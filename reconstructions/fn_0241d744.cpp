#include "botw/safe_string.h"

extern "C" unsigned char data_100afb24[];
extern "C" unsigned char data_100afb34[];
extern "C" unsigned char data_100afb40[];
extern "C" unsigned char data_100afb4c[];
extern "C" unsigned char data_100afb58[];
extern "C" unsigned char data_100afb68[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct TakeoffFromCeilLook {
    unsigned char base[16];
    void* params[6];
};

extern "C" void fn_0241d744(TakeoffFromCeilLook* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_100afb24;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100afb34;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100afb40;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100afb4c;
    }
    if (true) {
        fn_030e9be0(self, &self->params[3], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100afb58;
    }
    if (true) {
        fn_030e9be0(self, &self->params[4], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100afb68;
    }
    fn_030e9be0(self, &self->params[5], &key);
}
