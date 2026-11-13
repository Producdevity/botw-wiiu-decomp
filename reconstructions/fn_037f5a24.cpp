namespace {
struct InferredObject {
    unsigned char padding_0[4];
    unsigned char value;
};
}

extern "C" unsigned int fn_037f5a24(const InferredObject* object) {
    return (static_cast<unsigned int>(object->value) & 0x1u);
}
