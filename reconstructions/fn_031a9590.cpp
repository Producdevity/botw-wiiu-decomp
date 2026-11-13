namespace {
struct InferredObject {
    unsigned char padding_0[32];
    unsigned int value;
};
}

extern "C" unsigned int fn_031a9590(const InferredObject* object) {
    return (static_cast<unsigned int>(object->value) & 0x1u);
}
