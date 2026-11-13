namespace {
struct InferredObject {
    unsigned char padding[ 4 ];
    unsigned int value;
};
}

extern "C" bool fn_02f0cb68(const InferredObject* object) {
    return object->value == 1u;
}
