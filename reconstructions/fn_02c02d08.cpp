namespace {
struct Object {
    unsigned char padding_0[0x53C];
    int value;
};
}

extern "C" void fn_02c02d08(void *arg0, int arg1) {
    Object *object = static_cast<Object *>(arg0);
    if (arg1 != 0 && object->value == 0) {
        object->value = arg1;
    }
}
