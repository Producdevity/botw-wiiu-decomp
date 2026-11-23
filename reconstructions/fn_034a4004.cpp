namespace {
struct InferredObject {
    unsigned char padding_0[168];
    unsigned int value;
};
}

extern "C" unsigned int fn_034a4004(const void* raw) {
    const InferredObject* object = static_cast<const InferredObject*>(raw);
    return ((static_cast<unsigned int>(object->value) >> 18) & 0x1u);
}
