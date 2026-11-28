namespace {
struct Object {
    char padding_0[0x117];
    unsigned char counter;
};
}

extern "C" void fn_0378fd5c(void* self) {
    Object* object = (Object*)self;
    unsigned char counter = object->counter;
    if (counter != 0xFF) {
        object->counter = counter + 1;
    }
}
