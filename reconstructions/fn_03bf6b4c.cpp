namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" unsigned int fn_03bf6b4c(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 1) & 0x1u);
}
