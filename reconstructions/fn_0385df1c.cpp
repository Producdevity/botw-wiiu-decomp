namespace {
struct InferredInner {
    unsigned char padding_0[8];
    unsigned int value;
};

struct InferredObject {
    unsigned char padding_0[104];
    InferredInner* inner;
};
}

extern "C" unsigned int fn_0385df1c(const InferredObject* object) {
    return object->inner->value;
}
