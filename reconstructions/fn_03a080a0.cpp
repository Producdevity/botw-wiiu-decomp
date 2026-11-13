namespace {
struct InferredObject {
    unsigned char padding_0[1272];
    unsigned int value;
};
}

extern "C" bool fn_03a080a0(const InferredObject* object) {
    return object->value != 0;
}
