namespace {
struct InferredInner {
    unsigned char padding_0[22];
    unsigned char value;
};

struct InferredObject {
    unsigned char padding_0[392];
    InferredInner* inner;
};
}

extern "C" unsigned char fn_03b59e20(const InferredObject* object) {
    return object->inner->value;
}
