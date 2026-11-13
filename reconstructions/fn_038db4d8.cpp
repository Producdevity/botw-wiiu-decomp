namespace {
struct InferredObject {
    unsigned char padding_0[4];
    unsigned int value;
};
}

extern "C" unsigned int fn_038db4d8(const InferredObject* object) {
    return object->value + 76u;
}
