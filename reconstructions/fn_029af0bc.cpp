#include "botw/safe_string.h"

extern "C" unsigned char data_10178cb8[];
extern "C" unsigned char data_10178cb0[];
extern "C" unsigned char data_10178cc8[];
extern "C" unsigned char data_10178cd8[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff7a8(void*, void*, void*);
extern "C" void fn_030ff810(void*, void*, const SafeString*);

struct Fn029af0bcSelf {
    unsigned char base[20];
    void* params[4];
};

extern "C" void fn_029af0bc(Fn029af0bcSelf* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10178cb8;
    if (true) {
        fn_030ff7a8(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10178cb0;
    }
    if (true) {
        fn_030ff7a8(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10178cc8;
    }
    if (true) {
        fn_030ff7a8(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10178cd8;
    }
    fn_030ff810(self, &self->params[3], &key);
}
