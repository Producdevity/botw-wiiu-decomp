#include "botw/safe_string.h"

extern "C" unsigned char data_10177d6c[];
extern "C" unsigned char data_10177d7c[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_029a950c(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10177d6c;
        fn_030e9be0(self, (char*)self + 112, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10177d7c;
    }
    fn_030e9be0(self, (char*)self + 116, &key);
}
