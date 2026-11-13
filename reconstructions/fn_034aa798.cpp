namespace {
struct InferredInner {
    unsigned char padding_0[4];
    float value;
};

struct InferredObject {
    unsigned char padding_0[140];
    InferredInner* inner;
};
}

extern "C" float fn_034aa798(const InferredObject* object) {
    return object->inner->value;
}
