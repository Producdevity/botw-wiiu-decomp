#include "botw/safe_string.h"

extern "C" unsigned char data_100d257c[];
extern "C" unsigned char data_100d2594[];
extern "C" unsigned char data_100d25a4[];
extern "C" unsigned char data_100d2588[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_025c6c6c(void*);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

struct Fn02507e5cSelf {
    unsigned char base[676];
    void* params[4];
};

extern "C" void fn_02507e5c(Fn02507e5cSelf* self) {
    SafeString key;
    SafeString* k = &key;
    fn_025c6c6c(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_100d257c;
    if (true) {
        fn_030e9d18(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100d2594;
    }
    if (true) {
        fn_030e9d18(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100d25a4;
    }
    if (true) {
        fn_030e9d18(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100d2588;
    }
    fn_030e9d18(self, &self->params[3], k);
}
