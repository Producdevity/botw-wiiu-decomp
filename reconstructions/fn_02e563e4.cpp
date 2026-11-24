struct Opaque_02e563e4 {
    unsigned char handle[12];
    int source;
    int state;
};

extern "C" void fn_0378da14(void* handle);

extern "C" void fn_02e563e4(Opaque_02e563e4* self, int source) {
    if (source) {
        fn_0378da14(self);
        self->source = source;
        self->state = 2;
    }
}
