struct FieldOwner {
    char pad0[0xc];
    void* value;
};

extern "C" void* fn_0314dae8(const FieldOwner* owner) {
    return owner->value;
}
