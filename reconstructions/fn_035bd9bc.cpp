namespace {
struct Counters {
    int first;
    int second;
};
}

extern "C" void fn_035bd9bc(void *arg0, unsigned int arg1) {
    Counters *counters = (Counters *) arg0;
    switch (arg1) {
    case 1:
        counters->first++;
        return;
    case 2:
        counters->second++;
        return;
    }
}
