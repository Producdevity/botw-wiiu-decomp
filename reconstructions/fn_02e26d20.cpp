namespace {
struct InferredObject {
    unsigned char padding_0[320];
    unsigned int value;
};
}

extern "C" unsigned int fn_02e26d20(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 3) & 0x1u);
}
