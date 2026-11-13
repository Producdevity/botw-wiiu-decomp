namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" void fn_033defdc(InferredObject* object) {
    object->value += 4u;
}
