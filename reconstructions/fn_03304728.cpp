extern "C" const unsigned char data_102ad688[];
extern "C" const unsigned char data_102ad698[];
extern "C" const unsigned char data_102ad6b0[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_03796418(void* object, unsigned flags);

struct Opaque_03304728 {
    const void* vtable_0;
    unsigned char unknown_4[232];
    const void* vtable_ec;
    const void* vtable_f0;
    unsigned char unknown_f4[1096];
    unsigned char handle_53c[4];
    unsigned char unknown_540[8];
    unsigned char handle_548[4];
};

extern "C" void fn_03304728(Opaque_03304728* self, unsigned flags) {
    if (self) {
        self->vtable_0 = data_102ad688;
        self->vtable_f0 = data_102ad698;
        self->vtable_ec = data_102ad6b0;
        fn_0378da14(self->handle_548);
        fn_0378da14(self->handle_53c);
        fn_03796418(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
