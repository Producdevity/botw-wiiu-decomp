namespace {
struct Object {
    unsigned char padding_0[696];
    int value;
};
}

extern "C" void fn_02e7b510(Object* object, int value) {
    if (object->value <= value)
        object->value = value;
}
