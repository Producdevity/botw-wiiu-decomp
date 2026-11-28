typedef unsigned char u8;

extern "C" void fn_030ea2cc(void *);
extern "C" void fn_030ea2e0(void *);
extern "C" int data_1046d3ac;

namespace {
struct Object {
    char padding_0[0xB];
    u8 flags;
};
}

extern "C" void fn_02162220(void *object) {
    if (data_1046d3ac == 0) {
        fn_030ea2e0(object);
        ((Object *) object)->flags |= 4;
        return;
    }
    fn_030ea2cc(object);
    ((Object *) object)->flags |= 4;
}
