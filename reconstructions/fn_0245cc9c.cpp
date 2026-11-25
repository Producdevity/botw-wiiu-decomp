#include "botw/safe_string.h"

extern "C" unsigned char data_100baee4[];
extern "C" unsigned char data_100baef4[];
extern "C" unsigned char data_100baed8[];
extern "C" unsigned char data_100baf00[];
extern "C" unsigned char data_100baf10[];
extern "C" unsigned char data_100baf24[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

struct WaterFloatBase {
    unsigned char base[16];
    void* params[6];
};

extern "C" void fn_0245cc9c(WaterFloatBase* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_100baee4;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100baef4;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100baed8;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100baf00;
    }
    if (true) {
        fn_030e9be0(self, &self->params[3], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100baf10;
    }
    if (true) {
        fn_030e9be0(self, &self->params[4], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100baf24;
    }
    fn_030e9d18(self, &self->params[5], &key);
}
