namespace {
struct InferredInner {
    float value;
};

struct InferredObject {
    unsigned char padding_0[36];
    InferredInner* inner;
};
}

extern "C" float fn_02182304(const InferredObject* object) {
    return object->inner->value;
}
