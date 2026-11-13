namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" bool fn_034eb9dc(const InferredObject* object) {
    return object->value != 0;
}
