#include "botw/safe_string.h"

extern "C" unsigned char data_10149024[];
extern "C" unsigned char data_10149038[];
extern "C" unsigned char data_1014904c[];
extern "C" unsigned char data_10149060[];
extern "C" unsigned char data_10149070[];
extern "C" unsigned char data_10149084[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" void fn_030ea284(void*, void*, void*);

struct RemainsWaterBattleRoot {
    unsigned char base[32];
    void* params[6];
};

extern "C" void fn_02864688(RemainsWaterBattleRoot* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10149024;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10149038;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1014904c;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10149060;
    }
    if (true) {
        fn_030e9be0(self, &self->params[3], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10149070;
    }
    if (true) {
        fn_030e9be0(self, &self->params[4], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10149084;
    }
    fn_030ea284(self, &self->params[5], &key);
}
