#include "botw/safe_string.h"

extern "C" unsigned char data_10048110[];
extern "C" unsigned char data_10048120[];
extern "C" unsigned char data_100480fc[];
extern "C" unsigned char data_10048130[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

struct FlyingCharacterFreeFallBase {
    unsigned char base[16];
    void* params[4];
};

extern "C" void fn_021d84e4(FlyingCharacterFreeFallBase* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10048110;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10048120;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100480fc;
    }
    if (true) {
        fn_030e9d18(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10048130;
    }
    fn_030e9d18(self, &self->params[3], &key);
}
