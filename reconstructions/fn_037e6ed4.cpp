typedef int s32;

extern "C" void fn_036295f4(void*);
extern "C" int fn_036296f8(void*);
extern "C" void fn_037f5cd0(void*);

namespace {
struct Object {
    char padding_0[8];
    void *resource;
    char member[1];
};
}

extern "C" s32 fn_037e6ed4(void *object) {
    Object *self = (Object *)object;

    if (fn_036296f8(self->member) != 0) {
        fn_036295f4(self->member);
    }
    void *resource = self->resource;
    if (resource != 0) {
        fn_037f5cd0(resource);
    }
    return 1;
}
