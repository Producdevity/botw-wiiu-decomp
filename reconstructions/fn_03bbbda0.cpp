namespace {
struct InferredObject { unsigned char padding[84]; float value; };
}

extern "C" int fn_03bbbda0(const void* firstContext, const void* secondContext) {
    const InferredObject* first = static_cast<const InferredObject*>(firstContext);
    const InferredObject* second = static_cast<const InferredObject*>(secondContext);
    float left = first->value;
    float right = second->value;
    if (left < right) return 1;
    if (left > right) return -1;
    return 0;
}
