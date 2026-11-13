namespace {
struct InferredObject {
    unsigned char padding_0[7116];
    unsigned int value;
};
}

extern "C" bool fn_02fbcb84(const InferredObject* object) {
    return object->value != 0;
}
