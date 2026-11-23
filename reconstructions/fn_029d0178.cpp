#include "botw/safe_string.h"

extern "C" unsigned char data_1017f914[];
extern "C" unsigned char data_1017f90c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff810(void*, void*, const SafeString*);
extern "C" void fn_030ff740(void*, void*, const SafeString*);

extern "C" void fn_029d0178(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017f914;
        fn_030ff810(self, (char*)self + 20, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017f90c;
    }
    fn_030ff740(self, (char*)self + 24, &key);
}
