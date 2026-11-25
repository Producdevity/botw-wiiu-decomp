#include "botw/safe_string.h"

extern "C" unsigned char data_1010c814[];
extern "C" unsigned char data_1010c820[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02674a8c(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct GuardianRoam {
    unsigned char base[32];
    void* params[2];
};

extern "C" void fn_026a1160(GuardianRoam* self) {
    SafeString key;
    fn_02674a8c(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_1010c814;
    if (true) {
        fn_030e9b44(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1010c820;
    }
    fn_030e9be0(self, &self->params[1], &key);
}
