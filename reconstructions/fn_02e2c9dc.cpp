namespace {
struct Object {
    unsigned char padding_0[40];
    int state;
};
}

extern "C" void fn_02e2c9dc(Object* object, int value) {
    if (object->state == 0)
        object->state = value;
}
