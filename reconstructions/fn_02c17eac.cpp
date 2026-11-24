struct Opaque_02c17eac {
    unsigned char unknown_00[52];
    int first;
    int second;
    unsigned char unknown_3c[116];
    unsigned char handle_b0[12];
    unsigned char handle_bc[12];
    int index;
    unsigned char flag;
};
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_02c167e0(void* p);
extern "C" void fn_02c17eac(Opaque_02c17eac* self) {
    fn_02c167e0(self);
    int cleared = 0;
    self->flag = cleared;
    self->first = cleared;
    self->second = cleared;
    fn_0378da14(self->handle_b0);
    fn_0378da14(self->handle_bc);
    self->index = -1;
}
