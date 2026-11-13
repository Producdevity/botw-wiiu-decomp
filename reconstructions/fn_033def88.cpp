namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" void fn_033def88(InferredObject* object) {
    object->value += 4u;
}
