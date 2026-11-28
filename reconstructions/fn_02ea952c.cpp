typedef int s32;

extern "C" int fn_02ea94dc(void*);

namespace {
struct Object {
    char padding_0[0x3128];
    s32 counter;
};
}

extern "C" void fn_02ea952c(void *object) {
    if (fn_02ea94dc(object) != 0) {
        ((Object *) object)->counter = 0;
        return;
    }
    ((Object *) object)->counter = ((Object *) object)->counter + 1;
}
