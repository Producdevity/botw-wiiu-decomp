#include "botw/safe_string.h"

extern "C" unsigned char data_1010fb38[];
extern "C" unsigned char data_1010fb58[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_026b40f0(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_026b72f0(void* self) {
    SafeString key;
    if (true) {
        fn_026b40f0(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1010fb38;
        fn_030e9be0(self, (char*)self + 124, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1010fb58;
    }
    fn_030e9be0(self, (char*)self + 128, &key);
}
