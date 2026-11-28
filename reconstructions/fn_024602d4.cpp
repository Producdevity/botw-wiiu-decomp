#include "botw/safe_string.h"

extern "C" unsigned char data_100bbbe4[];
extern "C" unsigned char data_100bbc00[];
extern "C" unsigned char data_100bbbcc[];
extern "C" unsigned char data_100bbc1c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0245f7c4(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct Fn024602d4Self {
    unsigned char base[96];
    void* params[4];
};

extern "C" void fn_024602d4(Fn024602d4Self* self) {
    SafeString key;
    SafeString* k = &key;
    fn_0245f7c4(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_100bbbe4;
    if (true) {
        fn_030e9be0(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100bbc00;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100bbbcc;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100bbc1c;
    }
    fn_030e9be0(self, &self->params[3], k);
}
