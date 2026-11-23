#include "botw/safe_string.h"

extern "C" unsigned char data_10141d1c[];
extern "C" unsigned char data_10141d34[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_028354c8(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" void fn_030e9ff4(void*, void*, const SafeString*);

extern "C" void fn_02836a0c(void* self) {
    SafeString key;
    if (true) {
        fn_028354c8(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10141d1c;
        fn_030e9be0(self, (char*)self + 80, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10141d34;
    }
    fn_030e9ff4(self, (char*)self + 84, &key);
}
