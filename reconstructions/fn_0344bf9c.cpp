namespace {
struct InferredInner {
    unsigned char padding_0[68];
    unsigned int value;
};

struct InferredObject {
    unsigned char padding_0[32];
    InferredInner* inner;
};
}

extern "C" unsigned int fn_0344bf9c(const InferredObject* object) {
    return object->inner->value;
}
