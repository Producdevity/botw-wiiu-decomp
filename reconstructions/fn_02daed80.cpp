namespace {
struct InferredObject {
    unsigned char padding_0[28];
    unsigned int value;
};
}

extern "C" unsigned int fn_02daed80(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 20) & 0x1u);
}
