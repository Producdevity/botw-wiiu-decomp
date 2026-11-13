namespace {
struct InferredInner {
    unsigned char padding_0[632];
    float value;
};

struct InferredObject {
    InferredInner* inner;
};
}

extern "C" float fn_032c41b4(const InferredObject* object) {
    return object->inner->value;
}
