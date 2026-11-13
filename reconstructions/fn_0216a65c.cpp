namespace {
struct InferredObject {
    unsigned char padding_0[2296];
    unsigned int value;
};
}

extern "C" bool fn_0216a65c(const InferredObject* object) {
    return object->value != 0;
}
