struct GpuBufferView {
    char* base;
    unsigned int offset;
};

// Coreinit DCFlushRangeNoSync.
extern "C" void fn_0434ac40(void* address, unsigned int size);

extern "C" void fn_03a4d73c(GpuBufferView* view, unsigned int size) {
    if (view->base == 0) {
        return;
    }
    fn_0434ac40(view->base + view->offset, size);
}
