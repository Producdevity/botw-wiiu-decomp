namespace {
struct InferredInner {
    unsigned char value;
};

struct InferredObject {
    unsigned char padding_0[92];
    InferredInner* inner;
};
}

extern "C" unsigned char fn_0268a1a0(const InferredObject* object) {
    return object->inner->value;
}
