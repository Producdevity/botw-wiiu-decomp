#include "botw/ranged_handle.h"

extern "C" const unsigned char data_1016c454[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03458948(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_02941eb0_48 {
    RangedHandle handle_0;
    unsigned char unknown_1c[8];
    unsigned char handle_24[4];

    void release() {
        fn_0378da14(handle_24);
        handle_0.release();
    }
};

struct Opaque_02941eb0 {
    unsigned char unknown_0[12];
    const void* vtable_c;
    unsigned char unknown_10[44];
    unsigned char handle_3c[4];
    unsigned char unknown_40[8];
    Opaque_02941eb0_48 member_48;
    unsigned char unknown_70[24];
    void* field_88;
};

extern "C" void fn_02941eb0(Opaque_02941eb0* self, unsigned flags) {
    if (self) {
        self->vtable_c = data_1016c454;
        if (self->field_88) {
            fn_03458948(self->field_88);
            self->field_88 = 0;
        }
        if (&self->member_48) {
            self->member_48.release();
        }
        fn_0378da14(self->handle_3c);
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
