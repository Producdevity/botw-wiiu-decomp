namespace {
struct InferredObject {
    unsigned char padding_0[260];
    unsigned int value;
};
}

extern "C" bool fn_03bb8e60(void* context) {
    const InferredObject* object = static_cast<const InferredObject*>(context);
    return object->value != 0;
}
