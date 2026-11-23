namespace {
struct InferredObject {
    unsigned char padding_0[84];
    unsigned int value;
};
}

extern "C" unsigned int fn_03486c1c(const void* raw) {
    const InferredObject* object = static_cast<const InferredObject*>(raw);
    return ((static_cast<unsigned int>(object->value) >> 1) & 0x1u);
}
