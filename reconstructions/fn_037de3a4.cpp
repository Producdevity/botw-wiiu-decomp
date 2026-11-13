namespace {
struct InferredObject {
    unsigned char padding_0[32];
    unsigned int value;
};
}

extern "C" bool fn_037de3a4(const InferredObject* object) {
    return object->value == 0;
}
