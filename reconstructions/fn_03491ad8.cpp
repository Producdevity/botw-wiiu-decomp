extern "C" void fn_0348e6e0();
extern "C" void fn_0348e6e8(void*);
extern "C" void fn_034afa20(int, int, int, int);

namespace {
struct Object {
    unsigned char padding_0[92];
    int base;
    unsigned char padding_60[44];
    int handle;
};
}

extern "C" void fn_03491ad8(void* self, int first, int second) {
    Object *object = (Object *)self;
    int adjusted_base;

    fn_0348e6e0();
    adjusted_base = object->base + 240;
    fn_0348e6e8(self);
    fn_034afa20(object->handle, first, second, adjusted_base);
}
