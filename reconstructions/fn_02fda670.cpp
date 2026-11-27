namespace {
struct Object {
    unsigned char padding_0[0x1BEC];
    unsigned char first;
    unsigned char second;
};
}

extern "C" unsigned char fn_02fda670(void *arg0, unsigned char *arg1) {
    Object *object = static_cast<Object *>(arg0);
    if (arg1 == 0) {
        return 0;
    }
    *arg1 = object->second;
    return object->first;
}
