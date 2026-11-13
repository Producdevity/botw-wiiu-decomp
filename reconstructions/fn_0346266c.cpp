namespace {
struct InferredInner {
    unsigned char padding_0[264];
    float value;
};

struct InferredObject {
    unsigned char padding_0[124];
    InferredInner* inner;
};
}

extern "C" float fn_0346266c(const InferredObject* object) {
    return object->inner->value;
}
