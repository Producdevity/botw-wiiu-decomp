namespace {
struct Object {
    unsigned char padding_0[0x370];
    int count;
};
}

extern "C" void fn_03669d7c(void *owner) {
    Object *object = static_cast<Object *>(owner);
    if (object->count != 0) {
        object->count--;
    }
}
