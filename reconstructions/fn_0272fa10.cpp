typedef int s32;

namespace {
struct Object {
    unsigned char padding_0[0xE8];
    void *const *vtable;
};
}

extern "C" void fn_037b8284(void *, const void *, void *);
extern "C" s32 data_1011f8a8;

extern "C" void fn_0272fa10(void **holder) {
    Object *object = (Object *)*holder;
    ((s32 (*)(Object *))object->vtable[215])(object);
    fn_037b8284(holder, &data_1011f8a8, 0);
}
