namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" bool fn_03c124c0(const void* raw) {
    const InferredObject* object = static_cast<const InferredObject*>(raw);
    return object->value != 0;
}
