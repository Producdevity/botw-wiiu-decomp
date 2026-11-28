namespace {
struct Counters {
    int first;
    int second;
};
}

extern "C" void fn_035bd9bc(void *object, unsigned int kind) {
    Counters *counters = (Counters *) object;
    switch (kind) {
    case 1:
        counters->first++;
        return;
    case 2:
        counters->second++;
        return;
    }
}
