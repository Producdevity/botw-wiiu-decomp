namespace {
struct InferredObject {
    unsigned char padding[ 12 ];
    unsigned int value;
};
}

extern "C" bool fn_037f57ac(const InferredObject* object) {
    return object->value == 1u;
}
