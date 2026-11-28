extern "C" void* fn_0308e578(unsigned);
struct Disposer;
extern "C" Disposer* fn_030a59d4(Disposer *, void *, int);
extern "C" void fn_04211384(void *, unsigned int);
extern "C" void fn_0434c250(void *, const char *);

extern "C" int data_1027aba4;

namespace {
struct Object {
    char padding_0[0xC];
    int* vtable;
    char payload;
};
}

extern "C" struct Disposer *fn_030bb710(struct Disposer *object, void *context, int flags) {
    if ((object != 0) || (object = (Disposer *)(fn_0308e578(0x3CU)), object != 0)) {
        fn_030a59d4(object, context, flags);
        ((Object*)object)->vtable = &data_1027aba4;
        fn_04211384(&((Object*)object)->payload, 0x2CU);
        fn_0434c250(&((Object*)object)->payload, 0);
    }
    return object;
}
