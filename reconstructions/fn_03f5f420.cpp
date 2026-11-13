namespace {
struct InferredObject {
    unsigned char padding_0[4];
    unsigned int value;
};
}

extern "C" bool fn_03f5f420(const InferredObject* object) {
    return object->value == 0;
}
