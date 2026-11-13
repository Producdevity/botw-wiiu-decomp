namespace {
struct InferredObject {
    unsigned char padding[ 12740 ];
    unsigned int value;
};
}

extern "C" bool fn_02eaa5a4(const InferredObject* object, unsigned int value) {
    return object->value == value;
}
