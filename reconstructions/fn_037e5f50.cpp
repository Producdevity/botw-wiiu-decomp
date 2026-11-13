namespace {
struct InferredObject {
    unsigned char value;
};
}

extern "C" unsigned int fn_037e5f50(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 1) & 0x1u);
}
