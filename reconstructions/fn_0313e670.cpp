namespace {
struct Object {
    unsigned char padding_0[48];
    int state;
};
}

extern "C" void fn_0313e670(Object* object, int value) {
    if (object->state == 0)
        object->state = value;
}
