#include "botw/safe_string.h"

extern "C" unsigned char data_100acd78[];
extern "C" unsigned char data_100acd94[];
extern "C" unsigned char data_100acda0[];
extern "C" unsigned char data_100acdb0[];
extern "C" unsigned char data_100acdc0[];
extern "C" unsigned char data_100acdd0[];
extern "C" unsigned char data_100acd84[];
extern "C" unsigned char data_100acd80[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

struct PlayerSlide {
    unsigned char base[16];
    void* params[8];
};

extern "C" void fn_0240ed58(void* object) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_100acd78;
    if (true) {
        fn_030e9be0(object, &static_cast<PlayerSlide*>(object)->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100acd94;
    }
    if (true) {
        fn_030e9be0(object, &static_cast<PlayerSlide*>(object)->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100acda0;
    }
    if (true) {
        fn_030e9be0(object, &static_cast<PlayerSlide*>(object)->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100acdb0;
    }
    if (true) {
        fn_030e9be0(object, &static_cast<PlayerSlide*>(object)->params[3], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100acdc0;
    }
    if (true) {
        fn_030e9be0(object, &static_cast<PlayerSlide*>(object)->params[4], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100acdd0;
    }
    if (true) {
        fn_030e9be0(object, &static_cast<PlayerSlide*>(object)->params[5], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100acd84;
    }
    if (true) {
        fn_030e9d18(object, &static_cast<PlayerSlide*>(object)->params[6], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100acd80;
    }
    fn_030e9aa8(object, &static_cast<PlayerSlide*>(object)->params[7], &key);
}
