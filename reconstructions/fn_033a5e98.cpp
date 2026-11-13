namespace {
struct InferredObject {
    unsigned char padding_0[60];
    unsigned int value;
};
}

extern "C" bool fn_033a5e98(const InferredObject* object) {
    return object->value != 0;
}
