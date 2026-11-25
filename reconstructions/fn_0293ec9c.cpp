#include "botw/safe_string.h"

extern "C" unsigned char data_1016baac[];
extern "C" unsigned char data_1016bacc[];
extern "C" unsigned char data_1016babc[];
extern "C" unsigned char data_1016badc[];
extern "C" unsigned char data_1016baec[];
extern "C" unsigned char data_1016baf8[];
extern "C" unsigned char data_1016bb14[];
extern "C" unsigned char data_1016bb04[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" void fn_030ea0cc(void*, void*, void*);

struct TreasureBoxRoot {
    unsigned char base[32];
    void* params[8];
};

extern "C" void fn_0293ec9c(TreasureBoxRoot* self) {
    SafeString key;
    SafeString* k = &key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_1016baac;
    if (true) {
        fn_030e9be0(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1016bacc;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1016babc;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1016badc;
    }
    if (true) {
        fn_030e9be0(self, &self->params[3], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1016baec;
    }
    if (true) {
        fn_030e9be0(self, &self->params[4], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1016baf8;
    }
    if (true) {
        fn_030e9d18(self, &self->params[5], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1016bb14;
    }
    if (true) {
        fn_030ea0cc(self, &self->params[6], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1016bb04;
    }
    fn_030ea0cc(self, &self->params[7], k);
}
