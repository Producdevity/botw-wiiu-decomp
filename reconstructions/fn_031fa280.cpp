namespace {
struct InferredObject {
    unsigned char padding[ 992 ];
    unsigned int value;
};
}

extern "C" bool fn_031fa280(const void* raw) {
    const InferredObject* object = static_cast<const InferredObject*>(raw);
    return object->value == 2u;
}
