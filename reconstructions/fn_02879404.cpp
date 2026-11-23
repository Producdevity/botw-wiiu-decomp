#include "botw/safe_string.h"

extern "C" unsigned char data_1014bdd4[];
extern "C" unsigned char data_1014bdc4[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_02879404(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1014bdd4;
        fn_030e9b44(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1014bdc4;
    }
    fn_030e9be0(self, (char*)self + 36, &key);
}
