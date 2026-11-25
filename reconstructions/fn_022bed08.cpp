#include "botw/safe_string.h"

extern "C" unsigned char data_100741dc[];
extern "C" unsigned char data_100741e8[];
extern "C" unsigned char data_100741f8[];
extern "C" unsigned char data_10074208[];
extern "C" unsigned char data_10074218[];
extern "C" unsigned char data_100741d4[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

struct JumpMove {
    unsigned char base[16];
    void* params[6];
};

extern "C" void fn_022bed08(JumpMove* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_100741dc;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100741e8;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100741f8;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10074208;
    }
    if (true) {
        fn_030e9be0(self, &self->params[3], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10074218;
    }
    if (true) {
        fn_030e9be0(self, &self->params[4], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100741d4;
    }
    fn_030e9aa8(self, &self->params[5], &key);
}
