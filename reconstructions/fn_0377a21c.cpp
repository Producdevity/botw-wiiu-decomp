namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" bool fn_0377a21c(const InferredObject* object) {
    return object->value != 0;
}
