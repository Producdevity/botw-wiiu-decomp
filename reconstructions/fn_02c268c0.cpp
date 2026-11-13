namespace {
struct InferredObject {
    unsigned char padding_0[516];
    unsigned int value;
};
}

extern "C" bool fn_02c268c0(const InferredObject* object) {
    return object->value != 0;
}
