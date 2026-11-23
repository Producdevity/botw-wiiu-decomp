namespace {
struct InferredObject {
    unsigned char padding_0[2020];
    unsigned int value;
};
}

extern "C" unsigned int fn_02a10068(const void* raw) {
    const InferredObject* object = static_cast<const InferredObject*>(raw);
    return (static_cast<unsigned int>(object->value) & 0x1u);
}
