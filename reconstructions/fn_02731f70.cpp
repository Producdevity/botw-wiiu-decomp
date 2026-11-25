#include "botw/safe_string.h"

extern "C" unsigned char data_10120158[];
extern "C" unsigned char data_10120164[];
extern "C" unsigned char data_10120148[];
extern "C" unsigned char data_10120174[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

struct LOSFurthestHitPointFinder {
    unsigned char base[44];
    void* params[4];
};

extern "C" void fn_02731f70(LOSFurthestHitPointFinder* self) {
    SafeString key;
    const SafeString* k = &key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10120158;
    if (true) {
        fn_030e9b44(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10120164;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10120148;
    }
    if (true) {
        fn_030e9d18(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10120174;
    }
    fn_030e9d18(self, &self->params[3], k);
}
