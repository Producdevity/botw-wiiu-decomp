namespace {
struct InferredInner {
    unsigned char value;
};

struct InferredObject {
    unsigned char padding_0[460];
    InferredInner* inner;
};
}

extern "C" unsigned char fn_02bc4900(void* context) {
    const InferredObject* object = static_cast<const InferredObject*>(context);
    return object->inner->value;
}
