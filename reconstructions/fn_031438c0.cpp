namespace {
struct InferredInner {
    unsigned char padding_0[12];
    unsigned int value;
};

struct InferredObject {
    unsigned char padding_0[144];
    InferredInner* inner;
};
}

extern "C" unsigned int fn_031438c0(const InferredObject* object) {
    return object->inner->value;
}
