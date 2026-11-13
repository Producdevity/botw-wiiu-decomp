namespace {
struct InferredObject {
    unsigned char padding_0[38];
    unsigned short value;
};
}

extern "C" unsigned int fn_03458ca8(const InferredObject* object) {
    return (static_cast<unsigned int>(object->value) & 0x1u);
}
