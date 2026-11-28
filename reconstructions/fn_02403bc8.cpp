#include "botw/safe_string.h"

extern "C" unsigned char data_100aace4[];
extern "C" unsigned char data_100aacec[];
extern "C" unsigned char data_100aad08[];
extern "C" unsigned char data_100aad24[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct Fn02403bc8Self {
    unsigned char base[16];
    void* params[4];
};

extern "C" void fn_02403bc8(Fn02403bc8Self* self) {
    SafeString key;
    const SafeString* k = &key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_100aace4;
    if (true) {
        fn_030e9b44(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100aacec;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100aad08;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100aad24;
    }
    fn_030e9be0(self, &self->params[3], k);
}
