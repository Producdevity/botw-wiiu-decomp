namespace {
struct InferredInner {
    unsigned char padding_0[104];
    unsigned short value;
};

struct InferredObject {
    unsigned char padding_0[140];
    InferredInner* inner;
};
}

extern "C" unsigned short fn_0349e99c(const InferredObject* object) {
    return object->inner->value;
}
