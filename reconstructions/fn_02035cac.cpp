namespace {
struct InferredObject {
    unsigned char padding_0[4];
    unsigned short value;
};
}

extern "C" void fn_02035cac(InferredObject* object) {
    object->value |= 0x4u;
}
