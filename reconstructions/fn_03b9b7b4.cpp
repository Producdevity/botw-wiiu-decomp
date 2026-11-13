namespace {
struct InferredObject {
    unsigned char padding_0[4];
    unsigned int value;
};
}

extern "C" unsigned int fn_03b9b7b4(const InferredObject* object) {
    return object->value + 100u;
}
