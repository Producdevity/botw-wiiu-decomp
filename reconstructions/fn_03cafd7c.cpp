namespace {
struct Object {
    char padding_0[0xC];
    int values[3];
};
}

extern "C" void fn_03cafd7c(void *self, unsigned int slot, int value) {
    Object *object = static_cast<Object *>(self);
    switch (slot) {
    case 1:
        object->values[0] = value;
        return;
    case 2:
        object->values[1] = value;
        return;
    case 3:
        object->values[2] = value;
        return;
    }
}
