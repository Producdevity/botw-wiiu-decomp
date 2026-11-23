#include "botw/safe_string.h"

extern "C" unsigned char data_1011566c[];
extern "C" unsigned char data_10115680[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" void fn_030e9ff4(void*, void*, const SafeString*);

extern "C" void fn_026dc8d8(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1011566c;
        fn_030e9be0(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10115680;
    }
    fn_030e9ff4(self, (char*)self + 36, &key);
}
