namespace {
struct InferredObject {
    unsigned char padding_0[4];
    unsigned int value;
};
}

extern "C" unsigned int fn_02711d04(const InferredObject* object) {
    return object->value - 160u;
}
