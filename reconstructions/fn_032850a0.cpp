extern "C" const unsigned char data_102a0984[];
extern "C" const unsigned char data_102a0994[];
extern "C" const unsigned char data_102a09ac[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_03796418(void* object, unsigned flags);

struct Opaque_032850a0 {
    const void* vtable_0;
    unsigned char unknown_4[232];
    const void* vtable_ec;
    const void* vtable_f0;
    unsigned char unknown_f4[1108];
    unsigned char handle_548[4];
};

extern "C" void fn_032850a0(Opaque_032850a0* self, unsigned flags) {
    if (self) {
        self->vtable_0 = data_102a0984;
        self->vtable_f0 = data_102a0994;
        self->vtable_ec = data_102a09ac;
        fn_0378da14(self->handle_548);
        fn_03796418(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
