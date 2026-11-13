namespace {
struct InferredObject {
    unsigned char padding[ 992 ];
    unsigned int value;
};
}

extern "C" bool fn_031fa280(const InferredObject* object) {
    return object->value == 2u;
}
