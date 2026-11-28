typedef int s32;
extern "C" void fn_03babf48(void*);

namespace {
struct Object {
    char padding_0[0x15C];
    s32 value_15c;
};
}

extern "C" void fn_03bade8c(void *object) {
    if (((Object *) object)->value_15c != 0) {
        fn_03babf48(object);
    }
    ((Object *) object)->value_15c = 0;
}
