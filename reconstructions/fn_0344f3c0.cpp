namespace {
struct InferredInner {
    unsigned char padding_0[76];
    unsigned char value;
};

struct InferredObject {
    unsigned char padding_0[32];
    InferredInner* inner;
};
}

extern "C" unsigned char fn_0344f3c0(const InferredObject* object) {
    return object->inner->value;
}
