namespace {
struct Source {
    unsigned char padding_0[8];
    int value;
};

struct Object {
    void *source;
    int value;
};
}

extern "C" void fn_03baa3e8(void *arg0, void *arg1) {
    Object *object = static_cast<Object *>(arg0);
    object->source = arg1;
    if (arg1 != 0) {
        object->value = static_cast<Source *>(arg1)->value;
    }
}
