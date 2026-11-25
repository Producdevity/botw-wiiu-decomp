#include "botw/safe_string.h"

extern "C" unsigned char data_1004acec[];
extern "C" unsigned char data_1004acc8[];
extern "C" unsigned char data_1004acb8[];
extern "C" unsigned char data_1004acfc[];
extern "C" unsigned char data_1004acdc[];
extern "C" unsigned char data_1004ad08[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

struct ForkAerialAcrobatics {
    unsigned char base[16];
    void* params[6];
};

extern "C" void fn_021e2f7c(ForkAerialAcrobatics* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_1004acec;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004acc8;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004acb8;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004acfc;
    }
    if (true) {
        fn_030e9be0(self, &self->params[3], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004acdc;
    }
    if (true) {
        fn_030e9be0(self, &self->params[4], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004ad08;
    }
    fn_030e9d18(self, &self->params[5], &key);
}
