namespace {
struct InferredObject {
    unsigned char padding_0[356];
    unsigned int value;
};
}

extern "C" unsigned int fn_031a78cc(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 5) & 0x1u);
}
