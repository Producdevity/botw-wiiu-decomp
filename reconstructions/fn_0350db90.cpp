typedef signed char s8;

extern "C" void fn_0327eecc(void*);
extern "C" int fn_03580de8(void*);

namespace {
struct Target {
    char padding_0[0x270];
    s8 flag;
};
struct Object {
    char padding_0[0x74];
    Target *target;
};
}

extern "C" void fn_0350db90(void *object) {
    fn_0327eecc(object);
    if (fn_03580de8(((Object *) object)->target) == 0) {
        ((Object *) object)->target->flag = 1;
    }
}
