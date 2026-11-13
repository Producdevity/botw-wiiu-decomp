namespace {
struct InferredInner {
    unsigned char padding_0[24];
    unsigned int value;
};

struct InferredObject {
    unsigned char padding_0[12];
    InferredInner* inner;
};
}

extern "C" unsigned int fn_0381264c(const InferredObject* object) {
    return object->inner->value;
}
