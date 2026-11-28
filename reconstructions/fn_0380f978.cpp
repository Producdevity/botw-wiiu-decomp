namespace {
struct Object {
    char padding_0[0x64];
    unsigned int flags;
};
}

extern "C" int fn_0380f978(void* owner) {
    Object* object = (Object*)owner;
    if ((object->flags >> 4) & 1) {
        return 0;
    }
    return 2;
}
