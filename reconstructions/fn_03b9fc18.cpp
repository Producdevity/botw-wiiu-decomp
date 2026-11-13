namespace {
struct InferredObject {
    unsigned char padding_0[72];
    unsigned int value;
};
}

extern "C" bool fn_03b9fc18(const InferredObject* object) {
    return object->value != 0;
}
