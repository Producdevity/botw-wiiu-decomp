namespace {
struct InferredObject {
    unsigned char padding_0[2061];
    unsigned char value;
};
}

extern "C" void fn_0317294c(InferredObject* object) {
    object->value |= 0x1u;
}
