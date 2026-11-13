namespace {
struct InferredObject {
    unsigned char padding_0[16];
    unsigned int value;
};
}

extern "C" void fn_034bfbe0(InferredObject* object) {
    object->value = (static_cast<unsigned int>(object->value) & 0xfdffffffu);
}
