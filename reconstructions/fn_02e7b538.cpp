namespace {
struct InferredObject {
    unsigned char padding_0[700];
    unsigned int value;
};
}

extern "C" bool fn_02e7b538(const InferredObject* object) {
    return object->value == 0;
}
