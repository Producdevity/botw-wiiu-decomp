namespace {
struct InferredObject {
    unsigned char padding_0[268];
    unsigned char value;
};
}

extern "C" void fn_02f30cd8(InferredObject* object) {
    object->value |= 0x20u;
}
