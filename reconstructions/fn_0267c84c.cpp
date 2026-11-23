#include "botw/safe_string.h"

extern "C" unsigned char data_10107d7c[];
extern "C" unsigned char data_10107d6c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_026812d0(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);

extern "C" void fn_0267c84c(void* self) {
    SafeString key;
    if (true) {
        fn_026812d0(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10107d7c;
        fn_030e9b44(self, (char*)self + 264, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10107d6c;
    }
    fn_030e9b44(self, (char*)self + 268, &key);
}
