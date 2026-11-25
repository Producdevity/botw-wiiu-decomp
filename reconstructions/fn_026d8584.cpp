#include "botw/safe_string.h"

extern "C" unsigned char data_10114c20[];
extern "C" unsigned char data_10114bec[];
extern "C" unsigned char data_10114bfc[];
extern "C" unsigned char data_10114c10[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

struct InWaterSelect {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_026d8584(InWaterSelect* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10114c20;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10114bec;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10114bfc;
    }
    if (true) {
        fn_030e9d18(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10114c10;
    }
    fn_030e9d18(self, &self->params[3], &key);
}
