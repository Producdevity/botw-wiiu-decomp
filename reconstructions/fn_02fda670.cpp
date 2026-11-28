namespace {
struct Object {
    unsigned char padding_0[0x1BEC];
    unsigned char first;
    unsigned char second;
};
}

extern "C" unsigned char fn_02fda670(void *source, unsigned char *out_second) {
    Object *object = static_cast<Object *>(source);
    if (out_second == 0) {
        return 0;
    }
    *out_second = object->second;
    return object->first;
}
