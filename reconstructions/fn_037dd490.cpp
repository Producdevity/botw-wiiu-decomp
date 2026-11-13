namespace {
struct InferredInner {
    unsigned char padding_0[4];
    unsigned int value;
};

struct InferredObject {
    unsigned char padding_0[44];
    InferredInner* inner;
};
}

extern "C" unsigned int fn_037dd490(const InferredObject* object) {
    return object->inner->value;
}
