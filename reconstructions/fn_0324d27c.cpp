namespace {
struct InferredObject {
    unsigned char value;
};
}

extern "C" unsigned int fn_0324d27c(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 5) & 0x7u);
}
