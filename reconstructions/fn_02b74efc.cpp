namespace {
struct Object {
    unsigned char padding_0[20];
    unsigned short state;
};
}

extern "C" void fn_02b74efc(Object* object) {
    if (object)
        object->state = 8;
}
