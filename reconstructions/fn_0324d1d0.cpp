namespace {
struct InferredObject {
    unsigned char value;
};
}

extern "C" unsigned int fn_0324d1d0(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 1) & 0x1u);
}
