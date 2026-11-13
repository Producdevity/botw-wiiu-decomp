namespace {
struct InferredObject {
    unsigned char padding_0[96];
    unsigned short value;
};
}

extern "C" unsigned int fn_0318ada0(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 4) & 0x1u);
}
