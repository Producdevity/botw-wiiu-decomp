typedef int s32;

extern "C" void fn_037d79e4(void*);
extern "C" void fn_037d7a38(void*);

namespace {
struct Object {
    char padding_0[0x7C];
    s32 value;
};
}

extern "C" void fn_037d7a50(void *object) {
    if (((Object *) object)->value == 0 || (fn_037d79e4(object), ((Object *) object)->value == 0)) {
        fn_037d7a38(object);
    }
}
