namespace {
struct InferredInner {
    unsigned char padding_0[168];
    unsigned char value;
};

struct InferredObject {
    unsigned char padding_0[4];
    InferredInner* inner;
};
}

extern "C" unsigned char fn_02b0c828(const InferredObject* object) {
    return object->inner->value;
}
