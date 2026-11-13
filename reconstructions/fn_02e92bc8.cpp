namespace {
struct InferredObject {
    unsigned char padding[ 52 ];
    unsigned int value;
};
}

extern "C" bool fn_02e92bc8(const InferredObject* object) {
    return object->value == 255u;
}
