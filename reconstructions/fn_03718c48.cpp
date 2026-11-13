namespace {
struct InferredObject {
    unsigned char padding[ 50 ];
    unsigned char value;
};
}

extern "C" bool fn_03718c48(const InferredObject* object) {
    return object->value == 2u;
}
