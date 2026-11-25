#include "botw/safe_string.h"

extern "C" unsigned char data_10036670[];
extern "C" unsigned char data_1003667c[];
extern "C" unsigned char data_10036660[];
extern "C" unsigned char data_10036698[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" void fn_030e9ff4(void*, void*, const SafeString*);
extern "C" void fn_030ea03c(void*, void*, void*);

struct DungeonRotateGyro {
    unsigned char base[16];
    void* params[4];
};

extern "C" void fn_02179114(DungeonRotateGyro* self) {
    SafeString key;
    SafeString* k = &key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10036670;
    if (true) {
        fn_030e9be0(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1003667c;
    }
    if (true) {
        fn_030e9d18(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10036660;
    }
    if (true) {
        fn_030e9ff4(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10036698;
    }
    fn_030ea03c(self, &self->params[3], k);
}
