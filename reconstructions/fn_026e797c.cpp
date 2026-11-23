#include "botw/safe_string.h"

extern "C" unsigned char data_10117940[];
extern "C" unsigned char data_10117958[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_027fc594(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_026e797c(void* self) {
    SafeString key;
    if (true) {
        fn_027fc594(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10117940;
        fn_030e9b44(self, (char*)self + 332, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10117958;
    }
    fn_030e9aa8(self, (char*)self + 336, &key);
}
