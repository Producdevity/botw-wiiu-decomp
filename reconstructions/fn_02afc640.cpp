namespace {
struct InferredVector { float x; float y; float z; };
struct InferredInner { unsigned char padding[108]; float x; float y; float z; };
struct InferredObject { unsigned char padding[4]; InferredInner* inner; };
}

extern "C" void fn_02afc640(void* context, const void* valueContext) {
    InferredObject* object = static_cast<InferredObject*>(context);
    const InferredVector* value = static_cast<const InferredVector*>(valueContext);
    InferredInner* inner = object->inner;
    if (!inner) return;
    inner->x = value->x;
    inner->y = value->y;
    inner->z = value->z;
}
