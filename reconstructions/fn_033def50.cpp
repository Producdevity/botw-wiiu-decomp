namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" void fn_033def50(InferredObject* object) {
    object->value += 4u;
}
