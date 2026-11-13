namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" unsigned int fn_0314eeac(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 5) & 0x1u);
}
