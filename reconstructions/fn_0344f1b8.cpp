namespace {
struct InferredInner {
    unsigned char padding_0[80];
    unsigned char value;
};

struct InferredObject {
    unsigned char padding_0[32];
    InferredInner* inner;
};
}

extern "C" unsigned char fn_0344f1b8(const InferredObject* object) {
    return object->inner->value;
}
