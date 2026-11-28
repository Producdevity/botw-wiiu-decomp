typedef int s32;
typedef unsigned int u32;

extern "C" void fn_02753294(void*);
extern "C" void fn_02753db4(void*);

namespace {
struct Vtable {
    void *padding_0[9];
    u32 *(*get_type)(void **);
};

struct Message {
    Vtable *vtable;
};
}

extern "C" s32 fn_02754080(void *object, void **message) {
    if (*((Message *)message)->vtable->get_type(message) == 0x03000003U) {
        fn_02753db4(object);
        return 0;
    }
    if (*((Message *)message)->vtable->get_type(message) == 0x03000004U) {
        fn_02753294(object);
    }
    return 0;
}
