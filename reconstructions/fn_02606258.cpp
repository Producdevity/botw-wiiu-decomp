#include "botw/safe_string.h"

extern "C" unsigned char data_100f5388[];
extern "C" unsigned char data_100f5398[];
extern "C" unsigned char data_100f53bc[];
extern "C" unsigned char data_100f53a8[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);
extern "C" void fn_030e9ff4(void*, void*, const SafeString*);
extern "C" void fn_030ea284(void*, void*, void*);

struct EquipStand {
    unsigned char base[80];
    SafeString strings[2];
    void* params[2];
};

extern "C" void fn_02606258(EquipStand* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_100f5388;
    if (true) {
        fn_030e9aa8(self, &self->strings[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f5398;
    }
    if (true) {
        fn_030e9aa8(self, &self->strings[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f53bc;
    }
    if (true) {
        fn_030e9ff4(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f53a8;
    }
    fn_030ea284(self, &self->params[1], &key);
}
