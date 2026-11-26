struct Opaque_029505d0 {
    unsigned char padding_0[948];
    void** value;
};

extern "C" void* fn_029505d0(const Opaque_029505d0* object) {
    return object->value ? *object->value : 0;
}
