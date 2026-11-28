typedef int s32;

extern "C" void fn_034bd774(void *);
extern "C" void fn_034bd8bc(void *);
extern "C" int fn_034bd924(void*, void*, void*);

namespace {
struct Object {
    char padding_0[0x58];
    s32 value_58;
    char padding_5c[0x2C];
    s32 value_88;
};
}

extern "C" void fn_034bda74(void *object, void *first, void *second) {
    if (((Object *) object)->value_58 != 0) {
        fn_034bd774(object);
    }
    if (((Object *) object)->value_88 != 0) {
        fn_034bd8bc(object);
    }
    if (fn_034bd924(object, first, second) == 0) {
        fn_034bd774(object);
    }
}
