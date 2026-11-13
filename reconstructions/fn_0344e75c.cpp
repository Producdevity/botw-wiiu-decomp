namespace {
struct InferredInner {
    unsigned char padding_0[100];
    unsigned int value;
};

struct InferredObject {
    unsigned char padding_0[4];
    InferredInner* inner;
};
}

extern "C" unsigned int fn_0344e75c(const InferredObject* object) {
    return object->inner->value;
}
