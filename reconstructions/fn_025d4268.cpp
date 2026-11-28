#include "botw/safe_string.h"

extern "C" unsigned char data_100ef430[];
extern "C" unsigned char data_100ef448[];
extern "C" unsigned char data_100ef418[];
extern "C" unsigned char data_100ef464[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02518cd4(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct Fn025d4268Self {
    unsigned char base[184];
    void* params[4];
};

extern "C" void fn_025d4268(Fn025d4268Self* self) {
    SafeString key;
    SafeString* k = &key;
    fn_02518cd4(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_100ef430;
    if (true) {
        fn_030e9b44(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100ef448;
    }
    if (true) {
        fn_030e9b44(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100ef418;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100ef464;
    }
    fn_030e9be0(self, &self->params[3], k);
}
