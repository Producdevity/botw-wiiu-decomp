#include "botw/safe_string.h"

extern "C" unsigned char data_10154c4c[];
extern "C" unsigned char data_10154c34[];
extern "C" unsigned char data_10154c2c[];
extern "C" unsigned char data_10154c40[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_028b1a38(void*);
extern "C" void fn_030e9c7c(void*, void*, void*);
extern "C" void fn_030ea03c(void*, void*, void*);
extern "C" void fn_030ea084(void*, void*, void*);

struct Fn028ab6fcSelf {
    unsigned char base[312];
    void* params[4];
};

extern "C" void fn_028ab6fc(Fn028ab6fcSelf* self) {
    SafeString key;
    SafeString* k = &key;
    fn_028b1a38(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_10154c4c;
    if (true) {
        fn_030e9c7c(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10154c34;
    }
    if (true) {
        fn_030e9c7c(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10154c2c;
    }
    if (true) {
        fn_030ea03c(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10154c40;
    }
    fn_030ea084(self, &self->params[3], k);
}
