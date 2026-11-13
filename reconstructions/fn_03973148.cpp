namespace {
struct InferredObject {
    unsigned short value;
};
}

extern "C" unsigned int fn_03973148(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 8) & 0x1u);
}
