namespace {
struct InferredObject {
    unsigned char padding_0[100];
    unsigned int value;
};
}

extern "C" void fn_02eab37c(InferredObject* object) {
    object->value += 1u;
}
