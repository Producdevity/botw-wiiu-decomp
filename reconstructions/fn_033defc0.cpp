namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" void fn_033defc0(InferredObject* object) {
    object->value += 4u;
}
