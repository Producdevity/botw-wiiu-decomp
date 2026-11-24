struct Opaque_03c14a6c {
    unsigned int* buffer;
    unsigned int unknown_04;
    char mode;
    bool active;
};

extern "C" void fn_03c14a58(unsigned int* output);

extern "C" void fn_03c14a6c(Opaque_03c14a6c* self) {
    if (self->buffer) {
        fn_03c14a58(self->buffer);
        self->buffer = 0;
    }
    self->mode = 47;
    self->active = false;
}
