extern "C" void fn_03b5b6b8(void*, void*);
extern "C" void fn_03b65500(void*);

namespace {
struct Object {
    char padding_0[0x174];
    void *child;
    char padding_178[0x2C0 - 0x178];
    char first[0x5C];
    char second[1];
};
}

extern "C" void fn_03b56a0c(void *object) {
    void *child = ((Object *)object)->child;

    if (child != 0) {
        fn_03b5b6b8(child, 0);
        ((Object *)object)->child = 0;
    }
    fn_03b65500(((Object *)object)->first);
    fn_03b65500(((Object *)object)->second);
}
