namespace {
struct InferredObject {
    unsigned char padding[ 1385 ];
    unsigned char value;
};
}

extern "C" bool fn_03283de8(const InferredObject* object) {
    return object->value == 3u;
}
