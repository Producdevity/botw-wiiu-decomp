namespace {
struct InferredObject {
    unsigned char padding_0[54];
    unsigned short value;
};
}

extern "C" void fn_032ffb74(InferredObject* object) {
    object->value |= 0x20u;
}
