namespace {
struct InferredObject {
    unsigned char padding_0[8];
    unsigned char value;
};
}

extern "C" unsigned int fn_037de398(const InferredObject* object) {
    return (static_cast<unsigned int>(object->value) & 0x1u);
}
