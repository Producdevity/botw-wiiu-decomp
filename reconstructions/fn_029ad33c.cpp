#include "botw/safe_string.h"

extern "C" unsigned char data_10178734[];
extern "C" unsigned char data_1017873c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff774(void*, void*, void*);
extern "C" void fn_030ff810(void*, void*, const SafeString*);

extern "C" void fn_029ad33c(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10178734;
        fn_030ff774(self, (char*)self + 20, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017873c;
    }
    fn_030ff810(self, (char*)self + 24, &key);
}
