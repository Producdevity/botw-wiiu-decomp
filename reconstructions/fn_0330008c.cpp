namespace {
struct InferredObject {
    unsigned char padding_0[54];
    unsigned short value;
};
}

extern "C" void fn_0330008c(InferredObject* object) {
    object->value |= 0x80u;
}
