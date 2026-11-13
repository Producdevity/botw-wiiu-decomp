namespace {
struct InferredObject { unsigned char padding[100]; float value; };
}

extern "C" int fn_02d49994(const void* context) {
    const InferredObject* object = static_cast<const InferredObject*>(context);
    return static_cast<int>(object->value);
}
