namespace {
struct InferredObject {
    unsigned char padding_0[352];
    unsigned int value;
};
}

extern "C" void fn_0340a748(InferredObject* object) {
    object->value |= 0x10000u;
}
