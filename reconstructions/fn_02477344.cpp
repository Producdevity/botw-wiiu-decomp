extern "C" void fn_02b27174(void*);

namespace {
struct Object {
    char padding_0[0x1344];
    char entry_a[0x16C];
    int active_a;
    char padding_b[4];
    char entry_b[0x16C];
    int active_b;
};
}

extern "C" void fn_02477344(void *object) {
    if (((Object *) object)->active_a != 0) {
        fn_02b27174(((Object *) object)->entry_a);
    }
    if (((Object *) object)->active_b != 0) {
        fn_02b27174(((Object *) object)->entry_b);
    }
}
