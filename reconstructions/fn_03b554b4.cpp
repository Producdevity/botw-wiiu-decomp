namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" void fn_03b554b4(InferredObject* object) {
    object->value += 216u;
}
