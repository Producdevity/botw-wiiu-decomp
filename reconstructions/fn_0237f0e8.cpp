#include "botw/safe_string.h"

extern "C" unsigned char data_10093f28[];
extern "C" unsigned char data_10093f34[];
extern "C" unsigned char data_10093f04[];
extern "C" unsigned char data_10093f10[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct RemainsWaterChaseBulletFall {
    unsigned char base[16];
    void* params[4];
};

extern "C" void fn_0237f0e8(RemainsWaterChaseBulletFall* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10093f28;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10093f34;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10093f04;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10093f10;
    }
    fn_030e9be0(self, &self->params[3], &key);
}
