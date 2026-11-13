namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" unsigned int fn_03bf6b70(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 3) & 0x1u);
}
