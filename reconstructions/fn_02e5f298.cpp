namespace {
struct InferredObject {
    unsigned char padding_0[313];
    unsigned char value;
};
}

extern "C" void fn_02e5f298(InferredObject* object) {
    object->value |= 0x1u;
}
