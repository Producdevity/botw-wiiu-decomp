#include "botw/safe_string.h"

extern "C" unsigned char data_10118b48[];
extern "C" unsigned char data_10118b2c[];
extern "C" unsigned char data_10118b14[];
extern "C" unsigned char data_10118b38[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" void fn_030ea03c(void*, void*, void*);

struct Fn026ef164Self {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_026ef164(void* object) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10118b48;
    if (true) {
        fn_030e9be0(object, &static_cast<Fn026ef164Self*>(object)->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10118b2c;
    }
    if (true) {
        fn_030e9be0(object, &static_cast<Fn026ef164Self*>(object)->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10118b14;
    }
    if (true) {
        fn_030e9d18(object, &static_cast<Fn026ef164Self*>(object)->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10118b38;
    }
    fn_030ea03c(object, &static_cast<Fn026ef164Self*>(object)->params[3], &key);
}
