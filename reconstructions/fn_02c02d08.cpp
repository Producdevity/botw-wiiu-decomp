namespace {
struct Object {
    unsigned char padding_0[0x53C];
    int value;
};
}

extern "C" void fn_02c02d08(void* object, int value) {
    Object* self = static_cast<Object*>(object);
    if (value != 0 && self->value == 0) {
        self->value = value;
    }
}
