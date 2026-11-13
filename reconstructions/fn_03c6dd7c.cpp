namespace {
struct InferredObject {
    unsigned char padding[ 12 ];
    unsigned short value;
};
}

extern "C" bool fn_03c6dd7c(const InferredObject* object) {
    return object->value == 65279u;
}
