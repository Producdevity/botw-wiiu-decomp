namespace {
struct InferredObject {
    unsigned char padding[ 468 ];
    unsigned int value;
};
}

extern "C" bool fn_02a2d920(const InferredObject* object, unsigned int value) {
    return object->value == value;
}
