namespace {
struct InferredObject {
    unsigned char padding_0[452];
    unsigned int value;
};
}

extern "C" void fn_030ef4b4(InferredObject* object) {
    object->value += 1u;
}
