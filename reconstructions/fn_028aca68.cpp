extern "C" const unsigned char data_10155284[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_034bf948(void*);
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_028aca68_Owner {
    unsigned char unknown_00[928];
    void* child;
};

struct Opaque_028aca68 {
    Opaque_028aca68_Owner* owner;
    unsigned char unknown_04[8];
    const void* vtable_c;
    unsigned char unknown_10[56];
    unsigned char handle_48[12];
    unsigned char handle_54[4];
};

extern "C" void fn_028aca68(Opaque_028aca68* self, unsigned flags) {
    if (self) {
        self->vtable_c = data_10155284;
        Opaque_028aca68_Owner* owner = self->owner;
        if (owner->child) {
            fn_034bf948(owner->child);
        }
        fn_0378da14(self->handle_54);
        fn_0378da14(self->handle_48);
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
