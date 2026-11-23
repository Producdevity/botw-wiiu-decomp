#include "botw/safe_string.h"

extern "C" unsigned char data_10140a34[];
extern "C" unsigned char data_10140a24[];
extern "C" unsigned char data_10140a40[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ea164(void*, void*, void*);
extern "C" void fn_030ea284(void*, void*, void*);

extern "C" void fn_02830000(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_10140a24;
            key.string = (const char*)data_10140a34;
            key_ref = &key;
            fn_030ea164(self, (char*)self + 32, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030ea164(self, (char*)self + 36, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10140a40;
    }
    last_ref = key_ref;
    fn_030ea284(self, (char*)self + 40, last_ref);
}
