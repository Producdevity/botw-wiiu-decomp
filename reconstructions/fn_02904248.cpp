#include "botw/safe_string.h"

extern "C" unsigned char data_1016027c[];
extern "C" unsigned char data_10160238[];
extern "C" unsigned char data_10160244[];
extern "C" unsigned char data_1016025c[];
extern "C" unsigned char data_1016026c[];
extern "C" unsigned char data_10160250[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

struct StraightMove {
    unsigned char base[32];
    void* params[6];
};

extern "C" void fn_02904248(StraightMove* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_1016027c;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10160238;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10160244;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1016025c;
    }
    if (true) {
        fn_030e9be0(self, &self->params[3], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1016026c;
    }
    if (true) {
        fn_030e9be0(self, &self->params[4], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10160250;
    }
    fn_030e9d18(self, &self->params[5], &key);
}
