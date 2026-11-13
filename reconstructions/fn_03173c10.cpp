namespace {
struct InferredObject {
    unsigned char padding_0[2061];
    unsigned char value;
};
}

extern "C" unsigned int fn_03173c10(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 1) & 0x1u);
}
