namespace {
struct InferredObject {
    unsigned char padding_0[4];
    unsigned int value;
};
}

extern "C" unsigned int fn_03bf6be8(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 21) & 0x7u);
}
