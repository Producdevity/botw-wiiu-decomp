namespace {
struct InferredObject { unsigned char padding[20]; signed char* value; };
}

extern "C" bool fn_03626200(const void* context) {
    const InferredObject* object = static_cast<const InferredObject*>(context);
    signed char* value = object->value;
    if (!value) return false;
    return *value == 1;
}
