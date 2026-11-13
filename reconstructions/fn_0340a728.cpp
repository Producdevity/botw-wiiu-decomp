namespace {
struct InferredVector { float x; float y; float z; };
struct InferredInner { unsigned char padding[272]; float x; float y; float z; };
struct InferredObject { unsigned char padding[2264]; InferredInner* inner; };
}

extern "C" void fn_0340a728(void* context, const void* valueContext) {
    InferredObject* object = static_cast<InferredObject*>(context);
    const InferredVector* value = static_cast<const InferredVector*>(valueContext);
    object->inner->x = value->x;
    object->inner->y = value->y;
    object->inner->z = value->z;
}
