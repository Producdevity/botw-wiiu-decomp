namespace {
struct InferredInner {
    float value;
};

struct InferredObject {
    unsigned char padding_0[120];
    InferredInner* inner;
};
}

extern "C" float fn_02108eb0(const InferredObject* object) {
    return object->inner->value;
}
