namespace {
struct InferredObject {
    unsigned char padding_0[2940];
    unsigned int value;
};
}

extern "C" void fn_0209c964(InferredObject* object) {
    object->value |= 0x800000u;
}
