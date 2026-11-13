namespace {
struct InferredObject {
    unsigned char padding[ 1204 ];
    unsigned int value;
};
}

extern "C" bool fn_02e9c81c(const InferredObject* object, unsigned int value) {
    return object->value == value;
}
