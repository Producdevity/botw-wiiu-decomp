namespace {
struct InferredObject {
    unsigned char padding_0[18136];
    unsigned int value;
};
}

extern "C" bool fn_039a5f78(const InferredObject* object) {
    return object->value != 0;
}
