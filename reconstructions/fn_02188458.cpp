#include "botw/safe_string.h"

extern "C" unsigned char data_10039718[];
extern "C" unsigned char data_10039728[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02225540(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" void fn_030ea284(void*, void*, void*);

extern "C" void fn_02188458(void* self) {
    SafeString key;
    if (true) {
        fn_02225540(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10039718;
        fn_030e9b44(self, (char*)self + 88, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10039728;
    }
    fn_030ea284(self, (char*)self + 92, &key);
}
