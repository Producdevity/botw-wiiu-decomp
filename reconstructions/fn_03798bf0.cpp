namespace {
struct InferredObject {
    unsigned char padding_0[924];
    unsigned int value;
};
}

extern "C" unsigned int fn_03798bf0(const InferredObject* object) {
    return object->value + 84u;
}
