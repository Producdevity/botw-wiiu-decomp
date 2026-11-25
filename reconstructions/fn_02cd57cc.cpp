#include "botw/safe_string.h"

extern "C" unsigned char data_101d872c[];
extern "C" unsigned char data_101d8718[];
extern "C" unsigned char data_101d8740[];
extern "C" unsigned char data_101d8754[];
extern "C" unsigned char data_101d8768[];
extern "C" unsigned char data_101d8778[];
extern "C" unsigned char data_101d8788[];
extern "C" unsigned char data_101d8798[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct PlayerSlide {
    unsigned char base[20];
    void* params[8];
};

extern "C" void fn_02cd57cc(PlayerSlide* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_101d872c;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d8718;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d8740;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d8754;
    }
    if (true) {
        fn_030e9be0(self, &self->params[3], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d8768;
    }
    if (true) {
        fn_030e9be0(self, &self->params[4], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d8778;
    }
    if (true) {
        fn_030e9be0(self, &self->params[5], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d8788;
    }
    if (true) {
        fn_030e9be0(self, &self->params[6], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d8798;
    }
    fn_030e9be0(self, &self->params[7], &key);
}
