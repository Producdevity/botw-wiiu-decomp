namespace {
struct InferredObject {
    unsigned char padding_0[280];
    unsigned short value;
};
}

extern "C" void fn_0378f1b0(InferredObject* object, unsigned int bits) {
    object->value = static_cast<unsigned short>(object->value | bits);
}
