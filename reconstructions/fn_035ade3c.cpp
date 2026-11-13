namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" bool fn_035ade3c(const InferredObject* object) {
    return object->value == 0;
}
