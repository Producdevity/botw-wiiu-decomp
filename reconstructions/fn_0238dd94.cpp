extern "C" void fn_0214042c(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0378da14(void* handle);

struct Opaque_0238dd94_Pair {
    unsigned char first[72];
    unsigned char second[4];

    void release() {
        fn_0378da14(second);
        fn_0378da14(first);
    }
};

struct Opaque_0238dd94 {
    unsigned char unknown_00[140];
    unsigned char handle[12];
    Opaque_0238dd94_Pair pair;
};

extern "C" void fn_0238dd94(Opaque_0238dd94* self, unsigned flags) {
    if (self) {
        if (&self->pair) {
            self->pair.release();
        }
        fn_0378da14(self->handle);
        fn_0214042c(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
