namespace {
struct InferredObject {
    unsigned char padding_0[140];
    unsigned int value;
};
}

extern "C" unsigned int fn_03490e00(const InferredObject* object) {
    return object->value + 4u;
}
