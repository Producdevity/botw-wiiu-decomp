namespace {
struct InferredInner {
    unsigned char padding_0[12];
    char* value;
};

struct InferredObject {
    unsigned char padding_0[24];
    InferredInner* inner;
};
}

extern "C" char* fn_03b884e8(void* context) {
    const InferredObject* object = static_cast<const InferredObject*>(context);
    return object->inner->value;
}
