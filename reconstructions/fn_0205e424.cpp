namespace {
struct InferredObject {
    unsigned char padding_0[128];
    unsigned int value;
};
}

extern "C" void fn_0205e424(InferredObject* object) {
    object->value = (static_cast<unsigned int>(object->value) & 0xffffff7fu);
}
