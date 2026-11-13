namespace {
struct InferredInner {
    unsigned char padding_0[140];
    unsigned int value;
};

struct InferredObject {
    unsigned char padding_0[8];
    InferredInner* inner;
};
}

extern "C" unsigned int fn_035131e4(const InferredObject* object) {
    return object->inner->value;
}
