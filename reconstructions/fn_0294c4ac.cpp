namespace {
struct InferredInner { char* pointer; };
struct InferredObject { unsigned char padding[948]; InferredInner* inner; };
}

extern "C" char* fn_0294c4ac(const InferredObject* object) {
    InferredInner* inner = object->inner;
    if (!inner || !inner->pointer) return 0;
    return inner->pointer + 12;
}
