struct IndexedHandle {
    void* target;
    int index;
};

extern "C" bool fn_03473414(const IndexedHandle* handle) {
    return handle->target != 0 && handle->index != -1;
}
