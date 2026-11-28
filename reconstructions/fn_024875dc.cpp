typedef unsigned int u32;

extern "C" void fn_0248751c(void*, int);

namespace {
struct Object {
    char padding_0[0xF00];
    u32 flags;
};
}

extern "C" void fn_024875dc(void *object) {
    if ((((Object *) object)->flags >> 4) & 1) {
        fn_0248751c(object, 0);
    }
    if ((((Object *) object)->flags >> 5) & 1) {
        fn_0248751c(object, 1);
    }
}
