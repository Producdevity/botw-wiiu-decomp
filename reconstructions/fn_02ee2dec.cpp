namespace {
struct InferredObject {
    unsigned char padding_0[680];
    unsigned int value;
};
}

extern "C" bool fn_02ee2dec(const InferredObject* object) {
    return object->value != 0;
}
