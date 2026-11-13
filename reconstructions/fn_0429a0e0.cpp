namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" bool fn_0429a0e0(const InferredObject* object) {
    return object->value != 0;
}
