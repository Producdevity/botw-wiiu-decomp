namespace {
struct InferredObject {
    unsigned char padding_0[128];
    unsigned int value;
};
}

extern "C" bool fn_02550c28(const InferredObject* object) {
    return object->value != 0;
}
