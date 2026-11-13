namespace {
struct InferredObject {
    unsigned char padding_0[76];
    unsigned int value;
};
}

extern "C" bool fn_034f19d4(const InferredObject* object) {
    return object->value != 0;
}
