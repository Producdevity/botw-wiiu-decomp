namespace {
struct InferredObject {
    unsigned char padding_0[92];
    unsigned int value;
};
}

extern "C" bool fn_03177ba0(const InferredObject* object) {
    return object->value != 0;
}
