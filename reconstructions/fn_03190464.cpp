extern "C" void fn_03190464(int index, int count, int *previous, int *next, int *current, int *following) {
    int nextIndex;

    if (index == 0) {
        *previous = 0;
        *next = 1;
        *current = 0;
        *following = 2;
        return;
    }
    nextIndex = index + 1;
    *previous = index - 1;
    *next = nextIndex;
    *current = index;
    if (index < count - 1) {
        nextIndex = index + 2;
    }
    *following = nextIndex;
}
