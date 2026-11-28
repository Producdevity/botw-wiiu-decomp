#include "botw/safe_string.h"

extern "C" unsigned char data_1002e90c[];
extern "C" unsigned char data_1002e918[];
extern "C" unsigned char data_1002e928[];
extern "C" unsigned char data_1002e904[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);

struct Fn0214ffc4Self {
    unsigned char base[16];
    void* params[4];
};

extern "C" void fn_0214ffc4(Fn0214ffc4Self* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_1002e90c;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1002e918;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1002e928;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1002e904;
    }
    fn_030e9aa8(self, &self->params[3], &key);
}
