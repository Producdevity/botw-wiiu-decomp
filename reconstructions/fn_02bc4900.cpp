namespace {
struct InferredInner {
    unsigned char value;
};

struct InferredObject {
    unsigned char padding_0[460];
    InferredInner* inner;
};
}

extern "C" unsigned char fn_02bc4900(const InferredObject* object) {
    return object->inner->value;
}
