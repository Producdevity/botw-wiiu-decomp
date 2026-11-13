namespace {
struct InferredObject {
    unsigned char padding_0[8];
    unsigned int value;
};
}

extern "C" bool fn_03c3515c(const InferredObject* object) {
    return object->value != 0;
}
