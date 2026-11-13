namespace {
struct InferredObject {
    unsigned char padding_0[24];
    unsigned char value;
};
}

extern "C" void fn_0384027c(InferredObject* object) {
    object->value |= 0x1u;
}
