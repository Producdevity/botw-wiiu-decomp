namespace {
struct InferredObject {
    unsigned char padding_0[780];
    unsigned int value;
};
}

extern "C" unsigned int fn_03a1269c(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 23) & 0x1u);
}
