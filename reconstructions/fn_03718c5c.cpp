namespace {
struct InferredObject {
    unsigned char padding[ 50 ];
    unsigned char value;
};
}

extern "C" bool fn_03718c5c(const InferredObject* object) {
    return object->value == 1u;
}
