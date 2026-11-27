typedef int s32;

extern "C" void fn_025877f0(void*, void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_100e5bac;

namespace {
struct Object {
    unsigned char padding_0[0x2C];
    void *current;
    void *next;
};
}

extern "C" void fn_025878b8(void *object_ptr) {
    Object *object = (Object *)object_ptr;
    void *next = object->next;
    object->current = next;
    fn_025877f0(object, next);
    fn_037b8284(object, &data_100e5bac, 0);
}
