namespace {
struct InferredInner {
    unsigned char padding_0[8];
    unsigned int value;
};

struct InferredObject {
    unsigned char padding_0[24];
    InferredInner* inner;
};
}

extern "C" unsigned int fn_03ba004c(const InferredObject* object) {
    return object->inner->value;
}
