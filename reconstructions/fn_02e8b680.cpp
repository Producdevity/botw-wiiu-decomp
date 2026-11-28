extern "C" void fn_02e8b630(void *arg0);

namespace {
struct Object {
    char padding_0[77];
    unsigned char flags;
};
}

extern "C" int fn_02e8b680(void* object) {
    if (((Object *) object)->flags != 0) {
        fn_02e8b630(object);
        ((Object *) object)->flags |= 16;
        return 1;
    }
    return 0;
}
