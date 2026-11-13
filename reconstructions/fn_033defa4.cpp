namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" void fn_033defa4(InferredObject* object) {
    object->value += 4u;
}
