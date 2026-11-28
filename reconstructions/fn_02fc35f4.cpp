extern "C" void fn_02f210a8(void*);
extern "C" void fn_02fc3420(void*);

namespace {
struct Object {
    char padding_0[0x21F8];
    void *value_21f8;
};
}

extern "C" void fn_02fc35f4(void *object) {
    if (((Object *) object)->value_21f8 != 0) {
        fn_02fc3420(object);
        fn_02f210a8(((Object *) object)->value_21f8);
    }
}
