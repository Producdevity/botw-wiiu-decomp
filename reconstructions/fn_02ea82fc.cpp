namespace {
struct InferredObject {
    unsigned char padding[ 12736 ];
    unsigned int value;
};
}

extern "C" bool fn_02ea82fc(const InferredObject* object, unsigned int value) {
    return object->value == value;
}
