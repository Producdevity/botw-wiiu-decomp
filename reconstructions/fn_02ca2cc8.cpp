#include "botw/safe_string.h"

extern "C" unsigned char data_101d2060[];
extern "C" unsigned char data_101d206c[];
extern "C" const unsigned char data_10263910;
struct PlayerParashawlGlideBase;
extern "C" void fn_02cb8a48(PlayerParashawlGlideBase*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_02ca2cc8(void* self) {
    SafeString key;
    if (true) {
        fn_02cb8a48((PlayerParashawlGlideBase*)self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d2060;
        fn_030e9be0(self, (char*)self + 76, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d206c;
    }
    fn_030e9be0(self, (char*)self + 80, &key);
}
