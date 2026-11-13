namespace {
struct InferredObject {
    unsigned char padding_0[7912];
    unsigned int value;
};
}

extern "C" bool fn_02fecd18(const InferredObject* object) {
    return object->value != 0;
}
