namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" unsigned int fn_03bf6b7c(const InferredObject* object) {
    return (static_cast<unsigned int>(object->value) & 0x7u);
}
