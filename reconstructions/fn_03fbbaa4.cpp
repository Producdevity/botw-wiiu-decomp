namespace {
struct InferredObject {
    unsigned char padding_0[8];
    unsigned int value;
};
}

extern "C" unsigned int fn_03fbbaa4(const InferredObject* object) {
    return object->value + 208u;
}
