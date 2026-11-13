namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" unsigned int fn_02d78a80(const InferredObject* object) {
    return object->value + 60u;
}
