namespace {
struct InferredObject {
    unsigned char value;
};
}

extern "C" unsigned int fn_037e5f50(const void* raw) {
    const InferredObject* object = static_cast<const InferredObject*>(raw);
    return ((static_cast<unsigned int>(object->value) >> 1) & 0x1u);
}
