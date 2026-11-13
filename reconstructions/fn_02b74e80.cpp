namespace {
struct Object {
    unsigned char padding_0[24];
    unsigned state;
};
}

extern "C" void fn_02b74e80(Object* object) {
    if (object)
        object->state = 21;
}
