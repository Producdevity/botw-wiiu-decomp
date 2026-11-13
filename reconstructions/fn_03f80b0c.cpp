namespace {
struct InferredInner {
    unsigned char padding_0[32];
    unsigned int value;
};

struct InferredObject {
    unsigned char padding_0[44];
    InferredInner* inner;
};
}

extern "C" unsigned int fn_03f80b0c(const InferredObject* object) {
    return object->inner->value;
}
