namespace {
struct InferredObject {
    unsigned char padding[ 1600 ];
    unsigned int value;
};
}

extern "C" bool fn_02ea48dc(const InferredObject* object) {
    return object->value == 1u;
}
