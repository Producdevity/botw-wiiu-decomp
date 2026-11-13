namespace {
struct InferredObject {
    unsigned char padding_0[552];
    unsigned int value;
};
}

extern "C" bool fn_039d9944(const InferredObject* object) {
    return object->value != 0;
}
