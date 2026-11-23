#include "botw/safe_string.h"

extern "C" unsigned char data_10137760[];
extern "C" unsigned char data_10137754[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_027eaa08(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10137760;
        fn_030e9be0(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10137754;
    }
    fn_030e9be0(self, (char*)self + 36, &key);
}
