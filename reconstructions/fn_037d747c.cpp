namespace {
struct InferredObject {
    unsigned char padding_0[152];
    unsigned char value;
};
}

extern "C" unsigned int fn_037d747c(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 6) & 0x1u);
}
