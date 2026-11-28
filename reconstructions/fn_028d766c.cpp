#include "botw/safe_string.h"

extern "C" unsigned char data_10159c54[];
extern "C" unsigned char data_10159c6c[];
extern "C" unsigned char data_10159c80[];
extern "C" unsigned char data_10159c98[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_028c65a8(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);

struct Fn028d766cSelf {
    unsigned char base[144];
    void* params[4];
};

extern "C" void fn_028d766c(Fn028d766cSelf* self) {
    SafeString key;
    SafeString* k = &key;
    fn_028c65a8(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_10159c54;
    if (true) {
        fn_030e9b44(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10159c6c;
    }
    if (true) {
        fn_030e9b44(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10159c80;
    }
    if (true) {
        fn_030e9b44(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10159c98;
    }
    fn_030e9b44(self, &self->params[3], k);
}
