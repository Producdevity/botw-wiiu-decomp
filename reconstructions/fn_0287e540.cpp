#include "botw/safe_string.h"

extern "C" unsigned char data_1014c898[];
extern "C" unsigned char data_1014c8a4[];
extern "C" unsigned char data_1014c8b4[];
extern "C" unsigned char data_1014c888[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct SandwormBattle {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_0287e540(SandwormBattle* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_1014c898;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1014c8a4;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1014c8b4;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1014c888;
    }
    fn_030e9be0(self, &self->params[3], &key);
}
