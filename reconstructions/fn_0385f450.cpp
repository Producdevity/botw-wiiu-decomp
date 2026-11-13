namespace {
struct InferredInner {
    unsigned char padding_0[4];
    unsigned int value;
};

struct InferredObject {
    InferredInner* inner;
};
}

extern "C" unsigned int fn_0385f450(const InferredObject* object) {
    return object->inner->value;
}
