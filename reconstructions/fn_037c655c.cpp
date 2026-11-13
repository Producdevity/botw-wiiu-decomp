namespace {
struct InferredInner {
    unsigned char padding_0[96];
    unsigned int value;
};

struct InferredObject {
    unsigned char padding_0[1596];
    InferredInner* inner;
};
}

extern "C" unsigned int fn_037c655c(const InferredObject* object) {
    return object->inner->value;
}
