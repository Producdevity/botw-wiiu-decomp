namespace {
struct InferredObject {
    unsigned char padding_0[10];
    unsigned short value;
};
}

extern "C" void fn_034f1a08(InferredObject* object) {
    object->value += 1u;
}
