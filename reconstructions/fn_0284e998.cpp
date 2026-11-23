#include "botw/safe_string.h"

extern "C" unsigned char data_10145abc[];
extern "C" unsigned char data_10145ac4[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02895bcc(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

extern "C" void fn_0284e998(void* self) {
    SafeString key;
    if (true) {
        fn_02895bcc(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10145abc;
        fn_030e9be0(self, (char*)self + 40, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10145ac4;
    }
    fn_030e9d18(self, (char*)self + 44, &key);
}
