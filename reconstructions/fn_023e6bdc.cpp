namespace {
struct InferredInner {
    unsigned char value;
};

struct InferredObject {
    unsigned char padding_0[36];
    InferredInner* inner;
};
}

extern "C" unsigned char fn_023e6bdc(const InferredObject* object) {
    return object->inner->value;
}
