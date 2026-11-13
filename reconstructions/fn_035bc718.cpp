namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" void fn_035bc718(InferredObject* object, unsigned int bits) {
    object->value = static_cast<unsigned int>(object->value | bits);
}
