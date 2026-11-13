namespace {
struct InferredInner {
    unsigned char padding_0[60];
    unsigned int value;
};

struct InferredObject {
    unsigned char padding_0[12];
    InferredInner* inner;
};
}

extern "C" unsigned int fn_02e73e38(const InferredObject* object) {
    return object->inner->value;
}
