namespace {
struct InferredObject {
    unsigned char padding[ 40 ];
    unsigned int value;
};
}

extern "C" bool fn_029fb7fc(const InferredObject* object) {
    return object->value == 3u;
}
