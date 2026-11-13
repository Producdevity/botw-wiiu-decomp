namespace {
struct InferredObject {
    unsigned char padding_0[8];
    unsigned short value;
};
}

extern "C" void fn_03fa5530(InferredObject* object) {
    object->value |= 0x8000u;
}
