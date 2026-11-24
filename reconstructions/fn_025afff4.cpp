struct Opaque_025afff4 {
    unsigned char* flag;
    unsigned char unknown_04[596];
    unsigned char handle[36];
    unsigned char state;
};

extern "C" void fn_0378da14(void* handle);

extern "C" bool fn_025afff4(Opaque_025afff4* self, void* context) {
    self->state = 16;
    *self->flag = false;
    fn_0378da14(self->handle);
    return false;
}
