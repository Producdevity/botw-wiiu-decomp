namespace {
struct InferredInner {
    unsigned char padding_0[180];
    unsigned int value;
};

struct InferredObject {
    unsigned char padding_0[696];
    InferredInner* inner;
};
}

extern "C" unsigned int fn_036f3c34(const InferredObject* object) {
    return object->inner->value;
}
