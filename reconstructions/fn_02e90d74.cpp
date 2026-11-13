namespace {
struct InferredObject {
    unsigned char padding_0[1600];
    unsigned int value;
};
}

extern "C" bool fn_02e90d74(const InferredObject* object) {
    return object->value == 0;
}
