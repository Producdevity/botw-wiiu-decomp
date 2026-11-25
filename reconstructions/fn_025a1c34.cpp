#include "botw/safe_string.h"

extern "C" unsigned char data_100e99a8[];
extern "C" unsigned char data_100e99bc[];
extern "C" unsigned char data_100e99d0[];
extern "C" unsigned char data_100e99e8[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

struct EnemyDefaultReaction {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_025a1c34(EnemyDefaultReaction* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_100e99a8;
    if (true) {
        fn_030e9b44(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100e99bc;
    }
    if (true) {
        fn_030e9b44(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100e99d0;
    }
    if (true) {
        fn_030e9b44(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100e99e8;
    }
    fn_030e9d18(self, &self->params[3], &key);
}
