namespace {
struct InferredObject {
    unsigned char value;
};
}

extern "C" unsigned int fn_037e655c(const void* raw) {
    const InferredObject* object = static_cast<const InferredObject*>(raw);
    return ((static_cast<unsigned int>(object->value) >> 3) & 0x1u);
}
