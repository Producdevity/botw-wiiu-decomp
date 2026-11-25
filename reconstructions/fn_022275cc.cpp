#include "botw/safe_string.h"

extern "C" unsigned char data_1005b270[];
extern "C" unsigned char data_1005b298[];
extern "C" unsigned char data_1005b2a4[];
extern "C" unsigned char data_1005b2b4[];
extern "C" unsigned char data_1005b278[];
extern "C" unsigned char data_1005b284[];
extern "C" unsigned char data_1005b2c4[];
extern "C" unsigned char data_1005b2d4[];
extern "C" unsigned char data_1005b2e4[];
extern "C" unsigned char data_1005b2f4[];
extern "C" unsigned char data_1005b30c[];
extern "C" unsigned char data_1005b31c[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

struct ForkTurn {
    unsigned char base[16];
    void* params[12];
};

extern "C" void fn_022275cc(ForkTurn* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_1005b270;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005b298;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005b2a4;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005b2b4;
    }
    if (true) {
        fn_030e9be0(self, &self->params[3], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005b278;
    }
    if (true) {
        fn_030e9be0(self, &self->params[4], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005b284;
    }
    if (true) {
        fn_030e9be0(self, &self->params[5], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005b2c4;
    }
    if (true) {
        fn_030e9d18(self, &self->params[6], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005b2d4;
    }
    if (true) {
        fn_030e9d18(self, &self->params[7], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005b2e4;
    }
    if (true) {
        fn_030e9d18(self, &self->params[8], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005b2f4;
    }
    if (true) {
        fn_030e9d18(self, &self->params[9], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005b30c;
    }
    if (true) {
        fn_030e9d18(self, &self->params[10], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005b31c;
    }
    fn_030e9d18(self, &self->params[11], &key);
}
