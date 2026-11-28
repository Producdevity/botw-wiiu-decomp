#include "botw/safe_string.h"

extern "C" unsigned char data_10119150[];
extern "C" unsigned char data_10119158[];
extern "C" unsigned char data_10119170[];
extern "C" unsigned char data_10119188[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_026ef164(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" void fn_030e9ff4(void*, void*, const SafeString*);
extern "C" void fn_030ea0cc(void*, void*, void*);

struct Fn026f2ab8Self {
    unsigned char base[124];
    void* params[4];
};

extern "C" void fn_026f2ab8(Fn026f2ab8Self* self) {
    SafeString key;
    SafeString* k = &key;
    fn_026ef164(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_10119150;
    if (true) {
        fn_030e9be0(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10119158;
    }
    if (true) {
        fn_030e9ff4(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10119170;
    }
    if (true) {
        fn_030e9ff4(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10119188;
    }
    fn_030ea0cc(self, &self->params[3], k);
}
