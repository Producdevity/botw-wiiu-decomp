#include "botw/safe_string.h"

extern "C" void fn_025329c8(void*);
extern "C" void fn_030e9ff4(void*, void*, const SafeString*);
extern "C" const unsigned char data_10263910;
extern "C" int data_101777d0;

struct Fn029a46ccSelf {
    char padding_0[0x20];
    char member_20[1];
};

extern "C" void fn_029a46cc(Fn029a46ccSelf* object) {
    SafeString key;

    fn_025329c8(object);
    key.vtable = &data_10263910;
    key.string = (const char*)&data_101777d0;
    fn_030e9ff4(object, object->member_20, &key);
}
