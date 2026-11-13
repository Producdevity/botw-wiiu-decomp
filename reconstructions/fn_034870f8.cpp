namespace {
struct InferredObject {
    unsigned char padding_0[92];
    unsigned int value;
};
}

extern "C" unsigned int fn_034870f8(const InferredObject* object) {
    return object->value + 16u;
}
