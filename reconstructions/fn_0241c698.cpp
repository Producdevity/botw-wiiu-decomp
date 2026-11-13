namespace {
struct Float3 {
    float x;
    float y;
    float z;
};
struct InferredObject {
    unsigned char padding_0[40];
    const Float3* source;
};
}

extern "C" void fn_0241c698(const void* context, void* destination) {
    const InferredObject* object = static_cast<const InferredObject*>(context);
    *static_cast<Float3*>(destination) = *object->source;
}
