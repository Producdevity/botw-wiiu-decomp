namespace {
struct InferredObject {
    unsigned char value;
};
}

extern "C" unsigned int fn_034f2a94(const InferredObject* object) {
    return (static_cast<unsigned int>(object->value) & 0x1u);
}
