namespace {
struct InferredObject {
    unsigned char padding_0[92];
    char* value;
};
}

extern "C" char* fn_034870f8(void* context) {
    const InferredObject* object = static_cast<const InferredObject*>(context);
    return object->value + 16;
}
