namespace {
struct InferredInner {
    unsigned char padding_0[164];
    unsigned int value;
};

struct InferredObject {
    InferredInner* inner;
};
}

extern "C" unsigned int fn_0385ed54(const InferredObject* object) {
    return object->inner->value;
}
