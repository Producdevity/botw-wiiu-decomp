namespace {
struct InferredObject {
    unsigned char padding_0[108];
    unsigned int value;
};
}

extern "C" unsigned int fn_034dd414(const InferredObject* object) {
    return object->value + 168u;
}
