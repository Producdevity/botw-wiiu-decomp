namespace {
struct InferredObject {
    unsigned char padding[ 96 ];
    unsigned int value;
};
}

extern "C" bool fn_02eab1d4(const InferredObject* object, unsigned int value) {
    return object->value == value;
}
