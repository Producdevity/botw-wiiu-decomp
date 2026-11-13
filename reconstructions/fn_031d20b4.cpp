namespace {
struct InferredObject {
    unsigned char padding_0[236];
    unsigned int value;
};
}

extern "C" unsigned int fn_031d20b4(const InferredObject* object) {
    return object->value + 16u;
}
