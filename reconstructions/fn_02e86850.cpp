namespace {
struct InferredObject {
    unsigned char padding_0[64];
    unsigned int value;
};
}

extern "C" bool fn_02e86850(const InferredObject* object) {
    return object->value != 0;
}
