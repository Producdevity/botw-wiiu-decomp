namespace {
struct InferredObject {
    unsigned char padding_0[8];
    unsigned int value;
};
}

extern "C" unsigned int fn_041fdf68(const InferredObject* object) {
    return object->value + 12u;
}
