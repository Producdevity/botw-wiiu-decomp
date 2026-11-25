#include "botw/safe_string.h"

extern "C" unsigned char data_1000c3e0[];
extern "C" unsigned char data_1000c41c[];
extern "C" unsigned char data_1000c438[];
extern "C" unsigned char data_1000c3fc[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct DemoMotorcyclePutMaterials {
    unsigned char base[16];
    void* params[4];
};

extern "C" void fn_02072fe4(DemoMotorcyclePutMaterials* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_1000c3e0;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1000c41c;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1000c438;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1000c3fc;
    }
    fn_030e9be0(self, &self->params[3], &key);
}
