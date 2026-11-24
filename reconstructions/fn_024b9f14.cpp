struct Opaque_024b9f14 {
    unsigned char unknown_00[2116];
    unsigned char handle[108];
    int count;
    unsigned char unknown_8b4[1816];
    unsigned char context[16];
};
extern "C" bool fn_0378da88(void* context);
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_02b38a6c(void*, void*, int);
extern "C" void fn_024b9f14(Opaque_024b9f14* self) {
    if (fn_0378da88(self->handle)) {
        fn_02b38a6c(self->context, self->handle, 0);
        fn_0378da14(self->handle);
        self->count = 0;
    }
}
