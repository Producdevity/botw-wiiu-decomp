namespace {
struct InferredObject { unsigned char padding[20]; void* member; };
}

extern "C" int fn_041598f0(void* object);

extern "C" int fn_0344a464(void* context) {
    const InferredObject* object = static_cast<const InferredObject*>(context);
    return fn_041598f0(object->member);
}
