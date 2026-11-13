namespace {
struct Object {
    unsigned char padding_0[20];
    unsigned short state;
};
}

extern "C" void fn_02b74f24(Object* object) {
    if (object)
        object->state = 16;
}
