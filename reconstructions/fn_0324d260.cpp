namespace {
struct InferredObject {
    unsigned char value;
};
}

extern "C" unsigned int fn_0324d260(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 4) & 0x1u);
}
