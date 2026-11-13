namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" bool fn_03c124c0(const InferredObject* object) {
    return object->value != 0;
}
