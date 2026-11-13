namespace {
struct InferredInner {
    unsigned char padding_0[12];
    unsigned int value;
};

struct InferredObject {
    unsigned char padding_0[24];
    InferredInner* inner;
};
}

extern "C" unsigned int fn_03b9140c(const InferredObject* object) {
    return object->inner->value;
}
