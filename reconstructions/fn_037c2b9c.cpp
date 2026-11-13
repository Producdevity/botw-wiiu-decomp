namespace {
struct InferredObject {
    unsigned char padding_0[376];
    unsigned int value;
};
}

extern "C" void fn_037c2b9c(InferredObject* object) {
    object->value += 1u;
}
