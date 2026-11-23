extern "C" void fn_03b67478(char *self, unsigned index, int first, int second) {
    if (index >= 8)
        return;
    *(int *)(self + index * 4 + 5932) = second;
    *(int *)(self + index * 4 + 5892) = first;
}
