namespace {
struct InferredObject {
    unsigned char padding_0[18136];
    unsigned int value;
};
}

extern "C" bool fn_039a5f78(const void* raw) {
    const InferredObject* object = static_cast<const InferredObject*>(raw);
    return object->value != 0;
}
