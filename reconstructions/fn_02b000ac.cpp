namespace {
struct InferredObject {
    unsigned char padding_0[8];
    unsigned int value;
};
}

extern "C" unsigned int fn_02b000ac(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 8) & 0x1u);
}
