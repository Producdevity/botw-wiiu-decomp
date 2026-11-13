namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" void fn_033def6c(InferredObject* object) {
    object->value += 4u;
}
