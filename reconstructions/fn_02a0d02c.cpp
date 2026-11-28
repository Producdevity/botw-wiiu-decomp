typedef int s32;
typedef float f32;

extern "C" void fn_03485f68(void*);
extern "C" void fn_03487920(void *);
extern "C" void fn_0348cfa4(void*, float);

extern "C" f32 data_10186ca4;

namespace {
struct Object {
    char padding_0[0x18];
    s32 flags;
    char padding_1c[0x10];
    void *child;
};
}

extern "C" void fn_02a0d02c(void *object) {
    Object *self = reinterpret_cast<Object *>(object);
    fn_0348cfa4(self->child, data_10186ca4);
    fn_03487920(self->child);
    fn_03485f68(self->child);
    self->flags |= 4;
}
