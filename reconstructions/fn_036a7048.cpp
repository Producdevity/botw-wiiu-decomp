namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" void fn_036a7048(InferredObject* object, unsigned int bits) {
    object->value = static_cast<unsigned int>(object->value | bits);
}
