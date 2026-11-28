typedef int s32;
typedef float f32;

extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" f32 data_10134e98;
extern "C" s32 data_10134f1c;

namespace {
struct Object {
    char padding_0[0xE8];
    void* const* vtable;
};
}

extern "C" void fn_027df698(void **object) {
    Object *owner = (Object *)*object;
    ((s32 (*)(Object *, s32, f32))owner->vtable[187])(owner, 0, data_10134e98);
    fn_037b8284(object, &data_10134f1c, 0);
}
