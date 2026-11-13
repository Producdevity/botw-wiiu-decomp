namespace {
struct InferredObject {
    unsigned char padding_0[20];
    unsigned int value;
};
}

extern "C" unsigned int fn_03a17464(const InferredObject* object) {
    return object->value + 988u;
}
