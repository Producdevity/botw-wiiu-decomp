namespace {
struct InferredInner {
    unsigned int value;
};

struct InferredObject {
    unsigned char padding_0[104];
    InferredInner* inner;
};
}

extern "C" unsigned int fn_0385df04(const InferredObject* object) {
    return object->inner->value;
}
