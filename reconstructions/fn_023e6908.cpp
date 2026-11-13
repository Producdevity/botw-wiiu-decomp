namespace {
struct InferredInner {
    unsigned char value;
};

struct InferredObject {
    unsigned char padding_0[32];
    InferredInner* inner;
};
}

extern "C" unsigned char fn_023e6908(const InferredObject* object) {
    return object->inner->value;
}
