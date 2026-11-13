namespace {
struct InferredInner {
    unsigned char padding_0[48];
    unsigned int value;
};

struct InferredObject {
    unsigned char padding_0[8];
    InferredInner* inner;
};
}

extern "C" unsigned int fn_03fbc4d8(const InferredObject* object) {
    return object->inner->value;
}
