namespace {
struct InferredInner {
    unsigned char padding_0[8];
    unsigned short value;
};

struct InferredObject {
    unsigned char padding_0[8];
    InferredInner* inner;
};
}

extern "C" unsigned short fn_03c457dc(const InferredObject* object) {
    return object->inner->value;
}
