namespace {
struct InferredInner {
    unsigned char padding_0[32];
    unsigned int value;
};

struct InferredObject {
    unsigned char padding_0[8];
    InferredInner* inner;
};
}

extern "C" unsigned int fn_03fbc3fc(const InferredObject* object) {
    return object->inner->value;
}
