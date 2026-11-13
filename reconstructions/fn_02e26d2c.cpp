namespace {
struct InferredObject {
    unsigned char padding_0[320];
    unsigned int value;
};
}

extern "C" unsigned int fn_02e26d2c(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 4) & 0x1u);
}
