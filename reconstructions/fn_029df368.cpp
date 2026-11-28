#include "botw/safe_string.h"

extern "C" unsigned char data_101835b8[];
extern "C" unsigned char data_101835c0[];
extern "C" unsigned char data_101835cc[];
extern "C" unsigned char data_101835d8[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff7a8(void*, void*, void*);
extern "C" void fn_030ff810(void*, void*, const SafeString*);

struct Fn029df368Self {
    unsigned char base[20];
    void* params[4];
};

extern "C" void fn_029df368(void* object) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_101835b8;
    if (true) {
        fn_030ff7a8(object, &static_cast<Fn029df368Self*>(object)->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101835c0;
    }
    if (true) {
        fn_030ff7a8(object, &static_cast<Fn029df368Self*>(object)->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101835cc;
    }
    if (true) {
        fn_030ff7a8(object, &static_cast<Fn029df368Self*>(object)->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101835d8;
    }
    fn_030ff810(object, &static_cast<Fn029df368Self*>(object)->params[3], &key);
}
