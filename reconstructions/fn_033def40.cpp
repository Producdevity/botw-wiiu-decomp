namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" void fn_033def40(InferredObject* object) {
    object->value += 4u;
}
