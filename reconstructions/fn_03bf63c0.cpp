namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" unsigned int fn_03bf63c0(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 17) & 0x3u);
}
