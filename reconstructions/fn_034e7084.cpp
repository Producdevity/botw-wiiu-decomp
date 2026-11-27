namespace {
struct Object {
    char padding_0[0xFC];
    int count;
};
}

extern "C" int fn_034e7084(void* arg0) {
    Object* object = (Object*)arg0;
    int count = object->count;
    if (count > 0) {
        return count - 1;
    }
    return -1;
}
