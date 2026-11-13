namespace {
struct InferredObject {
    unsigned char padding_0[12];
    unsigned int value;
};
}

extern "C" bool fn_036295e4(const InferredObject* object) {
    return object->value != 0;
}
