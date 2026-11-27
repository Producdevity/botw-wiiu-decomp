namespace {
struct Object {
    unsigned char padding_0[2];
    short count;
};
}

extern "C" void fn_029f2b40(void *arg0) {
    Object *object = static_cast<Object *>(arg0);
    if (object->count >= 0) {
        object->count++;
    }
}
