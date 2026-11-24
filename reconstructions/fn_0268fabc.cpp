extern "C" void fn_025a1ce8(void* object, void* context);
extern "C" void fn_0378da14(void* handle);

struct Opaque_0268fabc {
    unsigned char unknown_00[0x88];
    int index;
    unsigned char handle[4];
};

extern "C" void fn_0268fabc(Opaque_0268fabc* self, void* context) {
    self->index = -1;
    fn_0378da14(self->handle);
    fn_025a1ce8(self, context);
}
