namespace {
struct InferredObject {
    unsigned char padding_0[38];
    unsigned short value;
};
}

extern "C" unsigned int fn_03458964(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 1) & 0x1u);
}
