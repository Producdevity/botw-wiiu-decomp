namespace {
struct InferredObject {
    unsigned char padding_0[12];
    unsigned char value;
};
}

extern "C" void fn_03a4d604(InferredObject* object) {
    object->value |= 0x1u;
}
