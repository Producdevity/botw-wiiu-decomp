namespace {
struct InferredObject {
    unsigned char padding_0[28];
    unsigned int value;
};
}

extern "C" unsigned int fn_0344f334(const InferredObject* object) {
    return object->value + 68u;
}
