namespace {
struct InferredInner {
    float value;
};

struct InferredObject {
    unsigned char padding_0[16];
    InferredInner* inner;
};
}

extern "C" float fn_0366d474(const InferredObject* object) {
    return object->inner->value;
}
