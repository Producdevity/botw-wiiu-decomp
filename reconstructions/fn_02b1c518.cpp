typedef float f32;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" f32 data_101abd38;

namespace {
struct Object {
    unsigned char padding_0[0x24];
    unsigned char lock[0xB8];
    f32 value;
};
}

extern "C" void fn_02b1c518(void *object_ptr) {
    Object *object = (Object *)object_ptr;
    void *lock = object->lock;
    fn_030bb668(lock);
    object->value = data_101abd38;
    fn_030bb69c(lock);
}
