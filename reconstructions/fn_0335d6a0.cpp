namespace {
struct InferredObject {
    unsigned char padding_0[176];
    unsigned int value;
};
}

extern "C" void fn_0335d6a0(InferredObject* object) {
    object->value |= 0x20u;
}
