#include "botw/safe_string.h"

extern "C" unsigned char data_101629d4[];
extern "C" unsigned char data_101629c8[];
extern "C" unsigned char data_101629b0[];
extern "C" unsigned char data_101629bc[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct SwimEnemyRoam {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_02912338(SwimEnemyRoam* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_101629d4;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101629c8;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101629b0;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101629bc;
    }
    fn_030e9be0(self, &self->params[3], &key);
}
