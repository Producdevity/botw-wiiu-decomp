struct GpuBufferView {
    char* base;
    unsigned int offset;
};

// Coreinit DCFlushRangeNoSync.
extern "C" void fn_0434ac38(void* address, unsigned int size);

extern "C" void fn_03a4d724(GpuBufferView* view, unsigned int size) {
    if (view->base == 0) {
        return;
    }
    fn_0434ac38(view->base + view->offset, size);
}
