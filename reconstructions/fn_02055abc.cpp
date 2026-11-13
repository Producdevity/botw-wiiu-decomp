namespace {
struct InferredInner {
    unsigned char padding_0[244];
    unsigned int value;
};

struct InferredObject {
    InferredInner* inner;
};
}

extern "C" unsigned int fn_02055abc(const InferredObject* object) {
    return object->inner->value;
}
