namespace {
struct InferredObject {
    unsigned char padding_0[128];
    unsigned int value;
};
}

extern "C" void fn_0205e414(InferredObject* object) {
    object->value |= 0x80u;
}
