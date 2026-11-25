#include "botw/safe_string.h"

extern "C" unsigned char data_100fa984[];
extern "C" unsigned char data_100fa994[];
extern "C" const unsigned char data_10263910;
struct InWaterSelect;
extern "C" void fn_026d8584(InWaterSelect*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" void fn_030ea23c(void*, void*, void*);

extern "C" void fn_0262934c(void* self) {
    SafeString key;
    if (true) {
        fn_026d8584((InWaterSelect*)self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100fa984;
        fn_030e9b44(self, (char*)self + 48, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100fa994;
    }
    fn_030ea23c(self, (char*)self + 52, &key);
}
