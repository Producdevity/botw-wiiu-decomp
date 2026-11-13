namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" unsigned int fn_0396d140(const InferredObject* object) {
    return object->value + 4u;
}
