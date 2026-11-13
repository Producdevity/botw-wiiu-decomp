namespace {
struct InferredInner {
    unsigned char padding_0[24];
    float value;
};

struct InferredObject {
    unsigned char padding_0[8];
    InferredInner* inner;
};
}

extern "C" float fn_0409679c(const InferredObject* object) {
    return object->inner->value;
}
