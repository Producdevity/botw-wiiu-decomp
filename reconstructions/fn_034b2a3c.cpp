namespace {
struct Object {
    char padding_0[0x40];
    int first;
    int second;
    int flags;
};
}

extern "C" int fn_034b2a3c(void* arg0) {
    Object* object = (Object*)arg0;
    if (object->flags & 8) {
        return object->second;
    }
    return object->first;
}
