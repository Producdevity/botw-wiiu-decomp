namespace {
struct InferredObject {
    unsigned char padding_0[4];
    unsigned int value;
};
}

extern "C" unsigned int fn_0316eb88(const InferredObject* object) {
    return object->value + 12u;
}
