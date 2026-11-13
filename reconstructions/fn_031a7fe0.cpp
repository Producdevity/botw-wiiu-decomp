namespace {
struct InferredObject {
    unsigned char padding_0[356];
    unsigned int value;
};
}

extern "C" void fn_031a7fe0(InferredObject* object) {
    object->value = (static_cast<unsigned int>(object->value) & 0xfffffffdu);
}
