namespace {
struct InferredInner {
    unsigned char padding_0[276];
    unsigned char value;
};

struct InferredObject {
    unsigned char padding_0[4];
    InferredInner* inner;
};
}

extern "C" unsigned char fn_03972d58(const InferredObject* object) {
    return object->inner->value;
}
