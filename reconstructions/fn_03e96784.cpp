namespace {
struct WordVector {
    const unsigned* words;
    int size;
};
}

extern "C" int fn_03e96784(const void* vector, const unsigned* key, int begin, int end) {
    const WordVector* view = static_cast<const WordVector*>(vector);
    if (end < 0) {
        end = view->size;
    }
    for (int i = begin; i < end; ++i) {
        if (view->words[i] == *key) {
            return i;
        }
    }
    return -1;
}
