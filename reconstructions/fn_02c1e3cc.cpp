namespace {
struct InferredObject {
    unsigned char padding_0[1076];
    unsigned int value;
};
}

extern "C" bool fn_02c1e3cc(const InferredObject* object) {
    return object->value == 0;
}
