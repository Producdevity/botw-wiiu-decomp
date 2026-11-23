#include "botw/safe_string.h"

extern "C" unsigned char data_100ab784[];
extern "C" unsigned char data_100ab798[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_024073dc(void *arg0);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

extern "C" void fn_02406750(void* self) {
    SafeString key;
    if (true) {
        fn_024073dc(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100ab784;
        fn_030e9be0(self, (char*)self + 228, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100ab798;
    }
    fn_030e9d18(self, (char*)self + 232, &key);
}
