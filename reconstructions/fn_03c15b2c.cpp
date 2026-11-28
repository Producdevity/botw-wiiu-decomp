extern "C" unsigned char data_103dbbc8[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03c124a4(void*, void*);
extern "C" void fn_03c15abc(void*);

namespace {
struct Object {
    char padding_0[716];
    const void *table;
};
}

extern "C" void fn_03c15b2c(void* object, int flags) {
    if (object != 0) {
        ((Object *) object)->table = data_103dbbc8;
        fn_03c15abc(object);
        fn_03c124a4(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
