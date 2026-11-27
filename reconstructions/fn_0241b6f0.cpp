extern "C" void fn_0241be5c(void*);
extern "C" void fn_030ea2cc(void *);

namespace {
struct Vtable {
    unsigned char padding_0[0x24];
    int (*first)(void *);
    unsigned char padding_28[4];
    int (*second)(void *);
    unsigned char padding_30[0x104];
    int (*third)(void *);
};

struct Object {
    unsigned char padding_0[0xC];
    Vtable *vtable;
};
}

extern "C" void fn_0241b6f0(void *arg0) {
    fn_0241be5c(arg0);
    if (static_cast<Object *>(arg0)->vtable->second(arg0) == 0 &&
        static_cast<Object *>(arg0)->vtable->first(arg0) == 0 &&
        static_cast<Object *>(arg0)->vtable->third(arg0) != 0) {
        fn_030ea2cc(arg0);
    }
}
