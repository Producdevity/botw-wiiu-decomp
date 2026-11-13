namespace {
struct InferredObject {
    unsigned char padding[ 700 ];
    unsigned int value;
};
}

extern "C" bool fn_02e7b548(const InferredObject* object) {
    return object->value == 1u;
}
