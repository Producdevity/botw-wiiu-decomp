namespace {
struct InferredObject {
    unsigned char padding_0[8];
    unsigned char value;
};
}

extern "C" void fn_03700a38(InferredObject* object) {
    object->value |= 0x1u;
}
