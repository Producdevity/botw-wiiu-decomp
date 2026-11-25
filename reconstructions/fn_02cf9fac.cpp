#include "botw/safe_string.h"

extern "C" unsigned char data_101dd864[];
extern "C" unsigned char data_101dd870[];
extern "C" unsigned char data_101dd84c[];
extern "C" unsigned char data_101dd87c[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct PlayerWaterFallJump {
    unsigned char base[20];
    void* params[4];
};

extern "C" void fn_02cf9fac(PlayerWaterFallJump* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_101dd864;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101dd870;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101dd84c;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101dd87c;
    }
    fn_030e9be0(self, &self->params[3], &key);
}
