namespace {
struct InferredObject {
    unsigned char padding_0[32];
    unsigned int value;
};
}

extern "C" unsigned int fn_0344bf84(const InferredObject* object) {
    return object->value + 52u;
}
