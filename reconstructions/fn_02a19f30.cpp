namespace {
struct InferredObject {
    unsigned char padding_0[2684];
    unsigned int value;
};
}

extern "C" void fn_02a19f30(InferredObject* object) {
    object->value |= 0x20u;
}
