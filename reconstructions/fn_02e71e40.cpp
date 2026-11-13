namespace {
struct InferredValue { unsigned char padding[28]; float value; };
struct InferredObject { unsigned char padding[816]; InferredValue* volatile source; float first; float second; };
}

extern "C" void fn_02e71e40(void* context, void* sourceContext) {
    InferredObject* object = static_cast<InferredObject*>(context);
    InferredValue* source = static_cast<InferredValue*>(sourceContext);
    object->source = source;
    if (!source) return;
    float first = source->value;
    InferredValue* current = object->source;
    object->first = first;
    object->second = current->value;
}
