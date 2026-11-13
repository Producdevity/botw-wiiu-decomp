namespace {
struct InferredObject {
    unsigned char padding_0[52];
    unsigned int value;
};
}

extern "C" bool fn_03bd5c38(const InferredObject* object) {
    return object->value != 0;
}
