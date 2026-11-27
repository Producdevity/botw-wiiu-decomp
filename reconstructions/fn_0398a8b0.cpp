namespace {
struct Object {
    char padding_0[0x24];
    void *self;
};
}

extern "C" void fn_0398a8b0(void *arg0, int arg1) {
    Object *object = (Object *) arg0;
    void *self = 0;
    if (arg1 != 0) {
        self = arg0;
    }
    object->self = self;
}
