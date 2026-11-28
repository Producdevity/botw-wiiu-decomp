#include "botw/safe_string.h"

extern "C" unsigned char data_10078508[];
extern "C" unsigned char data_10078534[];
extern "C" unsigned char data_10078518[];
extern "C" unsigned char data_10078524[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_022d78fc(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct Fn022ddb28Self {
    unsigned char base[152];
    void* params[4];
};

extern "C" void fn_022ddb28(Fn022ddb28Self* self) {
    SafeString key;
    SafeString* k = &key;
    fn_022d78fc(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_10078508;
    if (true) {
        fn_030e9b44(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10078534;
    }
    if (true) {
        fn_030e9b44(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10078518;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10078524;
    }
    fn_030e9be0(self, &self->params[3], k);
}
