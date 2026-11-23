#include "botw/safe_string.h"

extern "C" unsigned char data_10128a6c[];
extern "C" unsigned char data_10128a58[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02663b64(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" void fn_030ea23c(void*, void*, void*);

extern "C" void fn_02768de0(void* self) {
    SafeString key;
    if (true) {
        fn_02663b64(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10128a6c;
        fn_030e9b44(self, (char*)self + 464, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10128a58;
    }
    fn_030ea23c(self, (char*)self + 460, &key);
}
