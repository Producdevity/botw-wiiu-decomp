#include "botw/safe_string.h"

extern "C" unsigned char data_1007244c[];
extern "C" unsigned char data_10072464[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_022e139c(void *arg0);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_022ab810(void* self) {
    SafeString key;
    if (true) {
        fn_022e139c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1007244c;
        fn_030e9be0(self, (char*)self + 220, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10072464;
    }
    fn_030e9be0(self, (char*)self + 224, &key);
}
