namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" unsigned int fn_033f8c9c(const InferredObject* object) {
    return object->value + 8u;
}
