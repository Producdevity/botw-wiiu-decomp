typedef int s32;
extern "C" void fn_03babf3c(void *, const void *);
extern "C" void fn_03be87ac(void*);

namespace {
struct Object {
    char padding_0[0xD8];
    void **value_d8;
};
}

extern "C" void fn_03bad3dc(void *object) {
    struct { s32 f8; } sp;

    fn_03be87ac(*((Object *) object)->value_d8);
    sp.f8 = 4;
    fn_03babf3c(object, &sp.f8);
}
