namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" void fn_0377a568(InferredObject* object) {
    object->value += 20u;
}
