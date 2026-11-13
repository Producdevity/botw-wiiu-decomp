namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" void fn_033d3318(InferredObject* object) {
    object->value += 64u;
}
