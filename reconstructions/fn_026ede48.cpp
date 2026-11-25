#include "botw/safe_string.h"

extern "C" unsigned char data_10118870[];
extern "C" unsigned char data_10118884[];
extern "C" unsigned char data_10118860[];
extern "C" unsigned char data_1011889c[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" void fn_030ea03c(void*, void*, void*);
extern "C" void fn_030ea0cc(void*, void*, void*);

struct KorokPotRootAI {
    unsigned char base[32];
    void* param0;
    void* param1;
    void* param2;
    void* param3;
};

extern "C" void fn_026ede48(KorokPotRootAI* self) {
    SafeString key;
    const void* vtable = &data_10263910;
    key.vtable = vtable;
    key.string = (const char*)data_10118870;
    if (true) {
        fn_030e9be0(self, &self->param0, &key);
        key.vtable = vtable;
        key.string = (const char*)data_10118884;
    }
    if (true) {
        fn_030e9be0(self, &self->param1, &key);
        key.vtable = vtable;
        key.string = (const char*)data_10118860;
    }
    if (true) {
        fn_030ea03c(self, &self->param2, &key);
        key.vtable = vtable;
        key.string = (const char*)data_1011889c;
    }
    fn_030ea0cc(self, &self->param3, &key);
}
