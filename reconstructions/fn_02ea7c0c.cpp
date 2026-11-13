namespace {
struct InferredObject {
    unsigned char padding[ 212 ];
    unsigned int value;
};
}

extern "C" bool fn_02ea7c0c(const InferredObject* object) {
    return object->value == 6u;
}
