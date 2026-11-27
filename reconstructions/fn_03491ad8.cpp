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

extern "C" void fn_03491ad8(void* arg0, int arg1, int arg2) {
    Object *self = (Object *)arg0;
    int adjusted_base;

    fn_0348e6e0();
    adjusted_base = self->base + 240;
    fn_0348e6e8(arg0);
    fn_034afa20(self->handle, arg1, arg2, adjusted_base);
}
