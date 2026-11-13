namespace {
struct InferredObject {
    unsigned char padding_0[8];
    unsigned int value;
};
}

extern "C" void fn_037f61e8(InferredObject* object) {
    object->value |= 0x10000u;
}
