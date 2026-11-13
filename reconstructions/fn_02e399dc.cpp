namespace {
struct InferredObject {
    unsigned char padding_0[20];
    unsigned int value;
};
}

extern "C" bool fn_02e399dc(const InferredObject* object) {
    return object->value != 0;
}
