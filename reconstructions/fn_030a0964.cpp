namespace {
struct InferredInner {
    unsigned char padding_0[64];
    unsigned int value;
};

struct InferredObject {
    unsigned char padding_0[92];
    InferredInner* inner;
};
}

extern "C" unsigned int fn_030a0964(const InferredObject* object) {
    return object->inner->value;
}
