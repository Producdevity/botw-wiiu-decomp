#include "botw/safe_string.h"

extern "C" unsigned char data_1004cf64[];
extern "C" unsigned char data_1004cf70[];
extern "C" unsigned char data_1004cf5c[];
extern "C" unsigned char data_1004cf84[];
extern "C" unsigned char data_1004cf90[];
extern "C" unsigned char data_1004cfa4[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

struct Fn021eb0e8Self {
    unsigned char base[16];
    void* params[6];
};

extern "C" void fn_021eb0e8(void* object) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_1004cf64;
    if (true) {
        fn_030e9b44(object, &static_cast<Fn021eb0e8Self*>(object)->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004cf70;
    }
    if (true) {
        fn_030e9b44(object, &static_cast<Fn021eb0e8Self*>(object)->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004cf5c;
    }
    if (true) {
        fn_030e9b44(object, &static_cast<Fn021eb0e8Self*>(object)->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004cf84;
    }
    if (true) {
        fn_030e9b44(object, &static_cast<Fn021eb0e8Self*>(object)->params[3], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004cf90;
    }
    if (true) {
        fn_030e9be0(object, &static_cast<Fn021eb0e8Self*>(object)->params[4], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004cfa4;
    }
    fn_030e9d18(object, &static_cast<Fn021eb0e8Self*>(object)->params[5], &key);
}
