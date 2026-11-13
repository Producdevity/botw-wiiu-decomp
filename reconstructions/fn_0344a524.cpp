namespace {
struct InferredObject {
    unsigned char padding_0[28];
    unsigned int value;
};
}

extern "C" unsigned int fn_0344a524(const InferredObject* object) {
    return object->value + 28u;
}
