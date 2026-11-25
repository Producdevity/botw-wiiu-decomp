#include "botw/safe_string.h"

extern "C" unsigned char data_101d4af8[];
extern "C" unsigned char data_101d4ad4[];
extern "C" unsigned char data_101d4b04[];
extern "C" unsigned char data_101d4b14[];
extern "C" unsigned char data_101d4ae8[];
extern "C" unsigned char data_101d4b28[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct PlayerMove {
    unsigned char base[20];
    void* params[6];
};

extern "C" void fn_02cb5f5c(PlayerMove* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_101d4af8;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d4ad4;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d4b04;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d4b14;
    }
    if (true) {
        fn_030e9be0(self, &self->params[3], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d4ae8;
    }
    if (true) {
        fn_030e9be0(self, &self->params[4], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d4b28;
    }
    fn_030e9be0(self, &self->params[5], &key);
}
