namespace {
struct Object {
    char padding_0[0xC];
    int value;
    int mode;
};
}

extern "C" void fn_0378dc60(int, int);

extern "C" void fn_02e56548(int object, int other, int value) {
    Object* self = (Object*)object;
    fn_0378dc60(object, other);
    self->value = value;
    self->mode = 2;
}
