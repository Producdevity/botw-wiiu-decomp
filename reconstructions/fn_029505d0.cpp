namespace {
struct Object {
    unsigned char padding_0[948];
    void** value;
};
}

extern "C" void* fn_029505d0(const Object* object) {
    return object->value ? *object->value : 0;
}
