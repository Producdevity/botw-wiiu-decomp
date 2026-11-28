namespace {
struct Object {
    char padding_0[0x55];
    signed char flag_55;
    signed char flag_56;
};
}

extern "C" void fn_03c970d4(void *self, unsigned int slot, signed char value) {
    Object *object = static_cast<Object *>(self);
    switch (slot) {
    case 2:
        object->flag_55 = value;
        return;
    case 3:
        object->flag_56 = value;
        return;
    }
}
