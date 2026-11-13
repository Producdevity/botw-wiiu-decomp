namespace {
struct InferredObject {
    unsigned char padding_0[8];
    unsigned int value;
};
}

extern "C" bool fn_038e4ff0(const InferredObject* object) {
    return object->value != 0;
}
