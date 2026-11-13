namespace {
struct InferredObject {
    unsigned char padding_0[16];
    unsigned int value;
};
}

extern "C" void fn_034bfbd0(InferredObject* object) {
    object->value |= 0x2000000u;
}
