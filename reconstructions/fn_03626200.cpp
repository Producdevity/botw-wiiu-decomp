namespace {
struct InferredObject { unsigned char padding[20]; signed char* value; };
}

extern "C" bool fn_03626200(const InferredObject* object) {
    signed char* value = object->value;
    if (!value) return false;
    return *value == 1;
}
