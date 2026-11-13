namespace {
struct InferredObject {
    unsigned char padding_0[372];
    unsigned short value;
};
}

extern "C" unsigned int fn_029a3750(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 1) & 0x1u);
}
