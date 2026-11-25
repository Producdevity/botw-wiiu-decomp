#include "botw/safe_string.h"

extern "C" unsigned char data_100e6ba8[];
extern "C" unsigned char data_100e6bc8[];
extern "C" unsigned char data_100e6bbc[];
extern "C" unsigned char data_100e6bd8[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct DungeonRotateTagWaterChemical {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_0258b8fc(DungeonRotateTagWaterChemical* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_100e6ba8;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100e6bc8;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100e6bbc;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100e6bd8;
    }
    fn_030e9be0(self, &self->params[3], &key);
}
