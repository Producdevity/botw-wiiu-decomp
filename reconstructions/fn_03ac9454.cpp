namespace {
struct Object {
    char padding_0[0x67C];
    int mode;
};
}

extern "C" void fn_03ac9454(void* arg0, int enabled) {
    Object* object = (Object*)arg0;
    int mode = 5;
    if (enabled != 0) {
        mode = 3;
    }
    object->mode = mode;
}
