namespace {
struct InferredObject {
    unsigned char padding_0[4];
    unsigned int value;
};
}

extern "C" unsigned int fn_0344e73c(const InferredObject* object) {
    return object->value + 112u;
}
