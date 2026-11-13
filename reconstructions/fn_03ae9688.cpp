namespace {
struct InferredObject {
    unsigned char padding[ 252 ];
    unsigned char value;
};
}

extern "C" bool fn_03ae9688(const InferredObject* object) {
    return object->value == 1u;
}
