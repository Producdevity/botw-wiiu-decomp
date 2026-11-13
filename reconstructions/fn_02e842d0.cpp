namespace {
struct InferredInner {
    unsigned char padding_0[12];
    float value;
};

struct InferredObject {
    unsigned char padding_0[40];
    InferredInner* inner;
};
}

extern "C" float fn_02e842d0(const InferredObject* object) {
    return object->inner->value;
}
