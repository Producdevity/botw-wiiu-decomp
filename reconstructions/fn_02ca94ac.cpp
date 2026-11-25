#include "botw/safe_string.h"

extern "C" unsigned char data_101d30f4[];
extern "C" unsigned char data_101d3100[];
extern "C" unsigned char data_101d3118[];
extern "C" unsigned char data_101d310c[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);

struct PlayerLandDamage {
    unsigned char base[20];
    void* params[4];
};

extern "C" void fn_02ca94ac(PlayerLandDamage* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_101d30f4;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d3100;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d3118;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d310c;
    }
    fn_030e9b44(self, &self->params[3], &key);
}
