namespace {
struct InferredInner {
    float value;
};

struct InferredObject {
    unsigned char padding_0[24];
    InferredInner* inner;
};
}

extern "C" float fn_0230798c(const InferredObject* object) {
    return object->inner->value;
}
