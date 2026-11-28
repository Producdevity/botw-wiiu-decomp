namespace {
struct Object {
    char padding_0[0x34];
    int counter;
};
}

extern "C" void fn_03bd5c20(void* self) {
    Object* object = static_cast<Object*>(self);
    int counter = object->counter;
    if (counter > 0) {
        object->counter = counter - 1;
    }
}
