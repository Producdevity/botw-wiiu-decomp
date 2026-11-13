namespace {
struct InferredObject {
    unsigned char padding_0[140];
    unsigned int value;
};
}

extern "C" unsigned int fn_03491b50(const InferredObject* object) {
    return object->value + 36u;
}
