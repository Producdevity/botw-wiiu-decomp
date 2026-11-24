extern "C" void fn_02d46138(void* object, unsigned flags);
extern "C" void fn_02d461cc(void* object, unsigned flags);
extern "C" void fn_02d46234(void* object, unsigned flags);
extern "C" void fn_02d4655c(void* object, unsigned flags);
extern "C" void fn_02d46604(void* object, unsigned flags);
extern "C" void fn_02d468f8(void* object, unsigned flags);
extern "C" void fn_02d46bbc(void* object, unsigned flags);
extern "C" void fn_02d46c64(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0378da14(void* handle);

struct Opaque_02d49678 {
    unsigned char unknown_0[20];
    unsigned char base_14[4];
    unsigned char base_18[4];
    unsigned char base_1c[4];
    unsigned char base_20[4];
    unsigned char base_24[4];
    unsigned char base_28[4];
    unsigned char base_2c[4];
    unsigned char unknown_30[4];
    unsigned char handle_34[4];
    unsigned char unknown_38[8];
    unsigned char handle_40[4];
};

extern "C" void fn_02d49678(Opaque_02d49678* self, unsigned flags) {
    if (self) {
        fn_0378da14(self->handle_40);
        fn_0378da14(self->handle_34);
        fn_02d46c64(self->base_2c, 2);
        fn_02d46bbc(self->base_28, 2);
        fn_02d468f8(self->base_24, 2);
        fn_02d46604(self->base_20, 2);
        fn_02d4655c(self->base_1c, 2);
        fn_02d46234(self->base_18, 2);
        fn_02d46138(self->base_14, 2);
        fn_02d461cc(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
