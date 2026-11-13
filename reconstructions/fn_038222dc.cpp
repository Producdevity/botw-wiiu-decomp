namespace {
struct InferredInner {
    unsigned int value;
};

struct InferredObject {
    unsigned char padding_0[4];
    InferredInner* inner;
};
}

extern "C" unsigned int fn_038222dc(const InferredObject* object) {
    return object->inner->value;
}
