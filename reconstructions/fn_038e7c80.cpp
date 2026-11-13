namespace {
struct InferredObject {
    unsigned char padding_0[4];
    unsigned int value;
};
}

extern "C" unsigned int fn_038e7c80(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) << 4) & 0xfffffff0u);
}
