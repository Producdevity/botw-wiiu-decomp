namespace {
struct InferredObject {
    unsigned char padding_0[1840];
    unsigned int value;
};
}

extern "C" void fn_03202390(InferredObject* object) {
    object->value |= 0x4u;
}
