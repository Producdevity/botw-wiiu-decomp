#include "botw/safe_string.h"

extern "C" unsigned char data_100dba44[];
extern "C" unsigned char data_100dba5c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_025482bc(void*);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

extern "C" void fn_02548c98(void* self) {
    SafeString key;
    if (true) {
        fn_025482bc(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100dba44;
        fn_030e9d18(self, (char*)self + 140, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100dba5c;
    }
    fn_030e9d18(self, (char*)self + 144, &key);
}
