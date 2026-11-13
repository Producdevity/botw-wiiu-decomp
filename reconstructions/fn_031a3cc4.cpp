namespace {
struct InferredObject {
    unsigned char padding_0[184];
    unsigned int value;
};
}

extern "C" void fn_031a3cc4(InferredObject* object) {
    object->value |= 0x80u;
}
