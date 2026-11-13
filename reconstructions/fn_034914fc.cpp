namespace {
struct InferredObject {
    unsigned char padding_0[140];
    unsigned int value;
};
}

extern "C" unsigned int fn_034914fc(const InferredObject* object) {
    return object->value + 36u;
}
