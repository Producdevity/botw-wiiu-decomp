extern "C" unsigned char data_103dbe90[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03c218e8(void*);
extern "C" void fn_042180b8(void* object, unsigned flags);

namespace {
struct Object {
    const void *vtable;
    char embedded_4[0x700];
    signed char state;
    char padding_705[4];
    unsigned char ready;
};
}

extern "C" void fn_03c2ca7c(void* object, int flags) {
    if (object != 0) {
        reinterpret_cast<Object *>(object)->vtable = data_103dbe90;
        if (reinterpret_cast<Object *>(object)->ready != 0) {
            fn_03c218e8(object);
        }
        reinterpret_cast<Object *>(object)->state = 0;
        fn_042180b8(reinterpret_cast<Object *>(object)->embedded_4, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
