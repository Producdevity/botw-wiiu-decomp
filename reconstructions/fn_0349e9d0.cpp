namespace {
struct InferredObject {
    unsigned char padding_0[140];
    unsigned int value;
};
}

extern "C" unsigned int fn_0349e9d0(const InferredObject* object) {
    return object->value + 76u;
}
