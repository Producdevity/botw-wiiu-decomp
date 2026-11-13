namespace {
struct InferredInner {
    unsigned int value;
};

struct InferredObject {
    InferredInner* inner;
};
}

extern "C" unsigned int fn_033defd0(const InferredObject* object) {
    return object->inner->value;
}
