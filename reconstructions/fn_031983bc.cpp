namespace {
struct InferredObject {
    unsigned char padding_0[134];
    unsigned char value;
};
}

extern "C" unsigned int fn_031983bc(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 6) & 0x1u);
}
