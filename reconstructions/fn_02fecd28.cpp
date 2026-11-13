namespace {
struct InferredObject {
    unsigned char padding[ 7912 ];
    unsigned int value;
};
}

extern "C" bool fn_02fecd28(const InferredObject* object) {
    return object->value == 3u;
}
