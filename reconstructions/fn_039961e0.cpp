namespace {
struct Source {
    int first;
    unsigned short second;
};
}

extern "C" void fn_039961e0(int* arg0, unsigned short* arg1, void* arg2) {
    Source* source = (Source*)arg2;
    if (arg0 != 0) {
        *arg0 = source->first;
    }
    if (arg1 != 0) {
        *arg1 = source->second;
    }
}
