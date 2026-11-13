namespace {
struct InferredInner {
    unsigned char padding_0[20];
    float value;
};

struct InferredObject {
    unsigned char padding_0[8];
    InferredInner* inner;
};
}

extern "C" float fn_04096790(const InferredObject* object) {
    return object->inner->value;
}
