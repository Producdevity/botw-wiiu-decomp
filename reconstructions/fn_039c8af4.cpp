namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" void fn_039c8af4(InferredObject* object) {
    object->value += 4u;
}
