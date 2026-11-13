namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" void fn_039ad644(InferredObject* object) {
    object->value += 4u;
}
