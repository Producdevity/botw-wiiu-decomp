namespace {
struct InferredInner {
    unsigned char padding_0[240];
    float value;
};

struct InferredObject {
    unsigned char padding_0[124];
    InferredInner* inner;
};
}

extern "C" float fn_0345e43c(const InferredObject* object) {
    return object->inner->value;
}
