namespace {
struct InferredObject {
    unsigned char value;
};
}

extern "C" unsigned int fn_034f3144(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 1) & 0x1u);
}
