namespace {
struct InferredObject {
    unsigned char padding_0[52];
    unsigned int value;
};
}

extern "C" void fn_03bd5c10(InferredObject* object) {
    object->value += 1u;
}
