namespace {
struct InferredObject {
    unsigned char padding_0[2284];
    unsigned int value;
};
}

extern "C" unsigned int fn_02d82148(const void* raw) {
    const InferredObject* object = static_cast<const InferredObject*>(raw);
    return (static_cast<unsigned int>(object->value) & 0x1u);
}
