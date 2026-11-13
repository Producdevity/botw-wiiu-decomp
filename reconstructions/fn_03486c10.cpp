namespace {
struct InferredObject {
    unsigned char padding_0[84];
    unsigned int value;
};
}

extern "C" unsigned int fn_03486c10(const InferredObject* object) {
    return (static_cast<unsigned int>(object->value) & 0x1u);
}
