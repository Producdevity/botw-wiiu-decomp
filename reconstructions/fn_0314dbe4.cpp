namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" unsigned int fn_0314dbe4(const InferredObject* object) {
    return (static_cast<unsigned int>(object->value) & 0x1u);
}
