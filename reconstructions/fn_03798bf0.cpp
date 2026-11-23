namespace {
struct InferredObject {
    unsigned char padding_0[924];
    unsigned int value;
};
}

extern "C" unsigned int fn_03798bf0(const void* raw) {
    const InferredObject* object = static_cast<const InferredObject*>(raw);
    return object->value + 84u;
}
