extern "C" void fn_026a82ac(void*);
extern "C" void fn_0370d910(void*, void*, void*, int);

namespace {
struct Target {
    char padding_0[0x394];
    void *node;
};
struct Holder {
    Target *target;
};
}

extern "C" void fn_029ac2f8(void **object) {
    void *node;

    fn_026a82ac(object);
    node = ((Holder *)object)->target->node;
    if (node != 0) {
        fn_0370d910(node, 0, 0, 0);
    }
}
