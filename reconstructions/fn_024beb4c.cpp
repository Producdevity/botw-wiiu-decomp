#include "botw/safe_string.h"

extern "C" unsigned char data_100c6ca8[];
extern "C" unsigned char data_100c6c90[];
extern "C" unsigned char data_100c6c80[];
extern "C" unsigned char data_100c6cb8[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

struct AddCarriedBase {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_024beb4c(AddCarriedBase* self) {
    SafeString key;
    const SafeString* k = &key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_100c6ca8;
    if (true) {
        fn_030e9be0(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100c6c90;
    }
    if (true) {
        fn_030e9d18(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100c6c80;
    }
    if (true) {
        fn_030e9d18(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100c6cb8;
    }
    fn_030e9aa8(self, &self->params[3], k);
}
