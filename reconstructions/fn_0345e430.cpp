namespace {
struct InferredInner {
    unsigned char padding_0[232];
    float value;
};

struct InferredObject {
    unsigned char padding_0[124];
    InferredInner* inner;
};
}

extern "C" float fn_0345e430(const InferredObject* object) {
    return object->inner->value;
}
