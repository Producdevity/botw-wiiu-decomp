#include "botw/safe_string.h"

extern "C" unsigned char data_101d9dd4[];
extern "C" unsigned char data_101d9df0[];
extern "C" unsigned char data_101d9dfc[];
extern "C" unsigned char data_101d9de0[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct Fn02cdfc00Self {
    unsigned char base[20];
    void* params[4];
};

extern "C" void fn_02cdfc00(Fn02cdfc00Self* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_101d9dd4;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d9df0;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d9dfc;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d9de0;
    }
    fn_030e9be0(self, &self->params[3], &key);
}
