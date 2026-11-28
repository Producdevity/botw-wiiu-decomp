#include "botw/safe_string.h"

extern "C" unsigned char data_10088b58[];
extern "C" unsigned char data_10088b64[];
extern "C" unsigned char data_10088b70[];
extern "C" unsigned char data_10088b50[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);

struct Fn0233c904Self {
    unsigned char base[16];
    void* params[4];
};

extern "C" void fn_0233c904(void* object) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10088b58;
    if (true) {
        fn_030e9b44(object, &static_cast<Fn0233c904Self*>(object)->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10088b64;
    }
    if (true) {
        fn_030e9b44(object, &static_cast<Fn0233c904Self*>(object)->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10088b70;
    }
    if (true) {
        fn_030e9d18(object, &static_cast<Fn0233c904Self*>(object)->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10088b50;
    }
    fn_030e9aa8(object, &static_cast<Fn0233c904Self*>(object)->params[3], &key);
}
