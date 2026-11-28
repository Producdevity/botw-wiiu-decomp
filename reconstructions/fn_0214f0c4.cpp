#include "botw/safe_string.h"

extern "C" unsigned char data_1002e57c[];
extern "C" unsigned char data_1002e588[];
extern "C" unsigned char data_1002e594[];
extern "C" unsigned char data_1002e574[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);

struct Fn0214f0c4Self {
    unsigned char base[16];
    void* params[4];
};

extern "C" void fn_0214f0c4(Fn0214f0c4Self* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_1002e57c;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1002e588;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1002e594;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1002e574;
    }
    fn_030e9aa8(self, &self->params[3], &key);
}
