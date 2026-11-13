namespace {
struct InferredObject { unsigned char padding[640]; float value; };
}

extern "C" int fn_02b61ed4(const void* firstContext, const void* secondContext) {
    const InferredObject* first = static_cast<const InferredObject*>(firstContext);
    const InferredObject* second = static_cast<const InferredObject*>(secondContext);
    float left = first->value;
    float right = second->value;
    if (left > right) return -1;
    return left < right;
}
