namespace {
struct InferredObject {
    unsigned char padding[ 40 ];
    unsigned int value;
};
}

extern "C" bool fn_0397df70(const InferredObject* object) {
    return object->value == 1u;
}
