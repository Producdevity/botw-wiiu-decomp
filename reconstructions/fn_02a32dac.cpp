namespace {
struct InferredObject {
    unsigned char padding[ 258 ];
    unsigned char value;
};
}

extern "C" bool fn_02a32dac(const InferredObject* object) {
    return object->value == 1u;
}
