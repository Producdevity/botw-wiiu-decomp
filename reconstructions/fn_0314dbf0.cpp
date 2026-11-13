namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" unsigned int fn_0314dbf0(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 1) & 0x1u);
}
