#include "botw/safe_string.h"

extern "C" unsigned char data_100bc208[];
extern "C" unsigned char data_100bc1fc[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0245ae00(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_024625d8(void* self) {
    SafeString key;
    if (true) {
        fn_0245ae00(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100bc208;
        fn_030e9be0(self, (char*)self + 84, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100bc1fc;
    }
    fn_030e9be0(self, (char*)self + 88, &key);
}
