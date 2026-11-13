namespace {
struct InferredObject {
    unsigned char padding_0[100];
    unsigned int value;
};
}

extern "C" void fn_03595858(InferredObject* object) {
    object->value |= 0xcu;
}
