#include "botw/safe_string.h"

extern "C" unsigned char data_1010458c[];
extern "C" unsigned char data_10104574[];
extern "C" unsigned char data_10104564[];
extern "C" unsigned char data_101045a0[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct GolfBallRoot {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_02669564(GolfBallRoot* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_1010458c;
    if (true) {
        fn_030e9b44(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10104574;
    }
    if (true) {
        fn_030e9b44(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10104564;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101045a0;
    }
    fn_030e9be0(self, &self->params[3], &key);
}
