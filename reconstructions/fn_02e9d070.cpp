namespace {
struct InferredObject {
    unsigned char padding_0[4];
    unsigned int value;
};
}

extern "C" void fn_02e9d070(InferredObject* object) {
    object->value = (static_cast<unsigned int>(object->value) & 0xfffffffdu);
}
