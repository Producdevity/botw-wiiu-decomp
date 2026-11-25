#include "botw/safe_string.h"

extern "C" unsigned char data_100d9950[];
extern "C" unsigned char data_100d993c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02652838(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct ChemicalGiantArmorRoot {
    unsigned char base[32];
    void* params[2];
};

extern "C" void fn_0253d648(ChemicalGiantArmorRoot* self) {
    SafeString key;
    fn_02652838(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_100d9950;
    if (true) {
        fn_030e9b44(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100d993c;
    }
    fn_030e9be0(self, &self->params[1], &key);
}
