namespace {
struct Object {
    unsigned char padding_0[0x40];
    signed char direction;
};
}

extern "C" void fn_033a6174(void *object, signed char direction) {
    if (direction != -1 && direction != 1) {
        direction = 1;
    }
    static_cast<Object *>(object)->direction = direction;
}
