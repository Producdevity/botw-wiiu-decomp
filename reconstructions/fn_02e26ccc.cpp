namespace {
struct InferredObject {
    unsigned char padding_0[316];
    unsigned int value;
};
}

extern "C" unsigned int fn_02e26ccc(const InferredObject* object) {
    return (static_cast<unsigned int>(object->value) & 0x1u);
}
