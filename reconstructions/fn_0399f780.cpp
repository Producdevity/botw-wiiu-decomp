namespace {
struct InferredInner {
    unsigned char padding_0[12];
    unsigned int value;
};

struct InferredObject {
    unsigned char padding_0[28];
    InferredInner* inner;
};
}

extern "C" unsigned int fn_0399f780(const InferredObject* object) {
    return object->inner->value;
}
