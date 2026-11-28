extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03c12090(void*, void*);

extern "C" int data_103dbba0;

namespace {
struct Object {
    char padding_0[0xC];
    char member_c[1];
    char padding_d[0x207];
    int *value_214;
};
}

extern "C" void fn_03c120b8(void *object, int flags) {
    if (object != 0) {
        static_cast<Object *>(object)->value_214 = &data_103dbba0;
        fn_03c12090(static_cast<Object *>(object)->member_c, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
