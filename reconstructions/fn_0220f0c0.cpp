#include "botw/safe_string.h"

extern "C" unsigned char data_10054e3c[];
extern "C" unsigned char data_10054e2c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_021fd350(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_0220f0c0(void* self) {
    SafeString key;
    if (true) {
        fn_021fd350(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10054e3c;
        fn_030e9be0(self, (char*)self + 36, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10054e2c;
    }
    fn_030e9be0(self, (char*)self + 40, &key);
}
