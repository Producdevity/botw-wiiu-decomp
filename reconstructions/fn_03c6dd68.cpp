namespace {
struct InferredObject {
    unsigned char padding[ 12 ];
    unsigned short value;
};
}

extern "C" bool fn_03c6dd68(const InferredObject* object) {
    return object->value == 65534u;
}
