#include "botw/safe_string.h"

extern "C" unsigned char data_100be090[];
extern "C" unsigned char data_100be0a0[];
extern "C" unsigned char data_100be07c[];
extern "C" unsigned char data_100be0b0[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_022e139c(void *arg0);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

struct Fn0246c84cSelf {
    unsigned char base[220];
    void* params[4];
};

extern "C" void fn_0246c84c(Fn0246c84cSelf* self) {
    SafeString key;
    SafeString* k = &key;
    fn_022e139c(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_100be090;
    if (true) {
        fn_030e9be0(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100be0a0;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100be07c;
    }
    if (true) {
        fn_030e9d18(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100be0b0;
    }
    fn_030e9d18(self, &self->params[3], k);
}
