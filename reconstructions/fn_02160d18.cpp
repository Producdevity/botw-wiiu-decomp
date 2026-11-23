#include "botw/safe_string.h"

extern "C" unsigned char data_1003202c[];
extern "C" unsigned char data_1003203c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0215facc(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_02160d18(void* self) {
    SafeString key;
    if (true) {
        fn_0215facc(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1003202c;
        fn_030e9be0(self, (char*)self + 212, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1003203c;
    }
    fn_030e9be0(self, (char*)self + 216, &key);
}
