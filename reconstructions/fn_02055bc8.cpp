namespace {
struct InferredObject {
    unsigned char padding_0[12];
    unsigned int value;
};
}

extern "C" unsigned int fn_02055bc8(const InferredObject* object) {
    return (static_cast<unsigned int>(object->value) & 0x1u);
}
