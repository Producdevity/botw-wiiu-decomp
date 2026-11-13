namespace {
struct InferredObject {
    unsigned char padding_0[16];
    unsigned int value;
};
}

extern "C" bool fn_02c581dc(const InferredObject* object) {
    return object->value == 0;
}
