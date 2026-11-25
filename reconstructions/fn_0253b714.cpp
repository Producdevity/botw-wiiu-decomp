#include "botw/safe_string.h"

extern "C" unsigned char data_100d916c[];
extern "C" unsigned char data_100d917c[];
extern "C" unsigned char data_100d918c[];
extern "C" unsigned char data_100d9160[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct CheckLineOfSightSelector {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_0253b714(CheckLineOfSightSelector* self) {
    SafeString key;
    const SafeString* k = &key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_100d916c;
    if (true) {
        fn_030e9b44(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100d917c;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100d918c;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100d9160;
    }
    fn_030e9be0(self, &self->params[3], k);
}
