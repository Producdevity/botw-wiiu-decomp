namespace {
struct InferredInner {
    unsigned char padding_0[12];
    unsigned int value;
};

struct InferredObject {
    unsigned char padding_0[56];
    InferredInner* inner;
};
}

extern "C" unsigned int fn_037dd4d8(const InferredObject* object) {
    return object->inner->value;
}
