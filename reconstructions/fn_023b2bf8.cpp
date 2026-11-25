#include "botw/safe_string.h"

extern "C" unsigned char data_1009df00[];
extern "C" unsigned char data_1009df14[];
extern "C" unsigned char data_1009dedc[];
extern "C" unsigned char data_1009decc[];
extern "C" unsigned char data_1009def0[];
extern "C" unsigned char data_1009dec4[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct ShootingStartFlying {
    unsigned char base[16];
    void* params[6];
};

extern "C" void fn_023b2bf8(ShootingStartFlying* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_1009df00;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1009df14;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1009dedc;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1009decc;
    }
    if (true) {
        fn_030e9be0(self, &self->params[3], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1009def0;
    }
    if (true) {
        fn_030e9be0(self, &self->params[4], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1009dec4;
    }
    fn_030e9be0(self, &self->params[5], &key);
}
