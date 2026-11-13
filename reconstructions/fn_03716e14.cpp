namespace {
struct InferredObject { unsigned char padding[88]; float first; float second; void* firstPointer; void* secondPointer; };
}

extern "C" void fn_03716e14(void* context, void* firstPointer, void* secondPointer, float first, float second) {
    InferredObject* object = static_cast<InferredObject*>(context);
    if (object->firstPointer != 0) return;
    object->secondPointer = secondPointer;
    object->first = first;
    object->firstPointer = firstPointer;
    object->second = second;
}
