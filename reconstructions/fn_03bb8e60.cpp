namespace {
struct InferredObject {
    unsigned char padding_0[260];
    unsigned int value;
};
}

extern "C" bool fn_03bb8e60(const InferredObject* object) {
    return object->value != 0;
}
