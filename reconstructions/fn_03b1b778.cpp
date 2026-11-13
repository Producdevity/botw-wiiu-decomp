namespace {
struct InferredObject {
    unsigned char padding_0[972];
    unsigned int value;
};
}

extern "C" bool fn_03b1b778(const InferredObject* object) {
    return object->value != 0;
}
