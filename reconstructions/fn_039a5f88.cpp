namespace {
struct InferredObject {
    unsigned char padding_0[16868];
    unsigned int value;
};
}

extern "C" bool fn_039a5f88(const InferredObject* object) {
    return object->value != 0;
}
