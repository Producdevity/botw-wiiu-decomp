namespace {
struct InferredObject {
    unsigned char value;
};
}

extern "C" unsigned int fn_034f546c(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 2) & 0x1u);
}
